; MODERNGADGETS CONFIG "HWiNFO" PAGE

[StyleStringHwinfoLabel]
FontSize=10
Y=R

[StyleStringHwinfoValue]
FontSize=10
FontColor=#fontColorDim#
X=R
Y=0r

; ----- Subpage Indicator -----

[SubpageIndicatorTop]
Meter=Image
MeterStyle=StyleSubpageIndicatorTop
Y=([NavBarButtonHwinfoString:Y] + 3)
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
Text="HWiNFO sensor IDs"

; ----- HWiNFO Navigation Bar -----

[HwinfoNavBarButtonSmvString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent
FontColor=#fontColorAccent#
Y=5R
Text="Open HWiNFO Shared Memory Viewer"
LeftMouseUpAction=["#@#Addons\HWiNFO\HWiNFOSharedMemoryViewer.exe"]

[HwinfoNavBarButtonHelpString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleStringRightAlign
FontColor=#fontColorAccent#
Text="View How-to"
LeftMouseUpAction=["#@#Addons\HWiNFO\HWiNFOHowTo.txt"]

@includeHWiNFOSubpage=#@#ConfigPages\HWiNFOPages\#hwinfoPage#.inc
