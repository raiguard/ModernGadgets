-- MODERN GADGETS SETTINGS MANAGEMENT
-- Version 1.0.0
-- By iamanai
--
-- ------------------------------
-- CHANGELOG
-- v1.0.0 - 2016-??-??: Initial release
-- ------------------------------
--

isDbg = false

function Initialize()

  fileName = 'ModernGadgetsSettings.inc'
  filePath = SKIN:GetVariable('SETTINGSPATH') .. fileName

  rFileName = 'ReferenceSettingsFile.inc'
  rFilePath = SKIN:GetVariable('@') .. rFileName

  tempFileName = 'MgSettingsTemp.inc'
  tempFilePath = SKIN:GetVariable('SETTINGSPATH') .. tempFileName

  LogHelper("Script Initialized", "Debug")

end

function Update()



end

function SettingsProtocol()

  LogHelper("Initiating Settings Protocol", "Debug")

  -- Create a LineNum/Key/Value matrix of the reference settings file
  rTable = ReadIni(rFilePath)
  if not rTable then
    LogHelper('WTF? Reference settings file does not exist!', 'Error')
    -- Set setup skin page and show
    SKIN:Bang('!WriteKeyValue', 'Variables', 'page', 'refFileError')
    SKIN:Bang('!Refresh')
    SKIN:Bang('!ShowFade')
  end

  -- Create a LineNum/Key/Value matrix of the actual settings file
  fTable = ReadIni(filePath)
  if not fTable then -- if file is nonexistent
    LogHelper('Settings file not found. Creating at ' .. filePath, 'Warning')
    -- Create new file and add all values from reference file
    local f = io.open(filePath,'w')
    f:write('; MODERNGADGETS SETTINGS FILE\n\n', '[Variables]\n')
    for sKey,a in ipairs(rTable) do f:write(a[1], '=', a[2], '\n') LogHelper('Added item \'' .. a[1] .. '\' with value \'' .. a[2] .. '\'', 'Debug') end
    f:close()

    -- Actually create the matrix
    fTable = ReadIni(filePath)

    LogHelper('Created settings file', 'Notice')

    -- Set setup skin page and show
    SKIN:Bang('!WriteKeyValue', 'Variables', 'page', 'welcome')
    SKIN:Bang('!Refresh')
    SKIN:Bang('!ShowFade')

  end
  -- Check if settings file is up-to-date
  if (rTable[1][2] == fTable[1][2]) then LogHelper('Settings file is up-to-date', 'Notice')
  else
    LogHelper('Settings file is outdated! Initiating cross reference', 'Warning')
    -- Create temporary file with current values
    local tempF = io.open(tempFilePath,'w')
    tempF:write('[Variables]\n')
    for sKey,a in ipairs(fTable) do tempF:write(a[1], '=', a[2], '\n') LogHelper('Added item \'' .. a[1] .. '\' with value \'' .. a[2] .. '\' to \'' .. tempFilePath .. '\'', 'Debug') end
    tempF:close()
    -- Parse that file into a Key/Value table (NOT a matrix)
    tempTable = ReadIniTable(tempFilePath)
    if not tempTable then LogHelper('Something went wrong! Could not parse temporary file', 'Error') end
    -- Delete settings file and create new one with updated settings
    os.remove(filePath)
    local setF = io.open(filePath,'w')
    setF:write('; MODERNGADGETS SETTINGS FILE\n\n', '[Variables]\n', 'fileVersion=', rTable[1][2], '\n')
    for sKey,a in ipairs(rTable) do
      -- Setting needs to be added
      if not tempTable[rTable[sKey][1]] then setF:write(rTable[sKey][1], '=', rTable[sKey][2], '\n')
      -- Value has been changed
      elseif not (rTable[sKey][2] == tempTable[rTable[sKey][1]] or sKey == 1) then
        LogHelper('Conflict with value \'' .. rTable[sKey][1] .. '\' Current: \'' .. tempTable[rTable[sKey][1]] .. '\' Reference: \'' .. rTable[sKey][2] .. '\'', 'Debug')
        setF:write(rTable[sKey][1], '=', tempTable[rTable[sKey][1]], '\n')
      -- Not the first value (fileVersion)
      elseif not (sKey == 1) then setF:write(rTable[sKey][1], '=', rTable[sKey][2], '\n') end
    end
    -- Close settings file and delete temporary file
    LogHelper('Cross referencing complete. Cleaning up', 'Notice')
    setF:close()
    os.remove(tempFilePath)

    -- Set setup skin page and show
    SKIN:Bang('!WriteKeyValue', 'Variables', 'page', 'updated')
    SKIN:Bang('!Refresh')
    SKIN:Bang('!ShowFade')
  end

end

-- Parses the given file into a LineNum/Key/Value matrix
function ReadIni(file)

  LogHelper('ReadIni: Parsing file: ' .. file, 'Debug')

  local f = io.open(file,'r')
  if not f then return nil, LogHelper('Cannot open file: ' .. file, 'Error') end
  local lineCounter = 0
  local tablename = {}
  local section
  for fline in f:lines() do
    lineCounter = lineCounter + 1
    -- Ignore leading and trailing spaces
    local line = fline:match("^%s*(.-)%s*$")
    -- Ignore comments and section headers
    if not line:match("^[%;#]") and not line:match("^%[(.*)%]$") and #line > 0 then
      -- Parse Key=Value
      local key, value = line:match("([^=]*)%=(.*)")
      -- Remove white space from Key=Value
      key = key:match("^%s*(%S*)%s*$")
      value = value:match("^%s*(.-)%s*$")
      -- Check for error
      if not (key and value) then return nil, LogHelper('Bad key or value in file: ' .. file .. ': ' .. lineCounter .. '\n line: ' .. fline, 'Error') end
      -- Set Key/Value in table
      table.insert(tablename, {tostring(key), value})
      -- LogHelper(key .. '=' .. value, 'Debug')
    end
  end
  f:close()
  return tablename

end

-- Parses the given file into a Key/Value table
function ReadIniTable(file)

  LogHelper('ReadIniTable: Parsing file: ' .. file, 'Debug')

  local f = io.open(file,'r')
  if not f then return nil, LogHelper('Cannot open file: ' .. file, 'Error') end
  local lineCounter = 0
  local tablename = {}
  local section
  for fline in f:lines() do
    lineCounter = lineCounter + 1
    -- Ignore leading and trailing spaces
    local line = fline:match("^%s*(.-)%s*$")
    -- Ignore comments and section headers
    if not line:match("^[%;#]") and not line:match("^%[(.*)%]$") and #line > 0 then
      -- Parse Key=Value
      local key, value = line:match("([^=]*)%=(.*)")
      -- Remove white space from Key=Value
      key = key:match("^%s*(%S*)%s*$")
      value = value:match("^%s*(.-)%s*$")
      -- Check for error
      if not (key and value) then return nil, LogHelper('Bad key or value in file: ' .. file .. ': ' .. lineCounter .. '\n line: ' .. fline, 'Error') end
      -- Set Key/Value in table
      tablename[key] = value
      -- LogHelper(key .. '=' .. value, 'Debug')
    end
  end
  f:close()
  return tablename

end

-- function to make logging messages less cluttered
function LogHelper(message, type)

  if isDbg == true then
    SKIN:Bang("!Log", 'SettingsManagement.lua: ' .. message, type)
  elseif type ~= 'Debug' then
  	SKIN:Bang("!Log", 'SettingsManagement.lua: ' .. message, type)
	end

end
