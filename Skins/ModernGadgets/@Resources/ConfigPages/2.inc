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
Text="HWiNFO sensor IDs and file location"

; ----- HWiNFO Config File Path -----

[FilePathLabelString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent
FontSize=10
Y=9R
Text="Configuration File Path:"

[FilePathString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent
FontSize=10
FontColor=#fontColorDim#
ClipString=1
X=0R
Y=0r
W=(#bgWidth# - #contentMargin# - [FilePathString:X])
H=15
Text="#hwinfoConfigFilePath#"
DynamicVariables=1
ToolTipTitle="#hwinfoConfigFilePath#"
ToolTipText="By default, the sensor IDs are stored in a file contained within the @Resources folder of ModernGadgets.#CRLF#However, if you update the skin pack, it will override these values with the defaults and your changes#CRLF#will be lost. To avoid this, click the file name above and cut (Ctrl+X) the 'HWiNFOConfig.inc' file, then#CRLF#paste (Ctrl+P) it into your root skin directory (e.g. C:\Users\iamanai\Documents\Rainmeter\Skins).#CRLF#Then, click on the file and click 'Open'. This string should change to the new filepath. When you update#CRLF#the skin pack, simply navigate back to that file after clicking on the string above and it will configure the#CRLF#sensor IDs the way you had them prior to updating."
LeftMouseUpAction=["#rainFile#" "File" "Variables" "hwinfoConfigFilePath" "#styleSheetPath#" "#hwinfoConfigFilePath#"]

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
