[MeasureReleaseVersionAlt]
Measure=Plugin
Plugin=WebParser
UpdateRate=1000
Url="http://moderngadgets.droppages.com/"
RegExp="<p>(.*)</p>"
StringIndex=1
FinishAction=[!SetVariable releaseVer "[MeasureReleaseVersionAlt]"][!WriteKeyValue Variables releaseVer "[MeasureReleaseVersionAlt]"][!UpdateMeter VersionString][!Redraw]
Disabled=0

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

[UpdateAvailableString]
Meter=String
MeterStyle=StyleString | StyleStringCenterAlign
FontSize=12
Y=5R
Text="An update is available!"

[VersionString]
Meter=String
MeterStyle=StyleString | StyleStringCenterAlign
FontSize=10
Text="Version #releaseVer#"
DynamicVariables=1
