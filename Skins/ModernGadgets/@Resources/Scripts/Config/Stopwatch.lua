-- STOPWATCH SCRIPT

baseTime = 0
measureTime = 0
rTime = 0

lapBaseTime = 0
lapTime = 0
lapCount = 0
lapScroll = 0
laps = {}
lapListHeight = 0

debug = true

function Initialize()

	dofile(SKIN:GetVariable('scriptPath') .. 'Utilities.lua')
	measureTime = SKIN:GetMeasure('MeasureTime')
	lapListHeight = tonumber(SELF:GetOption('LapListHeight', 5))

end

function Update()

	rTime = measureTime:GetValue() - baseTime

end

function GetTime() return rTime end

function GetLapTime() return rTime - lapBaseTime end

function Lap()

	if lapScroll == lapCount then lapScroll = lapScroll + 1 end
	lapCount = lapCount + 1
	table.insert(laps, lapCount, { lap = FormatTimeString(GetLapTime()), total = FormatTimeString(rTime) })
	lapBaseTime = rTime
	-- LogHelper('Lap ' .. lapCount .. ' = ' .. laps[lapCount]['total'], 'Debug')
	SKIN:Bang('!UpdateMeterGroup', 'LapMeters')
	SKIN:Bang('!Redraw')

end

function GetLap(lap, value)

	if lapCount <= lap - 1 then return '-'
	elseif value then return laps[lapScroll - (lap - 1)][value]
		else return lapScroll - (lap - 1) end

end

function LapScrollUp()

	if lapScroll < lapCount then
		lapScroll = lapScroll + 1
		SKIN:Bang('!UpdateMeterGroup', 'LapMeters')
		SKIN:Bang('!Redraw')
	end
end

function LapScrollDown()

	if lapScroll > lapListHeight then
		lapScroll = lapScroll - 1
		SKIN:Bang('!UpdateMeterGroup', 'LapMeters')
		SKIN:Bang('!Redraw')
	end
end

function FormatTimeString(time)

	-- local timeString = tostring(round(time, 1))
	-- local seconds, tenths = string.match(timeString, '(%d*)\.(%d*)')
	-- seconds = tonumber(seconds)
	-- tenths = tonumber(tenths)
	-- if tenths == nil then tenths = 0 end
	-- if seconds ~= nil then
	-- 	local minutes = math.floor(seconds / 60)
	-- 	seconds = seconds % 60
	-- 	LogHelper(timeString)
	-- 	return tostring(minutes .. ':' .. seconds .. '.' .. tenths)
	-- end

	-- LogHelper(tostring(round(time, 0)), 'Debug')
	return round(time, 1)

end

function round(num, numDecimalPlaces)

  return tonumber(string.format("%." .. (numDecimalPlaces or 0) .. "f", num))

end