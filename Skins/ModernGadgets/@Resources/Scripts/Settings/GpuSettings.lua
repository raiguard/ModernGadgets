-- MODERNGADGETS GPU METER SETTINGS SCRIPT
-- By iamanai
--
-- Consists of hard-coded functions to change settings in GPU Meter
--

function Initialize()

  gpuSettingsPath = SKIN:GetVariable('gpuSettingsPath')
  gpuMeterPath = SKIN:GetVariable('gpuMeterPath')
  gpuMeterConfig = SKIN:GetVariable('gpuMeterConfig')

  dofile(SKIN:GetVariable('scriptPath') .. 'Utilities.lua')

end 

function Update() end

function ToggleGpuName(currentValue)

  if currentValue == 0 then
    SetVariable('showGpuName', '1', gpuSettingsPath, gpuMeterConfig)
    SKIN:Bang('!ShowMeter', 'Gpu0NameString', gpuMeterConfig)
    SKIN:Bang('!SetOption', 'Gpu0NameString', 'Y', '#*rowSpacing*#R', gpuMeterConfig)
  else
    SetVariable('showGpuName', '0', gpuSettingsPath, gpuMeterConfig)
    SKIN:Bang('!HideMeter', 'Gpu0NameString', gpuMeterConfig)
    SKIN:Bang('!SetOption', 'Gpu0NameString', 'Y', 'R', gpuMeterConfig)
  end

  SKIN:Bang('!UpdateMeter', 'Gpu0NameString', gpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'Background', gpuMeterConfig)
  SKIN:Bang('!Redraw', gpuMeterConfig)
  UpdateToggles()

end

function SetGpuName(name)

  if name == "" then
    SetVariable('gpuName', 'auto', gpuSettingsPath, gpuMeterConfig)
    SKIN:Bang('!SetOption', 'Gpu0NameString', 'Text', '%1', gpuMeterConfig)
    SKIN:Bang('!UpdateMeter', 'Gpu0NameString', gpuMeterConfig)
    SKIN:Bang('!Redraw', gpuMeterConfig)
  else
    SetVariable('gpuName', name, gpuSettingsPath, gpuMeterConfig)
    SKIN:Bang('!SetOption', 'Gpu0NameString', 'Text', name, gpuMeterConfig)
    SKIN:Bang('!UpdateMeter', 'Gpu0NameString', gpuMeterConfig)
    SKIN:Bang('!Redraw', gpuMeterConfig)
  end

end

function ToggleMemoryClock(currentValue)

  currentValue = tonumber(currentValue)

  if currentValue == 0 then
    SetVariable('showMemoryClock', '1', gpuSettingsPath, gpuMeterConfig)
    SKIN:Bang('!ShowMeterGroup', 'MemoryClock', gpuMeterConfig)
    SKIN:Bang('!EnableMeasureGroup', 'MemoryClock', gpuMeterConfig)
  else
    SetVariable('showMemoryClock', '0', gpuSettingsPath, gpuMeterConfig)
    SKIN:Bang('!HideMeterGroup', 'MemoryClock', gpuMeterConfig)
    SKIN:Bang('!DisableMeasureGroup', 'MemoryClock', gpuMeterConfig)
  end

  SKIN:Bang('!UpdateMeasureGroup', 'MemoryClock', gpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'MemoryClock', gpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'Background', gpuMeterConfig)
  SKIN:Bang('!Redraw', gpuMeterConfig)
  UpdateToggles()

end

function ToggleManualMaxVram(currentValue)
  
  currentValue = tonumber(currentValue)
  
  if currentValue == 0 then
    SetVariable('useManualMaxVram', '1', gpuSettingsPath, gpuMeterConfig)
    SKIN:Bang('!SetOption', 'Gpu0MemoryUsageValueString', 'Text', '%2%', gpuMeterConfig)
    SKIN:Bang('!SetOption', 'Gpu0MemoryUsageBar', 'MeasureName', 'MeasureVramUsageAltBar', gpuMeterConfig)
    SKIN:Bang('!SetOption', 'GraphLines', 'MeasureName3', 'MeasureVramUsageAlt', gpuMeterConfig)
  else
    SetVariable('useManualMaxVram', '0', gpuSettingsPath, gpuMeterConfig)
    SKIN:Bang('!SetOption', 'Gpu0MemoryUsageValueString', 'Text', '%1%', gpuMeterConfig)
    SKIN:Bang('!SetOption', 'Gpu0MemoryUsageBar', 'MeasureName', 'MeasureVramUsage', gpuMeterConfig)
    SKIN:Bang('!SetOption', 'GraphLines', 'MeasureName3', 'MeasureVramUsage', gpuMeterConfig)
  end
  
  SKIN:Bang('!UpdateMeasureGroup', 'Memory', gpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'Memory', gpuMeterConfig)
  SKIN:Bang('!Redraw', gpuMeterConfig)
  UpdateToggles()
  
end

function SetManualMaxVram(value)
  
  value = tonumber(value)

  SetVariable('maxVram', value, gpuSettingsPath, gpuMeterConfig)
  
  SKIN:Bang('!UpdateMeasureGroup', 'Memory', gpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'Memory', gpuMeterConfig)
  SKIN:Bang('!Redraw', gpuMeterConfig)
end

function ToggleMemoryController(currentValue)

  currentValue = tonumber(currentValue)

  if currentValue == 0 then
    SetVariable('showMemoryController', '1', gpuSettingsPath, gpuMeterConfig)
    SKIN:Bang('!ShowMeterGroup', 'MemoryController', gpuMeterConfig)
    SKIN:Bang('!EnableMeasure', 'MeasureGpu0MemoryControllerLoad', gpuMeterConfig)
    SKIN:Bang('!SetOption', 'Gpu0MemoryControllerLabelString', 'Y', '#*rowSpacing*#R', gpuMeterConfig)
  else
    SetVariable('showMemoryController', '0', gpuSettingsPath, gpuMeterConfig)
    SKIN:Bang('!HideMeterGroup', 'MemoryController', gpuMeterConfig)
    SKIN:Bang('!DisableMeasure', 'MeasureGpu0MemoryControllerLoad', gpuMeterConfig)
    SKIN:Bang('!SetOption', 'Gpu0MemoryControllerLabelString', 'Y', '-#*barTextOffset*#R', gpuMeterConfig)
  end

  SKIN:Bang('!UpdateMeasure', 'MeasureGpu0MemoryControllerLoad', gpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'MemoryController', gpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'LineGraph', gpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'Background', gpuMeterConfig)
  SKIN:Bang('!Redraw', gpuMeterConfig)
  UpdateToggles()
 
end

function ToggleVideoClock(currentValue)

  currentValue = tonumber(currentValue)

  if currentValue == 0 then
    SetVariable('showVideoClock', '1', gpuSettingsPath, gpuMeterConfig)
    SKIN:Bang('!ShowMeterGroup', 'VideoClock', gpuMeterConfig)
    SKIN:Bang('!EnableMeasure', 'MeasureGpu0VideoClock', gpuMeterConfig)
    SKIN:Bang('!SetOption', 'Gpu0VideoClockLabelString', 'Y', '#*rowSpacing*#R', gpuMeterConfig)
  else
    SetVariable('showVideoClock', '0', gpuSettingsPath, gpuMeterConfig)
    SKIN:Bang('!HideMeterGroup', 'VideoClock', gpuMeterConfig)
    SKIN:Bang('!DisableMeasure', 'MeasureGpu0VideoClock', gpuMeterConfig)
    SKIN:Bang('!SetOption', 'Gpu0VideoClockLabelString', 'Y', 'R', gpuMeterConfig)
  end

  SKIN:Bang('!UpdateMeasure', 'MeasureGpu0VideoClock', gpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'VideoClock', gpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'LineGraph', gpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'Background', gpuMeterConfig)
  SKIN:Bang('!Redraw', gpuMeterConfig)
  UpdateToggles()

end

function ToggleCoreVoltage(currentValue)

  currentValue = tonumber(currentValue)

  if currentValue == 0 then
    SetVariable('showCoreVoltage', '1', gpuSettingsPath, gpuMeterConfig)
    SKIN:Bang('!ShowMeterGroup', 'CoreVoltage', gpuMeterConfig)
    SKIN:Bang('!EnableMeasure', 'MeasureGpu0CoreVoltage', gpuMeterConfig)
    SKIN:Bang('!SetOption', 'Gpu0CoreVoltageLabelString', 'Y', '#*rowSpacing*#R', gpuMeterConfig)
  else
    SetVariable('showCoreVoltage', '0', gpuSettingsPath, gpuMeterConfig)
    SKIN:Bang('!HideMeterGroup', 'CoreVoltage', gpuMeterConfig)
    SKIN:Bang('!DisableMeasure', 'MeasureGpu0CoreVoltage', gpuMeterConfig)
    SKIN:Bang('!SetOption', 'Gpu0CoreVoltageLabelString', 'Y', 'R', gpuMeterConfig)
  end

  SKIN:Bang('!UpdateMeasure', 'MeasureGpu0CoreVoltage', gpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'CoreVoltage', gpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'LineGraph', gpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'Background', gpuMeterConfig)
  SKIN:Bang('!Redraw', gpuMeterConfig)
  UpdateToggles()

end

function ToggleLineGraph(currentValue)

  currentValue = tonumber(currentValue)

  if currentValue == 0 then
    SetVariable('showLineGraph', '1', gpuSettingsPath, gpuMeterConfig)
    SKIN:Bang('!ShowMeterGroup', 'LineGraph', gpuMeterConfig)
  else
    SetVariable('showLineGraph', '0', gpuSettingsPath, gpuMeterConfig)
    SKIN:Bang('!HideMeterGroup', 'LineGraph', gpuMeterConfig)
  end

  SKIN:Bang('!UpdateMeterGroup', 'LineGraph', gpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'Background', gpuMeterConfig)
  SKIN:Bang('!Redraw', gpuMeterConfig)
  SKIN:Bang('!UpdateMeasure', 'MeasureTempGraph')
  UpdateToggles()

end

function ToggleTempGraph(currentValue, showLineGraph)

  if showLineGraph == 1 then
    if currentValue == 0 then
      SetVariable('showTempGraph', '1', gpuSettingsPath, gpuMeterConfig)
    else
      SetVariable('showTempGraph', '0', gpuSettingsPath, gpuMeterConfig)
    end
  end

  SKIN:Bang('!UpdateMeter', 'GraphLines', gpuMeterConfig)
  SKIN:Bang('!Redraw', gpuMeterConfig)
  UpdateToggles()

end

function ToggleMoboFan(currentValue)

  currentValue = tonumber(currentValue)

  if currentValue == 0 then
    SetVariable('useMoboFanSensor', '1', gpuSettingsPath, gpuMeterConfig)
    SKIN:Bang('!EnableMeasure', 'MeasureMoboGpuFanSpeed', gpuMeterConfig)
    SKIN:Bang('!SetOption', 'Gpu0FanSpeedString', 'Text', '%2RPM', gpuMeterConfig)
  else
    SKIN:Bang('!SetVariable', 'useMoboFanSensor', '0')
    SKIN:Bang('!DisableMeasure', 'MeasureMoboGpuFanSpeed', gpuMeterConfig)
    SKIN:Bang('!SetOption', 'Gpu0FanSpeedString', 'Text', '%1RPM', gpuMeterConfig)
  end

  SKIN:Bang('!UpdateMeasure', 'MeasureMoboGpuFanSpeed', gpuMeterConfig)
  SKIN:Bang('!UpdateMeter', 'Gpu0FanSpeedString', gpuMeterConfig)
  SKIN:Bang('!Redraw', gpuMeterConfig)
  UpdateToggles()

end
