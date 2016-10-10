[SectionHeaderString]
Meter=String
MeterStyle=StyleString | StyleStringSectionHeader
Y=#contentMargin#
Text="HWiNFO Configuration"

[HWiNFOButton]
Meter=Image
ImageName=#imgPath#HWiNFO.png
X=(#contentMarginRight# - 26)
Y=r
W=24
H=24
DynamicVariables=1
Antialias=1
LeftMouseUpAction=["http://hwinfo.com/download.php"]
ToolTipText="Go to HWiNFO download page"

[Paragraph1String]
Meter=String
MeterStyle=StyleString | StyleStringParagraph
Y=R
Text="ModernGadgets utilizes HWiNFO to gather information on your system. It is not required for all features, but it is highly recommended. Click the logo to visit the download page.#CRLF##CRLF#Once you have installed and opened HWiNFO, right-click on HWiNFO's tray icon and click Settings. You will see a screen similar to the one below. Configure your settings to match the image, paying extra attention to the settings within the red box."

[Image1]
Meter=Image
ImageName=#imgPath#Setup\hwinfo2edited.png
X=(#contentMargin# + 4)
Y=3R
W=277
H=177
Antialias=1

[Paragraph2String]
Meter=String
MeterStyle=StyleString | StyleStringParagraph
X=4R
Y=7r
W=(#contentMarginRight# - 2 - [Paragraph2String:X])
DynamicVariables=1
Text="Once you have set the settings as shown, click Ok. Then, right-click the tray#CRLF#icon again and click Sensors. Minimize that window and it'll disappear."

[OpenImageButton]
Meter=String
MeterStyle=StyleString
FontSize=10
FontColor=#colorAccent#
X=(#contentMargin# + 2)
Y=([Image1:Y] + [Image1:H] + 5)
DynamicVariables=1
MouseOverAction=[!SetOption OpenImageButton FontColor "#colorButtonPress#"][!UpdateMeter OpenImageButton][!Redraw]
MouseLeaveAction=[!SetOption OpenImageButton FontColor "#colorAccent#"][!UpdateMeter OpenImageButton][!Redraw]
LeftMouseUpAction=["#imgPath#Setup\hwinfo2edited.png"]
Text="View Full Size"
ToolTipText="Open the above image in your photo viewer"

[NextButton]
Meter=String
MeterStyle=StyleString | StyleStringButton
Text="Next"

[NextButtonImage]
Meter=Image
MeterStyle=StyleStringButtonImage
MouseOverAction=[!SetOption NextButtonImage ImageTint "#*colorButtonPress*#"][!UpdateMeter NextButtonImage][!Redraw]
MouseLeaveAction=[!SetOption NextButtonImage ImageTint ""][!UpdateMeter NextButtonImage][!Redraw]
LeftMouseUpAction=[!WriteKeyValue Variables page "hwinfo2"][!Refresh]
