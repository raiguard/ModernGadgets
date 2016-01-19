isDbg = false

function Initialize()

	hexChars = { 	[0]='0', [1]='1', [2]='2', [3]='3', 
				[4]='4', [5]='5', [6]='6', [7]='7', 
				[8]='8', [9]='9', [10]='a', [11]='b', 
				[12]='c', [13]='d', [14]='e', [15]='f' }
	
	page = SKIN:GetVariable('pageName')
	
	colors = {}
	bars = {}
	
	if page == 'appearance' then
	
		colors = {	SKIN:GetVariable('colorPrimary'), 
					SKIN:GetVariable('colorSecondary'), 
					SKIN:GetVariable('colorAccent'), 
					SKIN:GetVariable('colorDim'),
					SKIN:GetVariable('colorGraphBg')	}
					
		bars = {	SKIN:GetMeter('ColorsPrimaryAlphaBar'), 
					SKIN:GetMeter('ColorsSecondaryAlphaBar'), 
					SKIN:GetMeter('ColorsAccentAlphaBar'), 
					SKIN:GetMeter('ColorsDimAlphaBar'),
					SKIN:GetMeter('ColorsGraphBgAlphaBar')	}
		
		maxBarW = SKIN:GetMeter('ColorsPrimaryAlphaBarBg'):GetW()
	
	elseif page == 'skinsettings' then
	
		gadgetsSubpage = SKIN:GetVariable('gadgetsSubpage')
	
		if gadgetsSubpage == 'allcpumeter' then
		
			if isDbg == true then SKIN:Bang('!Log', 'Page: allcpumeter', 'Debug') end
	
			colors = {	SKIN:GetVariable('sColorRam'), 
						SKIN:GetVariable('sColorPage'), 
						SKIN:GetVariable('sColorFan'), 
						SKIN:GetVariable('sColorAvgCpu'),
						SKIN:GetVariable('sColorCore1'),
						SKIN:GetVariable('sColorCore2'),
						SKIN:GetVariable('sColorCore3'),
						SKIN:GetVariable('sColorCore4'),
						SKIN:GetVariable('sColorCore5'),
						SKIN:GetVariable('sColorCore6'),
						SKIN:GetVariable('sColorCore7'),
						SKIN:GetVariable('sColorCore8'),
						SKIN:GetVariable('sColorCore9'),
						SKIN:GetVariable('sColorCore10'),
						SKIN:GetVariable('sColorCore11'),
						SKIN:GetVariable('sColorCore12'),
						SKIN:GetVariable('sColorCore13'),
						SKIN:GetVariable('sColorCore14'),
						SKIN:GetVariable('sColorCore15'),
						SKIN:GetVariable('sColorCore16')	}
						
			bars = {	SKIN:GetMeter('ColorsRamAlphaBar'), 
						SKIN:GetMeter('ColorsPageAlphaBar'), 
						SKIN:GetMeter('ColorsFanAlphaBar'), 
						SKIN:GetMeter('ColorsAvgCpuAlphaBar'),
						SKIN:GetMeter('ColorsCore1AlphaBar'),
						SKIN:GetMeter('ColorsCore2AlphaBar'),
						SKIN:GetMeter('ColorsCore3AlphaBar'),
						SKIN:GetMeter('ColorsCore4AlphaBar'),
						SKIN:GetMeter('ColorsCore5AlphaBar'),
						SKIN:GetMeter('ColorsCore6AlphaBar'),
						SKIN:GetMeter('ColorsCore7AlphaBar'),
						SKIN:GetMeter('ColorsCore8AlphaBar'),
						SKIN:GetMeter('ColorsCore9AlphaBar'),
						SKIN:GetMeter('ColorsCore10AlphaBar'),
						SKIN:GetMeter('ColorsCore11AlphaBar'),
						SKIN:GetMeter('ColorsCore12AlphaBar'),
						SKIN:GetMeter('ColorsCore13AlphaBar'),
						SKIN:GetMeter('ColorsCore14AlphaBar'),
						SKIN:GetMeter('ColorsCore15AlphaBar'),
						SKIN:GetMeter('ColorsCore16AlphaBar')	}
			
			maxBarW = SKIN:GetMeter('ColorsRamAlphaBarBg'):GetW()
		
		elseif gadgetsSubpage == 'networkmeter' then
	
			if isDbg == true then SKIN:Bang('!Log', 'page: networkmeter', 'Debug') end
		
			colors = {	SKIN:GetVariable('sColorUpload'),
						SKIN:GetVariable('sColorDownload')	}
						
			bars = {	SKIN:GetMeter('ColorsUploadAlphaBar'),
						SKIN:GetMeter('ColorsDownloadAlphaBar')	}
						
			maxBarW = SKIN:GetMeter('ColorsUploadAlphaBarBg'):GetW()
		
		elseif gadgetsSubpage == 'gpumeter' then
	
			if isDbg == true then SKIN:Bang('!Log', 'page: gpumeter', 'Debug') end
		
			colors = {	SKIN:GetVariable('sColorTotalUsage'),
						SKIN:GetVariable('sColorMemoryUsage'),
						SKIN:GetVariable('sColorFanUsage'),
						SKIN:GetVariable('sColorMemController')	}
						
			bars = {	SKIN:GetMeter('ColorsTotalUsageAlphaBar'),
						SKIN:GetMeter('ColorsMemoryUsageAlphaBar'),
						SKIN:GetMeter('ColorsFanUsageAlphaBar'),
						SKIN:GetMeter('ColorsMemControllerAlphaBar')	}
						
			maxBarW = SKIN:GetMeter('ColorsTotalUsageAlphaBarBg'):GetW()
		
		elseif gadgetsSubpage == 'drivesmeter' then
	
			if isDbg == true then SKIN:Bang('!Log', 'page: drivesmeter', 'Debug') end
		
			colors = {	SKIN:GetVariable('sColorDisk1'),
						SKIN:GetVariable('sColorDisk2'),
						SKIN:GetVariable('sColorDisk3'),
						SKIN:GetVariable('sColorDisk4'),
						SKIN:GetVariable('sColorDisk5'),
						SKIN:GetVariable('sColorDisk6'),
						SKIN:GetVariable('sColorDisk7'),
						SKIN:GetVariable('sColorDisk8'),
						SKIN:GetVariable('sColorDisk9'),
						SKIN:GetVariable('sColorDisk10'),
						SKIN:GetVariable('sColorDiskThresholdWarn'),
						SKIN:GetVariable('sColorDiskThresholdFull')	}
						
			bars = {	SKIN:GetMeter('ColorsDisk1AlphaBar'),
						SKIN:GetMeter('ColorsDisk2AlphaBar'),
						SKIN:GetMeter('ColorsDisk3AlphaBar'),
						SKIN:GetMeter('ColorsDisk4AlphaBar'),
						SKIN:GetMeter('ColorsDisk5AlphaBar'),
						SKIN:GetMeter('ColorsDisk6AlphaBar'),
						SKIN:GetMeter('ColorsDisk7AlphaBar'),
						SKIN:GetMeter('ColorsDisk8AlphaBar'),
						SKIN:GetMeter('ColorsDisk9AlphaBar'),
						SKIN:GetMeter('ColorsDisk10AlphaBar'),
						SKIN:GetMeter('ColorsThresholdWarnAlphaBar'),
						SKIN:GetMeter('ColorsThresholdFullAlphaBar')	}
						
			maxBarW = SKIN:GetMeter('ColorsDisk1AlphaBarBg'):GetW()
		
		end
	
	else
		SKIN:Bang('!Log', 'WTF? invalid subpage id in settings skin!', 'Debug')
	end
	
	-- set the width of the alpha bars
			for i=1,#colors do
				tempW = math.floor(getStringAlphaPercent(colors[i]) * maxBarW)
				SKIN:Bang('!SetOption', bars[i]:GetName(), 'W', tempW)
				if isDbg == true then
					SKIN:Bang('!Log', "Set width of '" .. tostring(bars[i]:GetName()) .. "'", 'Debug')
				end
			end
			
end

function Update()


end

-- Transparency manipulation functions

-- called from skin - changes alpha value on a color in the specified file
function changeAlpha(color, percent, filepath)
	baseColor = SKIN:GetVariable(color)
	if isDbg == true then SKIN:Bang('!Log', 'filepath = ' .. filepath, 'Debug') end
	alpha = math.floor(percent * 0.01 * 255)
	if (string.find(baseColor, ",") ~= nil) then
		rgb = string.match(baseColor, "%d+,%d+,%d+")
		newColor = rgb .. ',' .. alpha
	else
		rgb = string.sub(baseColor,1,6)
		alpha = decToHex(alpha)
		newColor = rgb .. alpha
	end
	SKIN:Bang('!WriteKeyValue', 'Variables', color, newColor, '#@#' .. filepath)
end

-- intended to retrieve the alpha component of an RGBA or hex color and return as a percent 0.0 to 1.0
function getStringAlphaPercent(color)
	local alpha
	if (string.find(color, ",") ~= nil) then
		
		rgbIt = string.gmatch(color,"%d+")
		rgbTable = {}
		for match in rgbIt do
			table.insert(rgbTable, match)
		end
		
		if (#rgbTable < 4) then
			alpha = 1
		else
			alpha = (rgbTable[4] / 255)
			alpha = string.format("%.2f",alpha)
		end
	else
		if (string.len(color)) > 6 then
			alpha = hexToDec(string.sub(color,7,8))
			alpha = (alpha / 255)
			alpha = string.format("%.2f",alpha)
		else
			alpha = 1
		end
	end
	return tonumber(alpha)
end

-- converts a hexadecimal string to a decimal number
function hexToDec(hexNum)
	hexNum = string.lower(hexNum)
	sum = 0
	for i=1,#hexNum,1 do
		sum = sum + (findHexChar(string.sub(hexNum,i,i)) * 16^(#hexNum-i))
	end
	return sum
end

-- converts decimal number to hexadecimal string
function decToHex(decNum)
	local result = {}
	while (decNum > 0) do
		table.insert(result, 1, hexChars[math.fmod(decNum, 16)])
		decNum = math.floor(decNum / 16)
	end
	return table.concat(result,'',1,#result)
end

-- linearly searches hexChar array for a given character and returns its index
function findHexChar(char)
	for i=0,#hexChars do
		if hexChars[i] == char then
			return i
		end
	end
	return -1
end