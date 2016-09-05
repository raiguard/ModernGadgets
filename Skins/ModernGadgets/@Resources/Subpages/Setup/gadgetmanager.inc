[SectionHeaderString]
Meter=String
MeterStyle=StyleString
FontSize=15
Y=#contentMargin#
Text="Click the Gadgets you want to load"

[CpuMeterLoadButton]
Meter=String
MeterStyle=StyleString
FontColor=#colorAccent#
FontSize=12
Text="CPU Meter"
LeftMouseUpAction=[!ActivateConfig "ModernGadgets\CPU"]

[NetworkMeterLoadButton]
Meter=String
MeterStyle=StyleString
FontColor=#colorAccent#
FontSize=12
Text="Network Meter"
LeftMouseUpAction=[!ActivateConfig "ModernGadgets\Network"]

[GpuMeterLoadButton]
Meter=String
MeterStyle=StyleString
FontColor=#colorAccent#
FontSize=12
Text="GPU Meter"
LeftMouseUpAction=[!ActivateConfig "ModernGadgets\GPU"]

[DisksMeterLoadButton]
Meter=String
MeterStyle=StyleString
FontColor=#colorAccent#
FontSize=12
Text="Disks Meter"
LeftMouseUpAction=[!ActivateConfig "ModernGadgets\Disks"]

[TempString]
Meter=String
MeterStyle=StyleString
Y=10R
Text="NOTE: This is a temporary page. It will be much prettier in the future!"
