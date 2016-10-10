[LogoGears]
Meter=Image
ImageName=#imgPath#LogoGears.png
X=(#contentMargin# + 4)
Y=(#contentMargin# + 4)
W=31
H=50

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
X=r
Y=-5R
Text="The ultimate system monitoring gadgets suite"

[Paragraph1String]
Meter=String
MeterStyle=StyleString | StyleStringParagraph
Text="Welcome to ModernGadgets! Before you can get started enjoying your gadgets, there are a few things you should probably go over.#CRLF##CRLF#ModernGadgets uses an LUA script to manage external settings files, located in Rainmeter's AppData folder. This is done to prevent your customizations from being overwritten when updating the skin suite. However, this system is brand-new and has not been widely tested. If you encounter any issues, please don't hesitate to report them!#CRLF##CRLF#HWiNFO is required for this skin suite to fully function. If you have not worked with HWiNFO before, please take a moment to view the HWiNFO tutorial. If you already know how to work with HWiNFO, you can skip to the gadget manager."

[GadgetManagerLabel]
Meter=String
MeterStyle=StyleString | StyleStringButton
Text="Gadget Manager"

[GadgetManagerButton]
Meter=Image
MeterStyle=StyleStringButtonImage
MouseOverAction=[!SetOption GadgetManagerButton ImageTint "#*colorButtonPress*#"][!UpdateMeter GadgetManagerButton][!Redraw]
MouseLeaveAction=[!SetOption GadgetManagerButton ImageTint ""][!UpdateMeter GadgetManagerButton][!Redraw]
LeftMouseUpAction=[!WriteKeyValue Variables page "gadgetmanager"][!Refresh]

[HwinfoTutorialLabel]
Meter=String
MeterStyle=StyleString | StyleStringButton
Y=-25r
Text="HWiNFO Tutorial"

[HwinfoTutorialButton]
Meter=Image
MeterStyle=StyleStringButtonImage
MouseOverAction=[!SetOption HwinfoTutorialButton ImageTint "#*colorButtonPress*#"][!UpdateMeter HwinfoTutorialButton][!Redraw]
MouseLeaveAction=[!SetOption HwinfoTutorialButton ImageTint ""][!UpdateMeter HwinfoTutorialButton][!Redraw]
LeftMouseUpAction=[!WriteKeyValue Variables page "hwinfo1"][!Refresh]
