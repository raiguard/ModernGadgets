[ErrorString]
Meter=String
MeterStyle=StyleString
StringStyle=Bold
FontColor=240,30,10,240
FontSize=12
Y=#contentMargin#
Text="ERROR: REFERENCE FILE(S) NOT FOUND"

[ProvideFeedbackString]
Meter=String
MeterStyle=StyleString | StyleStringParagraph
Text="One of the required files in '#@#ReferenceFiles' could not be found. Please reinstall ModernGadgets or manually replace the missing file(s) to resolve this issue.#CRLF##CRLF#These files are used to construct and/or update the actual settings files contained in '#SETTINGSPATH#ModernGadgetsSettings'."

[OpenResourcesButtonString]
Meter=String
MeterStyle=StyleString | StyleStringButton
FontSize=11
Y=5R
Text="Open @Resources folder"
LeftMouseUpAction=["#@#"]
