; MODERNGADGETS SETUP SKIN "WELCOME" SUBPAGE

; Sections: External links, load gadgets, main settings (notify of updates, )

[LogoGears]
Meter=Image
ImageName=#imgPath#LogoGears.png
X=(#contentMargin# + 4)
Y=(#contentMargin# + 4)
W=26
H=45

[LogoNameString]
Meter=String
MeterStyle=StyleString
FontSize=26
X=R
Y=-5r
Text="ModernGadgets"

[LogoSubtitleString]
Meter=String
MeterStyle=StyleString
FontSize=10
FontColor=#colorInfo#
X=5r
Y=-10R
Text="System monitoring - evolved"

; ----- Load Gadgets -----

[LoadGadgetsSectionHeaderString]
Meter=String
MeterStyle=StyleString | StyleStringSectionHeader
Text="Load Gadgets"

; CPU Meter
[CpuMeterLabelString]
Meter=String
MeterStyle=StyleString | StyleStringToggleLabel
Text="CPU Meter"

[CpuMeterButton]
Meter=Image
MeterStyle=StyleToggleImage | StyleToggleImageGadgets
ImageName=#imgPath#Settings\0a.png
Group=GadgetButtons
LeftMouseUpAction=[!CommandMeasure MeasureGadgetManagerScript "ToggleGadget('[MeasureCpuMeterState]', 'Cpu')"]

; Network Meter
[NetworkMeterLabelString]
Meter=String
MeterStyle=StyleString | StyleStringToggleLabel
Text="Network Meter"

[NetworkMeterButton]
Meter=Image
MeterStyle=StyleToggleImage | StyleToggleImageGadgets
ImageName=#imgPath#Settings\0a.png
Group=GadgetButtons
LeftMouseUpAction=[!CommandMeasure MeasureGadgetManagerScript "ToggleGadget('[MeasureNetworkMeterState]', 'Network')"]

; GPU Meter
[GpuMeterLabelString]
Meter=String
MeterStyle=StyleString | StyleStringToggleLabel
Text="GPU Meter"

[GpuMeterButton]
Meter=Image
MeterStyle=StyleToggleImage | StyleToggleImageGadgets
ImageName=#imgPath#Settings\0a.png
Group=GadgetButtons
LeftMouseUpAction=[!CommandMeasure MeasureGadgetManagerScript "ToggleGadget('[MeasureGpuMeterState]', 'Gpu')"]

; Disks Meter
[DisksMeterLabelString]
Meter=String
MeterStyle=StyleString | StyleStringToggleLabel
Text="Disks Meter"

[DisksMeterButton]
Meter=Image
MeterStyle=StyleToggleImage | StyleToggleImageGadgets
ImageName=#imgPath#Settings\0a.png
Group=GadgetButtons
LeftMouseUpAction=[!CommandMeasure MeasureGadgetManagerScript "ToggleGadget('[MeasureDisksMeterState]', 'Disks')"]

; ----- External Links -----

[SetupTutorialButtonLabelString]
Meter=String
MeterStyle=StyleString | StyleStringArrowButtonLabel
Y=[LoadGadgetsSectionHeaderString:Y]
Text="Setup Tutorial"
DynamicVariables=1

[SetupTutorialButton]
Meter=Image
MeterStyle=StyleStringArrowButton
MouseOverAction=[!SetOption SetupTutorialButton ImageTint "#colorButtonPress#"][!UpdateMeter SetupTutorialButton][!Redraw]
MouseLeaveAction=[!SetOption SetupTutorialButton ImageTint ""][!UpdateMeter SetupTutorialButton][!Redraw]
LeftMouseUpAction=["https://github.com/iamanai/ModernGadgets/wiki/Setup-Tutorial"]

[DeviantArtButtonLabelString]
Meter=String
MeterStyle=StyleString | StyleStringArrowButtonLabel
Text="DeviantArt"

[DeviantArtButton]
Meter=Image
MeterStyle=StyleStringArrowButton
MouseOverAction=[!SetOption DeviantArtButton ImageTint "#colorButtonPress#"][!UpdateMeter DeviantArtButton][!Redraw]
MouseLeaveAction=[!SetOption DeviantArtButton ImageTint ""][!UpdateMeter DeviantArtButton][!Redraw]
LeftMouseUpAction=["http://iamanai.deviantart.com"]

[GithubButtonLabelString]
Meter=String
MeterStyle=StyleString | StyleStringArrowButtonLabel
Text="GitHub"

[GithubButton]
Meter=Image
MeterStyle=StyleStringArrowButton
MouseOverAction=[!SetOption GithubButton ImageTint "#colorButtonPress#"][!UpdateMeter GithubButton][!Redraw]
MouseLeaveAction=[!SetOption GithubButton ImageTint ""][!UpdateMeter GithubButton][!Redraw]
LeftMouseUpAction=["https://github.com/iamanai/ModernGadgets"]

; ----- Local Directories -----

[ModernGadgetsFolderLabelString]
Meter=String
MeterStyle=StyleString | StyleStringArrowButtonLabel
Y=10R
Text="MG Skins Folder"

[ModernGadgetsFolderButton]
Meter=Image
MeterStyle=StyleStringArrowButton
MouseOverAction=[!SetOption ModernGadgetsFolderButton ImageTint "#colorButtonPress#"][!UpdateMeter ModernGadgetsFolderButton][!Redraw]
MouseLeaveAction=[!SetOption ModernGadgetsFolderButton ImageTint ""][!UpdateMeter ModernGadgetsFolderButton][!Redraw]
LeftMouseUpAction=["#ROOTCONFIGPATH#"]

[ModernGadgetsSettingsLabelString]
Meter=String
MeterStyle=StyleString | StyleStringArrowButtonLabel
Text="MG Settings Folder"

[ModernGadgetsSettingsButton]
Meter=Image
MeterStyle=StyleStringArrowButton
MouseOverAction=[!SetOption ModernGadgetsSettingsButton ImageTint "#colorButtonPress#"][!UpdateMeter ModernGadgetsSettingsButton][!Redraw]
MouseLeaveAction=[!SetOption ModernGadgetsSettingsButton ImageTint ""][!UpdateMeter ModernGadgetsSettingsButton][!Redraw]
LeftMouseUpAction=["#SETTINGSPATH#ModernGadgetsSettings"]

; ----- Utility links -----

[RmLabelString]
Meter=String
MeterStyle=StyleString | StyleStringArrowButtonLabel
Y=10R
Text="Rainmeter"

[RmButton]
Meter=Image
MeterStyle=StyleStringArrowButton
MouseOverAction=[!SetOption RmButton ImageTint "#colorButtonPress#"][!UpdateMeter RmButton][!Redraw]
MouseLeaveAction=[!SetOption RmButton ImageTint ""][!UpdateMeter RmButton][!Redraw]
LeftMouseUpAction=["https:www.rainmeter.net"]

[HwinfoLabelString]
Meter=String
MeterStyle=StyleString | StyleStringArrowButtonLabel
Text="HWiNFO"

[HwinfoButton]
Meter=Image
MeterStyle=StyleStringArrowButton
MouseOverAction=[!SetOption HwinfoButton ImageTint "#colorButtonPress#"][!UpdateMeter HwinfoButton][!Redraw]
MouseLeaveAction=[!SetOption HwinfoButton ImageTint ""][!UpdateMeter HwinfoButton][!Redraw]
LeftMouseUpAction=["https://www.hwinfo.com"]

; ----- Auto-notify updates -----

[AutoNotifyUpdatesLabelString]
Meter=String
MeterStyle=StyleString | StyleStringToggleLabel
Y=250
Text="Notify me of available updates"

[AutoNotifyUpdatesButton]
Meter=Image
MeterStyle=StyleToggleImage
ImageName=#imgPath#Settings\0a.png
X=10R
LeftMouseUpAction=[!CommandMeasure MeasureGadgetManagerScript "ToggleNotifyUpdates(#notifyUpdates#)"]
