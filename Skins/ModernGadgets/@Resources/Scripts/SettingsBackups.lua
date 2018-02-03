-- MODERNGADGETS SETTINGS BACKUP SCRIPT
--
-- This script makes backups of the settings files every two hours, which
-- prevents them from being lost when updating the suite.

debug = false

function Initialize()

  dofile(SKIN:GetVariable('scriptPath') .. 'Utilities.lua')

  fileNames = { 'GlobalSettings.inc',
                'CpuSettings.inc',
                'NetworkSettings.inc',
                'GpuSettings.inc',
                'DisksSettings.inc'  }


  backupsPath = SKIN:GetVariable('SETTINGSPATH') .. 'ModernGadgetsSettings\\'

  filesPath = SKIN:GetVariable('@') .. 'Settings\\'

  cpuMeterPath = SKIN:GetVariable('cpuMeterPath')
  networkMeterPath = SKIN:GetVariable('networkMeterPath')
  gpuMeterPath = SKIN:GetVariable('gpuMeterPathBase')
  disksMeterPath = SKIN:GetVariable('disksMeterPath')

end 

function Update() end

function ImportBackup()

  for i=1, 5 do
    local bTable = ReadIni(backupsPath .. fileNames[i])
    local sTable = ReadIni(filesPath .. fileNames[i])
    CrossCheck(bTable, sTable, filesPath .. fileNames[i])
  end
  
  SKIN:Bang('!RefreshGroup', 'MgImportRefresh')

  LogHelper('Imported settings backup', 'Notice')

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
    SKIN:Bang('!CommandMeasure', 'MeasureCreateBackup', 'Run')
  else
    SKIN:Bang('!Hide')
    SKIN:Bang('!ShowMeterGroup', 'Essentials')
    SKIN:Bang('!ShowMeterGroup', 'ImportBackupPrompt')
    SKIN:Bang('!SetOption', 'BackgroundHeightAdjuster', 'Y', 'R')
    SKIN:Bang('!UpdateMeter', 'BackgroundHeightAdjuster')
    SKIN:Bang('!UpdateMeterGroup', 'Essentials')
    SKIN:Bang('!Redraw')
    SKIN:Bang('!ShowFade')
    file:close()
  end
  
end

-- parses a INI formatted text file into a 'Table[Section][Key] = Value' table
function ReadIni(inputfile)
   local file = assert(io.open(inputfile, 'r'), 'Unable to open ' .. inputfile)
   local tbl, num, section = {}, 0

   for line in file:lines() do
      num = num + 1
      if not line:match('^%s-;') then
         local key, command = line:match('^([^=]+)=(.+)')
         if line:match('^%s-%[.+') then
            section = line:match('^%s-%[([^%]]+)')
            if section == '' or not section then
               section = nil
               LogHelper('Empty section name found in ' .. inputfile, 'Debug')
            end
            if not tbl[section] then tbl[section] = {} end
         elseif key and command and section then
            tbl[section][key:match('^%s*(%S*)%s*$')] = command:match('^%s*(.-)%s*$'):gsub('#(.-)#', '#\*%1\*#')
         elseif #line > 0 and section and not key or command then
            LogHelper(num .. ': Invalid property or value.', 'Debug')
         end
      end
   end

   file:close()
   if not section then LogHelper('No sections found in ' .. inputfile, 'Debug') end
   
   return tbl
end