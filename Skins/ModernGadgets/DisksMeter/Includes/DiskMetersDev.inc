; Disk 1
[Disk1NameString_]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDisk1Name
Y=((#hideDisk1# = 1) ? ((#rowSpacing# = 2) ? -5 : -3) : #rowSpacing#)R
Text=#d1#: %1
Group=Disk1
Hidden=#hideDisk1#

[Disk1EjectButton_]
Meter=Image
MeterStyle=StyleEjectButton | StyleImgButtonHover
LeftMouseUpAction=[!CommandMeasure MeasureDisk1Eject "Run"]
Group=Disk1 | EjectButtons
Hidden=(#hideDisk1# = 1) || ([MeasureDisk1Type:] = 4) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

[Disk1TempString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringDiskTemp
MeasureName=MeasureDisk1Temp
Group=Disk1 | DiskTemps
Hidden=(#hideDisk1# = 1) || ([MeasureDisk1Type:] <> 4) || (#showDiskTemps# = 0) || ([MeasureHwinfoDetect:] = -9000)

[Disk1RWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleDynamicVars
MeasureName=MeasureDisk1RWTime
Text=%1%
Group=Disk1
Hidden=#hideDisk1#

[Disk1WriteArrow]
Meter=Image
MeterStyle=StyleWriteArrow
ImageTint=#colorDisk1#
Y=(((#showDiskReadWrite# = 0) && (#hideDisk1# = 0)) ? -#rowSpacing# + 2 : #rowSpacing# + 1)R
Group=Disk1 | Disk1ReadWrite
Hidden=(#hideDisk1# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[Disk1WriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
InlineSetting=Color | #colorDisk1#
Text=#diskWritePrefix#[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk1Write:],[#fpfWriteDepth],'1k')"]B/s
Group=Disk1 | Disk1ReadWrite | DiskReadWrite
Hidden=(#hideDisk1# = 1) || (#showDiskReadWrite# = 0)

[Disk1ReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDisk1#
Group=Disk1 | Disk1ReadWrite
Hidden=(#hideDisk1# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[Disk1ReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
InlineSetting=Color | #colorDisk1#
Text=#diskReadPrefix#[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk1Read:],[#fpfReadDepth],'1k')"]B/s
Group=Disk1 | Disk1ReadWrite | DiskReadWrite
Hidden=(#hideDisk1# = 1) || (#showDiskReadWrite# = 0)

[Disk1SpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk1SpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]B / [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk1SpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]B
Group=Disk1
Hidden=#hideDisk1#

[Disk1SpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleDynamicVars
MeasureName=MeasureDisk1SpaceUsage
Percentual=1
Text=%1%
Group=Disk1
Hidden=#hideDisk1#

[Disk1SpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDisk1SpaceUsage
BarColor=#colorDisk1#
Group=Disk1
Hidden=#hideDisk1#

; Disk 2
[Disk2NameString_]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDisk2Name
Y=((#hideDisk2# = 1) ? ((#rowSpacing# = 2) ? -5 : -3) : #rowSpacing#)R
Text=#d2#: %1
Group=Disk2
Hidden=#hideDisk2#

[Disk2EjectButton_]
Meter=Image
MeterStyle=StyleEjectButton | StyleImgButtonHover
LeftMouseUpAction=[!CommandMeasure MeasureDisk2Eject "Run"]
Group=Disk2 | EjectButtons
Hidden=(#hideDisk2# = 1) || ([MeasureDisk2Type:] = 4) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

[Disk2TempString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringDiskTemp
MeasureName=MeasureDisk2Temp
Group=Disk2 | DiskTemps
Hidden=(#hideDisk2# = 1) || ([MeasureDisk2Type:] <> 4) || (#showDiskTemps# = 0) || ([MeasureHwinfoDetect:] = -9000)

[Disk2RWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleDynamicVars
MeasureName=MeasureDisk2RWTime
Text=%1%
Group=Disk2
Hidden=#hideDisk2#

[Disk2WriteArrow]
Meter=Image
MeterStyle=StyleWriteArrow
ImageTint=#colorDisk2#
Y=(((#showDiskReadWrite# = 0) && (#hideDisk2# = 0)) ? -#rowSpacing# + 2 : #rowSpacing# + 1)R
Group=Disk2 | Disk2ReadWrite
Hidden=(#hideDisk2# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[Disk2WriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
InlineSetting=Color | #colorDisk2#
Text=#diskWritePrefix#[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk2Write:],[#fpfWriteDepth],'1k')"]B/s
Group=Disk2 | Disk2ReadWrite | DiskReadWrite
Hidden=(#hideDisk2# = 1) || (#showDiskReadWrite# = 0)

[Disk2ReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDisk2#
Group=Disk2 | Disk2ReadWrite
Hidden=(#hideDisk2# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[Disk2ReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
InlineSetting=Color | #colorDisk2#
Text=#diskReadPrefix#[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk2Read:],[#fpfReadDepth],'1k')"]B/s
Group=Disk2 | Disk2ReadWrite | DiskReadWrite
Hidden=(#hideDisk2# = 1) || (#showDiskReadWrite# = 0)

[Disk2SpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk2SpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]B / [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk2SpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]B
Group=Disk2
Hidden=#hideDisk2#

[Disk2SpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleDynamicVars
MeasureName=MeasureDisk2SpaceUsage
Percentual=1
Text=%1%
Group=Disk2
Hidden=#hideDisk2#

[Disk2SpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDisk2SpaceUsage
BarColor=#colorDisk2#
Group=Disk2
Hidden=#hideDisk2#

; Disk 3
[Disk3NameString_]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDisk3Name
Y=((#hideDisk3# = 1) ? ((#rowSpacing# = 2) ? -5 : -3) : #rowSpacing#)R
Text=#d3#: %1
Group=Disk3
Hidden=#hideDisk3#

[Disk3EjectButton_]
Meter=Image
MeterStyle=StyleEjectButton | StyleImgButtonHover
LeftMouseUpAction=[!CommandMeasure MeasureDisk3Eject "Run"]
Group=Disk3 | EjectButtons
Hidden=(#hideDisk3# = 1) || ([MeasureDisk3Type:] = 4) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

[Disk3TempString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringDiskTemp
MeasureName=MeasureDisk3Temp
Group=Disk3 | DiskTemps
Hidden=(#hideDisk3# = 1) || ([MeasureDisk3Type:] <> 4) || (#showDiskTemps# = 0) || ([MeasureHwinfoDetect:] = -9000)

[Disk3RWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleDynamicVars
MeasureName=MeasureDisk3RWTime
Text=%1%
Group=Disk3
Hidden=#hideDisk3#

[Disk3WriteArrow]
Meter=Image
MeterStyle=StyleWriteArrow
ImageTint=#colorDisk3#
Y=(((#showDiskReadWrite# = 0) && (#hideDisk3# = 0)) ? -#rowSpacing# + 2 : #rowSpacing# + 1)R
Group=Disk3 | Disk3ReadWrite
Hidden=(#hideDisk3# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[Disk3WriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
InlineSetting=Color | #colorDisk3#
Text=#diskWritePrefix#[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk3Write:],[#fpfWriteDepth],'1k')"]B/s
Group=Disk3 | Disk3ReadWrite | DiskReadWrite
Hidden=(#hideDisk3# = 1) || (#showDiskReadWrite# = 0)

[Disk3ReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDisk3#
Group=Disk3 | Disk3ReadWrite
Hidden=(#hideDisk3# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[Disk3ReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
InlineSetting=Color | #colorDisk3#
Text=#diskReadPrefix#[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk3Read:],[#fpfReadDepth],'1k')"]B/s
Group=Disk3 | Disk3ReadWrite | DiskReadWrite
Hidden=(#hideDisk3# = 1) || (#showDiskReadWrite# = 0)

[Disk3SpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk3SpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]B / [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk3SpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]B
Group=Disk3
Hidden=#hideDisk3#

[Disk3SpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleDynamicVars
MeasureName=MeasureDisk3SpaceUsage
Percentual=1
Text=%1%
Group=Disk3
Hidden=#hideDisk3#

[Disk3SpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDisk3SpaceUsage
BarColor=#colorDisk3#
Group=Disk3
Hidden=#hideDisk3#

; Disk 4
[Disk4NameString_]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDisk4Name
Y=((#hideDisk4# = 1) ? ((#rowSpacing# = 2) ? -5 : -3) : #rowSpacing#)R
Text=#d4#: %1
Group=Disk4
Hidden=#hideDisk4#

[Disk4EjectButton_]
Meter=Image
MeterStyle=StyleEjectButton | StyleImgButtonHover
LeftMouseUpAction=[!CommandMeasure MeasureDisk4Eject "Run"]
Group=Disk4 | EjectButtons
Hidden=(#hideDisk4# = 1) || ([MeasureDisk4Type:] = 4) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

[Disk4TempString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringDiskTemp
MeasureName=MeasureDisk4Temp
Group=Disk4 | DiskTemps
Hidden=(#hideDisk4# = 1) || ([MeasureDisk4Type:] <> 4) || (#showDiskTemps# = 0) || ([MeasureHwinfoDetect:] = -9000)

[Disk4RWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleDynamicVars
MeasureName=MeasureDisk4RWTime
Text=%1%
Group=Disk4
Hidden=#hideDisk4#

[Disk4WriteArrow]
Meter=Image
MeterStyle=StyleWriteArrow
ImageTint=#colorDisk4#
Y=(((#showDiskReadWrite# = 0) && (#hideDisk4# = 0)) ? -#rowSpacing# + 2 : #rowSpacing# + 1)R
Group=Disk4 | Disk4ReadWrite
Hidden=(#hideDisk4# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[Disk4WriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
InlineSetting=Color | #colorDisk4#
Text=#diskWritePrefix#[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk4Write:],[#fpfWriteDepth],'1k')"]B/s
Group=Disk4 | Disk4ReadWrite | DiskReadWrite
Hidden=(#hideDisk4# = 1) || (#showDiskReadWrite# = 0)

[Disk4ReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDisk4#
Group=Disk4 | Disk4ReadWrite
Hidden=(#hideDisk4# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[Disk4ReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
InlineSetting=Color | #colorDisk4#
Text=#diskReadPrefix#[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk4Read:],[#fpfReadDepth],'1k')"]B/s
Group=Disk4 | Disk4ReadWrite | DiskReadWrite
Hidden=(#hideDisk4# = 1) || (#showDiskReadWrite# = 0)

[Disk4SpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk4SpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]B / [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk4SpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]B
Group=Disk4
Hidden=#hideDisk4#

[Disk4SpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleDynamicVars
MeasureName=MeasureDisk4SpaceUsage
Percentual=1
Text=%1%
Group=Disk4
Hidden=#hideDisk4#

[Disk4SpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDisk4SpaceUsage
BarColor=#colorDisk4#
Group=Disk4
Hidden=#hideDisk4#

; Disk 5
[Disk5NameString_]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDisk5Name
Y=((#hideDisk5# = 1) ? ((#rowSpacing# = 2) ? -5 : -3) : #rowSpacing#)R
Text=#d5#: %1
Group=Disk5
Hidden=#hideDisk5#

[Disk5EjectButton_]
Meter=Image
MeterStyle=StyleEjectButton | StyleImgButtonHover
LeftMouseUpAction=[!CommandMeasure MeasureDisk5Eject "Run"]
Group=Disk5 | EjectButtons
Hidden=(#hideDisk5# = 1) || ([MeasureDisk5Type:] = 4) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

[Disk5TempString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringDiskTemp
MeasureName=MeasureDisk5Temp
Group=Disk5 | DiskTemps
Hidden=(#hideDisk5# = 1) || ([MeasureDisk5Type:] <> 4) || (#showDiskTemps# = 0) || ([MeasureHwinfoDetect:] = -9000)

[Disk5RWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleDynamicVars
MeasureName=MeasureDisk5RWTime
Text=%1%
Group=Disk5
Hidden=#hideDisk5#

[Disk5WriteArrow]
Meter=Image
MeterStyle=StyleWriteArrow
ImageTint=#colorDisk5#
Y=(((#showDiskReadWrite# = 0) && (#hideDisk5# = 0)) ? -#rowSpacing# + 2 : #rowSpacing# + 1)R
Group=Disk5 | Disk5ReadWrite
Hidden=(#hideDisk5# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[Disk5WriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
InlineSetting=Color | #colorDisk5#
Text=#diskWritePrefix#[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk5Write:],[#fpfWriteDepth],'1k')"]B/s
Group=Disk5 | Disk5ReadWrite | DiskReadWrite
Hidden=(#hideDisk5# = 1) || (#showDiskReadWrite# = 0)

[Disk5ReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDisk5#
Group=Disk5 | Disk5ReadWrite
Hidden=(#hideDisk5# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[Disk5ReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
InlineSetting=Color | #colorDisk5#
Text=#diskReadPrefix#[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk5Read:],[#fpfReadDepth],'1k')"]B/s
Group=Disk5 | Disk5ReadWrite | DiskReadWrite
Hidden=(#hideDisk5# = 1) || (#showDiskReadWrite# = 0)

[Disk5SpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk5SpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]B / [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk5SpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]B
Group=Disk5
Hidden=#hideDisk5#

[Disk5SpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleDynamicVars
MeasureName=MeasureDisk5SpaceUsage
Percentual=1
Text=%1%
Group=Disk5
Hidden=#hideDisk5#

[Disk5SpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDisk5SpaceUsage
BarColor=#colorDisk5#
Group=Disk5
Hidden=#hideDisk5#

; Disk 6
[Disk6NameString_]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDisk6Name
Y=((#hideDisk6# = 1) ? ((#rowSpacing# = 2) ? -5 : -3) : #rowSpacing#)R
Text=#d6#: %1
Group=Disk6
Hidden=#hideDisk6#

[Disk6EjectButton_]
Meter=Image
MeterStyle=StyleEjectButton | StyleImgButtonHover
LeftMouseUpAction=[!CommandMeasure MeasureDisk6Eject "Run"]
Group=Disk6 | EjectButtons
Hidden=(#hideDisk6# = 1) || ([MeasureDisk6Type:] = 4) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

[Disk6TempString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringDiskTemp
MeasureName=MeasureDisk6Temp
Group=Disk6 | DiskTemps
Hidden=(#hideDisk6# = 1) || ([MeasureDisk6Type:] <> 4) || (#showDiskTemps# = 0) || ([MeasureHwinfoDetect:] = -9000)

[Disk6RWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleDynamicVars
MeasureName=MeasureDisk6RWTime
Text=%1%
Group=Disk6
Hidden=#hideDisk6#

[Disk6WriteArrow]
Meter=Image
MeterStyle=StyleWriteArrow
ImageTint=#colorDisk6#
Y=(((#showDiskReadWrite# = 0) && (#hideDisk6# = 0)) ? -#rowSpacing# + 2 : #rowSpacing# + 1)R
Group=Disk6 | Disk6ReadWrite
Hidden=(#hideDisk6# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[Disk6WriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
InlineSetting=Color | #colorDisk6#
Text=#diskWritePrefix#[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk6Write:],[#fpfWriteDepth],'1k')"]B/s
Group=Disk6 | Disk6ReadWrite | DiskReadWrite
Hidden=(#hideDisk6# = 1) || (#showDiskReadWrite# = 0)

[Disk6ReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDisk6#
Group=Disk6 | Disk6ReadWrite
Hidden=(#hideDisk6# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[Disk6ReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
InlineSetting=Color | #colorDisk6#
Text=#diskReadPrefix#[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk6Read:],[#fpfReadDepth],'1k')"]B/s
Group=Disk6 | Disk6ReadWrite | DiskReadWrite
Hidden=(#hideDisk6# = 1) || (#showDiskReadWrite# = 0)

[Disk6SpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk6SpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]B / [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk6SpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]B
Group=Disk6
Hidden=#hideDisk6#

[Disk6SpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleDynamicVars
MeasureName=MeasureDisk6SpaceUsage
Percentual=1
Text=%1%
Group=Disk6
Hidden=#hideDisk6#

[Disk6SpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDisk6SpaceUsage
BarColor=#colorDisk6#
Group=Disk6
Hidden=#hideDisk6#

; Disk 7
[Disk7NameString_]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDisk7Name
Y=((#hideDisk7# = 1) ? ((#rowSpacing# = 2) ? -5 : -3) : #rowSpacing#)R
Text=#d7#: %1
Group=Disk7
Hidden=#hideDisk7#

[Disk7EjectButton_]
Meter=Image
MeterStyle=StyleEjectButton | StyleImgButtonHover
LeftMouseUpAction=[!CommandMeasure MeasureDisk7Eject "Run"]
Group=Disk7 | EjectButtons
Hidden=(#hideDisk7# = 1) || ([MeasureDisk7Type:] = 4) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

[Disk7TempString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringDiskTemp
MeasureName=MeasureDisk7Temp
Group=Disk7 | DiskTemps
Hidden=(#hideDisk7# = 1) || ([MeasureDisk7Type:] <> 4) || (#showDiskTemps# = 0) || ([MeasureHwinfoDetect:] = -9000)

[Disk7RWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleDynamicVars
MeasureName=MeasureDisk7RWTime
Text=%1%
Group=Disk7
Hidden=#hideDisk7#

[Disk7WriteArrow]
Meter=Image
MeterStyle=StyleWriteArrow
ImageTint=#colorDisk7#
Y=(((#showDiskReadWrite# = 0) && (#hideDisk7# = 0)) ? -#rowSpacing# + 2 : #rowSpacing# + 1)R
Group=Disk7 | Disk7ReadWrite
Hidden=(#hideDisk7# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[Disk7WriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
InlineSetting=Color | #colorDisk7#
Text=#diskWritePrefix#[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk7Write:],[#fpfWriteDepth],'1k')"]B/s
Group=Disk7 | Disk7ReadWrite | DiskReadWrite
Hidden=(#hideDisk7# = 1) || (#showDiskReadWrite# = 0)

[Disk7ReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDisk7#
Group=Disk7 | Disk7ReadWrite
Hidden=(#hideDisk7# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[Disk7ReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
InlineSetting=Color | #colorDisk7#
Text=#diskReadPrefix#[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk7Read:],[#fpfReadDepth],'1k')"]B/s
Group=Disk7 | Disk7ReadWrite | DiskReadWrite
Hidden=(#hideDisk7# = 1) || (#showDiskReadWrite# = 0)

[Disk7SpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk7SpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]B / [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk7SpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]B
Group=Disk7
Hidden=#hideDisk7#

[Disk7SpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleDynamicVars
MeasureName=MeasureDisk7SpaceUsage
Percentual=1
Text=%1%
Group=Disk7
Hidden=#hideDisk7#

[Disk7SpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDisk7SpaceUsage
BarColor=#colorDisk7#
Group=Disk7
Hidden=#hideDisk7#

; Disk 8
[Disk8NameString_]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDisk8Name
Y=((#hideDisk8# = 1) ? ((#rowSpacing# = 2) ? -5 : -3) : #rowSpacing#)R
Text=#d8#: %1
Group=Disk8
Hidden=#hideDisk8#

[Disk8EjectButton_]
Meter=Image
MeterStyle=StyleEjectButton | StyleImgButtonHover
LeftMouseUpAction=[!CommandMeasure MeasureDisk8Eject "Run"]
Group=Disk8 | EjectButtons
Hidden=(#hideDisk8# = 1) || ([MeasureDisk8Type:] = 4) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

[Disk8TempString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringDiskTemp
MeasureName=MeasureDisk8Temp
Group=Disk8 | DiskTemps
Hidden=(#hideDisk8# = 1) || ([MeasureDisk8Type:] <> 4) || (#showDiskTemps# = 0) || ([MeasureHwinfoDetect:] = -9000)

[Disk8RWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleDynamicVars
MeasureName=MeasureDisk8RWTime
Text=%1%
Group=Disk8
Hidden=#hideDisk8#

[Disk8WriteArrow]
Meter=Image
MeterStyle=StyleWriteArrow
ImageTint=#colorDisk8#
Y=(((#showDiskReadWrite# = 0) && (#hideDisk8# = 0)) ? -#rowSpacing# + 2 : #rowSpacing# + 1)R
Group=Disk8 | Disk8ReadWrite
Hidden=(#hideDisk8# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[Disk8WriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
InlineSetting=Color | #colorDisk8#
Text=#diskWritePrefix#[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk8Write:],[#fpfWriteDepth],'1k')"]B/s
Group=Disk8 | Disk8ReadWrite | DiskReadWrite
Hidden=(#hideDisk8# = 1) || (#showDiskReadWrite# = 0)

[Disk8ReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDisk8#
Group=Disk8 | Disk8ReadWrite
Hidden=(#hideDisk8# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[Disk8ReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
InlineSetting=Color | #colorDisk8#
Text=#diskReadPrefix#[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk8Read:],[#fpfReadDepth],'1k')"]B/s
Group=Disk8 | Disk8ReadWrite | DiskReadWrite
Hidden=(#hideDisk8# = 1) || (#showDiskReadWrite# = 0)

[Disk8SpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk8SpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]B / [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk8SpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]B
Group=Disk8
Hidden=#hideDisk8#

[Disk8SpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleDynamicVars
MeasureName=MeasureDisk8SpaceUsage
Percentual=1
Text=%1%
Group=Disk8
Hidden=#hideDisk8#

[Disk8SpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDisk8SpaceUsage
BarColor=#colorDisk8#
Group=Disk8
Hidden=#hideDisk8#

; Disk 9
[Disk9NameString_]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDisk9Name
Y=((#hideDisk9# = 1) ? ((#rowSpacing# = 2) ? -5 : -3) : #rowSpacing#)R
Text=#d9#: %1
Group=Disk9
Hidden=#hideDisk9#

[Disk9EjectButton_]
Meter=Image
MeterStyle=StyleEjectButton | StyleImgButtonHover
LeftMouseUpAction=[!CommandMeasure MeasureDisk9Eject "Run"]
Group=Disk9 | EjectButtons
Hidden=(#hideDisk9# = 1) || ([MeasureDisk9Type:] = 4) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

[Disk9TempString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringDiskTemp
MeasureName=MeasureDisk9Temp
Group=Disk9 | DiskTemps
Hidden=(#hideDisk9# = 1) || ([MeasureDisk9Type:] <> 4) || (#showDiskTemps# = 0) || ([MeasureHwinfoDetect:] = -9000)

[Disk9RWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleDynamicVars
MeasureName=MeasureDisk9RWTime
Text=%1%
Group=Disk9
Hidden=#hideDisk9#

[Disk9WriteArrow]
Meter=Image
MeterStyle=StyleWriteArrow
ImageTint=#colorDisk9#
Y=(((#showDiskReadWrite# = 0) && (#hideDisk9# = 0)) ? -#rowSpacing# + 2 : #rowSpacing# + 1)R
Group=Disk9 | Disk9ReadWrite
Hidden=(#hideDisk9# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[Disk9WriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
InlineSetting=Color | #colorDisk9#
Text=#diskWritePrefix#[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk9Write:],[#fpfWriteDepth],'1k')"]B/s
Group=Disk9 | Disk9ReadWrite | DiskReadWrite
Hidden=(#hideDisk9# = 1) || (#showDiskReadWrite# = 0)

[Disk9ReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDisk9#
Group=Disk9 | Disk9ReadWrite
Hidden=(#hideDisk9# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[Disk9ReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
InlineSetting=Color | #colorDisk9#
Text=#diskReadPrefix#[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk9Read:],[#fpfReadDepth],'1k')"]B/s
Group=Disk9 | Disk9ReadWrite | DiskReadWrite
Hidden=(#hideDisk9# = 1) || (#showDiskReadWrite# = 0)

[Disk9SpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk9SpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]B / [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk9SpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]B
Group=Disk9
Hidden=#hideDisk9#

[Disk9SpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleDynamicVars
MeasureName=MeasureDisk9SpaceUsage
Percentual=1
Text=%1%
Group=Disk9
Hidden=#hideDisk9#

[Disk9SpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDisk9SpaceUsage
BarColor=#colorDisk9#
Group=Disk9
Hidden=#hideDisk9#

; Disk 10
[Disk10NameString_]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDisk10Name
Y=((#hideDisk10# = 1) ? ((#rowSpacing# = 2) ? -5 : -3) : #rowSpacing#)R
Text=#d10#: %1
Group=Disk10
Hidden=#hideDisk10#

[Disk10EjectButton_]
Meter=Image
MeterStyle=StyleEjectButton | StyleImgButtonHover
LeftMouseUpAction=[!CommandMeasure MeasureDisk10Eject "Run"]
Group=Disk10 | EjectButtons
Hidden=(#hideDisk10# = 1) || ([MeasureDisk10Type:] = 4) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

[Disk10TempString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringDiskTemp
MeasureName=MeasureDisk10Temp
Group=Disk10 | DiskTemps
Hidden=(#hideDisk10# = 1) || ([MeasureDisk10Type:] <> 4) || (#showDiskTemps# = 0) || ([MeasureHwinfoDetect:] = -9000)

[Disk10RWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleDynamicVars
MeasureName=MeasureDisk10RWTime
Text=%1%
Group=Disk10
Hidden=#hideDisk10#

[Disk10WriteArrow]
Meter=Image
MeterStyle=StyleWriteArrow
ImageTint=#colorDisk10#
Y=(((#showDiskReadWrite# = 0) && (#hideDisk10# = 0)) ? -#rowSpacing# + 2 : #rowSpacing# + 1)R
Group=Disk10 | Disk10ReadWrite
Hidden=(#hideDisk10# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[Disk10WriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
InlineSetting=Color | #colorDisk10#
Text=#diskWritePrefix#[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk10Write:],[#fpfWriteDepth],'1k')"]B/s
Group=Disk10 | Disk10ReadWrite | DiskReadWrite
Hidden=(#hideDisk10# = 1) || (#showDiskReadWrite# = 0)

[Disk10ReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDisk10#
Group=Disk10 | Disk10ReadWrite
Hidden=(#hideDisk10# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)
TransformationMatrix=#transformationMatrix#

[Disk10ReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
InlineSetting=Color | #colorDisk10#
Text=#diskReadPrefix#[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk10Read:],[#fpfReadDepth],'1k')"]B/s
Group=Disk10 | Disk10ReadWrite | DiskReadWrite
Hidden=(#hideDisk10# = 1) || (#showDiskReadWrite# = 0)

[Disk10SpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk10SpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]B / [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk10SpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]B
Group=Disk10
Hidden=#hideDisk10#

[Disk10SpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleDynamicVars
MeasureName=MeasureDisk10SpaceUsage
Percentual=1
Text=%1%
Group=Disk10
Hidden=#hideDisk10#

[Disk10SpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDisk10SpaceUsage
BarColor=#colorDisk10#
Group=Disk10
Hidden=#hideDisk10#
