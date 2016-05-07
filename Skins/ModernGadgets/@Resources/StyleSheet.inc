; MODERNGADGETS GLOBAL STYLESHEET
; Global stylesheet for use with all skins

; ========= Global Variables =========

[Variables]
styleSheetPath=#@#StyleSheet.inc
settingsFilePath=#SETTINGSPATH#ModernGadgetsSettings.inc
hwinfoConfigFilePath=#settingsFilePath#
cpuVariablesPath=#@#Variables\CPU.inc
rainFile=#@#Addons\RainFile\RainFile.exe

fontFace=Arial
fontSize=8
fontColor=255,255,255,220
fontColorDim=185,185,185,220
fontColorAccent=138,210,250,220

colorBarBg=60,60,60,220
colorBarBgA=220
colorGraphBorder=60,60,60
; 60,60,60

colorHwinfoValueInputBg=60,60,60,220

bgOffset=0

graphHeight=41
contentMarginAbsolute=5
contentMargin=(#contentMarginAbsolute# + #bgOffset#)
marginRightX=(#bgWidth# - #contentMarginAbsolute# + #bgOffset#)
rowSpacing=2
; specifically for Disks, used in background height calculations
rowYOffset=(14 + #rowSpacing#)

bgWidth=160
bgAlpha=220
bgColor=0,0,0,220
bgCenterX=(#bgWidth# / 2 + #bgOffset#)

version=1.0.0
largeRowSpacing=1
gadgetsRowSpacing=2

; ========= Global Styles =========

[StyleString]
FontFace=#fontFace#
FontSize=#fontSize#
FontColor=#fontColor#
StringAlign=Left
X=#contentMargin#
Y=#rowSpacing#R
Antialias=1
; DynamicVariables=1

[StyleStringRightAlign]
StringAlign=Right
X=#marginRightX#
Y=r

[StyleStringInfo]
StringAlign=Center
FontColor=#fontColorDim#
X=#bgCenterX#
Y=r
DynamicVariables=1

[StyleStringParagraph]
FontColor=#fontColor#
FontSize=9
Y=5R
W=((#bgWidth# - #contentMargin#) - #contentMargin# + 5)
ClipString=2

[StyleStringButton]
FontSize=12
FontColor=#fontColorAccent#
Y=(#bgHeight# - #contentMargin# - 35)

[StyleStringSectionHeader]
FontSize=14
FontColor=#fontColorDim#
Y=10R

[StyleBar]
X=(#contentMargin# + 2)
Y=R
W=(#bgWidth# - (#contentMarginAbsolute# * 2) - 3)
w=(#bgWidth# - (#contentMarginAbsolute# * 2) - 3)
h=1
SolidColor=#colorBarBg#
BarOrientation=Horizontal
DynamicVariables=1
