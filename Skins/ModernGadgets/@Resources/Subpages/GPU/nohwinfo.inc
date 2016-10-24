; MODERNGADGETS GPU METER NO HWINFO PAGE
; What GPU meter displays if HWiNFO is not detected

[MeasureHwinfoDetect]
Measure=String
String=[MeasureGpu0Name]
IfMatch=HWI_ERROR_NOT_CONNECTED
IfNotMatchAction=[!WriteKeyValue Variables page "main"][!Refresh]
DynamicVariables=1

[NoHwinfoWarningString]
Meter=String
MeterStyle=StyleString | StyleStringCenterAlign
FontColor=#colorButtonPress#
Text="HWINFO NOT DETECTED"

[NoHwinfoInfoString]
Meter=String
MeterStyle=StyleString | StyleStringParagraph
FontSize=8
Text="GPU Meter relies on HWiNFO to function. Please make sure you have configured HWiNFO as per the setup tutorial. Once HWiNFO is running properly, middle-click here to refresh GPU Meter."
