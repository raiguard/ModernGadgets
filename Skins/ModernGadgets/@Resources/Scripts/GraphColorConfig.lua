--------------------------------------------------
-- GRAPH COLOR CONFIG
-- Version 1.0.0
-- By iamanai
--------------------------------------------------

isDbg = false

function Initialize()
	
	-- these arrays contain the color IDs of all coloring options in each gadget. possible prefixes are sColor, gColor, gAlpha, and color.
	colorIdsAllCpuMeter = {		'Ram', 'Page', 'Fan', 'AvgCpu',
								'Core1', 'Core2', 'Core3', 'Core4', 
								'Core5', 'Core6', 'Core7', 'Core8', 
								'Core9', 'Core10', 'Core11', 'Core12', 
								'Core13', 'Core14', 'Core15', 'Core16'	}
	
	colorIdsNetworkMeter = {	'Upload', 'Download'	}
												
	colorIdsGpuMeter = {	'TotalUsage', 'MemoryUsage', 'FanUsage', 'MemController'	}
							
	colorIdsDrivesMeter = {	'Disk1', 'Disk2', 'Disk3', 'Disk4',
								'Disk5', 'Disk6', 'Disk7', 'Disk8',
								'Disk9', 'Disk10',	}
								
	sColorId = 'sColor'
	gColorId = 'gColor'
	gAlphaId = 'gAlpha'
	colorId = 'color'
	
end


function Update()

	

end

-- 
function SetGraphColors(targetskin)

	-- retrieved from skin: file paths of the gadget's variables (target) and settings (source) files
	local targetfile = SKIN:GetVariable('varPath')
	local sourcefile = SKIN:GetVariable('skinSettingsPath')
	
	if targetskin == 'allcpumeter' then
		LogHelper('Target skin: All CPU Meter', 'Debug')
		LogHelper('Target file: ' .. targetfile, 'Debug')
		LogHelper('Source file: ' .. sourcefile, 'Debug')
		for i = 1, #colorIdsAllCpuMeter do
			SKIN:Bang('!SetVariable', gColorId .. colorIdsAllCpuMeter[i], GetStringRgb(SKIN:GetVariable(sColorId .. colorIdsAllCpuMeter[i])))
			LogHelper("Set variable '" .. gColorId .. colorIdsAllCpuMeter[i] .. "'", 'Debug')
			SKIN:Bang('!SetVariable', gAlphaId .. colorIdsAllCpuMeter[i], GetStringAlpha(SKIN:GetVariable(sColorId .. colorIdsAllCpuMeter[i])))
			LogHelper("Set variable '" .. gAlphaId .. colorIdsAllCpuMeter[i] .. "'", 'Debug')
		end
	elseif targetskin == 'networkmeter' then
		LogHelper('Target skin: Network Meter', 'Debug')
		LogHelper('Target file: ' .. targetfile, 'Debug')
		LogHelper('Source file: ' .. sourcefile, 'Debug')
		for i = 1, #colorIdsNetworkMeter do
			SKIN:Bang('!SetVariable', gColorId .. colorIdsNetworkMeter[i], GetStringRgb(SKIN:GetVariable(sColorId .. colorIdsNetworkMeter[i])))
			LogHelper("Set variable '" .. gColorId .. colorIdsNetworkMeter[i] .. "'", 'Debug')
			SKIN:Bang('!SetVariable', gAlphaId .. colorIdsNetworkMeter[i], GetStringAlpha(SKIN:GetVariable(sColorId .. colorIdsNetworkMeter[i])))
			LogHelper("Set variable '" .. gAlphaId .. colorIdsNetworkMeter[i] .. "'", 'Debug')
		end
	elseif targetskin == 'gpumeter' then
		LogHelper('Target skin: GPU Meter', 'Debug')
		LogHelper('Target file: ' .. targetfile, 'Debug')
		LogHelper('Source file: ' .. sourcefile, 'Debug')
		for i = 1, #colorIdsGpuMeter do
			SKIN:Bang('!SetVariable', gColorId .. colorIdsGpuMeter[i], GetStringRgb(SKIN:GetVariable(sColorId .. colorIdsGpuMeter[i])))
			LogHelper("Set variable '" .. gColorId .. colorIdsGpuMeter[i] .. "'", 'Debug')
			SKIN:Bang('!SetVariable', gAlphaId .. colorIdsGpuMeter[i], GetStringAlpha(SKIN:GetVariable(sColorId .. colorIdsGpuMeter[i])))
			LogHelper("Set variable '" .. gAlphaId .. colorIdsGpuMeter[i] .. "'", 'Debug')
		end
	elseif targetskin == 'drivesmeter' then
		LogHelper('Target skin: Drives Meter', 'Debug')
		LogHelper('Target file: ' .. targetfile, 'Debug')
		LogHelper('Source file: ' .. sourcefile, 'Debug')
		for i = 1, #colorIdsDrivesMeter do
			SKIN:Bang('!SetVariable', gColorId .. colorIdsDrivesMeter[i], GetStringRgb(SKIN:GetVariable(sColorId .. colorIdsDrivesMeter[i])))
			LogHelper("Set variable '" .. gColorId .. colorIdsDrivesMeter[i] .. "'", 'Debug')
			SKIN:Bang('!SetVariable', gAlphaId .. colorIdsDrivesMeter[i], GetStringAlpha(SKIN:GetVariable(sColorId .. colorIdsDrivesMeter[i])))
			LogHelper("Set variable '" .. gAlphaId .. colorIdsDrivesMeter[i] .. "'", 'Debug')
		end
	else
		LogHelper('Invalid skin target!', 'Warning')
	end
	
	LogHelper('Completed graph color/alpha config', 'Debug')
	
end

function GetStringRgb(source)
	
	rgbIt = string.gmatch(source,"%d+")
	rgbTable = {}
	for match in rgbIt do
		table.insert(rgbTable, match)
	end
		
	return tostring(rgbTable[1] .. ',' .. rgbTable[2] .. ',' .. rgbTable[3])

end

function GetStringAlpha(source)

	rgbIt = string.gmatch(source,"%d+")
	rgbTable = {}
	for match in rgbIt do
		table.insert(rgbTable, match)
	end
		
	return tostring(rgbTable[4])

end

function LogHelper(message, type)

	if isDbg == true then
		SKIN:Bang("!Log", message, type)
	elseif type ~= 'Debug' then
		SKIN:Bang("!Log", message, type)
	end
	
end