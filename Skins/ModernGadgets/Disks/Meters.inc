; Disk A
[DiskANameString]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskAName
Y=((#hideDiskA# = 1) ? ((#largeRowSpacing# = 1) ? -5 : -3) : #rowSpacing#)R
Text="A: %1"
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
Hidden=(#hideDiskA# = 1) || ([MeasureDiskAType:] <> 4) || (#showDiskTemps# = 0)

[DiskARWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskARWTime
Percentual=10
Text="%1%"
Group=DiskA
Hidden=#hideDiskA#

[DiskAWriteArrow]
Meter=Image
MeterStyle=StyleWriteArrow
ImageTint=#colorDiskA#
Group=DiskA | DiskAArrows
Hidden=#hideDiskA#

[DiskAWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
Text="#textDiskAWrite#B/s"
Group=DiskA
Hidden=#hideDiskA#

[DiskAReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskA#
Group=DiskA | DiskAArrows
Hidden=#hideDiskA#

[DiskAReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
Text="#textDiskARead#B/s"
Group=DiskA
Hidden=#hideDiskA#

[DiskASpaceString]
Meter=String
MeterStyle=StyleString
Text="#textDiskASpaceUsed#B / #textDiskASpaceTotal#B"
DynamicVariables=1
Group=DiskA
Hidden=#hideDiskA#

[DiskASpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskASpaceUsage
Percentual=1
Text="%1%"
Group=DiskA
Hidden=#hideDiskA#

[DiskASpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDiskASpaceUsage
BarColor=#colorDiskA#
Group=DiskA
Hidden=#hideDiskA#

; Disk B
[DiskBNameString]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskBName
Y=((#hideDiskB# = 1) ? ((#largeRowSpacing# = 1) ? -5 : -3) : #rowSpacing#)R
Text="B: %1"
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
Hidden=(#hideDiskB# = 1) || ([MeasureDiskBType:] <> 4) || (#showDiskTemps# = 0)

[DiskBRWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskBRWTime
Percentual=10
Text="%1%"
Group=DiskB
Hidden=#hideDiskB#

[DiskBWriteArrow]
Meter=Image
MeterStyle=StyleWriteArrow
ImageTint=#colorDiskB#
Group=DiskB | DiskBArrows
Hidden=#hideDiskB#

[DiskBWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
Text="#textDiskBWrite#B/s"
Group=DiskB
Hidden=#hideDiskB#

[DiskBReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskB#
Group=DiskB | DiskBArrows
Hidden=#hideDiskB#

[DiskBReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
Text="#textDiskBRead#B/s"
Group=DiskB
Hidden=#hideDiskB#

[DiskBSpaceString]
Meter=String
MeterStyle=StyleString
Text="#textDiskBSpaceUsed#B / #textDiskBSpaceTotal#B"
DynamicVariables=1
Group=DiskB
Hidden=#hideDiskB#

[DiskBSpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskBSpaceUsage
Percentual=1
Text="%1%"
Group=DiskB
Hidden=#hideDiskB#

[DiskBSpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDiskBSpaceUsage
BarColor=#colorDiskB#
Group=DiskB
Hidden=#hideDiskB#

; Disk C
[DiskCNameString]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskCName
Y=((#hideDiskC# = 1) ? ((#largeRowSpacing# = 1) ? -5 : -3) : #rowSpacing#)R
Text="C: %1"
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
Hidden=(#hideDiskC# = 1) || ([MeasureDiskCType:] <> 4) || (#showDiskTemps# = 0)

[DiskCRWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskCRWTime
Percentual=10
Text="%1%"
Group=DiskC
Hidden=#hideDiskC#

[DiskCWriteArrow]
Meter=Image
MeterStyle=StyleWriteArrow
ImageTint=#colorDiskC#
Group=DiskC | DiskCArrows
Hidden=#hideDiskC#

[DiskCWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
Text="#textDiskCWrite#B/s"
Group=DiskC
Hidden=#hideDiskC#

[DiskCReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskC#
Group=DiskC | DiskCArrows
Hidden=#hideDiskC#

[DiskCReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
Text="#textDiskCRead#B/s"
Group=DiskC
Hidden=#hideDiskC#

[DiskCSpaceString]
Meter=String
MeterStyle=StyleString
Text="#textDiskCSpaceUsed#B / #textDiskCSpaceTotal#B"
DynamicVariables=1
Group=DiskC
Hidden=#hideDiskC#

[DiskCSpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskCSpaceUsage
Percentual=1
Text="%1%"
Group=DiskC
Hidden=#hideDiskC#

[DiskCSpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDiskCSpaceUsage
BarColor=#colorDiskC#
Group=DiskC
Hidden=#hideDiskC#

; Disk D
[DiskDNameString]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskDName
Y=((#hideDiskD# = 1) ? ((#largeRowSpacing# = 1) ? -5 : -3) : #rowSpacing#)R
Text="D: %1"
MouseOverAction=[!SetOption DiskDNameString FontColor "#colorButtonPress#"][!UpdateMeter DiskDNameString][!Redraw]
MouseLeaveAction=[!SetOption DiskDNameString FontColor ""][!UpdateMeter DiskDNameString][!Redraw]
LeftMouseUpAction=["C:\Windows\explorer.exe" /E,D:\]
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
Hidden=(#hideDiskD# = 1) || ([MeasureDiskDType:] <> 4) || (#showDiskTemps# = 0)

[DiskDRWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskDRWTime
Percentual=10
Text="%1%"
Group=DiskD
Hidden=#hideDiskD#

[DiskDWriteArrow]
Meter=Image
MeterStyle=StyleWriteArrow
ImageTint=#colorDiskD#
Group=DiskD | DiskDArrows
Hidden=#hideDiskD#

[DiskDWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
Text="#textDiskDWrite#B/s"
Group=DiskD
Hidden=#hideDiskD#

[DiskDReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskD#
Group=DiskD | DiskDArrows
Hidden=#hideDiskD#

[DiskDReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
Text="#textDiskDRead#B/s"
Group=DiskD
Hidden=#hideDiskD#

[DiskDSpaceString]
Meter=String
MeterStyle=StyleString
Text="#textDiskDSpaceUsed#B / #textDiskDSpaceTotal#B"
DynamicVariables=1
Group=DiskD
Hidden=#hideDiskD#

[DiskDSpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskDSpaceUsage
Percentual=1
Text="%1%"
Group=DiskD
Hidden=#hideDiskD#

[DiskDSpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDiskDSpaceUsage
BarColor=#colorDiskD#
Group=DiskD
Hidden=#hideDiskD#

; Disk E
[DiskENameString]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskEName
Y=((#hideDiskE# = 1) ? ((#largeRowSpacing# = 1) ? -5 : -3) : #rowSpacing#)R
Text="E: %1"
MouseOverAction=[!SetOption DiskENameString FontColor "#colorButtonPress#"][!UpdateMeter DiskENameString][!Redraw]
MouseLeaveAction=[!SetOption DiskENameString FontColor ""][!UpdateMeter DiskENameString][!Redraw]
LeftMouseUpAction=["C:\Windows\explorer.exe" /E,E:\]
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
Hidden=(#hideDiskE# = 1) || ([MeasureDiskEType:] <> 4) || (#showDiskTemps# = 0)

[DiskERWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskERWTime
Percentual=10
Text="%1%"
Group=DiskE
Hidden=#hideDiskE#

[DiskEWriteArrow]
Meter=Image
MeterStyle=StyleWriteArrow
ImageTint=#colorDiskE#
Group=DiskE | DiskEArrows
Hidden=#hideDiskE#

[DiskEWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
Text="#textDiskEWrite#B/s"
Group=DiskE
Hidden=#hideDiskE#

[DiskEReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskE#
Group=DiskE | DiskEArrows
Hidden=#hideDiskE#

[DiskEReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
Text="#textDiskERead#B/s"
Group=DiskE
Hidden=#hideDiskE#

[DiskESpaceString]
Meter=String
MeterStyle=StyleString
Text="#textDiskESpaceUsed#B / #textDiskESpaceTotal#B"
DynamicVariables=1
Group=DiskE
Hidden=#hideDiskE#

[DiskESpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskESpaceUsage
Percentual=1
Text="%1%"
Group=DiskE
Hidden=#hideDiskE#

[DiskESpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDiskESpaceUsage
BarColor=#colorDiskE#
Group=DiskE
Hidden=#hideDiskE#

; Disk F
[DiskFNameString]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskFName
Y=((#hideDiskF# = 1) ? ((#largeRowSpacing# = 1) ? -5 : -3) : #rowSpacing#)R
Text="F: %1"
MouseOverAction=[!SetOption DiskFNameString FontColor "#colorButtonPress#"][!UpdateMeter DiskFNameString][!Redraw]
MouseLeaveAction=[!SetOption DiskFNameString FontColor ""][!UpdateMeter DiskFNameString][!Redraw]
LeftMouseUpAction=["C:\Windows\explorer.exe" /E,F:\]
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
Hidden=(#hideDiskF# = 1) || ([MeasureDiskFType:] <> 4) || (#showDiskTemps# = 0)

[DiskFRWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskFRWTime
Percentual=10
Text="%1%"
Group=DiskF
Hidden=#hideDiskF#

[DiskFWriteArrow]
Meter=Image
MeterStyle=StyleWriteArrow
ImageTint=#colorDiskF#
Group=DiskF | DiskFArrows
Hidden=#hideDiskF#

[DiskFWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
Text="#textDiskFWrite#B/s"
Group=DiskF
Hidden=#hideDiskF#

[DiskFReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskF#
Group=DiskF | DiskFArrows
Hidden=#hideDiskF#

[DiskFReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
Text="#textDiskFRead#B/s"
Group=DiskF
Hidden=#hideDiskF#

[DiskFSpaceString]
Meter=String
MeterStyle=StyleString
Text="#textDiskFSpaceUsed#B / #textDiskFSpaceTotal#B"
DynamicVariables=1
Group=DiskF
Hidden=#hideDiskF#

[DiskFSpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskFSpaceUsage
Percentual=1
Text="%1%"
Group=DiskF
Hidden=#hideDiskF#

[DiskFSpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDiskFSpaceUsage
BarColor=#colorDiskF#
Group=DiskF
Hidden=#hideDiskF#

; Disk G
[DiskGNameString]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskGName
Y=((#hideDiskG# = 1) ? ((#largeRowSpacing# = 1) ? -5 : -3) : #rowSpacing#)R
Text="G: %1"
MouseOverAction=[!SetOption DiskGNameString FontColor "#colorButtonPress#"][!UpdateMeter DiskGNameString][!Redraw]
MouseLeaveAction=[!SetOption DiskGNameString FontColor ""][!UpdateMeter DiskGNameString][!Redraw]
LeftMouseUpAction=["C:\Windows\explorer.exe" /E,G:\]
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
Hidden=(#hideDiskG# = 1) || ([MeasureDiskGType:] <> 4) || (#showDiskTemps# = 0)

[DiskGRWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskGRWTime
Percentual=10
Text="%1%"
Group=DiskG
Hidden=#hideDiskG#

[DiskGWriteArrow]
Meter=Image
MeterStyle=StyleWriteArrow
ImageTint=#colorDiskG#
Group=DiskG | DiskGArrows
Hidden=#hideDiskG#

[DiskGWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
Text="#textDiskGWrite#B/s"
Group=DiskG
Hidden=#hideDiskG#

[DiskGReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskG#
Group=DiskG | DiskGArrows
Hidden=#hideDiskG#

[DiskGReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
Text="#textDiskGRead#B/s"
Group=DiskG
Hidden=#hideDiskG#

[DiskGSpaceString]
Meter=String
MeterStyle=StyleString
Text="#textDiskGSpaceUsed#B / #textDiskGSpaceTotal#B"
DynamicVariables=1
Group=DiskG
Hidden=#hideDiskG#

[DiskGSpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskGSpaceUsage
Percentual=1
Text="%1%"
Group=DiskG
Hidden=#hideDiskG#

[DiskGSpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDiskGSpaceUsage
BarColor=#colorDiskG#
Group=DiskG
Hidden=#hideDiskG#

; Disk H
[DiskHNameString]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskHName
Y=((#hideDiskH# = 1) ? ((#largeRowSpacing# = 1) ? -5 : -3) : #rowSpacing#)R
Text="H: %1"
MouseOverAction=[!SetOption DiskHNameString FontColor "#colorButtonPress#"][!UpdateMeter DiskHNameString][!Redraw]
MouseLeaveAction=[!SetOption DiskHNameString FontColor ""][!UpdateMeter DiskHNameString][!Redraw]
LeftMouseUpAction=["C:\Windows\explorer.exe" /E,H:\]
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
Hidden=(#hideDiskH# = 1) || ([MeasureDiskHType:] <> 4) || (#showDiskTemps# = 0)

[DiskHRWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskHRWTime
Percentual=10
Text="%1%"
Group=DiskH
Hidden=#hideDiskH#

[DiskHWriteArrow]
Meter=Image
MeterStyle=StyleWriteArrow
ImageTint=#colorDiskH#
Group=DiskH | DiskHArrows
Hidden=#hideDiskH#

[DiskHWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
Text="#textDiskHWrite#B/s"
Group=DiskH
Hidden=#hideDiskH#

[DiskHReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskH#
Group=DiskH | DiskHArrows
Hidden=#hideDiskH#

[DiskHReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
Text="#textDiskHRead#B/s"
Group=DiskH
Hidden=#hideDiskH#

[DiskHSpaceString]
Meter=String
MeterStyle=StyleString
Text="#textDiskHSpaceUsed#B / #textDiskHSpaceTotal#B"
DynamicVariables=1
Group=DiskH
Hidden=#hideDiskH#

[DiskHSpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskHSpaceUsage
Percentual=1
Text="%1%"
Group=DiskH
Hidden=#hideDiskH#

[DiskHSpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDiskHSpaceUsage
BarColor=#colorDiskH#
Group=DiskH
Hidden=#hideDiskH#

; Disk I
[DiskINameString]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskIName
Y=((#hideDiskI# = 1) ? ((#largeRowSpacing# = 1) ? -5 : -3) : #rowSpacing#)R
Text="I: %1"
MouseOverAction=[!SetOption DiskINameString FontColor "#colorButtonPress#"][!UpdateMeter DiskINameString][!Redraw]
MouseLeaveAction=[!SetOption DiskINameString FontColor ""][!UpdateMeter DiskINameString][!Redraw]
LeftMouseUpAction=["C:\Windows\explorer.exe" /E,I:\]
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
Hidden=(#hideDiskI# = 1) || ([MeasureDiskIType:] <> 4) || (#showDiskTemps# = 0)

[DiskIRWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskIRWTime
Percentual=10
Text="%1%"
Group=DiskI
Hidden=#hideDiskI#

[DiskIWriteArrow]
Meter=Image
MeterStyle=StyleWriteArrow
ImageTint=#colorDiskI#
Group=DiskI | DiskIArrows
Hidden=#hideDiskI#

[DiskIWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
Text="#textDiskIWrite#B/s"
Group=DiskI
Hidden=#hideDiskI#

[DiskIReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskI#
Group=DiskI | DiskIArrows
Hidden=#hideDiskI#

[DiskIReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
Text="#textDiskIRead#B/s"
Group=DiskI
Hidden=#hideDiskI#

[DiskISpaceString]
Meter=String
MeterStyle=StyleString
Text="#textDiskISpaceUsed#B / #textDiskISpaceTotal#B"
DynamicVariables=1
Group=DiskI
Hidden=#hideDiskI#

[DiskISpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskISpaceUsage
Percentual=1
Text="%1%"
Group=DiskI
Hidden=#hideDiskI#

[DiskISpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDiskISpaceUsage
BarColor=#colorDiskI#
Group=DiskI
Hidden=#hideDiskI#

; Disk J
[DiskJNameString]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskJName
Y=((#hideDiskJ# = 1) ? ((#largeRowSpacing# = 1) ? -5 : -3) : #rowSpacing#)R
Text="J: %1"
MouseOverAction=[!SetOption DiskJNameString FontColor "#colorButtonPress#"][!UpdateMeter DiskJNameString][!Redraw]
MouseLeaveAction=[!SetOption DiskJNameString FontColor ""][!UpdateMeter DiskJNameString][!Redraw]
LeftMouseUpAction=["C:\Windows\explorer.exe" /E,J:\]
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
Hidden=(#hideDiskJ# = 1) || ([MeasureDiskJType:] <> 4) || (#showDiskTemps# = 0)

[DiskJRWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskJRWTime
Percentual=10
Text="%1%"
Group=DiskJ
Hidden=#hideDiskJ#

[DiskJWriteArrow]
Meter=Image
MeterStyle=StyleWriteArrow
ImageTint=#colorDiskJ#
Group=DiskJ | DiskJArrows
Hidden=#hideDiskJ#

[DiskJWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
Text="#textDiskJWrite#B/s"
Group=DiskJ
Hidden=#hideDiskJ#

[DiskJReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskJ#
Group=DiskJ | DiskJArrows
Hidden=#hideDiskJ#

[DiskJReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
Text="#textDiskJRead#B/s"
Group=DiskJ
Hidden=#hideDiskJ#

[DiskJSpaceString]
Meter=String
MeterStyle=StyleString
Text="#textDiskJSpaceUsed#B / #textDiskJSpaceTotal#B"
DynamicVariables=1
Group=DiskJ
Hidden=#hideDiskJ#

[DiskJSpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskJSpaceUsage
Percentual=1
Text="%1%"
Group=DiskJ
Hidden=#hideDiskJ#

[DiskJSpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDiskJSpaceUsage
BarColor=#colorDiskJ#
Group=DiskJ
Hidden=#hideDiskJ#

; Disk K
[DiskKNameString]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskKName
Y=((#hideDiskK# = 1) ? ((#largeRowSpacing# = 1) ? -5 : -3) : #rowSpacing#)R
Text="K: %1"
MouseOverAction=[!SetOption DiskKNameString FontColor "#colorButtonPress#"][!UpdateMeter DiskKNameString][!Redraw]
MouseLeaveAction=[!SetOption DiskKNameString FontColor ""][!UpdateMeter DiskKNameString][!Redraw]
LeftMouseUpAction=["C:\Windows\explorer.exe" /E,K:\]
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
Hidden=(#hideDiskK# = 1) || ([MeasureDiskKType:] <> 4) || (#showDiskTemps# = 0)

[DiskKRWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskKRWTime
Percentual=10
Text="%1%"
Group=DiskK
Hidden=#hideDiskK#

[DiskKWriteArrow]
Meter=Image
MeterStyle=StyleWriteArrow
ImageTint=#colorDiskK#
Group=DiskK | DiskKArrows
Hidden=#hideDiskK#

[DiskKWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
Text="#textDiskKWrite#B/s"
Group=DiskK
Hidden=#hideDiskK#

[DiskKReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskK#
Group=DiskK | DiskKArrows
Hidden=#hideDiskK#

[DiskKReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
Text="#textDiskKRead#B/s"
Group=DiskK
Hidden=#hideDiskK#

[DiskKSpaceString]
Meter=String
MeterStyle=StyleString
Text="#textDiskKSpaceUsed#B / #textDiskKSpaceTotal#B"
DynamicVariables=1
Group=DiskK
Hidden=#hideDiskK#

[DiskKSpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskKSpaceUsage
Percentual=1
Text="%1%"
Group=DiskK
Hidden=#hideDiskK#

[DiskKSpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDiskKSpaceUsage
BarColor=#colorDiskK#
Group=DiskK
Hidden=#hideDiskK#

; Disk L
[DiskLNameString]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskLName
Y=((#hideDiskL# = 1) ? ((#largeRowSpacing# = 1) ? -5 : -3) : #rowSpacing#)R
Text="L: %1"
MouseOverAction=[!SetOption DiskLNameString FontColor "#colorButtonPress#"][!UpdateMeter DiskLNameString][!Redraw]
MouseLeaveAction=[!SetOption DiskLNameString FontColor ""][!UpdateMeter DiskLNameString][!Redraw]
LeftMouseUpAction=["C:\Windows\explorer.exe" /E,L:\]
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
Hidden=(#hideDiskL# = 1) || ([MeasureDiskLType:] <> 4) || (#showDiskTemps# = 0)

[DiskLRWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskLRWTime
Percentual=10
Text="%1%"
Group=DiskL
Hidden=#hideDiskL#

[DiskLWriteArrow]
Meter=Image
MeterStyle=StyleWriteArrow
ImageTint=#colorDiskL#
Group=DiskL | DiskLArrows
Hidden=#hideDiskL#

[DiskLWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
Text="#textDiskLWrite#B/s"
Group=DiskL
Hidden=#hideDiskL#

[DiskLReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskL#
Group=DiskL | DiskLArrows
Hidden=#hideDiskL#

[DiskLReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
Text="#textDiskLRead#B/s"
Group=DiskL
Hidden=#hideDiskL#

[DiskLSpaceString]
Meter=String
MeterStyle=StyleString
Text="#textDiskLSpaceUsed#B / #textDiskLSpaceTotal#B"
DynamicVariables=1
Group=DiskL
Hidden=#hideDiskL#

[DiskLSpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskLSpaceUsage
Percentual=1
Text="%1%"
Group=DiskL
Hidden=#hideDiskL#

[DiskLSpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDiskLSpaceUsage
BarColor=#colorDiskL#
Group=DiskL
Hidden=#hideDiskL#

; Disk M
[DiskMNameString]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskMName
Y=((#hideDiskM# = 1) ? ((#largeRowSpacing# = 1) ? -5 : -3) : #rowSpacing#)R
Text="M: %1"
MouseOverAction=[!SetOption DiskMNameString FontColor "#colorButtonPress#"][!UpdateMeter DiskMNameString][!Redraw]
MouseLeaveAction=[!SetOption DiskMNameString FontColor ""][!UpdateMeter DiskMNameString][!Redraw]
LeftMouseUpAction=["C:\Windows\explorer.exe" /E,M:\]
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
Hidden=(#hideDiskM# = 1) || ([MeasureDiskMType:] <> 4) || (#showDiskTemps# = 0)

[DiskMRWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskMRWTime
Percentual=10
Text="%1%"
Group=DiskM
Hidden=#hideDiskM#

[DiskMWriteArrow]
Meter=Image
MeterStyle=StyleWriteArrow
ImageTint=#colorDiskM#
Group=DiskM | DiskMArrows
Hidden=#hideDiskM#

[DiskMWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
Text="#textDiskMWrite#B/s"
Group=DiskM
Hidden=#hideDiskM#

[DiskMReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskM#
Group=DiskM | DiskMArrows
Hidden=#hideDiskM#

[DiskMReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
Text="#textDiskMRead#B/s"
Group=DiskM
Hidden=#hideDiskM#

[DiskMSpaceString]
Meter=String
MeterStyle=StyleString
Text="#textDiskMSpaceUsed#B / #textDiskMSpaceTotal#B"
DynamicVariables=1
Group=DiskM
Hidden=#hideDiskM#

[DiskMSpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskMSpaceUsage
Percentual=1
Text="%1%"
Group=DiskM
Hidden=#hideDiskM#

[DiskMSpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDiskMSpaceUsage
BarColor=#colorDiskM#
Group=DiskM
Hidden=#hideDiskM#

; Disk N
[DiskNNameString]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskNName
Y=((#hideDiskN# = 1) ? ((#largeRowSpacing# = 1) ? -5 : -3) : #rowSpacing#)R
Text="N: %1"
MouseOverAction=[!SetOption DiskNNameString FontColor "#colorButtonPress#"][!UpdateMeter DiskNNameString][!Redraw]
MouseLeaveAction=[!SetOption DiskNNameString FontColor ""][!UpdateMeter DiskNNameString][!Redraw]
LeftMouseUpAction=["C:\Windows\explorer.exe" /E,N:\]
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
Hidden=(#hideDiskN# = 1) || ([MeasureDiskNType:] <> 4) || (#showDiskTemps# = 0)

[DiskNRWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskNRWTime
Percentual=10
Text="%1%"
Group=DiskN
Hidden=#hideDiskN#

[DiskNWriteArrow]
Meter=Image
MeterStyle=StyleWriteArrow
ImageTint=#colorDiskN#
Group=DiskN | DiskNArrows
Hidden=#hideDiskN#

[DiskNWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
Text="#textDiskNWrite#B/s"
Group=DiskN
Hidden=#hideDiskN#

[DiskNReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskN#
Group=DiskN | DiskNArrows
Hidden=#hideDiskN#

[DiskNReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
Text="#textDiskNRead#B/s"
Group=DiskN
Hidden=#hideDiskN#

[DiskNSpaceString]
Meter=String
MeterStyle=StyleString
Text="#textDiskNSpaceUsed#B / #textDiskNSpaceTotal#B"
DynamicVariables=1
Group=DiskN
Hidden=#hideDiskN#

[DiskNSpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskNSpaceUsage
Percentual=1
Text="%1%"
Group=DiskN
Hidden=#hideDiskN#

[DiskNSpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDiskNSpaceUsage
BarColor=#colorDiskN#
Group=DiskN
Hidden=#hideDiskN#

; Disk O
[DiskONameString]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskOName
Y=((#hideDiskO# = 1) ? ((#largeRowSpacing# = 1) ? -5 : -3) : #rowSpacing#)R
Text="O: %1"
MouseOverAction=[!SetOption DiskONameString FontColor "#colorButtonPress#"][!UpdateMeter DiskONameString][!Redraw]
MouseLeaveAction=[!SetOption DiskONameString FontColor ""][!UpdateMeter DiskONameString][!Redraw]
LeftMouseUpAction=["C:\Windows\explorer.exe" /E,O:\]
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
Hidden=(#hideDiskO# = 1) || ([MeasureDiskOType:] <> 4) || (#showDiskTemps# = 0)

[DiskORWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskORWTime
Percentual=10
Text="%1%"
Group=DiskO
Hidden=#hideDiskO#

[DiskOWriteArrow]
Meter=Image
MeterStyle=StyleWriteArrow
ImageTint=#colorDiskO#
Group=DiskO | DiskOArrows
Hidden=#hideDiskO#

[DiskOWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
Text="#textDiskOWrite#B/s"
Group=DiskO
Hidden=#hideDiskO#

[DiskOReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskO#
Group=DiskO | DiskOArrows
Hidden=#hideDiskO#

[DiskOReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
Text="#textDiskORead#B/s"
Group=DiskO
Hidden=#hideDiskO#

[DiskOSpaceString]
Meter=String
MeterStyle=StyleString
Text="#textDiskOSpaceUsed#B / #textDiskOSpaceTotal#B"
DynamicVariables=1
Group=DiskO
Hidden=#hideDiskO#

[DiskOSpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskOSpaceUsage
Percentual=1
Text="%1%"
Group=DiskO
Hidden=#hideDiskO#

[DiskOSpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDiskOSpaceUsage
BarColor=#colorDiskO#
Group=DiskO
Hidden=#hideDiskO#

; Disk P
[DiskPNameString]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskPName
Y=((#hideDiskP# = 1) ? ((#largeRowSpacing# = 1) ? -5 : -3) : #rowSpacing#)R
Text="P: %1"
MouseOverAction=[!SetOption DiskPNameString FontColor "#colorButtonPress#"][!UpdateMeter DiskPNameString][!Redraw]
MouseLeaveAction=[!SetOption DiskPNameString FontColor ""][!UpdateMeter DiskPNameString][!Redraw]
LeftMouseUpAction=["C:\Windows\explorer.exe" /E,P:\]
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
Hidden=(#hideDiskP# = 1) || ([MeasureDiskPType:] <> 4) || (#showDiskTemps# = 0)

[DiskPRWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskPRWTime
Percentual=10
Text="%1%"
Group=DiskP
Hidden=#hideDiskP#

[DiskPWriteArrow]
Meter=Image
MeterStyle=StyleWriteArrow
ImageTint=#colorDiskP#
Group=DiskP | DiskPArrows
Hidden=#hideDiskP#

[DiskPWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
Text="#textDiskPWrite#B/s"
Group=DiskP
Hidden=#hideDiskP#

[DiskPReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskP#
Group=DiskP | DiskPArrows
Hidden=#hideDiskP#

[DiskPReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
Text="#textDiskPRead#B/s"
Group=DiskP
Hidden=#hideDiskP#

[DiskPSpaceString]
Meter=String
MeterStyle=StyleString
Text="#textDiskPSpaceUsed#B / #textDiskPSpaceTotal#B"
DynamicVariables=1
Group=DiskP
Hidden=#hideDiskP#

[DiskPSpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskPSpaceUsage
Percentual=1
Text="%1%"
Group=DiskP
Hidden=#hideDiskP#

[DiskPSpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDiskPSpaceUsage
BarColor=#colorDiskP#
Group=DiskP
Hidden=#hideDiskP#

; Disk Q
[DiskQNameString]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskQName
Y=((#hideDiskQ# = 1) ? ((#largeRowSpacing# = 1) ? -5 : -3) : #rowSpacing#)R
Text="Q: %1"
MouseOverAction=[!SetOption DiskQNameString FontColor "#colorButtonPress#"][!UpdateMeter DiskQNameString][!Redraw]
MouseLeaveAction=[!SetOption DiskQNameString FontColor ""][!UpdateMeter DiskQNameString][!Redraw]
LeftMouseUpAction=["C:\Windows\explorer.exe" /E,Q:\]
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
Hidden=(#hideDiskQ# = 1) || ([MeasureDiskQType:] <> 4) || (#showDiskTemps# = 0)

[DiskQRWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskQRWTime
Percentual=10
Text="%1%"
Group=DiskQ
Hidden=#hideDiskQ#

[DiskQWriteArrow]
Meter=Image
MeterStyle=StyleWriteArrow
ImageTint=#colorDiskQ#
Group=DiskQ | DiskQArrows
Hidden=#hideDiskQ#

[DiskQWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
Text="#textDiskQWrite#B/s"
Group=DiskQ
Hidden=#hideDiskQ#

[DiskQReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskQ#
Group=DiskQ | DiskQArrows
Hidden=#hideDiskQ#

[DiskQReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
Text="#textDiskQRead#B/s"
Group=DiskQ
Hidden=#hideDiskQ#

[DiskQSpaceString]
Meter=String
MeterStyle=StyleString
Text="#textDiskQSpaceUsed#B / #textDiskQSpaceTotal#B"
DynamicVariables=1
Group=DiskQ
Hidden=#hideDiskQ#

[DiskQSpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskQSpaceUsage
Percentual=1
Text="%1%"
Group=DiskQ
Hidden=#hideDiskQ#

[DiskQSpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDiskQSpaceUsage
BarColor=#colorDiskQ#
Group=DiskQ
Hidden=#hideDiskQ#

; Disk R
[DiskRNameString]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskRName
Y=((#hideDiskR# = 1) ? ((#largeRowSpacing# = 1) ? -5 : -3) : #rowSpacing#)R
Text="R: %1"
MouseOverAction=[!SetOption DiskRNameString FontColor "#colorButtonPress#"][!UpdateMeter DiskRNameString][!Redraw]
MouseLeaveAction=[!SetOption DiskRNameString FontColor ""][!UpdateMeter DiskRNameString][!Redraw]
LeftMouseUpAction=["C:\Windows\explorer.exe" /E,R:\]
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
Hidden=(#hideDiskR# = 1) || ([MeasureDiskRType:] <> 4) || (#showDiskTemps# = 0)

[DiskRRWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskRRWTime
Percentual=10
Text="%1%"
Group=DiskR
Hidden=#hideDiskR#

[DiskRWriteArrow]
Meter=Image
MeterStyle=StyleWriteArrow
ImageTint=#colorDiskR#
Group=DiskR | DiskRArrows
Hidden=#hideDiskR#

[DiskRWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
Text="#textDiskRWrite#B/s"
Group=DiskR
Hidden=#hideDiskR#

[DiskRReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskR#
Group=DiskR | DiskRArrows
Hidden=#hideDiskR#

[DiskRReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
Text="#textDiskRRead#B/s"
Group=DiskR
Hidden=#hideDiskR#

[DiskRSpaceString]
Meter=String
MeterStyle=StyleString
Text="#textDiskRSpaceUsed#B / #textDiskRSpaceTotal#B"
DynamicVariables=1
Group=DiskR
Hidden=#hideDiskR#

[DiskRSpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskRSpaceUsage
Percentual=1
Text="%1%"
Group=DiskR
Hidden=#hideDiskR#

[DiskRSpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDiskRSpaceUsage
BarColor=#colorDiskR#
Group=DiskR
Hidden=#hideDiskR#

; Disk S
[DiskSNameString]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskSName
Y=((#hideDiskS# = 1) ? ((#largeRowSpacing# = 1) ? -5 : -3) : #rowSpacing#)R
Text="S: %1"
MouseOverAction=[!SetOption DiskSNameString FontColor "#colorButtonPress#"][!UpdateMeter DiskSNameString][!Redraw]
MouseLeaveAction=[!SetOption DiskSNameString FontColor ""][!UpdateMeter DiskSNameString][!Redraw]
LeftMouseUpAction=["C:\Windows\explorer.exe" /E,S:\]
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
Hidden=(#hideDiskS# = 1) || ([MeasureDiskSType:] <> 4) || (#showDiskTemps# = 0)

[DiskSRWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskSRWTime
Percentual=10
Text="%1%"
Group=DiskS
Hidden=#hideDiskS#

[DiskSWriteArrow]
Meter=Image
MeterStyle=StyleWriteArrow
ImageTint=#colorDiskS#
Group=DiskS | DiskSArrows
Hidden=#hideDiskS#

[DiskSWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
Text="#textDiskSWrite#B/s"
Group=DiskS
Hidden=#hideDiskS#

[DiskSReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskS#
Group=DiskS | DiskSArrows
Hidden=#hideDiskS#

[DiskSReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
Text="#textDiskSRead#B/s"
Group=DiskS
Hidden=#hideDiskS#

[DiskSSpaceString]
Meter=String
MeterStyle=StyleString
Text="#textDiskSSpaceUsed#B / #textDiskSSpaceTotal#B"
DynamicVariables=1
Group=DiskS
Hidden=#hideDiskS#

[DiskSSpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskSSpaceUsage
Percentual=1
Text="%1%"
Group=DiskS
Hidden=#hideDiskS#

[DiskSSpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDiskSSpaceUsage
BarColor=#colorDiskS#
Group=DiskS
Hidden=#hideDiskS#

; Disk T
[DiskTNameString]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskTName
Y=((#hideDiskT# = 1) ? ((#largeRowSpacing# = 1) ? -5 : -3) : #rowSpacing#)R
Text="T: %1"
MouseOverAction=[!SetOption DiskTNameString FontColor "#colorButtonPress#"][!UpdateMeter DiskTNameString][!Redraw]
MouseLeaveAction=[!SetOption DiskTNameString FontColor ""][!UpdateMeter DiskTNameString][!Redraw]
LeftMouseUpAction=["C:\Windows\explorer.exe" /E,T:\]
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
Hidden=(#hideDiskT# = 1) || ([MeasureDiskTType:] <> 4) || (#showDiskTemps# = 0)

[DiskTRWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskTRWTime
Percentual=10
Text="%1%"
Group=DiskT
Hidden=#hideDiskT#

[DiskTWriteArrow]
Meter=Image
MeterStyle=StyleWriteArrow
ImageTint=#colorDiskT#
Group=DiskT | DiskTArrows
Hidden=#hideDiskT#

[DiskTWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
Text="#textDiskTWrite#B/s"
Group=DiskT
Hidden=#hideDiskT#

[DiskTReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskT#
Group=DiskT | DiskTArrows
Hidden=#hideDiskT#

[DiskTReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
Text="#textDiskTRead#B/s"
Group=DiskT
Hidden=#hideDiskT#

[DiskTSpaceString]
Meter=String
MeterStyle=StyleString
Text="#textDiskTSpaceUsed#B / #textDiskTSpaceTotal#B"
DynamicVariables=1
Group=DiskT
Hidden=#hideDiskT#

[DiskTSpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskTSpaceUsage
Percentual=1
Text="%1%"
Group=DiskT
Hidden=#hideDiskT#

[DiskTSpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDiskTSpaceUsage
BarColor=#colorDiskT#
Group=DiskT
Hidden=#hideDiskT#

; Disk U
[DiskUNameString]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskUName
Y=((#hideDiskU# = 1) ? ((#largeRowSpacing# = 1) ? -5 : -3) : #rowSpacing#)R
Text="U: %1"
MouseOverAction=[!SetOption DiskUNameString FontColor "#colorButtonPress#"][!UpdateMeter DiskUNameString][!Redraw]
MouseLeaveAction=[!SetOption DiskUNameString FontColor ""][!UpdateMeter DiskUNameString][!Redraw]
LeftMouseUpAction=["C:\Windows\explorer.exe" /E,U:\]
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
Hidden=(#hideDiskU# = 1) || ([MeasureDiskUType:] <> 4) || (#showDiskTemps# = 0)

[DiskURWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskURWTime
Percentual=10
Text="%1%"
Group=DiskU
Hidden=#hideDiskU#

[DiskUWriteArrow]
Meter=Image
MeterStyle=StyleWriteArrow
ImageTint=#colorDiskU#
Group=DiskU | DiskUArrows
Hidden=#hideDiskU#

[DiskUWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
Text="#textDiskUWrite#B/s"
Group=DiskU
Hidden=#hideDiskU#

[DiskUReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskU#
Group=DiskU | DiskUArrows
Hidden=#hideDiskU#

[DiskUReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
Text="#textDiskURead#B/s"
Group=DiskU
Hidden=#hideDiskU#

[DiskUSpaceString]
Meter=String
MeterStyle=StyleString
Text="#textDiskUSpaceUsed#B / #textDiskUSpaceTotal#B"
DynamicVariables=1
Group=DiskU
Hidden=#hideDiskU#

[DiskUSpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskUSpaceUsage
Percentual=1
Text="%1%"
Group=DiskU
Hidden=#hideDiskU#

[DiskUSpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDiskUSpaceUsage
BarColor=#colorDiskU#
Group=DiskU
Hidden=#hideDiskU#

; Disk V
[DiskVNameString]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskVName
Y=((#hideDiskV# = 1) ? ((#largeRowSpacing# = 1) ? -5 : -3) : #rowSpacing#)R
Text="V: %1"
MouseOverAction=[!SetOption DiskVNameString FontColor "#colorButtonPress#"][!UpdateMeter DiskVNameString][!Redraw]
MouseLeaveAction=[!SetOption DiskVNameString FontColor ""][!UpdateMeter DiskVNameString][!Redraw]
LeftMouseUpAction=["C:\Windows\explorer.exe" /E,V:\]
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
Group=DiskV | DiskVemps
Hidden=(#hideDiskV# = 1) || ([MeasureDiskVType:] <> 4) || (#showDiskTemps# = 0)

[DiskVRWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskVRWTime
Percentual=10
Text="%1%"
Group=DiskV
Hidden=#hideDiskV#

[DiskVWriteArrow]
Meter=Image
MeterStyle=StyleWriteArrow
ImageTint=#colorDiskV#
Group=DiskV | DiskVArrows
Hidden=#hideDiskV#

[DiskVWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
Text="#textDiskVWrite#B/s"
Group=DiskV
Hidden=#hideDiskV#

[DiskVReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskV#
Group=DiskV | DiskVArrows
Hidden=#hideDiskV#

[DiskVReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
Text="#textDiskVRead#B/s"
Group=DiskV
Hidden=#hideDiskV#

[DiskVSpaceString]
Meter=String
MeterStyle=StyleString
Text="#textDiskVSpaceUsed#B / #textDiskVSpaceTotal#B"
DynamicVariables=1
Group=DiskV
Hidden=#hideDiskV#

[DiskVSpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskVSpaceUsage
Percentual=1
Text="%1%"
Group=DiskV
Hidden=#hideDiskV#

[DiskVSpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDiskVSpaceUsage
BarColor=#colorDiskV#
Group=DiskV
Hidden=#hideDiskV#

; Disk W
[DiskWNameString]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskWName
Y=((#hideDiskW# = 1) ? ((#largeRowSpacing# = 1) ? -5 : -3) : #rowSpacing#)R
Text="W: %1"
MouseOverAction=[!SetOption DiskWNameString FontColor "#colorButtonPress#"][!UpdateMeter DiskWNameString][!Redraw]
MouseLeaveAction=[!SetOption DiskWNameString FontColor ""][!UpdateMeter DiskWNameString][!Redraw]
LeftMouseUpAction=["C:\Windows\explorer.exe" /E,W:\]
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
Hidden=(#hideDiskW# = 1) || ([MeasureDiskWType:] <> 4) || (#showDiskTemps# = 0)

[DiskWRWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskWRWTime
Percentual=10
Text="%1%"
Group=DiskW
Hidden=#hideDiskW#

[DiskWWriteArrow]
Meter=Image
MeterStyle=StyleWriteArrow
ImageTint=#colorDiskW#
Group=DiskW | DiskWArrows
Hidden=#hideDiskW#

[DiskWWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
Text="#textDiskWWrite#B/s"
Group=DiskW
Hidden=#hideDiskW#

[DiskWReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskW#
Group=DiskW | DiskWArrows
Hidden=#hideDiskW#

[DiskWReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
Text="#textDiskWRead#B/s"
Group=DiskW
Hidden=#hideDiskW#

[DiskWSpaceString]
Meter=String
MeterStyle=StyleString
Text="#textDiskWSpaceUsed#B / #textDiskWSpaceTotal#B"
DynamicVariables=1
Group=DiskW
Hidden=#hideDiskW#

[DiskWSpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskWSpaceUsage
Percentual=1
Text="%1%"
Group=DiskW
Hidden=#hideDiskW#

[DiskWSpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDiskWSpaceUsage
BarColor=#colorDiskW#
Group=DiskW
Hidden=#hideDiskW#

; Disk X
[DiskXNameString]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskXName
Y=((#hideDiskX# = 1) ? ((#largeRowSpacing# = 1) ? -5 : -3) : #rowSpacing#)R
Text="X: %1"
MouseOverAction=[!SetOption DiskXNameString FontColor "#colorButtonPress#"][!UpdateMeter DiskXNameString][!Redraw]
MouseLeaveAction=[!SetOption DiskXNameString FontColor ""][!UpdateMeter DiskXNameString][!Redraw]
LeftMouseUpAction=["C:\Windows\explorer.exe" /E,X:\]
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
Hidden=(#hideDiskX# = 1) || ([MeasureDiskXType:] <> 4) || (#showDiskTemps# = 0)

[DiskXRWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskXRWTime
Percentual=10
Text="%1%"
Group=DiskX
Hidden=#hideDiskX#

[DiskXWriteArrow]
Meter=Image
MeterStyle=StyleWriteArrow
ImageTint=#colorDiskX#
Group=DiskX | DiskXArrows
Hidden=#hideDiskX#

[DiskXWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
Text="#textDiskXWrite#B/s"
Group=DiskX
Hidden=#hideDiskX#

[DiskXReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskX#
Group=DiskX | DiskXArrows
Hidden=#hideDiskX#

[DiskXReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
Text="#textDiskXRead#B/s"
Group=DiskX
Hidden=#hideDiskX#

[DiskXSpaceString]
Meter=String
MeterStyle=StyleString
Text="#textDiskXSpaceUsed#B / #textDiskXSpaceTotal#B"
DynamicVariables=1
Group=DiskX
Hidden=#hideDiskX#

[DiskXSpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskXSpaceUsage
Percentual=1
Text="%1%"
Group=DiskX
Hidden=#hideDiskX#

[DiskXSpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDiskXSpaceUsage
BarColor=#colorDiskX#
Group=DiskX
Hidden=#hideDiskX#

; Disk Y
[DiskYNameString]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskYName
Y=((#hideDiskY# = 1) ? ((#largeRowSpacing# = 1) ? -5 : -3) : #rowSpacing#)R
Text="Y: %1"
MouseOverAction=[!SetOption DiskYNameString FontColor "#colorButtonPress#"][!UpdateMeter DiskYNameString][!Redraw]
MouseLeaveAction=[!SetOption DiskYNameString FontColor ""][!UpdateMeter DiskYNameString][!Redraw]
LeftMouseUpAction=["C:\Windows\explorer.exe" /E,Y:\]
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
Hidden=(#hideDiskY# = 1) || ([MeasureDiskYType:] <> 4) || (#showDiskTemps# = 0)

[DiskYRWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskYRWTime
Percentual=10
Text="%1%"
Group=DiskY
Hidden=#hideDiskY#

[DiskYWriteArrow]
Meter=Image
MeterStyle=StyleWriteArrow
ImageTint=#colorDiskY#
Group=DiskY | DiskYArrows
Hidden=#hideDiskY#

[DiskYWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
Text="#textDiskYWrite#B/s"
Group=DiskY
Hidden=#hideDiskY#

[DiskYReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskY#
Group=DiskY | DiskYArrows
Hidden=#hideDiskY#

[DiskYReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
Text="#textDiskYRead#B/s"
Group=DiskY
Hidden=#hideDiskY#

[DiskYSpaceString]
Meter=String
MeterStyle=StyleString
Text="#textDiskYSpaceUsed#B / #textDiskYSpaceTotal#B"
DynamicVariables=1
Group=DiskY
Hidden=#hideDiskY#

[DiskYSpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskYSpaceUsage
Percentual=1
Text="%1%"
Group=DiskY
Hidden=#hideDiskY#

[DiskYSpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDiskYSpaceUsage
BarColor=#colorDiskY#
Group=DiskY
Hidden=#hideDiskY#

; Disk Z
[DiskZNameString]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskZName
Y=((#hideDiskZ# = 1) ? ((#largeRowSpacing# = 1) ? -5 : -3) : #rowSpacing#)R
Text="Z: %1"
MouseOverAction=[!SetOption DiskZNameString FontColor "#colorButtonPress#"][!UpdateMeter DiskZNameString][!Redraw]
MouseLeaveAction=[!SetOption DiskZNameString FontColor ""][!UpdateMeter DiskZNameString][!Redraw]
LeftMouseUpAction=["C:\Windows\explorer.exe" /E,Z:\]
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
Hidden=(#hideDiskZ# = 1) || ([MeasureDiskZType:] <> 4) || (#showDiskTemps# = 0)

[DiskZRWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskZRWTime
Percentual=10
Text="%1%"
Group=DiskZ
Hidden=#hideDiskZ#

[DiskZWriteArrow]
Meter=Image
MeterStyle=StyleWriteArrow
ImageTint=#colorDiskZ#
Y=(((#showDiskReadWrite# = 0) && (#hideDiskZ# = 0)) ? -#rowSpacing# + 1 : #rowSpacing#)R
Group=DiskZ | DiskZArrows
Hidden=(#hideDiskZ# = 1) || (#showDiskReadWrite# = 0)

[DiskZWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
Text="#textDiskZWrite#B/s"
Group=DiskZ
Hidden=(#hideDiskZ# = 1) || (#showDiskReadWrite# = 0)

[DiskZReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskZ#
Group=DiskZ | DiskZArrows
Hidden=(#hideDiskZ# = 1) || (#showDiskReadWrite# = 0)

[DiskZReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
Text="#textDiskZRead#B/s"
Group=DiskZ
Hidden=(#hideDiskZ# = 1) || (#showDiskReadWrite# = 0)

[DiskZSpaceString]
Meter=String
MeterStyle=StyleString
Text="#textDiskZSpaceUsed#B / #textDiskZSpaceTotal#B"
DynamicVariables=1
Group=DiskZ
Hidden=#hideDiskZ#

[DiskZSpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDiskZSpaceUsage
Percentual=1
Text="%1%"
Group=DiskZ
Hidden=#hideDiskZ#

[DiskZSpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDiskZSpaceUsage
BarColor=#colorDiskZ#
Group=DiskZ
Hidden=#hideDiskZ#

