debug = false

function Initialize()

  dofile(SKIN:GetVariable('scriptPath') .. 'Utilities.lua')
  cpuSettingsPath = SKIN:GetVariable('cpuSettingsPath')
  cpuMeterPath = SKIN:GetVariable('cpuMeterPath')
  cpuMeterConfig = SKIN:GetVariable('cpuMeterConfig')

end

function Update() end

function ToggleCpuName(currentValue)

  LogHelper(tostring(currentValue), 'Debug')

  currentValue = tonumber(currentValue)

  if currentValue == 0 then
    SetVariable('showCpuName', '1', cpuSettingsPath, cpuMeterConfig)
    SKIN:Bang('!ShowMeter', 'CpuDisplayNameString', cpuMeterConfig)
    SKIN:Bang('!SetOption', 'CpuDisplayNameString', 'Y', '#*rowSpacing*#R', cpuMeterConfig)
  else
    SKIN:Bang('!SetVariable', 'showCpuName', '0')
    SKIN:Bang('!HideMeter', 'CpuDisplayNameString', cpuMeterConfig)
    SKIN:Bang('!SetOption', 'CpuDisplayNameString', 'Y', 'R', cpuMeterConfig)
  end

  SKIN:Bang('!UpdateMeter', 'CpuDisplayNameString', cpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'Background', cpuMeterConfig)
  SKIN:Bang('!Redraw', cpuMeterConfig)
  UpdateToggles()

end

function TogglePage(currentValue)

  LogHelper(tostring(currentValue), 'Debug')

  currentValue = tonumber(currentValue)
  local colorPage = SKIN:GetVariable('colorPage')

  if currentValue == 0 then
    SetVariable('showPageFile', '1', cpuSettingsPath, cpuMeterConfig)
    SKIN:Bang('!ShowMeterGroup', 'CpuPage', cpuMeterConfig)
    SKIN:Bang('!EnableMeasureGroup', 'CpuPage', cpuMeterConfig)
    SKIN:Bang('!SetOption', 'PageLabelString', 'Y', '#*rowSpacing*#R', cpuMeterConfig)
    SKIN:Bang('!SetOption', 'GraphLines', 'LineColor34', colorPage, cpuMeterConfig)
  else
    SetVariable('showPageFile', '0', cpuSettingsPath, cpuMeterConfig)
    SKIN:Bang('!HideMeterGroup', 'CpuPage', cpuMeterConfig)
    SKIN:Bang('!DisableMeasureGroup', 'CpuPage', cpuMeterConfig)
    SKIN:Bang('!SetOption', 'PageLabelString', 'Y', '-#*barTextOffset*#R', cpuMeterConfig)
    SKIN:Bang('!SetOption', 'GraphLines', 'LineColor34', '0,0,0,0', cpuMeterConfig)
  end

  SKIN:Bang('!UpdateMeterGroup', 'CpuPage', cpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'LineGraph', cpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'Background', cpuMeterConfig)
  SKIN:Bang('!Redraw', cpuMeterConfig)
  UpdateToggles()

end

function ToggleCoreTemps(currentValue, isHwinfoAvailable, cpuCores)

  LogHelper(tostring(currentValue), 'Debug')

  currentValue = tonumber(currentValue)
  isHwinfoAvailable = tonumber(isHwinfoAvailable)
  cpuCores = tonumber(cpuCores)

  if isHwinfoAvailable == 1 then
    if currentValue == 0 then
      SetVariable('showCoreTemps', '1', cpuSettingsPath, cpuMeterConfig)
      SKIN:Bang('!CommandMeasure', 'MeasureCpuConfigScript', 'ToggleTemps(' .. cpuCores .. ', true)', cpuMeterConfig)
    else
      SetVariable('showCoreTemps', '0', cpuSettingsPath, cpuMeterConfig)
      SKIN:Bang('!CommandMeasure', 'MeasureCpuConfigScript', 'ToggleTemps(' .. cpuCores .. ', false)', cpuMeterConfig)
    end

  SKIN:Bang('!UpdateMeterGroup', 'CoreTemps', cpuMeterConfig)
  SKIN:Bang('!Redraw', cpuMeterConfig)
  UpdateToggles()

  else
    SKIN:Bang('!Log', 'Cannot display core temperatures, for HWiNFO is not running!', 'Warning')
  end

end

function ToggleTopProcess(currentValue)

  if currentValue == 0 then
    SetVariable('showTopProcess', '1', cpuSettingsPath, cpuMeterConfig)
    SKIN:Bang('!EnableMeasure', 'MeasureTopProcess', cpuMeterConfig)
    SKIN:Bang('!ShowMeterGroup', 'TopProcess', cpuMeterConfig)
    SKIN:Bang('!SetOption', 'TopProcessLabelString', 'Y', '#*rowSpacing*#R', cpuMeterConfig)
  else
    SetVariable('showTopProcess', '0', cpuSettingsPath, cpuMeterConfig)
    SKIN:Bang('!DisableMeasure', 'MeasureTopProcess', cpuMeterConfig)
    SKIN:Bang('!HideMeterGroup', 'TopProcess', cpuMeterConfig)
    SKIN:Bang('!SetOption', 'TopProcessLabelString', 'Y', 'R', cpuMeterConfig)
  end

  SKIN:Bang('!UpdateMeasure', 'MeasureTopProcess', cpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'TopProcess', cpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'LineGraph', cpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'Background', cpuMeterConfig)
  SKIN:Bang('!Redraw', cpuMeterConfig)
  UpdateToggles()

end

function ToggleCpuFan(currentValue, isHwinfoAvailable)

  LogHelper(tostring(currentValue), 'Debug')

  if isHwinfoAvailable == 1 then
    if currentValue == 0 then
      SetVariable('showCpuFan', '1', cpuSettingsPath, cpuMeterConfig)
      SKIN:Bang('!EnableMeasureGroup', 'CpuFan', cpuMeterConfig)
      SKIN:Bang('!ShowMeterGroup', 'CpuFan', cpuMeterConfig)
      SKIN:Bang('!SetOption', 'FanLabelString', 'Y', '#*rowSpacing*#R', cpuMeterConfig)
    else
      SetVariable('showCpuFan', '0', cpuSettingsPath, cpuMeterConfig)
      SKIN:Bang('!DisableMeasureGroup', 'CpuFan', cpuMeterConfig)
      SKIN:Bang('!HideMeterGroup', 'CpuFan', cpuMeterConfig)
      SKIN:Bang('!SetOption', 'FanLabelString', 'Y', 'R', cpuMeterConfig)
    end
  end

  SKIN:Bang('!UpdateMeasureGroup', 'CpuFan', cpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'CpuFan', cpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'LineGraph', cpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'Background', cpuMeterConfig)
  SKIN:Bang('!Redraw', cpuMeterConfig)
  UpdateToggles()

end

function ToggleCpuClock(currentValue)

  LogHelper(tostring(currentValue), 'Debug')

  if currentValue == 0 then
    SetVariable('showCpuClock', '1', cpuSettingsPath, cpuMeterConfig)
    SKIN:Bang('!EnableMeasureGroup', 'Clock', cpuMeterConfig)
    SKIN:Bang('!ShowMeterGroup', 'CpuClock', cpuMeterConfig)
    SKIN:Bang('!SetOption', 'CpuClockLabelString', 'Y', '#*rowSpacing*#R', cpuMeterConfig)
  else
    SetVariable('showCpuClock', '0', cpuSettingsPath, cpuMeterConfig)
    SKIN:Bang('!DisableMeasureGroup', 'Clock', cpuMeterConfig)
    SKIN:Bang('!HideMeterGroup', 'CpuClock', cpuMeterConfig)
    SKIN:Bang('!SetOption', 'CpuClockLabelString', 'Y', 'R', cpuMeterConfig)
  end

  SKIN:Bang('!UpdateMeasureGroup', 'CpuClock', cpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'CpuClock', cpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'LineGraph', cpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'Background', cpuMeterConfig)
  SKIN:Bang('!Redraw', cpuMeterConfig)
  UpdateToggles()

end

function ToggleLineGraph(currentValue)

  LogHelper(tostring(currentValue), 'Debug')

  if currentValue == 0 then
    SetVariable('showLineGraph', '1', cpuSettingsPath, cpuMeterConfig)
    SKIN:Bang('!ShowMeterGroup', 'LineGraph', cpuMeterConfig)
  else
    SetVariable('showLineGraph', '0', cpuSettingsPath, cpuMeterConfig)
    SKIN:Bang('!HideMeterGroup', 'LineGraph', cpuMeterConfig)
  end

  SKIN:Bang('!UpdateMeterGroup', 'LineGraph', cpuMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'Background', cpuMeterConfig)
  SKIN:Bang('!Redraw', cpuMeterConfig)
  SKIN:Bang('!UpdateMeasure', 'MeasureAvgLineGraph')
  SKIN:Bang('!UpdateMeasure', 'MeasureCpuTempGraph')
  UpdateToggles()

end

function ToggleAvgCpuGraph(currentValue, showLineGraph)

  currentValue = tonumber(currentValue)
  showLineGraph = tonumber(showLineGraph)

  if showLineGraph == 1 then
    if currentValue == 0 then
      SetVariable('showAvgCpu', '1', cpuSettingsPath, cpuMeterConfig)
    else
      SetVariable('showAvgCpu', '0', cpuSettingsPath, cpuMeterConfig)
    end

    SKIN:Bang('!UpdateMeter', 'GraphLines', cpuMeterConfig)
    SKIN:Bang('!Redraw', cpuMeterConfig)
    UpdateToggles()
  end

end

function ToggleCpuTempGraph(currentValue, showLineGraph, showCoreTemps)

  if currentValue == 0 and showLineGraph == 1 and showCoreTemps == 1 then
    SetVariable('showCpuTempGraph', '1', cpuSettingsPath, cpuMeterConfig)
    SKIN:Bang('!EnableMeasure', 'MeasureCpuTempPackage', cpuMeterConfig)
    SKIN:Bang('!SetOption', 'GraphLines', 'LineColor36', '#*colorTempGraph*#', cpuMeterConfig)
  elseif showLineGraph == 1 and showCoreTemps == 1 then
    SetVariable('showCpuTempGraph', '0', cpuSettingsPath, cpuMeterConfig)
    SKIN:Bang('!DisableMeasure', 'MeasureCpuTempPackage', cpuMeterConfig)
    SKIN:Bang('!SetOption', 'GraphLines', 'LineColor36', '0,0,0,0', cpuMeterConfig)
  end

  SKIN:Bang('!UpdateMeasure', 'MeasureCpuTempPackage', cpuMeterConfig)
  SKIN:Bang('!UpdateMeter', 'GraphLines', cpuMeterConfig)
  SKIN:Bang('!Redraw', cpuMeterConfig)
  UpdateToggles()
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

function ToggleTtDetection(currentValue, isHwinfoAvailable)

  currentValue = tonumber(currentValue)
  isHwinfoAvailable = tonumber(isHwinfoAvailable)

  if isHwinfoAvailable == 1 then
    if currentValue == 0 then
      SetVariable('showTt', '1', cpuSettingsPath, cpuMeterConfig)
      SKIN:Bang('!EnableMeasureGroup', 'Tt', cpuMeterConfig)
    else
      SetVariable('showTt', '0', cpuSettingsPath, cpuMeterConfig)
      SKIN:Bang('!DisableMeasureGroup', 'Tt', cpuMeterConfig)
    end
  end  

  SKIN:Bang('!UpdateMeasureGroup', 'Tt', cpuMeterConfig)
  SKIN:Bang('!Redraw', cpuMeterConfig)
  UpdateToggles()
  SKIN:Bang('!UpdateMeasure', 'MeasureTtSound')

end

function ToggleTtSound(currentValue, showTt)

  currentValue = tonumber(currentValue)
  showTt = tonumber(showTt)
  
  if showTt == 1 then
    if currentValue == 0 then
        SetVariable('playTtSound', '1', cpuSettingsPath, cpuMeterConfig)
    else
        SetVariable('playTtSound', '0', cpuSettingsPath, cpuMeterConfig)
    end
  end

  SKIN:Bang('!UpdateMeasureGroup', 'Tt', cpuMeterConfig)
  UpdateToggles()

end

function SetDefaults()

  SetVariable('showCpuName', '1', cpuSettingsPath)
  SetVariable('showPageFile', '0', cpuSettingsPath)
  SetVariable('showCoreTemps', '1', cpuSettingsPath)
  SetVariable('showTopProcess', '0', cpuSettingsPath)
  SetVariable('showCpuFan', '1', cpuSettingsPath)
  SetVariable('showCpuClock', '1', cpuSettingsPath)
  SetVariable('showLineGraph', '1', cpuSettingsPath)
  SetVariable('showAvgCpu', '0', cpuSettingsPath)
  SetVariable('showCpuTempGraph', '1', cpuSettingsPath)
  SetVariable('cpuName', 'auto', cpuSettingsPath)
  SetVariable('showTt', '0', cpuSettingsPath)
  SetVariable('playTtSound', '0', cpuSettingsPath)

end
