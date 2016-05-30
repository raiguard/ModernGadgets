-- MODERNGADGETS SETTINGS
-- By iamanai
-- Version 1.0.0
--

function Initialize() end

function Update() end

function DirectChange(varName, value, configPath)

  SKIN:Bang('!SetVariable', 'varName', 'value')
  SKIN:Bang('!WriteKeyValue', 'Variables', 'varName', 'value', settingsFilePath)

end

function ToggleChange(varName, currentValue, filePath, configPath, boxMeterName)

  if (currentValue == 1) then
    SKIN:Bang('!SetVariable', varName, 0, configPath)
    SKIN:Bang('!WriteKeyValue', 'Variables', varName, 0, filePath)
    SKIN:Bang('!SetOption', boxMeterName, 'ImageName', '#*imgPath*#CheckboxOff.png')
    SKIN:Bang('!WriteKeyValue', boxMeterName, 'ImageName', '#*imgPath*#CheckboxOff.png')
    SKIN:Bang('!SetOption', boxMeterName, 'LeftMouseUpAction', '[!CommandMeasure MeasureSettingsScript \"ToggleChange(\'' .. varName .. '\', #*current)]')
  else
    SKIN:Bang('!SetVariable', varName, 1, configPath)
    SKIN:Bang('!WriteKeyValue', 'Variables', varName, 1, filePath)
  end

end
