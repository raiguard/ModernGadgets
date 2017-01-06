-- MODERNGADGETS NETWORK SETTINGS SCRIPT
-- By iamanai
--
-- Consists of hard-coded functions to change settings in Network Meter
--

function Initialize()

  networkSettingsPath = SKIN:GetVariable('networkSettingsPath')
  networkMeterPath = SKIN:GetVariable('networkMeterPath')
  networkMeterConfig = SKIN:GetVariable('networkMeterConfig')

end

function Update() end

function ToggleCensorExternalIp(currentValue)

  currentValue = tonumber(currentValue)

  if currentValue == 0 then
    SKIN:Bang('!SetVariable', 'censorExternalIp', '1')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'censorExternalIp', '1', networkSettingsPath)
    SKIN:Bang('!SetOption', 'ExternalIpValueString', 'Text', 'CENSORED', networkMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'ExternalIpValueString', 'Text', 'CENSORED', networkMeterPath)

    SKIN:Bang('!SetOption', 'CensorExternalIpButton', 'ImageName', '#*imgPath*#Settings\\0a.png')
    SKIN:Bang('!WriteKeyValue', 'CensorExternalIpButton', 'ImageName', '#*imgPath*#Settings\\0a.png')
  else
    SKIN:Bang('!SetVariable', 'censorExternalIp', '0')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'censorExternalIp', '0', networkSettingsPath)
    SKIN:Bang('!SetOption', 'ExternalIpValueString', 'Text', '%1', networkMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'ExternalIpValueString', 'Text', '%1', networkMeterPath)
  end

  SKIN:Bang('!UpdateMeter', 'ExternalIpValueString', networkMeterConfig)
  SKIN:Bang('!Redraw', networkMeterConfig)

end

function ToggleSpeedtestButton(currentValue)

  currentValue = tonumber(currentValue)

  if currentValue == 0 then
    SKIN:Bang('!SetVariable', 'showSpeedtestButton', '1')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'showSpeedtestButton', '1', networkSettingsPath)
    SKIN:Bang('!SetOption', 'SpeedtestButton', 'Group', 'ConfigButton', networkMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'SpeedtestButton', 'Group', 'ConfigButton', networkMeterPath)
  else
    SKIN:Bang('!SetVariable', 'showSpeedtestButton', '0')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'showSpeedtestButton', '0', networkSettingsPath)
    SKIN:Bang('!SetOption', 'SpeedtestButton', 'Group', 'Disabled', networkMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'SpeedtestButton', 'Group', 'Disabled', networkMeterPath)
  end

  SKIN:Bang('!UpdateMeter', 'SpeedtestButton', networkMeterConfig)
  SKIN:Bang('!Redraw', networkMeterConfig)

end

function ToggleLineGraph(currentValue, showPeakNetworkUsage)

  currentValue = tonumber(currentValue)
  showPeakNetworkUsage = tonumber(showPeakNetworkUsage)

  if currentValue == 0 then
    SKIN:Bang('!SetVariable', 'showLineGraph', '1')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'showLineGraph', '1', networkSettingsPath)
    SKIN:Bang('!ShowMeterGroup', 'LineGraph', networkMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'GraphLines', 'Hidden', '0', networkMeterPath)
    SKIN:Bang('!WriteKeyValue', 'GraphBorder', 'Hidden', '0', networkMeterPath)

    if showPeakNetworkUsage == 1 then
      SKIN:Bang('!ShowMeter', 'GraphPeakString', networkMeterConfig)
      SKIN:Bang('!WriteKeyValue', 'GraphPeakString', 'Hidden', '0', networkMeterPath)
    end

  else
    SKIN:Bang('!SetVariable', 'showLineGraph', '0')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'showLineGraph', '0', networkSettingsPath)
    SKIN:Bang('!HideMeterGroup', 'LineGraph', networkMeterConfig)
    SKIN:Bang('!HideMeter', 'GraphPeakString', networkMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'GraphLines', 'Hidden', '1', networkMeterPath)
    SKIN:Bang('!WriteKeyValue', 'GraphPeakString', 'Hidden', '1', networkMeterPath)
    SKIN:Bang('!WriteKeyValue', 'GraphBorder', 'Hidden', '1', networkMeterPath)

  end

  SKIN:Bang('!UpdateMeterGroup', 'LineGraph', networkMeterConfig)
  SKIN:Bang('!UpdateMeter', 'GraphPeakString', networkMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'Background', networkMeterConfig)
  SKIN:Bang('!Redraw', networkMeterConfig)

end

function TogglePeakNetworkUsage(currentValue, showLineGraph)

  currentValue = tonumber(currentValue)
  showLineGraph = tonumber(showLineGraph)

  if showLineGraph == 1 then
    if currentValue == 0 then
      SKIN:Bang('!SetVariable', 'showPeakNetworkUsage', '1')
      SKIN:Bang('!WriteKeyValue', 'Variables', 'showPeakNetworkUsage', '1', networkSettingsPath)
      SKIN:Bang('!ShowMeter', 'GraphPeakString', networkMeterConfig)
      SKIN:Bang('!WriteKeyValue', 'GraphPeakString', 'Hidden', '0', networkMeterPath)

      SKIN:Bang('!SetOption', 'PeakNetUsageButton', 'ImageName', '#*imgPath*#Settings\\0a.png')
      SKIN:Bang('!WriteKeyValue', 'PeakNetUsageButton', 'ImageName', '#*imgPath*#Settings\\0a.png')
    else
      SKIN:Bang('!SetVariable', 'showPeakNetworkUsage', '0')
      SKIN:Bang('!WriteKeyValue', 'Variables', 'showPeakNetworkUsage', '0', networkSettingsPath)
      SKIN:Bang('!HideMeter', 'GraphPeakString', networkMeterConfig)
      SKIN:Bang('!WriteKeyValue', 'GraphPeakString', 'Hidden', '1', networkMeterPath)

      SKIN:Bang('!SetOption', 'PeakNetUsageButton', 'ImageName', '#*imgPath*#Settings\\0.png')
      SKIN:Bang('!WriteKeyValue', 'PeakNetUsageButton', 'ImageName', '#*imgPath*#Settings\\0.png')
    end
  else
    SKIN:Bang('!Log', 'Cannot show peak network traffic if line graph is hidden', 'Warning')
  end

  SKIN:Bang('!UpdateMeter', 'GraphPeakString', networkMeterConfig)
  SKIN:Bang('!Redraw', networkMeterConfig)

end
