; Disk A
[DiskANameString_]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskAName
Y=((#hideDiskA# = 1) ? ((#rowSpacing# = 2) ? -5 : -3) : #rowSpacing#)R
Text=A: %1
Group=DiskA
Hidden=#hideDiskA#

[DiskAEjectButton_]
Meter=Image
MeterStyle=StyleEjectButton
Group=DiskA | EjectButtons
Hidden=(#hideDiskA# = 1) || ([MeasureDiskAType:] = 4) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

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
Y=(((#showDiskReadWrite# = 0) && (#hideDiskA# = 0)) ? -#rowSpacing# + 2 : #rowSpacing# + 1)R
Group=DiskA | DiskAReadWrite
Hidden=(#hideDiskA# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[DiskAWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
InlineSetting=Color | #colorDiskA#
Text=#diskWritePrefix##textDiskAWrite#B/s
Group=DiskA | DiskAReadWrite | DiskReadWrite
Hidden=(#hideDiskA# = 1) || (#showDiskReadWrite# = 0)

[DiskAReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskA#
Group=DiskA | DiskAReadWrite
Hidden=(#hideDiskA# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[DiskAReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
InlineSetting=Color | #colorDiskA#
Text=#diskReadPrefix##textDiskARead#B/s
Group=DiskA | DiskAReadWrite | DiskReadWrite
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

; Disk B
[DiskBNameString_]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskBName
Y=((#hideDiskB# = 1) ? ((#rowSpacing# = 2) ? -5 : -3) : #rowSpacing#)R
Text=B: %1
Group=DiskB
Hidden=#hideDiskB#

[DiskBEjectButton_]
Meter=Image
MeterStyle=StyleEjectButton
Group=DiskB | EjectButtons
Hidden=(#hideDiskB# = 1) || ([MeasureDiskBType:] = 4) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

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
Y=(((#showDiskReadWrite# = 0) && (#hideDiskB# = 0)) ? -#rowSpacing# + 2 : #rowSpacing# + 1)R
Group=DiskB | DiskBReadWrite
Hidden=(#hideDiskB# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[DiskBWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
InlineSetting=Color | #colorDiskB#
Text=#diskWritePrefix##textDiskBWrite#B/s
Group=DiskB | DiskBReadWrite | DiskReadWrite
Hidden=(#hideDiskB# = 1) || (#showDiskReadWrite# = 0)

[DiskBReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskB#
Group=DiskB | DiskBReadWrite
Hidden=(#hideDiskB# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[DiskBReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
InlineSetting=Color | #colorDiskB#
Text=#diskReadPrefix##textDiskBRead#B/s
Group=DiskB | DiskBReadWrite | DiskReadWrite
Hidden=(#hideDiskB# = 1) || (#showDiskReadWrite# = 0)

[DiskBSpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=#textDiskBSpaceUsed#B / #textDiskBSpaceTotal#B
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

; Disk C
[DiskCNameString_]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskCName
Y=((#hideDiskC# = 1) ? ((#rowSpacing# = 2) ? -5 : -3) : #rowSpacing#)R
Text=C: %1
Group=DiskC
Hidden=#hideDiskC#

[DiskCEjectButton_]
Meter=Image
MeterStyle=StyleEjectButton
Group=DiskC | EjectButtons
Hidden=(#hideDiskC# = 1) || ([MeasureDiskCType:] = 4) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

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
Y=(((#showDiskReadWrite# = 0) && (#hideDiskC# = 0)) ? -#rowSpacing# + 2 : #rowSpacing# + 1)R
Group=DiskC | DiskCReadWrite
Hidden=(#hideDiskC# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[DiskCWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
InlineSetting=Color | #colorDiskC#
Text=#diskWritePrefix##textDiskCWrite#B/s
Group=DiskC | DiskCReadWrite | DiskReadWrite
Hidden=(#hideDiskC# = 1) || (#showDiskReadWrite# = 0)

[DiskCReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskC#
Group=DiskC | DiskCReadWrite
Hidden=(#hideDiskC# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[DiskCReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
InlineSetting=Color | #colorDiskC#
Text=#diskReadPrefix##textDiskCRead#B/s
Group=DiskC | DiskCReadWrite | DiskReadWrite
Hidden=(#hideDiskC# = 1) || (#showDiskReadWrite# = 0)

[DiskCSpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=#textDiskCSpaceUsed#B / #textDiskCSpaceTotal#B
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

; Disk D
[DiskDNameString_]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskDName
Y=((#hideDiskD# = 1) ? ((#rowSpacing# = 2) ? -5 : -3) : #rowSpacing#)R
Text=D: %1
Group=DiskD
Hidden=#hideDiskD#

[DiskDEjectButton_]
Meter=Image
MeterStyle=StyleEjectButton
Group=DiskD | EjectButtons
Hidden=(#hideDiskD# = 1) || ([MeasureDiskDType:] = 4) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

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
Y=(((#showDiskReadWrite# = 0) && (#hideDiskD# = 0)) ? -#rowSpacing# + 2 : #rowSpacing# + 1)R
Group=DiskD | DiskDReadWrite
Hidden=(#hideDiskD# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[DiskDWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
InlineSetting=Color | #colorDiskD#
Text=#diskWritePrefix##textDiskDWrite#B/s
Group=DiskD | DiskDReadWrite | DiskReadWrite
Hidden=(#hideDiskD# = 1) || (#showDiskReadWrite# = 0)

[DiskDReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskD#
Group=DiskD | DiskDReadWrite
Hidden=(#hideDiskD# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[DiskDReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
InlineSetting=Color | #colorDiskD#
Text=#diskReadPrefix##textDiskDRead#B/s
Group=DiskD | DiskDReadWrite | DiskReadWrite
Hidden=(#hideDiskD# = 1) || (#showDiskReadWrite# = 0)

[DiskDSpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=#textDiskDSpaceUsed#B / #textDiskDSpaceTotal#B
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

; Disk E
[DiskENameString_]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskEName
Y=((#hideDiskE# = 1) ? ((#rowSpacing# = 2) ? -5 : -3) : #rowSpacing#)R
Text=E: %1
Group=DiskE
Hidden=#hideDiskE#

[DiskEEjectButton_]
Meter=Image
MeterStyle=StyleEjectButton
Group=DiskE | EjectButtons
Hidden=(#hideDiskE# = 1) || ([MeasureDiskEType:] = 4) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

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
Y=(((#showDiskReadWrite# = 0) && (#hideDiskE# = 0)) ? -#rowSpacing# + 2 : #rowSpacing# + 1)R
Group=DiskE | DiskEReadWrite
Hidden=(#hideDiskE# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[DiskEWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
InlineSetting=Color | #colorDiskE#
Text=#diskWritePrefix##textDiskEWrite#B/s
Group=DiskE | DiskEReadWrite | DiskReadWrite
Hidden=(#hideDiskE# = 1) || (#showDiskReadWrite# = 0)

[DiskEReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskE#
Group=DiskE | DiskEReadWrite
Hidden=(#hideDiskE# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[DiskEReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
InlineSetting=Color | #colorDiskE#
Text=#diskReadPrefix##textDiskERead#B/s
Group=DiskE | DiskEReadWrite | DiskReadWrite
Hidden=(#hideDiskE# = 1) || (#showDiskReadWrite# = 0)

[DiskESpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=#textDiskESpaceUsed#B / #textDiskESpaceTotal#B
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

; Disk F
[DiskFNameString_]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskFName
Y=((#hideDiskF# = 1) ? ((#rowSpacing# = 2) ? -5 : -3) : #rowSpacing#)R
Text=F: %1
Group=DiskF
Hidden=#hideDiskF#

[DiskFEjectButton_]
Meter=Image
MeterStyle=StyleEjectButton
Group=DiskF | EjectButtons
Hidden=(#hideDiskF# = 1) || ([MeasureDiskFType:] = 4) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

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
Y=(((#showDiskReadWrite# = 0) && (#hideDiskF# = 0)) ? -#rowSpacing# + 2 : #rowSpacing# + 1)R
Group=DiskF | DiskFReadWrite
Hidden=(#hideDiskF# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[DiskFWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
InlineSetting=Color | #colorDiskF#
Text=#diskWritePrefix##textDiskFWrite#B/s
Group=DiskF | DiskFReadWrite | DiskReadWrite
Hidden=(#hideDiskF# = 1) || (#showDiskReadWrite# = 0)

[DiskFReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskF#
Group=DiskF | DiskFReadWrite
Hidden=(#hideDiskF# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[DiskFReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
InlineSetting=Color | #colorDiskF#
Text=#diskReadPrefix##textDiskFRead#B/s
Group=DiskF | DiskFReadWrite | DiskReadWrite
Hidden=(#hideDiskF# = 1) || (#showDiskReadWrite# = 0)

[DiskFSpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=#textDiskFSpaceUsed#B / #textDiskFSpaceTotal#B
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

; Disk G
[DiskGNameString_]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskGName
Y=((#hideDiskG# = 1) ? ((#rowSpacing# = 2) ? -5 : -3) : #rowSpacing#)R
Text=G: %1
Group=DiskG
Hidden=#hideDiskG#

[DiskGEjectButton_]
Meter=Image
MeterStyle=StyleEjectButton
Group=DiskG | EjectButtons
Hidden=(#hideDiskG# = 1) || ([MeasureDiskGType:] = 4) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

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
Y=(((#showDiskReadWrite# = 0) && (#hideDiskG# = 0)) ? -#rowSpacing# + 2 : #rowSpacing# + 1)R
Group=DiskG | DiskGReadWrite
Hidden=(#hideDiskG# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[DiskGWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
InlineSetting=Color | #colorDiskG#
Text=#diskWritePrefix##textDiskGWrite#B/s
Group=DiskG | DiskGReadWrite | DiskReadWrite
Hidden=(#hideDiskG# = 1) || (#showDiskReadWrite# = 0)

[DiskGReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskG#
Group=DiskG | DiskGReadWrite
Hidden=(#hideDiskG# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[DiskGReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
InlineSetting=Color | #colorDiskG#
Text=#diskReadPrefix##textDiskGRead#B/s
Group=DiskG | DiskGReadWrite | DiskReadWrite
Hidden=(#hideDiskG# = 1) || (#showDiskReadWrite# = 0)

[DiskGSpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=#textDiskGSpaceUsed#B / #textDiskGSpaceTotal#B
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

; Disk H
[DiskHNameString_]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskHName
Y=((#hideDiskH# = 1) ? ((#rowSpacing# = 2) ? -5 : -3) : #rowSpacing#)R
Text=H: %1
Group=DiskH
Hidden=#hideDiskH#

[DiskHEjectButton_]
Meter=Image
MeterStyle=StyleEjectButton
Group=DiskH | EjectButtons
Hidden=(#hideDiskH# = 1) || ([MeasureDiskHType:] = 4) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

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
Y=(((#showDiskReadWrite# = 0) && (#hideDiskH# = 0)) ? -#rowSpacing# + 2 : #rowSpacing# + 1)R
Group=DiskH | DiskHReadWrite
Hidden=(#hideDiskH# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[DiskHWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
InlineSetting=Color | #colorDiskH#
Text=#diskWritePrefix##textDiskHWrite#B/s
Group=DiskH | DiskHReadWrite | DiskReadWrite
Hidden=(#hideDiskH# = 1) || (#showDiskReadWrite# = 0)

[DiskHReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskH#
Group=DiskH | DiskHReadWrite
Hidden=(#hideDiskH# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[DiskHReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
InlineSetting=Color | #colorDiskH#
Text=#diskReadPrefix##textDiskHRead#B/s
Group=DiskH | DiskHReadWrite | DiskReadWrite
Hidden=(#hideDiskH# = 1) || (#showDiskReadWrite# = 0)

[DiskHSpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=#textDiskHSpaceUsed#B / #textDiskHSpaceTotal#B
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

; Disk I
[DiskINameString_]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskIName
Y=((#hideDiskI# = 1) ? ((#rowSpacing# = 2) ? -5 : -3) : #rowSpacing#)R
Text=I: %1
Group=DiskI
Hidden=#hideDiskI#

[DiskIEjectButton_]
Meter=Image
MeterStyle=StyleEjectButton
Group=DiskI | EjectButtons
Hidden=(#hideDiskI# = 1) || ([MeasureDiskIType:] = 4) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

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
Y=(((#showDiskReadWrite# = 0) && (#hideDiskI# = 0)) ? -#rowSpacing# + 2 : #rowSpacing# + 1)R
Group=DiskI | DiskIReadWrite
Hidden=(#hideDiskI# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[DiskIWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
InlineSetting=Color | #colorDiskI#
Text=#diskWritePrefix##textDiskIWrite#B/s
Group=DiskI | DiskIReadWrite | DiskReadWrite
Hidden=(#hideDiskI# = 1) || (#showDiskReadWrite# = 0)

[DiskIReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskI#
Group=DiskI | DiskIReadWrite
Hidden=(#hideDiskI# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[DiskIReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
InlineSetting=Color | #colorDiskI#
Text=#diskReadPrefix##textDiskIRead#B/s
Group=DiskI | DiskIReadWrite | DiskReadWrite
Hidden=(#hideDiskI# = 1) || (#showDiskReadWrite# = 0)

[DiskISpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=#textDiskISpaceUsed#B / #textDiskISpaceTotal#B
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

; Disk J
[DiskJNameString_]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskJName
Y=((#hideDiskJ# = 1) ? ((#rowSpacing# = 2) ? -5 : -3) : #rowSpacing#)R
Text=J: %1
Group=DiskJ
Hidden=#hideDiskJ#

[DiskJEjectButton_]
Meter=Image
MeterStyle=StyleEjectButton
Group=DiskJ | EjectButtons
Hidden=(#hideDiskJ# = 1) || ([MeasureDiskJType:] = 4) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

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
Y=(((#showDiskReadWrite# = 0) && (#hideDiskJ# = 0)) ? -#rowSpacing# + 2 : #rowSpacing# + 1)R
Group=DiskJ | DiskJReadWrite
Hidden=(#hideDiskJ# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[DiskJWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
InlineSetting=Color | #colorDiskJ#
Text=#diskWritePrefix##textDiskJWrite#B/s
Group=DiskJ | DiskJReadWrite | DiskReadWrite
Hidden=(#hideDiskJ# = 1) || (#showDiskReadWrite# = 0)

[DiskJReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskJ#
Group=DiskJ | DiskJReadWrite
Hidden=(#hideDiskJ# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[DiskJReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
InlineSetting=Color | #colorDiskJ#
Text=#diskReadPrefix##textDiskJRead#B/s
Group=DiskJ | DiskJReadWrite | DiskReadWrite
Hidden=(#hideDiskJ# = 1) || (#showDiskReadWrite# = 0)

[DiskJSpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=#textDiskJSpaceUsed#B / #textDiskJSpaceTotal#B
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

; Disk K
[DiskKNameString_]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskKName
Y=((#hideDiskK# = 1) ? ((#rowSpacing# = 2) ? -5 : -3) : #rowSpacing#)R
Text=K: %1
Group=DiskK
Hidden=#hideDiskK#

[DiskKEjectButton_]
Meter=Image
MeterStyle=StyleEjectButton
Group=DiskK | EjectButtons
Hidden=(#hideDiskK# = 1) || ([MeasureDiskKType:] = 4) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

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
Y=(((#showDiskReadWrite# = 0) && (#hideDiskK# = 0)) ? -#rowSpacing# + 2 : #rowSpacing# + 1)R
Group=DiskK | DiskKReadWrite
Hidden=(#hideDiskK# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[DiskKWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
InlineSetting=Color | #colorDiskK#
Text=#diskWritePrefix##textDiskKWrite#B/s
Group=DiskK | DiskKReadWrite | DiskReadWrite
Hidden=(#hideDiskK# = 1) || (#showDiskReadWrite# = 0)

[DiskKReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskK#
Group=DiskK | DiskKReadWrite
Hidden=(#hideDiskK# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[DiskKReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
InlineSetting=Color | #colorDiskK#
Text=#diskReadPrefix##textDiskKRead#B/s
Group=DiskK | DiskKReadWrite | DiskReadWrite
Hidden=(#hideDiskK# = 1) || (#showDiskReadWrite# = 0)

[DiskKSpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=#textDiskKSpaceUsed#B / #textDiskKSpaceTotal#B
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

; Disk L
[DiskLNameString_]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskLName
Y=((#hideDiskL# = 1) ? ((#rowSpacing# = 2) ? -5 : -3) : #rowSpacing#)R
Text=L: %1
Group=DiskL
Hidden=#hideDiskL#

[DiskLEjectButton_]
Meter=Image
MeterStyle=StyleEjectButton
Group=DiskL | EjectButtons
Hidden=(#hideDiskL# = 1) || ([MeasureDiskLType:] = 4) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

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
Y=(((#showDiskReadWrite# = 0) && (#hideDiskL# = 0)) ? -#rowSpacing# + 2 : #rowSpacing# + 1)R
Group=DiskL | DiskLReadWrite
Hidden=(#hideDiskL# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[DiskLWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
InlineSetting=Color | #colorDiskL#
Text=#diskWritePrefix##textDiskLWrite#B/s
Group=DiskL | DiskLReadWrite | DiskReadWrite
Hidden=(#hideDiskL# = 1) || (#showDiskReadWrite# = 0)

[DiskLReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskL#
Group=DiskL | DiskLReadWrite
Hidden=(#hideDiskL# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[DiskLReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
InlineSetting=Color | #colorDiskL#
Text=#diskReadPrefix##textDiskLRead#B/s
Group=DiskL | DiskLReadWrite | DiskReadWrite
Hidden=(#hideDiskL# = 1) || (#showDiskReadWrite# = 0)

[DiskLSpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=#textDiskLSpaceUsed#B / #textDiskLSpaceTotal#B
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

; Disk M
[DiskMNameString_]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskMName
Y=((#hideDiskM# = 1) ? ((#rowSpacing# = 2) ? -5 : -3) : #rowSpacing#)R
Text=M: %1
Group=DiskM
Hidden=#hideDiskM#

[DiskMEjectButton_]
Meter=Image
MeterStyle=StyleEjectButton
Group=DiskM | EjectButtons
Hidden=(#hideDiskM# = 1) || ([MeasureDiskMType:] = 4) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

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
Y=(((#showDiskReadWrite# = 0) && (#hideDiskM# = 0)) ? -#rowSpacing# + 2 : #rowSpacing# + 1)R
Group=DiskM | DiskMReadWrite
Hidden=(#hideDiskM# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[DiskMWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
InlineSetting=Color | #colorDiskM#
Text=#diskWritePrefix##textDiskMWrite#B/s
Group=DiskM | DiskMReadWrite | DiskReadWrite
Hidden=(#hideDiskM# = 1) || (#showDiskReadWrite# = 0)

[DiskMReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskM#
Group=DiskM | DiskMReadWrite
Hidden=(#hideDiskM# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[DiskMReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
InlineSetting=Color | #colorDiskM#
Text=#diskReadPrefix##textDiskMRead#B/s
Group=DiskM | DiskMReadWrite | DiskReadWrite
Hidden=(#hideDiskM# = 1) || (#showDiskReadWrite# = 0)

[DiskMSpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=#textDiskMSpaceUsed#B / #textDiskMSpaceTotal#B
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

; Disk N
[DiskNNameString_]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskNName
Y=((#hideDiskN# = 1) ? ((#rowSpacing# = 2) ? -5 : -3) : #rowSpacing#)R
Text=N: %1
Group=DiskN
Hidden=#hideDiskN#

[DiskNEjectButton_]
Meter=Image
MeterStyle=StyleEjectButton
Group=DiskN | EjectButtons
Hidden=(#hideDiskN# = 1) || ([MeasureDiskNType:] = 4) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

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
Y=(((#showDiskReadWrite# = 0) && (#hideDiskN# = 0)) ? -#rowSpacing# + 2 : #rowSpacing# + 1)R
Group=DiskN | DiskNReadWrite
Hidden=(#hideDiskN# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[DiskNWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
InlineSetting=Color | #colorDiskN#
Text=#diskWritePrefix##textDiskNWrite#B/s
Group=DiskN | DiskNReadWrite | DiskReadWrite
Hidden=(#hideDiskN# = 1) || (#showDiskReadWrite# = 0)

[DiskNReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskN#
Group=DiskN | DiskNReadWrite
Hidden=(#hideDiskN# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[DiskNReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
InlineSetting=Color | #colorDiskN#
Text=#diskReadPrefix##textDiskNRead#B/s
Group=DiskN | DiskNReadWrite | DiskReadWrite
Hidden=(#hideDiskN# = 1) || (#showDiskReadWrite# = 0)

[DiskNSpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=#textDiskNSpaceUsed#B / #textDiskNSpaceTotal#B
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

; Disk O
[DiskONameString_]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskOName
Y=((#hideDiskO# = 1) ? ((#rowSpacing# = 2) ? -5 : -3) : #rowSpacing#)R
Text=O: %1
Group=DiskO
Hidden=#hideDiskO#

[DiskOEjectButton_]
Meter=Image
MeterStyle=StyleEjectButton
Group=DiskO | EjectButtons
Hidden=(#hideDiskO# = 1) || ([MeasureDiskOType:] = 4) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

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
Y=(((#showDiskReadWrite# = 0) && (#hideDiskO# = 0)) ? -#rowSpacing# + 2 : #rowSpacing# + 1)R
Group=DiskO | DiskOReadWrite
Hidden=(#hideDiskO# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[DiskOWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
InlineSetting=Color | #colorDiskO#
Text=#diskWritePrefix##textDiskOWrite#B/s
Group=DiskO | DiskOReadWrite | DiskReadWrite
Hidden=(#hideDiskO# = 1) || (#showDiskReadWrite# = 0)

[DiskOReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskO#
Group=DiskO | DiskOReadWrite
Hidden=(#hideDiskO# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[DiskOReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
InlineSetting=Color | #colorDiskO#
Text=#diskReadPrefix##textDiskORead#B/s
Group=DiskO | DiskOReadWrite | DiskReadWrite
Hidden=(#hideDiskO# = 1) || (#showDiskReadWrite# = 0)

[DiskOSpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=#textDiskOSpaceUsed#B / #textDiskOSpaceTotal#B
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

; Disk P
[DiskPNameString_]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskPName
Y=((#hideDiskP# = 1) ? ((#rowSpacing# = 2) ? -5 : -3) : #rowSpacing#)R
Text=P: %1
Group=DiskP
Hidden=#hideDiskP#

[DiskPEjectButton_]
Meter=Image
MeterStyle=StyleEjectButton
Group=DiskP | EjectButtons
Hidden=(#hideDiskP# = 1) || ([MeasureDiskPType:] = 4) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

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
Y=(((#showDiskReadWrite# = 0) && (#hideDiskP# = 0)) ? -#rowSpacing# + 2 : #rowSpacing# + 1)R
Group=DiskP | DiskPReadWrite
Hidden=(#hideDiskP# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[DiskPWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
InlineSetting=Color | #colorDiskP#
Text=#diskWritePrefix##textDiskPWrite#B/s
Group=DiskP | DiskPReadWrite | DiskReadWrite
Hidden=(#hideDiskP# = 1) || (#showDiskReadWrite# = 0)

[DiskPReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskP#
Group=DiskP | DiskPReadWrite
Hidden=(#hideDiskP# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[DiskPReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
InlineSetting=Color | #colorDiskP#
Text=#diskReadPrefix##textDiskPRead#B/s
Group=DiskP | DiskPReadWrite | DiskReadWrite
Hidden=(#hideDiskP# = 1) || (#showDiskReadWrite# = 0)

[DiskPSpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=#textDiskPSpaceUsed#B / #textDiskPSpaceTotal#B
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

; Disk Q
[DiskQNameString_]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskQName
Y=((#hideDiskQ# = 1) ? ((#rowSpacing# = 2) ? -5 : -3) : #rowSpacing#)R
Text=Q: %1
Group=DiskQ
Hidden=#hideDiskQ#

[DiskQEjectButton_]
Meter=Image
MeterStyle=StyleEjectButton
Group=DiskQ | EjectButtons
Hidden=(#hideDiskQ# = 1) || ([MeasureDiskQType:] = 4) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

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
Y=(((#showDiskReadWrite# = 0) && (#hideDiskQ# = 0)) ? -#rowSpacing# + 2 : #rowSpacing# + 1)R
Group=DiskQ | DiskQReadWrite
Hidden=(#hideDiskQ# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[DiskQWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
InlineSetting=Color | #colorDiskQ#
Text=#diskWritePrefix##textDiskQWrite#B/s
Group=DiskQ | DiskQReadWrite | DiskReadWrite
Hidden=(#hideDiskQ# = 1) || (#showDiskReadWrite# = 0)

[DiskQReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskQ#
Group=DiskQ | DiskQReadWrite
Hidden=(#hideDiskQ# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[DiskQReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
InlineSetting=Color | #colorDiskQ#
Text=#diskReadPrefix##textDiskQRead#B/s
Group=DiskQ | DiskQReadWrite | DiskReadWrite
Hidden=(#hideDiskQ# = 1) || (#showDiskReadWrite# = 0)

[DiskQSpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=#textDiskQSpaceUsed#B / #textDiskQSpaceTotal#B
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

; Disk R
[DiskRNameString_]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskRName
Y=((#hideDiskR# = 1) ? ((#rowSpacing# = 2) ? -5 : -3) : #rowSpacing#)R
Text=R: %1
Group=DiskR
Hidden=#hideDiskR#

[DiskREjectButton_]
Meter=Image
MeterStyle=StyleEjectButton
Group=DiskR | EjectButtons
Hidden=(#hideDiskR# = 1) || ([MeasureDiskRType:] = 4) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

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
Y=(((#showDiskReadWrite# = 0) && (#hideDiskR# = 0)) ? -#rowSpacing# + 2 : #rowSpacing# + 1)R
Group=DiskR | DiskRReadWrite
Hidden=(#hideDiskR# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[DiskRWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
InlineSetting=Color | #colorDiskR#
Text=#diskWritePrefix##textDiskRWrite#B/s
Group=DiskR | DiskRReadWrite | DiskReadWrite
Hidden=(#hideDiskR# = 1) || (#showDiskReadWrite# = 0)

[DiskRReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskR#
Group=DiskR | DiskRReadWrite
Hidden=(#hideDiskR# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[DiskRReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
InlineSetting=Color | #colorDiskR#
Text=#diskReadPrefix##textDiskRRead#B/s
Group=DiskR | DiskRReadWrite | DiskReadWrite
Hidden=(#hideDiskR# = 1) || (#showDiskReadWrite# = 0)

[DiskRSpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=#textDiskRSpaceUsed#B / #textDiskRSpaceTotal#B
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

; Disk S
[DiskSNameString_]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskSName
Y=((#hideDiskS# = 1) ? ((#rowSpacing# = 2) ? -5 : -3) : #rowSpacing#)R
Text=S: %1
Group=DiskS
Hidden=#hideDiskS#

[DiskSEjectButton_]
Meter=Image
MeterStyle=StyleEjectButton
Group=DiskS | EjectButtons
Hidden=(#hideDiskS# = 1) || ([MeasureDiskSType:] = 4) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

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
Y=(((#showDiskReadWrite# = 0) && (#hideDiskS# = 0)) ? -#rowSpacing# + 2 : #rowSpacing# + 1)R
Group=DiskS | DiskSReadWrite
Hidden=(#hideDiskS# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[DiskSWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
InlineSetting=Color | #colorDiskS#
Text=#diskWritePrefix##textDiskSWrite#B/s
Group=DiskS | DiskSReadWrite | DiskReadWrite
Hidden=(#hideDiskS# = 1) || (#showDiskReadWrite# = 0)

[DiskSReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskS#
Group=DiskS | DiskSReadWrite
Hidden=(#hideDiskS# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[DiskSReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
InlineSetting=Color | #colorDiskS#
Text=#diskReadPrefix##textDiskSRead#B/s
Group=DiskS | DiskSReadWrite | DiskReadWrite
Hidden=(#hideDiskS# = 1) || (#showDiskReadWrite# = 0)

[DiskSSpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=#textDiskSSpaceUsed#B / #textDiskSSpaceTotal#B
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

; Disk T
[DiskTNameString_]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskTName
Y=((#hideDiskT# = 1) ? ((#rowSpacing# = 2) ? -5 : -3) : #rowSpacing#)R
Text=T: %1
Group=DiskT
Hidden=#hideDiskT#

[DiskTEjectButton_]
Meter=Image
MeterStyle=StyleEjectButton
Group=DiskT | EjectButtons
Hidden=(#hideDiskT# = 1) || ([MeasureDiskTType:] = 4) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

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
Y=(((#showDiskReadWrite# = 0) && (#hideDiskT# = 0)) ? -#rowSpacing# + 2 : #rowSpacing# + 1)R
Group=DiskT | DiskTReadWrite
Hidden=(#hideDiskT# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[DiskTWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
InlineSetting=Color | #colorDiskT#
Text=#diskWritePrefix##textDiskTWrite#B/s
Group=DiskT | DiskTReadWrite | DiskReadWrite
Hidden=(#hideDiskT# = 1) || (#showDiskReadWrite# = 0)

[DiskTReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskT#
Group=DiskT | DiskTReadWrite
Hidden=(#hideDiskT# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[DiskTReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
InlineSetting=Color | #colorDiskT#
Text=#diskReadPrefix##textDiskTRead#B/s
Group=DiskT | DiskTReadWrite | DiskReadWrite
Hidden=(#hideDiskT# = 1) || (#showDiskReadWrite# = 0)

[DiskTSpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=#textDiskTSpaceUsed#B / #textDiskTSpaceTotal#B
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

; Disk U
[DiskUNameString_]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskUName
Y=((#hideDiskU# = 1) ? ((#rowSpacing# = 2) ? -5 : -3) : #rowSpacing#)R
Text=U: %1
Group=DiskU
Hidden=#hideDiskU#

[DiskUEjectButton_]
Meter=Image
MeterStyle=StyleEjectButton
Group=DiskU | EjectButtons
Hidden=(#hideDiskU# = 1) || ([MeasureDiskUType:] = 4) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

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
Y=(((#showDiskReadWrite# = 0) && (#hideDiskU# = 0)) ? -#rowSpacing# + 2 : #rowSpacing# + 1)R
Group=DiskU | DiskUReadWrite
Hidden=(#hideDiskU# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[DiskUWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
InlineSetting=Color | #colorDiskU#
Text=#diskWritePrefix##textDiskUWrite#B/s
Group=DiskU | DiskUReadWrite | DiskReadWrite
Hidden=(#hideDiskU# = 1) || (#showDiskReadWrite# = 0)

[DiskUReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskU#
Group=DiskU | DiskUReadWrite
Hidden=(#hideDiskU# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[DiskUReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
InlineSetting=Color | #colorDiskU#
Text=#diskReadPrefix##textDiskURead#B/s
Group=DiskU | DiskUReadWrite | DiskReadWrite
Hidden=(#hideDiskU# = 1) || (#showDiskReadWrite# = 0)

[DiskUSpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=#textDiskUSpaceUsed#B / #textDiskUSpaceTotal#B
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

; Disk V
[DiskVNameString_]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskVName
Y=((#hideDiskV# = 1) ? ((#rowSpacing# = 2) ? -5 : -3) : #rowSpacing#)R
Text=V: %1
Group=DiskV
Hidden=#hideDiskV#

[DiskVEjectButton_]
Meter=Image
MeterStyle=StyleEjectButton
Group=DiskV | EjectButtons
Hidden=(#hideDiskV# = 1) || ([MeasureDiskVType:] = 4) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

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
Y=(((#showDiskReadWrite# = 0) && (#hideDiskV# = 0)) ? -#rowSpacing# + 2 : #rowSpacing# + 1)R
Group=DiskV | DiskVReadWrite
Hidden=(#hideDiskV# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[DiskVWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
InlineSetting=Color | #colorDiskV#
Text=#diskWritePrefix##textDiskVWrite#B/s
Group=DiskV | DiskVReadWrite | DiskReadWrite
Hidden=(#hideDiskV# = 1) || (#showDiskReadWrite# = 0)

[DiskVReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskV#
Group=DiskV | DiskVReadWrite
Hidden=(#hideDiskV# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[DiskVReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
InlineSetting=Color | #colorDiskV#
Text=#diskReadPrefix##textDiskVRead#B/s
Group=DiskV | DiskVReadWrite | DiskReadWrite
Hidden=(#hideDiskV# = 1) || (#showDiskReadWrite# = 0)

[DiskVSpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=#textDiskVSpaceUsed#B / #textDiskVSpaceTotal#B
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

; Disk W
[DiskWNameString_]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskWName
Y=((#hideDiskW# = 1) ? ((#rowSpacing# = 2) ? -5 : -3) : #rowSpacing#)R
Text=W: %1
Group=DiskW
Hidden=#hideDiskW#

[DiskWEjectButton_]
Meter=Image
MeterStyle=StyleEjectButton
Group=DiskW | EjectButtons
Hidden=(#hideDiskW# = 1) || ([MeasureDiskWType:] = 4) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

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
Y=(((#showDiskReadWrite# = 0) && (#hideDiskW# = 0)) ? -#rowSpacing# + 2 : #rowSpacing# + 1)R
Group=DiskW | DiskWReadWrite
Hidden=(#hideDiskW# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[DiskWWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
InlineSetting=Color | #colorDiskW#
Text=#diskWritePrefix##textDiskWWrite#B/s
Group=DiskW | DiskWReadWrite | DiskReadWrite
Hidden=(#hideDiskW# = 1) || (#showDiskReadWrite# = 0)

[DiskWReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskW#
Group=DiskW | DiskWReadWrite
Hidden=(#hideDiskW# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[DiskWReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
InlineSetting=Color | #colorDiskW#
Text=#diskReadPrefix##textDiskWRead#B/s
Group=DiskW | DiskWReadWrite | DiskReadWrite
Hidden=(#hideDiskW# = 1) || (#showDiskReadWrite# = 0)

[DiskWSpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=#textDiskWSpaceUsed#B / #textDiskWSpaceTotal#B
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

; Disk X
[DiskXNameString_]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskXName
Y=((#hideDiskX# = 1) ? ((#rowSpacing# = 2) ? -5 : -3) : #rowSpacing#)R
Text=X: %1
Group=DiskX
Hidden=#hideDiskX#

[DiskXEjectButton_]
Meter=Image
MeterStyle=StyleEjectButton
Group=DiskX | EjectButtons
Hidden=(#hideDiskX# = 1) || ([MeasureDiskXType:] = 4) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

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
Y=(((#showDiskReadWrite# = 0) && (#hideDiskX# = 0)) ? -#rowSpacing# + 2 : #rowSpacing# + 1)R
Group=DiskX | DiskXReadWrite
Hidden=(#hideDiskX# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[DiskXWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
InlineSetting=Color | #colorDiskX#
Text=#diskWritePrefix##textDiskXWrite#B/s
Group=DiskX | DiskXReadWrite | DiskReadWrite
Hidden=(#hideDiskX# = 1) || (#showDiskReadWrite# = 0)

[DiskXReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskX#
Group=DiskX | DiskXReadWrite
Hidden=(#hideDiskX# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[DiskXReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
InlineSetting=Color | #colorDiskX#
Text=#diskReadPrefix##textDiskXRead#B/s
Group=DiskX | DiskXReadWrite | DiskReadWrite
Hidden=(#hideDiskX# = 1) || (#showDiskReadWrite# = 0)

[DiskXSpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=#textDiskXSpaceUsed#B / #textDiskXSpaceTotal#B
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

; Disk Y
[DiskYNameString_]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskYName
Y=((#hideDiskY# = 1) ? ((#rowSpacing# = 2) ? -5 : -3) : #rowSpacing#)R
Text=Y: %1
Group=DiskY
Hidden=#hideDiskY#

[DiskYEjectButton_]
Meter=Image
MeterStyle=StyleEjectButton
Group=DiskY | EjectButtons
Hidden=(#hideDiskY# = 1) || ([MeasureDiskYType:] = 4) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

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
Y=(((#showDiskReadWrite# = 0) && (#hideDiskY# = 0)) ? -#rowSpacing# + 2 : #rowSpacing# + 1)R
Group=DiskY | DiskYReadWrite
Hidden=(#hideDiskY# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[DiskYWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
InlineSetting=Color | #colorDiskY#
Text=#diskWritePrefix##textDiskYWrite#B/s
Group=DiskY | DiskYReadWrite | DiskReadWrite
Hidden=(#hideDiskY# = 1) || (#showDiskReadWrite# = 0)

[DiskYReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskY#
Group=DiskY | DiskYReadWrite
Hidden=(#hideDiskY# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[DiskYReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
InlineSetting=Color | #colorDiskY#
Text=#diskReadPrefix##textDiskYRead#B/s
Group=DiskY | DiskYReadWrite | DiskReadWrite
Hidden=(#hideDiskY# = 1) || (#showDiskReadWrite# = 0)

[DiskYSpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=#textDiskYSpaceUsed#B / #textDiskYSpaceTotal#B
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

; Disk Z
[DiskZNameString_]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDiskZName
Y=((#hideDiskZ# = 1) ? ((#rowSpacing# = 2) ? -5 : -3) : #rowSpacing#)R
Text=Z: %1
Group=DiskZ
Hidden=#hideDiskZ#

[DiskZEjectButton_]
Meter=Image
MeterStyle=StyleEjectButton
Group=DiskZ | EjectButtons
Hidden=(#hideDiskZ# = 1) || ([MeasureDiskZType:] = 4) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

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
Y=(((#showDiskReadWrite# = 0) && (#hideDiskZ# = 0)) ? -#rowSpacing# + 2 : #rowSpacing# + 1)R
Group=DiskZ | DiskZReadWrite
Hidden=(#hideDiskZ# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[DiskZWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
InlineSetting=Color | #colorDiskZ#
Text=#diskWritePrefix##textDiskZWrite#B/s
Group=DiskZ | DiskZReadWrite | DiskReadWrite
Hidden=(#hideDiskZ# = 1) || (#showDiskReadWrite# = 0)

[DiskZReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDiskZ#
Group=DiskZ | DiskZReadWrite
Hidden=(#hideDiskZ# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[DiskZReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
InlineSetting=Color | #colorDiskZ#
Text=#diskReadPrefix##textDiskZRead#B/s
Group=DiskZ | DiskZReadWrite | DiskReadWrite
Hidden=(#hideDiskZ# = 1) || (#showDiskReadWrite# = 0)

[DiskZSpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=#textDiskZSpaceUsed#B / #textDiskZSpaceTotal#B
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