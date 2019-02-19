debug = true

function Initialize() end

function Update() end

function Test(input)

	print(convert('hsl', 'rgb', parse'rgb (255,255,255)'))

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

printIndent = '     '

-- prints the entire contents of a table to the Rainmeter log
function PrintTable(table, tableName)
    if tableName ~= nil then RmLog(tableName .. ':') end
    for k,v in pairs(table) do
        if type(v) == 'table' then
            local pI = printIndent
            RmLog(printIndent .. tostring(k) .. ':')
            printIndent = printIndent .. '  '
            PrintTable(v)
            printIndent = pI
        else
            RmLog(printIndent .. tostring(k) .. ': ' .. tostring(v))
        end
    end
end

-- ------------------------------------------------------------------------------------------------------------------------
-- ------------------------------------------------------------------------------------------------------------------------
-- ------------------------------------------------------------------------------------------------------------------------

