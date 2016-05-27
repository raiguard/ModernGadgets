; MODERNGADGETS STYLESHEET "NEW"

[Variables]
; General positioning and background
bgOffset=6
bgWidth=160
bgWidthAbs=(#bgWidth# + (#bgOffset# * 2))

contentMargin=(#bgOffset# + 2)
contentMarginCenter=((#bgWidth# / 2) + #bgOffset#)
contentMarginRight=(#bgWidth# + #bgOffset# - 2)
contentWidth=(#bgWidth# - 4)

rowSpacing=2

barHeight=1

; Font options
fontFace=Arial
fontFaceMono=Arial Unicode MS

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

graphHeight=41

; Paths
imgPath=#@#Assets\Images\
soundPath=#@#Assets\Sounds\
fontPath=#@#Fonts\

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
X=2R
Y=-1r

[StyleBar]
SolidColor=#colorBarBg#
X=(#contentMargin# + 2)
Y=R
W=(#contentWidth# - 4)
w=(#contentWidth# - 4)
h=#barHeight#
BarOrientation=Horizontal
DynamicVariables=1
