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
LeftMouseUpAction=[!WriteKeyValue Variables showPage 0 "#settingsFilePath#"][!RefreshGroup ModernGadgetsCpu][!Refresh]

[ToggleShowPageBoxDisabled]
Meter=String
MeterStyle=StyleCheckbox
X=r
Y=-2r
Text="o"
Hidden=#showPage#
LeftMouseUpAction=[!WriteKeyValue Variables showPage 1 "#settingsFilePath#"][!RefreshGroup ModernGadgetsCpu][!Refresh]

[ToggleShowPageString]
Meter=String
MeterStyle=StyleString | StyleCheckboxString
Text="Page File Information"

; Show Fan Usage
[ToggleShowCpuFanBoxEnabled]
Meter=String
MeterStyle=StyleString | StyleCheckbox
FontSize=12
Text="þ"
Hidden=(#showCpuFan# = 2 ? 0 : 1)
LeftMouseUpAction=[!WriteKeyValue Variables showCpuFan 0 "#settingsFilePath#"][!RefreshGroup ModernGadgetsCpu][!Refresh]

[ToggleShowCpuFanBoxDisabled]
Meter=String
MeterStyle=StyleCheckbox
X=r
Y=-2r
Text="o"
Hidden=#showCpuFan#
LeftMouseUpAction=[!WriteKeyValue Variables showCpuFan 2 "#settingsFilePath#"][!RefreshGroup ModernGadgetsCpu][!Refresh]

[ToggleShowCpuFanString]
Meter=String
MeterStyle=StyleString | StyleCheckboxString
Text="Fan Information"

; Show CPU Clock Speed
[ToggleShowCpuClockSpeedBoxEnabled]
Meter=String
MeterStyle=StyleString | StyleCheckbox
FontSize=12
Text="þ"
Hidden=(#showCpuClockSpeed# = 1 ? 0 : 1)
LeftMouseUpAction=[!WriteKeyValue Variables showCpuClockSpeed 0 "#settingsFilePath#"][!RefreshGroup ModernGadgetsCpu][!Refresh]

[ToggleShowCpuClockSpeedBoxDisabled]
Meter=String
MeterStyle=StyleCheckbox
X=r
Y=-2r
Text="o"
Hidden=#showCpuClockSpeed#
LeftMouseUpAction=[!WriteKeyValue Variables showCpuClockSpeed 1 "#settingsFilePath#"][!RefreshGroup ModernGadgetsCpu][!Refresh]

[ToggleShowCpuClockSpeedString]
Meter=String
MeterStyle=StyleString | StyleCheckboxString
Text="CPU Clock Speed"
