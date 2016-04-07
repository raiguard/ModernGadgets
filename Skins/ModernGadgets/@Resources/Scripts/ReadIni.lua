-- ReadIni.lua by Jeffrey Morley
 
function Initialize()

   sIniPath = SKIN:GetVariable("SETTINGSPATH")
   sCurrSkin = SKIN:GetVariable("CURRENTPATH")..SKIN:GetVariable("CURRENTFILE")

end -- function Initialize

function Update()

   tTable = ReadIni(sIniPath ..'Rainmeter.ini')
   for sKey,a in pairs(tTable['Rainmeter']) do
      for sValue,b in pairs(tTable['Rainmeter'][sKey]) do
         print(sKey.."="..sValue)
      end
   end

   tTable = ReadIni(sCurrSkin)
   for sKey,a in pairs(tTable['Rainmeter']) do
      if sKey == 'Update' then
         for sValue,b in pairs(tTable['Rainmeter'][sKey]) do
            sSkinUpdate = sValue
            print(sSkinUpdate)
         end
      end
   end

end -- function Update

function ReadIni(filename)
  local f = io.open(filename,'r')
  if not f then return nil, print("ReadIni: Can't open file: "..filename) end
  local line_counter=0
  local tablename = {}
  local section
  for fline in f:lines() do
    line_counter=line_counter+1
    -- Ignore leading and trailing spaces
    local line = fline:match("^%s*(.-)%s*$")
    -- Ignore comments
    if not line:match("^[%;#]") and #line > 0 then
      -- Check for [Section]
     local sec = line:match("^%[(.*)%]$")
      if sec then
        section = sec
        if not tablename[section] then tablename[section]={} end
      else
        -- parse Key=Value
        local key, value = line:match("([^=]*)%=(.*)")
        -- Remove white space from Key=Value
        key = key:match("^%s*(%S*)%s*$")
        value = value:match("^%s*(.-)%s*$")
        -- Check for error
        if not (key and value) then return nil, print('Error bad key or value in file:'.. filename..': '.. line_counter.."\n line:".. fline) end
      -- Set Section/Key/Value in table
        if section then
          if not tablename[section][key] then tablename[section][key]={} end
        if not tablename[section][key][value] then tablename[section][key][value]={} end
        end
      end
    end
  end
  f:close()
  return tablename
  end -- function ReadIni
