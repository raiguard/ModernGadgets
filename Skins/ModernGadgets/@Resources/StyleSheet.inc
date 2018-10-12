; MODERNGADGETS STYLESHEET

[Variables]
mgVersion=1.4.1-rc.1

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
colorBorder=50,50,50
colorBg=15,15,15
colorBgBorder=#colorBorder#
colorSubBg=25,25,25

colorGraphBg=#colorSubBg#
colorGraphBorder=#colorBorder#

colorMain=230,230,230
colorDim=150,150,150
colorAccent=137,190,250

colorGlobe=137,190,250

colorBarBg=#colorBorder#

colorButtonPress=255,50,50

colorInputBg=#colorSubBg#
colorInputBorder=#colorBorder#
colorInputText=#colorDim#

colorIntel=0,125,198
colorSnapdragon=0,80,198

histogramAlpha=50

insetToggleX=(#contentMargin# + 16)

; Character reference variables
deg=[\176]
toggleOn=[\x5a]
toggleOff=[\x56]
radioOn=[\x5c]
radioOff=[\x5b]

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

chronometerPath=#ROOTCONFIGPATH#Chronometer\Chronometer.ini
chronometerConfig=ModernGadgets\Chronometer
chronometerSettingsPath=#@#Settings\ChronometerSettings.inc

cpuMeterPath=#ROOTCONFIGPATH#CPU\CPU.ini
cpuMeterConfig=ModernGadgets\CPU
cpuSettingsPath=#@#Settings\CpuSettings.inc

networkMeterPath=#ROOTCONFIGPATH#Network\Network.ini
networkMeterProPath=#ROOTCONFIGPATH#Network\NetworkPro.ini
networkMeterConfig=ModernGadgets\Network
networkSettingsPath=#@#Settings\NetworkSettings.inc

gpuMeterPath=#ROOTCONFIGPATH#GPU\GPU0\GPU.ini
gpuMeterConfig=ModernGadgets\GPU\GPU0
gpuSettingsPath=#@#Settings\GpuSettings.inc

disksMeterPath=#ROOTCONFIGPATH#Disks\Disks.ini
disksMeterConfig=ModernGadgets\Disks
disksSettingsPath=#@#Settings\DisksSettings.inc

processMeterPath=#ROOTCONFIGPATH#Process\Process.ini
processMeterConfig=ModernGadgets\Process
processSettingsPath=#@#Settings\ProcessSettings.inc

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
ImageName=#imgPath#border.png
ScaleMargins=2,2,2,2
SolidColor=#colorBg#
ImageTint=#colorBgBorder#
ImageAlpha=((#showBgBorder# = 0) ? 0 : 255)
X=#bgOffset#
Y=#bgOffset#
W=#bgWidth#
H=([BackgroundHeight:Y] - (#bgOffset# * 2))
DynamicVariables=1
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
FontColor=#colorDim#

[StyleStringParagraph]
FontSize=10
X=(#contentMargin# + 2)
Y=5R
W=(#contentWidth# - 6)
ClipString=2

[StyleStringInfoParagraph]
X=(#contentMargin# + 2)
Y=5R
W=(#contentWidth# - 6)
ClipString=2
FontColor=#colorDim#

; Strings (headers)
[StyleStringConfigTitle]
FontSize=11
X=#contentMargin#
Y=(#contentMargin# - 2)

[StyleStringGadgetHeader]
FontSize=10
X=#contentMargin#
Y=(#contentMargin# - 2)

[StyleStringConfigSectionHeader]
FontFace=#fontFace# Cn
FontSize=10
Y=5R
StringCase=UPPER

; Settings
[StyleStringInputBoxLabel]
FontSize=10
Y=3R

[StyleInputBoxBackground]
ImageName=#imgPath#border.png
ImageTint=#colorInputBorder#
SolidColor=#colorInputBg#
X=#contentMargin#
Y=3R
W=#contentWidth#
H=19
ScaleMargins=2,2,2,2

[StyleInputBoxBackgroundAdjacent]
X=5R
Y=r
W=(#contentWidth# - [&[#CURRENTSECTION]:X] + #contentMargin#)
DynamicVariables=1

[StyleStringInputBox]
FontSize=10
FontFace=Roboto
FontColor=#colorInputText#
X=3r
Y=2r
W=([&[#CURRENTSECTION]Background:W] - 6)
H=16
Padding=0,-1,0,0
ClipString=1
DynamicVariables=1
Group=Settings

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
Group=Settings
Antialias=1

[StyleRadioButton]
X=5R
Y=1r

[StyleStringColorPickerLabel]
FontSize=9
X=5R
Y=1r

[StyleColorPicker]
Shape=Rectangle 0,0,15,15,1 | Stroke Color 100,100,100,100 | StrokeWidth 0 | Extend MeterSpecific
X=-20r
Y=5R
DynamicVariables=1

; Buttons
[StyleStringButtonHover]
MouseOverAction=[!SetOption #CURRENTSECTION# FontColor "#colorButtonPress#"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# FontColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]

[StyleImgButtonHover]
MouseOverAction=[!SetOption #CURRENTSECTION# ImageTint "#colorButtonPress#"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageTint ""][!UpdateMeter #CURRENTSECTION#][!Redraw]

[StyleStringSmallTextButton]
FontColor=#colorAccent#
Y=8R

[StyleStringArrowButtonLabel]
FontSize=10
StringAlign=Right
X=(#contentMarginRight# - 17)

[StyleArrowButton]
ImageName=#imgPath#arrow-right.png
ImageTint=#colorAccent#
X=r
Y=r
W=17
H=17
Antialias=0

[StyleCloseButton]
ImageName=#imgPath#close.png
X=(#contentMarginRight# - 18)
Y=(#contentMargin# - 5)
W=24
H=24
Antialias=0
ToolTipText=Close
; MouseOverAction=[!SetOption CloseButton ImageTint "#colorButtonPress#"][!UpdateMeter CloseButton][!Redraw]
LeftMouseUpAction=[!DeactivateConfig]

[StyleOpenConfigFileButton]
FontColor=#colorMain#
FontSize=10
FontFace=ElegantIcons
Antialias=1
StringAlign=Right
X=(#contentMarginRight# - 18)
Y=(#contentMargin# - 2)
Text=[\x6c]
ToolTipText=Open configuration file to access more advanced settings

[StyleConfigButton]
ImageName=#imgPath#Wrench.png
X=(#contentMarginRight# - 10)
Y=(#contentMargin# + 2)
W=9
H=9
ImageTint=#colorMain#
Antialias=1
Hidden=1
Group=ConfigButton
MouseOverAction=[!SetOption #CURRENTSECTION# ImageTint "#colorButtonPress#"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageTint ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!SkinCustomMenu]

[StyleHelpButton]
ImageName=#imgPath#help.png
X=(#contentMarginRight# - 15)
Y=2r
W=14
H=14
Antialias=0
ToolTipIcon=Info
ToolTipWidth=300

[StyleTutorialButton]
ImageName=#imgPath#book.png
Greyscale=1
ImageTint=#colorAccent#
X=(#contentMarginRight# - 15)
Y=r
W=15
H=15
Antialias=1

[StyleColorsHelpButton]
ToolTipTitle=Color Customization
ToolTipText=Left-click on a color to edit it using RainRGB. Right-click on a color to reset it to its default value. Once you are finished, click the 'apply color changes' button.

[StyleEjectButton]
ImageName=#imgPath#eject.png
ImageTint=120,120,120
ToolTipText=Eject
X=13R
Y=r
W=14
H=11
Antialias=1
DynamicVariables=1

[StyleRefreshButton]
ImageName=#imgPath#refresh-up.png
ImageTint=#colorAccent#
X=3R
Y=r
W=13
H=13
DynamicVariables=1
Antialias=1
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName "#imgPath#refresh-over.png"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName "#imgPath#refresh-up.png"][!SetOption #CURRENTSECTION# ImageTint "#colorAccent#"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!SetOption #CURRENTSECTION# ImageTint "#colorButtonPress#"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!SetOption #CURRENTSECTION# ImageName "#imgPath#refresh-up.png"][!SetOption #CURRENTSECTION# ImageTint "#colorAccent#"][!UpdateMeter #CURRENTSECTION#][!Redraw]

; Line Graph
[StyleLineGraphBackground]
ImageName=#imgPath#border.png
SolidColor=#colorGraphBg#
ScaleMargins=2,2,2,2
ImageTint=#colorGraphBorder#
X=(#contentMargin#)
Y=((#showLineGraph# = 0) ? -1 : #contentMarginAbs#)R
W=(#contentWidth#)
H=#graphHeight#
Group=LineGraph
Hidden=(#showLineGraph# = 0)

[StyleLineGraph]
X=1r
Y=1r
W=(#contentWidth# - 2)
H=(#graphHeight# - 2)
Group=LineGraph
Antialias=#lineGraphAa#
DynamicVariables=1
Hidden=(#showLineGraph# = 0)

[StyleLineGraphBgAdjustor]
X=#contentMargin#
Y=((#showLineGraph# = 0) ? 0 : 1)R
Hidden=(#showLineGraph# = 0)
Group=LineGraph

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

[StyleStringPeakIcon]
FontFace=ElegantIcons
FontColor=#colorPeak#
Text=[\xe0ec]
Antialias=0

; HWiNFO SMV Button
[StyleHwinfoSmvButtonRegion]
SolidColor=255,255,255,0
X=[HwinfoSmvButtonIcon:X]
Y=[HwinfoSmvButtonIcon:Y]
W=([HwinfoSmvButtonIcon:X] + ([HwinfoSmvButtonString:X] + [HwinfoSmvButtonString:W]) - 12)
H=21
DynamicVariables=1
MouseOverAction=[!SetOption HwinfoSmvButtonIcon ImageTint "#colorButtonPress#"][!SetOption HwinfoSmvButtonString FontColor "#colorButtonPress#"][!UpdateMeterGroup HwinfoSmvButton][!Redraw]
MouseLeaveAction=[!SetOption HwinfoSmvButtonIcon ImageTint ""][!SetOption HwinfoSmvButtonString FontColor ""][!UpdateMeterGroup HwinfoSmvButton][!Redraw]
LeftMouseUpAction=[!CommandMeasure MeasureOpenHwinfoSmv "Run"]
Group=HwinfoSmvButton

[StyleStringHwinfoSmvButton]
X=5R
Y=5r
FontSize=9
;FontColor=104,132,232
Text=Open Shared Memory Viewer
Group=HwinfoSmvButton

[StyleHwinfoSmvButtonIcon]
ImageName=#imgPath#hwinfo.png
X=#contentMargin#
Y=3R
W=21
H=21
Group=HwinfoSmvButton

[StyleHwinfoTutorialButton]
ToolTipText=View HWiNFO Configuration Tutorial
MouseOverAction=[!SetOption HwinfoTutorialButton ImageTint "#colorButtonPress#"][!UpdateMeter HwinfoTutorialButton][!Redraw]
MouseLeaveAction=[!SetOption HwinfoTutorialButton ImageTint "#colorAccent#"][!UpdateMeter HwinfoTutorialButton][!Redraw]
LeftMouseUpAction=["https://github.com/raiguard/ModernGadgets/wiki/HWiNFO-Configuration"]

[StyleHwinfoRefreshGadgetButton]
X=-20r
Y=r
W=15
H=15
ToolTipText=Refresh Gadget

[StyleStringHwinfoIssuesLink]
Y=6R
FontSize=8
Text=Report issues with the new SMV
LeftMouseUpAction=["https://github.com/raiguard/ModernGadgets/issues/103"]