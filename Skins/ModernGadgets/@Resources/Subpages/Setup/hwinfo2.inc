[SectionHeaderString]
Meter=String
MeterStyle=StyleString | StyleStringSectionHeader
Y=#contentMargin#
Text="HWiNFO Plugin Configuration"

[Paragraph1String]
Meter=String
MeterStyle=StyleString | StyleStringParagraph
Y=2R
Text="Now comes the hard part: Configuring the HWiNFO plugin to work with the gadgets. Herein is a brief rundown of how to use the HWiNFO configuration tool, accessed through the wrench icon on any of the gadgets.#CRLF##CRLF#There are three things you need to open: The HWiNFO sensors window (which you just minimized a few seconds ago), the HWiNFO Configuration Tool, and the HWiNFO Shared Memory Viewer (accessed by clicking the HWiNFO logo in the config tool). You will also need to open the gadget(s) you wish to configure."

; [NextButton]
; Meter=String
; MeterStyle=StyleString | StyleStringButton
; Text="Next"
;
; [NextButtonImage]
; Meter=Image
; MeterStyle=StyleStringButtonImage
; MouseOverAction=[!SetOption NextButtonImage ImageTint "#*colorButtonPress*#"][!UpdateMeter NextButtonImage][!Redraw]
; MouseLeaveAction=[!SetOption NextButtonImage ImageTint ""][!UpdateMeter NextButtonImage][!Redraw]
; LeftMouseUpAction=[!WriteKeyValue Variables page "gadgetmanager"][!Refresh]
