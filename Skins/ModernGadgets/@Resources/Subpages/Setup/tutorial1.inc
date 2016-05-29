[SectionHeader1String]
Meter=String
MeterStyle=StyleString | StyleStringSectionHeader
Y=#contentMargin#
Text="The Advanced Settings System"

[SectionText1String]
Meter=String
MeterStyle=StyleString | StyleStringParagraph
Text="As previously mentioned, ModernGadgets implements a brand-new system for handling user settings. This system works with several settings files, contained in '#SETTINGSPATH#ModernGadgetsSettings'. Since these files are external to ModernGadgets' skins folder, they will not be overwritten when you update the suite. Additionally, after updating, the files will be updated with any new values added in that update, while preserving your existing customizations. In short, this means your customizations will carry over across updates, without any intervention on your part!#CRLF##CRLF#If you experience any issues with this system, please report it on the Rainmeter forums post or on the DeviantArt post. Additionally, if you wish to create a manual backup of the settings files, click the button below and copy out the 'ModernGadgetsSettings' folder to a secure location."

[NextButton]
Meter=String
MeterStyle=StyleString | StyleStringButton
StringAlign=Right
X=#contentMarginRight#
Y=(#bgHeight# - 30)
Text="Next"
LeftMouseUpAction=[!WriteKeyValue Variables page "tutorial2"][!Refresh]

[OpenFolderButton]
Meter=String
MeterStyle=StyleString | StyleStringButton
Y=r
Text="Open Folder"
LeftMouseUpAction=["#SETTINGSPATH#"]
