-- MODERNGADGETS GADGET MANAGER SCRIPT
-- By iamanai
--
-- Consists of hard-coded functions to load/unload gadgets
--

function Initialize()

  welcomeSubpagePath=SKIN:GetVariable('welcomeSubpagePath')
  globalSettingsPath = SKIN:GetVariable('globalSettingsPath')

end

function Update() end

function ToggleGadget(currentValue, gadgetPrefix)

  currentValue = tonumber(currentValue)

  if currentValue == 0 then
    SKIN:Bang('!SetOption', gadgetPrefix .. 'MeterButton', 'ImageName', '#*imgPath*#Settings\\0a.png')
    SKIN:Bang('!WriteKeyValue', gadgetPrefix .. 'MeterButton', 'ImageName', '#*imgPath*#Settings\\0a.png', welcomeSubpagePath)
  else
    SKIN:Bang('!SetOption', gadgetPrefix .. 'MeterButton', 'ImageName', '#*imgPath*#Settings\\0.png')
    SKIN:Bang('!WriteKeyValue', gadgetPrefix .. 'MeterButton', 'ImageName', '#*imgPath*#Settings\\0.png', welcomeSubpagePath)
  end

  SKIN:Bang('!ToggleConfig', 'ModernGadgets\\' .. gadgetPrefix, gadgetPrefix .. '.ini')
  SKIN:Bang('!CommandMeasure', 'Measure' .. gadgetPrefix .. 'MeterState', 'Update')

  SKIN:Bang('!UpdateMeterGroup', 'GadgetButtons')
  SKIN:Bang('!Redraw')

end

function UpdateToggleButtons()

  cpuMeterState=tonumber(SKIN:GetMeasure('MeasureCpuMeterState'):GetStringValue())
  networkMeterState=tonumber(SKIN:GetMeasure('MeasureNetworkMeterState'):GetStringValue())
  gpuMeterState=tonumber(SKIN:GetMeasure('MeasureGpuMeterState'):GetStringValue())
  disksMeterState=tonumber(SKIN:GetMeasure('MeasureDisksMeterState'):GetStringValue())

  if cpuMeterState == 1 then
    SKIN:Bang('!SetOption', 'CpuMeterButton', 'ImageName', '#*imgPath*#Settings\\0a.png')
    SKIN:Bang('!WriteKeyValue', 'CpuMeterButton', 'ImageName', '#*imgPath*#Settings\\0a.png', welcomeSubpagePath)
  else
    SKIN:Bang('!SetOption', 'CpuMeterButton', 'ImageName', '#*imgPath*#Settings\\0.png')
    SKIN:Bang('!WriteKeyValue', 'CpuMeterButton', 'ImageName', '#*imgPath*#Settings\\0.png', welcomeSubpagePath)
  end

  if networkMeterState == 1 then
    SKIN:Bang('!SetOption', 'NetworkMeterButton', 'ImageName', '#*imgPath*#Settings\\0a.png')
    SKIN:Bang('!WriteKeyValue', 'NetworkMeterButton', 'ImageName', '#*imgPath*#Settings\\0a.png', welcomeSubpagePath)
  else
    SKIN:Bang('!SetOption', 'NetworkMeterButton', 'ImageName', '#*imgPath*#Settings\\0.png')
    SKIN:Bang('!WriteKeyValue', 'NetworkMeterButton', 'ImageName', '#*imgPath*#Settings\\0.png', welcomeSubpagePath)
  end

  if gpuMeterState == 1 then
    SKIN:Bang('!SetOption', 'GpuMeterButton', 'ImageName', '#*imgPath*#Settings\\0a.png')
    SKIN:Bang('!WriteKeyValue', 'GpuMeterButton', 'ImageName', '#*imgPath*#Settings\\0a.png', welcomeSubpagePath)
  else
    SKIN:Bang('!SetOption', 'GpuMeterButton', 'ImageName', '#*imgPath*#Settings\\0.png')
    SKIN:Bang('!WriteKeyValue', 'GpuMeterButton', 'ImageName', '#*imgPath*#Settings\\0.png', welcomeSubpagePath)
  end

  if disksMeterState == 1 then
    SKIN:Bang('!SetOption', 'DisksMeterButton', 'ImageName', '#*imgPath*#Settings\\0a.png')
    SKIN:Bang('!WriteKeyValue', 'DisksMeterButton', 'ImageName', '#*imgPath*#Settings\\0a.png', welcomeSubpagePath)
  else
    SKIN:Bang('!SetOption', 'DisksMeterButton', 'ImageName', '#*imgPath*#Settings\\0.png')
    SKIN:Bang('!WriteKeyValue', 'DisksMeterButton', 'ImageName', '#*imgPath*#Settings\\0.png', welcomeSubpagePath)
  end

  SKIN:Bang('!UpdateMeterGroup', 'GadgetButtons')
  SKIN:Bang('!Redraw')

end

function ToggleNotifyUpdates(currentValue)

  currentValue = tonumber(currentValue)

  if currentValue == 0 then
    SKIN:Bang('!SetVariable', 'notifyUpdates', '1')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'notifyUpdates', '1', globalSettingsPath)
    SKIN:Bang('!SetOption', 'AutoNotifyUpdatesButton', 'ImageName', '#*imgPath*#Settings\\0a.png')
    SKIN:Bang('!WriteKeyValue', 'AutoNotifyUpdatesButton', 'ImageName', '#*imgPath*#Settings\\0a.png', welcomeSubpagePath)
  else
    SKIN:Bang('!SetVariable', 'notifyUpdates', '0')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'notifyUpdates', '0', globalSettingsPath)
    SKIN:Bang('!SetOption', 'AutoNotifyUpdatesButton', 'ImageName', '#*imgPath*#Settings\\0.png')
    SKIN:Bang('!WriteKeyValue', 'AutoNotifyUpdatesButton', 'ImageName', '#*imgPath*#Settings\\0.png', welcomeSubpagePath)
  end

  SKIN:Bang('!UpdateMeter', 'AutoNotifyUpdatesButton')
  SKIN:Bang('!Redraw')

end
