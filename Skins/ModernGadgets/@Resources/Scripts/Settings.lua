-- MODERNGADGETS SETTINGS
-- By iamanai
-- Version 1.0.0
--

function Initialize()

  settingsFilePath = SKIN:GetVariable('settingsFilePath')

end

function Update() end

function DirectChange(varName, value)

  SKIN:Bang('!SetVariable', 'varName', 'value')
  SKIN:Bang('!WriteKeyValue', 'Variables', 'varName', 'value', settingsFilePath)

end
