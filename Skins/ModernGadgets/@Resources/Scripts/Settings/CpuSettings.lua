-- MODERNGADGETS CPU SETTINGS SCRIPT
-- By iamanai
--
-- Consists of hard-coded functions to change settigns in CPU Meter
--

function Initialize()

  cpuSettingsPath = SKIN:GetVariable('cpuSettingsPath')
  cpuMeterPath = SKIN:GetVariable('cpuMeterPath')
  cpuMeterConfig = SKIN:GetVariable('cpuMeterConfig')

end

function Update() end

function ToggleCpuName(currentValue)

  currentValue = tonumber(currentValue)

  if currentValue == 0 then
    SKIN:Bang('!SetVariable', 'showCpuName', '1')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'showCpuName', '1', cpuSettingsPath)
    SKIN:Bang('!ShowMeter', 'CpuDisplayNameString', cpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'CpuDisplayNameString', 'Hidden', '0', cpuMeterPath)
    SKIN:Bang('!SetOption', 'CpuDisplayNameString', 'Y', '#*rowSpacing*#R', cpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'CpuDisplayNameString', 'Y', '#*rowSpacing*#R', cpuMeterPath)

    SKIN:Bang('!SetOption', 'CpuNameButton', 'ImageName', '#*imgPath*#Settings\\0a.png')
    SKIN:Bang('!WriteKeyValue', 'CpuNameButton', 'ImageName', '#*imgPath*#Settings\\0a.png')
  else
    SKIN:Bang('!SetVariable', 'showCpuName', '0')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'showCpuName', '0', cpuSettingsPath)
    SKIN:Bang('!HideMeter', 'CpuDisplayNameString', cpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'CpuDisplayNameString', 'Hidden', '1', cpuMeterPath)
    SKIN:Bang('!SetOption', 'CpuDisplayNameString', 'Y', 'R', cpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'CpuDisplayNameString', 'Y', 'R', cpuMeterPath)

    SKIN:Bang('!SetOption', 'CpuNameButton', 'ImageName', '#*imgPath*#Settings\\0.png')
    SKIN:Bang('!WriteKeyValue', 'CpuNameButton', 'ImageName', '#*imgPath*#Settings\\0.png')
  end

  SKIN:Bang('!UpdateMeter', 'CpuDisplayNameString', cpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'Background', cpuMeterConfig)
  SKIN:Bang('!Redraw', cpuMeterConfig)
  SKIN:Bang('!UpdateMeter', 'CpuNameButton')
  SKIN:Bang('!Redraw')

end

function TogglePage(currentValue)

  currentValue = tonumber(currentValue)
  local colorPage = SKIN:GetVariable('colorPage')

  if currentValue == 0 then
    SKIN:Bang('!SetVariable', 'showPageFile', '1')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'showPageFile', '1', cpuSettingsPath)
    SKIN:Bang('!ShowMeterGroup', 'CpuPage', cpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'PageLabelString', 'Hidden', '0', cpuMeterPath)
    SKIN:Bang('!WriteKeyValue', 'PageFractionString', 'Hidden', '0', cpuMeterPath)
    SKIN:Bang('!WriteKeyValue', 'PageValueString', 'Hidden', '0', cpuMeterPath)
    SKIN:Bang('!WriteKeyValue', 'PageBar', 'Hidden', '0', cpuMeterPath)
    SKIN:Bang('!SetOption', 'PageLabelString', 'Y', '#*rowSpacing*#R', cpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'PageLabelString', 'Y', '#*rowSpacing*#R', cpuMeterPath)
    SKIN:Bang('!SetOption', 'GraphLines', 'LineColor18', colorPage, cpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'GraphLines', 'LineColor18', colorPage, cpuMeterPath)

    SKIN:Bang('!SetOption', 'PageFileButton', 'ImageName', '#*imgPath*#Settings\\0a.png')
    SKIN:Bang('!WriteKeyValue', 'PageFileButton', 'ImageName', '#*imgPath*#Settings\\0a.png')
  else
    SKIN:Bang('!SetVariable', 'showPageFile', '0')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'showPageFile', '0', cpuSettingsPath)
    SKIN:Bang('!HideMeterGroup', 'CpuPage', cpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'PageLabelString', 'Hidden', '1', cpuMeterPath)
    SKIN:Bang('!WriteKeyValue', 'PageFractionString', 'Hidden', '1', cpuMeterPath)
    SKIN:Bang('!WriteKeyValue', 'PageValueString', 'Hidden', '1', cpuMeterPath)
    SKIN:Bang('!WriteKeyValue', 'PageBar', 'Hidden', '1', cpuMeterPath)
    SKIN:Bang('!SetOption', 'PageLabelString', 'Y', 'R', cpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'PageLabelString', 'Y', 'R', cpuMeterPath)
    SKIN:Bang('!SetOption', 'GraphLines', 'LineColor18', '0,0,0,0', cpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'GraphLines', 'LineColor18', '0,0,0,0', cpuMeterPath)

    SKIN:Bang('!SetOption', 'PageFileButton', 'ImageName', '#*imgPath*#Settings\\0.png')
    SKIN:Bang('!WriteKeyValue', 'PageFileButton', 'ImageName', '#*imgPath*#Settings\\0.png')
  end

  SKIN:Bang('!UpdateMeterGroup', 'CpuPage', cpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'LineGraph', cpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'Background', cpuMeterConfig)
  SKIN:Bang('!Redraw', cpuMeterConfig)
  SKIN:Bang('!UpdateMeter', 'PageFileButton')
  SKIN:Bang('!Redraw')

end

function ToggleCoreTemps(currentValue, isHwinfoAvailable, cpuCores)

  if isHwinfoAvailable == 1 then
    if currentValue == 0 then
      SKIN:Bang('!SetVariable', 'showCoreTemps', '1')
      SKIN:Bang('!WriteKeyValue', 'Variables', 'showCoreTemps', '1', cpuSettingsPath)

      SKIN:Bang('!CommandMeasure', 'MeasureCpuConfigScript', 'ToggleTemps(' .. cpuCores .. ', true)', cpuMeterConfig)
      SKIN:Bang('!SetOption', 'CoreTempsButton', 'ImageName', '#*imgPath*#Settings\\0a.png')
      SKIN:Bang('!WriteKeyValue', 'CoreTempsButton', 'ImageName', '#*imgPath*#Settings\\0a.png')
    else
      SKIN:Bang('!SetVariable', 'showCoreTemps', '0')
      SKIN:Bang('!WriteKeyValue', 'Variables', 'showCoreTemps', '0', cpuSettingsPath)
      SKIN:Bang('!CommandMeasure', 'MeasureCpuConfigScript', 'ToggleTemps(' .. cpuCores .. ', false)', cpuMeterConfig)
      SKIN:Bang('!SetOption', 'CoreTempsButton', 'ImageName', '#*imgPath*#Settings\\0.png')
      SKIN:Bang('!WriteKeyValue', 'CoreTempsButton', 'ImageName', '#*imgPath*#Settings\\0.png')
    end

  SKIN:Bang('!UpdateMeterGroup', 'CoreTemps', cpuMeterConfig)
  SKIN:Bang('!Redraw', cpuMeterConfig)
  SKIN:Bang('!UpdateMeter', 'CoreTempsButton')
  SKIN:Bang('!Redraw')

  else
    SKIN:Bang('!Log', isHwinfoAvailable .. ' | Cannot display core temperatures, for HWiNFO is not running!', 'Warning')
  end

end

function ToggleCpuFan(currentValue, isHwinfoAvailable, showCpuClock, showLineGraph)

  if isHwinfoAvailable == 1 then
    if currentValue == 0 then
      SKIN:Bang('!SetVariable', 'showCpuFan', '1')
      SKIN:Bang('!WriteKeyValue', 'Variables', 'showCpuFan', '1', cpuSettingsPath)

      SKIN:Bang('!ShowMeterGroup', 'CpuFanAlt', cpuMeterConfig)
      SKIN:Bang('!WriteKeyValue', 'FanAltLabelString', 'Hidden', '0', cpuMeterPath)
      SKIN:Bang('!WriteKeyValue', 'FanAltValueString', 'Hidden', '0', cpuMeterPath)
      SKIN:Bang('!SetOption', 'FanAltLabelString', 'Y', '#*rowSpacing*#R', cpuMeterConfig)
      SKIN:Bang('!WriteKeyValue', 'FanAltLabelString', 'Y', '#*rowSpacing*#R', cpuMeterPath)
      SKIN:Bang('!SetOption', 'GraphLines', 'Y', 'R', cpuMeterConfig)
      SKIN:Bang('!WriteKeyValue', 'GraphLines', 'Y', 'R', cpuMeterPath)

      SetLineGraphY(showLineGraph, 1, showCpuClock)

      SKIN:Bang('!SetOption', 'CpuFanButton', 'ImageName', '#*imgPath*#Settings\\0a.png')
      SKIN:Bang('!WriteKeyValue', 'CpuFanButton', 'ImageName', '#*imgPath*#Settings\\0a.png')
    else
      SKIN:Bang('!SetVariable', 'showCpuFan', '0')
      SKIN:Bang('!WriteKeyValue', 'Variables', 'showCpuFan', '0', cpuSettingsPath)
      SKIN:Bang('!HideMeterGroup', 'CpuFanAlt', cpuMeterConfig)
      SKIN:Bang('!WriteKeyValue', 'FanAltLabelString', 'Hidden', '1', cpuMeterPath)
      SKIN:Bang('!WriteKeyValue', 'FanAltValueString', 'Hidden', '1', cpuMeterPath)
      SKIN:Bang('!SetOption', 'FanAltLabelString', 'Y', 'R', cpuMeterConfig)
      SKIN:Bang('!WriteKeyValue', 'FanAltLabelString', 'Y', 'R', cpuMeterPath)

      SetLineGraphY(showLineGraph, 0, showCpuClock)

      SKIN:Bang('!SetOption', 'CpuFanButton', 'ImageName', '#*imgPath*#Settings\\0.png')
      SKIN:Bang('!WriteKeyValue', 'CpuFanButton', 'ImageName', '#*imgPath*#Settings\\0.png')
    end
  else
        SKIN:Bang('!Log', 'Cannot display fan speed, for HWiNFO is not running!', 'Error')
  end

  SKIN:Bang('!UpdateMeterGroup', 'CpuFanAlt', cpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'LineGraph', cpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'Background', cpuMeterConfig)
  SKIN:Bang('!Redraw', cpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'ToggleButtons')
  SKIN:Bang('!Redraw')

end

function ToggleCpuClock(currentValue, isHwinfoAvailable, showCpuFan, showLineGraph)

  if isHwinfoAvailable == 1 then
    if currentValue == 0 then
      SKIN:Bang('!SetVariable', 'showCpuClock', '1')
      SKIN:Bang('!WriteKeyValue', 'Variables', 'showCpuClock', '1', cpuSettingsPath)

      SKIN:Bang('!ShowMeterGroup', 'CpuClock', cpuMeterConfig)
      SKIN:Bang('!WriteKeyValue', 'CpuClockLabelString', 'Hidden', '0', cpuMeterPath)
      SKIN:Bang('!WriteKeyValue', 'CpuClockValueString', 'Hidden', '0', cpuMeterPath)
      SKIN:Bang('!SetOption', 'CpuClockLabelString', 'Y', '#*rowSpacing*#R', cpuMeterConfig)
      SKIN:Bang('!WriteKeyValue', 'CpuClockLabelString', 'Y', '#*rowSpacing*#R', cpuMeterPath)
      SKIN:Bang('!SetOption', 'GraphLines', 'Y', 'R', cpuMeterConfig)
      SKIN:Bang('!WriteKeyValue', 'GraphLines', 'Y', 'R', cpuMeterPath)

      SetLineGraphY(showLineGraph, showCpuFan, 1)

      SKIN:Bang('!SetOption', 'CpuClockButton', 'ImageName', '#*imgPath*#Settings\\0a.png')
      SKIN:Bang('!WriteKeyValue', 'CpuClockButton', 'ImageName', '#*imgPath*#Settings\\0a.png')
    else
      SKIN:Bang('!SetVariable', 'showCpuClock', '0')
      SKIN:Bang('!WriteKeyValue', 'Variables', 'showCpuClock', '0', cpuSettingsPath)
      SKIN:Bang('!HideMeterGroup', 'CpuClock', cpuMeterConfig)
      SKIN:Bang('!WriteKeyValue', 'CpuClockLabelString', 'Hidden', '1', cpuMeterPath)
      SKIN:Bang('!WriteKeyValue', 'CpuClockValueString', 'Hidden', '1', cpuMeterPath)
      SKIN:Bang('!SetOption', 'CpuClockLabelString', 'Y', 'R', cpuMeterConfig)
      SKIN:Bang('!WriteKeyValue', 'CpuClockLabelString', 'Y', 'R', cpuMeterPath)

      SetLineGraphY(showLineGraph, showCpuFan, 0)

      SKIN:Bang('!SetOption', 'CpuClockButton', 'ImageName', '#*imgPath*#Settings\\0.png')
      SKIN:Bang('!WriteKeyValue', 'CpuClockButton', 'ImageName', '#*imgPath*#Settings\\0.png')
    end

  SKIN:Bang('!UpdateMeterGroup', 'CpuClock', cpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'LineGraph', cpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'Background', cpuMeterConfig)
  SKIN:Bang('!Redraw', cpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'ToggleButtons')
  SKIN:Bang('!Redraw')
  else
    SKIN:Bang('!Log', 'Cannot display CPU clock speed, for HWiNFO is not running!', 'Error')
  end

end

function ToggleLineGraph(currentValue, showCpuFan, showCpuClock)

  if currentValue == 0 then
    SKIN:Bang('!SetVariable', 'showLineGraph', '1')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'showLineGraph', '1', cpuSettingsPath)

    SKIN:Bang('!ShowMeterGroup', 'LineGraph', cpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'GraphLines', 'Hidden', '0', cpuMeterPath)
    SKIN:Bang('!WriteKeyValue', 'GraphBorder', 'Hidden', '0', cpuMeterPath)

    SKIN:Bang('!SetOption', 'GraphLines', 'Y', 'R', cpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'GraphLines', 'Y', 'R', cpuMeterPath)

    SetLineGraphY(1, showCpuFan, showCpuClock)

    SKIN:Bang('!SetOption', 'LineGraphButton', 'ImageName', '#*imgPath*#Settings\\0a.png')
    SKIN:Bang('!WriteKeyValue', 'LineGraphButton', 'ImageName', '#*imgPath*#Settings\\0a.png')
  else
    SKIN:Bang('!SetVariable', 'showLineGraph', '0')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'showLineGraph', '0', cpuSettingsPath)

    SKIN:Bang('!HideMeterGroup', 'LineGraph', cpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'GraphLines', 'Hidden', '1', cpuMeterPath)
    SKIN:Bang('!WriteKeyValue', 'GraphBorder', 'Hidden', '1', cpuMeterPath)

    SetLineGraphY(0, showCpuFan, showCpuClock)

    SKIN:Bang('!SetOption', 'LineGraphButton', 'ImageName', '#*imgPath*#Settings\\0.png')
    SKIN:Bang('!WriteKeyValue', 'LineGraphButton', 'ImageName', '#*imgPath*#Settings\\0.png')
  end

  SKIN:Bang('!UpdateMeterGroup', 'LineGraph', cpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'Background', cpuMeterConfig)
  SKIN:Bang('!Redraw', cpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'ToggleButtons')
  SKIN:Bang('!Redraw')

end

function SetLineGraphY(showLineGraph, showCpuFan, showCpuClock)

  -- SKIN:Bang('!Log', showLineGraph .. ', ' .. showCpuFan .. ', ' .. showCpuClock, 'Debug')

  if showCpuFan == 1 or showCpuClock == 1 then
    if showLineGraph == 1 then
      SKIN:Bang('!SetOption', 'GraphLines', 'Y', 'R', cpuMeterConfig)
    else
      SKIN:Bang('!SetOption', 'GraphLines', 'Y', '-2R', cpuMeterConfig)
    end
  else
    if showLineGraph == 1 then
      SKIN:Bang('!SetOption', 'GraphLines', 'Y', '4R', cpuMeterConfig)
    else
      SKIN:Bang('!SetOption', 'GraphLines', 'Y', '3R', cpuMeterConfig)
    end
  end

end

function ConfigureConfigErrors(state, showCoreTemps, showCpuFan, showCpuClock)

  -- if state == 0 then
  --   SKIN:Bang('!SetOptionGroup', 'ToggleButtonsHwinfo', 'ImageName', '#*imgPath*#Settings\\0lock.png')
  --   SKIN:Bang('!WriteKeyValue', 'CoreTempsButton', 'ImageName', '#*imgPath*#Settings\\0lock.png')
  --   SKIN:Bang('!WriteKeyValue', 'CpuFanButton', 'ImageName', '#*imgPath*#Settings\\0lock.png')
  --   SKIN:Bang('!WriteKeyValue', 'CpuClockButton', 'ImageName', '#*imgPath*#Settings\\0lock.png')
  --   SKIN:Bang('!UpdateMeterGroup', 'ToggleButtonsHwinfo')
  --   SKIN:Bang('!Redraw')
  -- else
  --   if showCoreTemps == 1 then
  --     SKIN:Bang('!SetOption', 'CoreTempsButton', 'ImageName', '#*imgPath*#Settings\\0a.png')
  --     SKIN:Bang('!WriteKeyValue', 'CoreTempsButton', 'ImageName', '#*imgPath*#Settings\\0a.png')
  --     SKIN:Bang('!UpdateMeter', 'CoreTempsButton')
  --     SKIN:Bang('!Redraw')
  --   else
  --     SKIN:Bang('!SetOption', 'CoreTempsButton', 'ImageName', '#*imgPath*#Settings\\0.png')
  --     SKIN:Bang('!WriteKeyValue', 'CoreTempsButton', 'ImageName', '#*imgPath*#Settings\\0.png')
  --     SKIN:Bang('!UpdateMeter', 'CoreTempsButton')
  --     SKIN:Bang('!Redraw')
  --   end
  --
  --   if showCpuFan == 1 then
  --     SKIN:Bang('!SetOption', 'CpuFanButton', 'ImageName', '#*imgPath*#Settings\\0a.png')
  --     SKIN:Bang('!WriteKeyValue', 'CpuFanButton', 'ImageName', '#*imgPath*#Settings\\0a.png')
  --     SKIN:Bang('!UpdateMeter', 'CpuFanButton')
  --     SKIN:Bang('!Redraw')
  --   else
  --     SKIN:Bang('!SetOption', 'CpuFanButton', 'ImageName', '#*imgPath*#Settings\\0.png')
  --     SKIN:Bang('!WriteKeyValue', 'CpuFanButton', 'ImageName', '#*imgPath*#Settings\\0.png')
  --     SKIN:Bang('!UpdateMeter', 'CpuFanButton')
  --     SKIN:Bang('!Redraw')
  --   end
  --
  --   if showCpuClock == 1 then
  --     SKIN:Bang('!SetOption', 'CpuClockButton', 'ImageName', '#*imgPath*#Settings\\0a.png')
  --     SKIN:Bang('!WriteKeyValue', 'CpuClockButton', 'ImageName', '#*imgPath*#Settings\\0a.png')
  --     SKIN:Bang('!UpdateMeter', 'CpuClockButton')
  --     SKIN:Bang('!Redraw')
  --   else
  --     SKIN:Bang('!SetOption', 'CpuClockButton', 'ImageName', '#*imgPath*#Settings\\0.png')
  --     SKIN:Bang('!WriteKeyValue', 'CpuClockButton', 'ImageName', '#*imgPath*#Settings\\0.png')
  --     SKIN:Bang('!UpdateMeter', 'CpuClockButton')
  --     SKIN:Bang('!Redraw')
  --   end
  -- end

end

function SetCpuName(name)

  SKIN:Bang('!SetVariable', 'cpuName', name)
  SKIN:Bang('!WriteKeyValue', 'Variables', 'cpuName', name, cpuSettingsPath)
  SKIN:Bang('!UpdateMeasure', 'MeasureCustomCpuName')
  SKIN:Bang('!UpdateMeter', 'CustomCpuNameInputBox')
  SKIN:Bang('!Redraw')

  if name == "" then
    SKIN:Bang('!SetOption', 'CpuDisplayNameString', 'Text', '%1', cpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'CpuDisplayNameString', 'Text', '%1', cpuMeterPath)
    SKIN:Bang('!UpdateMeter', 'CpuDisplayNameString', cpuMeterConfig)
    SKIN:Bang('!Redraw', cpuMeterConfig)
  else
    SKIN:Bang('!SetOption', 'CpuDisplayNameString', 'Text', name, cpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'CpuDisplayNameString', 'Text', name, cpuMeterPath)
    SKIN:Bang('!UpdateMeter', 'CpuDisplayNameString', cpuMeterConfig)
    SKIN:Bang('!Redraw', cpuMeterConfig)
  end

end
