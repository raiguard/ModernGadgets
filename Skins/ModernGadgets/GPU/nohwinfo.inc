; MODERNGADGETS GPU METER NO HWINFO PAGE
; What GPU meter displays if HWiNFO is not detected

[MeasureHwinfoDetectSingle]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-Host0-GPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-Host0-GPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-Host0-GPU0-Temp#
HWiNFOLogHandler=2
HWiNFOType=CurrentValue
IfCondition=MeasureHwinfoDetectSingle = -9000
IfFalseAction=[!WriteKeyValue Variables page "single"][!Refresh]
Disabled=#dualGpuMode#

[MeasureHwinfoDetectDual]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-Host0-GPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-Host0-GPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-Host0-GPU0-Temp#
HWiNFOLogHandler=2
HWiNFOType=CurrentValue
IfCondition=MeasureHwinfoDetectDual = -9000
IfFalseAction=[!WriteKeyValue Variables page "dual"][!Refresh]
Disabled=(#dualGpuMode# = 0)

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
