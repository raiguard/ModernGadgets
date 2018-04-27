; Disk O:
[DiskONameString]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskOName
Y=((#hideDiskO# = 1) ? ((#largeRowSpacing# = 1) ? -5 : -3) : #rowSpacing#)R
Text=O: %1
MouseOverAction=[!SetOption DiskONameString FontColor "#colorButtonPress#"][!UpdateMeter DiskONameString][!Redraw]
MouseLeaveAction=[!SetOption DiskONameString FontColor ""][!UpdateMeter DiskONameString][!Redraw]
LeftMouseUpAction=["O:\Windows\explorer.exe" /E,O:\]
Group=DiskO
Hidden=#hideDiskO#

[DiskOEjectButton]
Meter=Image
MeterStyle=StyleEjectButton
MouseOverAction=[!SetOption DiskOEjectButton ImageTint "#colorButtonPress#"][!UpdateMeter DiskOEjectButton][!Redraw]
MouseLeaveAction=[!SetOption DiskOEjectButton ImageTint ""][!UpdateMeter DiskOEjectButton][!Redraw]
LeftMouseUpAction=[!CommandMeasure MeasureDiskOEject "Run"]
Group=DiskO | EjectButtons
Hidden=(#hideDiskO# = 1) || ([MeasureDiskOType:] = 4) || (#showEjectButtons# = 0)

[DiskOTempString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringDiskTemp
MeasureName=MeasureDiskOTemp
Group=DiskO | DiskTemps
Hidden=(#hideDiskO# = 1) || ([MeasureDiskOType:] <> 4) || (#showDiskTemps# = 0) || ([MeasureHwinfoDetect:] = -9000)

[DiskORWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskORWTime
Text=%1%
Group=DiskO
Hidden=#hideDiskO#

[DiskOWriteArrow]
Meter=Image
MeterStyle=StyleWriteArrow
ImageTint=#colorDiskO#
Y=(((#showDiskReadWrite# = 0) && (#hideDiskO# = 0)) ? -#rowSpacing# + 1 : #rowSpacing#)R
Group=DiskO | DiskOReadWrite
Hidden=(#hideDiskO# = 1) || (#showDiskReadWrite# = 0)

[DiskOWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskOWrite:],[#fpfWriteDepth],'1k')"]B/s
Group=DiskO | DiskOReadWrite
Hidden=(#hideDiskO# = 1) || (#showDiskReadWrite# = 0)

[DiskOReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskO#
Group=DiskO | DiskOReadWrite
Hidden=(#hideDiskO# = 1) || (#showDiskReadWrite# = 0)

[DiskOReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskORead:],[#fpfReadDepth],'1k')"]B/s
Group=DiskO | DiskOReadWrite
Hidden=(#hideDiskO# = 1) || (#showDiskReadWrite# = 0)

[DiskOSpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskOSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]B / [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskOSpaceTotal:],[#fpfSpaceUsedDepth],'1k')"]B
Group=DiskO
Hidden=#hideDiskO#

[DiskOSpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskOSpaceUsage
Percentual=1
Text=%1%
Group=DiskO
Hidden=#hideDiskO#

[DiskOSpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDiskOSpaceUsage
BarColor=#colorDiskO#
Group=DiskO
Hidden=#hideDiskO#

