-- MODERNGADGETS NETWORK SETTINGS SCRIPT
-- By iamanai
--
-- Consists of hard-coded functions to change settigns in Network Meter
--

function Initialize()

  networkSettingsPath = SKIN:GetVariable('networkSettingsPath')
  networkMeterPath = SKIN:GetVariable('networkMeterPath')
  networkMeterConfig = SKIN:GetVariable('networkMeterConfig')

end

function Update() end

function ToggleCensorExternalIp(currentValue)

  if currentValue == 1 then
    SKIN:Bang('!SetVariable', 'censorExternalIp', '0')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'censorExternalIp', '0', networkSettingsPath)
    SKIN:Bang('!SetOption', 'ExternalIpValueString', 'Text', '%1', networkMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'ExternalIpValueString', 'Text', '%1', networkMeterPath)
  else
    SKIN:Bang('!SetVariable', 'censorExternalIp', '1')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'censorExternalIp', '1', networkSettingsPath)
    SKIN:Bang('!SetOption', 'ExternalIpValueString', 'Text', 'CENSORED', networkMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'ExternalIpValueString', 'Text', 'CENSORED', networkMeterPath)
  end

  SKIN:Bang('!UpdateMeter', 'ExternalIpValueString', networkMeterConfig)
  SKIN:Bang('!Redraw', networkMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'CensorExternalIp')
  SKIN:Bang('!Redraw')

end

function TogglePeakNetworkUsage(currentValue, showLineGraph)

  if currentValue == 1 then
    SKIN:Bang('!SetVariable', 'showPeakNetworkUsage', '0')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'showPeakNetworkUsage', '0', networkSettingsPath)
    SKIN:Bang('!HideMeter', 'GraphPeakString', networkMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'GraphPeakString', 'Hidden', '1', networkMeterPath)
  elseif showLineGraph == 1 then
    SKIN:Bang('!SetVariable', 'showPeakNetworkUsage', '1')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'showPeakNetworkUsage', '1', networkSettingsPath)
    SKIN:Bang('!ShowMeter', 'GraphPeakString', networkMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'GraphPeakString', 'Hidden', '0', networkMeterPath)
  end

  SKIN:Bang('!UpdateMeter', 'GraphPeakString', networkMeterConfig)
  SKIN:Bang('!Redraw', networkMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'ShowPeakNetworkUsage')
  SKIN:Bang('!Redraw')

end

function ToggleSpeedtestButton(currentValue)

  if currentValue == 1 then
    SKIN:Bang('!SetVariable', 'showSpeedtestButton', '0')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'showSpeedtestButton', '0', networkSettingsPath)
    SKIN:Bang('!SetOption', 'SpeedtestButton', 'Group', 'Disabled', networkMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'SpeedtestButton', 'Group', 'Disabled', networkMeterPath)
  else
    SKIN:Bang('!SetVariable', 'showSpeedtestButton', '1')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'showSpeedtestButton', '1', networkSettingsPath)
    SKIN:Bang('!SetOption', 'SpeedtestButton', 'Group', 'ConfigButton', networkMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'SpeedtestButton', 'Group', 'ConfigButton', networkMeterPath)
  end

  SKIN:Bang('!UpdateMeter', 'SpeedtestButton', networkMeterConfig)
  SKIN:Bang('!Redraw', networkMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'showSpeedtestButton')
  SKIN:Bang('!Redraw')

end

function ToggleTrafficInBytes(currentValue)

  if currentValue == 1 then
    SKIN:Bang('!SetVariable', 'showTrafficInBytes', '0')
    SKIN:Bang('!SetVariable', 'showTrafficInBytes', '0', networkMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'Variables', 'showTrafficInBytes', '0', networkSettingsPath)
    SKIN:Bang('!SetOption', 'NetOutCurrentString', 'Text', '#textNetOut#bit/s', networkMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'NetOutCurrentString', 'Text', '#textNetOut#bit/s', networkMeterPath)
    SKIN:Bang('!SetOption', 'NetInCurrentString', 'Text', '#textNetIn#bit/s', networkMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'NetInCurrentString', 'Text', '#textNetIn#bit/s', networkMeterPath)
    SKIN:Bang('!EnableMeasureGroup', 'NetBits', networkMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'MeasureNetInBitsCalc', 'Disabled', '0', networkMeterPath)
    SKIN:Bang('!WriteKeyValue', 'MeasureNetOutBitsCalc', 'Disabled', '0', networkMeterPath)
  else
    SKIN:Bang('!SetVariable', 'showTrafficInBytes', '1')
    SKIN:Bang('!SetVariable', 'showTrafficInBytes', '1', networkMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'Variables', 'showTrafficInBytes', '1', networkSettingsPath)
    SKIN:Bang('!SetOption', 'NetOutCurrentString', 'Text', '#textNetOut#B/sec', networkMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'NetOutCurrentString', 'Text', '#textNetOut#B/sec', networkMeterPath)
    SKIN:Bang('!SetOption', 'NetInCurrentString', 'Text', '#textNetIn#B/sec', networkMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'NetInCurrentString', 'Text', '#textNetIn#B/sec', networkMeterPath)
    SKIN:Bang('!DisableMeasureGroup', 'NetBits', networkMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'MeasureNetInBitsCalc', 'Disabled', '1', networkMeterPath)
    SKIN:Bang('!WriteKeyValue', 'MeasureNetOutBitsCalc', 'Disabled', '1', networkMeterPath)
  end

  SKIN:Bang('!UpdateMeasureGroup', 'NetInOut', networkMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'NetInOut', networkMeterConfig)
  SKIN:Bang('!Redraw', networkMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'ShowInBytes')
  SKIN:Bang('!Redraw')

end

function ToggleLineGraph(currentValue, showPeakNetworkUsage)

  if currentValue == 1 then
    SKIN:Bang('!SetVariable', 'showLineGraph', '0')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'showLineGraph', '0', networkSettingsPath)
    SKIN:Bang('!HideMeterGroup', 'LineGraph', networkMeterConfig)
    SKIN:Bang('!HideMeter', 'GraphPeakString', networkMeterConfig)
    SKIN:Bang('!SetOption', 'GraphLines', 'Y', '-2R', networkMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'GraphLines', 'Y', '-2R', networkMeterPath)
    SKIN:Bang('!WriteKeyValue', 'GraphLines', 'Hidden', '1', networkMeterPath)
    SKIN:Bang('!WriteKeyValue', 'GraphPeakString', 'Hidden', '1', networkMeterPath)
    SKIN:Bang('!WriteKeyValue', 'GraphBorder', 'Hidden', '1', networkMeterPath)
  else
    SKIN:Bang('!SetVariable', 'showLineGraph', '1')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'showLineGraph', '1', networkSettingsPath)
    SKIN:Bang('!ShowMeterGroup', 'LineGraph', networkMeterConfig)
    if showPeakNetworkUsage == 1 then SKIN:Bang('!ShowMeter', 'GraphPeakString', networkMeterConfig) end
    SKIN:Bang('!SetOption', 'GraphLines', 'Y', 'R', networkMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'GraphLines', 'Y', 'R', networkMeterPath)
    SKIN:Bang('!WriteKeyValue', 'GraphLines', 'Hidden', '0', networkMeterPath)
    SKIN:Bang('!WriteKeyValue', 'GraphPeakString', 'Hidden', '0', networkMeterPath)
    SKIN:Bang('!WriteKeyValue', 'GraphBorder', 'Hidden', '0', networkMeterPath)
  end

  SKIN:Bang('!UpdateMeterGroup', 'LineGraph', networkMeterConfig)
  SKIN:Bang('!UpdateMeter', 'GraphPeakString', networkMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'Background', networkMeterConfig)
  SKIN:Bang('!Redraw', networkMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'ShowLineGraph')
  SKIN:Bang('!Redraw')

end
