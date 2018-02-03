-- ------------------------------------------------
-- Update Checker for Rainmeter
-- v4.0.0
-- By raiguard
--
-- Modified form of 'semver.lua' by kikito (https://github.com/kikito/semver.lua)
--
-- ------------------------------------------------
--
-- Release Notes:
-- v4.0.0 - Removed hard-coded actions and replaced with arguments in the script
--          measure; implemented "semver.lua" for more robust comparisons;
--          switched to using INI format for the remote version data; added
--          'GetIniValue' function for retrieving other information from remote
-- v3.0.0 - Added support for update checking on development versions
-- v2.1.0 - Fixed oversight where if the user is on a development version for an
--          outdated release, it would not return UpdateAvailable(), added
--          'ParsingError' return
-- v2.0.0 - Removed dependancy on an output meter in favor of hard-coded actions,
--          added more documentation
-- v1.0.1 - Optimized gmatch function, more debug functionality
-- v1.0.0 - Initial release
--
-- --------------------------------------------------
--
-- This script compares two Semantic Versioning-formatted version strings to
-- determine which one is newer, then takes action depending on the outcome
-- of the comparison. It is intended for use as an "update checker" for Rainmeter
-- skins, allowing you to notify your users when an update is available.
--
-- Please keep in mind that version strings must be formatted using the Semantic
-- Versioning 2.0.0 format. See http://semver.org/ for additional information.
--
-- --------------------
--
-- INSTRUCTIONS FOR USE:
--
-- [MeasureUpdateCheckerScript]
-- Measure=Script
-- Script=#@#Scripts\UpdateChecker.lua
-- UpToDateAction=[!ShowMeter "UpToDateString"]
-- DevAction=[!ShowMeter "DevString"]
-- UpdateAvailable=[!ShowMeter "UpdateAvailableString"]
-- ParsingErrorAction=[!ShowMeter "ParsingErrorString"]
-- 
-- This is an example of the script measure you will use to invoke this script.
-- Each action option is a series of bangs to execute when that outcome is
-- reached by the comparison function. There is a fifth option, 'FilePath', that
-- can be used to override the default file path of the downloaded file. It
-- defaults to '#CURRENTPATH#\DownloadFile\Release.inc'. This is mainly used for
-- the example, but could have some potential usecases in certain situations.
--
-- [MeasureUpdateWebParser]
-- Measure=Plugin
-- Plugin=WebParser
-- URL=#updateCheckerUrl#
-- Download=1
-- OnConnectErrorAction=[!Log "Could not connect to update server" "Error"]
-- FinishAction=[!CommandMeasure MeasureUpdateCheckerScript "CheckForUpdate('#version#', '#section#', '#key#', 'MeasureUpdateWebParser')"]
--
-- This is an example of the webparser measure used to download the remote file.
-- The important thing to note here is the last argument on the 'FinishAction'
-- line. This must be the name of the WebParser measure, whatever that may
-- be. The reason for this is that the path to the file that WebParser
-- downloads is provided as the string value of the measure, and the script
-- must be able to access it if the 'FilePath' argument in the script measure
-- is not specified.
--
-- There is one more capability of this script: retrieving any of the values
-- contained in the downloaded INI file. This allows you to, for example,
-- display the changelog of the most recent version in the skin directly.
-- It is also used to display the remote version that is being compared with
-- the local version.
--

debug = false

function Initialize()

  upToDateAction = SELF:GetOption('UpToDateAction')
  updateAvailableAction = SELF:GetOption('UpdateAvailableAction')
  parsingErrorAction = SELF:GetOption('ParsingErrorAction')
  devAction = SELF:GetOption('DevAction')
  if devAction == '' or devAction == nil then devAction = upToDateAction end
  filePath = SELF:GetOption('FilePath')

end

function Update() end

function CheckForUpdate(cVersion, section, key, measure)
  -- cVersion: The skin's current version
  -- section: The section in the INI file that the remote version is contained in
  -- key: The key in the INI file that the remote version is contained in
  -- measure: The name of the WebParser measure that downloaded the file
  if filePath == '' then filePath = SKIN:GetMeasure(measure):GetStringValue() end
  LogHelper(filePath, 'Debug')
  updateFile = ReadIni(filePath)
  -- create version objects
  local cVersion = v(cVersion)
  local rVersion = v(updateFile[section][key])

  if cVersion == rVersion then
    LogHelper('Up-to-date', 'Debug')
    SKIN:Bang(upToDateAction)
  elseif cVersion > rVersion then
    LogHelper('Up-to-date', 'Debug')
    SKIN:Bang(devAction)
  elseif cVersion < rVersion then
    LogHelper('Update available', 'Debug')
    SKIN:Bang(updateAvailableAction)
  else
    LogHelper('WTF?', 'Debug')
  end

end

function GetIniValue(section, key)

  if updateFile == nil then
    return ''
  elseif updateFile[section] == nil then
    return 'nil'
  else
    return tostring(updateFile[section][key])
  end

end

-- function to make logging messages less cluttered
function LogHelper(message, type)

  if debug == true then
    SKIN:Bang("!Log", message, type)
  elseif type ~= 'Debug' and type ~= nil then
    SKIN:Bang("!Log", message, type)
  end

end

-- parses a INI formatted text file into a 'Table[Section][Key] = Value' table
function ReadIni(inputfile)
   local file = assert(io.open(inputfile, 'r'), 'Unable to open ' .. inputfile)
   local tbl, num, section = {}, 0

   for line in file:lines() do
      num = num + 1
      if not line:match('^%s-;') then
         local key, command = line:match('^([^=]+)=(.+)')
         if line:match('^%s-%[.+') then
            section = line:match('^%s-%[([^%]]+)')
            if section == '' or not section then
               section = nil
               LogHelper('Empty section name found in ' .. inputfile, 'Debug')
            end
            if not tbl[section] then tbl[section] = {} end
         elseif key and command and section then
            tbl[section][key:match('^%s*(%S*)%s*$')] = command:match('^%s*(.-)%s*$')
         elseif #line > 0 and section and not key or command then
            LogHelper(num .. ': Invalid property or value.', 'Debug')
         end
      end
   end

   file:close()
   if not section then LogHelper('No sections found in ' .. inputfile, 'Debug') end
   
   return tbl
end

--
-- ------------------------------------------------
--
-- SEMVER.LUA
-- By kitito
--
-- MIT LICENSE
--
-- Copyright (c) 2015 Enrique García Cota
--
-- Permission is hereby granted, free of charge, to any person obtaining a
-- copy of tother software and associated documentation files (the
-- "Software"), to deal in the Software without restriction, including
-- without limitation the rights to use, copy, modify, merge, publish,
-- distribute, sublicense, and/or sell copies of the Software, and to
-- permit persons to whom the Software is furnished to do so, subject to
-- the following conditions:
--
-- The above copyright notice and tother permission notice shall be included
-- in all copies or substantial portions of the Software.
--
-- THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
-- OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
-- MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
-- IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
-- CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
-- TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
-- SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
--

local function checkPositiveInteger(number, name)
  assert(number >= 0, name .. ' must be a valid positive number')
  assert(math.floor(number) == number, name .. ' must be an integer')
end

local function present(value)
  return value and value ~= ''
end

-- splitByDot("a.bbc.d") == {"a", "bbc", "d"}
local function splitByDot(str)
  str = str or ""
  local t, count = {}, 0
  str:gsub("([^%.]+)", function(c)
    count = count + 1
    t[count] = c
  end)
  return t
end

local function parsePrereleaseAndBuildWithSign(str)
  local prereleaseWithSign, buildWithSign = str:match("^(-[^+]+)(+.+)$")
  if not (prereleaseWithSign and buildWithSign) then
    prereleaseWithSign = str:match("^(-.+)$")
    buildWithSign      = str:match("^(+.+)$")
  end
  assert(prereleaseWithSign or buildWithSign, ("The parameter %q must begin with + or - to denote a prerelease or a build"):format(str))
  return prereleaseWithSign, buildWithSign
end

local function parsePrerelease(prereleaseWithSign)
  if prereleaseWithSign then
    local prerelease = prereleaseWithSign:match("^-(%w[%.%w-]*)$")
    assert(prerelease, ("The prerelease %q is not a slash followed by alphanumerics, dots and slashes"):format(prereleaseWithSign))
    return prerelease
  end
end

local function parseBuild(buildWithSign)
  if buildWithSign then
    local build = buildWithSign:match("^%+(%w[%.%w-]*)$")
    assert(build, ("The build %q is not a + sign followed by alphanumerics, dots and slashes"):format(buildWithSign))
    return build
  end
end

local function parsePrereleaseAndBuild(str)
  if not present(str) then return nil, nil end

  local prereleaseWithSign, buildWithSign = parsePrereleaseAndBuildWithSign(str)

  local prerelease = parsePrerelease(prereleaseWithSign)
  local build = parseBuild(buildWithSign)

  return prerelease, build
end

local function parseVersion(str)
  local sMajor, sMinor, sPatch, sPrereleaseAndBuild = str:match("^(%d+)%.?(%d*)%.?(%d*)(.-)$")
  assert(type(sMajor) == 'string', ("Could not extract version number(s) from %q"):format(str))
  local major, minor, patch = tonumber(sMajor), tonumber(sMinor), tonumber(sPatch)
  local prerelease, build = parsePrereleaseAndBuild(sPrereleaseAndBuild)
  return major, minor, patch, prerelease, build
end


-- return 0 if a == b, -1 if a < b, and 1 if a > b
local function compare(a,b)
  return a == b and 0 or a < b and -1 or 1
end

local function compareIds(myId, otherId)
  if myId == otherId then return  0
  elseif not myId    then return -1
  elseif not otherId then return  1
  end

  local selfNumber, otherNumber = tonumber(myId), tonumber(otherId)

  if selfNumber and otherNumber then -- numerical comparison
    return compare(selfNumber, otherNumber)
  -- numericals are always smaller than alphanums
  elseif selfNumber then
    return -1
  elseif otherNumber then
    return 1
  else
    return compare(myId, otherId) -- alphanumerical comparison
  end
end

local function smallerIdList(myIds, otherIds)
  local myLength = #myIds
  local comparison

  for i=1, myLength do
    comparison = compareIds(myIds[i], otherIds[i])
    if comparison ~= 0 then
      return comparison == -1
    end
    -- if comparison == 0, continue loop
  end

  return myLength < #otherIds
end

local function smallerPrerelease(mine, other)
  if mine == other or not mine then return false
  elseif not other then return true
  end

  return smallerIdList(splitByDot(mine), splitByDot(other))
end

local methods = {}

function methods:nextMajor()
  return semver(self.major + 1, 0, 0)
end
function methods:nextMinor()
  return semver(self.major, self.minor + 1, 0)
end
function methods:nextPatch()
  return semver(self.major, self.minor, self.patch + 1)
end

local mt = { __index = methods }
function mt:__eq(other)
  return self.major == other.major and
         self.minor == other.minor and
         self.patch == other.patch and
         self.prerelease == other.prerelease
         -- notice that build is ignored for precedence in semver 2.0.0
end
function mt:__lt(other)
  if self.major ~= other.major then return self.major < other.major end
  if self.minor ~= other.minor then return self.minor < other.minor end
  if self.patch ~= other.patch then return self.patch < other.patch end
  return smallerPrerelease(self.prerelease, other.prerelease)
  -- notice that build is ignored for precedence in semver 2.0.0
end
-- This works like the "pessimisstic operator" in Rubygems.
-- if a and b are versions, a ^ b means "b is backwards-compatible with a"
-- in other words, "it's safe to upgrade from a to b"
function mt:__pow(other)
  if self.major == 0 then
    return self == other
  end
  return self.major == other.major and
         self.minor <= other.minor
end
function mt:__tostring()
  local buffer = { ("%d.%d.%d"):format(self.major, self.minor, self.patch) }
  if self.prerelease then table.insert(buffer, "-" .. self.prerelease) end
  if self.build      then table.insert(buffer, "+" .. self.build) end
  return table.concat(buffer)
end

function v(major, minor, patch, prerelease, build)
  assert(major, "At least one parameter is needed")

  if type(major) == 'string' then
    major,minor,patch,prerelease,build = parseVersion(major)
  end
  patch = patch or 0
  minor = minor or 0

  checkPositiveInteger(major, "major")
  checkPositiveInteger(minor, "minor")
  checkPositiveInteger(patch, "patch")

  local result = {major=major, minor=minor, patch=patch, prerelease=prerelease, build=build}
  return setmetatable(result, mt)
end