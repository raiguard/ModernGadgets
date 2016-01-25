; MODERNGADGETS GLOBAL STYLESHEET
; Global stylesheet for use with all skins

; ========= Global Variables =========

[Variables]
hwinfoConfigFilePath="D:\Files\Settings\Caleb\Rainmeter\HWiNFOConfig.inc"

fontFace=Arial
fontSize=8
fontColor=255,255,255,220
fontColorDim=255,255,255,150
fontColorAccent=138,210,250,200

colorBarBg=100,100,100,150
colorGraphBorder=35,35,35
; 60,60,60

graphHeight=41

contentMargin=10
gadgetsRowSpacing=2
rowYOffset=(14 + #gadgetsRowSpacing#)

bgWidth=160
bgAlpha=253
bgCenterX=((#bgWidth# + 10) / 2)
contentMarginRightX=(#bgWidth# - (#contentMargin# / 2) + 5)

version=1.0.0

; ========= Global Styles =========

[StyleString]
FontFace=#fontFace#
FontSize=#fontSize#
FontColor=#fontColor#
StringAlign=Left
X=#contentMargin#
Y=#gadgetsRowSpacing#R
Antialias=1
DynamicVariables=1

[StyleStringRightAlign]
StringAlign=Right
X=#contentMarginRightX#
Y=r

[StyleStringInfo]
StringAlign=Center
FontColor=#fontColorDim#
X=#bgCenterX#
Y=r

[StyleBar]
X=(#contentMargin# + 2)
Y=R
W=(#bgWidth# - #contentMargin# - 4)
w=(#bgWidth# - #contentMargin# - 4)
h=1
SolidColor=#colorBarBg#
BarOrientation=Horizontal
DynamicVariables=1
