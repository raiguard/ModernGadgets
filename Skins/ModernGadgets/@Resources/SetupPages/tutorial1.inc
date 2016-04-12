[SectionHeader1String]
Meter=String
MeterStyle=StyleString | StyleStringSectionHeader
Y=#contentMargin#
Text="The Advanced Settings System"

[SectionText1String]
Meter=String
MeterStyle=StyleString | StyleStringParagraph
Text="As previously mentioned, ModernGadgets implements a brand-new advanced settings system. This system works with a file contained in Rainmeter's settings folder (#SETTINGSPATH#). This ensures that your settings are preserved across updates, and the system will even handle adding new variables to the settings file after updating. The script for this system runs once when you first start Rainmeter, so you don't have to worry about it constantly hogging your CPU power.#CRLF##CRLF#If you experience any issues with this system, please report it on the Rainmeter forums post or on the DeviantArt post. Additionally, if you would like to back up the settings file, click the button below and copy out 'ModernGadgetsSettings.inc' to a secure location."

[NextButton]
Meter=String
MeterStyle=StyleString | StyleStringButton
StringAlign=Right
X=#contentMarginRightX#
Y=(#bgHeight# - 40)
Text="Next"
LeftMouseUpAction=[!WriteKeyValue Variables page "tutorial2"][!Refresh]

[OpenFolderButton]
Meter=String
MeterStyle=StyleString | StyleStringButton
Y=r
Text="Open Folder"
LeftMouseUpAction=["#SETTINGSPATH#"]
