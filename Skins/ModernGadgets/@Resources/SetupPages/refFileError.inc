[ErrorString]
Meter=String
MeterStyle=StyleString
StringStyle=Bold
FontColor=240,30,10,240
FontSize=12
Y=#contentMargin#
Text="ERROR: REFERENCE FILE NOT FOUND"

[ProvideFeedbackString]
Meter=String
MeterStyle=StyleString | StyleStringParagraph
Text="File '#@#ReferenceSettingsFile.inc' could not be found. Please reinstall ModernGadgets or manually replace the file to resolve this issue.#CRLF##CRLF#This file is used to cross-examine your settings file after updating the skin suite to a newer version. It is what allows the system to add the new settings while preserving your existing customizations."

[OpenResourcesButtonString]
Meter=String
MeterStyle=StyleString | StyleStringButton
FontSize=11
Y=5R
Text="Open @Resources folder"
LeftMouseUpAction=["#@#"]
