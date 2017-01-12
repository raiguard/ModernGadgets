; MODERNGADGETS STYLESHEET

[Variables]
; General positioning and background
bgOffset=6
bgWidth=160
bgWidthAbs=(#bgWidth# + (#bgOffset# * 2))
mgVersion=1.1.0

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
colorBg=0,0,0,255
colorBgA=255
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
colorAccentRgb=138,210,250

colorButtonPress=255,50,50

colorHwinfoValueInputBg=50,50,50,255
colorHwinfoError=255,50,50,255

colorInputBoxBorder=#colorDim#

colorIntel=0,125,198

histogramAlpha=50

; Paths
imgPath=#@#Assets\Images\
soundPath=#@#Assets\Sounds\
fontPath=#@#Fonts\
scriptPath=#@#Scripts\

globalSettingsPath=#@#Settings\GlobalSettings.inc
gadgetManagerPath=#ROOTCONFIGPATH#Config\GadgetManager\gadgetmanager.inc

cpuMeterPath=#ROOTCONFIGPATH#CPU\CPU.ini
cpuMeterConfig=ModernGadgets\CPU
cpuSettingsPath=#@#Settings\CpuSettings.inc

networkMeterPath=#ROOTCONFIGPATH#Network\Network.ini
networkMeterConfig=ModernGadgets\Network
networkSettingsPath=#@#Settings\NetworkSettings.inc

gpuMeterPathBase=#ROOTCONFIGPATH#GPU\GPU.ini
gpuMeterPath=#ROOTCONFIGPATH#GPU\main.inc
gpuMeterConfig=ModernGadgets\GPU
gpuSettingsPath=#@#Settings\GpuSettings.inc

disksMeterPath=#ROOTCONFIGPATH#Disks\Disks.ini
disksMeterConfig=ModernGadgets\Disks
disksSettingsPath=#@#Settings\DisksSettings.inc

toggleOffImg=#imgPath#toggle-off.png
toggleOnImg=#imgPath#toggle-on.png
toggleLockImg=#imgPath#toggle-off-lock.png

; Styles
[StyleString]
FontColor=#colorMain#
FontSize=#fontSize#
FontFace=#fontFace#
X=#contentMargin#
Y=#rowSpacing#R
Antialias=1

[StyleStringArrowButtonLabel]
FontSize=10
StringAlign=Right
X=(#contentMarginRight# - 20)

[StyleStringArrowButton]
ImageName=#imgPath#arrow-right.png
Grayscale=1
ImageTint=#colorAccent#
X=r
Y=r
W=17
H=17
Antialias=0

[StyleToggleImageGadgets]
X=110
DynamicVariables=1

[StyleStringSectionHeader]
FontSize=12
Y=10R

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
FontSize=10
X=(#contentMargin# + 1)
Y=4R

[StyleToggleImage]
X=(#contentMarginRight# - 35)
; X=5R
Y=-1r
W=31
H=20
Group=ToggleButtons

[StyleStringConfigSectionHeader]
FontFace=#fontFace# Bl
FontColor=#colorInfo#
Y=5R

[StyleStringInputBox]
FontColor=#colorInfo#
FontFace=Roboto Lt
FontSize=10
X=3r
Y=3r
W=(#contentWidth# - 10)
H=16

[StyleStringParagraph]
FontColor=#colorMain#
FontSize=10
X=(#contentMargin# + 2)
Y=5R
W=(#contentWidth# - 6)
ClipString=2

[StyleBar]
SolidColor=#colorBarBg#
X=(#contentMargin# + 2)
Y=R
W=(#contentWidth# - 4)
w=(#contentWidth# - 4)
h=#barHeight#
BarOrientation=Horizontal
DynamicVariables=1

[StyleCloseButton]
ImageName=#imgPath#close.png
ImageAlpha=#colorBgA#
X=(#contentMarginRight# - 21)
Y=(#contentMargin# - 3)
W=24
H=24
Antialias=0
ToolTipText="Close"
; MouseOverAction=[!SetOption CloseButton ImageTint "#colorButtonPress#"][!UpdateMeter CloseButton][!Redraw]
LeftMouseUpAction=[!DeactivateConfig]
