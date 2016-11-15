--------------------------------------------------
-- Update Checker for Rainmeter
-- Version 3.0.0
-- By iamanai
--------------------------------------------------
--
-- Release Notes:
-- v3.0.0 - Added support for update checking on development versions, removed
--          'development version' output
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
-- This script is to be used for implementing into your own skin suite. To
-- implement this script, you will need to populate the corresponding functions
-- with hard-coded actions for your skin to perform. There are four possible
-- outcomes: 'up-to-date', 'update available', 'connection error', and
-- 'parsing error'.
--
-- The corresponding functions are included below. To see an example of what an
-- implementation could look like, see the 'UpdateCheckerExample.lua' script included
-- with the example skin.
--
-- Please keep in mind that version strings must be formatted using the Semantic
-- Versioning 2.0.0 format. See http://semver.org/ for additional information.
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

  if tableLength(cVerTable) ~= tableLength(rVerTable) then
    for _ in pairs(cVerTable) do
      if rVerTable[_] == nil then
        rVerTable[_] = 0
      end
    end
  end

    LogHelper('cVerTable length: ' .. tableLength(cVerTable) .. ' rVerTable length: ' .. tableLength(rVerTable), 'Debug')

  if Compare(cVerTable, rVerTable) == 1 then
    UpdateAvailable()
  else
    UpToDate()
  end

end

-- separated out so multiple returns can be given
function Compare(cVerTable, rVerTable)

  for _ in pairs(cVerTable) do
    local v = cVerTable[_] - rVerTable[_]
    if v < 0 then return 1 end
  end

  return 0

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
