; MODERNGADGETS CONFIG "GENERAL" PAGE

; ----- Subpage Indicator -----

[SubpageIndicatorTop]
Meter=Image
MeterStyle=StyleSubpageIndicatorTop
Y=([NavBarButtonGeneralString:Y] + 3)
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
Text="General settings for all skins"

; ----- General toggles -----

; Line Graph Antialiasing
[ToggleLineGraphAaBoxEnabled]
Meter=String
MeterStyle=StyleString | StyleCheckbox
FontSize=12
Text="þ"
Hidden=(#lineGraphAa# = 1 ? 0 : 1)
LeftMouseUpAction=[!WriteKeyValue Variables lineGraphAa 0 "#styleSheetPath#"][!RefreshGroup ModernGadgets]

[ToggleLineGraphAaBoxDisabled]
Meter=String
MeterStyle=StyleCheckbox
X=r
Y=-2r
Text="o"
Hidden=#lineGraphAa#
LeftMouseUpAction=[!WriteKeyValue Variables lineGraphAa 1 "#styleSheetPath#"][!RefreshGroup ModernGadgets]

[ToggleLineGraphAaString]
Meter=String
MeterStyle=StyleString | StyleCheckboxString
Text="Line Graph Antialiasing"

[ToggleLineGraphAaNotes]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleCheckboxNotes
Text="When enabled, lines are smoother and easier on the eyes, but blend together more and are less accurate"

; Large Row Spacing
[ToggleLargeRowSpacingBoxEnabled]
Meter=String
MeterStyle=StyleString | StyleCheckbox
FontSize=12
Text="þ"
Hidden=(#largeRowSpacing# = 1 ? 0 : 1)
LeftMouseUpAction=[!WriteKeyValue Variables largeRowSpacing 0][!WriteKeyValue Variables gadgetsRowSpacing 2 "#styleSheetPath#"][!RefreshGroup ModernGadgets]

[ToggleLargeRowSpacingBoxDisabled]
Meter=String
MeterStyle=StyleCheckbox
X=r
Y=-2r
Text="o"
Hidden=#largeRowSpacing#
LeftMouseUpAction=[!WriteKeyValue Variables largeRowSpacing 1][!WriteKeyValue Variables gadgetsRowSpacing 4 "#styleSheetPath#"][!RefreshGroup ModernGadgets]

[ToggleLargeRowSpacingString]
Meter=String
MeterStyle=StyleString | StyleCheckboxString
Text="Large Row Spacing"

[ToggleLargeRowSpacingNotes]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleCheckboxNotes
Text="Increases space between meter rows, making the gadgets a bit easier to read"

[MoreToComeString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent
FontSize=8
FontColor=#fontColorDim#
Y=60R
Text="More to come..."
