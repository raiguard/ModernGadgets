--------------------------------------------------
-- RGBA Manipulation
-- Version 1.1.0
-- By iamanai
--------------------------------------------------
--
-- Release Notes:
-- v1.1.0 - Changed functionality to separate individual colors called by the skin, to get rid of the hard-coded arrays
--          of variable names
-- v1.0.0 - Initial release
--

isDbg = false

function Initialize()

	-- variable setup example:
	--
	-- fontColor=250,250,250,200
	-- fontColorRgb=0,0,0
	-- fontColorA=0
	--
	-- this script will dynamically set fontColorRgb to 250,250,250, and fontColorA to 200. keep in mind that since it does it
	-- dynamically, you will need to use 'DynamicVariables=1' in any meter or measure that uses fontColorRgb or fontColorA.

	LogHelper('RGBASeparation script successfully initialized', 'Debug')
end


function Update()



end

-- called from the skin, separates targetColor RGBA value into RGB | A and sets the two groupings to separate variables
function SeparateRGBA(targetColor)

	local baseColor = SKIN:GetVariable(targetColor)

	SKIN:Bang('!SetVariable', targetColor .. 'Rgb', GetStringRgb(baseColor))
	SKIN:Bang('!SetVariable', targetColor .. 'A', GetRgbaValue(baseColor, 4))

	LogHelper('RGBA separation for \'' .. targetColor .. '\' completed successfully', 'Debug')

end

-- simplifies getting the RGB, avoiding code clutter
function GetStringRgb(source)

	local valueR = GetRgbaValue(source, 1)
	local valueG = GetRgbaValue(source, 2)
	local valueB = GetRgbaValue(source, 3)

	return tostring(valueR .. ',' .. valueG .. ',' .. valueB)

end

-- separates an RGBA value into the four values, and returns the value specified by 'key'
function GetRgbaValue(source, key)

	if key > 4 then
		LogHelper('\'key\' cannot exceed 4!', 'Error')
		return nil
	else
		rgbIt = string.gmatch(source,"%d+")
		rgbTable = {}
		for match in rgbIt do
			table.insert(rgbTable, match)
		end

		return tostring(rgbTable[key])
	end

end

-- function to make logging messages less cluttered
function LogHelper(message, type)

	if isDbg == true then
		SKIN:Bang("!Log", 'RGBSeparation.lua: ' .. message, type)
	elseif type ~= 'Debug' then
		SKIN:Bang("!Log", 'RGBSeparation.lua: ' .. message, type)
	end

end
