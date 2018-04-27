; Disk A
[DiskANameString]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskAName
Y=((#hideDiskA# = 1) ? ((#largeRowSpacing# = 1) ? -5 : -3) : #rowSpacing#)R
Text=A: %1
MouseOverAction=[!SetOption DiskANameString FontColor "#colorButtonPress#"][!UpdateMeter DiskANameString][!Redraw]
MouseLeaveAction=[!SetOption DiskANameString FontColor ""][!UpdateMeter DiskANameString][!Redraw]
LeftMouseUpAction=["C:\Windows\explorer.exe" /E,A:\]
Group=DiskA
Hidden=#hideDiskA#

[DiskAEjectButton]
Meter=Image
MeterStyle=StyleEjectButton
MouseOverAction=[!SetOption DiskAEjectButton ImageTint "#colorButtonPress#"][!UpdateMeter DiskAEjectButton][!Redraw]
MouseLeaveAction=[!SetOption DiskAEjectButton ImageTint ""][!UpdateMeter DiskAEjectButton][!Redraw]
LeftMouseUpAction=[!CommandMeasure MeasureDiskAEject "Run"]
Group=DiskA | EjectButtons
Hidden=(#hideDiskA# = 1) || ([MeasureDiskAType:] = 4) || (#showEjectButtons# = 0)

[DiskATempString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringDiskTemp
MeasureName=MeasureDiskATemp
Group=DiskA | DiskTemps
Hidden=(#hideDiskA# = 1) || ([MeasureDiskAType:] <> 4) || (#showDiskTemps# = 0) || ([MeasureHwinfoDetect:] = -9000)

[DiskARWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskARWTime
Text=%1%
Group=DiskA
Hidden=#hideDiskA#

[DiskAWriteArrow]
Meter=Image
MeterStyle=StyleWriteArrow
ImageTint=#colorDiskA#
Y=(((#showDiskReadWrite# = 0) && (#hideDiskA# = 0)) ? -#rowSpacing# + 1 : #rowSpacing#)R
Group=DiskA | DiskAReadWrite
Hidden=(#hideDiskA# = 1) || (#showDiskReadWrite# = 0)

[DiskAWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
Text=#textDiskAWrite#B/s
Group=DiskA | DiskAReadWrite
Hidden=(#hideDiskA# = 1) || (#showDiskReadWrite# = 0)

[DiskAReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskA#
Group=DiskA | DiskAReadWrite
Hidden=(#hideDiskA# = 1) || (#showDiskReadWrite# = 0)

[DiskAReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
Text=#textDiskARead#B/s
Group=DiskA | DiskAReadWrite
Hidden=(#hideDiskA# = 1) || (#showDiskReadWrite# = 0)

[DiskASpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=#textDiskASpaceUsed#B / #textDiskASpaceTotal#B
Group=DiskA
Hidden=#hideDiskA#

[DiskASpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskASpaceUsage
Percentual=1
Text=%1%
Group=DiskA
Hidden=#hideDiskA#

[DiskASpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDiskASpaceUsage
BarColor=#colorDiskA#
Group=DiskA
Hidden=#hideDiskA#

