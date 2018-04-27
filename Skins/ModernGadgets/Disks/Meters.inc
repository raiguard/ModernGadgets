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
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskAWrite:],[#fpfWriteDepth],'1k')"]B/s
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
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskARead:],[#fpfReadDepth],'1k')"]B/s
Group=DiskA | DiskAReadWrite
Hidden=(#hideDiskA# = 1) || (#showDiskReadWrite# = 0)

[DiskASpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskASpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]B / [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskASpaceTotal:],[#fpfSpaceUsedDepth],'1k')"]B
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

; Disk B:
[DiskBNameString]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskBName
Y=((#hideDiskB# = 1) ? ((#largeRowSpacing# = 1) ? -5 : -3) : #rowSpacing#)R
Text=B: %1
MouseOverAction=[!SetOption DiskBNameString FontColor "#colorButtonPress#"][!UpdateMeter DiskBNameString][!Redraw]
MouseLeaveAction=[!SetOption DiskBNameString FontColor ""][!UpdateMeter DiskBNameString][!Redraw]
LeftMouseUpAction=["C:\Windows\explorer.exe" /E,B:\]
Group=DiskB
Hidden=#hideDiskB#

[DiskBEjectButton]
Meter=Image
MeterStyle=StyleEjectButton
MouseOverAction=[!SetOption DiskBEjectButton ImageTint "#colorButtonPress#"][!UpdateMeter DiskBEjectButton][!Redraw]
MouseLeaveAction=[!SetOption DiskBEjectButton ImageTint ""][!UpdateMeter DiskBEjectButton][!Redraw]
LeftMouseUpAction=[!CommandMeasure MeasureDiskBEject "Run"]
Group=DiskB | EjectButtons
Hidden=(#hideDiskB# = 1) || ([MeasureDiskBType:] = 4) || (#showEjectButtons# = 0)

[DiskBTempString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringDiskTemp
MeasureName=MeasureDiskBTemp
Group=DiskB | DiskTemps
Hidden=(#hideDiskB# = 1) || ([MeasureDiskBType:] <> 4) || (#showDiskTemps# = 0) || ([MeasureHwinfoDetect:] = -9000)

[DiskBRWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskBRWTime
Text=%1%
Group=DiskB
Hidden=#hideDiskB#

[DiskBWriteArrow]
Meter=Image
MeterStyle=StyleWriteArrow
ImageTint=#colorDiskB#
Y=(((#showDiskReadWrite# = 0) && (#hideDiskB# = 0)) ? -#rowSpacing# + 1 : #rowSpacing#)R
Group=DiskB | DiskBReadWrite
Hidden=(#hideDiskB# = 1) || (#showDiskReadWrite# = 0)

[DiskBWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskBWrite:],[#fpfWriteDepth],'1k')"]B/s
Group=DiskB | DiskBReadWrite
Hidden=(#hideDiskB# = 1) || (#showDiskReadWrite# = 0)

[DiskBReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskB#
Group=DiskB | DiskBReadWrite
Hidden=(#hideDiskB# = 1) || (#showDiskReadWrite# = 0)

[DiskBReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskBRead:],[#fpfReadDepth],'1k')"]B/s
Group=DiskB | DiskBReadWrite
Hidden=(#hideDiskB# = 1) || (#showDiskReadWrite# = 0)

[DiskBSpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskBSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]B / [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskBSpaceTotal:],[#fpfSpaceUsedDepth],'1k')"]B
Group=DiskB
Hidden=#hideDiskB#

[DiskBSpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskBSpaceUsage
Percentual=1
Text=%1%
Group=DiskB
Hidden=#hideDiskB#

[DiskBSpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDiskBSpaceUsage
BarColor=#colorDiskB#
Group=DiskB
Hidden=#hideDiskB#

; Disk C:
[DiskCNameString]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskCName
Y=((#hideDiskC# = 1) ? ((#largeRowSpacing# = 1) ? -5 : -3) : #rowSpacing#)R
Text=C: %1
MouseOverAction=[!SetOption DiskCNameString FontColor "#colorButtonPress#"][!UpdateMeter DiskCNameString][!Redraw]
MouseLeaveAction=[!SetOption DiskCNameString FontColor ""][!UpdateMeter DiskCNameString][!Redraw]
LeftMouseUpAction=["C:\Windows\explorer.exe" /E,C:\]
Group=DiskC
Hidden=#hideDiskC#

[DiskCEjectButton]
Meter=Image
MeterStyle=StyleEjectButton
MouseOverAction=[!SetOption DiskCEjectButton ImageTint "#colorButtonPress#"][!UpdateMeter DiskCEjectButton][!Redraw]
MouseLeaveAction=[!SetOption DiskCEjectButton ImageTint ""][!UpdateMeter DiskCEjectButton][!Redraw]
LeftMouseUpAction=[!CommandMeasure MeasureDiskCEject "Run"]
Group=DiskC | EjectButtons
Hidden=(#hideDiskC# = 1) || ([MeasureDiskCType:] = 4) || (#showEjectButtons# = 0)

[DiskCTempString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringDiskTemp
MeasureName=MeasureDiskCTemp
Group=DiskC | DiskTemps
Hidden=(#hideDiskC# = 1) || ([MeasureDiskCType:] <> 4) || (#showDiskTemps# = 0) || ([MeasureHwinfoDetect:] = -9000)

[DiskCRWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskCRWTime
Text=%1%
Group=DiskC
Hidden=#hideDiskC#

[DiskCWriteArrow]
Meter=Image
MeterStyle=StyleWriteArrow
ImageTint=#colorDiskC#
Y=(((#showDiskReadWrite# = 0) && (#hideDiskC# = 0)) ? -#rowSpacing# + 1 : #rowSpacing#)R
Group=DiskC | DiskCReadWrite
Hidden=(#hideDiskC# = 1) || (#showDiskReadWrite# = 0)

[DiskCWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskCWrite:],[#fpfWriteDepth],'1k')"]B/s
Group=DiskC | DiskCReadWrite
Hidden=(#hideDiskC# = 1) || (#showDiskReadWrite# = 0)

[DiskCReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskC#
Group=DiskC | DiskCReadWrite
Hidden=(#hideDiskC# = 1) || (#showDiskReadWrite# = 0)

[DiskCReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskCRead:],[#fpfReadDepth],'1k')"]B/s
Group=DiskC | DiskCReadWrite
Hidden=(#hideDiskC# = 1) || (#showDiskReadWrite# = 0)

[DiskCSpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskCSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]B / [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskCSpaceTotal:],[#fpfSpaceUsedDepth],'1k')"]B
Group=DiskC
Hidden=#hideDiskC#

[DiskCSpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskCSpaceUsage
Percentual=1
Text=%1%
Group=DiskC
Hidden=#hideDiskC#

[DiskCSpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDiskCSpaceUsage
BarColor=#colorDiskC#
Group=DiskC
Hidden=#hideDiskC#

; Disk D:
[DiskDNameString]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskDName
Y=((#hideDiskD# = 1) ? ((#largeRowSpacing# = 1) ? -5 : -3) : #rowSpacing#)R
Text=D: %1
MouseOverAction=[!SetOption DiskDNameString FontColor "#colorButtonPress#"][!UpdateMeter DiskDNameString][!Redraw]
MouseLeaveAction=[!SetOption DiskDNameString FontColor ""][!UpdateMeter DiskDNameString][!Redraw]
LeftMouseUpAction=["D:\Windows\explorer.exe" /E,D:\]
Group=DiskD
Hidden=#hideDiskD#

[DiskDEjectButton]
Meter=Image
MeterStyle=StyleEjectButton
MouseOverAction=[!SetOption DiskDEjectButton ImageTint "#colorButtonPress#"][!UpdateMeter DiskDEjectButton][!Redraw]
MouseLeaveAction=[!SetOption DiskDEjectButton ImageTint ""][!UpdateMeter DiskDEjectButton][!Redraw]
LeftMouseUpAction=[!CommandMeasure MeasureDiskDEject "Run"]
Group=DiskD | EjectButtons
Hidden=(#hideDiskD# = 1) || ([MeasureDiskDType:] = 4) || (#showEjectButtons# = 0)

[DiskDTempString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringDiskTemp
MeasureName=MeasureDiskDTemp
Group=DiskD | DiskTemps
Hidden=(#hideDiskD# = 1) || ([MeasureDiskDType:] <> 4) || (#showDiskTemps# = 0) || ([MeasureHwinfoDetect:] = -9000)

[DiskDRWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskDRWTime
Text=%1%
Group=DiskD
Hidden=#hideDiskD#

[DiskDWriteArrow]
Meter=Image
MeterStyle=StyleWriteArrow
ImageTint=#colorDiskD#
Y=(((#showDiskReadWrite# = 0) && (#hideDiskD# = 0)) ? -#rowSpacing# + 1 : #rowSpacing#)R
Group=DiskD | DiskDReadWrite
Hidden=(#hideDiskD# = 1) || (#showDiskReadWrite# = 0)

[DiskDWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskDWrite:],[#fpfWriteDepth],'1k')"]B/s
Group=DiskD | DiskDReadWrite
Hidden=(#hideDiskD# = 1) || (#showDiskReadWrite# = 0)

[DiskDReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskD#
Group=DiskD | DiskDReadWrite
Hidden=(#hideDiskD# = 1) || (#showDiskReadWrite# = 0)

[DiskDReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskDRead:],[#fpfReadDepth],'1k')"]B/s
Group=DiskD | DiskDReadWrite
Hidden=(#hideDiskD# = 1) || (#showDiskReadWrite# = 0)

[DiskDSpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskDSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]B / [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskDSpaceTotal:],[#fpfSpaceUsedDepth],'1k')"]B
Group=DiskD
Hidden=#hideDiskD#

[DiskDSpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskDSpaceUsage
Percentual=1
Text=%1%
Group=DiskD
Hidden=#hideDiskD#

[DiskDSpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDiskDSpaceUsage
BarColor=#colorDiskD#
Group=DiskD
Hidden=#hideDiskD#

; Disk E:
[DiskENameString]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskEName
Y=((#hideDiskE# = 1) ? ((#largeRowSpacing# = 1) ? -5 : -3) : #rowSpacing#)R
Text=E: %1
MouseOverAction=[!SetOption DiskENameString FontColor "#colorButtonPress#"][!UpdateMeter DiskENameString][!Redraw]
MouseLeaveAction=[!SetOption DiskENameString FontColor ""][!UpdateMeter DiskENameString][!Redraw]
LeftMouseUpAction=["E:\Windows\explorer.exe" /E,E:\]
Group=DiskE
Hidden=#hideDiskE#

[DiskEEjectButton]
Meter=Image
MeterStyle=StyleEjectButton
MouseOverAction=[!SetOption DiskEEjectButton ImageTint "#colorButtonPress#"][!UpdateMeter DiskEEjectButton][!Redraw]
MouseLeaveAction=[!SetOption DiskEEjectButton ImageTint ""][!UpdateMeter DiskEEjectButton][!Redraw]
LeftMouseUpAction=[!CommandMeasure MeasureDiskEEject "Run"]
Group=DiskE | EjectButtons
Hidden=(#hideDiskE# = 1) || ([MeasureDiskEType:] = 4) || (#showEjectButtons# = 0)

[DiskETempString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringDiskTemp
MeasureName=MeasureDiskETemp
Group=DiskE | DiskTemps
Hidden=(#hideDiskE# = 1) || ([MeasureDiskEType:] <> 4) || (#showDiskTemps# = 0) || ([MeasureHwinfoDetect:] = -9000)

[DiskERWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskERWTime
Text=%1%
Group=DiskE
Hidden=#hideDiskE#

[DiskEWriteArrow]
Meter=Image
MeterStyle=StyleWriteArrow
ImageTint=#colorDiskE#
Y=(((#showDiskReadWrite# = 0) && (#hideDiskE# = 0)) ? -#rowSpacing# + 1 : #rowSpacing#)R
Group=DiskE | DiskEReadWrite
Hidden=(#hideDiskE# = 1) || (#showDiskReadWrite# = 0)

[DiskEWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskEWrite:],[#fpfWriteDepth],'1k')"]B/s
Group=DiskE | DiskEReadWrite
Hidden=(#hideDiskE# = 1) || (#showDiskReadWrite# = 0)

[DiskEReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskE#
Group=DiskE | DiskEReadWrite
Hidden=(#hideDiskE# = 1) || (#showDiskReadWrite# = 0)

[DiskEReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskERead:],[#fpfReadDepth],'1k')"]B/s
Group=DiskE | DiskEReadWrite
Hidden=(#hideDiskE# = 1) || (#showDiskReadWrite# = 0)

[DiskESpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskESpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]B / [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskESpaceTotal:],[#fpfSpaceUsedDepth],'1k')"]B
Group=DiskE
Hidden=#hideDiskE#

[DiskESpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskESpaceUsage
Percentual=1
Text=%1%
Group=DiskE
Hidden=#hideDiskE#

[DiskESpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDiskESpaceUsage
BarColor=#colorDiskE#
Group=DiskE
Hidden=#hideDiskE#

; Disk F:
[DiskFNameString]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskFName
Y=((#hideDiskF# = 1) ? ((#largeRowSpacing# = 1) ? -5 : -3) : #rowSpacing#)R
Text=F: %1
MouseOverAction=[!SetOption DiskFNameString FontColor "#colorButtonPress#"][!UpdateMeter DiskFNameString][!Redraw]
MouseLeaveAction=[!SetOption DiskFNameString FontColor ""][!UpdateMeter DiskFNameString][!Redraw]
LeftMouseUpAction=["F:\Windows\explorer.exe" /E,F:\]
Group=DiskF
Hidden=#hideDiskF#

[DiskFEjectButton]
Meter=Image
MeterStyle=StyleEjectButton
MouseOverAction=[!SetOption DiskFEjectButton ImageTint "#colorButtonPress#"][!UpdateMeter DiskFEjectButton][!Redraw]
MouseLeaveAction=[!SetOption DiskFEjectButton ImageTint ""][!UpdateMeter DiskFEjectButton][!Redraw]
LeftMouseUpAction=[!CommandMeasure MeasureDiskFEject "Run"]
Group=DiskF | EjectButtons
Hidden=(#hideDiskF# = 1) || ([MeasureDiskFType:] = 4) || (#showEjectButtons# = 0)

[DiskFTempString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringDiskTemp
MeasureName=MeasureDiskFTemp
Group=DiskF | DiskTemps
Hidden=(#hideDiskF# = 1) || ([MeasureDiskFType:] <> 4) || (#showDiskTemps# = 0) || ([MeasureHwinfoDetect:] = -9000)

[DiskFRWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskFRWTime
Text=%1%
Group=DiskF
Hidden=#hideDiskF#

[DiskFWriteArrow]
Meter=Image
MeterStyle=StyleWriteArrow
ImageTint=#colorDiskF#
Y=(((#showDiskReadWrite# = 0) && (#hideDiskF# = 0)) ? -#rowSpacing# + 1 : #rowSpacing#)R
Group=DiskF | DiskFReadWrite
Hidden=(#hideDiskF# = 1) || (#showDiskReadWrite# = 0)

[DiskFWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskFWrite:],[#fpfWriteDepth],'1k')"]B/s
Group=DiskF | DiskFReadWrite
Hidden=(#hideDiskF# = 1) || (#showDiskReadWrite# = 0)

[DiskFReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskF#
Group=DiskF | DiskFReadWrite
Hidden=(#hideDiskF# = 1) || (#showDiskReadWrite# = 0)

[DiskFReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskFRead:],[#fpfReadDepth],'1k')"]B/s
Group=DiskF | DiskFReadWrite
Hidden=(#hideDiskF# = 1) || (#showDiskReadWrite# = 0)

[DiskFSpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskFSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]B / [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskFSpaceTotal:],[#fpfSpaceUsedDepth],'1k')"]B
Group=DiskF
Hidden=#hideDiskF#

[DiskFSpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskFSpaceUsage
Percentual=1
Text=%1%
Group=DiskF
Hidden=#hideDiskF#

[DiskFSpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDiskFSpaceUsage
BarColor=#colorDiskF#
Group=DiskF
Hidden=#hideDiskF#

; Disk G:
[DiskGNameString]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskGName
Y=((#hideDiskG# = 1) ? ((#largeRowSpacing# = 1) ? -5 : -3) : #rowSpacing#)R
Text=G: %1
MouseOverAction=[!SetOption DiskGNameString FontColor "#colorButtonPress#"][!UpdateMeter DiskGNameString][!Redraw]
MouseLeaveAction=[!SetOption DiskGNameString FontColor ""][!UpdateMeter DiskGNameString][!Redraw]
LeftMouseUpAction=["G:\Windows\explorer.exe" /E,G:\]
Group=DiskG
Hidden=#hideDiskG#

[DiskGEjectButton]
Meter=Image
MeterStyle=StyleEjectButton
MouseOverAction=[!SetOption DiskGEjectButton ImageTint "#colorButtonPress#"][!UpdateMeter DiskGEjectButton][!Redraw]
MouseLeaveAction=[!SetOption DiskGEjectButton ImageTint ""][!UpdateMeter DiskGEjectButton][!Redraw]
LeftMouseUpAction=[!CommandMeasure MeasureDiskGEject "Run"]
Group=DiskG | EjectButtons
Hidden=(#hideDiskG# = 1) || ([MeasureDiskGType:] = 4) || (#showEjectButtons# = 0)

[DiskGTempString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringDiskTemp
MeasureName=MeasureDiskGTemp
Group=DiskG | DiskTemps
Hidden=(#hideDiskG# = 1) || ([MeasureDiskGType:] <> 4) || (#showDiskTemps# = 0) || ([MeasureHwinfoDetect:] = -9000)

[DiskGRWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskGRWTime
Text=%1%
Group=DiskG
Hidden=#hideDiskG#

[DiskGWriteArrow]
Meter=Image
MeterStyle=StyleWriteArrow
ImageTint=#colorDiskG#
Y=(((#showDiskReadWrite# = 0) && (#hideDiskG# = 0)) ? -#rowSpacing# + 1 : #rowSpacing#)R
Group=DiskG | DiskGReadWrite
Hidden=(#hideDiskG# = 1) || (#showDiskReadWrite# = 0)

[DiskGWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskGWrite:],[#fpfWriteDepth],'1k')"]B/s
Group=DiskG | DiskGReadWrite
Hidden=(#hideDiskG# = 1) || (#showDiskReadWrite# = 0)

[DiskGReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskG#
Group=DiskG | DiskGReadWrite
Hidden=(#hideDiskG# = 1) || (#showDiskReadWrite# = 0)

[DiskGReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskGRead:],[#fpfReadDepth],'1k')"]B/s
Group=DiskG | DiskGReadWrite
Hidden=(#hideDiskG# = 1) || (#showDiskReadWrite# = 0)

[DiskGSpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskGSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]B / [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskGSpaceTotal:],[#fpfSpaceUsedDepth],'1k')"]B
Group=DiskG
Hidden=#hideDiskG#

[DiskGSpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskGSpaceUsage
Percentual=1
Text=%1%
Group=DiskG
Hidden=#hideDiskG#

[DiskGSpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDiskGSpaceUsage
BarColor=#colorDiskG#
Group=DiskG
Hidden=#hideDiskG#

; Disk H:
[DiskHNameString]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskHName
Y=((#hideDiskH# = 1) ? ((#largeRowSpacing# = 1) ? -5 : -3) : #rowSpacing#)R
Text=H: %1
MouseOverAction=[!SetOption DiskHNameString FontColor "#colorButtonPress#"][!UpdateMeter DiskHNameString][!Redraw]
MouseLeaveAction=[!SetOption DiskHNameString FontColor ""][!UpdateMeter DiskHNameString][!Redraw]
LeftMouseUpAction=["H:\Windows\explorer.exe" /E,H:\]
Group=DiskH
Hidden=#hideDiskH#

[DiskHEjectButton]
Meter=Image
MeterStyle=StyleEjectButton
MouseOverAction=[!SetOption DiskHEjectButton ImageTint "#colorButtonPress#"][!UpdateMeter DiskHEjectButton][!Redraw]
MouseLeaveAction=[!SetOption DiskHEjectButton ImageTint ""][!UpdateMeter DiskHEjectButton][!Redraw]
LeftMouseUpAction=[!CommandMeasure MeasureDiskHEject "Run"]
Group=DiskH | EjectButtons
Hidden=(#hideDiskH# = 1) || ([MeasureDiskHType:] = 4) || (#showEjectButtons# = 0)

[DiskHTempString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringDiskTemp
MeasureName=MeasureDiskHTemp
Group=DiskH | DiskTemps
Hidden=(#hideDiskH# = 1) || ([MeasureDiskHType:] <> 4) || (#showDiskTemps# = 0) || ([MeasureHwinfoDetect:] = -9000)

[DiskHRWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskHRWTime
Text=%1%
Group=DiskH
Hidden=#hideDiskH#

[DiskHWriteArrow]
Meter=Image
MeterStyle=StyleWriteArrow
ImageTint=#colorDiskH#
Y=(((#showDiskReadWrite# = 0) && (#hideDiskH# = 0)) ? -#rowSpacing# + 1 : #rowSpacing#)R
Group=DiskH | DiskHReadWrite
Hidden=(#hideDiskH# = 1) || (#showDiskReadWrite# = 0)

[DiskHWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskHWrite:],[#fpfWriteDepth],'1k')"]B/s
Group=DiskH | DiskHReadWrite
Hidden=(#hideDiskH# = 1) || (#showDiskReadWrite# = 0)

[DiskHReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskH#
Group=DiskH | DiskHReadWrite
Hidden=(#hideDiskH# = 1) || (#showDiskReadWrite# = 0)

[DiskHReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskHRead:],[#fpfReadDepth],'1k')"]B/s
Group=DiskH | DiskHReadWrite
Hidden=(#hideDiskH# = 1) || (#showDiskReadWrite# = 0)

[DiskHSpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskHSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]B / [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskHSpaceTotal:],[#fpfSpaceUsedDepth],'1k')"]B
Group=DiskH
Hidden=#hideDiskH#

[DiskHSpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskHSpaceUsage
Percentual=1
Text=%1%
Group=DiskH
Hidden=#hideDiskH#

[DiskHSpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDiskHSpaceUsage
BarColor=#colorDiskH#
Group=DiskH
Hidden=#hideDiskH#

; Disk I:
[DiskINameString]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskIName
Y=((#hideDiskI# = 1) ? ((#largeRowSpacing# = 1) ? -5 : -3) : #rowSpacing#)R
Text=I: %1
MouseOverAction=[!SetOption DiskINameString FontColor "#colorButtonPress#"][!UpdateMeter DiskINameString][!Redraw]
MouseLeaveAction=[!SetOption DiskINameString FontColor ""][!UpdateMeter DiskINameString][!Redraw]
LeftMouseUpAction=["I:\Windows\explorer.exe" /E,I:\]
Group=DiskI
Hidden=#hideDiskI#

[DiskIEjectButton]
Meter=Image
MeterStyle=StyleEjectButton
MouseOverAction=[!SetOption DiskIEjectButton ImageTint "#colorButtonPress#"][!UpdateMeter DiskIEjectButton][!Redraw]
MouseLeaveAction=[!SetOption DiskIEjectButton ImageTint ""][!UpdateMeter DiskIEjectButton][!Redraw]
LeftMouseUpAction=[!CommandMeasure MeasureDiskIEject "Run"]
Group=DiskI | EjectButtons
Hidden=(#hideDiskI# = 1) || ([MeasureDiskIType:] = 4) || (#showEjectButtons# = 0)

[DiskITempString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringDiskTemp
MeasureName=MeasureDiskITemp
Group=DiskI | DiskTemps
Hidden=(#hideDiskI# = 1) || ([MeasureDiskIType:] <> 4) || (#showDiskTemps# = 0) || ([MeasureHwinfoDetect:] = -9000)

[DiskIRWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskIRWTime
Text=%1%
Group=DiskI
Hidden=#hideDiskI#

[DiskIWriteArrow]
Meter=Image
MeterStyle=StyleWriteArrow
ImageTint=#colorDiskI#
Y=(((#showDiskReadWrite# = 0) && (#hideDiskI# = 0)) ? -#rowSpacing# + 1 : #rowSpacing#)R
Group=DiskI | DiskIReadWrite
Hidden=(#hideDiskI# = 1) || (#showDiskReadWrite# = 0)

[DiskIWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskIWrite:],[#fpfWriteDepth],'1k')"]B/s
Group=DiskI | DiskIReadWrite
Hidden=(#hideDiskI# = 1) || (#showDiskReadWrite# = 0)

[DiskIReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskI#
Group=DiskI | DiskIReadWrite
Hidden=(#hideDiskI# = 1) || (#showDiskReadWrite# = 0)

[DiskIReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskIRead:],[#fpfReadDepth],'1k')"]B/s
Group=DiskI | DiskIReadWrite
Hidden=(#hideDiskI# = 1) || (#showDiskReadWrite# = 0)

[DiskISpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskISpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]B / [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskISpaceTotal:],[#fpfSpaceUsedDepth],'1k')"]B
Group=DiskI
Hidden=#hideDiskI#

[DiskISpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskISpaceUsage
Percentual=1
Text=%1%
Group=DiskI
Hidden=#hideDiskI#

[DiskISpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDiskISpaceUsage
BarColor=#colorDiskI#
Group=DiskI
Hidden=#hideDiskI#

; Disk J:
[DiskJNameString]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskJName
Y=((#hideDiskJ# = 1) ? ((#largeRowSpacing# = 1) ? -5 : -3) : #rowSpacing#)R
Text=J: %1
MouseOverAction=[!SetOption DiskJNameString FontColor "#colorButtonPress#"][!UpdateMeter DiskJNameString][!Redraw]
MouseLeaveAction=[!SetOption DiskJNameString FontColor ""][!UpdateMeter DiskJNameString][!Redraw]
LeftMouseUpAction=["J:\Windows\explorer.exe" /E,J:\]
Group=DiskJ
Hidden=#hideDiskJ#

[DiskJEjectButton]
Meter=Image
MeterStyle=StyleEjectButton
MouseOverAction=[!SetOption DiskJEjectButton ImageTint "#colorButtonPress#"][!UpdateMeter DiskJEjectButton][!Redraw]
MouseLeaveAction=[!SetOption DiskJEjectButton ImageTint ""][!UpdateMeter DiskJEjectButton][!Redraw]
LeftMouseUpAction=[!CommandMeasure MeasureDiskJEject "Run"]
Group=DiskJ | EjectButtons
Hidden=(#hideDiskJ# = 1) || ([MeasureDiskJType:] = 4) || (#showEjectButtons# = 0)

[DiskJTempString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringDiskTemp
MeasureName=MeasureDiskJTemp
Group=DiskJ | DiskTemps
Hidden=(#hideDiskJ# = 1) || ([MeasureDiskJType:] <> 4) || (#showDiskTemps# = 0) || ([MeasureHwinfoDetect:] = -9000)

[DiskJRWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskJRWTime
Text=%1%
Group=DiskJ
Hidden=#hideDiskJ#

[DiskJWriteArrow]
Meter=Image
MeterStyle=StyleWriteArrow
ImageTint=#colorDiskJ#
Y=(((#showDiskReadWrite# = 0) && (#hideDiskJ# = 0)) ? -#rowSpacing# + 1 : #rowSpacing#)R
Group=DiskJ | DiskJReadWrite
Hidden=(#hideDiskJ# = 1) || (#showDiskReadWrite# = 0)

[DiskJWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskJWrite:],[#fpfWriteDepth],'1k')"]B/s
Group=DiskJ | DiskJReadWrite
Hidden=(#hideDiskJ# = 1) || (#showDiskReadWrite# = 0)

[DiskJReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskJ#
Group=DiskJ | DiskJReadWrite
Hidden=(#hideDiskJ# = 1) || (#showDiskReadWrite# = 0)

[DiskJReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskJRead:],[#fpfReadDepth],'1k')"]B/s
Group=DiskJ | DiskJReadWrite
Hidden=(#hideDiskJ# = 1) || (#showDiskReadWrite# = 0)

[DiskJSpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskJSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]B / [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskJSpaceTotal:],[#fpfSpaceUsedDepth],'1k')"]B
Group=DiskJ
Hidden=#hideDiskJ#

[DiskJSpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskJSpaceUsage
Percentual=1
Text=%1%
Group=DiskJ
Hidden=#hideDiskJ#

[DiskJSpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDiskJSpaceUsage
BarColor=#colorDiskJ#
Group=DiskJ
Hidden=#hideDiskJ#

; Disk K:
[DiskKNameString]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskKName
Y=((#hideDiskK# = 1) ? ((#largeRowSpacing# = 1) ? -5 : -3) : #rowSpacing#)R
Text=K: %1
MouseOverAction=[!SetOption DiskKNameString FontColor "#colorButtonPress#"][!UpdateMeter DiskKNameString][!Redraw]
MouseLeaveAction=[!SetOption DiskKNameString FontColor ""][!UpdateMeter DiskKNameString][!Redraw]
LeftMouseUpAction=["K:\Windows\explorer.exe" /E,K:\]
Group=DiskK
Hidden=#hideDiskK#

[DiskKEjectButton]
Meter=Image
MeterStyle=StyleEjectButton
MouseOverAction=[!SetOption DiskKEjectButton ImageTint "#colorButtonPress#"][!UpdateMeter DiskKEjectButton][!Redraw]
MouseLeaveAction=[!SetOption DiskKEjectButton ImageTint ""][!UpdateMeter DiskKEjectButton][!Redraw]
LeftMouseUpAction=[!CommandMeasure MeasureDiskKEject "Run"]
Group=DiskK | EjectButtons
Hidden=(#hideDiskK# = 1) || ([MeasureDiskKType:] = 4) || (#showEjectButtons# = 0)

[DiskKTempString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringDiskTemp
MeasureName=MeasureDiskKTemp
Group=DiskK | DiskTemps
Hidden=(#hideDiskK# = 1) || ([MeasureDiskKType:] <> 4) || (#showDiskTemps# = 0) || ([MeasureHwinfoDetect:] = -9000)

[DiskKRWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskKRWTime
Text=%1%
Group=DiskK
Hidden=#hideDiskK#

[DiskKWriteArrow]
Meter=Image
MeterStyle=StyleWriteArrow
ImageTint=#colorDiskK#
Y=(((#showDiskReadWrite# = 0) && (#hideDiskK# = 0)) ? -#rowSpacing# + 1 : #rowSpacing#)R
Group=DiskK | DiskKReadWrite
Hidden=(#hideDiskK# = 1) || (#showDiskReadWrite# = 0)

[DiskKWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskKWrite:],[#fpfWriteDepth],'1k')"]B/s
Group=DiskK | DiskKReadWrite
Hidden=(#hideDiskK# = 1) || (#showDiskReadWrite# = 0)

[DiskKReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskK#
Group=DiskK | DiskKReadWrite
Hidden=(#hideDiskK# = 1) || (#showDiskReadWrite# = 0)

[DiskKReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskKRead:],[#fpfReadDepth],'1k')"]B/s
Group=DiskK | DiskKReadWrite
Hidden=(#hideDiskK# = 1) || (#showDiskReadWrite# = 0)

[DiskKSpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskKSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]B / [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskKSpaceTotal:],[#fpfSpaceUsedDepth],'1k')"]B
Group=DiskK
Hidden=#hideDiskK#

[DiskKSpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskKSpaceUsage
Percentual=1
Text=%1%
Group=DiskK
Hidden=#hideDiskK#

[DiskKSpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDiskKSpaceUsage
BarColor=#colorDiskK#
Group=DiskK
Hidden=#hideDiskK#

; Disk L:
[DiskLNameString]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskLName
Y=((#hideDiskL# = 1) ? ((#largeRowSpacing# = 1) ? -5 : -3) : #rowSpacing#)R
Text=L: %1
MouseOverAction=[!SetOption DiskLNameString FontColor "#colorButtonPress#"][!UpdateMeter DiskLNameString][!Redraw]
MouseLeaveAction=[!SetOption DiskLNameString FontColor ""][!UpdateMeter DiskLNameString][!Redraw]
LeftMouseUpAction=["L:\Windows\explorer.exe" /E,L:\]
Group=DiskL
Hidden=#hideDiskL#

[DiskLEjectButton]
Meter=Image
MeterStyle=StyleEjectButton
MouseOverAction=[!SetOption DiskLEjectButton ImageTint "#colorButtonPress#"][!UpdateMeter DiskLEjectButton][!Redraw]
MouseLeaveAction=[!SetOption DiskLEjectButton ImageTint ""][!UpdateMeter DiskLEjectButton][!Redraw]
LeftMouseUpAction=[!CommandMeasure MeasureDiskLEject "Run"]
Group=DiskL | EjectButtons
Hidden=(#hideDiskL# = 1) || ([MeasureDiskLType:] = 4) || (#showEjectButtons# = 0)

[DiskLTempString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringDiskTemp
MeasureName=MeasureDiskLTemp
Group=DiskL | DiskTemps
Hidden=(#hideDiskL# = 1) || ([MeasureDiskLType:] <> 4) || (#showDiskTemps# = 0) || ([MeasureHwinfoDetect:] = -9000)

[DiskLRWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskLRWTime
Text=%1%
Group=DiskL
Hidden=#hideDiskL#

[DiskLWriteArrow]
Meter=Image
MeterStyle=StyleWriteArrow
ImageTint=#colorDiskL#
Y=(((#showDiskReadWrite# = 0) && (#hideDiskL# = 0)) ? -#rowSpacing# + 1 : #rowSpacing#)R
Group=DiskL | DiskLReadWrite
Hidden=(#hideDiskL# = 1) || (#showDiskReadWrite# = 0)

[DiskLWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskLWrite:],[#fpfWriteDepth],'1k')"]B/s
Group=DiskL | DiskLReadWrite
Hidden=(#hideDiskL# = 1) || (#showDiskReadWrite# = 0)

[DiskLReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskL#
Group=DiskL | DiskLReadWrite
Hidden=(#hideDiskL# = 1) || (#showDiskReadWrite# = 0)

[DiskLReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskLRead:],[#fpfReadDepth],'1k')"]B/s
Group=DiskL | DiskLReadWrite
Hidden=(#hideDiskL# = 1) || (#showDiskReadWrite# = 0)

[DiskLSpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskLSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]B / [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskLSpaceTotal:],[#fpfSpaceUsedDepth],'1k')"]B
Group=DiskL
Hidden=#hideDiskL#

[DiskLSpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskLSpaceUsage
Percentual=1
Text=%1%
Group=DiskL
Hidden=#hideDiskL#

[DiskLSpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDiskLSpaceUsage
BarColor=#colorDiskL#
Group=DiskL
Hidden=#hideDiskL#

; Disk M:
[DiskMNameString]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskMName
Y=((#hideDiskM# = 1) ? ((#largeRowSpacing# = 1) ? -5 : -3) : #rowSpacing#)R
Text=M: %1
MouseOverAction=[!SetOption DiskMNameString FontColor "#colorButtonPress#"][!UpdateMeter DiskMNameString][!Redraw]
MouseLeaveAction=[!SetOption DiskMNameString FontColor ""][!UpdateMeter DiskMNameString][!Redraw]
LeftMouseUpAction=["M:\Windows\explorer.exe" /E,M:\]
Group=DiskM
Hidden=#hideDiskM#

[DiskMEjectButton]
Meter=Image
MeterStyle=StyleEjectButton
MouseOverAction=[!SetOption DiskMEjectButton ImageTint "#colorButtonPress#"][!UpdateMeter DiskMEjectButton][!Redraw]
MouseLeaveAction=[!SetOption DiskMEjectButton ImageTint ""][!UpdateMeter DiskMEjectButton][!Redraw]
LeftMouseUpAction=[!CommandMeasure MeasureDiskMEject "Run"]
Group=DiskM | EjectButtons
Hidden=(#hideDiskM# = 1) || ([MeasureDiskMType:] = 4) || (#showEjectButtons# = 0)

[DiskMTempString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringDiskTemp
MeasureName=MeasureDiskMTemp
Group=DiskM | DiskTemps
Hidden=(#hideDiskM# = 1) || ([MeasureDiskMType:] <> 4) || (#showDiskTemps# = 0) || ([MeasureHwinfoDetect:] = -9000)

[DiskMRWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskMRWTime
Text=%1%
Group=DiskM
Hidden=#hideDiskM#

[DiskMWriteArrow]
Meter=Image
MeterStyle=StyleWriteArrow
ImageTint=#colorDiskM#
Y=(((#showDiskReadWrite# = 0) && (#hideDiskM# = 0)) ? -#rowSpacing# + 1 : #rowSpacing#)R
Group=DiskM | DiskMReadWrite
Hidden=(#hideDiskM# = 1) || (#showDiskReadWrite# = 0)

[DiskMWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskMWrite:],[#fpfWriteDepth],'1k')"]B/s
Group=DiskM | DiskMReadWrite
Hidden=(#hideDiskM# = 1) || (#showDiskReadWrite# = 0)

[DiskMReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskM#
Group=DiskM | DiskMReadWrite
Hidden=(#hideDiskM# = 1) || (#showDiskReadWrite# = 0)

[DiskMReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskMRead:],[#fpfReadDepth],'1k')"]B/s
Group=DiskM | DiskMReadWrite
Hidden=(#hideDiskM# = 1) || (#showDiskReadWrite# = 0)

[DiskMSpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskMSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]B / [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskMSpaceTotal:],[#fpfSpaceUsedDepth],'1k')"]B
Group=DiskM
Hidden=#hideDiskM#

[DiskMSpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskMSpaceUsage
Percentual=1
Text=%1%
Group=DiskM
Hidden=#hideDiskM#

[DiskMSpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDiskMSpaceUsage
BarColor=#colorDiskM#
Group=DiskM
Hidden=#hideDiskM#

; Disk N:
[DiskNNameString]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskNName
Y=((#hideDiskN# = 1) ? ((#largeRowSpacing# = 1) ? -5 : -3) : #rowSpacing#)R
Text=N: %1
MouseOverAction=[!SetOption DiskNNameString FontColor "#colorButtonPress#"][!UpdateMeter DiskNNameString][!Redraw]
MouseLeaveAction=[!SetOption DiskNNameString FontColor ""][!UpdateMeter DiskNNameString][!Redraw]
LeftMouseUpAction=["N:\Windows\explorer.exe" /E,N:\]
Group=DiskN
Hidden=#hideDiskN#

[DiskNEjectButton]
Meter=Image
MeterStyle=StyleEjectButton
MouseOverAction=[!SetOption DiskNEjectButton ImageTint "#colorButtonPress#"][!UpdateMeter DiskNEjectButton][!Redraw]
MouseLeaveAction=[!SetOption DiskNEjectButton ImageTint ""][!UpdateMeter DiskNEjectButton][!Redraw]
LeftMouseUpAction=[!CommandMeasure MeasureDiskNEject "Run"]
Group=DiskN | EjectButtons
Hidden=(#hideDiskN# = 1) || ([MeasureDiskNType:] = 4) || (#showEjectButtons# = 0)

[DiskNTempString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringDiskTemp
MeasureName=MeasureDiskNTemp
Group=DiskN | DiskTemps
Hidden=(#hideDiskN# = 1) || ([MeasureDiskNType:] <> 4) || (#showDiskTemps# = 0) || ([MeasureHwinfoDetect:] = -9000)

[DiskNRWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskNRWTime
Text=%1%
Group=DiskN
Hidden=#hideDiskN#

[DiskNWriteArrow]
Meter=Image
MeterStyle=StyleWriteArrow
ImageTint=#colorDiskN#
Y=(((#showDiskReadWrite# = 0) && (#hideDiskN# = 0)) ? -#rowSpacing# + 1 : #rowSpacing#)R
Group=DiskN | DiskNReadWrite
Hidden=(#hideDiskN# = 1) || (#showDiskReadWrite# = 0)

[DiskNWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskNWrite:],[#fpfWriteDepth],'1k')"]B/s
Group=DiskN | DiskNReadWrite
Hidden=(#hideDiskN# = 1) || (#showDiskReadWrite# = 0)

[DiskNReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskN#
Group=DiskN | DiskNReadWrite
Hidden=(#hideDiskN# = 1) || (#showDiskReadWrite# = 0)

[DiskNReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskNRead:],[#fpfReadDepth],'1k')"]B/s
Group=DiskN | DiskNReadWrite
Hidden=(#hideDiskN# = 1) || (#showDiskReadWrite# = 0)

[DiskNSpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskNSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]B / [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskNSpaceTotal:],[#fpfSpaceUsedDepth],'1k')"]B
Group=DiskN
Hidden=#hideDiskN#

[DiskNSpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskNSpaceUsage
Percentual=1
Text=%1%
Group=DiskN
Hidden=#hideDiskN#

[DiskNSpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDiskNSpaceUsage
BarColor=#colorDiskN#
Group=DiskN
Hidden=#hideDiskN#

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

; Disk P:
[DiskPNameString]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskPName
Y=((#hideDiskP# = 1) ? ((#largeRowSpacing# = 1) ? -5 : -3) : #rowSpacing#)R
Text=P: %1
MouseOverAction=[!SetOption DiskPNameString FontColor "#colorButtonPress#"][!UpdateMeter DiskPNameString][!Redraw]
MouseLeaveAction=[!SetOption DiskPNameString FontColor ""][!UpdateMeter DiskPNameString][!Redraw]
LeftMouseUpAction=["P:\Windows\explorer.exe" /E,P:\]
Group=DiskP
Hidden=#hideDiskP#

[DiskPEjectButton]
Meter=Image
MeterStyle=StyleEjectButton
MouseOverAction=[!SetOption DiskPEjectButton ImageTint "#colorButtonPress#"][!UpdateMeter DiskPEjectButton][!Redraw]
MouseLeaveAction=[!SetOption DiskPEjectButton ImageTint ""][!UpdateMeter DiskPEjectButton][!Redraw]
LeftMouseUpAction=[!CommandMeasure MeasureDiskPEject "Run"]
Group=DiskP | EjectButtons
Hidden=(#hideDiskP# = 1) || ([MeasureDiskPType:] = 4) || (#showEjectButtons# = 0)

[DiskPTempString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringDiskTemp
MeasureName=MeasureDiskPTemp
Group=DiskP | DiskTemps
Hidden=(#hideDiskP# = 1) || ([MeasureDiskPType:] <> 4) || (#showDiskTemps# = 0) || ([MeasureHwinfoDetect:] = -9000)

[DiskPRWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskPRWTime
Text=%1%
Group=DiskP
Hidden=#hideDiskP#

[DiskPWriteArrow]
Meter=Image
MeterStyle=StyleWriteArrow
ImageTint=#colorDiskP#
Y=(((#showDiskReadWrite# = 0) && (#hideDiskP# = 0)) ? -#rowSpacing# + 1 : #rowSpacing#)R
Group=DiskP | DiskPReadWrite
Hidden=(#hideDiskP# = 1) || (#showDiskReadWrite# = 0)

[DiskPWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskPWrite:],[#fpfWriteDepth],'1k')"]B/s
Group=DiskP | DiskPReadWrite
Hidden=(#hideDiskP# = 1) || (#showDiskReadWrite# = 0)

[DiskPReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskP#
Group=DiskP | DiskPReadWrite
Hidden=(#hideDiskP# = 1) || (#showDiskReadWrite# = 0)

[DiskPReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskPRead:],[#fpfReadDepth],'1k')"]B/s
Group=DiskP | DiskPReadWrite
Hidden=(#hideDiskP# = 1) || (#showDiskReadWrite# = 0)

[DiskPSpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskPSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]B / [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskPSpaceTotal:],[#fpfSpaceUsedDepth],'1k')"]B
Group=DiskP
Hidden=#hideDiskP#

[DiskPSpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskPSpaceUsage
Percentual=1
Text=%1%
Group=DiskP
Hidden=#hideDiskP#

[DiskPSpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDiskPSpaceUsage
BarColor=#colorDiskP#
Group=DiskP
Hidden=#hideDiskP#

; Disk Q:
[DiskQNameString]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskQName
Y=((#hideDiskQ# = 1) ? ((#largeRowSpacing# = 1) ? -5 : -3) : #rowSpacing#)R
Text=Q: %1
MouseOverAction=[!SetOption DiskQNameString FontColor "#colorButtonPress#"][!UpdateMeter DiskQNameString][!Redraw]
MouseLeaveAction=[!SetOption DiskQNameString FontColor ""][!UpdateMeter DiskQNameString][!Redraw]
LeftMouseUpAction=["Q:\Windows\explorer.exe" /E,Q:\]
Group=DiskQ
Hidden=#hideDiskQ#

[DiskQEjectButton]
Meter=Image
MeterStyle=StyleEjectButton
MouseOverAction=[!SetOption DiskQEjectButton ImageTint "#colorButtonPress#"][!UpdateMeter DiskQEjectButton][!Redraw]
MouseLeaveAction=[!SetOption DiskQEjectButton ImageTint ""][!UpdateMeter DiskQEjectButton][!Redraw]
LeftMouseUpAction=[!CommandMeasure MeasureDiskQEject "Run"]
Group=DiskQ | EjectButtons
Hidden=(#hideDiskQ# = 1) || ([MeasureDiskQType:] = 4) || (#showEjectButtons# = 0)

[DiskQTempString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringDiskTemp
MeasureName=MeasureDiskQTemp
Group=DiskQ | DiskTemps
Hidden=(#hideDiskQ# = 1) || ([MeasureDiskQType:] <> 4) || (#showDiskTemps# = 0) || ([MeasureHwinfoDetect:] = -9000)

[DiskQRWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskQRWTime
Text=%1%
Group=DiskQ
Hidden=#hideDiskQ#

[DiskQWriteArrow]
Meter=Image
MeterStyle=StyleWriteArrow
ImageTint=#colorDiskQ#
Y=(((#showDiskReadWrite# = 0) && (#hideDiskQ# = 0)) ? -#rowSpacing# + 1 : #rowSpacing#)R
Group=DiskQ | DiskQReadWrite
Hidden=(#hideDiskQ# = 1) || (#showDiskReadWrite# = 0)

[DiskQWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskQWrite:],[#fpfWriteDepth],'1k')"]B/s
Group=DiskQ | DiskQReadWrite
Hidden=(#hideDiskQ# = 1) || (#showDiskReadWrite# = 0)

[DiskQReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskQ#
Group=DiskQ | DiskQReadWrite
Hidden=(#hideDiskQ# = 1) || (#showDiskReadWrite# = 0)

[DiskQReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskQRead:],[#fpfReadDepth],'1k')"]B/s
Group=DiskQ | DiskQReadWrite
Hidden=(#hideDiskQ# = 1) || (#showDiskReadWrite# = 0)

[DiskQSpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskQSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]B / [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskQSpaceTotal:],[#fpfSpaceUsedDepth],'1k')"]B
Group=DiskQ
Hidden=#hideDiskQ#

[DiskQSpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskQSpaceUsage
Percentual=1
Text=%1%
Group=DiskQ
Hidden=#hideDiskQ#

[DiskQSpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDiskQSpaceUsage
BarColor=#colorDiskQ#
Group=DiskQ
Hidden=#hideDiskQ#

; Disk R:
[DiskRNameString]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskRName
Y=((#hideDiskR# = 1) ? ((#largeRowSpacing# = 1) ? -5 : -3) : #rowSpacing#)R
Text=R: %1
MouseOverAction=[!SetOption DiskRNameString FontColor "#colorButtonPress#"][!UpdateMeter DiskRNameString][!Redraw]
MouseLeaveAction=[!SetOption DiskRNameString FontColor ""][!UpdateMeter DiskRNameString][!Redraw]
LeftMouseUpAction=["R:\Windows\explorer.exe" /E,R:\]
Group=DiskR
Hidden=#hideDiskR#

[DiskREjectButton]
Meter=Image
MeterStyle=StyleEjectButton
MouseOverAction=[!SetOption DiskREjectButton ImageTint "#colorButtonPress#"][!UpdateMeter DiskREjectButton][!Redraw]
MouseLeaveAction=[!SetOption DiskREjectButton ImageTint ""][!UpdateMeter DiskREjectButton][!Redraw]
LeftMouseUpAction=[!CommandMeasure MeasureDiskREject "Run"]
Group=DiskR | EjectButtons
Hidden=(#hideDiskR# = 1) || ([MeasureDiskRType:] = 4) || (#showEjectButtons# = 0)

[DiskRTempString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringDiskTemp
MeasureName=MeasureDiskRTemp
Group=DiskR | DiskTemps
Hidden=(#hideDiskR# = 1) || ([MeasureDiskRType:] <> 4) || (#showDiskTemps# = 0) || ([MeasureHwinfoDetect:] = -9000)

[DiskRRWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskRRWTime
Text=%1%
Group=DiskR
Hidden=#hideDiskR#

[DiskRWriteArrow]
Meter=Image
MeterStyle=StyleWriteArrow
ImageTint=#colorDiskR#
Y=(((#showDiskReadWrite# = 0) && (#hideDiskR# = 0)) ? -#rowSpacing# + 1 : #rowSpacing#)R
Group=DiskR | DiskRReadWrite
Hidden=(#hideDiskR# = 1) || (#showDiskReadWrite# = 0)

[DiskRWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskRWrite:],[#fpfWriteDepth],'1k')"]B/s
Group=DiskR | DiskRReadWrite
Hidden=(#hideDiskR# = 1) || (#showDiskReadWrite# = 0)

[DiskRReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskR#
Group=DiskR | DiskRReadWrite
Hidden=(#hideDiskR# = 1) || (#showDiskReadWrite# = 0)

[DiskRReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskRRead:],[#fpfReadDepth],'1k')"]B/s
Group=DiskR | DiskRReadWrite
Hidden=(#hideDiskR# = 1) || (#showDiskReadWrite# = 0)

[DiskRSpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskRSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]B / [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskRSpaceTotal:],[#fpfSpaceUsedDepth],'1k')"]B
Group=DiskR
Hidden=#hideDiskR#

[DiskRSpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskRSpaceUsage
Percentual=1
Text=%1%
Group=DiskR
Hidden=#hideDiskR#

[DiskRSpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDiskRSpaceUsage
BarColor=#colorDiskR#
Group=DiskR
Hidden=#hideDiskR#

; Disk S:
[DiskSNameString]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskSName
Y=((#hideDiskS# = 1) ? ((#largeRowSpacing# = 1) ? -5 : -3) : #rowSpacing#)R
Text=S: %1
MouseOverAction=[!SetOption DiskSNameString FontColor "#colorButtonPress#"][!UpdateMeter DiskSNameString][!Redraw]
MouseLeaveAction=[!SetOption DiskSNameString FontColor ""][!UpdateMeter DiskSNameString][!Redraw]
LeftMouseUpAction=["S:\Windows\explorer.exe" /E,S:\]
Group=DiskS
Hidden=#hideDiskS#

[DiskSEjectButton]
Meter=Image
MeterStyle=StyleEjectButton
MouseOverAction=[!SetOption DiskSEjectButton ImageTint "#colorButtonPress#"][!UpdateMeter DiskSEjectButton][!Redraw]
MouseLeaveAction=[!SetOption DiskSEjectButton ImageTint ""][!UpdateMeter DiskSEjectButton][!Redraw]
LeftMouseUpAction=[!CommandMeasure MeasureDiskSEject "Run"]
Group=DiskS | EjectButtons
Hidden=(#hideDiskS# = 1) || ([MeasureDiskSType:] = 4) || (#showEjectButtons# = 0)

[DiskSTempString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringDiskTemp
MeasureName=MeasureDiskSTemp
Group=DiskS | DiskTemps
Hidden=(#hideDiskS# = 1) || ([MeasureDiskSType:] <> 4) || (#showDiskTemps# = 0) || ([MeasureHwinfoDetect:] = -9000)

[DiskSRWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskSRWTime
Text=%1%
Group=DiskS
Hidden=#hideDiskS#

[DiskSWriteArrow]
Meter=Image
MeterStyle=StyleWriteArrow
ImageTint=#colorDiskS#
Y=(((#showDiskReadWrite# = 0) && (#hideDiskS# = 0)) ? -#rowSpacing# + 1 : #rowSpacing#)R
Group=DiskS | DiskSReadWrite
Hidden=(#hideDiskS# = 1) || (#showDiskReadWrite# = 0)

[DiskSWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskSWrite:],[#fpfWriteDepth],'1k')"]B/s
Group=DiskS | DiskSReadWrite
Hidden=(#hideDiskS# = 1) || (#showDiskReadWrite# = 0)

[DiskSReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskS#
Group=DiskS | DiskSReadWrite
Hidden=(#hideDiskS# = 1) || (#showDiskReadWrite# = 0)

[DiskSReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskSRead:],[#fpfReadDepth],'1k')"]B/s
Group=DiskS | DiskSReadWrite
Hidden=(#hideDiskS# = 1) || (#showDiskReadWrite# = 0)

[DiskSSpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskSSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]B / [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskSSpaceTotal:],[#fpfSpaceUsedDepth],'1k')"]B
Group=DiskS
Hidden=#hideDiskS#

[DiskSSpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskSSpaceUsage
Percentual=1
Text=%1%
Group=DiskS
Hidden=#hideDiskS#

[DiskSSpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDiskSSpaceUsage
BarColor=#colorDiskS#
Group=DiskS
Hidden=#hideDiskS#

; Disk T:
[DiskTNameString]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskTName
Y=((#hideDiskT# = 1) ? ((#largeRowSpacing# = 1) ? -5 : -3) : #rowSpacing#)R
Text=T: %1
MouseOverAction=[!SetOption DiskTNameString FontColor "#colorButtonPress#"][!UpdateMeter DiskTNameString][!Redraw]
MouseLeaveAction=[!SetOption DiskTNameString FontColor ""][!UpdateMeter DiskTNameString][!Redraw]
LeftMouseUpAction=["T:\Windows\explorer.exe" /E,T:\]
Group=DiskT
Hidden=#hideDiskT#

[DiskTEjectButton]
Meter=Image
MeterStyle=StyleEjectButton
MouseOverAction=[!SetOption DiskTEjectButton ImageTint "#colorButtonPress#"][!UpdateMeter DiskTEjectButton][!Redraw]
MouseLeaveAction=[!SetOption DiskTEjectButton ImageTint ""][!UpdateMeter DiskTEjectButton][!Redraw]
LeftMouseUpAction=[!CommandMeasure MeasureDiskTEject "Run"]
Group=DiskT | EjectButtons
Hidden=(#hideDiskT# = 1) || ([MeasureDiskTType:] = 4) || (#showEjectButtons# = 0)

[DiskTTempString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringDiskTemp
MeasureName=MeasureDiskTTemp
Group=DiskT | DiskTemps
Hidden=(#hideDiskT# = 1) || ([MeasureDiskTType:] <> 4) || (#showDiskTemps# = 0) || ([MeasureHwinfoDetect:] = -9000)

[DiskTRWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskTRWTime
Text=%1%
Group=DiskT
Hidden=#hideDiskT#

[DiskTWriteArrow]
Meter=Image
MeterStyle=StyleWriteArrow
ImageTint=#colorDiskT#
Y=(((#showDiskReadWrite# = 0) && (#hideDiskT# = 0)) ? -#rowSpacing# + 1 : #rowSpacing#)R
Group=DiskT | DiskTReadWrite
Hidden=(#hideDiskT# = 1) || (#showDiskReadWrite# = 0)

[DiskTWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskTWrite:],[#fpfWriteDepth],'1k')"]B/s
Group=DiskT | DiskTReadWrite
Hidden=(#hideDiskT# = 1) || (#showDiskReadWrite# = 0)

[DiskTReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskT#
Group=DiskT | DiskTReadWrite
Hidden=(#hideDiskT# = 1) || (#showDiskReadWrite# = 0)

[DiskTReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskTRead:],[#fpfReadDepth],'1k')"]B/s
Group=DiskT | DiskTReadWrite
Hidden=(#hideDiskT# = 1) || (#showDiskReadWrite# = 0)

[DiskTSpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskTSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]B / [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskTSpaceTotal:],[#fpfSpaceUsedDepth],'1k')"]B
Group=DiskT
Hidden=#hideDiskT#

[DiskTSpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskTSpaceUsage
Percentual=1
Text=%1%
Group=DiskT
Hidden=#hideDiskT#

[DiskTSpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDiskTSpaceUsage
BarColor=#colorDiskT#
Group=DiskT
Hidden=#hideDiskT#

; Disk U:
[DiskUNameString]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskUName
Y=((#hideDiskU# = 1) ? ((#largeRowSpacing# = 1) ? -5 : -3) : #rowSpacing#)R
Text=U: %1
MouseOverAction=[!SetOption DiskUNameString FontColor "#colorButtonPress#"][!UpdateMeter DiskUNameString][!Redraw]
MouseLeaveAction=[!SetOption DiskUNameString FontColor ""][!UpdateMeter DiskUNameString][!Redraw]
LeftMouseUpAction=["U:\Windows\explorer.exe" /E,U:\]
Group=DiskU
Hidden=#hideDiskU#

[DiskUEjectButton]
Meter=Image
MeterStyle=StyleEjectButton
MouseOverAction=[!SetOption DiskUEjectButton ImageTint "#colorButtonPress#"][!UpdateMeter DiskUEjectButton][!Redraw]
MouseLeaveAction=[!SetOption DiskUEjectButton ImageTint ""][!UpdateMeter DiskUEjectButton][!Redraw]
LeftMouseUpAction=[!CommandMeasure MeasureDiskUEject "Run"]
Group=DiskU | EjectButtons
Hidden=(#hideDiskU# = 1) || ([MeasureDiskUType:] = 4) || (#showEjectButtons# = 0)

[DiskUTempString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringDiskTemp
MeasureName=MeasureDiskUTemp
Group=DiskU | DiskTemps
Hidden=(#hideDiskU# = 1) || ([MeasureDiskUType:] <> 4) || (#showDiskTemps# = 0) || ([MeasureHwinfoDetect:] = -9000)

[DiskURWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskURWTime
Text=%1%
Group=DiskU
Hidden=#hideDiskU#

[DiskUWriteArrow]
Meter=Image
MeterStyle=StyleWriteArrow
ImageTint=#colorDiskU#
Y=(((#showDiskReadWrite# = 0) && (#hideDiskU# = 0)) ? -#rowSpacing# + 1 : #rowSpacing#)R
Group=DiskU | DiskUReadWrite
Hidden=(#hideDiskU# = 1) || (#showDiskReadWrite# = 0)

[DiskUWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskUWrite:],[#fpfWriteDepth],'1k')"]B/s
Group=DiskU | DiskUReadWrite
Hidden=(#hideDiskU# = 1) || (#showDiskReadWrite# = 0)

[DiskUReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskU#
Group=DiskU | DiskUReadWrite
Hidden=(#hideDiskU# = 1) || (#showDiskReadWrite# = 0)

[DiskUReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskURead:],[#fpfReadDepth],'1k')"]B/s
Group=DiskU | DiskUReadWrite
Hidden=(#hideDiskU# = 1) || (#showDiskReadWrite# = 0)

[DiskUSpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskUSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]B / [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskUSpaceTotal:],[#fpfSpaceUsedDepth],'1k')"]B
Group=DiskU
Hidden=#hideDiskU#

[DiskUSpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskUSpaceUsage
Percentual=1
Text=%1%
Group=DiskU
Hidden=#hideDiskU#

[DiskUSpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDiskUSpaceUsage
BarColor=#colorDiskU#
Group=DiskU
Hidden=#hideDiskU#

; Disk V:
[DiskVNameString]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskVName
Y=((#hideDiskV# = 1) ? ((#largeRowSpacing# = 1) ? -5 : -3) : #rowSpacing#)R
Text=V: %1
MouseOverAction=[!SetOption DiskVNameString FontColor "#colorButtonPress#"][!UpdateMeter DiskVNameString][!Redraw]
MouseLeaveAction=[!SetOption DiskVNameString FontColor ""][!UpdateMeter DiskVNameString][!Redraw]
LeftMouseUpAction=["V:\Windows\explorer.exe" /E,V:\]
Group=DiskV
Hidden=#hideDiskV#

[DiskVEjectButton]
Meter=Image
MeterStyle=StyleEjectButton
MouseOverAction=[!SetOption DiskVEjectButton ImageTint "#colorButtonPress#"][!UpdateMeter DiskVEjectButton][!Redraw]
MouseLeaveAction=[!SetOption DiskVEjectButton ImageTint ""][!UpdateMeter DiskVEjectButton][!Redraw]
LeftMouseUpAction=[!CommandMeasure MeasureDiskVEject "Run"]
Group=DiskV | EjectButtons
Hidden=(#hideDiskV# = 1) || ([MeasureDiskVType:] = 4) || (#showEjectButtons# = 0)

[DiskVTempString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringDiskTemp
MeasureName=MeasureDiskVTemp
Group=DiskV | DiskTemps
Hidden=(#hideDiskV# = 1) || ([MeasureDiskVType:] <> 4) || (#showDiskTemps# = 0) || ([MeasureHwinfoDetect:] = -9000)

[DiskVRWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskVRWTime
Text=%1%
Group=DiskV
Hidden=#hideDiskV#

[DiskVWriteArrow]
Meter=Image
MeterStyle=StyleWriteArrow
ImageTint=#colorDiskV#
Y=(((#showDiskReadWrite# = 0) && (#hideDiskV# = 0)) ? -#rowSpacing# + 1 : #rowSpacing#)R
Group=DiskV | DiskVReadWrite
Hidden=(#hideDiskV# = 1) || (#showDiskReadWrite# = 0)

[DiskVWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskVWrite:],[#fpfWriteDepth],'1k')"]B/s
Group=DiskV | DiskVReadWrite
Hidden=(#hideDiskV# = 1) || (#showDiskReadWrite# = 0)

[DiskVReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskV#
Group=DiskV | DiskVReadWrite
Hidden=(#hideDiskV# = 1) || (#showDiskReadWrite# = 0)

[DiskVReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskVRead:],[#fpfReadDepth],'1k')"]B/s
Group=DiskV | DiskVReadWrite
Hidden=(#hideDiskV# = 1) || (#showDiskReadWrite# = 0)

[DiskVSpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskVSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]B / [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskVSpaceTotal:],[#fpfSpaceUsedDepth],'1k')"]B
Group=DiskV
Hidden=#hideDiskV#

[DiskVSpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskVSpaceUsage
Percentual=1
Text=%1%
Group=DiskV
Hidden=#hideDiskV#

[DiskVSpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDiskVSpaceUsage
BarColor=#colorDiskV#
Group=DiskV
Hidden=#hideDiskV#

; Disk W:
[DiskWNameString]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskWName
Y=((#hideDiskW# = 1) ? ((#largeRowSpacing# = 1) ? -5 : -3) : #rowSpacing#)R
Text=W: %1
MouseOverAction=[!SetOption DiskWNameString FontColor "#colorButtonPress#"][!UpdateMeter DiskWNameString][!Redraw]
MouseLeaveAction=[!SetOption DiskWNameString FontColor ""][!UpdateMeter DiskWNameString][!Redraw]
LeftMouseUpAction=["W:\Windows\explorer.exe" /E,W:\]
Group=DiskW
Hidden=#hideDiskW#

[DiskWEjectButton]
Meter=Image
MeterStyle=StyleEjectButton
MouseOverAction=[!SetOption DiskWEjectButton ImageTint "#colorButtonPress#"][!UpdateMeter DiskWEjectButton][!Redraw]
MouseLeaveAction=[!SetOption DiskWEjectButton ImageTint ""][!UpdateMeter DiskWEjectButton][!Redraw]
LeftMouseUpAction=[!CommandMeasure MeasureDiskWEject "Run"]
Group=DiskW | EjectButtons
Hidden=(#hideDiskW# = 1) || ([MeasureDiskWType:] = 4) || (#showEjectButtons# = 0)

[DiskWTempString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringDiskTemp
MeasureName=MeasureDiskWTemp
Group=DiskW | DiskTemps
Hidden=(#hideDiskW# = 1) || ([MeasureDiskWType:] <> 4) || (#showDiskTemps# = 0) || ([MeasureHwinfoDetect:] = -9000)

[DiskWRWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskWRWTime
Text=%1%
Group=DiskW
Hidden=#hideDiskW#

[DiskWWriteArrow]
Meter=Image
MeterStyle=StyleWriteArrow
ImageTint=#colorDiskW#
Y=(((#showDiskReadWrite# = 0) && (#hideDiskW# = 0)) ? -#rowSpacing# + 1 : #rowSpacing#)R
Group=DiskW | DiskWReadWrite
Hidden=(#hideDiskW# = 1) || (#showDiskReadWrite# = 0)

[DiskWWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskWWrite:],[#fpfWriteDepth],'1k')"]B/s
Group=DiskW | DiskWReadWrite
Hidden=(#hideDiskW# = 1) || (#showDiskReadWrite# = 0)

[DiskWReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskW#
Group=DiskW | DiskWReadWrite
Hidden=(#hideDiskW# = 1) || (#showDiskReadWrite# = 0)

[DiskWReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskWRead:],[#fpfReadDepth],'1k')"]B/s
Group=DiskW | DiskWReadWrite
Hidden=(#hideDiskW# = 1) || (#showDiskReadWrite# = 0)

[DiskWSpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskWSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]B / [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskWSpaceTotal:],[#fpfSpaceUsedDepth],'1k')"]B
Group=DiskW
Hidden=#hideDiskW#

[DiskWSpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskWSpaceUsage
Percentual=1
Text=%1%
Group=DiskW
Hidden=#hideDiskW#

[DiskWSpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDiskWSpaceUsage
BarColor=#colorDiskW#
Group=DiskW
Hidden=#hideDiskW#

; Disk X:
[DiskXNameString]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskXName
Y=((#hideDiskX# = 1) ? ((#largeRowSpacing# = 1) ? -5 : -3) : #rowSpacing#)R
Text=X: %1
MouseOverAction=[!SetOption DiskXNameString FontColor "#colorButtonPress#"][!UpdateMeter DiskXNameString][!Redraw]
MouseLeaveAction=[!SetOption DiskXNameString FontColor ""][!UpdateMeter DiskXNameString][!Redraw]
LeftMouseUpAction=["X:\Windows\explorer.exe" /E,X:\]
Group=DiskX
Hidden=#hideDiskX#

[DiskXEjectButton]
Meter=Image
MeterStyle=StyleEjectButton
MouseOverAction=[!SetOption DiskXEjectButton ImageTint "#colorButtonPress#"][!UpdateMeter DiskXEjectButton][!Redraw]
MouseLeaveAction=[!SetOption DiskXEjectButton ImageTint ""][!UpdateMeter DiskXEjectButton][!Redraw]
LeftMouseUpAction=[!CommandMeasure MeasureDiskXEject "Run"]
Group=DiskX | EjectButtons
Hidden=(#hideDiskX# = 1) || ([MeasureDiskXType:] = 4) || (#showEjectButtons# = 0)

[DiskXTempString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringDiskTemp
MeasureName=MeasureDiskXTemp
Group=DiskX | DiskTemps
Hidden=(#hideDiskX# = 1) || ([MeasureDiskXType:] <> 4) || (#showDiskTemps# = 0) || ([MeasureHwinfoDetect:] = -9000)

[DiskXRWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskXRWTime
Text=%1%
Group=DiskX
Hidden=#hideDiskX#

[DiskXWriteArrow]
Meter=Image
MeterStyle=StyleWriteArrow
ImageTint=#colorDiskX#
Y=(((#showDiskReadWrite# = 0) && (#hideDiskX# = 0)) ? -#rowSpacing# + 1 : #rowSpacing#)R
Group=DiskX | DiskXReadWrite
Hidden=(#hideDiskX# = 1) || (#showDiskReadWrite# = 0)

[DiskXWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskXWrite:],[#fpfWriteDepth],'1k')"]B/s
Group=DiskX | DiskXReadWrite
Hidden=(#hideDiskX# = 1) || (#showDiskReadWrite# = 0)

[DiskXReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskX#
Group=DiskX | DiskXReadWrite
Hidden=(#hideDiskX# = 1) || (#showDiskReadWrite# = 0)

[DiskXReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskXRead:],[#fpfReadDepth],'1k')"]B/s
Group=DiskX | DiskXReadWrite
Hidden=(#hideDiskX# = 1) || (#showDiskReadWrite# = 0)

[DiskXSpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskXSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]B / [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskXSpaceTotal:],[#fpfSpaceUsedDepth],'1k')"]B
Group=DiskX
Hidden=#hideDiskX#

[DiskXSpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskXSpaceUsage
Percentual=1
Text=%1%
Group=DiskX
Hidden=#hideDiskX#

[DiskXSpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDiskXSpaceUsage
BarColor=#colorDiskX#
Group=DiskX
Hidden=#hideDiskX#

; Disk Y:
[DiskYNameString]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskYName
Y=((#hideDiskY# = 1) ? ((#largeRowSpacing# = 1) ? -5 : -3) : #rowSpacing#)R
Text=Y: %1
MouseOverAction=[!SetOption DiskYNameString FontColor "#colorButtonPress#"][!UpdateMeter DiskYNameString][!Redraw]
MouseLeaveAction=[!SetOption DiskYNameString FontColor ""][!UpdateMeter DiskYNameString][!Redraw]
LeftMouseUpAction=["Y:\Windows\explorer.exe" /E,Y:\]
Group=DiskY
Hidden=#hideDiskY#

[DiskYEjectButton]
Meter=Image
MeterStyle=StyleEjectButton
MouseOverAction=[!SetOption DiskYEjectButton ImageTint "#colorButtonPress#"][!UpdateMeter DiskYEjectButton][!Redraw]
MouseLeaveAction=[!SetOption DiskYEjectButton ImageTint ""][!UpdateMeter DiskYEjectButton][!Redraw]
LeftMouseUpAction=[!CommandMeasure MeasureDiskYEject "Run"]
Group=DiskY | EjectButtons
Hidden=(#hideDiskY# = 1) || ([MeasureDiskYType:] = 4) || (#showEjectButtons# = 0)

[DiskYTempString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringDiskTemp
MeasureName=MeasureDiskYTemp
Group=DiskY | DiskTemps
Hidden=(#hideDiskY# = 1) || ([MeasureDiskYType:] <> 4) || (#showDiskTemps# = 0) || ([MeasureHwinfoDetect:] = -9000)

[DiskYRWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskYRWTime
Text=%1%
Group=DiskY
Hidden=#hideDiskY#

[DiskYWriteArrow]
Meter=Image
MeterStyle=StyleWriteArrow
ImageTint=#colorDiskY#
Y=(((#showDiskReadWrite# = 0) && (#hideDiskY# = 0)) ? -#rowSpacing# + 1 : #rowSpacing#)R
Group=DiskY | DiskYReadWrite
Hidden=(#hideDiskY# = 1) || (#showDiskReadWrite# = 0)

[DiskYWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskYWrite:],[#fpfWriteDepth],'1k')"]B/s
Group=DiskY | DiskYReadWrite
Hidden=(#hideDiskY# = 1) || (#showDiskReadWrite# = 0)

[DiskYReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskY#
Group=DiskY | DiskYReadWrite
Hidden=(#hideDiskY# = 1) || (#showDiskReadWrite# = 0)

[DiskYReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskYRead:],[#fpfReadDepth],'1k')"]B/s
Group=DiskY | DiskYReadWrite
Hidden=(#hideDiskY# = 1) || (#showDiskReadWrite# = 0)

[DiskYSpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskYSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]B / [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskYSpaceTotal:],[#fpfSpaceUsedDepth],'1k')"]B
Group=DiskY
Hidden=#hideDiskY#

[DiskYSpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskYSpaceUsage
Percentual=1
Text=%1%
Group=DiskY
Hidden=#hideDiskY#

[DiskYSpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDiskYSpaceUsage
BarColor=#colorDiskY#
Group=DiskY
Hidden=#hideDiskY#

; Disk Z:
[DiskZNameString]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskZName
Y=((#hideDiskZ# = 1) ? ((#largeRowSpacing# = 1) ? -5 : -3) : #rowSpacing#)R
Text=Z: %1
MouseOverAction=[!SetOption DiskZNameString FontColor "#colorButtonPress#"][!UpdateMeter DiskZNameString][!Redraw]
MouseLeaveAction=[!SetOption DiskZNameString FontColor ""][!UpdateMeter DiskZNameString][!Redraw]
LeftMouseUpAction=["Z:\Windows\explorer.exe" /E,Z:\]
Group=DiskZ
Hidden=#hideDiskZ#

[DiskZEjectButton]
Meter=Image
MeterStyle=StyleEjectButton
MouseOverAction=[!SetOption DiskZEjectButton ImageTint "#colorButtonPress#"][!UpdateMeter DiskZEjectButton][!Redraw]
MouseLeaveAction=[!SetOption DiskZEjectButton ImageTint ""][!UpdateMeter DiskZEjectButton][!Redraw]
LeftMouseUpAction=[!CommandMeasure MeasureDiskZEject "Run"]
Group=DiskZ | EjectButtons
Hidden=(#hideDiskZ# = 1) || ([MeasureDiskZType:] = 4) || (#showEjectButtons# = 0)

[DiskZTempString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringDiskTemp
MeasureName=MeasureDiskZTemp
Group=DiskZ | DiskTemps
Hidden=(#hideDiskZ# = 1) || ([MeasureDiskZType:] <> 4) || (#showDiskTemps# = 0) || ([MeasureHwinfoDetect:] = -9000)

[DiskZRWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskZRWTime
Text=%1%
Group=DiskZ
Hidden=#hideDiskZ#

[DiskZWriteArrow]
Meter=Image
MeterStyle=StyleWriteArrow
ImageTint=#colorDiskZ#
Y=(((#showDiskReadWrite# = 0) && (#hideDiskZ# = 0)) ? -#rowSpacing# + 1 : #rowSpacing#)R
Group=DiskZ | DiskZReadWrite
Hidden=(#hideDiskZ# = 1) || (#showDiskReadWrite# = 0)

[DiskZWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskZWrite:],[#fpfWriteDepth],'1k')"]B/s
Group=DiskZ | DiskZReadWrite
Hidden=(#hideDiskZ# = 1) || (#showDiskReadWrite# = 0)

[DiskZReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskZ#
Group=DiskZ | DiskZReadWrite
Hidden=(#hideDiskZ# = 1) || (#showDiskReadWrite# = 0)

[DiskZReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskZRead:],[#fpfReadDepth],'1k')"]B/s
Group=DiskZ | DiskZReadWrite
Hidden=(#hideDiskZ# = 1) || (#showDiskReadWrite# = 0)

[DiskZSpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskZSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]B / [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskZSpaceTotal:],[#fpfSpaceUsedDepth],'1k')"]B
Group=DiskZ
Hidden=#hideDiskZ#

[DiskZSpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskZSpaceUsage
Percentual=1
Text=%1%
Group=DiskZ
Hidden=#hideDiskZ#

[DiskZSpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDiskZSpaceUsage
BarColor=#colorDiskZ#
Group=DiskZ
Hidden=#hideDiskZ#

