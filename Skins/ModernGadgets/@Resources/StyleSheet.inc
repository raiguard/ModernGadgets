; MODERNGADGETS STYLESHEET

[Variables]
mgVersion=1.4.1

; Positioning
bgOffset=5
bgWidth=150
bgWidthAbs=(#bgWidth# + (#bgOffset# * 2))

contentMarginAbs=3
contentMargin=(#contentMarginAbs# + #bgOffset# - 1)
contentMarginRight=(#bgWidth# - #contentMarginAbs# + #bgOffset# - 2)
contentMarginCenter=((#bgWidth# / 2) + #bgOffset#)
contentWidth=(#bgWidth# - (#contentMarginAbs# * 2))
columnX=(#contentMarginCenter# + 2)

scale=1.0
transformationMatrix=#scale#;0;0;#scale#;#scale#;#scale#

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
gadgetManagerPath=#ROOTCONFIGPATH#Settings\GadgetManager\GadgetManager.ini

styleSheetPath=#@#StyleSheet.inc

chronometerPath=#ROOTCONFIGPATH#Chronometer\Chronometer.ini
chronometerConfig=ModernGadgets\Chronometer
chronometerSettingsPath=#@#Settings\ChronometerSettings.inc

cpuMeterPath=#ROOTCONFIGPATH#CpuMeter\CpuMeter.ini
cpuMeterConfig=ModernGadgets\CpuMeter
cpuSettingsPath=#@#Settings\CpuSettings.inc

networkMeterPath=#ROOTCONFIGPATH#Network\NetworkMeter.ini
networkMeterProPath=#ROOTCONFIGPATH#Network\NetworkMeterPro.ini
networkMeterConfig=ModernGadgets\NetworkMeter
networkSettingsPath=#@#Settings\NetworkSettings.inc

gpuMeterPath=#ROOTCONFIGPATH#GpuMeter\GPU0\GpuMeter.ini
gpuMeterConfig=ModernGadgets\GpuMeter\GPU0
gpuSettingsPath=#@#Settings\GpuSettings.inc

disksMeterPath=#ROOTCONFIGPATH#DisksMeter\DisksMeter.ini
disksMeterConfig=ModernGadgets\DisksMeter
disksSettingsPath=#@#Settings\DisksSettings.inc

processMeterPath=#ROOTCONFIGPATH#ProcessMeter\ProcessMeter.ini
processMeterConfig=ModernGadgets\ProcessMeter
processSettingsPath=#@#Settings\ProcessSettings.inc

audioMeterPath=#ROOTCONFIGPATH#AudioMeter\AudioMeter.ini
audioMeterConfig=ModernGadgets\AudioMeter
audioSettingsPath=#@#Settings\AudioSettings.inc

weatherMeterPath=#ROOTCONFIGPATH#WeatherMeter\WeatherMeter.ini
weatherMeterConfig=ModernGadgets\WeatherMeter
weatherSettingsPath=#@#Settings\WeatherSettings.inc

setupSkinConfig=ModernGadgets\Settings\Setup

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
[StyleBackgroundMargin]
SolidColor=255,255,255,0
X=-1
Y=-1
W=((#bgWidth# + (#bgOffset# * 2)) * #scale#)
H=([MeterBackgroundHeight:Y] * #scale#)
DynamicVariables=1
Group=Background
TransformationMatrix=#transformationMatrix#

[StyleBackground]
ImageName=#imgPath#border.png
ScaleMargins=2,2,2,2
SolidColor=#colorBg#
ImageTint=#colorBgBorder#
ImageAlpha=((#showBgBorder# = 0) ? 0 : 255)
X=(#bgOffset# - 1)
Y=(#bgOffset# - 1)
W=#bgWidth#
H=([MeterBackgroundHeight:Y] - (#bgOffset# * 2))
DynamicVariables=1
Group=Background
TransformationMatrix=#transformationMatrix#

[StyleBackgroundHeight]
SolidColor=255,255,255,0
X=0
Y=(#contentMarginAbs# + #bgOffset#)R
W=(#bgWidthAbs# * #scale#)
H=1
Group=Background
TransformationMatrix=#transformationMatrix#

; Strings (general)
[StyleString]
FontColor=#colorMain#
FontSize=#fontSize#
FontFace=#fontFace#
X=#contentMargin#
Y=#rowSpacing#R
Antialias=1
TransformationMatrix=#transformationMatrix#

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
TransformationMatrix=#transformationMatrix#

[StyleInputBoxBackgroundAdjacent]
X=5R
Y=r
W=(#contentWidth# - [&[#CURRENTSECTION]:X] + #contentMargin#)
DynamicVariables=1

[StyleInputBoxBackgroundAdjacentRightAlign]
X=#contentMarginRight# - [[#CURRENTSECTION]:W] + 1
Y=r
DynamicVariables=1

[StyleInputBoxBackgroundAdjacentRightAlignHelpButton]
X=#contentMarginRight# - [[#CURRENTSECTION]:W] + 1 - 21

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
TransformationMatrix=#transformationMatrix#

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
TransformationMatrix=#transformationMatrix#

; Buttons
[StyleMouseRegion]
SolidColor=255,255,255,50
DynamicVariables=1
X=([#CURRENTSECTION#_:X] * #scale# + #scale#)
Y=([#CURRENTSECTION#_:Y] * #scale# + #scale#)
W=([#CURRENTSECTION#_:W] * #scale#)
H=([#CURRENTSECTION#_:H] * #scale#)

[StyleMouseRegionImgButtonHover]
MouseOverAction=[!SetOption #CURRENTSECTION#_ ImageTint "#colorButtonPress#"][!UpdateMeter #CURRENTSECTION#_][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION#_ ImageTint ""][!UpdateMeter #CURRENTSECTION#_][!Redraw]

[StyleMouseRegionImgRefreshHover]
MouseOverAction=[!SetOption #CURRENTSECTION#_ ImageName "#imgPath#refresh-over.png"][!UpdateMeter #CURRENTSECTION#_][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION#_ ImageName "#imgPath#refresh-up.png"][!SetOption #CURRENTSECTION#_ ImageTint "#colorAccent#"][!UpdateMeter #CURRENTSECTION#_][!Redraw]
LeftMouseDownAction=[!SetOption #CURRENTSECTION#_ ImageTint "#colorButtonPress#"][!UpdateMeter #CURRENTSECTION#_][!Redraw]

[StyleMouseRegionStringButtonHover]
MouseOverAction=[!SetOption #CURRENTSECTION#_ FontColor "#colorButtonPress#"][!UpdateMeter #CURRENTSECTION#_][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION#_ FontColor ""][!UpdateMeter #CURRENTSECTION#_][!Redraw]

[StyleStringButtonHover]
MouseOverAction=[!SetOption #CURRENTSECTION# FontColor "#colorButtonPress#"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# FontColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]

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
TransformationMatrix=#transformationMatrix#

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
TransformationMatrix=#transformationMatrix#

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
TransformationMatrix=#transformationMatrix#

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
; MouseOverAction=[!SetOption #CURRENTSECTION# ImageTint "#colorButtonPress#"][!UpdateMeter #CURRENTSECTION#][!Redraw]
; MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageTint ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
; LeftMouseUpAction=[!SkinCustomMenu]
TransformationMatrix=#transformationMatrix#

[StyleHelpButton]
ImageName=#imgPath#help.png
X=(#contentMarginRight# - 15)
Y=2r
W=14
H=14
Antialias=0
ToolTipIcon=Info
ToolTipWidth=300
TransformationMatrix=#transformationMatrix#

[StyleTutorialButton]
ImageName=#imgPath#book.png
Greyscale=1
ImageTint=#colorAccent#
X=(#contentMarginRight# - 15)
Y=r
W=15
H=15
Antialias=1
TransformationMatrix=#transformationMatrix#

[StyleColorsHelpButton]
ToolTipTitle=Color Customization
ToolTipText=Left-click on a color to edit it using RainRGB. Right-click on a color to reset it to its default value. Once you are finished, click the 'apply color changes' button.

[StyleEjectButton]
ImageName=#imgPath#eject.png
ImageTint=120,120,120
X=13R
Y=r
W=14
H=11
Antialias=1
DynamicVariables=1
TransformationMatrix=#transformationMatrix#

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
TransformationMatrix=#transformationMatrix#

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
TransformationMatrix=#transformationMatrix#

[StyleLineGraph]
X=1r
Y=1r
W=(#contentWidth# - 2)
H=(#graphHeight# - 2)
; HorizontalLines=1
; HorizontalLineColor=#colorBorder#
Group=LineGraph
Antialias=#lineGraphAa#
DynamicVariables=1
Hidden=(#showLineGraph# = 0)
TransformationMatrix=#transformationMatrix#

[StyleLineGraphBgAdjustor]
X=#contentMargin#
Y=((#showLineGraph# = 0) ? 0 : 1)R
Hidden=(#showLineGraph# = 0)
Group=LineGraph
TransformationMatrix=#transformationMatrix#

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
TransformationMatrix=#transformationMatrix#

[StyleStringPeakIcon]
FontFace=ElegantIcons
FontColor=#colorPeak#
Text=[\xe0ec]
Antialias=0

[StyleHorizontalRule]
SolidColor=#colorBorder#
X=#contentMargin#
Y=(#rowSpacing# + 1)R
W=#contentWidth#
H=1
TransformationMatrix=#transformationMatrix#

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