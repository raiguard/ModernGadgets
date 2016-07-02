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

  if currentValue == 0 then
    SKIN:Bang('!SetVariable', 'showCpuName', '1')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'showCpuName', '1', cpuSettingsPath)
    SKIN:Bang('!ShowMeter', 'CpuDisplayNameString', cpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'CpuDisplayNameString', 'Hidden', '0', cpuMeterPath)
    SKIN:Bang('!SetOption', 'CpuDisplayNameString', 'Y', '#*rowSpacing*#R', cpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'CpuDisplayNameString', 'Y', '#*rowSpacing*#R', cpuMeterPath)
  else
    SKIN:Bang('!SetVariable', 'showCpuName', '0')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'showCpuName', '0', cpuSettingsPath)
    SKIN:Bang('!HideMeter', 'CpuDisplayNameString', cpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'CpuDisplayNameString', 'Hidden', '1', cpuMeterPath)
    SKIN:Bang('!SetOption', 'CpuDisplayNameString', 'Y', 'R', cpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'CpuDisplayNameString', 'Y', 'R', cpuMeterPath)
  end

  SKIN:Bang('!UpdateMeter', 'CpuDisplayNameString', cpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'Background', cpuMeterConfig)
  SKIN:Bang('!Redraw', cpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'ShowCpuName')
  SKIN:Bang('!Redraw')

end

function TogglePage(currentValue)

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
  end

  SKIN:Bang('!UpdateMeterGroup', 'CpuPage', cpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'LineGraph', cpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'Background', cpuMeterConfig)
  SKIN:Bang('!Redraw', cpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'ShowPageFile')
  SKIN:Bang('!Redraw')

end

function ToggleCoreTemps(currentValue, isHwinfoAvailable, cpuCores)


  if currentValue == 0 then
    SKIN:Bang('!SetVariable', 'showCoreTemps', '1')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'showCoreTemps', '1', cpuSettingsPath)

    if isHwinfoAvailable == 1 then
      SKIN:Bang('!CommandMeasure', 'MeasureCpuConfigScript', 'ToggleTemps(' .. cpuCores .. ', true)', cpuMeterConfig)
    else
      SKIN:Bang('!Log', isHwinfoAvailable .. ' | Cannot display core temperatures, for HWiNFO is not running!', 'Error')
      SKIN:Bang('!ShowMeter', 'CoreTempsErrorImage')
      SKIN:Bang('!WriteKeyValue', 'CoreTempsErrorImage', 'Hidden', '0')
    end

  else
    SKIN:Bang('!SetVariable', 'showCoreTemps', '0')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'showCoreTemps', '0', cpuSettingsPath)
    SKIN:Bang('!CommandMeasure', 'MeasureCpuConfigScript', 'ToggleTemps(' .. cpuCores .. ', false)', cpuMeterConfig)
    SKIN:Bang('!HideMeter', 'CoreTempsErrorImage')
    SKIN:Bang('!WriteKeyValue', 'CoreTempsErrorImage', 'Hidden', '1')
  end

  SKIN:Bang('!UpdateMeterGroup', 'ShowCoreTemps')
  SKIN:Bang('!Redraw')

end

function ToggleCpuFan(currentValue, isHwinfoAvailable, showCpuClock, showLineGraph)

  if currentValue == 0 then
    SKIN:Bang('!SetVariable', 'showCpuFan', '1')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'showCpuFan', '1', cpuSettingsPath)

    if isHwinfoAvailable == 1 then
      SKIN:Bang('!ShowMeterGroup', 'CpuFanAlt', cpuMeterConfig)
      SKIN:Bang('!WriteKeyValue', 'FanAltLabelString', 'Hidden', '0', cpuMeterPath)
      SKIN:Bang('!WriteKeyValue', 'FanAltValueString', 'Hidden', '0', cpuMeterPath)
      SKIN:Bang('!SetOption', 'FanAltLabelString', 'Y', '#*rowSpacing*#R', cpuMeterConfig)
      SKIN:Bang('!WriteKeyValue', 'FanAltLabelString', 'Y', '#*rowSpacing*#R', cpuMeterPath)
      SKIN:Bang('!SetOption', 'GraphLines', 'Y', 'R', cpuMeterConfig)
      SKIN:Bang('!WriteKeyValue', 'GraphLines', 'Y', 'R', cpuMeterPath)

      SetLineGraphY(showLineGraph, 1, showCpuClock)
    else
      SKIN:Bang('!Log', 'Cannot display fan speed, for HWiNFO is not running!', 'Error')
      SKIN:Bang('!ShowMeter', 'CpuFanErrorImage')
      SKIN:Bang('!WriteKeyValue', 'CpuFanErrorImage', 'Hidden', '0')

      SetLineGraphY(showLineGraph, 0, showCpuClock)
    end

  else
    SKIN:Bang('!SetVariable', 'showCpuFan', '0')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'showCpuFan', '0', cpuSettingsPath)
    SKIN:Bang('!HideMeterGroup', 'CpuFanAlt', cpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'FanAltLabelString', 'Hidden', '1', cpuMeterPath)
    SKIN:Bang('!WriteKeyValue', 'FanAltValueString', 'Hidden', '1', cpuMeterPath)
    SKIN:Bang('!SetOption', 'FanAltLabelString', 'Y', 'R', cpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'FanAltLabelString', 'Y', 'R', cpuMeterPath)
    SKIN:Bang('!HideMeter', 'CpuFanErrorImage')
    SKIN:Bang('!WriteKeyValue', 'CpuFanErrorImage', 'Hidden', '1')

    SetLineGraphY(showLineGraph, 0, showCpuClock)

  end

  SKIN:Bang('!UpdateMeterGroup', 'CpuFanAlt', cpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'LineGraph', cpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'Background', cpuMeterConfig)
  SKIN:Bang('!Redraw', cpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'ShowCpuFan')
  SKIN:Bang('!Redraw')

end

function ToggleCpuClock(currentValue, isHwinfoAvailable, showCpuFan, showLineGraph)

  if currentValue == 0 then
    SKIN:Bang('!SetVariable', 'showCpuClock', '1')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'showCpuClock', '1', cpuSettingsPath)

    if isHwinfoAvailable == 1 then
      SKIN:Bang('!ShowMeterGroup', 'CpuClock', cpuMeterConfig)
      SKIN:Bang('!WriteKeyValue', 'CpuClockLabelString', 'Hidden', '0', cpuMeterPath)
      SKIN:Bang('!WriteKeyValue', 'CpuClockValueString', 'Hidden', '0', cpuMeterPath)
      SKIN:Bang('!SetOption', 'CpuClockLabelString', 'Y', '#*rowSpacing*#R', cpuMeterConfig)
      SKIN:Bang('!WriteKeyValue', 'CpuClockLabelString', 'Y', '#*rowSpacing*#R', cpuMeterPath)
      SKIN:Bang('!SetOption', 'GraphLines', 'Y', 'R', cpuMeterConfig)
      SKIN:Bang('!WriteKeyValue', 'GraphLines', 'Y', 'R', cpuMeterPath)

      SetLineGraphY(showLineGraph, showCpuFan, 1)
    else
      SKIN:Bang('!Log', 'Cannot display CPU clock speed, for HWiNFO is not running!', 'Error')
      SKIN:Bang('!ShowMeter', 'CpuClockErrorImage')
      SKIN:Bang('!WriteKeyValue', 'CpuClockErrorImage', 'Hidden', '0')

      SetLineGraphY(showLineGraph, showCpuFan, 0)
    end

  else
    SKIN:Bang('!SetVariable', 'showCpuClock', '0')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'showCpuClock', '0', cpuSettingsPath)
    SKIN:Bang('!HideMeterGroup', 'CpuClock', cpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'CpuClockLabelString', 'Hidden', '1', cpuMeterPath)
    SKIN:Bang('!WriteKeyValue', 'CpuClockValueString', 'Hidden', '1', cpuMeterPath)
    SKIN:Bang('!SetOption', 'CpuClockLabelString', 'Y', 'R', cpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'CpuClockLabelString', 'Y', 'R', cpuMeterPath)
    SKIN:Bang('!HideMeter', 'CpuClockErrorImage')
    SKIN:Bang('!WriteKeyValue', 'CpuClockErrorImage', 'Hidden', '1')

    SetLineGraphY(showLineGraph, showCpuFan, 0)

  end

  SKIN:Bang('!UpdateMeterGroup', 'CpuClock', cpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'LineGraph', cpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'Background', cpuMeterConfig)
  SKIN:Bang('!Redraw', cpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'ShowCpuClock')
  SKIN:Bang('!Redraw')

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
  else
    SKIN:Bang('!SetVariable', 'showLineGraph', '0')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'showLineGraph', '0', cpuSettingsPath)

    SKIN:Bang('!HideMeterGroup', 'LineGraph', cpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'GraphLines', 'Hidden', '1', cpuMeterPath)
    SKIN:Bang('!WriteKeyValue', 'GraphBorder', 'Hidden', '1', cpuMeterPath)

    SetLineGraphY(0, showCpuFan, showCpuClock)
  end

  SKIN:Bang('!UpdateMeterGroup', 'LineGraph', cpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'Background', cpuMeterConfig)
  SKIN:Bang('!Redraw', cpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'ShowLineGraph')
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

function ConfigureConfigErrors(state, showCoreTemps, showCpuFan)

  if state == 1 or showCoreTemps == 0 then
    SKIN:Bang('!HideMeter', 'CoreTempsErrorImage')
    SKIN:Bang('!WriteKeyValue', 'CoreTempsErrorImage', 'Hidden', '1')
    SKIN:Bang('!Redraw')
  elseif state == 0 and showCoreTemps == 1 then
    SKIN:Bang('!ShowMeter', 'CoreTempsErrorImage')
    SKIN:Bang('!WriteKeyValue', 'CoreTempsErrorImage', 'Hidden', '0')
    SKIN:Bang('!Redraw')
  end

  if state == 1 or showCpuFan == 0 then
    SKIN:Bang('!HideMeter', 'CpuFanErrorImage')
    SKIN:Bang('!WriteKeyValue', 'CpuFanErrorImage', 'Hidden', '1')
    SKIN:Bang('!Redraw')
  elseif state == 0 and showCpuFan == 1 then
    SKIN:Bang('!ShowMeter', 'CpuFanErrorImage')
    SKIN:Bang('!WriteKeyValue', 'CpuFanErrorImage', 'Hidden', '0')
    SKIN:Bang('!Redraw')
  end

end
