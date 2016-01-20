; MODERNGADGETS GLOBAL STYLESHEET
; Global stylesheet for use with all skins

; ========= Global Variables =========
[Variables]
hwinfoConfigFilePath="D:\Files\Settings\Caleb\Rainmeter\HWiNFOConfig.inc"

gadgetsContentMargin=10
gadgetsRowSpacing=2
rowYOffset=(#fontSize# + #gadgetsRowSpacing#)

bgWidth=160
bgAlpha=253
bgCenterX=((#bgWidth# + 10) / 2)
contentMarginRightX=(#bgWidth# - (#gadgetsContentMargin# / 2) + 5)

fontFace=Arial
fontSize=8
fontColor=255,255,255,220
fontColorDim=255,255,255,150
fontColorAccent=138,210,250,200

colorBarBg=100,100,100,150
colorGraphBorder=60,60,60

graphHeight=41

; ========= Global Styles =========

[StyleString]
FontFace=#fontFace#
FontSize=#fontSize#
FontColor=#fontColor#
StringAlign=Left
X=#gadgetsContentMargin#
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
X=(#gadgetsContentMargin# + 2)
Y=R
W=(#bgWidth# - #gadgetsContentMargin# - 4)
w=(#bgWidth# - #gadgetsContentMargin# - 4)
h=1
SolidColor=#colorBarBg#
BarOrientation=Horizontal
DynamicVariables=1
