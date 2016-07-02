[Variables]
bgHeight=530

[SectionHeader1String]
Meter=String
MeterStyle=StyleString | StyleStringSectionHeader
Y=#contentMargin#
Text="HWiNFO Setup"

[SectionSubheader1String]
Meter=String
MeterStyle=StyleString
FontSize=10
FontColor=#colorInfo#
X=5R
Y=4r
Text="Based on jsmorley's HWiNFO tutorial"

[SectionText1String]
Meter=String
MeterStyle=StyleString | StyleStringParagraph
Text="HWiNFO is a very robust freeware system monitoring application for Windows. It provides a ton of information about your system's hardware, and can monitor and report on current status and potential problems. ModernGadgets utilizes HWiNFO for a good portion of its functionality. You can download HWiNFO from the link below.#CRLF##CRLF#Once you have downloaded, installed, and run HWiNFO, right-click on HWiNFO's tray icon, and click 'Settings'. Ensure your settings are configured as shown in the picture below (especially the highlighted settings).#CRLF##CRLF#Once finished, click OK, then right-click the tray icon again and choose 'Sensors'. Minimize the window that pops up, and all HWiNFO windows will disappear. If you configured the settings correctly, HWiNFO should now auto-start when you log in!"

[Section1Image1]
Meter=Image
ImageName=#imgPath#Setup\hwinfo3.jpg
X=(#contentMargin# + 1)
Y=3R
W=394
Antialias=1

[NextButtonString]
Meter=String
MeterStyle=StyleString | StyleStringButton
StringAlign=Right
X=#contentMarginRight#
Y=(#bgHeight# - 30)
Text="Next"
LeftMouseUpAction=[!WriteKeyValue Variables page "tutorial3"][!Refresh]

[DownloadHwinfoButtonString]
Meter=String
MeterStyle=StyleString | StyleStringButton
Y=r
Text="Download HWiNFO"
LeftMouseUpAction=["http://www.hwinfo.com/download.php"]
