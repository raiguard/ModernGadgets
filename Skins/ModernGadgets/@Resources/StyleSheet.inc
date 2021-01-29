; ModernGadget StyleSheet
; WARNING: changing values in this file could have unintended consequences. Proceed at your own risk!

[Variables]
mgVersion=1.7.0

; POSITIONING
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

; FONT SETTINGS
fontFace=IBM Plex Sans
fontFaceCn=IBM Plex Sans Condensed
fontSize=8
fontWeight=500
inputBoxFontSize=8

; COLORS
colorBorder=50,50,50
colorBg=15,15,15
colorBgBorder=#colorBorder#
colorSubBg=25,25,25

colorGraphBg=#colorSubBg#
colorGraphBorder=#colorBorder#
colorGraphGrid=#colorGraphBorder#

colorMain=220,220,220
colorDim=150,150,150
colorAccent=137,190,250
colorDisabled=100,100,100

colorBarBg=#colorBorder#

colorInputBg=#colorSubBg#
colorInputBorder=#colorBorder#
colorInputText=#colorDim#

colorIntel=0,125,198
colorAMD=221,1,48
colorSnapdragon=0,80,198
colorNvidia=119,185,0

colorError=200,53,53
colorCloseButton=157,33,33
colorHelpButton=27,57,131

histogramAlpha=50
hoverAlpha=200

; DEFAULT COLOR PALLETE
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

; OTHER
deg=[\176]
settingsAssets={ check_icon = { 'CheckOn', 'CheckOff' }, radio_icon = { 'RadioOn', 'RadioOff' }, toggle_icon = {'ToggleOn','ToggleOff'} }

; PATHS
imgPath=#@#Assets\Images\
soundPath=#@#Assets\Sounds\
fontPath=#@#Fonts\
scriptPath=#@#Scripts\

extPath=#SETTINGSPATH#ModernGadgets\
dynamicVarsPath=#@#DynamicVars.inc

colorPickerConfig=ModernGadgets\Settings\ColorPickerPlus
rainFilePath=#@#Addons\RainFile\RainFile.exe

globalSettingsPath=#@#Settings\GlobalSettings.inc
gadgetManagerPath=#ROOTCONFIGPATH#Settings\GadgetManager\GadgetManager.ini
chameleonConfig=ModernGadgets\Settings\Chameleon

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

; ------------------------------
; BACKGROUND

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

; ------------------------------
; STRINGS (GENERAL)

[StyleString]
FontColor=#colorMain#
FontSize=#fontSize#
FontFace=#fontFace#
FontWeight=#fontWeight#
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
X=(#contentMargin# + 2)
Y=5R
W=(#contentWidth# - 6)
ClipString=2

[StyleStringGadgetLabel]
FontSize=9
FontWeight=600
FontColor=#colorMain#
X=#contentMargin#
Y=(#contentMargin# - 2)

[StyleStringArrowIconLabel]
X=3R
Y=-4r

[StyleStringTextButton]
FontColor=#colorAccent#
FontFace=#fontFaceCn#
FontSize=9
FontWeight=600
StringCase=Upper

; ------------------------------
; BUTTON HOVER LOGIC

[StyleMouseRegion]
SolidColor=255,255,255,0
DynamicVariables=1
X=([#CURRENTSECTION#_:X] * #scale# + #scale#)
Y=([#CURRENTSECTION#_:Y] * #scale# + #scale#)
W=([#CURRENTSECTION#_:W] * #scale#)
H=([#CURRENTSECTION#_:H] * #scale#)

[StyleMouseRegionImgButtonHover]
MouseOverAction=[!SetOption #CURRENTSECTION#_ ImageAlpha "#hoverAlpha#"][!UpdateMeter #CURRENTSECTION#_][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION#_ ImageAlpha ""][!UpdateMeter #CURRENTSECTION#_][!Redraw]

[StyleMouseRegionShapeButtonHover]
MouseOverAction=[!SetOption #CURRENTSECTION#_ Fill "[&MeasureSettingsScript:GetKey('[#CURRENTSECTION]_','Fill')],#hoverAlpha#"][!UpdateMeter #CURRENTSECTION#_][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION#_ Fill "[&MeasureSettingsScript:Gsub('[&MeasureSettingsScript:GetKey('[#CURRENTSECTION]_','Fill')]', ',#hoverAlpha#')]"][!UpdateMeter #CURRENTSECTION#_][!Redraw]
DynamicVariables=1

; Preserves the variable reference, but requires an additional option on the meter
[StyleMouseRegionShapeButtonHoverPreserve]
MouseOverAction=[!SetOption #CURRENTSECTION#_ Fill "Fill Color [#*[&MeasureSettingsScript:GetKey('[#CURRENTSECTION]_','FillRef')]*],#*hoverAlpha*#"][!UpdateMeter #CURRENTSECTION#_][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION#_ Fill "Fill Color [#*[&MeasureSettingsScript:GetKey('[#CURRENTSECTION]_','FillRef')]*]"][!UpdateMeter #CURRENTSECTION#_][!Redraw]
DynamicVariables=1

[StyleMouseRegionShapeRefreshButton]
MouseOverAction=[!SetOption #CURRENTSECTION#_ Shape3 "Combine Shape1 | XOR Shape2 | Scale 0.02,0.02,0,0 | Offset 0,2 | Rotate 15"][!UpdateMeter #CURRENTSECTION#_][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION#_ Shape3 "Combine Shape1 | XOR Shape2 | Scale 0.02,0.02,0,0 | Offset 0,2 | Rotate 0"][!UpdateMeter #CURRENTSECTION#_][!Redraw]
LeftMouseDownAction=[!SetOption #CURRENTSECTION#_ Fill "Fill Color #colorAccent#,#hoverAlpha#"][!UpdateMeter #CURRENTSECTION#_][!Redraw]

[StyleMouseRegionStringButtonHover]
MouseOverAction=[!SetOption #CURRENTSECTION#_ FontColor "[&MeasureSettingsScript:GetKey('[#CURRENTSECTION]_','FontColor')],#hoverAlpha#"][!UpdateMeter #CURRENTSECTION#_][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION#_ FontColor "[&MeasureSettingsScript:Gsub('[&MeasureSettingsScript:GetKey('[#CURRENTSECTION]_','FontColor')]', ',#hoverAlpha#')]"][!UpdateMeter #CURRENTSECTION#_][!Redraw]
DynamicVariables=1

[StyleImgButtonHover]
MouseOverAction=[!SetOption #CURRENTSECTION# ImageAlpha "#hoverAlpha#"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageAlpha ""][!UpdateMeter #CURRENTSECTION#][!Redraw]

[StyleStringButtonHover]
MouseOverAction=[!SetOption #CURRENTSECTION# FontColor "[&MeasureSettingsScript:GetKey('[#CURRENTSECTION]','FontColor')],#hoverAlpha#"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# FontColor "[&MeasureSettingsScript:Gsub('[&MeasureSettingsScript:GetKey('[#CURRENTSECTION]','FontColor')]', ',#hoverAlpha#')]"][!UpdateMeter #CURRENTSECTION#][!Redraw]
DynamicVariables=1

[StyleShapeButtonHover]
MouseOverAction=[!SetOption #CURRENTSECTION# Fill "[&MeasureSettingsScript:GetKey('[#CURRENTSECTION]','Fill')],#hoverAlpha#"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Fill "[&MeasureSettingsScript:Gsub('[&MeasureSettingsScript:GetKey('[#CURRENTSECTION]','Fill')]', ',#hoverAlpha#')]"][!UpdateMeter #CURRENTSECTION#][!Redraw]
DynamicVariables=1

; Preserves the variable reference, but requires an additional option on the meter
[StyleShapeButtonHoverPreserve]
MouseOverAction=[!SetOption #CURRENTSECTION# Fill "Fill Color [#*[&MeasureSettingsScript:GetKey('[#CURRENTSECTION]','FillRef')]*],#*hoverAlpha*#"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Fill "Fill Color [#*[&MeasureSettingsScript:GetKey('[#CURRENTSECTION]','FillRef')]*]"][!UpdateMeter #CURRENTSECTION#][!Redraw]
DynamicVariables=1

[StyleMouseRegionCloseButton]
LeftMouseUpAction=[!DeactivateConfig]
ToolTipText=Close

; ------------------------------
; GADGET ICONS / ELEMENTS

[StyleConfigButtonNew]
X=(#contentMarginRight# - [#CURRENTSECTION#:W])
Y=(#contentMargin# + 2)
Shape=Path Path1 | StrokeWidth 0| Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Combine Shape1 | XOR Shape2 | Scale 0.018,0.018,0,0
Path1=507.73, 109.1 | CurveTo 487.61, 103.59, 505.49, 100.07, 494.19, 97.01 | LineTo 413.25, 177.95 | LineTo 345.37, 166.64 | LineTo 334.06, 98.76 | LineTo 408.42, 24.4 | CurveTo 402.76, 4.24, 415.04, 17.78, 411.85, 6.5 | CurveTo 266.18, 42.17, 355.38, -7.5, 303.21, 5.15 | CurveTo 232.13, 189.37, 226.54, 81.81, 215.63, 139.27 | LineTo 18.74, 402.76 | CurveTo 18.74, 493.26, -6.25, 427.75, -6.25, 468.27 | CurveTo 109.24, 493.26, 43.73, 518.25, 84.25, 518.25 | LineTo 322.45, 280.05 | CurveTo 469.82, 245.83, 372.57, 296.76, 429.92, 285.73 | CurveTo 507.73, 109.1, 506.89, 208.76, 519.52, 156.51 | ClosePath 1
Path2=64, 472 | CurveTo 40, 448, 50.75, 472, 40, 461.25 | CurveTo 64, 424, 40, 434.74, 50.75, 424 | CurveTo 88, 448, 77.25, 424, 88, 434.74 | CurveTo 64, 472, 88, 461.25, 77.25, 472 | ClosePath 1
Fill=Fill Color #colorMain#
DynamicVariables=1
TransformationMatrix=#transformationMatrix#
Group=ConfigButton
Hidden=1

[StyleRefreshButton]
X=(#contentMarginRight# - 11)
Y=r
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Combine Shape1 | XOR Shape2 | Scale 0.02,0.02,0,0 | Offset 0,2
Path1=440.65, 12.57 | LineTo 444.65, 95.34 | ArcTo 255.83, 8, 247.16, 247.16, 0, 1, 0 | CurveTo 12.29, 209.82, 134.73, 8, 33.91, 94.92 | ArcTo 24.09, 224, 12, 12, 0, 1, 0 | LineTo 73.14, 224 | ArcTo 84.81, 214.74, 12, 12, 0, 1, 0 | ArcTo 401.81, 157.8, 175.91, 175.91, 0, 0, 0 | LineTo 300.35, 152.94 | ArcTo 287.78, 164.94, 12, 12, 0, 1, 0 | LineTo 287.78, 212.35 | ArcTo 299.78, 224.35, 12, 12, 0, 1, 0 | LineTo 500, 224.35 | ArcTo 512, 212.35, 12, 12, 0, 1, 0 | LineTo 512, 12 | ArcTo 500, 0, 12, 12, 0, 1, 0 | LineTo 452.63, 0 | ArcTo 440.65, 12.57, 12, 12, 0, 1, 0 | ClosePath 1
Path2=255.83, 432 | ArcTo 109.83, 354.2, 175.61, 175.61, 0, 0, 0 | LineTo 211.63, 359.07 | ArcTo 224.2, 347.07, 12, 12, 0, 1, 0 | LineTo 224.2, 299.67 | ArcTo 212.2, 287.67, 12, 12, 0, 1, 0 | LineTo 12, 287.67 | ArcTo 0, 299.67, 12, 12, 0, 1, 0 | LineTo 0, 500 | ArcTo 12, 512, 12, 12, 0, 1, 0 | LineTo 59.35, 512 | ArcTo 71.35, 499.4, 12, 12, 0, 1, 0 | LineTo 67.2, 416.83 | ArcTo 255.83, 504, 247.17, 247.17, 0, 1, 0 | CurveTo 499.38, 302.18, 376.94, 504, 477.76, 417.08 | ArcTo 487.58, 288, 12, 12, 0, 1, 0 | LineTo 438.53, 288 | ArcTo 426.86, 297.26, 12, 12, 0, 1, 0 | ArcTo 255.83, 432, 175.86, 175.86, 0, 0, 0 | ClosePath 1
Fill=Fill Color #colorAccent#
TransformationMatrix=#transformationMatrix#

[StyleArrowIcon]
X=#contentMargin#
Y=5R
Shape=Path Path1 | StrokeWidth 0 | Scale 0.027,0.027,1,-157 | Offset 0,0.25 | Extend Extend
Extend= Rotate 0 | Fill Color #colorAccent#
Path1=177, 159.7 | LineTo 313, 295.7 | CurveTo 313, 329.6, 322.4, 305.1, 322.4, 320.3 | LineTo 290.4, 352.2 | CurveTo 256.5, 352.2, 281, 361.6, 265.8, 361.6 | LineTo 160, 255.9 | LineTo 63.6, 352.3 | CurveTo 29.7, 352.3, 54.2, 361.7, 39, 361.7 | LineTo 7, 329.7 | CurveTo 7, 295.8, -2.4, 320.3, -2.4, 305.1 | LineTo 143, 159.8 | CurveTo 177, 159.7, 152.4, 150.3, 167.6, 150.3 | ClosePath 1
TransformationMatrix=#transformationMatrix#

[StyleArrowIconInline]
X=#columnX#
Y=4r

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

; ------------------------------
; LINE GRAPH

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
Shape=Rectangle 0,0,[&[#CURRENTSECTION]:W],[&[#CURRENTSECTION]:H],#cornerRoundness# | StrokeWidth 0 | Fill Color #colorGraphBorder#
Shape2=Rectangle 1,1,([&[#CURRENTSECTION]:W] - 2),([&[#CURRENTSECTION]:H] - 2),#cornerRoundness# | StrokeWidth 0 | Fill Color #colorGraphBg#
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

; ------------------------------
; SETTINGS WINDOW ELEMENTS

[StyleCloseWindowButton]
X=(#contentMarginRight# - [#CURRENTSECTION#:W])
Y=#contentMargin#
Shape=Rectangle 2,2,9,9 | Extend Fill
Shape2=Path Path1 | StrokeWidth 0 | Fill Color #colorCloseButton#
Shape3=Path Path2 | StrokeWidth 0
Shape4=Combine Shape2 | XOR Shape3 | Scale 0.025,0.025,0,0 | Offset 0.12,0
Path1=464, 32 | LineTo 48, 32 | CurveTo 0, 80, 21.5, 32, 0, 53.5 | LineTo 0, 432 | CurveTo 48, 480, 0, 458.5, 21.5, 480 | LineTo 464, 480 | CurveTo 512, 432, 490.5, 480, 512, 458.5 | LineTo 512, 80 | CurveTo 464, 32, 512, 53.5, 490.5, 32 | ClosePath 1
Path2=380.4, 322.5 | CurveTo 380.4, 339.9, 385.2, 327.3, 385.2, 335.1 | LineTo 339.9, 380.4 | CurveTo 322.5, 380.4, 335.1, 385.2, 327.3, 385.2 | LineTo 256, 313.3 | LineTo 189.5, 380.4 | CurveTo 172.1, 380.4, 184.7, 385.2, 176.9, 385.2 | LineTo 131.6, 339.9 | CurveTo 131.6, 322.5, 126.8, 335.1, 126.8, 327.3 | LineTo 198.7, 256 | LineTo 131.6, 189.5 | CurveTo 131.6, 172.1, 126.8, 184.7, 126.8, 176.9 | LineTo 172.1, 131.6 | CurveTo 189.5, 131.6, 176.9, 126.8, 184.7, 126.8 | LineTo 256, 198.7 | LineTo 322.5, 131.6 | CurveTo 339.9, 131.6, 327.3, 126.8, 335.1, 126.8 | LineTo 380.4, 172.1 | CurveTo 380.4, 189.5, 385.2, 176.9, 385.2, 184.7 | LineTo 313.3, 256 | LineTo 380.4, 322.5 | ClosePath 1
DynamicVariables=1
TransformationMatrix=#transformationMatrix#
ToolTipText=Close
LeftMouseUpAction=[!DeactivateConfig]
Fill=Fill Color #colorMain#
HoverColor=#colorMain#

[StyleEditButton]
Shape=Rectangle 0,0,13,15 | Fill Color #colorBg#
Shape2=Path Path1 | StrokeWidth 0 | Extend Fill
Shape3=Path Path2 | StrokeWidth 0
Shape4=Path Path3 | StrokeWidth 0
Shape5=Combine Shape2 | XOR Shape3 | XOR Shape4 | Scale 0.025,0.025,0,0 | Offset 0,0.5
Path1=402.6, 83.2 | LineTo 492.8, 173.4 | CurveTo 492.8, 187.2, 496.6, 177.2, 496.6, 183.4 | LineTo 274.4, 405.6 | LineTo 181.6, 415.9 | CurveTo 160.1, 394.4, 169.2, 417.3, 158.7, 406.8 | LineTo 170.4, 301.6 | LineTo 388.8, 83.2 | CurveTo 402.6, 83.2, 392.6, 79.4, 398.8, 79.4 | ClosePath 1
Path2=564.6, 60.3 | LineTo 515.8, 11.5 | CurveTo 460.6, 11.5, 500.6, -3.7, 475.9, -3.7 | LineTo 425.2, 46.9 | CurveTo 425.2, 60.7, 421.4, 50.7, 421.4, 56.9 | LineTo 515.4, 150.9 | CurveTo 529.2, 150.9, 519.2, 154.7, 525.4, 154.7 | LineTo 564.6, 115.5 | CurveTo 564.6, 60.3, 579.8, 100.2, 579.8, 75.5 | ClosePath 1
Path3=384, 346.2 | LineTo 384, 448 | LineTo 64, 448 | LineTo 64, 128 | LineTo 293.8, 128 | CurveTo 302.3, 124.5, 297, 128, 300, 126.7 | LineTo 342.3, 84.5 | CurveTo 333.8, 64, 349.9, 76.9, 344.5, 64 | LineTo 48, 64 | CurveTo 0, 112, 21.5, 64, 0, 85.5 | LineTo 0, 464 | CurveTo 48, 512, 0, 490.5, 21.5, 512 | LineTo 400, 512 | CurveTo 448, 464, 426.5, 512, 448, 490.5 | LineTo 448, 306.2 | CurveTo 427.5, 297.7, 448, 295.5, 435.1, 290.2 | LineTo 387.5, 337.7 | CurveTo 384, 346.2, 385.3, 340, 384, 343 | ClosePath 1
Fill=Fill Color #colorMain#
TransformationMatrix=#transformationMatrix#
ToolTipText=Edit settings file
X=-18r
Y=-1r

[StyleStringSettingsSkinTitle]
FontSize=10
FontWeight=600
FontColor=#colorMain#
X=#contentMargin#
Y=#contentMargin#
Padding=0,-3,0,0
StringCase=Upper

[StyleStringSettingsSectionLabel]
FontSize=10
FontWeight=500
FontFace=#fontFaceCn#
FontColor=#colorDim#
Stringcase=Upper
Padding=0,2,0,0
X=(#contentMargin# + 1)

[StyleStringSettingsLabel]
FontWeight=500
FontSize=9
StringCase=Upper
X=(#contentMargin# + 1)
Y=3R

[StyleColorConfigHelpIcon]
Padding=-7,-4,0,0
ToolTipTitle=Color Customization
ToolTipText=Left-click a color to edit it with ColorPickerPlus. Right-click to reset a color to its default value. All color options are in RGB format.

[StyleInputBoxBackground]
Shape=Rectangle 0,0,[&[#CURRENTSECTION]:W],[&[#CURRENTSECTION]:H],(#cornerRoundness# * #scale#) | StrokeWidth 0 | Fill Color #colorBorder#
Shape2=Rectangle 1,1,([&[#CURRENTSECTION]:W] - 2),([&[#CURRENTSECTION]:H] - 2),(#cornerRoundness# * #scale#) | StrokeWidth 0 | Extend Fill
Fill=Fill Color #colorSubBg#
X=#contentMargin#
Y=3R
W=#contentWidth#
H=18
DynamicVariables=1
TransformationMatrix=#transformationMatrix#

[StyleInputBoxBackgroundAdjacent]
X=5R
Y=-1r
W=(#contentWidth# - [&[#CURRENTSECTION]:X] + #contentMargin#)
DynamicVariables=1

[StyleInputBoxBackgroundAdjacentRightMargin]
W=(#contentWidth# - [&[#CURRENTSECTION]:X] + #contentMargin# - 21)

[StyleInputBoxBackgroundAdjacentRightAlign]
X=#contentMarginRight# - [[#CURRENTSECTION]:W] + 1
Y=r
DynamicVariables=1

[StyleInputBoxBackgroundAdjacentRightAlignMargin]
X=#contentMarginRight# - [[#CURRENTSECTION]:W] + 1 - 21

[StyleInputBox]
FontSize=#inputBoxFontSize#
FontColor=#colorInputText#
X=4r
Y=3r
W=([&[&MeasureSettingsScript:Gsub('[#CURRENTSECTION]', 'InputBox')]Background:W] - 6)
H=16
Padding=0,-1,0,-3
ClipString=1
DynamicVariables=1
Group=Settings
SolidColor=0,255,0,0
MouseOverAction=[!SetOption [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','InputBox')]Background Fill "Fill Color #*colorSubBg*#,#*hoverAlpha*#"][!UpdateMeter [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','InputBox')]Background][!Redraw]
MouseLeaveAction=[!SetOption [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','InputBox')]Background Fill ""][!UpdateMeter [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','InputBox')]Background][!Redraw]

[StyleInputBoxSuffix]
FontColor=#colorDim#
FontSize=#inputBoxFontSize#
X=5R
Y=r
Padding=0,-1,0,-1

[StyleInputBoxAdjustor]
X=r
Y=R
H=4

[StyleLargeRefreshButton]
X=(#contentMarginRight# - 11)
Y=r
Shape=Rectangle -1,0,15,15 | StrokeWidth 0 | Fill Color #colorBg#
Shape2=Path Path1 | StrokeWidth 0 | Extend Fill
Shape3=Path Path2 | StrokeWidth 0
Shape4=Combine Shape2 | XOR Shape3 | Scale 0.025,0.025,0,0 | Offset 0,1.5
Path1=440.65, 12.57 | LineTo 444.65, 95.34 | ArcTo 255.83, 8, 247.16, 247.16, 0, 1, 0 | CurveTo 12.29, 209.82, 134.73, 8, 33.91, 94.92 | ArcTo 24.09, 224, 12, 12, 0, 1, 0 | LineTo 73.14, 224 | ArcTo 84.81, 214.74, 12, 12, 0, 1, 0 | ArcTo 401.81, 157.8, 175.91, 175.91, 0, 0, 0 | LineTo 300.35, 152.94 | ArcTo 287.78, 164.94, 12, 12, 0, 1, 0 | LineTo 287.78, 212.35 | ArcTo 299.78, 224.35, 12, 12, 0, 1, 0 | LineTo 500, 224.35 | ArcTo 512, 212.35, 12, 12, 0, 1, 0 | LineTo 512, 12 | ArcTo 500, 0, 12, 12, 0, 1, 0 | LineTo 452.63, 0 | ArcTo 440.65, 12.57, 12, 12, 0, 1, 0 | ClosePath 1
Path2=255.83, 432 | ArcTo 109.83, 354.2, 175.61, 175.61, 0, 0, 0 | LineTo 211.63, 359.07 | ArcTo 224.2, 347.07, 12, 12, 0, 1, 0 | LineTo 224.2, 299.67 | ArcTo 212.2, 287.67, 12, 12, 0, 1, 0 | LineTo 12, 287.67 | ArcTo 0, 299.67, 12, 12, 0, 1, 0 | LineTo 0, 500 | ArcTo 12, 512, 12, 12, 0, 1, 0 | LineTo 59.35, 512 | ArcTo 71.35, 499.4, 12, 12, 0, 1, 0 | LineTo 67.2, 416.83 | ArcTo 255.83, 504, 247.17, 247.17, 0, 1, 0 | CurveTo 499.38, 302.18, 376.94, 504, 477.76, 417.08 | ArcTo 487.58, 288, 12, 12, 0, 1, 0 | LineTo 438.53, 288 | ArcTo 426.86, 297.26, 12, 12, 0, 1, 0 | ArcTo 255.83, 432, 175.86, 175.86, 0, 0, 0 | ClosePath 1
Fill=Fill Color #colorAccent#
TransformationMatrix=#transformationMatrix#
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape4 "Combine Shape2 | XOR Shape3 | Scale 0.025,0.025,0,0 | Offset 0,1.5 | Rotate 15"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape4 "Combine Shape2 | XOR Shape3 | Scale 0.025,0.025,0,0 | Offset 0,1.5 | Rotate 0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!SetOption #CURRENTSECTION# Fill "Fill Color #colorAccent#,#hoverAlpha#"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!SetOption #CURRENTSECTION# Fill "Fill Color #colorAccent#"][!UpdateMeter #CURRENTSECTION#][!Redraw][!Refresh "#currentGadget#"]
ToolTipText=Apply changes

; ------------------------------
; SETTINGS BUTTONS

[StyleSettingsButtonLabel]
X=R
Y=r
FontWeight=500
FontSize=9
Group=Settings

[StyleSettingsButtonMouseRegion]
X=[&[&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon:X]
Y=[&[&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon:Y]
W=([&[&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon:W] + [&[&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Label:W] + 6)
H=[&[&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon:H]
DynamicVariables=1
Group=Settings
MouseOverAction=[!SetOption [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon Fill "[&MeasureSettingsScript:GetKey('[&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon','Fill')],#hoverAlpha#"][!SetOption [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Label FontColor "[&MeasureSettingsScript:GetKey('[&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Label','FontColor')],#hoverAlpha#"][!UpdateMeter [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon][!UpdateMeter [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Label][!Redraw]
MouseLeaveAction=[!SetOption [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon Fill "[&MeasureSettingsScript:Gsub('[&MeasureSettingsScript:GetKey('[&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon','Fill')]', ',#hoverAlpha#')]"][!SetOption [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Label FontColor "[&MeasureSettingsScript:Gsub('[&MeasureSettingsScript:GetKey('[&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Label','FontColor')]', ',#hoverAlpha#')]"][!UpdateMeter [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon][!UpdateMeter [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Label][!Redraw]

[StyleSettingsButtonMouseRegionPreserve]
X=[&[&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon:X]
Y=[&[&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon:Y]
W=([&[&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon:W] + [&[&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Label:W] + 6)
H=[&[&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon:H]
DynamicVariables=1
Group=Settings
MouseOverAction=[!SetOption [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon Fill "Fill Color [#*[&MeasureSettingsScript:GetKey('[&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon','FillRef')]*],#*hoverAlpha*#"][!SetOption [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Label FontColor "[&MeasureSettingsScript:GetKey('[&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Label','FontColor')],#hoverAlpha#"][!UpdateMeter [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon][!UpdateMeter [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Label][!Redraw]
MouseLeaveAction=[!SetOption [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon Fill "Fill Color [#*[&MeasureSettingsScript:GetKey('[&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon','FillRef')]*]"][!SetOption [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Label FontColor "[&MeasureSettingsScript:Gsub('[&MeasureSettingsScript:GetKey('[&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Label','FontColor')]', ',#hoverAlpha#')]"][!UpdateMeter [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon][!UpdateMeter [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Label][!Redraw]

[StyleSettingsButton]
DynamicVariables=1
TransformationMatrix=#transformationMatrix#
Group=Settings
Fill=Fill Color #colorAccent#
X=(#contentMargin# + 1)
Y=1R

[StyleSettingsButtonInline]
X=5R
Y=r

[StyleSettingsButtonCheckOn]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Path Path3 | StrokeWidth 0
Shape4=Combine Shape1 | XOR Shape2 | XOR Shape3 | Scale 0.0275,0.0275,0,0 | Offset 0,1
Path1=400, 32 | LineTo 48, 32 | CurveTo 0, 80, 21.49, 32, 0, 53.49 | LineTo 0, 432 | CurveTo 48, 480, 0, 458.51, 21.49, 480 | LineTo 400, 480 | CurveTo 448, 432, 426.51, 480, 448, 458.51 | LineTo 448, 80 | CurveTo 400, 32, 448, 53.49, 426.51, 32 | ClosePath 1
Path2=400, 432 | LineTo 48, 432 | LineTo 48, 80 | LineTo 400, 80 | LineTo 400, 432 | ClosePath 1
Path3=364.136, 190.276 | LineTo 191.547, 361.48 | CurveTo 174.577, 361.412, 186.842, 366.147, 179.244, 366.117 | LineTo 83.796, 269.896 | CurveTo 83.865, 252.925, 79.129, 265.191, 79.159, 257.593 | LineTo 106.584, 230.389 | CurveTo 123.554, 230.458, 111.289, 225.722, 118.887, 225.752 | LineTo 183.346, 290.735 | LineTo 324.698, 150.519 | CurveTo 341.668, 150.587, 329.403, 145.852, 337.001, 145.882 | LineTo 364.204, 173.305 | CurveTo 364.136, 190.276, 368.871, 178.011, 368.841, 185.609 | ClosePath 1
Padding=0,0,4,3

[StyleSettingsButtonCheckOff]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Combine Shape1 | XOR Shape2 | Scale 0.0275,0.0275,0,0 | Offset 0,1
Path1=400, 32 | LineTo 48, 32 | CurveTo 0, 80, 21.5, 32, 0, 53.5 | LineTo 0, 432 | CurveTo 48, 480, 0, 458.5, 21.5, 480 | LineTo 400, 480 | CurveTo 448, 432, 426.5, 480, 448, 458.5 | LineTo 448, 80 | CurveTo 400, 32, 448, 53.5, 426.5, 32 | ClosePath 1
Path2=394, 432 | LineTo 54, 432 | CurveTo 48, 426, 50.7, 432, 48, 429.3 | LineTo 48, 86 | CurveTo 54, 80, 48, 82.7, 50.7, 80 | LineTo 394, 80 | CurveTo 400, 86, 397.3, 80, 400, 82.7 | LineTo 400, 426 | CurveTo 394, 432, 400, 429.3, 397.3, 432 | ClosePath 1
Padding=0,0,4,3

[StyleSettingsButtonRadioOn]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Path Path3 | StrokeWidth 0
Shape4=Combine Shape1 | XOR Shape2 | XOR Shape3 | Scale 0.0275,0.0275,0,0 | Offset 0,1
Path1=256, 56 | CurveTo 456, 256, 366.532, 56, 456, 145.451 | CurveTo 256, 456, 456, 366.532, 366.549, 456 | CurveTo 56, 256, 145.468, 456, 56, 366.549 | CurveTo 256, 56, 56, 145.468, 145.451, 56
Path2=256, 8 | CurveTo 8, 256, 119.033, 8, 8, 119.033 | CurveTo 256, 504, 8, 392.967, 119.033, 504 | CurveTo 504, 256, 392.967, 504, 504, 392.967 | CurveTo 256, 8, 504, 119.033, 392.967, 8 | ClosePath 1
Path3=256, 176 | CurveTo 176, 256, 211.817, 176, 176, 211.817 | CurveTo 256, 336, 176, 300.183, 211.817, 336 | CurveTo 336, 256, 300.183, 336, 336, 300.183 | CurveTo 256, 176, 336, 211.817, 300.183, 176 | ClosePath 1\
Padding=0,0,4,3

[StyleSettingsButtonRadioOff]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Combine Shape1 | XOR Shape2 | Scale 0.0275,0.0275,0,0 | Offset 0,1
Path1=256, 8 | CurveTo 8, 256, 119, 8, 8, 119 | CurveTo 256, 504, 8, 393, 119, 504 | CurveTo 504, 256, 393, 504, 504, 393 | CurveTo 256, 8, 504, 119, 393, 8 | ClosePath 1
Path2=256, 456 | CurveTo 56, 256, 145.5, 456, 56, 366.5 | CurveTo 256, 56, 56, 145.5, 145.5, 56 | CurveTo 456, 256, 366.5, 56, 456, 145.5 | CurveTo 256, 456, 456, 366.5, 366.5, 456 | ClosePath 1\
Padding=0,0,4,3

[StyleSettingsButtonPivotLeft]
Shape=Path Path1 | StrokeWidth 0 | Scale 0.025,0.025,0,0 | Offset -11,-176.4 | Rotate -90 | Extend Fill
Path1=288.662, 352 | LineTo 31.338, 352 | CurveTo 17.196, 317.858, 13.52, 352, 4.597, 330.457 | LineTo 145.858, 189.196 | CurveTo 174.142, 189.196, 153.668, 181.386, 166.332, 181.386 | LineTo 302.804, 317.858 | CurveTo 288.662, 352, 315.404, 330.457, 306.48, 352 | ClosePath 1
Fill=Fill Color #colorAccent#
X=10R
Y=-1r
; SolidColor=255,255,255,50

[StyleSettingsButtonPivotValue]
FontSize=9
StringCase=Upper
StringAlign=Center
X=([#CURRENTSECTION#:W] / 2 + 5)R
Y=r
DynamicVariables=1
Group=Settings
Padding=0,1,0,0

[StyleSettingsButtonPivotRight]
Shape=Path Path1 | StrokeWidth 0 | Scale 0.025,0.025,0,0 | Offset -11,-176.5 | Rotate 90 | Extend Fill
Path1=288.662, 352 | LineTo 31.338, 352 | CurveTo 17.196, 317.858, 13.52, 352, 4.597, 330.457 | LineTo 145.858, 189.196 | CurveTo 174.142, 189.196, 153.668, 181.386, 166.332, 181.386 | LineTo 302.804, 317.858 | CurveTo 288.662, 352, 315.404, 330.457, 306.48, 352 | ClosePath 1
Fill=Fill Color #colorAccent#
X=([&[&MeasureSettingsScript:Gsub('[#CURRENTSECTION]', 'RightIcon')]Value:XW] - ceil([&[&MeasureSettingsScript:Gsub('[#CURRENTSECTION]', 'RightIcon')]Value:W] / 2) - [&[&MeasureSettingsScript:Gsub('[#CURRENTSECTION]', 'RightIcon')]LeftIcon:XW])r
Y=r
; SolidColor=255,255,255,50
DynamicVariables=1

[StyleSettingsButtonPivotLeftMouseRegion]
X=[&[&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon:X]
Y=[&[&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon:Y]
W=(([&[&MeasureSettingsScript:Gsub('[#CURRENTSECTION]', 'LeftMouseRegion')]Value:X] + ([&[&MeasureSettingsScript:Gsub('[#CURRENTSECTION]', 'LeftMouseRegion')]Value:W] / 2)) - [#CURRENTSECTION#:X])
H=[&[&MeasureSettingsScript:Gsub('[#CURRENTSECTION]', 'LeftMouseRegion')]Value:H]
MouseOverAction=[!SetOption [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon Fill "Fill Color #*colorAccent*#,#*hoverAlpha*#"][!SetOption [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','LeftMouseRegion')]Value FontColor "#*colorMain*#,#*hoverAlpha*#"][!UpdateMeter [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon][!UpdateMeter [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','LeftMouseRegion')]Value][!Redraw]
MouseLeaveAction=[!SetOption [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon Fill "Fill Color #*colorAccent*#"][!SetOption [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','LeftMouseRegion')]Value FontColor "#*colorMain*#"][!UpdateMeter [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon][!UpdateMeter [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','LeftMouseRegion')]Value][!Redraw]
; SolidColor=255,0,0,100

[StyleSettingsButtonPivotRightMouseRegion]
X=[&[&MeasureSettingsScript:Gsub('[#CURRENTSECTION]', 'RightMouseRegion')]LeftMouseRegion:XW]
Y=[&[&MeasureSettingsScript:Gsub('[#CURRENTSECTION]', 'RightMouseRegion')]Value:Y]
W=([&[&MeasureSettingsScript:Gsub('[#CURRENTSECTION]', 'RightMouseRegion')]LeftMouseRegion:W] + 4)
H=[&[&MeasureSettingsScript:Gsub('[#CURRENTSECTION]', 'RightMouseRegion')]Value:H]
MouseOverAction=[!SetOption [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon Fill "Fill Color #*colorAccent*#,#*hoverAlpha*#"][!SetOption [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','RightMouseRegion')]Value FontColor "#*colorMain*#,#*hoverAlpha*#"][!UpdateMeter [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon][!UpdateMeter [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','RightMouseRegion')]Value][!Redraw]
MouseLeaveAction=[!SetOption [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon Fill "Fill Color #*colorAccent*#"][!SetOption [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','RightMouseRegion')]Value FontColor "#*colorMain*#"][!UpdateMeter [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon][!UpdateMeter [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','RightMouseRegion')]Value][!Redraw]
; SolidColor=0,255,0,100

[StyleSettingsButtonColorIcon]
Shape=Rectangle 0,0,12,12,2 | StrokeWidth 0 | Offset 0,2 | Extend Fill
Padding=0,0,5,3
X=r

[StyleSettingsButtonColorIconBorder]
Shape=Rectangle 0,0,12,12,2 | StrokeWidth 0 | Offset 0,2 | Fill Color #colorBorder#
Shape2=Rectangle 1,1,10,10,2 | StrokeWidth 0 | Offset 0,2 | Extend Fill

[StyleIconButtonIcon]
X=r
Y=6R
W=16
H=16
Fill=Fill Color #colorAccent#
; SolidColor=0,255,0,150
TransformationMatrix=#transformationMatrix#

[StyleIconButtonLabel]
FontSize=9
FontWeight=600
X=5R
Y=r

; Shapes
[StyleShapeRmLogo]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Combine Shape | XOR Shape2 | Scale 0.34,0.33,0,0 | Offset 1.5,-2
Path1=35, 37.722 | CurveTo 19, 52.622, 35, 45.922, 27.8, 52.622 | CurveTo 3, 37.722, 10.2, 52.622, 3, 45.922 | CurveTo 19, 4.622, 3, 29.522, 19, 4.622 | CurveTo 35, 37.722, 19, 4.622, 35, 29.522 | ClosePath 1
Path2=19.127, 35.82 | CurveTo 7.945, 35.793, 10.75, 30.074, 7.945, 35.793 | ArcTo 7.669, 37.026, 2.907, 2.907, 0, 1, 0 | CurveTo 19.223, 47.408, 7.669, 42.773, 12.868, 47.408 | CurveTo 30.777, 37.026, 25.578, 47.408, 30.777, 42.773 | CurveTo 30.681, 35.821, 30.777, 36.655, 30.681, 36.284 | CurveTo 19.127, 35.821, 30.681, 35.821, 27.407, 41.568 | ClosePath 1

[StyleShapeHwinfoLogo]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Path Path3 | StrokeWidth 0
Shape4=Path Path4 | StrokeWidth 0
Shape5=Path Path5 | StrokeWidth 0
Shape6=Path Path6 | StrokeWidth 0
Shape7=Combine Shape1 | XOR Shape2 | XOR Shape3 | XOR Shape4 | XOR Shape5 | XOR Shape6 | Scale 0.14,0.14,0,0 | Offset 0.775,1
Path1=7.5, 1.9 | CurveTo 2.5, 6, 5.9, 2.9, 3.6, 4.7 | CurveTo 0.5, 50, 0.6, 8.1, 0.5, 9.6 | LineTo 0.5, 91.8 | LineTo 3, 94.5 | CurveTo 51, 100, 8.2, 100.1, 7.7, 100 | CurveTo 99, 94.5, 94.3, 100, 93.8, 100.1 | LineTo 101.5, 91.8 | LineTo 101.5, 8.2 | LineTo 99, 5.5 | CurveTo 50.8, 0, 93.8, -0.1, 94.3, 0 | CurveTo 7.5, 1.9, 13.3, 0, 10.3, 0.1 | ClosePath 1
Path2=35, 29 | LineTo 35, 50 | LineTo 22, 50 | LineTo 22, 8 | LineTo 35, 8 | LineTo 35, 29 | ClosePath 1
Path3=51.9, 20.4 | CurveTo 57, 38.5, 56.1, 22.6, 57, 25.9 | LineTo 57, 50 | LineTo 45, 50 | LineTo 45, 34.5 | CurveTo 47, 19, 45, 19.5, 45.1, 19 | CurveTo 51.9, 20.4, 48.2, 19, 50.3, 19.6 | ClosePath 1
Path4=35, 78.5 | LineTo 35, 94 | LineTo 32.2, 94 | CurveTo 22, 73.5, 24.9, 94, 22, 88.2 | LineTo 22, 63 | LineTo 35, 63 | LineTo 35, 78.5 | ClosePath 1
Path5=57, 74.5 | CurveTo 55.8, 88.5, 57, 81.2, 56.5, 87 | CurveTo 47, 94, 54.5, 91.4, 50.3, 94 | CurveTo 45, 78.5, 45.1, 94, 45, 93.5 | LineTo 45, 63 | LineTo 57, 63 | LineTo 57, 74.5 | ClosePath 1
Path6=79, 75.6 | CurveTo 76.1, 91.1, 79, 88.1, 79, 88.2 | CurveTo 70.1, 94, 74.1, 93, 72.1, 94 | LineTo 67, 94 | LineTo 67, 63 | LineTo 79, 63 | LineTo 79, 75.6 | ClosePath 1

[StyleShapeHelpIcon]
Shape=Path Path1 | StrokeWidth 0 | Fill Color #colorMain# | Scale 0.0305,0.0305,0,0
Shape2=Path Path1 | StrokeWidth 0 | Fill Color #colorHelpButton#
Shape3=Path Path2 | StrokeWidth 0
Shape4=Path Path3 | StrokeWidth 0
Shape5=Combine Shape2 | XOR Shape3 | XOR Shape4 | Scale 0.0255,0.0255,0,0 | Offset 9,9
Path1=256, 8 | CurveTo 8, 256, 119.043, 8, 8, 119.083 | CurveTo 256, 504, 8, 392.997, 119.043, 504 | CurveTo 504, 256, 392.957, 504, 504, 392.997 | CurveTo 256, 8, 504, 119.083, 392.957, 8 | ClosePath 1
; Info icon
Path2=256, 118 | CurveTo 298, 160, 279.196, 118, 298, 136.804 | CurveTo 256, 202, 298, 183.196, 279.196, 202 | CurveTo 214, 160, 232.804, 202, 214, 183.196 | CurveTo 256, 118, 214, 136.804, 232.804, 118 | ClosePath 1
Path3=312, 372 | CurveTo 300, 384, 312, 378.627, 306.627, 384 | LineTo 212, 384 | CurveTo 200, 372, 205.373, 384, 200, 378.627 | LineTo 200, 348 | CurveTo 212, 336, 200, 341.373, 205.373, 336 | LineTo 224, 336 | LineTo 224, 272 | LineTo 212, 272 | CurveTo 200, 260, 205.373, 272, 200, 266.627 | LineTo 200, 236 | CurveTo 212, 224, 200, 229.373, 205.373, 224 | LineTo 276, 224 | CurveTo 288, 236, 282.627, 224, 288, 229.373 | LineTo 288, 336 | LineTo 300, 336 | CurveTo 312, 348, 306.627, 336, 312, 341.373 | LineTo 312, 372 | ClosePath 1
; Question icon
Path2=262.655, 90 | CurveTo 146.106, 153.758, 208.158, 90, 173.4, 112.957 | CurveTo 148.821, 170.016, 142.57, 159.044, 143.753, 166.173 | LineTo 183.52, 196.326 | CurveTo 200.185, 194.204, 188.725, 200.273, 196.141, 199.334 | CurveTo 257.488, 158.407, 218.049, 171.546, 230.298, 158.407 | CurveTo 303.186, 191.365, 277.917, 158.407, 303.186, 171.555 | CurveTo 270.652, 225.341, 303.186, 206.341, 290.823, 214.032 | CurveTo 216, 296, 247.128, 238.528, 216, 254.941 | LineTo 216, 300 | CurveTo 228, 312, 216, 306.627, 221.373, 312 | LineTo 284, 312 | CurveTo 296, 300, 290.627, 312, 296, 306.627 | LineTo 296, 298.667 | CurveTo 379.186, 192, 296, 270.205, 379.186, 269.02 | CurveTo 262.655, 90, 379.186, 133.998, 319.021, 90 | ClosePath 1
Path3=256, 338 | CurveTo 210, 384, 230.635, 338, 210, 358.635 | CurveTo 256, 430, 210, 409.364, 230.635, 430 | CurveTo 302, 384, 281.365, 430, 302, 409.364 | CurveTo 256, 338, 302, 358.635, 281.365, 338 | ClosePath 1
X=(#contentMarginRight# - [#CURRENTSECTION#:W] + 1)
Y=r
TransformationMatrix=#transformationMatrix#
DynamicVariables=1
Padding=-7,-7,0,0
ToolTipIcon=Info
ToolTipTitle=Title text
ToolTipText=Body text
ToolTipWidth=300

[StyleShapeHelpIconInputBox]
Padding=-7,-10,0,-3

[StyleShapeHelpIconInputBoxLabel]
Padding=-7,-7,0,-1

[StyleShapeHelpIconSectionLabel]
Padding=-7,-4,0,0

[StyleShapeBookIcon]
Shape=Rectangle 0,0,14,15 | StrokeWidth 0 | Fill Color #colorBg#
Shape2=Path Path1 | StrokeWidth 0 | Extend Fill
Shape3=Path Path2 | StrokeWidth 0
Shape4=Path Path3 | StrokeWidth 0
Shape5=Path Path4 | StrokeWidth 0
Shape6=Combine Shape2 | XOR Shape3 | XOR Shape4 | XOR Shape5 | Scale 0.028,0.028,0,0 | Offset 1,0.5
Path1=448, 360 | LineTo 448, 24 | CurveTo 424, 0, 448, 10.7, 437.3, 0 | LineTo 96, 0 | CurveTo 0, 96, 43, 0, 0, 43 | LineTo 0, 416 | CurveTo 96, 512, 0, 469, 43, 512 | LineTo 424, 512 | CurveTo 448, 488, 437.3, 512, 448, 501.3 | LineTo 448, 472 | CurveTo 439.1, 453.3, 448, 464.5, 444.5, 457.7 | CurveTo 439.1, 378.6, 434.9, 437.9, 434.9, 394 | CurveTo 448, 360, 444.5, 374.3, 448, 367.5 | ClosePath 1
Path2=128, 134 | CurveTo 134, 128, 128, 130.7, 130.7, 128 | LineTo 346, 128 | CurveTo 352, 134, 349.3, 128, 352, 130.7 | LineTo 352, 154 | CurveTo 346, 160, 352, 157.3, 349.3, 160 | LineTo 134, 160 | CurveTo 128, 154, 130.7, 160, 128, 157.3 | LineTo 128, 134 | ClosePath 1
Path3=128, 198 | CurveTo 134, 192, 128, 194.7, 130.7, 192 | LineTo 346, 192 | CurveTo 352, 198, 349.3, 192, 352, 194.7 | LineTo 352, 218 | CurveTo 346, 224, 352, 221.3, 349.3, 224 | LineTo 134, 224 | CurveTo 128, 218, 130.7, 224, 128, 221.3 | LineTo 128, 198 | ClosePath 1
Path4=381.4, 448 | LineTo 96, 448 | CurveTo 64, 416, 78.3, 448, 64, 433.7 | CurveTo 96, 384, 64, 398.4, 78.4, 384 | LineTo 381.4, 384 | CurveTo 381.4, 448, 379.5, 401.1, 379.5, 430.9 | ClosePath 1
X=(#contentMarginRight# - [#CURRENTSECTION#:W])
Y=3r
TransformationMatrix=#transformationMatrix#
Fill=Fill Color #colorAccent#
DynamicVariables=1

[StyleShapeBookIconAdjacent]
X=-20r

[StyleShapeBookIconSettingsButton]
Y=1r
Padding=0,0,0,1

[StyleShapeBookIconSectionLabel]
Y=1r

[StyleShapeEditIcon]
Shape=Rectangle 0,0,13,15 | Fill Color #colorBg#
Shape2=Path Path1 | StrokeWidth 0 | Extend Fill
Shape3=Path Path2 | StrokeWidth 0
Shape4=Path Path3 | StrokeWidth 0
Shape5=Combine Shape2 | XOR Shape3 | XOR Shape4 | Scale 0.025,0.025,0,0 | Offset 0,0.5
Path1=402.6, 83.2 | LineTo 492.8, 173.4 | CurveTo 492.8, 187.2, 496.6, 177.2, 496.6, 183.4 | LineTo 274.4, 405.6 | LineTo 181.6, 415.9 | CurveTo 160.1, 394.4, 169.2, 417.3, 158.7, 406.8 | LineTo 170.4, 301.6 | LineTo 388.8, 83.2 | CurveTo 402.6, 83.2, 392.6, 79.4, 398.8, 79.4 | ClosePath 1
Path2=564.6, 60.3 | LineTo 515.8, 11.5 | CurveTo 460.6, 11.5, 500.6, -3.7, 475.9, -3.7 | LineTo 425.2, 46.9 | CurveTo 425.2, 60.7, 421.4, 50.7, 421.4, 56.9 | LineTo 515.4, 150.9 | CurveTo 529.2, 150.9, 519.2, 154.7, 525.4, 154.7 | LineTo 564.6, 115.5 | CurveTo 564.6, 60.3, 579.8, 100.2, 579.8, 75.5 | ClosePath 1
Path3=384, 346.2 | LineTo 384, 448 | LineTo 64, 448 | LineTo 64, 128 | LineTo 293.8, 128 | CurveTo 302.3, 124.5, 297, 128, 300, 126.7 | LineTo 342.3, 84.5 | CurveTo 333.8, 64, 349.9, 76.9, 344.5, 64 | LineTo 48, 64 | CurveTo 0, 112, 21.5, 64, 0, 85.5 | LineTo 0, 464 | CurveTo 48, 512, 0, 490.5, 21.5, 512 | LineTo 400, 512 | CurveTo 448, 464, 426.5, 512, 448, 490.5 | LineTo 448, 306.2 | CurveTo 427.5, 297.7, 448, 295.5, 435.1, 290.2 | LineTo 387.5, 337.7 | CurveTo 384, 346.2, 385.3, 340, 384, 343 | ClosePath 1
Fill=Fill Color #colorAccent#
TransformationMatrix=#transformationMatrix#
ToolTipText=Edit settings file
Padding=0,0,2,0

[StyleShapeSearchIcon]
Shape=Rectangle 0,0,16,16 | StrokeWidth 0 | Fill Color #colorBg#
Shape2=Path Path1 | StrokeWidth 0 | Extend Fill
Shape3=Path Path2 | StrokeWidth 0
Shape4=Path Path3 | StrokeWidth 0
Shape5=Path Path4 | StrokeWidth 0
Shape6=Combine Shape2 | XOR Shape3 | XOR Shape4 | XOR Shape5 | Scale 0.03,0.03,0,0
Path1=505.04, 442.66 | LineTo 405.33, 342.97 | CurveTo 388.33, 335.97, 400.83, 338.47, 394.73, 335.97 | LineTo 372.03, 335.97 | CurveTo 416.03, 207.98, 399.63, 300.67, 416.03, 256.28 | CurveTo 208.02, 0, 416.03, 93.09, 322.92, 0 | CurveTo 0, 207.98, 93.12, 0, 0, 93.09 | CurveTo 208.02, 415.96, 0, 322.87, 93.11, 415.96 | CurveTo 336.03, 371.96, 256.32, 415.96, 300.73, 399.56 | LineTo 336.03, 388.26 | CurveTo 343.03, 405.26, 336.03, 394.66, 338.53, 400.76 | LineTo 442.74, 504.95 | CurveTo 476.64, 504.95, 452.14, 514.35, 467.34, 514.35 | LineTo 504.94, 476.65 | CurveTo 505.04, 442.66, 514.34, 467.25, 514.34, 452.06 | ClosePath 1
Path2=208.02, 351.96 | CurveTo 64.02, 207.98, 128.48, 351.96, 64.02, 287.62 | CurveTo 208.02, 64, 64.02, 128.45, 128.37, 64 | CurveTo 352.02, 207.98, 287.56, 64, 352.02, 128.34 | CurveTo 208.02, 351.96, 352.02, 287.51, 287.67, 351.96 | ClosePath 1
Path3=208.04, 112 | CurveTo 134.2, 185.83, 167.26, 112, 134.2, 145.05 | CurveTo 200.95, 300.69, 134.2, 218.79, 182.46, 278.88 | ArcTo 215.13, 300.69, 9.24, 9.24, 0, 1, 0 | CurveTo 281.88, 185.83, 233.62, 278.88, 281.88, 218.8 | CurveTo 208.04, 112, 281.88, 145.05, 248.82, 112 | ClosePath 1
Path4=208.04, 208 | CurveTo 184.04, 184, 194.78, 208, 184.04, 197.25 | CurveTo 208.04, 160, 184.04, 170.74, 194.79, 160 | CurveTo 232.04, 184, 221.29, 160, 232.04, 170.74 | CurveTo 208.04, 208, 232.04, 197.25, 221.29, 208 | ClosePath 1
Fill=Fill Color #colorAccent#
X=(#contentMarginRight# - [#CURRENTSECTION#:W])
Y=-2r
TransformationMatrix=#transformationMatrix#

[StyleSoundFileIcon]
Shape=Rectangle 0,0,18,16 | StrokeWidth 0 | Fill Color #colorBg#
Shape2=Path Path1 | StrokeWidth 0 | Extend Fill
Shape3=Path Path2 | StrokeWidth 0
Shape4=Combine Shape2 | XOR Shape3 | Scale 0.03,0.03,0,0 | Offset 0,0
Path1=572.694, 292.093 | LineTo 500.27, 416.248 | ArcTo 444.989, 448, 63.997, 63.997, 0, 0, 0 | LineTo 45.025, 448 | CurveTo 24.294, 411.907, 26.502, 448, 14.961, 427.907 | LineTo 96.718, 287.752 | ArcTo 152, 256, 64, 64, 0, 0, 0 | LineTo 551.964, 256 | CurveTo 572.694, 292.093, 570.487, 256, 582.028, 276.093 | ClosePath 1
Path2=152, 224 | LineTo 480, 224 | LineTo 480, 176 | CurveTo 432, 128, 480, 149.49, 458.51, 128 | LineTo 272, 128 | LineTo 208, 64 | LineTo 48, 64 | CurveTo 0, 112, 21.49, 64, 0, 85.49 | LineTo 0, 390.046 | LineTo 69.077, 271.628 | CurveTo 152, 224, 86.214, 242.25, 117.989, 224 | ClosePath 1
Fill=Fill Color #colorAccent#
ToolTipText=Choose sound file
X=5R
Y=r

[StyleSoundPlayIcon]
Shape=Path Path1 | StrokeWidth 0 | Scale 0.02,0.02,0,0 | Offset 0,3 | Extend Fill
Path1=424.4, 214.7 | LineTo 72.4, 6.6 | CurveTo 0, 47.9, 43.8, -10.3, 0, 6.1 | LineTo 0, 464 | CurveTo 72.4, 505.3, 0, 501.5, 40.7, 524.1 | LineTo 424.4, 297.3 | CurveTo 424.4, 214.7, 455.8, 278.8, 455.9, 233.2 | ClosePath 1
Fill=Fill Color #colorAccent#
X=8R
Y=r
Padding=0,0,0,3
ToolTipText=Play sound

[StyleShapeDownloadIcon]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Path Path3 | StrokeWidth 0
Shape4=Path Path4 | StrokeWidth 0
Shape5=Combine Shape1 | XOR Shape2 | XOR Shape3 | XOR Shape4 | Scale 0.03,0.03,0,0
Path1=216, 0 | LineTo 296, 0 | CurveTo 320, 24, 309.3, 0, 320, 10.7 | LineTo 320, 192 | LineTo 407.7, 192 | CurveTo 421.8, 226.1, 425.5, 192, 434.4, 213.5 | LineTo 269.7, 378.3 | CurveTo 242.4, 378.3, 262.2, 385.8, 249.9, 385.8 | LineTo 90.1, 226.1 | CurveTo 104.2, 192, 77.5, 213.5, 86.4, 192 | LineTo 192, 192 | LineTo 192, 24 | CurveTo 216, 0, 192, 10.7, 202.7, 0 | ClosePath 1
Path2=512, 376 | LineTo 512, 488 | CurveTo 488, 512, 512, 501.3, 501.3, 512 | LineTo 24, 512 | CurveTo 0, 488, 10.7, 512, 0, 501.3 | LineTo 0, 376 | CurveTo 24, 352, 0, 362.7, 10.7, 352 | LineTo 170.7, 352 | LineTo 219.7, 401 | CurveTo 292.3, 401, 239.8, 421.1, 272.2, 421.1 | LineTo 341.3, 352 | LineTo 488, 352 | CurveTo 512, 376, 501.3, 352, 512, 362.7 | ClosePath 1
Path3=388, 464 | CurveTo 368, 444, 388, 453, 379, 444 | CurveTo 348, 464, 357, 444, 348, 453 | CurveTo 368, 484, 348, 475, 357, 484 | CurveTo 388, 464, 379, 484, 388, 475 | ClosePath 1
Path4=452, 464 | CurveTo 432, 444, 452, 453, 443, 444 | CurveTo 412, 464, 421, 444, 412, 453 | CurveTo 432, 484, 412, 475, 421, 484 | CurveTo 452, 464, 443, 484, 452, 475 | ClosePath 1
Fill=Fill Color #colorAccent#

; Dummy Meters (to avoid log errors)
[0Icon]
Meter=Image

[0Label]
Meter=Image

[0Value]
Meter=Image

[0LeftIcon]
Meter=Image

[0LeftMouseRegion]
Meter=Image

[0RightIcon]
Meter=Image

[0Background]
Meter=Image