--[[
--------------------------------------------------

LoadSkin.lua
raiguard
v2.0.0

--------------------------------------------------

Release Notes:
v2.0.0 - 2018-6-22
- Updated to use the new ConfigActive plugin rather than WebParser
v1.3.0 - 2018-6-21
- The script now gets the input from a WebParser measure, rather than directly parsing
  Rainmeter.ini (for Rainmeter 4.2+ compatibility)
v1.2.0 - 2017-12-27
 - Added ability to specifically load or unload skins, rather than always toggling them
v1.1.0 - 2017-12-7
 - Consolidated LoadConfig() into LoadSkin()
v1.0.0 - 2017-10-2
 - Initial release

--------------------------------------------------

This script loads / unlaods the specified skin or config, and sets parameters for toggle
buttons related to those skins.


INSTRUCTIONS FOR USE: (not updated yet!)
Copy this file and paste it into your own suite, then create a Rainmeter script
measure pointing to this file, like so:

[MeasureLoadSkinScript]
Measure=Script
ScriptFile=#@#Scripts\LoadSkin.lua
ToggleOn=#@#Images\toggle-on.png
ToggleOff=#@#Images\toggle-off.png
ToggleGroup=ToggleButtons

The 'ToggleOn' and 'ToggleOff' parameters are for the toggle buttons. If you are using
images, these will be the image paths for the buttons' respective on and off states. If
you are using strings, these will be the 'on' and 'off' strings that will show on the
buttons. If you do not include these parameters, the script will default to using what's
contained in '#toggleOn#' and '#toggleOff#' variables.

The 'ToggleGroup' parameter specifies the group that the toggle button meters belong to.
If you do not include this option, it will default to 'SkinToggles'.


A toggle button meter should look something like this:

[MeterToggleSkin]
Meter=Image
ImageName=[&MeasureLoadSkinScript:GetIcon('ToggledSkin')]
X=5
Y=5
W=31
H=20
LeftMouseUpAction=[!CommandMeasure MeasureLoadSkinScript "ToggleSkin('ToggledSkin')"]
DynamicVariables=1
Group=SkinToggles

The toggle buttons get their parameters via inline LUA, which requires that
'DynamicVariables=1' must be set on all the buttons. The buttons must also belong to the
'SkinToggles' group, unless otherwise specified in the script measure.

Please note that if you load or unload a skin without using the toggle buttons, the
buttons will not update until one of the buttons is clicked or the skin is refreshed.

--------------------------------------------------
]]--

debug = false

function Initialize()

	toggleOn = SELF:GetOption('ToggleOn', '[#toggleOn]')
	toggleOff = SELF:GetOption('ToggleOff', '[#toggleOff]')
	radioOn = SELF:GetOption('RadioOn', toggleOn)
	radioOff = SELF:GetOption('RadioOff', toggleOff)
	toggleGroup = SELF:GetOption('ToggleGroup', 'SkinToggles')

end

function Update() end

-- Toggles the specified skin.
function ToggleSkin(configName, configState, skinIni, activeIni, toState)

	configName = configName:gsub('\\', '\\\\'):gsub('\\\\', '\\')
	toState = toState or skinIni and (skinIni == activeIni and -1 or 1) or configState * -1

	if toState == 1 then
		if skinIni == nil then
			SKIN:Bang('!ActivateConfig', configName)
		else
			SKIN:Bang('!ActivateConfig', configName, skinIni)
		end
	else
		SKIN:Bang('!DeactivateConfig', configName)
	end

	SKIN:Bang('!UpdateMeterGroup', toggleGroup)
	SKIN:Bang('!Redraw')
	return ''

end

-- Returns the corresponding button state depending on the state of the skin
function GetIcon(configState, skinIni, activeIni, radioOverride)

	if activeIni == nil then
		if configState == 1 then return toggleOn
		else return toggleOff end
	else
		if activeIni == skinIni then return radioOverride and toggleOn or radioOn
		else return radioOverride and toggleOff or radioOff end
	end

end

-- function to make logging messages less cluttered
function LogHelper(message, type)

  if type == nil then type = 'Debug' end

  if debug == true then
    SKIN:Bang("!Log", message, type)
  elseif type ~= 'Debug' then
  	SKIN:Bang("!Log", message, type)
	end

end