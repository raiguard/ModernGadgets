-- LoadGadgets.lua
-- raiguard
-- v1.0.0
--
-- This script reads the Rainmeter.ini file, and determines whether or not the gadgets are loaded

debug = true

function Initialize()

	filePath = SKIN:GetVariable('SETTINGSPATH') .. "Rainmeter.ini"
	toggleOnImg = SKIN:GetVariable('toggleOnImg')
	toggleOffImg = SKIN:GetVariable('toggleOffImg')

	iniTable = ReadIni(filePath)
	SetVariable('cpuLoaded', iniTable['ModernGadgets\\CPU']['Active'])
	SetVariable('networkLoaded', iniTable['ModernGadgets\\Network']['Active'])
	SetVariable('gpuLoaded', iniTable['ModernGadgets\\GPU']['Active'])
	SetVariable('disksLoaded', iniTable['ModernGadgets\\Disks']['Active'])

end

function Update() end

function ToggleGadget(state, gadget)

	if iniTable['ModernGadgets\\' .. gadget]['Active'] == '1' then
		SetVariable(gadget .. 'Loaded', 0)
		SKIN:Bang('!DeactivateConfig', 'ModernGadgets\\' .. gadget)
	else
		SetVariable(gadget .. 'Loaded', 1)
		SKIN:Bang('!ActivateConfig', 'ModernGadgets\\' .. gadget)
	end

	SKIN:Bang('!UpdateMeterGroup', 'GadgetToggles')
	SKIN:Bang('!Redraw')

	SKIN:Bang('!Refresh')

end

function GetToggleImage(state)

	if state == 1 then return toggleOnImg
	elseif state == 0 then return toggleOffImg
	end

end

-- just for ease of use
function SetVariable(name, parameter)

	SKIN:Bang('!SetVariable', name, parameter)
	SKIN:Bang('!WriteKeyValue', 'Variables', name, parameter)

end

-- parses a INI formatted text file into a 'Table[Section][Key] = Value' table
function ReadIni(inputfile)
	local file = assert(io.open(inputfile, 'r'), 'Unable to open ' .. inputfile)
	local tbl, section = {}
  local num = 0
	for line in file:lines() do
		num = num + 1
		if not line:match('^%s;') then
			local key, command = line:match('^([^=]+)=(.+)')
			if line:match('^%s-%[.+') then
				section = line:match('^%s-%[([^%]]+)')
        		-- LogHelper(section, 'Debug')
				if not tbl[section] then tbl[section] = {} end
			elseif key and command and section then
        		-- LogHelper(key .. '=' .. command, 'Debug')
				tbl[section][key:match('(%S*)%s*$')] = command:match('^s*(.-)%s*$')
			elseif #line > 0 and section and not key or command then
				LogHelper(num .. ': Invalid property or value.', Error)
			end
		end
	end
	if not section then print('No sections found in ' .. inputfile) end
	file:close()
	return tbl
end

-- function to make logging messages less cluttered
function LogHelper(message, type)

  	if debug == true then
    	SKIN:Bang("!Log", message, type)
  	elseif type ~= 'Debug' then
  		SKIN:Bang("!Log", message, type)
	end

end