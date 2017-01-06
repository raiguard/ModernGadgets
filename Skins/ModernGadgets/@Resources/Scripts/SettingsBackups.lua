-- MODERNGADGETS SETTINGS BACKUP SCRIPT
--
-- This script makes backups of the settings files every two hours, which
-- prevents them from being lost when updating the suite.

isDbg = false

function Initialize()

  fileNames = { 'GlobalSettings.inc',
                'CpuSettings.inc',
                'NetworkSettings.inc',
                'GpuSettings.inc',
                'DisksSettings.inc'  }


  backupsPath = SKIN:GetVariable('SETTINGSPATH') .. 'ModernGadgetsSettings\\'

  filesPath = SKIN:GetVariable('@') .. 'Settings\\'

  cpuMeterConfig = SKIN:GetVariable('cpuMeterConfig')
  networkMeterConfig = SKIN:GetVariable('networkMeterConfig')
  gpuMeterConfig = SKIN:GetVariable('gpuMeterConfig')
  disksMeterConfig = SKIN:GetVariable('disksMeterConfig')

end

function Update() end

function ImportBackup()

  -- local bTable = ReadIni(backupsPath .. fileNames[2])

  for i=1, 5 do
    local bTable = ReadIni(backupsPath .. fileNames[i])
    local sTable = ReadIni(filesPath .. fileNames[i])
    CrossCheck(bTable, sTable, filesPath .. fileNames[i])
  end

  -- update all gadgets
  SKIN:Bang('!Refresh', 'ModernGadgets\\CPU')
  SKIN:Bang('!Refresh', 'ModernGadgets\\Network')
  SKIN:Bang('!Refresh', 'ModernGadgets\\GPU')
  SKIN:Bang('!Refresh', 'ModernGadgets\\Disks')

  SKIN:Bang('!CommandMeasure', 'MeasureCpuSettingsScript', 'UpdateSettings()', cpuMeterConfig)
  SKIN:Bang('!CommandMeasure', 'MeasureNetworkSettingsScript', 'UpdateSettings()', networkMeterConfig)

  LogHelper('Imported settings backup', 'Notice')

  -- SKIN:Bang('!Refresh')

end

function CrossCheck(bTable, sTable, filePath)

  for i,v in pairs(bTable) do
    if type(v) == 'table' then
      for a,b in pairs(v) do
        if sTable[i][a] then
          SKIN:Bang('!WriteKeyValue', i, a, b, filePath)
        else
          LogHelper('Key \'' .. a .. '\' does not exist in local', 'Debug')
        end
      end
    end
  end

end

function CheckForBackup()

  local file = io.open(backupsPath .. fileNames[1])
  if file == nil then
    SKIN:Bang('!ActivateConfig', 'ModernGadgets\\Config\\GadgetManager', 'Config.ini')
  else
    SKIN:Bang('!Hide')
    SKIN:Bang('!ShowMeterGroup', 'Essentials')
    SKIN:Bang('!ShowMeterGroup', 'ImportBackupPrompt')
    SKIN:Bang('!Redraw')
    SKIN:Bang('!ShowFade')
  end
  io.close(file)
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
				-- print(num .. ': Invalid property or value.')
			end
		end
	end
	if not section then print('No sections found in ' .. inputfile) end
	file:close()
	return tbl
end

-- function to make logging messages less cluttered
function LogHelper(message, type)

  if isDbg == true then
    SKIN:Bang("!Log", message, type)
  elseif type ~= 'Debug' then
  	SKIN:Bang("!Log", message, type)
	end

end

function TestCrossCheck(bTable, sTable, filePath)
  for i,v in pairs(bTable) do
    if type(v) == 'table' then
      for a,b in pairs(v) do
        print(a .. '=' .. b)
      end
    else
      print(i .. '=' .. v)
    end
  end
end
