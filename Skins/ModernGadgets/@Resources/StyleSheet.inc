; ModernGadget StyleSheet
; WARNING: DO NOT CHANGE ANY OF THESE VALUES. Customizable options are kept in GlobalSettings.inc. If
; you change anything in this file, it WILL break things. Proceed at your own risk!

[Variables]
mgVersion=1.5.0

; Positioning
bgOffset=5
gadgetBgWidth=150
bgWidth=#gadgetBgWidth#
bgWidthAbs=(#bgWidth# + (#bgOffset# * 2))
cornerRoundness=3

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
graphHeight=42
graphWidth=#contentWidth#

labelOffset=53

; Font settings
fontFace=IBM Plex Sans
fontFaceCn=IBM Plex Sans Condensed
fontSize=8

; Colors
colorBorder=50,50,50
colorBg=15,15,15
colorBgBorder=#colorBorder#
colorSubBg=25,25,25

colorGraphBg=#colorSubBg#
colorGraphBorder=#colorBorder#
colorGraphGrid=#colorGraphBorder#

colorMain=230,230,230
colorDim=150,150,150
colorAccent=137,190,250
colorDisabled=120,120,120,200

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

extPath=#SETTINGSPATH#ModernGadgets\
dynamicVarsPath=#@#DynamicVars.inc

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
sidebarSetupConfig=ModernGadgets\\Settings\\Sidebars\\Setup
sb1ControlConfig=ModernGadgets\\Settings\\Sidebars\\Control\\1
sb2ControlConfig=ModernGadgets\\Settings\\Sidebars\\Control\\2

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
Shape=Rectangle (#bgOffset# * #scale#),(#bgOffset# * #scale#),(#bgWidth# * #scale#),([[#CURRENTSECTION]:H] - ((#bgOffset# * 2) * #scale#)),(#cornerRoundness# * #scale#) | StrokeWidth 0 | Fill Color #colorBgBorder#,((#showBgBorder# = 1) ? 255 : 0) 
Shape2=Rectangle ((#bgOffset# + #showBgBorder#) * #scale#),((#bgOffset# + #showBgBorder#) * #scale#),((#bgWidth# - (#showBgBorder# * 2)) * #scale#),([[#CURRENTSECTION]:H] - (((#bgOffset# * 2) + (#showBgBorder# * 2)) * #scale#)),(#cornerRoundness# * #scale#) | StrokeWidth 0 | Fill Color #colorBg#
BgGradient=90 | #colorBg# ; 0 | #colorSubBg# ; 1
X=0
Y=0
W=((#bgWidth# + (#bgOffset# * 2)) * #scale#)
H=([MeterBackgroundHeight:Y] * #scale#)
DynamicVariables=1
Group=Background

[StyleBackgroundHeight]
SolidColor=255,255,255,0
X=0
Y=(#contentMarginAbs# + #bgOffset# + 1)R
W=(#bgWidthAbs# * #scale#)
H=1
Group=Background
TransformationMatrix=#transformationMatrix#

[StyleSubBackground]
Shape=Rectangle 0,0,[&[#CURRENTSECTION]:W],[&[#CURRENTSECTION]:H],(#cornerRoundness# * #scale#) | StrokeWidth 0 | Extend BorderColor
Shape2=Rectangle 2,2,([&[#CURRENTSECTION]:W] - 4),([&[#CURRENTSECTION]:H] - 4),(#cornerRoundness# * #scale#) | StrokeWidth 0 | Extend InsetColor
Shape3=Rectangle 0,0,[&[#CURRENTSECTION]:W],[&[#CURRENTSECTION]:H],(#cornerRoundness# * #scale#) | StrokeWidth 0 | Extend HoverColor
DynamicVariables=1
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
FontWeight=600
X=(#contentMargin# + 2)
Y=(#contentMargin# - 2)

[StyleStringGadgetHeader]
FontSize=10
X=#contentMargin#
Y=(#contentMargin# - 3)

[StyleStringConfigSectionHeader]
FontFace=#fontFaceCn#
FontSize=10
FontWeight=600
FontColor=#colorDim#
Y=5R
StringCase=UPPER

; Settings
[StyleStringInputBoxLabel]
FontSize=10
X=(#contentMargin# + 2)
Y=3R

[StyleInputBoxBackground]
Shape=Rectangle 0,0,[&[#CURRENTSECTION]:W],[&[#CURRENTSECTION]:H],(#cornerRoundness# * #scale#) | StrokeWidth 0 | Fill Color #colorBorder#
Shape2=Rectangle 1,1,([&[#CURRENTSECTION]:W] - 2),([&[#CURRENTSECTION]:H] - 2),(#cornerRoundness# * #scale#) | StrokeWidth 0 | Fill Color #colorSubBg#
X=#contentMargin#
Y=3R
W=#contentWidth#
H=19
DynamicVariables=1
TransformationMatrix=#transformationMatrix#

[StyleInputBoxBackgroundAdjacent]
X=5R
Y=r
W=(#contentWidth# - [&[#CURRENTSECTION]:X] + #contentMargin#)
DynamicVariables=1

[StyleInputBoxBackgroundAdjacentRightMargin]
W=(#contentWidth# - [&[#CURRENTSECTION]:X] + #contentMargin# - 21)

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
Y=-2r

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
Y=2r

[StyleStringPivotLabel]
FontSize=10
X=(#contentMargin# + 2)
Y=3R

[StylePivotLeftButton]
FontFace=ElegantIcons
FontSize=12
FontColor=#colorAccent#
X=10R
Y=3r
Text=[\x0044]
DynamicVariables=1
Group=Settings
Antialias=1

[StyleStringPivotValue]
FontSize=9
FontColor=#colorDim#
FontFace=#fontFaceCn#
FontWeight=600
StringAlign=CENTER
StringCase=UPPER
X=(([#CURRENTSECTION#:W] / 2))R
Y=-1r
DynamicVariables=1
Group=Settings

[StylePivotRightButton]
FontFace=ElegantIcons
FontSize=12
FontColor=#colorAccent#
Y=1r
Text=[\x0045]
DynamicVariables=1
Group=Settings
Antialias=1

[StyleStringColorPickerLabel]
FontSize=10
X=3R
Y=-2r

[StyleColorPicker]
Shape=Rectangle 0,0,15,15,#cornerRoundness# | Fill Color #colorBorder# | StrokeWidth 0
Shape2=Rectangle 1,1,13,13,#cornerRoundness# | StrokeWidth 0 | Extend MeterSpecific
X=-18r
Y=3R
Group=Settings
DynamicVariables=1
TransformationMatrix=#transformationMatrix#

; Buttons
[StyleMouseRegion]
SolidColor=255,255,255,0
DynamicVariables=1
X=([#CURRENTSECTION#_:X] * #scale# + #scale#)
Y=([#CURRENTSECTION#_:Y] * #scale# + #scale#)
W=([#CURRENTSECTION#_:W] * #scale#)
H=([#CURRENTSECTION#_:H] * #scale#)

[StyleMouseRegionImgButtonHover]
MouseOverAction=[!SetOption #CURRENTSECTION#_ ImageTint "#colorButtonPress#"][!UpdateMeter #CURRENTSECTION#_][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION#_ ImageTint ""][!UpdateMeter #CURRENTSECTION#_][!Redraw]

[StyleMouseRegionRefreshButton]
MouseOverAction=[!SetOption #CURRENTSECTION#_ ImageName "#imgPath#refresh-over.png"][!UpdateMeter #CURRENTSECTION#_][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION#_ ImageName "#imgPath#refresh-up.png"][!SetOption #CURRENTSECTION#_ ImageTint "#colorAccent#"][!UpdateMeter #CURRENTSECTION#_][!Redraw]
LeftMouseDownAction=[!SetOption #CURRENTSECTION#_ ImageTint "#colorButtonPress#"][!UpdateMeter #CURRENTSECTION#_][!Redraw]

[StyleMouseRegionStringButtonHover]
MouseOverAction=[!SetOption #CURRENTSECTION#_ FontColor "#colorButtonPress#"][!UpdateMeter #CURRENTSECTION#_][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION#_ FontColor ""][!UpdateMeter #CURRENTSECTION#_][!Redraw]

[StyleImgButtonHover]
MouseOverAction=[!SetOption #CURRENTSECTION# ImageTint "#colorButtonPress#"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageTint ""][!UpdateMeter #CURRENTSECTION#][!Redraw]

[StyleStringButtonHover]
MouseOverAction=[!SetOption #CURRENTSECTION# FontColor "#colorButtonPress#"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# FontColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]

[StyleMouseRegionCloseButton]
LeftMouseUpAction=[!DeactivateConfig]
ToolTipText=Close

[StyleStringSmallTextButton]
FontColor=#colorAccent#
Y=8R

[StyleStringTextButton]
FontColor=#colorAccent#
FontFace=#fontFaceCn#
FontSize=9
FontWeight=600
StringCase=Upper

[StyleStringArrowButtonLabel]
FontSize=10
StringAlign=Right
X=(#contentMarginRight# - 17)
Y=R

[StyleArrowButton]
ImageName=#imgPath#arrow-right.png
ImageTint=#colorAccent#
X=r
Y=2r
W=17
H=17
Antialias=0
TransformationMatrix=#transformationMatrix#

[StyleCloseButton]
ImageName=#imgPath#close-new.png
X=(#contentMarginRight# - 14)
Y=(#contentMargin#)
W=14
H=14
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
Y=(#contentMargin# - 1)
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
Y=3r
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
Y=1r
W=15
H=15
Antialias=1
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

[StyleLineGraphBackground]
Shape=Rectangle 0,0,[&[#CURRENTSECTION]:W],[&[#CURRENTSECTION]:H],#cornerRoundness# | StrokeWidth 0 | Fill Color #colorBorder#
Shape2=Rectangle 1,1,([&[#CURRENTSECTION]:W] - 2),([&[#CURRENTSECTION]:H] - 2),#cornerRoundness# | StrokeWidth 0 | Fill Color #colorSubBg#
; Vertical
Shape3=Rectangle (floor(([&[#CURRENTSECTION]:W] - 2) * 0.1)),1,0.5,([&[#CURRENTSECTION]:H] - 2) | Extend VerticalLines
Shape4=Rectangle (floor(([&[#CURRENTSECTION]:W] - 2) * 0.2)),1,0.5,([&[#CURRENTSECTION]:H] - 2) | Extend VerticalLines
Shape5=Rectangle (floor(([&[#CURRENTSECTION]:W] - 2) * 0.3)),1,0.5,([&[#CURRENTSECTION]:H] - 2) | Extend VerticalLines
Shape6=Rectangle (floor(([&[#CURRENTSECTION]:W] - 2) * 0.4)),1,0.5,([&[#CURRENTSECTION]:H] - 2) | Extend VerticalLines
Shape7=Rectangle (floor(([&[#CURRENTSECTION]:W] - 2) * 0.5)),1,0.5,([&[#CURRENTSECTION]:H] - 2) | Extend VerticalLines
Shape8=Rectangle (ceil(([&[#CURRENTSECTION]:W] - 2) * 0.6)),1,0.5,([&[#CURRENTSECTION]:H] - 2) | Extend VerticalLines
Shape9=Rectangle (ceil(([&[#CURRENTSECTION]:W] - 2) * 0.7)),1,0.5,([&[#CURRENTSECTION]:H] - 2) | Extend VerticalLines
Shape10=Rectangle (ceil(([&[#CURRENTSECTION]:W] - 2) * 0.8)),1,0.5,([&[#CURRENTSECTION]:H] - 2) | Extend VerticalLines
Shape11=Rectangle (ceil(([&[#CURRENTSECTION]:W] - 2) * 0.9)),1,0.5,([&[#CURRENTSECTION]:H] - 2) | Extend VerticalLines
; Horizontal
Shape12=Rectangle 1,(floor(([&[#CURRENTSECTION]:H] - 2) * 0.2)),([&[#CURRENTSECTION]:W] - 2),1 | Extend HorizontalLines
Shape13=Rectangle 1,(floor(([&[#CURRENTSECTION]:H] - 2) * 0.4)),([&[#CURRENTSECTION]:W] - 2),1 | Extend HorizontalLines
Shape14=Rectangle 1,(ceil(([&[#CURRENTSECTION]:H] - 2) * 0.6)),([&[#CURRENTSECTION]:W] - 2),1 | Extend HorizontalLines
Shape15=Rectangle 1,(ceil(([&[#CURRENTSECTION]:H] - 2) * 0.8)),([&[#CURRENTSECTION]:W] - 2),1 | Extend HorizontalLines
HorizontalLines=Fill Color #colorGraphGrid#,(255 * ((#lineGraphBgType# % 2) = 1)) | StrokeWidth 0
VerticalLines=Fill Color #colorGraphGrid#,(255 * (#lineGraphBgType# > 1)) | StrokeWidth 0
X=(#contentMargin#)
Y=((#showLineGraph# = 0) ? -1 : #contentMarginAbs#)R
W=(#contentWidth#)
H=#graphHeight#
DynamicVariables=1
Group=LineGraph
Hidden=(#showLineGraph# = 0)
TransformationMatrix=#transformationMatrix#

[StyleLineGraphBackgroundOverlay]
Shape=Rectangle 0,0,[&[#CURRENTSECTION]:W],[&[#CURRENTSECTION]:H],#cornerRoundness# | StrokeWidth 0 | Fill Color #colorBorder#
Shape2=Rectangle 1,1,([&[#CURRENTSECTION]:W] - 2),([&[#CURRENTSECTION]:H] - 2),#cornerRoundness# | StrokeWidth 0 | Fill Color #colorSubBg#
Shape3=Combine Shape | XOR Shape2

X=-1r
Y=-1r
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
; HorizontalLines=#lineGraphHr#
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
Y=3r
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