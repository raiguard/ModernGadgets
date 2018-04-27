; Disk A
[MeasureDiskBType]
Measure=FreeDiskSpace
Drive=A:
Type=1
IgnoreRemovable=0

[MeasureDiskBName]
Measure=FreeDiskSpace
Drive=A:
Label=1
IgnoreRemovable=0
Substitute="":"Unnamed"
Group=DiskB
Disabled=#hideDiskB#

[MeasureDiskBEject]
Measure=Plugin
Plugin=RunCommand
StartInFolder=#@#Addons\Sync
Parameter=sync -e A:
Group=DiskB | EjectButtons
Disabled=(#hideDiskB# = 1) || (#showEjectButtons# = 0)

[MeasureDiskBTemp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-SMART-DiskBTemp-SensorId#
HWiNFOSensorInstance=#HWiNFO-SMART-DiskBTemp-SensorInstance#
HWiNFOEntryId=#HWiNFO-SMART-DiskBTemp-EntryId#
HWiNFOType=CurrentValue
Group=DiskB | DiskTemps
Disabled=(#hideDiskB# = 1) || (#showDiskTemps# = 0)

[MeasureDiskBIdleTime]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=% Idle Time
Name=A:
Group=DiskB
Disabled=#hideDiskB#

[MeasureDiskBRWTime]
Measure=Calc
Formula=100 - Clamp(MeasureDiskBIdleTime,0,100)
MinValue=0
MaxValue=100
Group=DiskB
Disabled=#hideDiskB#

[MeasureDiskBWrite]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Write Bytes/sec
IfCondition=1
IfTrueAction=[!SetVariable textDiskBWrite [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskBWrite:],[#fpfWriteDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskBWrite [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskBWrite:],[#fpfWriteDepth],'1k')"]]
Name=A:
Group=DiskB
Disabled=#hideDiskB#

[MeasureDiskBRead]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Read Bytes/sec
IfCondition=1
IfTrueAction=[!SetVariable textDiskBRead [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskBRead:],[#fpfReadDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskBRead [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskBRead:],[#fpfReadDepth],'1k')"]]
Name=A:
Group=DiskB
Disabled=#hideDiskB#

[MeasureDiskBSpaceUsed]
Measure=FreeDiskSpace
Drive=A:
InvertMeasure=1
IgnoreRemovable=0
IfCondition=1
IfTrueAction=[!SetVariable textDiskBSpaceUsed [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskBSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskBSpaceUsed [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskBSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]]
Group=DiskB
Disabled=#hideDiskB#

[MeasureDiskBSpaceTotal]
Measure=FreeDiskSpace
Drive=A:
Total=1
IgnoreRemovable=0
IfCondition=1
IfTrueAction=[!SetVariable textDiskBSpaceTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskBSpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskBSpaceTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskBSpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]]
IfCondition=(MeasureDiskBSpaceTotal > 0) && (#hideDiskB# = 1)
IfTrueAction=[!CommandMeasure MeasureDisksConfigScript "ConfigureDisk('A:', [MeasureDiskBType:])"]
IfCondition2=(MeasureDiskBSpaceTotal = 0) && (#hideDiskB# = 0)
IfTrueAction2=[!CommandMeasure MeasureDisksConfigScript "ConfigureDisk('A:', 0)"]
DynamicVariables=1

[MeasureDiskBSpaceUsage]
Measure=Calc
Formula=(MeasureDiskBSpaceUsed / MeasureDiskBSpaceTotal)
Group=DiskB
Disabled=#hideDiskB#

