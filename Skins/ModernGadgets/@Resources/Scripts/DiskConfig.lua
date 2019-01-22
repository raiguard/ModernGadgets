debug = false

alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"

function Initialize()

    extVarsPath = SKIN:GetVariable('extVarsPath')

    measureCheckTable = {
        A = SKIN:GetMeasure('MeasureCheckDiskAExists'),
        B = SKIN:GetMeasure('MeasureCheckDiskBExists'),
        C = SKIN:GetMeasure('MeasureCheckDiskCExists'),
        D = SKIN:GetMeasure('MeasureCheckDiskDExists'),
        E = SKIN:GetMeasure('MeasureCheckDiskEExists'),
        F = SKIN:GetMeasure('MeasureCheckDiskFExists'),
        G = SKIN:GetMeasure('MeasureCheckDiskGExists'),
        H = SKIN:GetMeasure('MeasureCheckDiskHExists'),
        I = SKIN:GetMeasure('MeasureCheckDiskIExists'),
        J = SKIN:GetMeasure('MeasureCheckDiskJExists'),
        K = SKIN:GetMeasure('MeasureCheckDiskKExists'),
        L = SKIN:GetMeasure('MeasureCheckDiskLExists'),
        M = SKIN:GetMeasure('MeasureCheckDiskMExists'),
        N = SKIN:GetMeasure('MeasureCheckDiskNExists'),
        O = SKIN:GetMeasure('MeasureCheckDiskOExists'),
        P = SKIN:GetMeasure('MeasureCheckDiskPExists'),
        Q = SKIN:GetMeasure('MeasureCheckDiskQExists'),
        R = SKIN:GetMeasure('MeasureCheckDiskRExists'),
        S = SKIN:GetMeasure('MeasureCheckDiskSExists'),
        T = SKIN:GetMeasure('MeasureCheckDiskTExists'),
        U = SKIN:GetMeasure('MeasureCheckDiskUExists'),
        V = SKIN:GetMeasure('MeasureCheckDiskVExists'),
        W = SKIN:GetMeasure('MeasureCheckDiskWExists'),
        X = SKIN:GetMeasure('MeasureCheckDiskXExists'),
        Y = SKIN:GetMeasure('MeasureCheckDiskYExists'),
        Z = SKIN:GetMeasure('MeasureCheckDiskZExists')
    }

end

function Update()

    local active,inactive = '',''
    local diskIndex = 0
    local i = 0

    alphabet:gsub(".", function(c)
        diskIndex = tonumber(SKIN:GetVariable('lgDisk' .. c .. 'Index'))
        if measureCheckTable[c]:GetValue() > 0 then
            active = active .. c
            if diskIndex == 0 then
                i = i + 1
            end
        else
            inactive = inactive .. c
            if diskIndex > 0 then
                i = i + 1
            end 
        end
    end)

    if i > 0 then UpdateConnectedDisks(active, inactive) end

end

function UpdateConnectedDisks(active, inactive)

    RmLog('Disk state changed: ' .. active)

    local i = 0
    
    active:gsub(".", function(c)
        i = i + 1
        -- Set disk index value to the new letter
        SetVariable('d' .. i, c)
        -- Set disk hide variable
        SetVariable('hideDisk' .. i, '0')
        -- Set line graph disk index
        SetVariable('lgDisk' .. c .. 'Index', i)
        -- Update measures and meters
        SKIN:Bang('!UpdateMeasureGroup', 'Disk' .. i)
        SKIN:Bang('!UpdateMeterGroup', 'Disk' .. i)   
    end)

    inactive:gsub(".", function(c)
        SetVariable('lgDisk' .. c .. 'Index', 0)
    end)

    for i=i+1,10 do
        -- Set disk index value to blank
        SetVariable('d' .. i, '')
        -- Set disk hide variable
        SetVariable('hideDisk' .. i, '1')
        -- Update measures and meters
        SKIN:Bang('!UpdateMeasureGroup', 'Disk' .. i)
        SKIN:Bang('!UpdateMeterGroup', 'Disk' .. i)  
    end

    SKIN:Bang('!UpdateMeterGroup', 'Background')

end

function SetVariable(key, value)

    SKIN:Bang('!SetVariable', key, value)
    SKIN:Bang('!WriteKeyValue', 'Variables', key, value, extVarsPath)

end

function SetOption(section, key, value)

    SKIN:Bang('!SetOption', section, key, value)

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