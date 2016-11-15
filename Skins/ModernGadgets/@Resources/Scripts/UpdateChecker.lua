--------------------------------------------------
-- Update Checker for Rainmeter
-- Version 2.0.0
-- By iamanai
--------------------------------------------------
--
-- Release Notes:
-- v2.1.0 - Fixed oversight where if the user is on a development version for an
--          outdated release, it would not return UpdateAvailable(), added
--          'ParsingError' return
-- v2.0.0 - Removed dependancy on an output meter in favor of hard-coded actions,
--          added more documentation
-- v1.0.1 - Optimized gmatch function, more debug functionality
-- v1.0.0 - Initial release
--
-- --------------------
--

isDbg = false

function Initialize() end

function Update() end

-- up-to-date - hard-coded actions
function UpToDate()

  LogHelper('ModernGadgets is up-to-date', 'Notice')

end

-- update available - hard-coded actions
function UpdateAvailable()

  LogHelper('An update is available!', 'Notice')

  SKIN:Bang('!WriteKeyValue', 'Variables', 'page', 'updateavailable')
  SKIN:Bang('!Refresh')
  SKIN:Bang('!ShowFade')

end

-- development version - hard-coded actions
function DevelopmentVersion()



end

-- connection error - hard-coded actions
function ConnectError()

    LogHelper('Could not connect to update server', 'Error')

end

-- parsing error - hard-coded actions
function ParsingError()



end

-- thrown by the webparser measure when the fetch is successful
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

  if tableLength(cVerTable) < 3 then ParsingError() LogHelper('Problem parsing local version string', 'Error') return nil end
  if tableLength(rVerTable) < 3 then ParsingError() LogHelper('Problem parsing remote version string', 'Error') return nil end

  r1 = cVerTable[1] - rVerTable[1]
  r2 = cVerTable[2] - rVerTable[2]
  r3 = cVerTable[3] - rVerTable[3]

  if r1 < 0 or r2 < 0 or r3 < 0 then
    UpdateAvailable()
  elseif r1 == 0 and r2 == 0 and r3 == 0 then
    if tableLength(cVerTable) == 4 then
      DevelopmentVersion()
    else
      UpToDate()
    end
  elseif r1 > 0 or r2 > 0 or r3 > 0 then
    DevelopmentVersion()
  end

end

-- returns the number of entries in the given table
function tableLength(T)

  local count = 0
  for _ in pairs(T) do count = count + 1 end
  return count

end

-- function to make logging messages less cluttered
function LogHelper(message, type)

	if isDbg == true then
		SKIN:Bang("!Log", 'UpdateChecker.lua: ' .. message, type)
	elseif type ~= 'Debug' and type ~= nil then
		SKIN:Bang("!Log", 'UpdateChecker.lua: ' .. message, type)
	end

end
