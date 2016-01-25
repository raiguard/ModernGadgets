; MODERNGADGETS CONFIG "ABOUT" PAGE

; ========= Local Measures =========

[MeasureReleaseVersion]
Measure=Plugin
Plugin=WebParser
UpdateRate=1000
Url="https://github.com/iamanai/ModernGadgets/blob/master/ReleaseVersion.txt"
RegExp="(?siU)<td id="LC1" class="blob-code blob-code-inner js-file-line">(.*)</td>.*"
StringIndex=1
FinishAction=[!EnableMeasure MeasureVersionCheck]

[MeasureCurrentReleaseVerAbsolute]
Measure=Plugin
Plugin=WebParser
Url=[MeasureIPAddress]
StringIndex=1
Substitute=".":"","-d":""

[MeasureVersionCheck]
Measure=Calc
Formula=[MeasureCurrentReleaseVerAbsolute] - [MeasureVersionAbsolute]
IfAboveValue=0
IfAboveAction=[!SetOption UpdateCheckerString MeterStyle "StyleText | StyleUpdateCheckerYes"][!Redraw]
IfEqualValue=0
IfEqualAction=[!SetOption UpdateCheckerString MeterStyle "StyleText | StyleUpdateCheckerNo"][!Redraw]
IfBelowValue=0
IfBelowAction=[!SetOption UpdateCheckerString MeterStyle "StyleText | StyleUpdateCheckerDev"][!Redraw]
DynamicVariables=1
Disabled=1

; ========= Local Styles =========

[StyleUpdateCheckerButton]
FontColor=#fontColorAccent#
Text="Check for updates"
LeftMouseUpAction=[!EnableMeasure MeasureVersionCheck][!SetOption UpdateCheckerString MeterStyle "StyleString | StyleStringPanelContent | StyleUpdateCheckerConnecting"]

[StyleUpdateCheckerConnecting]
FontColor=#fontColorDim#
Text="Connecting to GitHub..."

[StyleUpdateCheckerYes]
Text="v[MeasureCurrentReleaseVer] is avaliable for download!"
DynamicVariables=1

[StyleUpdateCheckerNo]
FontColor=#fontColorDim#
Text="illustro Gadgets is up to date"

[StyleUpdateCheckerDev]
FontColor=#fontColorDim#
Text="Using development version"

; ----- Subpage Indicator -----

[SubpageIndicatorTop]
Meter=Image
MeterStyle=StyleSubpageIndicatorTop
Y=([NavBarButtonAboutString:Y] + 3)

[SubpageIndicatorBottom]
Meter=Image
MeterStyle=StyleSubpageIndicatorBottom
Y=[SubpageIndicatorTop:H]r

[SkinPackNameString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent
FontSize=20
FontColor=#fontColorAccent#
Y=([NavBarSeparator:Y] + 5)
Text="Modern Gadgets"

[SkinPackVersionString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent
FontSize=12
Y=R
FontColor=#fontColorDim#
Text="Version #version#"

[InfoString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent
ClipString=2
W=((#bgWidth# + 5) - #contentMargin# - (#navBarSeparatorX# + 10) + 4)
Text="This skin allows you to configure settings for ModernGadgets. All the skins are very modular and customizable, so it is recommended that you go through all the settings and make sure you have exactly what you want. Additionally, you can open the variables files directly for even more customization possibilities.#CRLF##CRLF#If you are using ModernGadgets for the first time, please click the "HWiNFO" button and follow the instructions there."

; ----- Links Bar -----

[LinksBarButtonDeviantart]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent
FontColor=#fontColorAccent#
FontSize=12
X=(#navBarSeparatorX# + 17)
Y=15R
Text="DeviantArt"
ToolTipText="NOT YET IMPLEMENTED"

[LinksBarSeparatorDeviantArt]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent
FontColor=#fontColorDim#
FontSize=12
X=2R
Y=-1r
Text="|"

[LinksBarButtonGitHub]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent
FontColor=#fontColorAccent#
FontSize=12
X=R
Y=1r
Text="GitHub"
LeftMouseUpAction=["https://github.com/iamanai/ModernGadgets"]
ToolTipText="Visit ModernGadgets' GitHub Repository"

[LinksBarSeparatorGitHub]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent
FontColor=#fontColorDim#
FontSize=12
X=2R
Y=-1r
Text="|"

[LinksBarButtonRmForums]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent
FontColor=#fontColorAccent#
FontSize=12
X=R
Y=1r
Text="Rainmeter Forums"
ToolTipText="NOT YET IMPLEMENTED"

[LinksBarSeparatorForums]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent
FontColor=#fontColorDim#
FontSize=12
X=2R
Y=-1r
Text="|"

[LinksBarButtonTwitter]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent
FontColor=#fontColorAccent#
FontSize=12
X=R
Y=1r
Text="Twitter"
LeftMouseUpAction=["https://twitter.com/iamanai_"]
ToolTipText="iamanai's Twitter gives you insight into the developer's everyday life, and sneak peeks at upcoming projects!"

; ----- Attributions, Update -----

[AttributionsString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent
FontColor=#fontColorDim#
ClipString=2
Y=10R
W=((#bgWidth# + 5) - #contentMargin# - (#navBarSeparatorX# + 10) + 4)
Text="ATTRIBUTIONS#CRLF# - SilverAzide, for the ActiveNet plugin and HWiNFO How-to#CRLF# - Stangowner, for the HWiNFO plugin#CRLF# - Kaelri, for RainFile#CRLF# - Jeffrey Morely, for RainRGB and Rainmeter"

; Update Checker
[UpdateCheckerString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent | StyleUpdateCheckerButton
FontSize=10
Y=20R
