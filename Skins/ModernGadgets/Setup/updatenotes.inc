[UpdateNoteTitleString]
Meter=String
MeterStyle=StyleString | StyleStringSectionHeader
Y=(#contentMargin# + 1)
Text="NOTICE:"

[UpdateNoteString]
Meter=String
MeterStyle=StyleString | StyleStringParagraph
Text="If you are updating from a release candidate version, there is a chance that CPU meter will display 8 cores, instead of adjusting to your system. To fix this, right-click on the gadget manager, and under custom skin actions, click "DEBUG: Force settings update". This will force the settings protocol script to update the settings files, removing some duplicate variables that would cause this problem.#CRLF##CRLF#A permanent fix for this problem, as well as many others relating to the settings system, will be fixed in the next update. I apologize for the inconvenience."

[NextButtonString]
Meter=String
MeterStyle=StyleString | StyleStringArrowButtonLabel
Y=40R
Text="Proceed to Gadget Manager"

[NextButton]
Meter=Image
MeterStyle=StyleStringArrowButton
MouseOverAction=[!SetOption NextButton ImageTint "#colorButtonPress#"][!UpdateMeter NextButton][!Redraw]
MouseLeaveAction=[!SetOption NextButton ImageTint ""][!UpdateMeter NextButton][!Redraw]
LeftMouseUpAction=[!WriteKeyValue Variables page "gadgetmanager"][!Refresh]
