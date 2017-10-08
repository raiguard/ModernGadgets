-- LoadSkin.lua
-- raiguard
-- v1.0.0
--
-- ------------------------------
-- This script reads the Rainmeter.ini file to determine whether or not certain skins are
-- loaded, then uses that information to set the image and action of that skin's toggle
-- button.
--
--
-- INSTRUCTIONS FOR USE:
-- Copy this file and paste it into your own suite, then create a Rainmeter script
-- measure pointing to this file.
--
-- The toggle meters themselves have two states: 'off' and 'on'. There are two kinds of
-- toggle meters you can have: image meters, and text meters using character reference
-- variables. In either case, you'll have to define 'toggleOff' and 'toggleOn' variables,
-- the values of which will be the respective images or CR variables.
--
-- A toggle button meter should look something like this:
--
-- [MeterToggleSkin]
-- Meter=Image
-- ImageName=[&MeasureScript:GetIcon('ToggledSkin')]
-- X=5
-- Y=5
-- W=31
-- H=20
-- LeftMouseUpAction=[!CommandMeasure MeasureScript "ToggleSkin('ToggledSkin')"]
-- DynamicVariables=1
-- Group=SkinToggles
--
-- Notice that the ImageName is using inline LUA to set the toggle image, requiring the use
-- of the DynamicVariables option. Replace 'ToggledSkin' with the config name of the skin you
-- wish to toggle. For example, if the skin is 'MySuite\MySkin\MySkin.ini', then use 'MySkin'
-- intead of 'ToggledSkin'. You should be able to do this for any skin you want, and it should
-- be infinitely expandable.

debug = true

function Initialize()

	filePath = SKIN:GetVariable('SETTINGSPATH') .. "Rainmeter.ini"
	rootConfig = SKIN:GetVariable('ROOTCONFIG') .. '\\'

	iniTable = ReadIni(filePath)

end

function Update() end

-- Toggles the specified config. When activating/deactivating the config in general, it will
-- always choose the first skin in the config. So if you have 'MyConfig' with 'First.ini' and
-- 'Second.ini', using ToggleConfig('MyConfig') will always load 'First.ini'.
--
-- Usage: LeftMouseUpAction=[!CommandMeasure MeasureScript "ToggleConfig('ConfigNameHere')"]
function ToggleConfig(config)

	config = rootConfig .. config
	local state = tonumber(iniTable[config]['Active'])
	LogHelper(state, 'Debug')

	if state > 0 then
		SKIN:Bang('!DeactivateConfig', config)
	else
		SKIN:Bang('!ActivateConfig', config)
	end

	iniTable = ReadIni(filePath)

	SKIN:Bang('!UpdateMeterGroup', 'SkinToggles')
	SKIN:Bang('!Redraw')

end

-- Toggles the specified skin. This allows you to load a specific skin in a config, rather
-- than always defaulting to the first one. It also lets you switch between different
-- skins within a config. The first parameter is the config name, second is the name of the
-- .INI file of the skin you wish to load (without the .INI), and the third is the spot in
-- the variants list that specific skin resides in.
--
-- Usage: LeftMouseUpAction=[!CommandMeasure MeasureScript "ToggleSkin('ConfigNameHere', 'VariantNameHere', 1"]
function ToggleSkin(config, skin, variant)
	if variant == nil then variant = -1 end
	config = rootConfig .. config
	skin = skin .. '.ini'
	local state = tonumber(iniTable[config]['Active'])

	LogHelper(config, 'Debug')
	LogHelper(skin, 'Debug')

	if state > 0 and state ~= variant then SKIN:Bang('!ActivateConfig', config, skin)
	else SKIN:Bang('!ToggleConfig', config, skin) end

	iniTable = ReadIni(filePath)

	SKIN:Bang('!UpdateMeterGroup', 'SkinToggles')
	SKIN:Bang('!Redraw')
end

function GetIcon(config, variant)

	if variant == nil then variant = -1 end
	config = rootConfig .. config
	local state = 0
	if iniTable[config] ~= nil then state = tonumber(iniTable[config]['Active']) end

	if state == variant then return '[#toggleOn]'
	elseif state > 0 and variant == -1 then return '[#toggleOn]'
	else return '[#toggleOff]' end

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