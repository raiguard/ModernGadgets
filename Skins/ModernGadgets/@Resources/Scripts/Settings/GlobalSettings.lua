-- MODERNGADGETS GLOBAL SETTINGS SCRIPT
-- By iamanai
--
-- Consists of hard-coded functions to change settigns in all gadgets simultaneously
--

function Initialize()

  cpuMeterConfig = SKIN:GetVariable('cpuMeterConfig')
  networkMeterConfig = SKIN:GetVariable('networkMeterConfig')
  gpuMeterConfig = SKIN:GetVariable('gpuMeterConfig')
  disksMeterConfig = SKIN:GetVariable('disksMeterConfig')
  globalSettingsPath = SKIN:GetVariable('globalSettingsPath')
  styleSheetPath = SKIN:GetVariable('globalSettingsPath')

end

function Update() end

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
