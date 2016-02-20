; MODERNGADGETS GLOBAL STYLESHEET
; Global stylesheet for use with all skins

; ========= Global Variables =========

[Variables]
hwinfoConfigFilePath=D:\Files\Settings\Caleb\Rainmeter\Skins\HWiNFOConfig.inc
styleSheetPath=#@#StyleSheet.inc
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

graphHeight=41
lineGraphAa=0

contentMargin=10
gadgetsRowSpacing=2
; specifically for Disks, used in background height calculations
rowYOffset=(14 + #gadgetsRowSpacing#)

bgWidth=160
bgAlpha=253
bgColor=15,15,15
bgCenterX=((#bgWidth# + 10) / 2)
contentMarginRightX=(#bgWidth# - (#contentMargin# / 2) + 5)

version=1.0.0
largeRowSpacing=1

; ========= Global Styles =========

[StyleString]
FontFace=#fontFace#
FontSize=#fontSize#
FontColor=#fontColor#
StringAlign=Left
X=#contentMargin#
Y=#gadgetsRowSpacing#R
Antialias=1
; DynamicVariables=1

[StyleStringRightAlign]
StringAlign=Right
X=#contentMarginRightX#
Y=r

[StyleStringInfo]
StringAlign=Center
FontColor=#fontColorDim#
X=#bgCenterX#
Y=r
DynamicVariables=1

[StyleBar]
X=(#contentMargin# + 2)
Y=R
W=(#bgWidth# - #contentMargin# - 4)
w=(#bgWidth# - #contentMargin# - 4)
h=1
SolidColor=#colorBarBg#
BarOrientation=Horizontal
DynamicVariables=1
