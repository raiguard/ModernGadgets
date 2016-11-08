; MODERNGADGETS GPU METER NO HWINFO PAGE
; What GPU meter displays if HWiNFO is not detected

[MeasureHwinfoDetect]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-GPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-GPU0-Temp#
HWiNFOType=CurrentValue
IfCondition=MeasureHwinfoDetect = -9000
IfFalseAction=[!WriteKeyValue Variables page "main"][!Refresh]

[NoHwinfoWarningString]
Meter=String
MeterStyle=StyleString | StyleStringCenterAlign
FontColor=#colorButtonPress#
Text="HWINFO NOT DETECTED"

[NoHwinfoInfoString]
Meter=String
MeterStyle=StyleString | StyleStringParagraph
FontFace=Roboto
FontSize=8
Text="GPU Meter relies on HWiNFO to function. Please make sure you have configured HWiNFO as per the setup tutorial. Once HWiNFO is running properly, this gadget will automatically refresh."
