-- MODERN GADGETS SETTINGS MANAGEMENT
-- Version 1.0.0
-- By iamanai
--
-- This script is used by the setup skin to manage the external settings files.
-- ReadIni and WriteIni scripts created by jsmorley, edited by iamanai. Used
-- with permission from the Rainmeter snippits page
-- OrderedTableSimple script taken from
-- http://lua-users.org/wiki/OrderedTableSimple, used with permission.
--
-- --------------------
-- CHANGELOG
-- v1.0.0 - 2016-6-4
--  - Initial release
-- --------------------
--
-- TO-DO:
--  - Add capabilities to ReadIni and WriteIni to handle intentional line spaces and comments
--  - Add check for extraneous values in settings files, so they can be deleted
--

isDbg = false

function Initialize()

  fileNames = { 'ControlFile.inc',
                'GlobalSettings.inc',
                'CpuSettings.inc',
                'NetworkSettings.inc',
                'GpuSettings.inc',
                'DisksSettings.inc' }

  filesPath = SKIN:GetVariable('SETTINGSPATH') .. 'ModernGadgetsSettings\\'

  rFilesPath = SKIN:GetVariable('@') .. 'ReferenceFiles\\'

  LogHelper('Script Initialized', 'Debug')

end

function Update() end

function TestReadIni()
  testTable = ReadIni('D:\\Files\\Caleb\\Test.inc')
end

function TestWriteIni()
  WriteIni(testTable, 'D:\\Files\\Caleb\\Test.inc')
end

-- runs once on initial skin load (not a refresh)
function SettingsProtocol()

  -- check if external control file exists
  local ctrlFile = io.open(filesPath .. fileNames[1])
  if ctrlFile == nil then
    LogHelper('Creating external settings files', 'Notice')
    CreateFiles()
  else
    io.close(ctrlFile)
    LogHelper('Settings files found', 'Debug')

    -- assemble tables for both control files
    local rCtrlTable = ReadIni(rFilesPath .. fileNames[1])
    local ctrlTable = ReadIni(filesPath .. fileNames[1])

    LogHelper(rCtrlTable['Variables']['mgVersion'] .. ' | ' .. ctrlTable['Variables']['mgVersion'])

    -- check if tables are identical
    if rCtrlTable['Variables']['mgVersion'] == ctrlTable['Variables']['mgVersion'] and rCtrlTable['Variables']['fileRevision'] == ctrlTable['Variables']['fileRevision'] then
      LogHelper('Settings files up-to-date', 'Notice')
    else
      LogHelper('Updating settings files', 'Notice')
      UpdateFiles()
    end
  end
end

-- invoked through global settings skin, delete all settings files and replace with defaults
function ResetToDefaults()

  os.remove(filesPath)
  CreateFiles()

end

function CreateFiles()

  -- create file directory
  os.execute("mkdir " .. filesPath)

  -- write entire contents of reference files to the corresponding settings files
  for i=1,6 do
    WriteIni(ReadIni(rFilesPath .. fileNames[i]), filesPath .. fileNames[i])
  end

end

function UpdateFiles()

  -- for the control file
  WriteIni(ReadIni(rFilesPath .. fileNames[1]), filesPath .. fileNames[1])

  -- for the other files
  for y=2,6 do
    -- create file tables for reference file and actual file, constructor table
    LogHelper('FILE TABLE:', 'Debug')
    local fileTable = ReadIni(filesPath .. fileNames[y])
    LogHelper('REFERENCE FILE TABLE:', 'Debug')
    local refFileTable = ReadIni(rFilesPath .. fileNames[y])
    local newFileTable = newT()

    -- for every section in the file
    for i,v in refFileTable:opairs() do
      newFileTable[i] = newT()
      -- for every key=value pair in the section
      for a,b in refFileTable[i]:opairs() do
        -- if value of current key is same for both files, or if actual file does not have key
        if refFileTable[i][a] == fileTable[i][a] or fileTable[i][a] == nil then
          newFileTable[i][a] = b
        else
          LogHelper('Conflict: ' .. a, 'Debug')
          newFileTable[i][a] = fileTable[i][a]
        end
      end
    end

    -- write constructor table to settings file
    WriteIni(newFileTable, filesPath .. fileNames[y])
    LogHelper('Finished cross-reference for ' .. fileNames[y], 'Debug')
  end

  SKIN:Bang('!RefreshGroup', 'ModernGadgets')
  SKIN:Bang('!Refresh')

end

-- parses a INI formatted text file into a 'TableName[Section][Key] = Value' table using the newT() method
function ReadIni(inputfile)
	local file = assert(io.open(inputfile, 'r'), 'Unable to open ' .. inputfile)
	local tbl, section = newT()
	local num = 0
	for line in file:lines() do
		num = num + 1
		if not line:match('^%s;') then
			local key, command = line:match('^([^=]+)=(.+)')
			if line:match('^%s-%[.+') then
				section = line:match('^%s-%[([^%]]+)')
        LogHelper(section, 'Debug')
				if not tbl[section] then tbl[section] = newT() end
			elseif key and command and section then
        LogHelper(key .. '=' .. command, 'Debug')
				tbl[section][key:match('(%S*)%s*$')] = command:match('^s*(.-)%s*$')
			elseif #line > 0 and section and not key or command then
				-- print(num .. ': Invalid property or value.')
			end
		end
	end
	if not section then print('No sections found in ' .. inputfile) end
	file:close()
	return tbl
end

-- takes a table created by ReadIni and writes the contents into a INI formatted text file
function WriteIni(inputtable, filename)
	assert(type(inputtable) == 'table', ('WriteIni must receive a table. Received %s instead.'):format(type(inputtable)))

	local file = assert(io.open(filename, 'w'), 'Unable to open ' .. filename)
	local lines = {}

	for section, contents in inputtable:opairs() do
		table.insert(lines, ('\[%s\]'):format(section))
    LogHelper(section, 'Debug')
		for key, value in contents:opairs() do
			table.insert(lines, ('%s=%s'):format(key, value))
      LogHelper(key .. '=' .. value, 'Debug')
		end
		table.insert(lines, '')
	end

	file:write(table.concat(lines, '\n'))
	file:close()
end

-- creates an interactable 'ordered table'
function newT( t )
   local mt = {}
   -- set methods
   mt.__index = {
      -- set key order table inside __index for faster lookup
      _korder = {},
      -- traversal of hidden values
      hidden = function() return pairs( mt.__index ) end,
      -- traversal of table ordered: returning index, key
      ipairs = function( self ) return ipairs( self._korder ) end,
      -- traversal of table
      pairs = function( self ) return pairs( self ) end,
      -- traversal of table ordered: returning key,value
      opairs = function( self )
         local i = 0
         local function iter( self )
            i = i + 1
            local k = self._korder[i]
            if k then
              return k,self[k]
            end
         end
         return iter,self
      end,
      -- to be able to delete entries we must write a delete function
      del = function( self,key )
         if self[key] then
            self[key] = nil
            for i,k in ipairs( self._korder ) do
               if k == key then
                  table.remove( self._korder, i )
                  return
               end
            end
         end
      end,
   }
   -- set new index handling
   mt.__newindex = function( self,k,v )
      if k ~= "del" and v then
         rawset( self,k,v )
         table.insert( self._korder, k )
      end
   end
   return setmetatable( t or {},mt )
end

-- function to make logging messages less cluttered
function LogHelper(message, type)

  if isDbg == true then
    SKIN:Bang("!Log", 'SettingsManagement.lua: ' .. message, type)
  elseif type ~= 'Debug' then
  	SKIN:Bang("!Log", 'SettingsManagement.lua: ' .. message, type)
	end

end
