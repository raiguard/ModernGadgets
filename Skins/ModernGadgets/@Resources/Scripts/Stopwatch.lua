-- STOPWATCH SCRIPT

measureTime = 0
realTime = 0
deltaTime = 0
elapsedTime = 0

lapDeltaTime = 0
lapTime = 0
lapCount = 0
lapScroll = 0
laps = {}
lapListHeight = 0

paused = 0

debug = false

function Initialize()
  measureTime = SKIN:GetMeasure('MeasureTime')
  lapListHeight = tonumber(SELF:GetOption('LapListHeight', 5))
  showHours = tonumber(SELF:GetOption('ShowHours', 1))
  Reset()
end

function Update()
  realTime = measureTime:GetValue()
  if paused == 1 then deltaTime = realTime - elapsedTime
    else elapsedTime = (realTime - deltaTime) end
end

function Reset()
  realTime = 0
  deltaTime = 0
  elapsedTime = 0

  lapDeltaTime = 0
  lapTime = 0
  lapCount = 0
  lapScroll = 0
  laps = {}

  paused = 0
end

function GetTime() return FormatTimeString(elapsedTime) end

function GetLapTime() return FormatTimeString(elapsedTime - lapDeltaTime) end

function GetLap(lap, value)
  if lapCount <= lap - 1 then return '-'
  elseif value then return laps[lapScroll - (lap - 1)][value]
  else return lapScroll - (lap - 1) end
end

function Lap()
  if lapScroll == lapCount then lapScroll = lapScroll + 1 end
  lapCount = lapCount + 1
  table.insert(laps, lapCount, { lap = GetLapTime(), total = GetTime() })
  lapDeltaTime = elapsedTime
  RmLog('Lap ' .. lapCount .. ' = ' .. laps[lapCount]['total'], 'Debug')
  SKIN:Bang('!UpdateMeterGroup', 'LapMeters')
  SKIN:Bang('!Redraw')
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
  local hours = tostring(math.floor((time / 3600) % 24)):gsub('(.+)', '0%1'):gsub('^%d(%d%d)$', '%1')
  local minutes = tostring(math.floor((time / 60) % 60)):gsub('(.+)', '0%1'):gsub('^%d(%d%d)$', '%1')
  local seconds = tostring(math.floor(time % 60)):gsub('(.+)', '0%1'):gsub('^%d(%d%d)$', '%1')
  local tenths = round((time * 10) % 10)
  if tenths == 10 then tenths = 0 end
  if showHours == 1 then return hours .. ':' .. minutes .. ':' .. seconds .. '.' .. tenths
    else return minutes .. ':' .. seconds .. '.' .. tenths end
end

function round(x)
  if x%2 ~= 0.5 then
  return math.floor(x+0.5)
  end
  return x-0.5
end

-- function to make logging messages less cluttered
function RmLog(message, type)
  if type == nil then type = 'Debug' end
  if debug == true then
    SKIN:Bang("!Log", message, type)
  elseif type ~= 'Debug' then
    SKIN:Bang("!Log", message, type)
  end
end