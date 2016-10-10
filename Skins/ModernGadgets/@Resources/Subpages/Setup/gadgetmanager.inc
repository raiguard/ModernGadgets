[SectionHeaderString]
Meter=String
MeterStyle=StyleString
FontSize=12
X=#contentMargin#
Y=#contentMargin#
Text="Click the Gadgets you want to load"

[CpuMeterLabel]
Meter=String
MeterStyle=StyleString | StyleStringToggleLabel
Text="CPU Meter"

[CpuMeterButton]
Meter=Image
MeterStyle=StyleToggleImage
X=130
ImageName=#imgPath#Settings\0.png
LeftMouseUpAction=[!CommandMeasure MeasureGadgetsScript "ToggleCpu()"]

[NetworkMeterLabel]
Meter=String
MeterStyle=StyleString | StyleStringToggleLabel
Text="Network Meter"

[GpuMeterLabel]
Meter=String
MeterStyle=StyleString | StyleStringToggleLabel
Text="GPU Meter"

[DisksMeterLabel]
Meter=String
MeterStyle=StyleString | StyleStringToggleLabel
Text="Disks Meter"
