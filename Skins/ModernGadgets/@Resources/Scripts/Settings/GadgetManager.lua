-- MODERNGADGETS GADGET MANAGER SCRIPT
-- By iamanai
--
-- Consists of hard-coded functions to load/unload gadgets
--

function Initialize()

  gadgetManagerPath=SKIN:GetVariable('gadgetManagerPath')
  globalSettingsPath = SKIN:GetVariable('globalSettingsPath')

end

function Update() end

function ToggleGadget(currentValue, gadgetPrefix)

  currentValue = tonumber(currentValue)

  if currentValue == 0 then
    SKIN:Bang('!SetOption', gadgetPrefix .. 'MeterButton', 'ImageName', '#*imgPath*#Settings\\0a.png')
    SKIN:Bang('!WriteKeyValue', gadgetPrefix .. 'MeterButton', 'ImageName', '#*imgPath*#Settings\\0a.png')
  else
    SKIN:Bang('!SetOption', gadgetPrefix .. 'MeterButton', 'ImageName', '#*imgPath*#Settings\\0.png')
    SKIN:Bang('!WriteKeyValue', gadgetPrefix .. 'MeterButton', 'ImageName', '#*imgPath*#Settings\\0.png')
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
    SKIN:Bang('!WriteKeyValue', 'CpuMeterButton', 'ImageName', '#*imgPath*#Settings\\0a.png')
  else
    SKIN:Bang('!SetOption', 'CpuMeterButton', 'ImageName', '#*imgPath*#Settings\\0.png')
    SKIN:Bang('!WriteKeyValue', 'CpuMeterButton', 'ImageName', '#*imgPath*#Settings\\0.png')
  end

  if networkMeterState == 1 then
    SKIN:Bang('!SetOption', 'NetworkMeterButton', 'ImageName', '#*imgPath*#Settings\\0a.png')
    SKIN:Bang('!WriteKeyValue', 'NetworkMeterButton', 'ImageName', '#*imgPath*#Settings\\0a.png')
  else
    SKIN:Bang('!SetOption', 'NetworkMeterButton', 'ImageName', '#*imgPath*#Settings\\0.png')
    SKIN:Bang('!WriteKeyValue', 'NetworkMeterButton', 'ImageName', '#*imgPath*#Settings\\0.png')
  end

  if gpuMeterState == 1 then
    SKIN:Bang('!SetOption', 'GpuMeterButton', 'ImageName', '#*imgPath*#Settings\\0a.png')
    SKIN:Bang('!WriteKeyValue', 'GpuMeterButton', 'ImageName', '#*imgPath*#Settings\\0a.png')
  else
    SKIN:Bang('!SetOption', 'GpuMeterButton', 'ImageName', '#*imgPath*#Settings\\0.png')
    SKIN:Bang('!WriteKeyValue', 'GpuMeterButton', 'ImageName', '#*imgPath*#Settings\\0.png')
  end

  if disksMeterState == 1 then
    SKIN:Bang('!SetOption', 'DisksMeterButton', 'ImageName', '#*imgPath*#Settings\\0a.png')
    SKIN:Bang('!WriteKeyValue', 'DisksMeterButton', 'ImageName', '#*imgPath*#Settings\\0a.png')
  else
    SKIN:Bang('!SetOption', 'DisksMeterButton', 'ImageName', '#*imgPath*#Settings\\0.png')
    SKIN:Bang('!WriteKeyValue', 'DisksMeterButton', 'ImageName', '#*imgPath*#Settings\\0.png')
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
    SKIN:Bang('!WriteKeyValue', 'AutoNotifyUpdatesButton', 'ImageName', '#*imgPath*#Settings\\0a.png')
  else
    SKIN:Bang('!SetVariable', 'notifyUpdates', '0')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'notifyUpdates', '0', globalSettingsPath)
    SKIN:Bang('!SetOption', 'AutoNotifyUpdatesButton', 'ImageName', '#*imgPath*#Settings\\0.png')
    SKIN:Bang('!WriteKeyValue', 'AutoNotifyUpdatesButton', 'ImageName', '#*imgPath*#Settings\\0.png')
  end

  SKIN:Bang('!UpdateMeter', 'AutoNotifyUpdatesButton')
  SKIN:Bang('!Redraw')
  SKIN:Bang('!Refresh', 'ModernGadgets\\Config\\Setup')

end

function ToggleDevUpdates(currentValue)

  currentValue = tonumber(currentValue)

  if currentValue == 0 then
    SKIN:Bang('!SetVariable', 'devUpdates', '1')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'devUpdates', '1', globalSettingsPath)
    SKIN:Bang('!SetOption', 'DevUpdatesButton', 'ImageName', '#*imgPath*#Settings\\0a.png')
    SKIN:Bang('!WriteKeyValue', 'DevUpdatesButton', 'ImageName', '#*imgPath*#Settings\\0a.png')
  else
    SKIN:Bang('!SetVariable', 'devUpdates', '0')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'devUpdates', '0', globalSettingsPath)
    SKIN:Bang('!SetOption', 'DevUpdatesButton', 'ImageName', '#*imgPath*#Settings\\0.png')
    SKIN:Bang('!WriteKeyValue', 'DevUpdatesButton', 'ImageName', '#*imgPath*#Settings\\0.png')
  end

  SKIN:Bang('!UpdateMeter', 'DevUpdatesButton')
  SKIN:Bang('!Redraw')
  SKIN:Bang('!Refresh', 'ModernGadgets\\Config\\Setup')

end

function ToggleAutoBackups(currentValue)

  currentValue = tonumber(currentValue)

  if currentValue == 0 then
    SKIN:Bang('!SetVariable', 'autoBackups', '1')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'autoBackups', '1', globalSettingsPath)
    SKIN:Bang('!SetOption', 'AutoBackupsButton', 'ImageName', '#*imgPath*#Settings\\0a.png')
    SKIN:Bang('!WriteKeyValue', 'AutoBackupsButton', 'ImageName', '#*imgPath*#Settings\\0a.png')
  else
    SKIN:Bang('!SetVariable', 'autoBackups', '0')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'autoBackups', '0', globalSettingsPath)
    SKIN:Bang('!SetOption', 'AutoBackupsButton', 'ImageName', '#*imgPath*#Settings\\0.png')
    SKIN:Bang('!WriteKeyValue', 'AutoBackupsButton', 'ImageName', '#*imgPath*#Settings\\0.png')
  end

  SKIN:Bang('!UpdateMeter', 'AutoBackupsButton')
  SKIN:Bang('!Redraw')
  SKIN:Bang('!Refresh', 'ModernGadgets\\Config\\Setup')

end
