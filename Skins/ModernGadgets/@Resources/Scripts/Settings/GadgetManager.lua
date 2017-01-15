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
    SKIN:Bang('!SetVariable', gadgetPrefix .. 'MeterLoaded', '1')
    SKIN:Bang('!WriteKeyValue', 'Variables', gadgetPrefix .. 'MeterLoaded', '1')
  else
    SKIN:Bang('!SetVariable', gadgetPrefix .. 'MeterLoaded', '0')
    SKIN:Bang('!WriteKeyValue', 'Variables', gadgetPrefix .. 'MeterLoaded', '0')
  end

  SKIN:Bang('!ToggleConfig', 'ModernGadgets\\' .. gadgetPrefix, gadgetPrefix .. '.ini')
  SKIN:Bang('!CommandMeasure', 'MeasureCpuMeterState', 'Update')
  SKIN:Bang('!Redraw')

end

function UpdateToggleButtons()

  cpuMeterState=tonumber(SKIN:GetMeasure('MeasureCpuMeterState'):GetStringValue())
  networkMeterState=tonumber(SKIN:GetMeasure('MeasureNetworkMeterState'):GetStringValue())
  gpuMeterState=tonumber(SKIN:GetMeasure('MeasureGpuMeterState'):GetStringValue())
  disksMeterState=tonumber(SKIN:GetMeasure('MeasureDisksMeterState'):GetStringValue())

  if cpuMeterState == 1 then
    SKIN:Bang('!SetOption', 'CpuMeterButton', 'ImageName', '#*toggleOnImg*#')
    SKIN:Bang('!WriteKeyValue', 'CpuMeterButton', 'ImageName', '#*toggleOnImg*#')
  else
    SKIN:Bang('!SetOption', 'CpuMeterButton', 'ImageName', '#*toggleOffImg*#')
    SKIN:Bang('!WriteKeyValue', 'CpuMeterButton', 'ImageName', '#*toggleOffImg*#')
  end

  if networkMeterState == 1 then
    SKIN:Bang('!SetOption', 'NetworkMeterButton', 'ImageName', '#*toggleOnImg*#')
    SKIN:Bang('!WriteKeyValue', 'NetworkMeterButton', 'ImageName', '#*toggleOnImg*#')
  else
    SKIN:Bang('!SetOption', 'NetworkMeterButton', 'ImageName', '#*toggleOffImg*#')
    SKIN:Bang('!WriteKeyValue', 'NetworkMeterButton', 'ImageName', '#*toggleOffImg*#')
  end

  if gpuMeterState == 1 then
    SKIN:Bang('!SetOption', 'GpuMeterButton', 'ImageName', '#*toggleOnImg*#')
    SKIN:Bang('!WriteKeyValue', 'GpuMeterButton', 'ImageName', '#*toggleOnImg*#')
  else
    SKIN:Bang('!SetOption', 'GpuMeterButton', 'ImageName', '#*toggleOffImg*#')
    SKIN:Bang('!WriteKeyValue', 'GpuMeterButton', 'ImageName', '#*toggleOffImg*#')
  end

  if disksMeterState == 1 then
    SKIN:Bang('!SetOption', 'DisksMeterButton', 'ImageName', '#*toggleOnImg*#')
    SKIN:Bang('!WriteKeyValue', 'DisksMeterButton', 'ImageName', '#*toggleOnImg*#')
  else
    SKIN:Bang('!SetOption', 'DisksMeterButton', 'ImageName', '#*toggleOffImg*#')
    SKIN:Bang('!WriteKeyValue', 'DisksMeterButton', 'ImageName', '#*toggleOffImg*#')
  end

  SKIN:Bang('!UpdateMeterGroup', 'GadgetButtons')
  SKIN:Bang('!Redraw')

end

function ToggleNotifyUpdates(currentValue)

  currentValue = tonumber(currentValue)

  if currentValue == 0 then
    SKIN:Bang('!SetVariable', 'notifyUpdates', '1')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'notifyUpdates', '1', globalSettingsPath)
    SKIN:Bang('!SetOption', 'AutoNotifyUpdatesButton', 'ImageName', '#*toggleOnImg*#')
    SKIN:Bang('!WriteKeyValue', 'AutoNotifyUpdatesButton', 'ImageName', '#*toggleOnImg*#')
  else
    SKIN:Bang('!SetVariable', 'notifyUpdates', '0')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'notifyUpdates', '0', globalSettingsPath)
    SKIN:Bang('!SetOption', 'AutoNotifyUpdatesButton', 'ImageName', '#*toggleOffImg*#')
    SKIN:Bang('!WriteKeyValue', 'AutoNotifyUpdatesButton', 'ImageName', '#*toggleOffImg*#')
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
    SKIN:Bang('!SetOption', 'DevUpdatesButton', 'ImageName', '#*toggleOnImg*#')
    SKIN:Bang('!WriteKeyValue', 'DevUpdatesButton', 'ImageName', '#*toggleOnImg*#')
  else
    SKIN:Bang('!SetVariable', 'devUpdates', '0')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'devUpdates', '0', globalSettingsPath)
    SKIN:Bang('!SetOption', 'DevUpdatesButton', 'ImageName', '#*toggleOffImg*#')
    SKIN:Bang('!WriteKeyValue', 'DevUpdatesButton', 'ImageName', '#*toggleOffImg*#')
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
