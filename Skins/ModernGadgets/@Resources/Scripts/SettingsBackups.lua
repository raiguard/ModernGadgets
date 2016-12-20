-- MODERNGADGETS SETTINGS BACKUP SCRIPT
--
-- This script makes backups of the settings files after settings are changed, which
-- prevents them from being lost when updating the suite. After updating, this script
-- will copy the values from the backups back into the user settings files.

isDbg = true

function Initialize()

  fileNames = { 'ControlFile.inc',
                'GlobalSettings.inc',
                'CpuSettings.inc',
                'NetworkSettings.inc',
                'GpuSettings.inc',
                'DisksSettings.inc',
                'StyleSheet.inc'  }

  backupsPath = SKIN:GetVariable('SETTINGSPATH') .. 'ModernGadgetsSettings\\'

  filesPath = SKIN:GetVariable('@') .. 'Settings\\'

  LogHelper('Script Initialized', 'Debug')

end

function Update() end

-- function to make logging messages less cluttered
function LogHelper(message, type)

  if isDbg == true then
    SKIN:Bang("!Log", 'SettingsManagement.lua: ' .. message, type)
  elseif type ~= 'Debug' then
  	SKIN:Bang("!Log", 'SettingsManagement.lua: ' .. message, type)
	end

end
