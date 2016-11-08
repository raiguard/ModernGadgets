-- MODERNGADGETS DISKS METER SETTINGS SCRIPT
-- By iamanai
--
-- Consists of hard-coded functions to change settings in Disks Meter
--

isDbg = true

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

    SKIN:Bang('!SetOption', 'LineGraphButton', 'ImageName', '#*imgPath*#Settings\\0a.png')
    SKIN:Bang('!WriteKeyValue', 'LineGraphButton', 'ImageName', '#*imgPath*#Settings\\0a.png')

    ToggleDiskHistograms(0)
    SetLineGraphY(1)
  else
    SKIN:Bang('!SetVariable', 'showLineGraph', '0')
    SKIN:Bang('!WriteKeyValue', 'Variables', 'showLineGraph', '0', disksSettingsPath)
    SKIN:Bang('!HideMeterGroup', 'LineGraph', disksMeterConfig)
    SKIN:Bang('!WriteKeyValue', 'GraphLines', 'Hidden', '1', disksMeterPath)
    SKIN:Bang('!WriteKeyValue', 'GraphBorder', 'Hidden', '1', disksMeterPath)

    ToggleDiskHistograms(1)
    SetLineGraphY(0)

    SKIN:Bang('!SetOption', 'LineGraphButton', 'ImageName', '#*imgPath*#Settings\\0.png')
    SKIN:Bang('!WriteKeyValue', 'LineGraphButton', 'ImageName', '#*imgPath*#Settings\\0.png')
  end

  SKIN:Bang('!UpdateMeterGroup', 'LineGraph', disksMeterConfig)
  SKIN:Bang('!UpdateMeterGroup', 'Background', disksMeterConfig)
  SKIN:Bang('!Redraw', disksMeterConfig)
  SKIN:Bang('!UpdateMeter', 'LineGraphButton')
  SKIN:Bang('!Redraw')

end

function ToggleDiskHistograms(v)

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
		SKIN:Bang("!Log", 'DisksSettings.lua: ' .. message, type)
	end

end
