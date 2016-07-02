--------------------------------------------------
-- Update Checker for Rainmeter
-- Version 1.0.1
-- By iamanai
--------------------------------------------------
--
-- Release Notes:
-- v2.0.0 - Removed dependancy on an output meter in favor of hard-coded actions
-- v1.0.1 - Optimized gmatch function, more debug functionality
-- v1.0.0 - Initial release
--

isDbg = false

function Initialize() end

function Update() end

function CheckForUpdate(cVersion, rVersion)

  LogHelper('rVersion: ' .. rVersion, 'Debug')

  cVerTable = {}
  for match in cVersion:gmatch('%d+') do
    table.insert(cVerTable, match)
    LogHelper('cVerTable: ' .. match, 'Debug')
  end

  rVerTable = {}
  for match in rVersion:gmatch('%d+') do
    table.insert(rVerTable, match)
    LogHelper('rVerTable: ' .. match, 'Debug')
  end

  LogHelper('cVerTable length: ' .. tableLength(cVerTable) .. ' rVerTable length: ' .. tableLength(rVerTable), 'Debug')

  if tableLength(cVerTable) == 4 then
    -- DEVELOPMENT VERSION

  else

    r1 = cVerTable[1] - rVerTable[1]
    r2 = cVerTable[2] - rVerTable[2]
    r3 = cVerTable[3] - rVerTable[3]

    if r1 < 0 or r2 < 0 or r3 < 0 then
      -- UPDATE AVAILABLE

    elseif r1 == 0 and r2 == 0 and r3 == 0 then
      -- UP-TO-DATE

    elseif r1 > 0 or r2 > 0 or r3 > 0 then
      -- DEVELOPMENT VERSION

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
