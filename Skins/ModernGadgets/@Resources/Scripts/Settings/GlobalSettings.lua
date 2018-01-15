function Initialize()

  dofile(SKIN:GetVariable('scriptPath') .. 'Utilities.lua')
  cpuMeterConfig = SKIN:GetVariable('cpuMeterConfig')
  networkMeterConfig = SKIN:GetVariable('networkMeterConfig')
  gpuMeterConfig = SKIN:GetVariable('gpuMeterConfig')
  disksMeterConfig = SKIN:GetVariable('disksMeterConfig')
  setupSkinConfig = SKIN:GetVariable('setupSkinConfig')
  globalSettingsPath = SKIN:GetVariable('globalSettingsPath')
  styleSheetPath = SKIN:GetVariable('globalSettingsPath')

end

function Update() end

function GetTempIcon(currentValue)

  if currentValue == 'C' then return '[#toggleOff]'
  else return '[#toggleOn]' end

end

function ToggleBgBorder(currentValue)

  currentValue = tonumber(currentValue)

  if currentValue == 0 then
    SKIN:Bang('!WriteKeyValue', 'Variables', 'showBgBorder', '1', globalSettingsPath)
  else
    SKIN:Bang('!WriteKeyValue', 'Variables', 'showBgBorder', '0', globalSettingsPath)
  end

  SKIN:Bang('!RefreshGroup', 'ModernGadgets')

end

function ToggleLargeRowSpacing(currentValue)

  currentValue = tonumber(currentValue)

  if currentValue == 0 then
    SKIN:Bang('!WriteKeyValue', 'Variables', 'largeRowSpacing', '1', globalSettingsPath)
    SKIN:Bang('!WriteKeyValue', 'Variables', 'rowSpacing', '2', styleSheetPath)
  else
    SKIN:Bang('!WriteKeyValue', 'Variables', 'largeRowSpacing', '0', globalSettingsPath)
    SKIN:Bang('!WriteKeyValue', 'Variables', 'rowSpacing', '1', styleSheetPath)
  end

  SKIN:Bang('!RefreshGroup', 'ModernGadgets')

end

function ToggleTempUnits(currentValue)


  if currentValue == 'C' then
    SKIN:Bang('!WriteKeyValue', 'Variables', 'tempUnits', 'F', globalSettingsPath)
  else
    SKIN:Bang('!WriteKeyValue', 'Variables', 'tempUnits', 'C', globalSettingsPath)
  end

  SKIN:Bang('!RefreshGroup', 'ModernGadgets')

end

function ToggleLineGraphAa(currentValue)
  
  currentValue = tonumber(currentValue)
  
  if currentValue == 0 then
    SKIN:Bang('!WriteKeyValue', 'Variables', 'lineGraphAa', '1', globalSettingsPath)
  else
    SKIN:Bang('!WriteKeyValue', 'Variables', 'lineGraphAa', '0', globalSettingsPath)
  end
  
  SKIN:Bang('!RefreshGroup', 'ModernGadgets')
  
end

function ToggleNotifyUpdates(currentValue)

  currentValue = tonumber(currentValue)

  if currentValue == 0 then
    SetVariable('notifyUpdates', '1', globalSettingsPath, setupSkinConfig)
  else
    SetVariable('notifyUpdates', '0', globalSettingsPath, setupSkinConfig)
  end

  SKIN:Bang('!Refresh', setupSkinConfig)
  UpdateToggles()

end

function ToggleDevUpdates(currentValue)

  currentValue = tonumber(currentValue)

  if currentValue == 0 then
    SetVariable('devUpdates', '1', globalSettingsPath, setupSkinConfig)
    SetVariable('rVersionKey', 'dev', globalSettingsPath, setupSkinConfig)
  else
    SetVariable('devUpdates', '0', globalSettingsPath, setupSkinConfig)
    SetVariable('rVersionKey', 'stable', globalSettingsPath, setupSkinConfig)
  end

  SKIN:Bang('!Refresh', setupSkinConfig)
  UpdateToggles()

end

function ToggleAutoBackups(currentValue)

  currentValue = tonumber(currentValue)

  if currentValue == 0 then
    SKIN:Bang('!SetVariable', 'autoBackups', '1')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'autoBackups', '1', globalSettingsPath)
    SKIN:Bang('!SetOption', 'AutoBackupsButton', 'ImageName', '#*toggleOnImg*#')
    SKIN:Bang('!WriteKeyValue', 'AutoBackupsButton', 'ImageName', '#*toggleOnImg*#')
  else
    SKIN:Bang('!SetVariable', 'autoBackups', '0')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'autoBackups', '0', globalSettingsPath)
    SKIN:Bang('!SetOption', 'AutoBackupsButton', 'ImageName', '#*toggleOffImg*#')
    SKIN:Bang('!WriteKeyValue', 'AutoBackupsButton', 'ImageName', '#*toggleOffImg*#')
  end

  SKIN:Bang('!UpdateMeter', 'AutoBackupsButton')
  SKIN:Bang('!Redraw')
  SKIN:Bang('!Refresh', 'ModernGadgets\\Config\\Setup')

end
