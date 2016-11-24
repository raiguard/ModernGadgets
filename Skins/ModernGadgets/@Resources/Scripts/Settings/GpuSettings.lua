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

    SKIN:Bang('!SetOption', 'MemoryClockButton', 'ImageName', '#*imgPath*#Settings\\0a.png')
    SKIN:Bang('!WriteKeyValue', 'MemoryClockButton', 'ImageName', '#*imgPath*#Settings\\0a.png')
  else
    SKIN:Bang('!SetVariable', 'showMemoryClock', '0')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'showMemoryClock', '0', gpuSettingsPath)
    SKIN:Bang('!HideMeterGroup', 'MemoryClock', gpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'Gpu0MemoryClockLabelString', 'Hidden', '1', gpuMeterPath)
    SKIN:Bang('!WriteKeyValue', 'Gpu0MemoryClockValueString', 'Hidden', '1', gpuMeterPath)

    SKIN:Bang('!SetOption', 'Gpu0MemoryClockLabelString', 'Y', 'R', gpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'Gpu0MemoryClockLabelString', 'Y', 'R', gpuMeterPath)

    SKIN:Bang('!SetOption', 'MemoryClockButton', 'ImageName', '#*imgPath*#Settings\\0.png')
    SKIN:Bang('!WriteKeyValue', 'MemoryClockButton', 'ImageName', '#*imgPath*#Settings\\0.png')
  end

  SKIN:Bang('!UpdateMeterGroup', 'MemoryClock', gpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'Background', gpuMeterConfig)
  SKIN:Bang('!Redraw', gpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'MemoryClock')
  SKIN:Bang('!Redraw')

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

    SKIN:Bang('!SetOption', 'MemoryControllerButton', 'ImageName', '#*imgPath*#Settings\\0a.png')
    SKIN:Bang('!WriteKeyValue', 'MemoryControllerButton', 'ImageName', '#*imgPath*#Settings\\0a.png')
  else
    SKIN:Bang('!SetVariable', 'showMemoryController', '0')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'showMemoryController', '0', gpuSettingsPath)
    SKIN:Bang('!HideMeterGroup', 'MemoryController', gpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'Gpu0MemoryControllerLabelString', 'Hidden', '1', gpuMeterPath)
    SKIN:Bang('!WriteKeyValue', 'Gpu0MemoryControllerValueString', 'Hidden', '1', gpuMeterPath)
    SKIN:Bang('!WriteKeyValue', 'Gpu0MemoryControllerBar', 'Hidden', '1', gpuMeterPath)

    SKIN:Bang('!SetOption', 'Gpu0MemoryControllerLabelString', 'Y', 'R', gpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'Gpu0MemoryControllerLabelString', 'Y', 'R', gpuMeterPath)

    SKIN:Bang('!SetOption', 'MemoryControllerButton', 'ImageName', '#*imgPath*#Settings\\0.png')
    SKIN:Bang('!WriteKeyValue', 'MemoryControllerButton', 'ImageName', '#*imgPath*#Settings\\0.png')
  end

  SKIN:Bang('!UpdateMeterGroup', 'MemoryController', gpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'Background', gpuMeterConfig)
  SKIN:Bang('!Redraw', gpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'MemoryController')
  SKIN:Bang('!Redraw')

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

    SKIN:Bang('!SetOption', 'VideoClockButton', 'ImageName', '#*imgPath*#Settings\\0a.png')
    SKIN:Bang('!WriteKeyValue', 'VideoClockButton', 'ImageName', '#*imgPath*#Settings\\0a.png')

    SetLineGraphY(1, showCoreVoltage, showLineGraph)
  else
    SKIN:Bang('!SetVariable', 'showVideoClock', '0')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'showVideoClock', '0', gpuSettingsPath)
    SKIN:Bang('!HideMeterGroup', 'VideoClock', gpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'Gpu0VideoClockLabelString', 'Hidden', '1', gpuMeterPath)
    SKIN:Bang('!WriteKeyValue', 'Gpu0VideoClockValueString', 'Hidden', '1', gpuMeterPath)

    SKIN:Bang('!SetOption', 'Gpu0VideoClockLabelString', 'Y', 'R', gpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'Gpu0VideoClockLabelString', 'Y', 'R', gpuMeterPath)

    SKIN:Bang('!SetOption', 'VideoClockButton', 'ImageName', '#*imgPath*#Settings\\0.png')
    SKIN:Bang('!WriteKeyValue', 'VideoClockButton', 'ImageName', '#*imgPath*#Settings\\0.png')

    SetLineGraphY(0, showCoreVoltage, showLineGraph)
  end

  SKIN:Bang('!UpdateMeterGroup', 'VideoClock', gpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'LineGraph', gpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'Background', gpuMeterConfig)
  SKIN:Bang('!Redraw', gpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'ToggleButtons')
  SKIN:Bang('!Redraw')

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

    SKIN:Bang('!SetOption', 'CoreVoltageButton', 'ImageName', '#*imgPath*#Settings\\0a.png')
    SKIN:Bang('!WriteKeyValue', 'CoreVoltageButton', 'ImageName', '#*imgPath*#Settings\\0a.png')

    SetLineGraphY(showVideoClock, 1, showLineGraph)
  else
    SKIN:Bang('!SetVariable', 'showCoreVoltage', '0')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'showCoreVoltage', '0', gpuSettingsPath)
    SKIN:Bang('!HideMeterGroup', 'CoreVoltage', gpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'Gpu0CoreVoltageLabelString', 'Hidden', '1', gpuMeterPath)
    SKIN:Bang('!WriteKeyValue', 'Gpu0CoreVoltageValueString', 'Hidden', '1', gpuMeterPath)

    SKIN:Bang('!SetOption', 'Gpu0CoreVoltageLabelString', 'Y', 'R', gpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'Gpu0CoreVoltageLabelString', 'Y', 'R', gpuMeterPath)

    SKIN:Bang('!SetOption', 'CoreVoltageButton', 'ImageName', '#*imgPath*#Settings\\0.png')
    SKIN:Bang('!WriteKeyValue', 'CoreVoltageButton', 'ImageName', '#*imgPath*#Settings\\0.png')

    SetLineGraphY(showVideoClock, 0, showLineGraph)
  end

  SKIN:Bang('!UpdateMeterGroup', 'CoreVoltage', gpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'LineGraph', gpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'Background', gpuMeterConfig)
  SKIN:Bang('!Redraw', gpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'ToggleButtons')
  SKIN:Bang('!Redraw')

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

    SKIN:Bang('!SetOption', 'LineGraphButton', 'ImageName', '#*imgPath*#Settings\\0a.png')
    SKIN:Bang('!WriteKeyValue', 'LineGraphButton', 'ImageName', '#*imgPath*#Settings\\0a.png')

    SetLineGraphY(showVideoClock, showCoreVoltage, 1)
  else
    SKIN:Bang('!SetVariable', 'showLineGraph', '0')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'showLineGraph', '0', gpuSettingsPath)
    SKIN:Bang('!HideMeterGroup', 'LineGraph', gpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'GraphLines', 'Hidden', '1', gpuMeterPath)
    SKIN:Bang('!WriteKeyValue', 'GraphBorder', 'Hidden', '1', gpuMeterPath)

    SKIN:Bang('!SetOption', 'LineGraphButton', 'ImageName', '#*imgPath*#Settings\\0.png')
    SKIN:Bang('!WriteKeyValue', 'LineGraphButton', 'ImageName', '#*imgPath*#Settings\\0.png')

    SetLineGraphY(showVideoClock, showCoreVoltage, 0)
  end

  SKIN:Bang('!UpdateMeterGroup', 'LineGraph', gpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'Background', gpuMeterConfig)
  SKIN:Bang('!Redraw', gpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'ToggleButtons')
  SKIN:Bang('!Redraw')

end

function ToggleSliMode(currentValue)

  currentValue = tonumber(currentValue)

  if currentValue == 0 then
    SKIN:Bang('!SetVariable', 'sliMode', '1')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'sliMode', '1', gpuSettingsPath)

    SKIN:Bang('!SetOption', 'SliModeButton', 'ImageName', '#*imgPath*#Settings\\0a.png')
    SKIN:Bang('!WriteKeyValue', 'SliModeButton', 'ImageName', '#*imgPath*#Settings\\0a.png')
  else
    SKIN:Bang('!SetVariable', 'sliMode', '0')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'sliMode', '0', gpuSettingsPath)

    SKIN:Bang('!SetOption', 'SliModeButton', 'ImageName', '#*imgPath*#Settings\\0.png')
    SKIN:Bang('!WriteKeyValue', 'SliModeButton', 'ImageName', '#*imgPath*#Settings\\0.png')
  end

  SKIN:Bang('!UpdateMeterGroup', 'SliMode')
  SKIN:Bang('!Redraw')

end

function SetLineGraphY(showVideoClock, showCoreVoltage, showLineGraph)

  -- SKIN:Bang('!Log', showVideoClock .. ', ' .. showCoreVoltage .. ', ' .. showLineGraph, 'Debug')

  if showVideoClock == 1 or showCoreVoltage == 1 then
    if showLineGraph == 1 then
      SKIN:Bang('!SetOption', 'GraphLines', 'Y', '1R', gpuMeterConfig)
      SKIN:Bang('!WriteKeyValue', 'GraphLines', 'Y', '1R', gpuMeterPath)
    else
      SKIN:Bang('!SetOption', 'GraphLines', 'Y', '-1R', gpuMeterConfig)
      SKIN:Bang('!WriteKeyValue', 'GraphLines', 'Y', '-1R', gpuMeterPath)
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
    SKIN:Bang('!SetOption', 'MoboFanButton', 'ImageName', '#*imgPath*#Settings\\0a.png')
    SKIN:Bang('!WriteKeyValue', 'MoboFanButton', 'ImageName', '#*imgPath*#Settings\\0a.png')

    SKIN:Bang('!SetOption', 'Gpu0FanSpeedString', 'MeasureName', 'MeasureMoboGpuFanSpeed', gpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'Gpu0FanSpeedString', 'MeasureName', 'MeasureMoboGpuFanSpeed', gpuMeterPath)
  else
    SKIN:Bang('!SetVariable', 'useMoboFanSensor', '0')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'useMoboFanSensor', '0')
    SKIN:Bang('!SetOption', 'MoboFanButton', 'ImageName', '#*imgPath*#Settings\\0.png')
    SKIN:Bang('!WriteKeyValue', 'MoboFanButton', 'ImageName', '#*imgPath*#Settings\\0.png')

    SKIN:Bang('!SetOption', 'Gpu0FanSpeedString', 'MeasureName', 'MeasureGpu0FanSpeed', gpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'Gpu0FanSpeedString', 'MeasureName', 'MeasureGpu0FanSpeed', gpuMeterPath)
  end

  SKIN:Bang('!UpdateMeterGroup', 'MoboFan')
  SKIN:Bang('!Redraw')
  SKIN:Bang('!UpdateMeter', 'Gpu0FanSpeedString', gpuMeterConfig)
  SKIN:Bang('!Redraw', gpuMeterConfig)

end
