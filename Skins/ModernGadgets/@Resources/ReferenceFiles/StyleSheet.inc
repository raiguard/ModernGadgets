; MODERNGADGETS STYLESHEET "NEW"

[Variables]
; General positioning and background
bgOffset=6
bgWidth=160
bgWidthAbs=(#bgWidth# + (#bgOffset# * 2))

contentMarginAbs=2
contentMargin=(#bgOffset# + #contentMarginAbs#)
contentMarginCenter=((#bgWidth# / 2) + #bgOffset#)
contentMarginRight=(#bgWidth# + #bgOffset# - 2)
contentWidth=(#bgWidth# - (#contentMarginAbs# * 2))

rowSpacing=1
barHeight=1
graphHeight=41

; Font options
fontFace=Roboto
fontSize=8

; Colors
colorBg=0,0,0,240
colorBgA=240
colorBgBorder=#colorDim#
colorBgBorderA=#colorBgA#

colorGraphBorder=#colorDim#
colorGraphBorderA=#colorBgA#

colorMain=255,255,255,#colorBgA#
colorMainA=#colorBgA#
colorInfo=150,150,150,#colorBgA#
colorInfoA=#colorBgA#
colorDim=60,60,60,#colorBgA#
colorDimA=#colorBgA#

colorBarBg=#colorDim#

colorAccent=138,210,250,220

colorButtonPress=255,50,50

; Paths
imgPath=#@#Assets\Images\
soundPath=#@#Assets\Sounds\
fontPath=#@#Fonts\

cpuMeterPath=#ROOTCONFIGPATH#CPU\CPU.ini
cpuMeterConfig=ModernGadgets\CPU
cpuSettingsPath=#@#ReferenceFiles\CpuSettings.inc

; Styles
[StyleString]
FontColor=#colorMain#
FontSize=#fontSize#
FontFace=#fontFace#
X=#contentMargin#
Y=#rowSpacing#R
Antialias=1

[StyleStringGadgetHeader]
FontSize=10
X=#contentMargin#
Y=(#contentMargin# - 1)

[StyleStringCenterAlign]
StringAlign=Center
X=#contentMarginCenter#

[StyleStringRightAlign]
StringAlign=Right
X=#contentMarginRight#
Y=r

[StyleStringInfo]
StringAlign=Center
X=#contentMarginCenter#
Y=r
FontColor=#colorInfo#

[StyleStringToggleLabel]
FontSize=9
FontFace=#fontFace# Cn
X=(#contentMargin# + 2 + 11 + 2)
Y=-1r

[StyleStringConfigSectionHeader]
FontFace=#fontFace# Bl
FontColor=#colorInfo#
Y=5R

[StyleToggleBox]
ImageAlpha=#colorBgA#
X=(#contentMargin# + 2)
Y=2R
W=11
H=11
Antialias=1
DynamicVariables=1

[StyleBar]
SolidColor=#colorBarBg#
X=(#contentMargin# + 2)
Y=R
W=(#contentWidth# - 4)
w=(#contentWidth# - 4)
h=#barHeight#
BarOrientation=Horizontal
DynamicVariables=1
