[TitleString]
Meter=String
MeterStyle=StyleString
FontSize=23
FontColor=#colorAccent#
StringAlign=Center
X=#contentMarginCenter#
Y=#contentMargin#
Text="ModernGadgets"

[SubtitleString]
Meter=String
MeterStyle=StyleString
FontSize=10
FontColor=#colorInfo#
StringAlign=Center
X=r
Y=R
Text="The ultimate desktop gadgets replacement suite"

[IntroParagraphString]
Meter=String
MeterStyle=StyleString | StyleStringParagraph
Text="ModernGadgets is a Rainmeter recreation of the most popular AddGadgets.com system monitoring gadgets, with updated visuals and enhanced functionality to better align with modern systems. It is inspired by SilverAzide's Gadgets skins, as well as illustro Gadgets. It is also the first skin suite to implement a new system for handling user settings, explained more in the setup tutorial."

[NextButton]
Meter=String
MeterStyle=StyleString | StyleStringButton
StringAlign=Center
X=#contentMarginCenter#
Y=30R
Text="View Setup Tutorial"
LeftMouseUpAction=[!WriteKeyValue Variables page "tutorial1"][!Refresh]

[SkipTutorialButton]
Meter=String
MeterStyle=StyleString | StyleStringButton
StringAlign=Center
X=#contentMarginCenter#
Y=10R
Text="Skip tutorial"
LeftMouseUpAction=[!WriteKeyValue Variables page "skinSelect"][!Refresh]
