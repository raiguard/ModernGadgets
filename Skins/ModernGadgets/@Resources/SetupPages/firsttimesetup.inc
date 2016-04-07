[TitleString]
Meter=String
MeterStyle=StyleString
FontSize=15
FontColor=#fontColorAccent#
StringAlign=Center
X=#bgCenterX#
Y=#contentMargin#
Text="Welcome to Modern Gadgets!"

[Paragraph1String]
Meter=String
MeterStyle=StyleString | StyleStringParagraph
Text="There are still a few things to go over before you can enjoy your gadgets. To proceed with the setup tutorial, click 'next'. If you do not wish to view the tutorial, click 'skip'."

[ButtonSkipString]
Meter=String
MeterStyle=StyleString | StyleStringButton
Text="Skip"
LeftMouseUpAction=[!WriteKeyValue Variables page "loadSkins"][!Refresh]

[ButtonNextString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringButton
Text="Next"
