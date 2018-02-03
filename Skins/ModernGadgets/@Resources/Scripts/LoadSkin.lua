-- LoadSkin.lua
-- raiguard
-- v1.2.0
--
--
-- CHANGELOG:
-- v1.2.0 - 2017-12-27
--  - Added ability to specifically load or unload skins, rather than always toggling them
-- v1.1.0 - 2017-12-7
--  - Consolidated LoadConfig() into LoadSkin()
-- v1.0.0 - 2017-10-2
--  - Initial release
--
-- ------------------------------
--
-- This script loads / unlaods the specified skin or config, and sets parameters for toggle
-- buttons related to those skins.
--
--
-- INSTRUCTIONS FOR USE:
-- Copy this file and paste it into your own suite, then create a Rainmeter script
-- measure pointing to this file, like so:
--
-- [MeasureLoadSkinScript]
-- Measure=Script
-- ScriptFile=#@#Scripts\LoadSkin.lua
-- ToggleOn=#@#Images\toggle-on.png
-- ToggleOff=#@#Images\toggle-off.png
-- ToggleGroup=ToggleButtons
-- 
-- The 'ToggleOn' and 'ToggleOff' parameters are for the toggle buttons. If you are using
-- images, these will be the image paths for the buttons' respective on and off states. If
-- you are using strings, these will be the 'on' and 'off' strings that will show on the
-- buttons. If you do not include these parameters, the script will default to using what's
-- contained in '#toggleOn#' and '#toggleOff#' variables.
--
-- The 'ToggleGroup' parameter specifies the group that the toggle button meters belong to.
-- If you do not include this option, it will default to 'SkinToggles'.
--
--
-- A toggle button meter should look something like this:
--
-- [MeterToggleSkin]
-- Meter=Image
-- ImageName=[&MeasureLoadSkinScript:GetIcon('ToggledSkin')]
-- X=5
-- Y=5
-- W=31
-- H=20
-- LeftMouseUpAction=[!CommandMeasure MeasureLoadSkinScript "ToggleSkin('ToggledSkin')"]
-- DynamicVariables=1
-- Group=SkinToggles
--
-- The toggle buttons get their parameters via inline LUA, which requires that
-- 'DynamicVariables=1' must be set on all the buttons. The buttons must also belong to the
-- 'SkinToggles' group, unless otherwise specified in the script measure.
--
-- Please note that if you load or unload a skin without using the toggle buttons, the
-- buttons will not update until one of the buttons is clicked or the skin is refreshed.
--
-- ------------------------------

debug = false

function Initialize()

	filePath = SKIN:GetVariable('SETTINGSPATH') .. 'Rainmeter.ini'
	rootConfig = SKIN:GetVariable('ROOTCONFIG') .. '\\'
	iniTable = ReadIni(filePath)

	toggleOn = SELF:GetOption('ToggleOn', '[#toggleOn]')
	toggleOff = SELF:GetOption('ToggleOff', '[#toggleOff]')
	toggleGroup = SELF:GetOption('ToggleGroup', 'SkinToggles')

end

function Update() end

-- Toggles the specified skin.
function ToggleSkin(config, skin, variant, state)
	-- CONFIG: The name of the config you wish to toggle, omitting the root config
	-- SKIN (optional): The file name of the skin you wish to toggle
	-- VARIANT (optional): The skin file's numeric location in the list of variants
	-- STATE (optional): The state you wish to toggle to
	config = rootConfig .. config
	if variant == nil then variant = -1 end
	local activeState = 0
	if iniTable[config] ~= nil then activeState = tonumber(iniTable[config]['Active']) end

	if skin == nil then
		if activeState > 0 then
			SKIN:Bang('!DeactivateConfig', config)
		else
			SKIN:Bang('!ActivateConfig', config)
		end
	else
		if state == true then SKIN:Bang('!ActivateConfig', config, skin)
		elseif state == false then SKIN:Bang('!DeactivateConfig', config, skin)
		elseif activeState > 0 and activeState ~= variant then SKIN:Bang('!ActivateConfig', config, skin)
		else SKIN:Bang('!ToggleConfig', config, skin) end
	end

	iniTable = ReadIni(filePath)

	SKIN:Bang('!UpdateMeterGroup', toggleGroup)
	SKIN:Bang('!Redraw')
end

-- Returns whether or not the specified skin or variant is loaded.
function GetIcon(config, variant)

	config = rootConfig .. config
	if variant == nil then variant = -1 end
	local state = 0
	if iniTable[config] ~= nil then state = tonumber(iniTable[config]['Active']) end

	if state == variant then return toggleOn
	elseif state > 0 and variant == -1 then return toggleOn
	else return toggleOff end

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

-- function to make logging messages less cluttered
function LogHelper(message, type)

  	if debug == true then
    	SKIN:Bang("!Log", message, type)
  	elseif type ~= 'Debug' then
  		SKIN:Bang("!Log", message, type)
	end

end