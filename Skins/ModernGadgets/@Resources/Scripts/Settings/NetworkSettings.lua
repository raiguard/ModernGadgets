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

    SKIN:Bang('!SetOption', 'CensorExternalIpButton', 'ImageName', '#*imgPath*#Settings\\0.png')
    SKIN:Bang('!WriteKeyValue', 'CensorExternalIpButton', 'ImageName', '#*imgPath*#Settings\\0.png')
  end

  SKIN:Bang('!UpdateMeter', 'ExternalIpValueString', networkMeterConfig)
  SKIN:Bang('!Redraw', networkMeterConfig)
  SKIN:Bang('!UpdateMeter', 'CensorExternalIpButton')
  SKIN:Bang('!Redraw')

end

function TogglePeakNetworkUsage(currentValue, showLineGraph)

  currentValue = tonumber(currentValue)
  showLineGraph = tonumber(showLineGraph)

  if showLineGraph == 1 then
    if currentValue == 0 then
      
    else

    end
  else
    SKIN:Bang('!Log', 'Cannot show peak network traffic if line graph is hidden', 'Warning')
  end

end
