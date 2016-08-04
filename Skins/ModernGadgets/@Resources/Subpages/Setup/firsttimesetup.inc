[LogoGears]
Meter=Image
ImageName=#imgPath#LogoGears.png
X=(#contentMargin# + 2)
Y=(#contentMargin# + 2)
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
Text="The ultimate desktop gadgets replacement suite"

[Paragraph1String]
Meter=String
MeterStyle=StyleString | StyleStringParagraph
Text="Welcome to ModernGadgets! Before you can get started, there are a few things we need to go over.#CRLF##CRLF#When you installed this skin suite, a new folder was created in Rainmeter's appdata folder called 'ModernGadgetsSettings'. As the name suggests, it contains all of your settings files. Because of this, your settings will not be overwritten when you update the suite, and the suite will automatically update the files with new values after updating.#CRLF##CRLF#So really, you don't have to worry about anything. You can just take comfort in that your customizations will not be lost unless you completely uninstall Rainmeter."

[NextButton]
Meter=String
MeterStyle=StyleString | StyleStringButton
Text="Next"

[NextButtonImage]
Meter=Image
MeterStyle=StyleStringButtonImage
MouseOverAction=[!SetOption NextButtonImage ImageTint "#*colorButtonPress*#"][!UpdateMeter NextButtonImage][!Redraw]
MouseLeaveAction=[!SetOption NextButtonImage ImageTint ""][!UpdateMeter NextButtonImage][!Redraw]
LeftMouseUpAction=[!WriteKeyValue Variables page "setup1"][!Refresh]
