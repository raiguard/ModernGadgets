debug = false

alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"

function Initialize()

  disksSettingsPath = SKIN:GetVariable('disksSettingsPath')
  disksMeterPath = SKIN:GetVariable('disksMeterPath')
  disksMeterConfig = SKIN:GetVariable('disksMeterConfig')

  -- TempSetHistogramHidden()

end

function Update() end

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

end

function ToggleDiskHistograms(currentValue, showLineGraph)

  currentValue = tonumber(currentValue)
  showLineGraph = tonumber(showLineGraph)

  if showLineGraph == 0 then
    LogHelper('Cannot display disk histograms if line graph is disabled!', 'Warning')
  else
    if currentValue == 0 then
      SKIN:Bang('!SetVariable', 'showHistograms', '1')
      SKIN:Bang('!WriteKeyValue', 'Variables', 'showHistograms', '1', disksSettingsPath)
      SKIN:Bang('!ShowMeterGroup', 'Histograms', disksMeterConfig)
      ToggleHistograms(0)
    else
      SKIN:Bang('!SetVariable', 'showHistograms', '0')
      SKIN:Bang('!WriteKeyValue', 'Variables', 'showHistograms', '0', disksSettingsPath)
      SKIN:Bang('!HideMeterGroup', 'Histograms', disksMeterConfig)
      ToggleHistograms(1)
    end
  end

  SKIN:Bang('!UpdateMeterGroup', 'LineGraph', disksMeterConfig)
  SKIN:Bang('!Redraw', disksMeterConfig)

end

function TempSetHistogramHidden()

  alphabet:gsub(".", function(c)
    SKIN:Bang('!WriteKeyValue', 'Disk' .. c .. 'Histogram', 'Hidden', '(#*showLineGraph*# = 0 || #*showHistograms*# = 0)', disksMeterPath)
  end)

end

function SetLineGraphY(v)

  if v == 0 then
    SKIN:Bang('!SetOption', 'DiskZHistogram', 'Y', '3r', disksMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'DiskZHistogram', 'Y', '3r', disksMeterPath)
  else
    SKIN:Bang('!SetOption', 'DiskZHistogram', 'Y', '5r', disksMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'DiskZHistogram', 'Y', '5r', disksMeterPath)
  end

end

-- function to make logging messages less cluttered
function LogHelper(message, type)

	if debug == true then
		SKIN:Bang("!Log", 'DisksSettings.lua: ' .. message, type)
	elseif type ~= 'Debug' and type ~= nil then
		SKIN:Bang("!Log", message, type)
	end

end

function UpdateSettings()

  local showLineGraph = math.abs(tonumber(SKIN:GetVariable('showLineGraph')) - 1)
  local showHistograms = math.abs(tonumber(SKIN:GetVariable('showHistograms')) - 1)

  ToggleLineGraph(showLineGraph, showHistograms)
  ToggleHistograms(showHistograms, showLineGraph)

end

function SetDefaults()

  ToggleLineGraph(0, 1)
  -- ToggleHistograms(0, 1)

end
