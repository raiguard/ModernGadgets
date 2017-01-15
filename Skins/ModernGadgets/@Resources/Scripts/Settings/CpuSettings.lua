-- MODERNGADGETS CPU SETTINGS SCRIPT
-- By iamanai
--
-- Consists of hard-coded functions to change settigns in CPU Meter
--

isDbg = false

function Initialize()

  cpuSettingsPath = SKIN:GetVariable('cpuSettingsPath')
  cpuMeterPath = SKIN:GetVariable('cpuMeterPath')
  cpuMeterConfig = SKIN:GetVariable('cpuMeterConfig')

end

function Update() end

function ToggleCpuName(currentValue)

  LogHelper(tostring(currentValue), 'Debug')

  currentValue = tonumber(currentValue)

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

end

function TogglePage(currentValue)

  LogHelper(tostring(currentValue), 'Debug')

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
    SKIN:Bang('!SetOption', 'GraphLines', 'LineColor22', colorPage, cpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'GraphLines', 'LineColor22', colorPage, cpuMeterPath)
  else
    SKIN:Bang('!SetVariable', 'showPageFile', '0')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'showPageFile', '0', cpuSettingsPath)
    SKIN:Bang('!HideMeterGroup', 'CpuPage', cpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'PageLabelString', 'Hidden', '1', cpuMeterPath)
    SKIN:Bang('!WriteKeyValue', 'PageFractionString', 'Hidden', '1', cpuMeterPath)
    SKIN:Bang('!WriteKeyValue', 'PageValueString', 'Hidden', '1', cpuMeterPath)
    SKIN:Bang('!WriteKeyValue', 'PageBar', 'Hidden', '1', cpuMeterPath)
    SKIN:Bang('!SetOption', 'PageLabelString', 'Y', '-#*barTextOffset*#R', cpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'PageLabelString', 'Y', '-#*barTextOffset*#R', cpuMeterPath)
    SKIN:Bang('!SetOption', 'GraphLines', 'LineColor22', '0,0,0,0', cpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'GraphLines', 'LineColor22', '0,0,0,0', cpuMeterPath)
  end

  SKIN:Bang('!UpdateMeterGroup', 'CpuPage', cpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'LineGraph', cpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'Background', cpuMeterConfig)
  SKIN:Bang('!Redraw', cpuMeterConfig)

end

function ToggleCoreTemps(currentValue, isHwinfoAvailable, cpuCores)

  LogHelper(tostring(currentValue), 'Debug')

  currentValue = tonumber(currentValue)
  isHwinfoAvailable = tonumber(isHwinfoAvailable)
  cpuCores = tonumber(cpuCores)

  if isHwinfoAvailable == 1 then
    if currentValue == 0 then
      SKIN:Bang('!SetVariable', 'showCoreTemps', '1')
      SKIN:Bang('!WriteKeyValue', 'Variables', 'showCoreTemps', '1', cpuSettingsPath)

      SKIN:Bang('!CommandMeasure', 'MeasureCpuConfigScript', 'ToggleTemps(' .. cpuCores .. ', true)', cpuMeterConfig)
    else
      SKIN:Bang('!SetVariable', 'showCoreTemps', '0')
      SKIN:Bang('!WriteKeyValue', 'Variables', 'showCoreTemps', '0', cpuSettingsPath)
      SKIN:Bang('!CommandMeasure', 'MeasureCpuConfigScript', 'ToggleTemps(' .. cpuCores .. ', false)', cpuMeterConfig)
    end

  SKIN:Bang('!UpdateMeterGroup', 'CoreTemps', cpuMeterConfig)
  SKIN:Bang('!Redraw', cpuMeterConfig)

  else
    SKIN:Bang('!Log', isHwinfoAvailable .. ' | Cannot display core temperatures, for HWiNFO is not running!', 'Warning')
  end

end

function ToggleCpuFan(currentValue, isHwinfoAvailable, showCpuClock, showLineGraph)

  LogHelper(tostring(currentValue), 'Debug')

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
    else
      SKIN:Bang('!SetVariable', 'showCpuFan', '0')
      SKIN:Bang('!WriteKeyValue', 'Variables', 'showCpuFan', '0', cpuSettingsPath)
      SKIN:Bang('!HideMeterGroup', 'CpuFanAlt', cpuMeterConfig)
      SKIN:Bang('!WriteKeyValue', 'FanAltLabelString', 'Hidden', '1', cpuMeterPath)
      SKIN:Bang('!WriteKeyValue', 'FanAltValueString', 'Hidden', '1', cpuMeterPath)
      SKIN:Bang('!SetOption', 'FanAltLabelString', 'Y', 'R', cpuMeterConfig)
      SKIN:Bang('!WriteKeyValue', 'FanAltLabelString', 'Y', 'R', cpuMeterPath)

      SetLineGraphY(showLineGraph, 0, showCpuClock)
    end
  else
        SKIN:Bang('!Log', 'Cannot display fan speed, for HWiNFO is not running!', 'Error')
  end

  SKIN:Bang('!UpdateMeterGroup', 'CpuFanAlt', cpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'LineGraph', cpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'Background', cpuMeterConfig)
  SKIN:Bang('!Redraw', cpuMeterConfig)

end

function ToggleCpuClock(currentValue, showCpuFan, showLineGraph)

  LogHelper(tostring(currentValue), 'Debug')

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
  else
    SKIN:Bang('!SetVariable', 'showCpuClock', '0')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'showCpuClock', '0', cpuSettingsPath)
    SKIN:Bang('!HideMeterGroup', 'CpuClock', cpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'CpuClockLabelString', 'Hidden', '1', cpuMeterPath)
    SKIN:Bang('!WriteKeyValue', 'CpuClockValueString', 'Hidden', '1', cpuMeterPath)
    SKIN:Bang('!SetOption', 'CpuClockLabelString', 'Y', 'R', cpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'CpuClockLabelString', 'Y', 'R', cpuMeterPath)

    SetLineGraphY(showLineGraph, showCpuFan, 0)
  end

SKIN:Bang('!UpdateMeterGroup', 'CpuClock', cpuMeterConfig)
SKIN:Bang('!UpdateMeterGroup', 'LineGraph', cpuMeterConfig)
SKIN:Bang('!UpdateMeterGroup', 'Background', cpuMeterConfig)
SKIN:Bang('!Redraw', cpuMeterConfig)

end

function ToggleLineGraph(currentValue, showCpuFan, showCpuClock)

  LogHelper(tostring(currentValue), 'Debug')

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
  SKIN:Bang('!UpdateMeterGroup', 'ToggleButtons')
  SKIN:Bang('!Redraw')

end

function SetLineGraphY(showLineGraph, showCpuFan, showCpuClock)

  -- SKIN:Bang('!Log', showLineGraph .. ', ' .. showCpuFan .. ', ' .. showCpuClock, 'Debug')

  if showCpuFan == 1 or showCpuClock == 1 then
    if showLineGraph == 1 then
      SKIN:Bang('!SetOption', 'GraphLines', 'Y', '(#*barTextOffset*# + 1)R', cpuMeterConfig)
      SKIN:Bang('!WriteKeyValue', 'GraphLines', 'Y', '(#*barTextOffset*# + 1)R', cpuMeterPath)
    else
      SKIN:Bang('!SetOption', 'GraphLines', 'Y', '(#*barTextOffset*# + 1)R', cpuMeterConfig)
      SKIN:Bang('!WriteKeyValue', 'GraphLines', 'Y', '(#*barTextOffset*# + 1)R', cpuMeterPath)
    end
  else
    if showLineGraph == 1 then
      SKIN:Bang('!SetOption', 'GraphLines', 'Y', '5R', cpuMeterConfig)
      SKIN:Bang('!WriteKeyValue', 'GraphLines', 'Y', '5R', cpuMeterPath)
    else
      SKIN:Bang('!SetOption', 'GraphLines', 'Y', '2R', cpuMeterConfig)
      SKIN:Bang('!WriteKeyValue', 'GraphLines', 'Y', '2R', cpuMeterPath)
    end
  end

end

function SetCpuName(name)

  if name == "" then
    SKIN:Bang('!SetVariable', 'cpuName', 'auto')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'cpuName', 'auto', cpuSettingsPath)
    SKIN:Bang('!SetOption', 'CpuDisplayNameString', 'Text', '%1', cpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'CpuDisplayNameString', 'Text', '%1', cpuMeterPath)
    SKIN:Bang('!UpdateMeter', 'CpuDisplayNameString', cpuMeterConfig)
    SKIN:Bang('!Redraw', cpuMeterConfig)
  else
    SKIN:Bang('!SetVariable', 'cpuName', name)
    SKIN:Bang('!WriteKeyValue', 'Variables', 'cpuName', name, cpuSettingsPath)
    SKIN:Bang('!SetOption', 'CpuDisplayNameString', 'Text', name, cpuMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'CpuDisplayNameString', 'Text', name, cpuMeterPath)
    SKIN:Bang('!UpdateMeter', 'CpuDisplayNameString', cpuMeterConfig)
    SKIN:Bang('!Redraw', cpuMeterConfig)
  end

end

function UpdateSettings()

  local showCpuName = math.abs(tonumber(SKIN:GetVariable('showCpuName')) - 1)
  local showPageFile = math.abs(tonumber(SKIN:GetVariable('showPageFile')) - 1)
  local showCoreTemps = math.abs(tonumber(SKIN:GetVariable('showCoreTemps')) - 1)
  local showCpuFan = tonumber(SKIN:GetVariable('showCpuFan'))
  local showCpuClock = tonumber(SKIN:GetVariable('showCpuClock'))
  local showLineGraph = tonumber(SKIN:GetVariable('showLineGraph'))
  local cpuName = tostring(SKIN:GetVariable('cpuName'))
  local isHwinfoAvailable = tonumber(SKIN:GetVariable('isHwinfoAvailable'))
  local cpuCores = tonumber(SKIN:GetVariable('threadCount'))

  if cpuName == 'auto' then cpuName = '' end

  ToggleCpuName(showCpuName)
  TogglePage(showPageFile)
  ToggleCoreTemps(showCoreTemps, isHwinfoAvailable, cpuCores)
  ToggleCpuFan(math.abs(showCpuFan - 1), isHwinfoAvailable, showLineGraph, showCpuClock)
  ToggleCpuClock(math.abs(showCpuClock - 1), isHwinfoAvailable, showLineGraph, showCpuFan)
  ToggleLineGraph(math.abs(showLineGraph - 1), showCpuFan, showCpuClock)
  SetCpuName(cpuName)

end

function SetDefaults()

  local isHwinfoAvailable = tonumber(SKIN:GetVariable('isHwinfoAvailable'))
  local cpuCores = tonumber(SKIN:GetVariable('cpuCores'))

  ToggleCpuName(0)
  TogglePage(1)
  ToggleCoreTemps(0, isHwinfoAvailable, cpuCores)
  ToggleCpuFan(0, isHwinfoAvailable, 1, 1)
  ToggleCpuClock(0, isHwinfoAvailable, 1, 1)
  ToggleLineGraph(0, 1, 1)
  SetCpuName('')

end

-- function to make logging messages less cluttered
function LogHelper(message, type)

  if isDbg == true then
    SKIN:Bang("!Log", message, type)
  elseif type ~= 'Debug' then
  	SKIN:Bang("!Log", message, type)
	end

end
