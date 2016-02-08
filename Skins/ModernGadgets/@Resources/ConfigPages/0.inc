; MODERNGADGETS CONFIG "ABOUT" PAGE

; ========= Local Measures =========

[ScriptUpdateChecker]
Measure=Script
ScriptFile=#@#Scripts\UpdateChecker.lua

[MeasureReleaseVersion]
Measure=Plugin
Plugin=WebParser
UpdateRate=1000
Url="https://github.com/iamanai/ModernGadgets/blob/master/ReleaseVersion.txt"
RegExp="(?siU)<td id="LC1" class="blob-code blob-code-inner js-file-line">(.*)</td>.*"
StringIndex=1
IfCondition=1
IfTrueAction=[!SetOption UpdateCheckerString MeterStyle "StyleString | StyleStringPanelContent | StyleUpdateCheckerConnecting"][!Redraw]
FinishAction=[!EnableMeasure MeasureVersionCheck]
Disabled=1

[MeasureVersionCheck]
Measure=Calc
Formula=1
IfCondition=1
IfTrueAction=[!CommandMeasure ScriptUpdateChecker "CheckForUpdate('#version#', '[MeasureReleaseVersion]', 'UpdateCheckerString')"]
Disabled=1

; ========= Local Styles =========

[StyleUpdateCheckerButton]
FontColor=#fontColorAccent#
Text="Check for updates"
LeftMouseUpAction=[!EnableMeasure MeasureReleaseVersion]

[StyleUpdateCheckerConnecting]
FontColor=#fontColorDim#
Text="Connecting to GitHub..."

[StyleUpdateCheckerYes]
Text="v[MeasureReleaseVersion] is avaliable! Get it on DeviantArt."
DynamicVariables=1

[StyleUpdateCheckerNo]
FontColor=#fontColorDim#
Text="ModernGadgets is up to date"

[StyleUpdateCheckerDev]
FontColor=#fontColorDim#
Text="Using development version"

; ----- Subpage Indicator -----

[SubpageIndicatorTop]
Meter=Image
MeterStyle=StyleSubpageIndicatorTop
Y=([NavBarButtonAboutString:Y] + 3)
DynamicVariables=1

[SubpageIndicatorBottom]
Meter=Image
MeterStyle=StyleSubpageIndicatorBottom
Y=[SubpageIndicatorTop:H]r
DynamicVariables=1

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

; ----- Attributions, Update, Versions notice -----

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
Y=10R

[VersionsInfoString]
Meter=String
MeterStyle=StyleString | StyleStringPanelContent
FontColor=#fontColorDim#
ClipString=2
Y=10R
W=((#bgWidth# + 5) - #contentMargin# - (#navBarSeparatorX# + 10) + 4)
Text="NOTICE: It is impossible for one developer to thoroughly test everything in a skin suite this complex. If you would like to become a beta tester, please visit the GitHub repository (link above) and clone the development branch to your skins folder. Happy testing!#CRLF##CRLF#Additionally, if you find any bugs, inconsistencies, or mistakes please leave a comment on the DeviantArt page or the Rainmeter Forums post so it can be patched!"
