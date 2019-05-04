; ModernGadget StyleSheet
; WARNING: DO NOT CHANGE ANY OF THESE VALUES. Customizable options are kept in GlobalSettings.inc. If
; you change anything in this file, it WILL break things. Proceed at your own risk!

[Variables]
mgVersion=1.5.1-rc.4

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
dColumnX=(#contentMarginCenter# + 2)

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

audioMeterPath=#ROOTCONFIGPATH#AudioMeter\AudioMeter.ini
audioMeterConfig=ModernGadgets\AudioMeter
audioSettingsPath=#@#Settings\AudioSettings.inc

batteryMeterPath=#ROOTCONFIGPATH#BatteryMeter\BatteryMeter.ini
batteryMeterConfig=ModernGadgets\BatteryMeter
batteryMeterSettingsPath=#@#Settings\BatteryMeterSettings.inc

calendarPath=#ROOTCONFIGPATH#Calendar\Calendar.ini
calendarConfig=ModernGadgets\Calendar
calendarSettingsPath=#@#Settings\CalendarSettings.inc

chronometerPath=#ROOTCONFIGPATH#Chronometer\Chronometer.ini
chronometerConfig=ModernGadgets\Chronometer
chronometerSettingsPath=#@#Settings\ChronometerSettings.inc

clipboardMeterPath=#ROOTCONFIGPATH#ClipboardMeter\ClipboardMeter.ini
clipboardMeterConfig=ModernGadgets\ClipboardMeter
clipboardMeterSettingsPath=#@#Settings\ClipboardMeterSettings.inc

cpuMeterPath=#ROOTCONFIGPATH#CpuMeter\CpuMeter.ini
cpuMeterConfig=ModernGadgets\CpuMeter
cpuSettingsPath=#@#Settings\CpuSettings.inc

disksMeterPath=#ROOTCONFIGPATH#DisksMeter\DisksMeter.ini
disksMeterConfig=ModernGadgets\DisksMeter
disksSettingsPath=#@#Settings\DisksSettings.inc

gpuMeterPath=#ROOTCONFIGPATH#GpuMeter\GPU0\GpuMeter.ini
gpuMeterConfig=ModernGadgets\GpuMeter\GPU0
gpuSettingsPath=#@#Settings\GpuSettings.inc

launcherPath=#ROOTCONFIGPATH#Launcher\Launcher.ini
launcherConfig=ModernGadgets\Launcher
launcherSettingsPath=#@#Settings\LauncherSettings.inc

networkMeterPath=#ROOTCONFIGPATH#Network\NetworkMeter.ini
networkMeterProPath=#ROOTCONFIGPATH#Network\NetworkMeterPro.ini
networkMeterConfig=ModernGadgets\NetworkMeter
networkSettingsPath=#@#Settings\NetworkSettings.inc

processMeterPath=#ROOTCONFIGPATH#ProcessMeter\ProcessMeter.ini
processMeterConfig=ModernGadgets\ProcessMeter
processSettingsPath=#@#Settings\ProcessSettings.inc

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
FontSize=9
FontWeight=600
FontColor=#colorMain#,230
X=#contentMargin#
Y=(#contentMargin# - 2)

[StyleStringConfigSectionHeader]
FontFace=#fontFaceCn#
FontSize=10
FontWeight=600
FontColor=#colorDim#
Y=5R
StringCase=UPPER

[StyleStringArrowIconLabel]
X=3R
Y=-4r

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

[StyleMouseRegionShapeButtonHover]
MouseOverAction=[!SetOption #CURRENTSECTION#_ Fill "Fill Color #colorButtonPress#"][!UpdateMeter #CURRENTSECTION#_][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION#_ Fill "Fill Color #colorMain#"][!UpdateMeter #CURRENTSECTION#_][!Redraw]

[StyleMouseRegionRefreshButton]
MouseOverAction=[!SetOption #CURRENTSECTION#_ ImageName "#imgPath#refresh-over.png"][!UpdateMeter #CURRENTSECTION#_][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION#_ ImageName "#imgPath#refresh-up.png"][!SetOption #CURRENTSECTION#_ ImageTint "#colorAccent#"][!UpdateMeter #CURRENTSECTION#_][!Redraw]
LeftMouseDownAction=[!SetOption #CURRENTSECTION#_ ImageTint "#colorButtonPress#"][!UpdateMeter #CURRENTSECTION#_][!Redraw]

[StyleMouseRegionShapeRefreshButton]
MouseOverAction=[!SetOption #CURRENTSECTION#_ Shape3 "Combine Shape1 | XOR Shape2 | Scale 0.02,0.02,0,0 | Offset 0,2 | Rotate 15"][!UpdateMeter #CURRENTSECTION#_][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION#_ Shape3 "Combine Shape1 | XOR Shape2 | Scale 0.02,0.02,0,0 | Offset 0,2 | Rotate 0"][!UpdateMeter #CURRENTSECTION#_][!Redraw]
LeftMouseDownAction=[!SetOption #CURRENTSECTION#_ Fill "Fill Color #colorButtonPress#"][!UpdateMeter #CURRENTSECTION#_][!Redraw]

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
X=(#contentMarginRight# - 9)
Y=(#contentMargin# + 2)
H=8
W=8
ImageTint=#colorMain#
Antialias=1
Hidden=1
Group=ConfigButton
; MouseOverAction=[!SetOption #CURRENTSECTION# ImageTint "#colorButtonPress#"][!UpdateMeter #CURRENTSECTION#][!Redraw]
; MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageTint ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
; LeftMouseUpAction=[!SkinCustomMenu]
TransformationMatrix=#transformationMatrix#

[StyleConfigButtonNew]
X=(#contentMarginRight# - [#CURRENTSECTION#:W])
Y=(#contentMargin# + 2)
Shape = Path Path1 | StrokeWidth 0| Extend Fill
Shape2 = Path Path2 | StrokeWidth 0
Shape3 = Combine Shape1 | XOR Shape2 | Scale 0.018,0.018,0,0
Path1 = 507.73, 109.1 | CurveTo 487.61, 103.59, 505.49, 100.07, 494.19, 97.01 | LineTo 413.25, 177.95 | LineTo 345.37, 166.64 | LineTo 334.06, 98.76 | LineTo 408.42, 24.4 | CurveTo 402.76, 4.24, 415.04, 17.78, 411.85, 6.5 | CurveTo 266.18, 42.17, 355.38, -7.5, 303.21, 5.15 | CurveTo 232.13, 189.37, 226.54, 81.81, 215.63, 139.27 | LineTo 18.74, 402.76 | CurveTo 18.74, 493.26, -6.25, 427.75, -6.25, 468.27 | CurveTo 109.24, 493.26, 43.73, 518.25, 84.25, 518.25 | LineTo 322.45, 280.05 | CurveTo 469.82, 245.83, 372.57, 296.76, 429.92, 285.73 | CurveTo 507.73, 109.1, 506.89, 208.76, 519.52, 156.51 | ClosePath 1
Path2 = 64, 472 | CurveTo 40, 448, 50.75, 472, 40, 461.25 | CurveTo 64, 424, 40, 434.74, 50.75, 424 | CurveTo 88, 448, 77.25, 424, 88, 434.74 | CurveTo 64, 472, 88, 461.25, 77.25, 472 | ClosePath 1
Fill=Fill Color #colorMain#
DynamicVariables=1
TransformationMatrix=#transformationMatrix#
Group=ConfigButton
Hidden=1

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
X=(#contentMarginRight# - 11)
Y=r
Shape = Path Path1 | StrokeWidth 0 | Extend Fill
Shape2 = Path Path2 | StrokeWidth 0
Shape3 = Combine Shape1 | XOR Shape2 | Scale 0.02,0.02,0,0 | Offset 0,2
Path1 = 440.65, 12.57 | LineTo 444.65, 95.34 | ArcTo 255.83, 8, 247.16, 247.16, 0, 1, 0 | CurveTo 12.29, 209.82, 134.73, 8, 33.91, 94.92 | ArcTo 24.09, 224, 12, 12, 0, 1, 0 | LineTo 73.14, 224 | ArcTo 84.81, 214.74, 12, 12, 0, 1, 0 | ArcTo 401.81, 157.8, 175.91, 175.91, 0, 0, 0 | LineTo 300.35, 152.94 | ArcTo 287.78, 164.94, 12, 12, 0, 1, 0 | LineTo 287.78, 212.35 | ArcTo 299.78, 224.35, 12, 12, 0, 1, 0 | LineTo 500, 224.35 | ArcTo 512, 212.35, 12, 12, 0, 1, 0 | LineTo 512, 12 | ArcTo 500, 0, 12, 12, 0, 1, 0 | LineTo 452.63, 0 | ArcTo 440.65, 12.57, 12, 12, 0, 1, 0 | ClosePath 1
Path2 = 255.83, 432 | ArcTo 109.83, 354.2, 175.61, 175.61, 0, 0, 0 | LineTo 211.63, 359.07 | ArcTo 224.2, 347.07, 12, 12, 0, 1, 0 | LineTo 224.2, 299.67 | ArcTo 212.2, 287.67, 12, 12, 0, 1, 0 | LineTo 12, 287.67 | ArcTo 0, 299.67, 12, 12, 0, 1, 0 | LineTo 0, 500 | ArcTo 12, 512, 12, 12, 0, 1, 0 | LineTo 59.35, 512 | ArcTo 71.35, 499.4, 12, 12, 0, 1, 0 | LineTo 67.2, 416.83 | ArcTo 255.83, 504, 247.17, 247.17, 0, 1, 0 | CurveTo 499.38, 302.18, 376.94, 504, 477.76, 417.08 | ArcTo 487.58, 288, 12, 12, 0, 1, 0 | LineTo 438.53, 288 | ArcTo 426.86, 297.26, 12, 12, 0, 1, 0 | ArcTo 255.83, 432, 175.86, 175.86, 0, 0, 0 | ClosePath 1
Fill=Fill Color #colorAccent#
TransformationMatrix=#transformationMatrix#

; Line Graph
[StyleLineGraphBackground]
Shape=Rectangle 0,0,[&[#CURRENTSECTION]:W],[&[#CURRENTSECTION]:H],#cornerRoundness# | StrokeWidth 0 | Fill Color #colorGraphBorder#
Shape2=Rectangle 1,1,([&[#CURRENTSECTION]:W] - 2),([&[#CURRENTSECTION]:H] - 2),#cornerRoundness# | StrokeWidth 0 | Fill Color #colorGraphBg#
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

; Icons
[StyleArrowIcon]
X=#contentMargin#
Y=5R
Shape = Path Path1 | StrokeWidth 0 | Scale 0.027,0.027,1,-157 | Offset 0,0.25 | Extend Extend
Extend= Rotate 0 | Fill Color #colorAccent#
Path1 = 177, 159.7 | LineTo 313, 295.7 | CurveTo 313, 329.6, 322.4, 305.1, 322.4, 320.3 | LineTo 290.4, 352.2 | CurveTo 256.5, 352.2, 281, 361.6, 265.8, 361.6 | LineTo 160, 255.9 | LineTo 63.6, 352.3 | CurveTo 29.7, 352.3, 54.2, 361.7, 39, 361.7 | LineTo 7, 329.7 | CurveTo 7, 295.8, -2.4, 320.3, -2.4, 305.1 | LineTo 143, 159.8 | CurveTo 177, 159.7, 152.4, 150.3, 167.6, 150.3 | ClosePath 1
TransformationMatrix=#transformationMatrix#

[StyleArrowIconInline]
X=#columnX#
Y=4r

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