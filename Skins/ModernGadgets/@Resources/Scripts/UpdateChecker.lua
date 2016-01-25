--------------------------------------------------
-- Update Checker for Rainmeter
-- Version 1.0.0
-- By iamanai
--------------------------------------------------
--
-- Release Notes:
-- v1.0.0 - Initial release
--

isDbg = false

function Initialize() end

function Update() end

function CheckForUpdate(cVersion, rVersion, outputMeter)

  cVerIt = string.gmatch(cVersion,"%d+")
  cVerTable = {}
  for match in cVerIt do
    table.insert(cVerTable, match)
    LogHelper('cVerTable: ' .. match, 'Debug')
  end

  rVerIt = string.gmatch(rVersion,"%d+")
  rVerTable = {}
  for match in rVerIt do
    table.insert(rVerTable, match)
    LogHelper('rVerTable: ' .. match, 'Debug')
  end

  LogHelper(tableLength(cVerTable), 'Debug')

  if tableLength(cVerTable) == 4 then
    SKIN:Bang('!SetOption', outputMeter, 'MeterStyle', 'StyleString | StyleStringPanelContent | StyleUpdateCheckerDev')
    SKIN:Bang('!Redraw')
  else

    r1 = cVerTable[1] - rVerTable[1]
    r2 = cVerTable[2] - rVerTable[2]
    r3 = cVerTable[3] - rVerTable[3]

    if r1 < 0 or r2 < 0 or r3 < 0 then

      SKIN:Bang('!SetOption', outputMeter, 'MeterStyle', 'StyleString | StyleStringPanelContent | StyleUpdateCheckerYes')
      SKIN:Bang('!Redraw')
    elseif r1 == 0 and r2 == 0 and r3 == 0 then
      SKIN:Bang('!SetOption', outputMeter, 'MeterStyle', 'StyleString | StyleStringPanelContent | StyleUpdateCheckerNo')
      SKIN:Bang('!Redraw')
    elseif r1 > 0 or r2 > 0 or r3 > 0 then
      SKIN:Bang('!SetOption', outputMeter, 'MeterStyle', 'StyleString | StyleStringPanelContent | StyleUpdateCheckerDev')
      SKIN:Bang('!Redraw')
    end
  end
end

function tableLength(T)

  local count = 0
  for _ in pairs(T) do count = count + 1 end
  return count

end

-- function to make logging messages less cluttered
function LogHelper(message, type)

	if isDbg == true then
		SKIN:Bang("!Log", 'UpdateChecker.lua: ' .. message, type)
	elseif type ~= 'Debug' then
		SKIN:Bang("!Log", 'UpdateChecker.lua: ' .. message, type)
	end

end
