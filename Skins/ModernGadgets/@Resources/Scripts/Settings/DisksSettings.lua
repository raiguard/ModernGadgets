-- MODERNGADGETS DISKS METER SETTINGS SCRIPT
-- By iamanai
--
-- Consists of hard-coded functions to change settings in Disks Meter
--

isDbg = false

alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"

function Initialize()

  disksSettingsPath = SKIN:GetVariable('disksSettingsPath')
  disksMeterPath = SKIN:GetVariable('disksMeterPath')
  disksMeterConfig = SKIN:GetVariable('disksMeterConfig')

end

function Update() end

function ToggleLineGraph(currentValue)

  currentValue = tonumber(currentValue)

  if currentValue == 0 then
    SKIN:Bang('!SetVariable', 'showLineGraph', '1')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'showLineGraph', '1', disksSettingsPath)
    SKIN:Bang('!ShowMeterGroup', 'LineGraph', disksMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'GraphLines', 'Hidden', '0', disksMeterPath)
    SKIN:Bang('!WriteKeyValue', 'GraphBorder', 'Hidden', '0', disksMeterPath)

    ToggleHistograms(0)
    SetLineGraphY(1)
  else
    SKIN:Bang('!SetVariable', 'showLineGraph', '0')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'showLineGraph', '0', disksSettingsPath)
    SKIN:Bang('!HideMeterGroup', 'LineGraph', disksMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'GraphLines', 'Hidden', '1', disksMeterPath)
    SKIN:Bang('!WriteKeyValue', 'GraphBorder', 'Hidden', '1', disksMeterPath)

    ToggleHistograms(1)
    SetLineGraphY(0)
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
      ToggleHistograms(0)
    else
      SKIN:Bang('!SetVariable', 'showHistograms', '0')
      SKIN:Bang('!WriteKeyValue', 'Variables', 'showHistograms', '0', disksSettingsPath)
      ToggleHistograms(1)
    end
  end

  SKIN:Bang('!UpdateMeterGroup', 'LineGraph', disksMeterConfig)
  SKIN:Bang('!Redraw', disksMeterConfig)

end

function ToggleHistograms(v)

  alphabet:gsub(".", function(c)
    SKIN:Bang('!WriteKeyValue', 'Disk' .. c .. 'Histogram', 'Hidden', v, disksMeterPath)
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

	if isDbg == true then
		SKIN:Bang("!Log", 'DisksSettings.lua: ' .. message, type)
	elseif type ~= 'Debug' and type ~= nil then
		SKIN:Bang("!Log", message, type)
	end

end
