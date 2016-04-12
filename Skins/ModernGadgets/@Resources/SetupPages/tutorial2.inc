[Variables]
bgHeight=520

[SectionHeader1String]
Meter=String
MeterStyle=StyleString | StyleStringSectionHeader
Y=#contentMargin#
Text="HWiNFO Setup"

[SectionText1String]
Meter=String
MeterStyle=StyleString | StyleStringParagraph
Text="ModernGadgets utilizes HWiNFO to gather a large variety of information. If you haven't already, please download HWiNFO from the link provided below, install it, and run the program (requires administrative priveledges).#CRLF##CRLF#Once HWiNFO is running, click the 'Program' context menu button, then click 'Settings'. You will see a screen similar to the below image. Set the checkboxes within the red rectangle EXACTLY as they appear in the image. Then click 'OK'. Next, click the 'Sensors' button (with the yellow lightning bolt) and minimize the window that pops up. Both windows will disappear and will now run in the background automatically every time you log into your user."

[Section1Image1]
Meter=Image
ImageName=#@#Images\Setup\hwinfo2.png
X=#contentMargin#
Y=10R
W=390
Antialias=1

[NextButtonString]
Meter=String
MeterStyle=StyleString | StyleStringButton
StringAlign=Right
X=#contentMarginRightX#
Y=(#bgHeight# - 40)
Text="Next"
LeftMouseUpAction=[!WriteKeyValue Variables page "tutorial3"][!Refresh]

[DownloadHwinfoButtonString]
Meter=String
MeterStyle=StyleString | StyleStringButton
Y=r
Text="Download HWiNFO"
LeftMouseUpAction=["http://www.hwinfo.com/download.php"]
