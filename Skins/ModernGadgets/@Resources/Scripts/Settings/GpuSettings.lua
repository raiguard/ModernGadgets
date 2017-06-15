-- MODERNGADGETS GPU METER SETTINGS SCRIPT
-- By iamanai
--
-- Consists of hard-coded functions to change settings in GPU Meter
--

function Initialize()

  gpuSettingsPath = SKIN:GetVariable('gpuSettingsPath')
  gpuMeterPath = SKIN:GetVariable('gpuMeterPath')
  gpuMeterConfig = SKIN:GetVariable('gpuMeterConfig')

end

function Update() end

function ToggleMemoryClock(currentValue)

  currentValue = tonumber(currentValue)

  if currentValue == 0 then
    SKIN:Bang('!SetVariable', 'showMemoryClock', '1')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'showMemoryClock', '1', gpuSettingsPath)
    SKIN:Bang('!ShowMeterGroup', 'MemoryClock', gpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'Gpu0MemoryClockLabelString', 'Hidden', '0', gpuMeterPath)
    SKIN:Bang('!WriteKeyValue', 'Gpu0MemoryClockValueString', 'Hidden', '0', gpuMeterPath)

    SKIN:Bang('!SetOption', 'Gpu0MemoryClockLabelString', 'Y', '#*rowSpacing*#R', gpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'Gpu0MemoryClockLabelString', 'Y', '#*rowSpacing*#R', gpuMeterPath)
  else
    SKIN:Bang('!SetVariable', 'showMemoryClock', '0')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'showMemoryClock', '0', gpuSettingsPath)
    SKIN:Bang('!HideMeterGroup', 'MemoryClock', gpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'Gpu0MemoryClockLabelString', 'Hidden', '1', gpuMeterPath)
    SKIN:Bang('!WriteKeyValue', 'Gpu0MemoryClockValueString', 'Hidden', '1', gpuMeterPath)

    SKIN:Bang('!SetOption', 'Gpu0MemoryClockLabelString', 'Y', 'R', gpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'Gpu0MemoryClockLabelString', 'Y', 'R', gpuMeterPath)
  end

  SKIN:Bang('!UpdateMeterGroup', 'MemoryClock', gpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'Background', gpuMeterConfig)
  SKIN:Bang('!Redraw', gpuMeterConfig)

end

function ToggleManualMaxVram(currentValue)
  
  currentValue = tonumber(currentValue)
  
  if currentValue == 0 then
    SKIN:Bang('!SetVariable', 'useManualMaxVram', '1')
    SKIN:Bang('!SetVariable', 'useManualMaxVram', '1', gpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'Variables', 'useManualMaxVram', '1', gpuSettingsPath)
    SKIN:Bang('!SetOption', 'Gpu0MemoryUsageValueString', 'MeasureName', 'MeasureGpu0MemUsedPercentAlt', gpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'Gpu0MemoryUsageValueString', 'MeasureName', 'MeasureGpu0MemUsedPercentAlt', gpuMeterPath)
    SKIN:Bang('!SetOption', 'Gpu0MemoryUsageBar', 'MeasureName', 'MeasureGpu0MemUsedPercentAltBar', gpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'Gpu0MemoryUsageBar', 'MeasureName', 'MeasureGpu0MemUsedPercentAltBar', gpuMeterPath)
    SKIN:Bang('!SetOption', 'GraphLines', 'MeasureName3', 'MeasureGpu0MemUsedPercentAlt', gpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'GraphLines', 'MeasureName3', 'MeasureGpu0MemUsedPercentAlt', gpuMeterPath)
  else
    SKIN:Bang('!SetVariable', 'useManualMaxVram', '0')
    SKIN:Bang('!SetVariable', 'useManualMaxVram', '0', gpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'Variables', 'useManualMaxVram', '0', gpuSettingsPath)
    SKIN:Bang('!SetOption', 'Gpu0MemoryUsageValueString', 'MeasureName', 'MeasureGpu0MemUsedPercent', gpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'Gpu0MemoryUsageValueString', 'MeasureName', 'MeasureGpu0MemUsedPercent', gpuMeterPath)
    SKIN:Bang('!SetOption', 'Gpu0MemoryUsageBar', 'MeasureName', 'MeasureGpu0MemUsedPercent', gpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'Gpu0MemoryUsageBar', 'MeasureName', 'MeasureGpu0MemUsedPercent', gpuMeterPath)
    SKIN:Bang('!SetOption', 'GraphLines', 'MeasureName3', 'MeasureGpu0MemUsedPercent', gpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'GraphLines', 'MeasureName3', 'MeasureGpu0MemUsedPercent', gpuMeterPath)
  end
  
  SKIN:Bang('!UpdateMeasureGroup', 'Memory', gpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'Memory', gpuMeterConfig)
  SKIN:Bang('!Redraw', gpuMeterConfig)
  
end

function SetManualMaxVram(value)
  
  value = tonumber(value)
  
  SKIN:Bang('!SetVariable', 'maxVram', value)
  SKIN:Bang('!SetVariable', 'maxVram', value, gpuMeterConfig)
  SKIN:Bang('!WriteKeyValue', 'Variables', 'maxVram', value, gpuSettingsPath)
  
  SKIN:Bang('!UpdateMeasure', 'MeasureGpu0MemTotal', gpuMeterConfig)
  SKIN:Bang('!Redraw', gpuMeterConfig)
end

function ToggleMemoryController(currentValue)

  currentValue = tonumber(currentValue)

  if currentValue == 0 then
    SKIN:Bang('!SetVariable', 'showMemoryController', '1')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'showMemoryController', '1', gpuSettingsPath)
    SKIN:Bang('!ShowMeterGroup', 'MemoryController', gpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'Gpu0MemoryControllerLabelString', 'Hidden', '0', gpuMeterPath)
    SKIN:Bang('!WriteKeyValue', 'Gpu0MemoryControllerValueString', 'Hidden', '0', gpuMeterPath)
    SKIN:Bang('!WriteKeyValue', 'Gpu0MemoryControllerBar', 'Hidden', '0', gpuMeterPath)

    SKIN:Bang('!SetOption', 'Gpu0MemoryControllerLabelString', 'Y', '#*rowSpacing*#R', gpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'Gpu0MemoryControllerLabelString', 'Y', '#*rowSpacing*#R', gpuMeterPath)

    SKIN:Bang('!SetOption', 'GraphLines', 'LineColor', '#*colorMemoryController*#', gpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'GraphLines', 'LineColor', '#*colorMemoryController*#', gpuMeterPath)
  else
    SKIN:Bang('!SetVariable', 'showMemoryController', '0')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'showMemoryController', '0', gpuSettingsPath)
    SKIN:Bang('!HideMeterGroup', 'MemoryController', gpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'Gpu0MemoryControllerLabelString', 'Hidden', '1', gpuMeterPath)
    SKIN:Bang('!WriteKeyValue', 'Gpu0MemoryControllerValueString', 'Hidden', '1', gpuMeterPath)
    SKIN:Bang('!WriteKeyValue', 'Gpu0MemoryControllerBar', 'Hidden', '1', gpuMeterPath)

    SKIN:Bang('!SetOption', 'Gpu0MemoryControllerLabelString', 'Y', '-#*barTextOffset*#R', gpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'Gpu0MemoryControllerLabelString', 'Y', '-#*barTextOffset*#R', gpuMeterPath)

    SKIN:Bang('!SetOption', 'GraphLines', 'LineColor', '0,0,0,0', gpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'GraphLines', 'LineColor', '0,0,0,0', gpuMeterPath)
  end

  SKIN:Bang('!UpdateMeterGroup', 'MemoryController', gpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'LineGraph', gpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'Background', gpuMeterConfig)
  SKIN:Bang('!Redraw', gpuMeterConfig)

end

function ToggleVideoClock(currentValue, showCoreVoltage, showLineGraph)

  currentValue = tonumber(currentValue)
  showCoreVoltage = tonumber(showCoreVoltage)
  showLineGraph = tonumber(showLineGraph)

  if currentValue == 0 then
    SKIN:Bang('!SetVariable', 'showVideoClock', '1')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'showVideoClock', '1', gpuSettingsPath)
    SKIN:Bang('!ShowMeterGroup', 'VideoClock', gpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'Gpu0VideoClockLabelString', 'Hidden', '0', gpuMeterPath)
    SKIN:Bang('!WriteKeyValue', 'Gpu0VideoClockValueString', 'Hidden', '0', gpuMeterPath)

    SKIN:Bang('!SetOption', 'Gpu0VideoClockLabelString', 'Y', '#*rowSpacing*#R', gpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'Gpu0VideoClockLabelString', 'Y', '#*rowSpacing*#R', gpuMeterPath)

    SetLineGraphY(1, showCoreVoltage, showLineGraph)
  else
    SKIN:Bang('!SetVariable', 'showVideoClock', '0')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'showVideoClock', '0', gpuSettingsPath)
    SKIN:Bang('!HideMeterGroup', 'VideoClock', gpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'Gpu0VideoClockLabelString', 'Hidden', '1', gpuMeterPath)
    SKIN:Bang('!WriteKeyValue', 'Gpu0VideoClockValueString', 'Hidden', '1', gpuMeterPath)

    SKIN:Bang('!SetOption', 'Gpu0VideoClockLabelString', 'Y', 'R', gpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'Gpu0VideoClockLabelString', 'Y', 'R', gpuMeterPath)

    SetLineGraphY(0, showCoreVoltage, showLineGraph)
  end

  SKIN:Bang('!UpdateMeterGroup', 'VideoClock', gpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'LineGraph', gpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'Background', gpuMeterConfig)
  SKIN:Bang('!Redraw', gpuMeterConfig)

end

function ToggleCoreVoltage(currentValue, showVideoClock, showLineGraph)

  currentValue = tonumber(currentValue)
  showVideoClock = tonumber(showVideoClock)
  showLineGraph = tonumber(showLineGraph)

  if currentValue == 0 then
    SKIN:Bang('!SetVariable', 'showCoreVoltage', '1')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'showCoreVoltage', '1', gpuSettingsPath)
    SKIN:Bang('!ShowMeterGroup', 'CoreVoltage', gpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'Gpu0CoreVoltageLabelString', 'Hidden', '0', gpuMeterPath)
    SKIN:Bang('!WriteKeyValue', 'Gpu0CoreVoltageValueString', 'Hidden', '0', gpuMeterPath)

    SKIN:Bang('!SetOption', 'Gpu0CoreVoltageLabelString', 'Y', '#*rowSpacing*#R', gpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'Gpu0CoreVoltageLabelString', 'Y', '#*rowSpacing*#R', gpuMeterPath)

    SetLineGraphY(showVideoClock, 1, showLineGraph)
  else
    SKIN:Bang('!SetVariable', 'showCoreVoltage', '0')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'showCoreVoltage', '0', gpuSettingsPath)
    SKIN:Bang('!HideMeterGroup', 'CoreVoltage', gpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'Gpu0CoreVoltageLabelString', 'Hidden', '1', gpuMeterPath)
    SKIN:Bang('!WriteKeyValue', 'Gpu0CoreVoltageValueString', 'Hidden', '1', gpuMeterPath)

    SKIN:Bang('!SetOption', 'Gpu0CoreVoltageLabelString', 'Y', 'R', gpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'Gpu0CoreVoltageLabelString', 'Y', 'R', gpuMeterPath)

    SetLineGraphY(showVideoClock, 0, showLineGraph)
  end

  SKIN:Bang('!UpdateMeterGroup', 'CoreVoltage', gpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'LineGraph', gpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'Background', gpuMeterConfig)
  SKIN:Bang('!Redraw', gpuMeterConfig)

end

function ToggleLineGraph(currentValue, showVideoClock, showCoreVoltage)

  currentValue = tonumber(currentValue)
  showVideoClock = tonumber(showVideoClock)
  showCoreVoltage = tonumber(showCoreVoltage)

  if currentValue == 0 then
    SKIN:Bang('!SetVariable', 'showLineGraph', '1')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'showLineGraph', '1', gpuSettingsPath)
    SKIN:Bang('!ShowMeterGroup', 'LineGraph', gpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'GraphLines', 'Hidden', '0', gpuMeterPath)
    SKIN:Bang('!WriteKeyValue', 'GraphBorder', 'Hidden', '0', gpuMeterPath)

    SetLineGraphY(showVideoClock, showCoreVoltage, 1)
  else
    SKIN:Bang('!SetVariable', 'showLineGraph', '0')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'showLineGraph', '0', gpuSettingsPath)
    SKIN:Bang('!HideMeterGroup', 'LineGraph', gpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'GraphLines', 'Hidden', '1', gpuMeterPath)
    SKIN:Bang('!WriteKeyValue', 'GraphBorder', 'Hidden', '1', gpuMeterPath)

    SetLineGraphY(showVideoClock, showCoreVoltage, 0)
  end

  SKIN:Bang('!UpdateMeterGroup', 'LineGraph', gpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'Background', gpuMeterConfig)
  SKIN:Bang('!Redraw', gpuMeterConfig)

end

-- function ToggleSliMode(currentValue)
--
--   currentValue = tonumber(currentValue)
--
--   if currentValue == 0 then
--     SKIN:Bang('!SetVariable', 'sliMode', '1')
--     SKIN:Bang('!WriteKeyValue', 'Variables', 'sliMode', '1', gpuSettingsPath)
--
--     SKIN:Bang('!SetOption', 'SliModeButton', 'ImageName', '#*imgPath*#Settings\\0a.png')
--     SKIN:Bang('!WriteKeyValue', 'SliModeButton', 'ImageName', '#*imgPath*#Settings\\0a.png')
--   else
--     SKIN:Bang('!SetVariable', 'sliMode', '0')
--     SKIN:Bang('!WriteKeyValue', 'Variables', 'sliMode', '0', gpuSettingsPath)
--
--     SKIN:Bang('!SetOption', 'SliModeButton', 'ImageName', '#*imgPath*#Settings\\0.png')
--     SKIN:Bang('!WriteKeyValue', 'SliModeButton', 'ImageName', '#*imgPath*#Settings\\0.png')
--   end
--
--   SKIN:Bang('!UpdateMeterGroup', 'SliMode')
--   SKIN:Bang('!Redraw')
--
-- end

function SetLineGraphY(showVideoClock, showCoreVoltage, showLineGraph)

  -- SKIN:Bang('!Log', showVideoClock .. ', ' .. showCoreVoltage .. ', ' .. showLineGraph, 'Debug')

  if showVideoClock == 1 or showCoreVoltage == 1 then
    if showLineGraph == 1 then
      SKIN:Bang('!SetOption', 'GraphLines', 'Y', '(#*barTextOffset*# + 1)R', gpuMeterConfig)
      SKIN:Bang('!WriteKeyValue', 'GraphLines', 'Y', '(#*barTextOffset*# + 1)R', gpuMeterPath)
    else
      SKIN:Bang('!SetOption', 'GraphLines', 'Y', 'R', gpuMeterConfig)
      SKIN:Bang('!WriteKeyValue', 'GraphLines', 'Y', 'R', gpuMeterPath)
    end
  else
    if showLineGraph == 1 then
      SKIN:Bang('!SetOption', 'GraphLines', 'Y', '5R', gpuMeterConfig)
      SKIN:Bang('!WriteKeyValue', 'GraphLines', 'Y', '5R', gpuMeterPath)
    else
      SKIN:Bang('!SetOption', 'GraphLines', 'Y', '2R', gpuMeterConfig)
      SKIN:Bang('!WriteKeyValue', 'GraphLines', 'Y', '2R', gpuMeterPath)
    end
  end

end

function ToggleMoboFan(currentValue)

  currentValue = tonumber(currentValue)

  if currentValue == 0 then
    SKIN:Bang('!SetVariable', 'useMoboFanSensor', '1')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'useMoboFanSensor', '1')

    SKIN:Bang('!SetOption', 'Gpu0FanSpeedString', 'MeasureName', 'MeasureMoboGpuFanSpeed', gpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'Gpu0FanSpeedString', 'MeasureName', 'MeasureMoboGpuFanSpeed', gpuMeterPath)
  else
    SKIN:Bang('!SetVariable', 'useMoboFanSensor', '0')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'useMoboFanSensor', '0')

    SKIN:Bang('!SetOption', 'Gpu0FanSpeedString', 'MeasureName', 'MeasureGpu0FanSpeed', gpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'Gpu0FanSpeedString', 'MeasureName', 'MeasureGpu0FanSpeed', gpuMeterPath)
  end

  SKIN:Bang('!UpdateMeter', 'Gpu0FanSpeedString', gpuMeterConfig)
  SKIN:Bang('!Redraw', gpuMeterConfig)

end

function UpdateSettings()

  local showMemoryClock = math.abs(tonumber(SKIN:GetVariable('showMemoryClock')) - 1)
  local showMemoryController = math.abs(tonumber(SKIN:GetVariable('showMemoryController')) - 1)
  local showVideoClock = tonumber(SKIN:GetVariable('showVideoClock'))
  local showCoreVoltage = tonumber(SKIN:GetVariable('showCoreVoltage'))
  local showLineGraph = tonumber(SKIN:GetVariable('showLineGraph'))
  local useMoboFanSensor = math.abs(tonumber(SKIN:GetVariable('useMoboFanSensor')) - 1)
  local useManualMaxVram = math.abs(tonumber(SKIN:GetVariable('useManualMaxVram')) - 1)
  local maxVram = tonumber(SKIN:GetVariable('maxVram'))

  ToggleMemoryClock(showMemoryClock)
  ToggleMemoryController(showMemoryController)
  ToggleVideoClock(math.abs(showVideoClock - 1), showCoreVoltage, showLineGraph)
  ToggleCoreVoltage(math.abs(showCoreVoltage - 1), showVideoClock, showLineGraph)
  ToggleLineGraph(math.abs(showLineGraph - 1), showVideoClock, showCoreVoltage)
  ToggleMoboFan(useMoboFanSensor)
  ToggleManualMaxVram(useManualMaxVram)
  SetManualMaxVram(maxVram)

end

function SetDefaults()

  ToggleMemoryClock(0)
  ToggleMemoryController(0)
  ToggleVideoClock(0, 1, 1)
  ToggleCoreVoltage(0, 1, 1)
  ToggleLineGraph(0, 1, 1)
  ToggleMoboFan(1)
  ToggleManualMaxVram(1)
  SetManualMaxVram(3000)

end

-- function to make logging messages less cluttered
function LogHelper(message, type)

  if isDbg == true then
    SKIN:Bang("!Log", message, type)
  elseif type ~= 'Debug' and type ~= nil then
  	SKIN:Bang("!Log", message, type)
	else
    SKIN:Bang("!Log", message)
  end

end
