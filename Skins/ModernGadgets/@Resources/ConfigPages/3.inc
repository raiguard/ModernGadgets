; CONFIG SKIN "CPU" PAGE

; ----- Subpage Indicator -----

[SubpageIndicatorTop]
Meter=Image
MeterStyle=StyleSubpageIndicatorTop
Y=([NavBarButtonCpuString:Y] + 3)
DynamicVariables=1

[SubpageIndicatorBottom]
Meter=Image
MeterStyle=StyleSubpageIndicatorBottom
Y=[SubpageIndicatorTop:H]r
DynamicVariables=1

@includeCpuVariables=#@#Variables\CPU.inc

; ----- Header Text -----

[HeaderString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent
FontColor=#fontColorDim#
FontSize=9
Y=#contentMargin#
Text="CPU skin settings and colors"

; ----- Toggles -----

; Show Page File Usage
[ToggleShowPageBoxEnabled]
Meter=String
MeterStyle=StyleString | StyleCheckbox
FontSize=12
Text="þ"
Hidden=(#showPage# = 1 ? 0 : 1)
LeftMouseUpAction=[!WriteKeyValue Variables showPage 0 "#cpuVariablesPath#"][!RefreshGroup ModernGadgetsCpu][!Refresh]

[ToggleShowPageBoxDisabled]
Meter=String
MeterStyle=StyleCheckbox
X=r
Y=-2r
Text="o"
Hidden=#showPage#
LeftMouseUpAction=[!WriteKeyValue Variables showPage 1 "#cpuVariablesPath#"][!RefreshGroup ModernGadgetsCpu][!Refresh]

[ToggleShowPageString]
Meter=String
MeterStyle=StyleString | StyleCheckboxString
Text="Show Page File Information"
