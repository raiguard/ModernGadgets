debug = false

alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"

function Initialize()

  disksSettingsPath = SKIN:GetVariable('disksSettingsPath')
  disksMeterPath = SKIN:GetVariable('disksMeterPath')
  disksMeterConfig = SKIN:GetVariable('disksMeterConfig')

  -- TempSetHistogramHidden()

  dofile(SKIN:GetVariable('scriptPath') .. 'Utilities.lua')

end

function Update() end

function ToggleEjectButtons(currentValue)

  currentValue = tonumber(currentValue)

  if currentValue == 0 then
    SetVariable('showEjectButtons', '1', disksSettingsPath, disksMeterConfig)
  else
    SetVariable('showEjectButtons', '0', disksSettingsPath, disksMeterConfig)
  end

  SKIN:Bang('!UpdateMeasureGroup', 'EjectButtons', disksMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'EjectButtons', disksMeterConfig)
  SKIN:Bang('!Redraw', disksMeterConfig)
  UpdateToggles()

end

function ToggleLineGraph(currentValue, showHistograms)

  currentValue = tonumber(currentValue)
  showHistograms = tonumber(showHistograms)

  if currentValue == 0 then
    SetVariable('showLineGraph', '1', disksSettingsPath, disksMeterConfig)
    SKIN:Bang('!ShowMeterGroup', 'LineGraph', disksMeterConfig)

    if showHistograms == 1 then
      SKIN:Bang('!ShowMeterGroup', 'Histograms', disksMeterConfig)
    else
      SKIN:Bang('!HideMeterGroup', 'Histograms', disksMeterConfig)
    end
  else
    SetVariable('showLineGraph', '0', disksSettingsPath, disksMeterConfig)
    SKIN:Bang('!HideMeterGroup', 'LineGraph', disksMeterConfig)
  end

  SKIN:Bang('!UpdateMeterGroup', 'LineGraph', disksMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'Background', disksMeterConfig)
  SKIN:Bang('!Redraw', disksMeterConfig)
  SKIN:Bang('!UpdateMeasure', 'MeasureHistograms')
  UpdateToggles()

end

function ToggleHistograms(currentValue, showLineGraph)

  currentValue = tonumber(currentValue)
  showLineGraph = tonumber(showLineGraph)

  if showLineGraph == 0 then
    LogHelper('Cannot display disk histograms if line graph is disabled!', 'Warning')
  else
    if currentValue == 0 then
      SetVariable('showHistograms', '1', disksSettingsPath, disksMeterConfig)
      SKIN:Bang('!ShowMeterGroup', 'Histograms', disksMeterConfig)
    else
      SetVariable('showHistograms', '0', disksSettingsPath, disksMeterConfig)
      SKIN:Bang('!HideMeterGroup', 'Histograms', disksMeterConfig)
    end
  end

  SKIN:Bang('!UpdateMeterGroup', 'LineGraph', disksMeterConfig)
  SKIN:Bang('!Redraw', disksMeterConfig)
  UpdateToggles()

end

function SetDefaults()

  SetVariable('showEjectButtons', 1, disksSettingsPath)
  -- SetVariable('manualHideDisks', '', disksSettingsPath)
  SetVariable('showLineGraph', 1, disksSettingsPath)
  SetVariable('showHistograms', 1, disksSettingsPath)

end
