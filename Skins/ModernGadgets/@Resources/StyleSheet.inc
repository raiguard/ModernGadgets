; MODERNGADGETS STYLESHEET

[Variables]
mgVersion=1.3.0

; Positioning
bgOffset=5
bgWidth=150
bgWidthAbs=(#bgWidth# + (#bgOffset# * 2))

contentMarginAbs=3
contentMargin=(#bgOffset# + #contentMarginAbs#)
contentMarginCenter=((#bgWidth# / 2) + #bgOffset#)
contentMarginRight=((#bgWidth# + #bgOffset#) - #contentMarginAbs# - 1)
contentWidth=(#bgWidth# - (#contentMarginAbs# * 2))
columnX=(#contentMarginCenter# + 2)

rowSpacing=1
barTextOffset=1
barHeight=1
graphHeight=40
graphWidth=#contentWidth#

labelOffset=53

; Font settings
fontFace=Roboto
fontSize=8

; Colors
colorBgA=255
colorBg=15,15,15,#colorBgA#
colorBgBorder=#colorDim#

colorGraphBg=25,25,25
colorGraphBorder=#colorDim#

colorMain=230,230,230
colorInfo=150,150,150
colorDim=50,50,50
colorAccent=138,210,250

colorBarBg=#colorDim#

colorButtonPress=255,50,50

colorHwinfoValueInputText=225,220,225
colorHwinfoValueInputBg=35,35,35
colorHwinfoError=255,30,30

colorInputBg=25,25,25
colorInputBorder=#colorDim#

colorIntel=0,125,198

histogramAlpha=50

; Character reference variables
deg=[\176]
toggleOn=[\x5a]
toggleOff=[\x56]

; Paths
imgPath=#@#Assets\Images\
soundPath=#@#Assets\Sounds\
fontPath=#@#Fonts\
scriptPath=#@#Scripts\

rainRgbPath=#@#Addons\RainRGB\RainRGB4.exe
rainFilePath=#@#Addons\RainFile\RainFile.exe

globalSettingsPath=#@#Settings\GlobalSettings.inc
gadgetManagerPath=#ROOTCONFIGPATH#Config\GadgetManager\gadgetmanager.inc

styleSheetPath=#@#StyleSheet.inc

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

setupSkinConfig=ModernGadgets\Config\Setup

; Default Color Pallete
cp1=107,238,98
cp2=255,246,42
cp3=250,158,0
cp4=236,28,70
cp5=199,36,199
cp6=145,70,232
cp7=42,112,250
cp8=43,224,224
cp9=121,182,62
cp10=204,255,0
cp11=250,205,22
cp12=191,100,55
cp13=201,41,56
cp14=179,0,91
cp15=153,84,166
cp16=99,125,217
cp17=107,238,98
cp18=255,246,42
cp19=250,158,0
cp20=236,28,70
cp21=107,198,250
cp22=255,204,0
cp23=150,150,150
cp24=237,28,32

; Background
[StyleBackground]
SolidColor=#colorBg#
X=#bgOffset#
Y=#bgOffset#
W=#bgWidth#
H=([BackgroundHeight:Y] - (#bgOffset# * 2))
DynamicVariables=1
Group=Background

[StyleBackgroundBorder]
ImageName=#imgPath#border.png
ImageTint=#colorBgBorder#
ImageAlpha=#colorBgA#
ScaleMargins=2,2,2,2
X=(#bgOffset# - 1)
Y=(#bgOffset# - 1)
W=(#bgWidth# + 2)
H=([BackgroundHeight:Y] - (#bgOffset# * 2) + 2)
DynamicVariables=1
Hidden=(#showBgBorder# = 1) ? 0 : 1
Group=Background

[StyleBackgroundHeight]
SolidColor=255,255,255,0
X=0
Y=(#contentMarginAbs# + #bgOffset#)R
W=#bgWidthAbs#
H=1
Group=Background

; Strings (general)
[StyleString]
FontColor=#colorMain#
FontSize=#fontSize#
FontFace=#fontFace#
X=#contentMargin#
Y=#rowSpacing#R
Antialias=1

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

[StyleStringParagraph]
FontSize=10
X=(#contentMargin# + 2)
Y=5R
W=(#contentWidth# - 6)
ClipString=2

; Strings (headers)
[StyleStringConfigTitle]
FontSize=11
X=#contentMargin#
Y=(#contentMargin# - 2)

[StyleStringSectionHeader]
FontSize=12
Y=10R

[StyleStringGadgetHeader]
FontSize=10
X=#contentMargin#
Y=(#contentMargin# - 2)

[StyleStringConfigSectionHeader]
FontFace=#fontFace# Cn
FontSize=10
Y=5R

; Settings
[StyleStringInputBox]
FontSize=10
FontFace=Roboto Lt
SolidColor=#colorInputBg#
Padding=2,0,2,1
X=1r
Y=1r
W=(#contentWidth# - 6)
H=16
ClipString=1
DynamicVariables=1
Group=ToggleButtons

[StyleStringToggleLabel]
FontColor=#colorMain#
FontSize=10
X=3R
Y=-1r

[StyleToggleButton]
FontFace=ElegantIcons
FontColor=#colorAccent#
FontSize=12
X=#contentMargin#
Y=4R
DynamicVariables=1
Group=ToggleButtons
Antialias=1

[StyleStringColorPickerLabel]
StringAlign=Right
FontSize=9
X=-5r
Y=5R

[StyleColorPicker]
Shape=Rectangle 0,0,15,15,1 | Stroke Color 100,100,100,100 | StrokeWidth 0 | Extend MeterSpecific
X=5r
Y=-1r
DynamicVariables=1

; Buttons
[StyleStringArrowButtonLabel]
FontSize=10
StringAlign=Right
X=(#contentMarginRight# - 17)

[StyleStringArrowButton]
ImageName=#imgPath#arrow-right.png
ImageTint=#colorAccent#
X=r
Y=r
W=17
H=17
Antialias=0

[StyleCloseButton]
ImageName=#imgPath#close.png
ImageAlpha=#colorBgA#
X=(#contentMarginRight# - 18)
Y=(#contentMargin# - 5)
W=24
H=24
Antialias=0
ToolTipText="Close"
; MouseOverAction=[!SetOption CloseButton ImageTint "#colorButtonPress#"][!UpdateMeter CloseButton][!Redraw]
LeftMouseUpAction=[!DeactivateConfig]

[StyleSettingsButton]
ImageName=#imgPath#Wrench.png
ImageAlpha=#colorBgA#
X=(#contentMarginRight# - 10)
Y=(#contentMargin# + 2)
W=9
H=9
Antialias=1
Hidden=1
Group=ConfigButton
MouseOverAction=[!SetOption ConfigButton ImageTint "#colorButtonPress#"][!UpdateMeter ConfigButton][!Redraw]
MouseLeaveAction=[!SetOption ConfigButton ImageTint ""][!UpdateMeter ConfigButton][!Redraw]
LeftMouseUpAction=[!SkinCustomMenu]

[StyleHelpButton]
ImageName=#imgPath#help.png
W=14
H=14
Antialias=0

[StyleEjectButton]
ImageName=#imgPath#eject.png
ImageTint=120,120,120
ToolTipText="Eject"
X=7R
Y=r
W=14
H=11
Antialias=1
DynamicVariables=1

; Other
[StyleBar]
SolidColor=#colorBarBg#
X=(#contentMargin#)
Y=#barTextOffset#R
W=(#contentWidth#)
w=(#contentWidth#)
h=#barHeight#
BarOrientation=Horizontal
DynamicVariables=1
Antialias=1