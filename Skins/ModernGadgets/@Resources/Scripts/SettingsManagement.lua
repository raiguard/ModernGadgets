-- MODERN GADGETS SETTINGS MANAGEMENT
-- Version 1.0.0
-- By iamanai
--
-- This script is used by the setup skin to manage the external settings files.
-- ReadIni and WriteIni scripts created by jsmorley, taken with permission from
-- the Rainmeter snippits page.
--

isDbg = true

function Initialize()

  fileNames = { 'ControlFile.inc',
                'StyleSheet.inc',
                'GlobalSettings.inc',
                'CpuSettings.inc',
                'NetworkSettings.inc',
                'GpuSettings.inc',
                'DisksSettings.inc' }

  filesPath = SKIN:GetVariable('SETTINGSPATH')

  rFilesPath = SKIN:GetVariable('@') .. 'ReferenceFiles\\'

  LogHelper('Script Initialized', 'Debug')

end

function Update() end

-- runs once on initial skin load (not a refresh)
function SettingsProtocol()

  -- print_r(ctrlTable)
  -- LogHelper('mgVersion: ' .. tostring(ctrlTable[Variables][mgVersion]) .. ' | fileRevision: ' .. tostring(ctrlTable[Variables][fileRevision]), 'Debug')
  -- WriteIni(ctrlTable, rFilesPath .. 'Temp.inc')

  if CheckFiles(rFilesPath .. fileNames[1], filesPath .. fileNames[1]) == 1 then

  else

  end

end

function CheckFiles(refFile, sFile)



end

-- Created by jsmorley, parses a .ini or .inc file into a table of Table[Section][Key] = Value
function ReadIni(inputfile)
	local file = assert(io.open(inputfile, 'r'), 'Unable to open ' .. inputfile)
	local tbl, section = {}
	local num = 0
	for line in file:lines() do
		num = num + 1
		if not line:match('^%s-;') then
			local key, command = line:match('^([^=]+)=(.+)')
			if line:match('^%s-%[.+') then
				section = line:match('^%s-%[([^%]]+)')
				if not tbl[section] then tbl[section] = {} end
			elseif key and command and section then
				tbl[section][key:match('^s*(%S*)%s*$')] = command:match('^s*(.-)%s*$')
			elseif #line > 0 and section and not key or command then
				print(num .. ': Invalid property or value.')
			end
		end
	end
	if not section then print('No sections found in ' .. inputfile) end
	file:close()
	return tbl
end

-- Also created by jsmorley, takes a Table[Section][Key] = Value list and writes the values into a .ini or .inc file
function WriteIni(inputtable, filename)
	assert(type(inputtable) == 'table', ('WriteIni must receive a table. Received %s instead.'):format(type(inputtable)))

	local file = assert(io.open(filename, 'w'), 'Unable to open ' .. filename)
	local lines = {}

	for section, contents in pairs(inputtable) do
		table.insert(lines, ('\[%s\]'):format(section))
		for key, value in pairs(contents) do
			table.insert(lines, ('%s=%s'):format(key, value))
		end
		table.insert(lines, '')
	end

	file:write(table.concat(lines, '\r'))
	file:close()
end



-- function to make logging messages less cluttered
function LogHelper(message, type)

  if isDbg == true then
    SKIN:Bang("!Log", 'SettingsManagement.lua: ' .. message, type)
  elseif type ~= 'Debug' then
  	SKIN:Bang("!Log", 'SettingsManagement.lua: ' .. message, type)
	end

end

-- purely for debugging tables
function print_r ( t )
    local print_r_cache={}
    local function sub_print_r(t,indent)
        if (print_r_cache[tostring(t)]) then
            LogHelper(indent.."*"..tostring(t), 'Debug')
        else
            print_r_cache[tostring(t)]=true
            if (type(t)=="table") then
                for pos,val in pairs(t) do
                    if (type(val)=="table") then
                        LogHelper(indent.."["..pos.."] => "..tostring(t).." {", 'Debug')
                        sub_print_r(val,indent..string.rep(" ",string.len(pos)+8))
                        LogHelper(indent..string.rep(" ",string.len(pos)+6).."}", 'Debug')
                    elseif (type(val)=="string") then
                        LogHelper(indent.."["..pos..'] => "'..val..'"', 'Debug')
                    else
                        LogHelper(indent.."["..pos.."] => "..tostring(val), 'Debug')
                    end
                end
            else
                LogHelper(indent..tostring(t), 'Debug')
            end
        end
    end
    if (type(t)=="table") then
        LogHelper(tostring(t).." {", 'Debug')
        sub_print_r(t,"  ")
        LogHelper("}", 'Debug')
    else
        sub_print_r(t,"  ")
    end
    print()
end

-- ----------------------------------------------------------------------------------------------------------------

-- function SettingsProtocol()
--
--   LogHelper('Initiating Settings Protocol', 'Debug')
--
--   -- Create a LineNum/Key/Value matrix of the reference settings file
--   rTable = ReadIni(rFilePath)
--   if not rTable then
--     LogHelper('WTF? Reference settings file does not exist!', 'Error')
--     -- Set setup skin page and show
--     SKIN:Bang('!WriteKeyValue', 'Variables', 'page', 'refFileError')
--     SKIN:Bang('!Refresh')
--     SKIN:Bang('!ShowFade')
--   end
--
--   -- Create a LineNum/Key/Value matrix of the actual settings file
--   fTable = ReadIni(filePath)
--   if not fTable then -- if file is nonexistent
--     LogHelper('Settings file not found. Creating at ' .. filePath, 'Warning')
--     -- Create new file and add all values from reference file
--     local f = io.open(filePath,'w')
--     f:write('; MODERNGADGETS SETTINGS FILE\n\n', '[Variables]\n')
--     for sKey,a in ipairs(rTable) do f:write(a[1], '=', a[2], '\n') LogHelper('Added item \'' .. a[1] .. '\' with value \'' .. a[2] .. '\'', 'Debug') end
--     f:close()
--
--     -- Actually create the matrix
--     fTable = ReadIni(filePath)
--
--     LogHelper('Created settings file', 'Notice')
--
--     -- Set setup skin page and show
--     SKIN:Bang('!WriteKeyValue', 'Variables', 'page', 'welcome')
--     SKIN:Bang('!Refresh')
--     SKIN:Bang('!ShowFade')
--
--   end
--   -- Check if settings file is up-to-date
--   if (rTable[1][2] == fTable[1][2]) then LogHelper('Settings file is up-to-date', 'Notice')
--   else
--     LogHelper('Settings file is outdated! Initiating cross reference', 'Warning')
--     -- Create temporary file with current values
--     local tempF = io.open(tempFilePath,'w')
--     tempF:write('[Variables]\n')
--     for sKey,a in ipairs(fTable) do tempF:write(a[1], '=', a[2], '\n') LogHelper('Added item \'' .. a[1] .. '\' with value \'' .. a[2] .. '\' to \'' .. tempFilePath .. '\'', 'Debug') end
--     tempF:close()
--     -- Parse that file into a Key/Value table (NOT a matrix)
--     tempTable = ReadIniTable(tempFilePath)
--     if not tempTable then LogHelper('Something went wrong! Could not parse temporary file', 'Error') end
--     -- Delete settings file and create new one with updated settings
--     os.remove(filePath)
--     local setF = io.open(filePath,'w')
--     setF:write('; MODERNGADGETS SETTINGS FILE\n\n', '[Variables]\n', 'fileVersion=', rTable[1][2], '\n')
--     for sKey,a in ipairs(rTable) do
--       -- Setting needs to be added
--       if not tempTable[rTable[sKey][1]] then setF:write(rTable[sKey][1], '=', rTable[sKey][2], '\n')
--       -- Value has been changed
--       elseif not (rTable[sKey][2] == tempTable[rTable[sKey][1]] or sKey == 1) then
--         LogHelper('Conflict with value \'' .. rTable[sKey][1] .. '\' Current: \'' .. tempTable[rTable[sKey][1]] .. '\' Reference: \'' .. rTable[sKey][2] .. '\'', 'Debug')
--         setF:write(rTable[sKey][1], '=', tempTable[rTable[sKey][1]], '\n')
--       -- Not the first value (fileVersion)
--       elseif not (sKey == 1) then setF:write(rTable[sKey][1], '=', rTable[sKey][2], '\n') end
--     end
--     -- Close settings file and delete temporary file
--     LogHelper('Cross referencing complete. Cleaning up', 'Notice')
--     setF:close()
--     os.remove(tempFilePath)
--
--     -- Set setup skin page and show
--     SKIN:Bang('!WriteKeyValue', 'Variables', 'page', 'updated')
--     SKIN:Bang('!Refresh')
--     SKIN:Bang('!ShowFade')
--   end
--
-- end
--
-- -- Parses the given file into a LineNum/Key/Value matrix
-- function ReadIni(file)
--
--   LogHelper('ReadIni: Parsing file: ' .. file, 'Debug')
--
--   local f = io.open(file,'r')
--   if not f then return nil, LogHelper('Cannot open file: ' .. file, 'Error') end
--   local lineCounter = 0
--   local tablename = {}
--   local section
--   for fline in f:lines() do
--     lineCounter = lineCounter + 1
--     -- Ignore leading and trailing spaces
--     local line = fline:match("^%s*(.-)%s*$")
--     -- Ignore comments and section headers
--     if not line:match("^[%;#]") and not line:match("^%[(.*)%]$") and #line > 0 then
--       -- Parse Key=Value
--       local key, value = line:match("([^=]*)%=(.*)")
--       -- Remove white space from Key=Value
--       key = key:match("^%s*(%S*)%s*$")
--       value = value:match("^%s*(.-)%s*$")
--       -- Check for error
--       if not (key and value) then return nil, LogHelper('Bad key or value in file: ' .. file .. ': ' .. lineCounter .. '\n line: ' .. fline, 'Error') end
--       -- Set Key/Value in table
--       table.insert(tablename, {tostring(key), value})
--       -- LogHelper(key .. '=' .. value, 'Debug')
--     end
--   end
--   f:close()
--   return tablename
--
-- end
--
-- -- Parses the given file into a Key/Value table
-- function ReadIniTable(file)
--
--   LogHelper('ReadIniTable: Parsing file: ' .. file, 'Debug')
--
--   local f = io.open(file,'r')
--   if not f then return nil, LogHelper('Cannot open file: ' .. file, 'Error') end
--   local lineCounter = 0
--   local tablename = {}
--   local section
--   for fline in f:lines() do
--     lineCounter = lineCounter + 1
--     -- Ignore leading and trailing spaces
--     local line = fline:match("^%s*(.-)%s*$")
--     -- Ignore comments and section headers
--     if not line:match("^[%;#]") and not line:match("^%[(.*)%]$") and #line > 0 then
--       -- Parse Key=Value
--       local key, value = line:match("([^=]*)%=(.*)")
--       -- Remove white space from Key=Value
--       key = key:match("^%s*(%S*)%s*$")
--       value = value:match("^%s*(.-)%s*$")
--       -- Check for error
--       if not (key and value) then return nil, LogHelper('Bad key or value in file: ' .. file .. ': ' .. lineCounter .. '\n line: ' .. fline, 'Error') end
--       -- Set Key/Value in table
--       tablename[key] = value
--       -- LogHelper(key .. '=' .. value, 'Debug')
--     end
--   end
--   f:close()
--   return tablename
--
-- end
