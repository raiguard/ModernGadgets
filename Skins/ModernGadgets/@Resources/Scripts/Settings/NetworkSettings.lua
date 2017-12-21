debug = false

function Initialize()

  networkSettingsPath = SKIN:GetVariable('networkSettingsPath')
  networkMeterConfig = SKIN:GetVariable('networkMeterConfig')

  dofile(SKIN:GetVariable('scriptPath') .. 'Utilities.lua')

end

function Update() end

function ToggleCensorExternalIp(currentValue)

  currentValue = tonumber(currentValue)

  if currentValue == 0 then
    SetVariable('censorExternalIp', '1', networkSettingsPath, networkMeterConfig)
  else
    SetVariable('censorExternalIp', '0', networkSettingsPath, networkMeterConfig)
  end

  SKIN:Bang('!UpdateMeasure', 'MeasureExternalIpString', networkMeterConfig)
  SKIN:Bang('!UpdateMeter', 'ExternalIpValueString', networkMeterConfig)
  SKIN:Bang('!Redraw', networkMeterConfig) 
  UpdateToggles()

end

function ToggleSpeedtestButton(currentValue)

  currentValue = tonumber(currentValue)

  if currentValue == 0 then
    SetVariable('showSpeedtestButton', '1', networkSettingsPath, networkMeterConfig)
  else
    SetVariable('showSpeedtestButton', '0', networkSettingsPath, networkMeterConfig)
  end

  SKIN:Bang('!UpdateMeasure', 'MeasureNetworkStatusImageState', networkMeterConfig)
  SKIN:Bang('!UpdateMeter', 'SpeedtestButton', networkMeterConfig)
  SKIN:Bang('!Redraw', networkMeterConfig)
  UpdateToggles()

end

function TogglePing(currentValue)

  currentValue = tonumber(currentValue)

  if currentValue == 0 then
    SetVariable('showPing', '1', networkSettingsPath, networkMeterConfig)
  else
    SetVariable('showPing', '0', networkSettingsPath, networkMeterConfig)
  end

  SKIN:Bang('!UpdateMeter', 'PingString', networkMeterConfig)
  SKIN:Bang('!UpdateMeter', 'Placeholder', networkMeterConfig)
  SKIN:Bang('!UpdateMeter', 'NetOutCurrentImage', networkMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'LineGraph', networkMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'Background', networkMeterConfig)
  SKIN:Bang('!Redraw', networkMeterConfig)
  UpdateToggles()

end

function ToggleTrafficSuffix(currentValue)
  
  currentValue = tonumber(currentValue)
  
  if currentValue == 0 then
    SetVariable('showTrafficInBytes', '1', networkSettingsPath, networkMeterConfig)
    SetVariable('trafficSuffix', 'B/s', networkSettingsPath, networkMeterConfig)
  else
    SetVariable('showTrafficInBytes', '0', networkSettingsPath, networkMeterConfig)
    SetVariable('trafficSuffix', 'bit/s', networkSettingsPath, networkMeterConfig)
  end

  SKIN:Bang('!UpdateMeasureGroup', 'NetInOut', networkMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'NetInOut', networkMeterConfig)
  SKIN:Bang('!UpdateMeter', 'GraphPeakString', networkMeterConfig)
  SKIN:Bang('!Redraw', networkMeterConfig)
  UpdateToggles()
  
end

function ToggleLineGraph(currentValue, showPeakNetworkUsage)

  currentValue = tonumber(currentValue)
  showPeakNetworkUsage = tonumber(showPeakNetworkUsage)

  if currentValue == 0 then
    SetVariable('showLineGraph', '1', networkSettingsPath, networkMeterConfig)
    if showPeakNetworkUsage == 1 then SKIN:Bang('!ShowMeter', 'GraphPeakString', networkMeterConfig) end
    SKIN:Bang('!ShowMeter', 'GraphBorder', networkMeterConfig)
  else
    SetVariable('showLineGraph', '0', networkSettingsPath, networkMeterConfig)
    SKIN:Bang('!HideMeter', 'GraphPeakString', networkMeterConfig)
    SKIN:Bang('!HideMeter', 'GraphBorder', networkMeterConfig)
  end

  SKIN:Bang('!UpdateMeterGroup', 'LineGraph', networkMeterConfig)
  SKIN:Bang('!UpdateMeter', 'GraphPeakString', networkMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'Background', networkMeterConfig)
  SKIN:Bang('!Redraw', networkMeterConfig)
  SKIN:Bang('!UpdateMeasure', 'MeasurePeakNetUsage')
  UpdateToggles()

end

function TogglePeakNetworkUsage(currentValue, showLineGraph)

  currentValue = tonumber(currentValue)
  showLineGraph = tonumber(showLineGraph)

  if showLineGraph == 1 then
    if currentValue == 0 then
      SetVariable('showPeakNetworkUsage', '1', networkSettingsPath, networkMeterConfig)
      SKIN:Bang('!ShowMeter', 'GraphPeakString', networkMeterConfig)
    else
      SetVariable('showPeakNetworkUsage', '0', networkSettingsPath, networkMeterConfig)
      SKIN:Bang('!HideMeter', 'GraphPeakString', networkMeterConfig)
    end
  else
    LogHelper('Cannot show peak network traffic if line graph is hidden', 'Warning')
  end

  SKIN:Bang('!UpdateMeter', 'GraphPeakString', networkMeterConfig)
  SKIN:Bang('!Redraw', networkMeterConfig)
  UpdateToggles()

end

function ToggleUseNetMonitor(currentValue)

  if currentValue == 0 then
    SetVariable('useNetMonitor', '1', networkSettingsPath, networkMeterConfig)
    SKIN:Bang('!CommandMeasure', 'MeasureLoadSkinScript', 'ToggleSkin(\'Network\', \'NetworkPro\', 2)')
  else
    SetVariable('useNetMonitor', '0', networkSettingsPath, networkMeterConfig)
    SKIN:Bang('!CommandMeasure', 'MeasureLoadSkinScript', 'ToggleSkin(\'Network\', \'Network\', 1)')
  end

end

function SetPingUrl(url)
  
  url = tostring(url)
  
  SetVariable('pingUrl', url, networkSettingsPath, networkMeterConfig)
  SKIN:Bang('!UpdateMeter', 'PingString', networkMeterConfig)
  SKIN:Bang('!Redraw', networkMeterConfig)
  SKIN:Bang('!UpdateMeter', 'PingUrlInputBox')
  SKIN:Bang('!Redraw')
  
end

function SetDefaults()

  SetVariable('censorExternalIp', '0', networkSettingsPath)
  SetVariable('showSpeedtestButton', '1', networkSettingsPath)
  SetVariable('showPing', '1', networkSettingsPath)
  SetVariable('trafficSuffix', 'B/s', networkSettingsPath)
  SetVariable('showTrafficInBytes', '1', networkSettingsPath)
  SetVariable('showLineGraph', 1, networkSettingsPath)
  SetVariable('showPeakNetworkUsage', 1, networkSettingsPath)

end