; Disk A
[MeasureDiskAType]
Measure=FreeDiskSpace
Drive=A:
Type=1
IgnoreRemovable=#ignoreRemovable#

[MeasureDiskAEject]
Measure=Plugin
Plugin=RunCommand
StartInFolder=#@#Addons\Sync
Parameter=sync -e A:
Group=DiskA | EjectButtons
Disabled=(#hideDiskA# = 1) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

[MeasureDiskATemp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-SMART-DiskATemp-SensorId#
HWiNFOSensorInstance=#HWiNFO-SMART-DiskATemp-SensorInstance#
HWiNFOEntryId=#HWiNFO-SMART-DiskATemp-EntryId#
HWiNFOType=CurrentValue
Group=DiskA | DiskTemps
Disabled=(#hideDiskA# = 1) || (#showDiskTemps# = 0)

[MeasureDiskAIdleTime]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=% Idle Time
Name=A:
Group=DiskA
Disabled=#hideDiskA#

[MeasureDiskARWTime]
Measure=Calc
Formula=100 - Clamp(MeasureDiskAIdleTime,0,100)
MinValue=0
MaxValue=100
Group=DiskA
Disabled=#hideDiskA#

[MeasureDiskAActivity]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Bytes/sec
Name=A:
Group=DiskA
Disabled=#hideDiskA#

[MeasureDiskAWrite]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Write Bytes/sec
IfCondition=1
IfTrueAction=[!SetVariable textDiskAWrite [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskAWrite:],[#fpfWriteDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskAWrite [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskAWrite:],[#fpfWriteDepth],'1k')"]]
Name=A:
Group=DiskA | DiskAReadWrite
Disabled=#hideDiskA#

[MeasureDiskARead]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Read Bytes/sec
IfCondition=1
IfTrueAction=[!SetVariable textDiskARead [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskARead:],[#fpfReadDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskARead [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskARead:],[#fpfReadDepth],'1k')"]]
Name=A:
Group=DiskA | DiskAReadWrite
Disabled=#hideDiskA#

[MeasureDiskASpaceUsed]
Measure=FreeDiskSpace
Drive=A:
InvertMeasure=1
IgnoreRemovable=#ignoreRemovable#
IfCondition=1
IfTrueAction=[!SetVariable textDiskASpaceUsed [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskASpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskASpaceUsed [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskASpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]]
Group=DiskA
Disabled=#hideDiskA#

[MeasureDiskASpaceTotal]
Measure=FreeDiskSpace
Drive=A:
Total=1
IgnoreRemovable=#ignoreRemovable#
IfCondition=1
IfTrueAction=[!SetVariable textDiskASpaceTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskASpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskASpaceTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskASpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]]
IfCondition2=(MeasureDiskASpaceTotal > 0) && (#hideDiskA# = 1)
IfTrueAction2=[!CommandMeasure MeasureDisksConfigScript "ConfigureDisk('A:', [MeasureDiskAType:])"]
IfCondition3=(MeasureDiskASpaceTotal = 0) && (#hideDiskA# = 0)
IfTrueAction3=[!CommandMeasure MeasureDisksConfigScript "ConfigureDisk('A:', 0)"]
DynamicVariables=1

[MeasureDiskASpaceUsage]
Measure=Calc
Formula=(MeasureDiskASpaceUsed / MeasureDiskASpaceTotal)
Group=DiskA
Disabled=#hideDiskA#

[MeasureDiskAName]
Measure=FreeDiskSpace
Drive=A:
Label=1
IgnoreRemovable=#ignoreRemovable#
Substitute="":"#unnamedDiskLabel#"
Group=DiskA
Disabled=#hideDiskA#

; Disk B
[MeasureDiskBType]
Measure=FreeDiskSpace
Drive=B:
Type=1
IgnoreRemovable=#ignoreRemovable#

[MeasureDiskBEject]
Measure=Plugin
Plugin=RunCommand
StartInFolder=#@#Addons\Sync
Parameter=sync -e B:
Group=DiskB | EjectButtons
Disabled=(#hideDiskB# = 1) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

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
Name=B:
Group=DiskB
Disabled=#hideDiskB#

[MeasureDiskBRWTime]
Measure=Calc
Formula=100 - Clamp(MeasureDiskBIdleTime,0,100)
MinValue=0
MaxValue=100
Group=DiskB
Disabled=#hideDiskB#

[MeasureDiskBActivity]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Bytes/sec
Name=B:
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
Name=B:
Group=DiskB | DiskBReadWrite
Disabled=#hideDiskB#

[MeasureDiskBRead]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Read Bytes/sec
IfCondition=1
IfTrueAction=[!SetVariable textDiskBRead [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskBRead:],[#fpfReadDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskBRead [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskBRead:],[#fpfReadDepth],'1k')"]]
Name=B:
Group=DiskB | DiskBReadWrite
Disabled=#hideDiskB#

[MeasureDiskBSpaceUsed]
Measure=FreeDiskSpace
Drive=B:
InvertMeasure=1
IgnoreRemovable=#ignoreRemovable#
IfCondition=1
IfTrueAction=[!SetVariable textDiskBSpaceUsed [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskBSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskBSpaceUsed [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskBSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]]
Group=DiskB
Disabled=#hideDiskB#

[MeasureDiskBSpaceTotal]
Measure=FreeDiskSpace
Drive=B:
Total=1
IgnoreRemovable=#ignoreRemovable#
IfCondition=1
IfTrueAction=[!SetVariable textDiskBSpaceTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskBSpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskBSpaceTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskBSpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]]
IfCondition2=(MeasureDiskBSpaceTotal > 0) && (#hideDiskB# = 1)
IfTrueAction2=[!CommandMeasure MeasureDisksConfigScript "ConfigureDisk('B:', [MeasureDiskBType:])"]
IfCondition3=(MeasureDiskBSpaceTotal = 0) && (#hideDiskB# = 0)
IfTrueAction3=[!CommandMeasure MeasureDisksConfigScript "ConfigureDisk('B:', 0)"]
DynamicVariables=1

[MeasureDiskBSpaceUsage]
Measure=Calc
Formula=(MeasureDiskBSpaceUsed / MeasureDiskBSpaceTotal)
Group=DiskB
Disabled=#hideDiskB#

[MeasureDiskBName]
Measure=FreeDiskSpace
Drive=B:
Label=1
IgnoreRemovable=#ignoreRemovable#
Substitute="":"#unnamedDiskLabel#"
Group=DiskB
Disabled=#hideDiskB#

; Disk C
[MeasureDiskCType]
Measure=FreeDiskSpace
Drive=C:
Type=1
IgnoreRemovable=#ignoreRemovable#

[MeasureDiskCEject]
Measure=Plugin
Plugin=RunCommand
StartInFolder=#@#Addons\Sync
Parameter=sync -e C:
Group=DiskC | EjectButtons
Disabled=(#hideDiskC# = 1) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

[MeasureDiskCTemp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-SMART-DiskCTemp-SensorId#
HWiNFOSensorInstance=#HWiNFO-SMART-DiskCTemp-SensorInstance#
HWiNFOEntryId=#HWiNFO-SMART-DiskCTemp-EntryId#
HWiNFOType=CurrentValue
Group=DiskC | DiskTemps
Disabled=(#hideDiskC# = 1) || (#showDiskTemps# = 0)

[MeasureDiskCIdleTime]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=% Idle Time
Name=C:
Group=DiskC
Disabled=#hideDiskC#

[MeasureDiskCRWTime]
Measure=Calc
Formula=100 - Clamp(MeasureDiskCIdleTime,0,100)
MinValue=0
MaxValue=100
Group=DiskC
Disabled=#hideDiskC#

[MeasureDiskCActivity]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Bytes/sec
Name=C:
Group=DiskC
Disabled=#hideDiskC#

[MeasureDiskCWrite]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Write Bytes/sec
IfCondition=1
IfTrueAction=[!SetVariable textDiskCWrite [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskCWrite:],[#fpfWriteDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskCWrite [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskCWrite:],[#fpfWriteDepth],'1k')"]]
Name=C:
Group=DiskC | DiskCReadWrite
Disabled=#hideDiskC#

[MeasureDiskCRead]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Read Bytes/sec
IfCondition=1
IfTrueAction=[!SetVariable textDiskCRead [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskCRead:],[#fpfReadDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskCRead [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskCRead:],[#fpfReadDepth],'1k')"]]
Name=C:
Group=DiskC | DiskCReadWrite
Disabled=#hideDiskC#

[MeasureDiskCSpaceUsed]
Measure=FreeDiskSpace
Drive=C:
InvertMeasure=1
IgnoreRemovable=#ignoreRemovable#
IfCondition=1
IfTrueAction=[!SetVariable textDiskCSpaceUsed [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskCSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskCSpaceUsed [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskCSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]]
Group=DiskC
Disabled=#hideDiskC#

[MeasureDiskCSpaceTotal]
Measure=FreeDiskSpace
Drive=C:
Total=1
IgnoreRemovable=#ignoreRemovable#
IfCondition=1
IfTrueAction=[!SetVariable textDiskCSpaceTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskCSpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskCSpaceTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskCSpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]]
IfCondition2=(MeasureDiskCSpaceTotal > 0) && (#hideDiskC# = 1)
IfTrueAction2=[!CommandMeasure MeasureDisksConfigScript "ConfigureDisk('C:', [MeasureDiskCType:])"]
IfCondition3=(MeasureDiskCSpaceTotal = 0) && (#hideDiskC# = 0)
IfTrueAction3=[!CommandMeasure MeasureDisksConfigScript "ConfigureDisk('C:', 0)"]
DynamicVariables=1

[MeasureDiskCSpaceUsage]
Measure=Calc
Formula=(MeasureDiskCSpaceUsed / MeasureDiskCSpaceTotal)
Group=DiskC
Disabled=#hideDiskC#

[MeasureDiskCName]
Measure=FreeDiskSpace
Drive=C:
Label=1
IgnoreRemovable=#ignoreRemovable#
Substitute="":"#unnamedDiskLabel#"
Group=DiskC
Disabled=#hideDiskC#

; Disk D
[MeasureDiskDType]
Measure=FreeDiskSpace
Drive=D:
Type=1
IgnoreRemovable=#ignoreRemovable#

[MeasureDiskDEject]
Measure=Plugin
Plugin=RunCommand
StartInFolder=#@#Addons\Sync
Parameter=sync -e D:
Group=DiskD | EjectButtons
Disabled=(#hideDiskD# = 1) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

[MeasureDiskDTemp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-SMART-DiskDTemp-SensorId#
HWiNFOSensorInstance=#HWiNFO-SMART-DiskDTemp-SensorInstance#
HWiNFOEntryId=#HWiNFO-SMART-DiskDTemp-EntryId#
HWiNFOType=CurrentValue
Group=DiskD | DiskTemps
Disabled=(#hideDiskD# = 1) || (#showDiskTemps# = 0)

[MeasureDiskDIdleTime]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=% Idle Time
Name=D:
Group=DiskD
Disabled=#hideDiskD#

[MeasureDiskDRWTime]
Measure=Calc
Formula=100 - Clamp(MeasureDiskDIdleTime,0,100)
MinValue=0
MaxValue=100
Group=DiskD
Disabled=#hideDiskD#

[MeasureDiskDActivity]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Bytes/sec
Name=D:
Group=DiskD
Disabled=#hideDiskD#

[MeasureDiskDWrite]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Write Bytes/sec
IfCondition=1
IfTrueAction=[!SetVariable textDiskDWrite [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskDWrite:],[#fpfWriteDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskDWrite [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskDWrite:],[#fpfWriteDepth],'1k')"]]
Name=D:
Group=DiskD | DiskDReadWrite
Disabled=#hideDiskD#

[MeasureDiskDRead]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Read Bytes/sec
IfCondition=1
IfTrueAction=[!SetVariable textDiskDRead [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskDRead:],[#fpfReadDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskDRead [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskDRead:],[#fpfReadDepth],'1k')"]]
Name=D:
Group=DiskD | DiskDReadWrite
Disabled=#hideDiskD#

[MeasureDiskDSpaceUsed]
Measure=FreeDiskSpace
Drive=D:
InvertMeasure=1
IgnoreRemovable=#ignoreRemovable#
IfCondition=1
IfTrueAction=[!SetVariable textDiskDSpaceUsed [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskDSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskDSpaceUsed [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskDSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]]
Group=DiskD
Disabled=#hideDiskD#

[MeasureDiskDSpaceTotal]
Measure=FreeDiskSpace
Drive=D:
Total=1
IgnoreRemovable=#ignoreRemovable#
IfCondition=1
IfTrueAction=[!SetVariable textDiskDSpaceTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskDSpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskDSpaceTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskDSpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]]
IfCondition2=(MeasureDiskDSpaceTotal > 0) && (#hideDiskD# = 1)
IfTrueAction2=[!CommandMeasure MeasureDisksConfigScript "ConfigureDisk('D:', [MeasureDiskDType:])"]
IfCondition3=(MeasureDiskDSpaceTotal = 0) && (#hideDiskD# = 0)
IfTrueAction3=[!CommandMeasure MeasureDisksConfigScript "ConfigureDisk('D:', 0)"]
DynamicVariables=1

[MeasureDiskDSpaceUsage]
Measure=Calc
Formula=(MeasureDiskDSpaceUsed / MeasureDiskDSpaceTotal)
Group=DiskD
Disabled=#hideDiskD#

[MeasureDiskDName]
Measure=FreeDiskSpace
Drive=D:
Label=1
IgnoreRemovable=#ignoreRemovable#
Substitute="":"#unnamedDiskLabel#"
Group=DiskD
Disabled=#hideDiskD#

; Disk E
[MeasureDiskEType]
Measure=FreeDiskSpace
Drive=E:
Type=1
IgnoreRemovable=#ignoreRemovable#

[MeasureDiskEEject]
Measure=Plugin
Plugin=RunCommand
StartInFolder=#@#Addons\Sync
Parameter=sync -e E:
Group=DiskE | EjectButtons
Disabled=(#hideDiskE# = 1) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

[MeasureDiskETemp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-SMART-DiskETemp-SensorId#
HWiNFOSensorInstance=#HWiNFO-SMART-DiskETemp-SensorInstance#
HWiNFOEntryId=#HWiNFO-SMART-DiskETemp-EntryId#
HWiNFOType=CurrentValue
Group=DiskE | DiskTemps
Disabled=(#hideDiskE# = 1) || (#showDiskTemps# = 0)

[MeasureDiskEIdleTime]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=% Idle Time
Name=E:
Group=DiskE
Disabled=#hideDiskE#

[MeasureDiskERWTime]
Measure=Calc
Formula=100 - Clamp(MeasureDiskEIdleTime,0,100)
MinValue=0
MaxValue=100
Group=DiskE
Disabled=#hideDiskE#

[MeasureDiskEActivity]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Bytes/sec
Name=E:
Group=DiskE
Disabled=#hideDiskE#

[MeasureDiskEWrite]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Write Bytes/sec
IfCondition=1
IfTrueAction=[!SetVariable textDiskEWrite [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskEWrite:],[#fpfWriteDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskEWrite [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskEWrite:],[#fpfWriteDepth],'1k')"]]
Name=E:
Group=DiskE | DiskEReadWrite
Disabled=#hideDiskE#

[MeasureDiskERead]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Read Bytes/sec
IfCondition=1
IfTrueAction=[!SetVariable textDiskERead [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskERead:],[#fpfReadDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskERead [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskERead:],[#fpfReadDepth],'1k')"]]
Name=E:
Group=DiskE | DiskEReadWrite
Disabled=#hideDiskE#

[MeasureDiskESpaceUsed]
Measure=FreeDiskSpace
Drive=E:
InvertMeasure=1
IgnoreRemovable=#ignoreRemovable#
IfCondition=1
IfTrueAction=[!SetVariable textDiskESpaceUsed [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskESpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskESpaceUsed [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskESpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]]
Group=DiskE
Disabled=#hideDiskE#

[MeasureDiskESpaceTotal]
Measure=FreeDiskSpace
Drive=E:
Total=1
IgnoreRemovable=#ignoreRemovable#
IfCondition=1
IfTrueAction=[!SetVariable textDiskESpaceTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskESpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskESpaceTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskESpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]]
IfCondition2=(MeasureDiskESpaceTotal > 0) && (#hideDiskE# = 1)
IfTrueAction2=[!CommandMeasure MeasureDisksConfigScript "ConfigureDisk('E:', [MeasureDiskEType:])"]
IfCondition3=(MeasureDiskESpaceTotal = 0) && (#hideDiskE# = 0)
IfTrueAction3=[!CommandMeasure MeasureDisksConfigScript "ConfigureDisk('E:', 0)"]
DynamicVariables=1

[MeasureDiskESpaceUsage]
Measure=Calc
Formula=(MeasureDiskESpaceUsed / MeasureDiskESpaceTotal)
Group=DiskE
Disabled=#hideDiskE#

[MeasureDiskEName]
Measure=FreeDiskSpace
Drive=E:
Label=1
IgnoreRemovable=#ignoreRemovable#
Substitute="":"#unnamedDiskLabel#"
Group=DiskE
Disabled=#hideDiskE#

; Disk F
[MeasureDiskFType]
Measure=FreeDiskSpace
Drive=F:
Type=1
IgnoreRemovable=#ignoreRemovable#

[MeasureDiskFEject]
Measure=Plugin
Plugin=RunCommand
StartInFolder=#@#Addons\Sync
Parameter=sync -e F:
Group=DiskF | EjectButtons
Disabled=(#hideDiskF# = 1) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

[MeasureDiskFTemp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-SMART-DiskFTemp-SensorId#
HWiNFOSensorInstance=#HWiNFO-SMART-DiskFTemp-SensorInstance#
HWiNFOEntryId=#HWiNFO-SMART-DiskFTemp-EntryId#
HWiNFOType=CurrentValue
Group=DiskF | DiskTemps
Disabled=(#hideDiskF# = 1) || (#showDiskTemps# = 0)

[MeasureDiskFIdleTime]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=% Idle Time
Name=F:
Group=DiskF
Disabled=#hideDiskF#

[MeasureDiskFRWTime]
Measure=Calc
Formula=100 - Clamp(MeasureDiskFIdleTime,0,100)
MinValue=0
MaxValue=100
Group=DiskF
Disabled=#hideDiskF#

[MeasureDiskFActivity]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Bytes/sec
Name=F:
Group=DiskF
Disabled=#hideDiskF#

[MeasureDiskFWrite]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Write Bytes/sec
IfCondition=1
IfTrueAction=[!SetVariable textDiskFWrite [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskFWrite:],[#fpfWriteDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskFWrite [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskFWrite:],[#fpfWriteDepth],'1k')"]]
Name=F:
Group=DiskF | DiskFReadWrite
Disabled=#hideDiskF#

[MeasureDiskFRead]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Read Bytes/sec
IfCondition=1
IfTrueAction=[!SetVariable textDiskFRead [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskFRead:],[#fpfReadDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskFRead [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskFRead:],[#fpfReadDepth],'1k')"]]
Name=F:
Group=DiskF | DiskFReadWrite
Disabled=#hideDiskF#

[MeasureDiskFSpaceUsed]
Measure=FreeDiskSpace
Drive=F:
InvertMeasure=1
IgnoreRemovable=#ignoreRemovable#
IfCondition=1
IfTrueAction=[!SetVariable textDiskFSpaceUsed [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskFSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskFSpaceUsed [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskFSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]]
Group=DiskF
Disabled=#hideDiskF#

[MeasureDiskFSpaceTotal]
Measure=FreeDiskSpace
Drive=F:
Total=1
IgnoreRemovable=#ignoreRemovable#
IfCondition=1
IfTrueAction=[!SetVariable textDiskFSpaceTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskFSpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskFSpaceTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskFSpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]]
IfCondition2=(MeasureDiskFSpaceTotal > 0) && (#hideDiskF# = 1)
IfTrueAction2=[!CommandMeasure MeasureDisksConfigScript "ConfigureDisk('F:', [MeasureDiskFType:])"]
IfCondition3=(MeasureDiskFSpaceTotal = 0) && (#hideDiskF# = 0)
IfTrueAction3=[!CommandMeasure MeasureDisksConfigScript "ConfigureDisk('F:', 0)"]
DynamicVariables=1

[MeasureDiskFSpaceUsage]
Measure=Calc
Formula=(MeasureDiskFSpaceUsed / MeasureDiskFSpaceTotal)
Group=DiskF
Disabled=#hideDiskF#

[MeasureDiskFName]
Measure=FreeDiskSpace
Drive=F:
Label=1
IgnoreRemovable=#ignoreRemovable#
Substitute="":"#unnamedDiskLabel#"
Group=DiskF
Disabled=#hideDiskF#

; Disk G
[MeasureDiskGType]
Measure=FreeDiskSpace
Drive=G:
Type=1
IgnoreRemovable=#ignoreRemovable#

[MeasureDiskGEject]
Measure=Plugin
Plugin=RunCommand
StartInFolder=#@#Addons\Sync
Parameter=sync -e G:
Group=DiskG | EjectButtons
Disabled=(#hideDiskG# = 1) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

[MeasureDiskGTemp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-SMART-DiskGTemp-SensorId#
HWiNFOSensorInstance=#HWiNFO-SMART-DiskGTemp-SensorInstance#
HWiNFOEntryId=#HWiNFO-SMART-DiskGTemp-EntryId#
HWiNFOType=CurrentValue
Group=DiskG | DiskTemps
Disabled=(#hideDiskG# = 1) || (#showDiskTemps# = 0)

[MeasureDiskGIdleTime]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=% Idle Time
Name=G:
Group=DiskG
Disabled=#hideDiskG#

[MeasureDiskGRWTime]
Measure=Calc
Formula=100 - Clamp(MeasureDiskGIdleTime,0,100)
MinValue=0
MaxValue=100
Group=DiskG
Disabled=#hideDiskG#

[MeasureDiskGActivity]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Bytes/sec
Name=G:
Group=DiskG
Disabled=#hideDiskG#

[MeasureDiskGWrite]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Write Bytes/sec
IfCondition=1
IfTrueAction=[!SetVariable textDiskGWrite [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskGWrite:],[#fpfWriteDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskGWrite [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskGWrite:],[#fpfWriteDepth],'1k')"]]
Name=G:
Group=DiskG | DiskGReadWrite
Disabled=#hideDiskG#

[MeasureDiskGRead]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Read Bytes/sec
IfCondition=1
IfTrueAction=[!SetVariable textDiskGRead [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskGRead:],[#fpfReadDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskGRead [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskGRead:],[#fpfReadDepth],'1k')"]]
Name=G:
Group=DiskG | DiskGReadWrite
Disabled=#hideDiskG#

[MeasureDiskGSpaceUsed]
Measure=FreeDiskSpace
Drive=G:
InvertMeasure=1
IgnoreRemovable=#ignoreRemovable#
IfCondition=1
IfTrueAction=[!SetVariable textDiskGSpaceUsed [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskGSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskGSpaceUsed [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskGSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]]
Group=DiskG
Disabled=#hideDiskG#

[MeasureDiskGSpaceTotal]
Measure=FreeDiskSpace
Drive=G:
Total=1
IgnoreRemovable=#ignoreRemovable#
IfCondition=1
IfTrueAction=[!SetVariable textDiskGSpaceTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskGSpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskGSpaceTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskGSpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]]
IfCondition2=(MeasureDiskGSpaceTotal > 0) && (#hideDiskG# = 1)
IfTrueAction2=[!CommandMeasure MeasureDisksConfigScript "ConfigureDisk('G:', [MeasureDiskGType:])"]
IfCondition3=(MeasureDiskGSpaceTotal = 0) && (#hideDiskG# = 0)
IfTrueAction3=[!CommandMeasure MeasureDisksConfigScript "ConfigureDisk('G:', 0)"]
DynamicVariables=1

[MeasureDiskGSpaceUsage]
Measure=Calc
Formula=(MeasureDiskGSpaceUsed / MeasureDiskGSpaceTotal)
Group=DiskG
Disabled=#hideDiskG#

[MeasureDiskGName]
Measure=FreeDiskSpace
Drive=G:
Label=1
IgnoreRemovable=#ignoreRemovable#
Substitute="":"#unnamedDiskLabel#"
Group=DiskG
Disabled=#hideDiskG#

; Disk H
[MeasureDiskHType]
Measure=FreeDiskSpace
Drive=H:
Type=1
IgnoreRemovable=#ignoreRemovable#

[MeasureDiskHEject]
Measure=Plugin
Plugin=RunCommand
StartInFolder=#@#Addons\Sync
Parameter=sync -e H:
Group=DiskH | EjectButtons
Disabled=(#hideDiskH# = 1) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

[MeasureDiskHTemp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-SMART-DiskHTemp-SensorId#
HWiNFOSensorInstance=#HWiNFO-SMART-DiskHTemp-SensorInstance#
HWiNFOEntryId=#HWiNFO-SMART-DiskHTemp-EntryId#
HWiNFOType=CurrentValue
Group=DiskH | DiskTemps
Disabled=(#hideDiskH# = 1) || (#showDiskTemps# = 0)

[MeasureDiskHIdleTime]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=% Idle Time
Name=H:
Group=DiskH
Disabled=#hideDiskH#

[MeasureDiskHRWTime]
Measure=Calc
Formula=100 - Clamp(MeasureDiskHIdleTime,0,100)
MinValue=0
MaxValue=100
Group=DiskH
Disabled=#hideDiskH#

[MeasureDiskHActivity]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Bytes/sec
Name=H:
Group=DiskH
Disabled=#hideDiskH#

[MeasureDiskHWrite]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Write Bytes/sec
IfCondition=1
IfTrueAction=[!SetVariable textDiskHWrite [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskHWrite:],[#fpfWriteDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskHWrite [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskHWrite:],[#fpfWriteDepth],'1k')"]]
Name=H:
Group=DiskH | DiskHReadWrite
Disabled=#hideDiskH#

[MeasureDiskHRead]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Read Bytes/sec
IfCondition=1
IfTrueAction=[!SetVariable textDiskHRead [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskHRead:],[#fpfReadDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskHRead [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskHRead:],[#fpfReadDepth],'1k')"]]
Name=H:
Group=DiskH | DiskHReadWrite
Disabled=#hideDiskH#

[MeasureDiskHSpaceUsed]
Measure=FreeDiskSpace
Drive=H:
InvertMeasure=1
IgnoreRemovable=#ignoreRemovable#
IfCondition=1
IfTrueAction=[!SetVariable textDiskHSpaceUsed [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskHSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskHSpaceUsed [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskHSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]]
Group=DiskH
Disabled=#hideDiskH#

[MeasureDiskHSpaceTotal]
Measure=FreeDiskSpace
Drive=H:
Total=1
IgnoreRemovable=#ignoreRemovable#
IfCondition=1
IfTrueAction=[!SetVariable textDiskHSpaceTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskHSpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskHSpaceTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskHSpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]]
IfCondition2=(MeasureDiskHSpaceTotal > 0) && (#hideDiskH# = 1)
IfTrueAction2=[!CommandMeasure MeasureDisksConfigScript "ConfigureDisk('H:', [MeasureDiskHType:])"]
IfCondition3=(MeasureDiskHSpaceTotal = 0) && (#hideDiskH# = 0)
IfTrueAction3=[!CommandMeasure MeasureDisksConfigScript "ConfigureDisk('H:', 0)"]
DynamicVariables=1

[MeasureDiskHSpaceUsage]
Measure=Calc
Formula=(MeasureDiskHSpaceUsed / MeasureDiskHSpaceTotal)
Group=DiskH
Disabled=#hideDiskH#

[MeasureDiskHName]
Measure=FreeDiskSpace
Drive=H:
Label=1
IgnoreRemovable=#ignoreRemovable#
Substitute="":"#unnamedDiskLabel#"
Group=DiskH
Disabled=#hideDiskH#

; Disk I
[MeasureDiskIType]
Measure=FreeDiskSpace
Drive=I:
Type=1
IgnoreRemovable=#ignoreRemovable#

[MeasureDiskIEject]
Measure=Plugin
Plugin=RunCommand
StartInFolder=#@#Addons\Sync
Parameter=sync -e I:
Group=DiskI | EjectButtons
Disabled=(#hideDiskI# = 1) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

[MeasureDiskITemp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-SMART-DiskITemp-SensorId#
HWiNFOSensorInstance=#HWiNFO-SMART-DiskITemp-SensorInstance#
HWiNFOEntryId=#HWiNFO-SMART-DiskITemp-EntryId#
HWiNFOType=CurrentValue
Group=DiskI | DiskTemps
Disabled=(#hideDiskI# = 1) || (#showDiskTemps# = 0)

[MeasureDiskIIdleTime]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=% Idle Time
Name=I:
Group=DiskI
Disabled=#hideDiskI#

[MeasureDiskIRWTime]
Measure=Calc
Formula=100 - Clamp(MeasureDiskIIdleTime,0,100)
MinValue=0
MaxValue=100
Group=DiskI
Disabled=#hideDiskI#

[MeasureDiskIActivity]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Bytes/sec
Name=I:
Group=DiskI
Disabled=#hideDiskI#

[MeasureDiskIWrite]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Write Bytes/sec
IfCondition=1
IfTrueAction=[!SetVariable textDiskIWrite [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskIWrite:],[#fpfWriteDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskIWrite [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskIWrite:],[#fpfWriteDepth],'1k')"]]
Name=I:
Group=DiskI | DiskIReadWrite
Disabled=#hideDiskI#

[MeasureDiskIRead]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Read Bytes/sec
IfCondition=1
IfTrueAction=[!SetVariable textDiskIRead [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskIRead:],[#fpfReadDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskIRead [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskIRead:],[#fpfReadDepth],'1k')"]]
Name=I:
Group=DiskI | DiskIReadWrite
Disabled=#hideDiskI#

[MeasureDiskISpaceUsed]
Measure=FreeDiskSpace
Drive=I:
InvertMeasure=1
IgnoreRemovable=#ignoreRemovable#
IfCondition=1
IfTrueAction=[!SetVariable textDiskISpaceUsed [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskISpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskISpaceUsed [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskISpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]]
Group=DiskI
Disabled=#hideDiskI#

[MeasureDiskISpaceTotal]
Measure=FreeDiskSpace
Drive=I:
Total=1
IgnoreRemovable=#ignoreRemovable#
IfCondition=1
IfTrueAction=[!SetVariable textDiskISpaceTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskISpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskISpaceTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskISpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]]
IfCondition2=(MeasureDiskISpaceTotal > 0) && (#hideDiskI# = 1)
IfTrueAction2=[!CommandMeasure MeasureDisksConfigScript "ConfigureDisk('I:', [MeasureDiskIType:])"]
IfCondition3=(MeasureDiskISpaceTotal = 0) && (#hideDiskI# = 0)
IfTrueAction3=[!CommandMeasure MeasureDisksConfigScript "ConfigureDisk('I:', 0)"]
DynamicVariables=1

[MeasureDiskISpaceUsage]
Measure=Calc
Formula=(MeasureDiskISpaceUsed / MeasureDiskISpaceTotal)
Group=DiskI
Disabled=#hideDiskI#

[MeasureDiskIName]
Measure=FreeDiskSpace
Drive=I:
Label=1
IgnoreRemovable=#ignoreRemovable#
Substitute="":"#unnamedDiskLabel#"
Group=DiskI
Disabled=#hideDiskI#

; Disk J
[MeasureDiskJType]
Measure=FreeDiskSpace
Drive=J:
Type=1
IgnoreRemovable=#ignoreRemovable#

[MeasureDiskJEject]
Measure=Plugin
Plugin=RunCommand
StartInFolder=#@#Addons\Sync
Parameter=sync -e J:
Group=DiskJ | EjectButtons
Disabled=(#hideDiskJ# = 1) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

[MeasureDiskJTemp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-SMART-DiskJTemp-SensorId#
HWiNFOSensorInstance=#HWiNFO-SMART-DiskJTemp-SensorInstance#
HWiNFOEntryId=#HWiNFO-SMART-DiskJTemp-EntryId#
HWiNFOType=CurrentValue
Group=DiskJ | DiskTemps
Disabled=(#hideDiskJ# = 1) || (#showDiskTemps# = 0)

[MeasureDiskJIdleTime]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=% Idle Time
Name=J:
Group=DiskJ
Disabled=#hideDiskJ#

[MeasureDiskJRWTime]
Measure=Calc
Formula=100 - Clamp(MeasureDiskJIdleTime,0,100)
MinValue=0
MaxValue=100
Group=DiskJ
Disabled=#hideDiskJ#

[MeasureDiskJActivity]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Bytes/sec
Name=J:
Group=DiskJ
Disabled=#hideDiskJ#

[MeasureDiskJWrite]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Write Bytes/sec
IfCondition=1
IfTrueAction=[!SetVariable textDiskJWrite [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskJWrite:],[#fpfWriteDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskJWrite [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskJWrite:],[#fpfWriteDepth],'1k')"]]
Name=J:
Group=DiskJ | DiskJReadWrite
Disabled=#hideDiskJ#

[MeasureDiskJRead]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Read Bytes/sec
IfCondition=1
IfTrueAction=[!SetVariable textDiskJRead [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskJRead:],[#fpfReadDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskJRead [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskJRead:],[#fpfReadDepth],'1k')"]]
Name=J:
Group=DiskJ | DiskJReadWrite
Disabled=#hideDiskJ#

[MeasureDiskJSpaceUsed]
Measure=FreeDiskSpace
Drive=J:
InvertMeasure=1
IgnoreRemovable=#ignoreRemovable#
IfCondition=1
IfTrueAction=[!SetVariable textDiskJSpaceUsed [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskJSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskJSpaceUsed [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskJSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]]
Group=DiskJ
Disabled=#hideDiskJ#

[MeasureDiskJSpaceTotal]
Measure=FreeDiskSpace
Drive=J:
Total=1
IgnoreRemovable=#ignoreRemovable#
IfCondition=1
IfTrueAction=[!SetVariable textDiskJSpaceTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskJSpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskJSpaceTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskJSpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]]
IfCondition2=(MeasureDiskJSpaceTotal > 0) && (#hideDiskJ# = 1)
IfTrueAction2=[!CommandMeasure MeasureDisksConfigScript "ConfigureDisk('J:', [MeasureDiskJType:])"]
IfCondition3=(MeasureDiskJSpaceTotal = 0) && (#hideDiskJ# = 0)
IfTrueAction3=[!CommandMeasure MeasureDisksConfigScript "ConfigureDisk('J:', 0)"]
DynamicVariables=1

[MeasureDiskJSpaceUsage]
Measure=Calc
Formula=(MeasureDiskJSpaceUsed / MeasureDiskJSpaceTotal)
Group=DiskJ
Disabled=#hideDiskJ#

[MeasureDiskJName]
Measure=FreeDiskSpace
Drive=J:
Label=1
IgnoreRemovable=#ignoreRemovable#
Substitute="":"#unnamedDiskLabel#"
Group=DiskJ
Disabled=#hideDiskJ#

; Disk K
[MeasureDiskKType]
Measure=FreeDiskSpace
Drive=K:
Type=1
IgnoreRemovable=#ignoreRemovable#

[MeasureDiskKEject]
Measure=Plugin
Plugin=RunCommand
StartInFolder=#@#Addons\Sync
Parameter=sync -e K:
Group=DiskK | EjectButtons
Disabled=(#hideDiskK# = 1) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

[MeasureDiskKTemp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-SMART-DiskKTemp-SensorId#
HWiNFOSensorInstance=#HWiNFO-SMART-DiskKTemp-SensorInstance#
HWiNFOEntryId=#HWiNFO-SMART-DiskKTemp-EntryId#
HWiNFOType=CurrentValue
Group=DiskK | DiskTemps
Disabled=(#hideDiskK# = 1) || (#showDiskTemps# = 0)

[MeasureDiskKIdleTime]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=% Idle Time
Name=K:
Group=DiskK
Disabled=#hideDiskK#

[MeasureDiskKRWTime]
Measure=Calc
Formula=100 - Clamp(MeasureDiskKIdleTime,0,100)
MinValue=0
MaxValue=100
Group=DiskK
Disabled=#hideDiskK#

[MeasureDiskKActivity]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Bytes/sec
Name=K:
Group=DiskK
Disabled=#hideDiskK#

[MeasureDiskKWrite]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Write Bytes/sec
IfCondition=1
IfTrueAction=[!SetVariable textDiskKWrite [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskKWrite:],[#fpfWriteDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskKWrite [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskKWrite:],[#fpfWriteDepth],'1k')"]]
Name=K:
Group=DiskK | DiskKReadWrite
Disabled=#hideDiskK#

[MeasureDiskKRead]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Read Bytes/sec
IfCondition=1
IfTrueAction=[!SetVariable textDiskKRead [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskKRead:],[#fpfReadDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskKRead [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskKRead:],[#fpfReadDepth],'1k')"]]
Name=K:
Group=DiskK | DiskKReadWrite
Disabled=#hideDiskK#

[MeasureDiskKSpaceUsed]
Measure=FreeDiskSpace
Drive=K:
InvertMeasure=1
IgnoreRemovable=#ignoreRemovable#
IfCondition=1
IfTrueAction=[!SetVariable textDiskKSpaceUsed [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskKSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskKSpaceUsed [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskKSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]]
Group=DiskK
Disabled=#hideDiskK#

[MeasureDiskKSpaceTotal]
Measure=FreeDiskSpace
Drive=K:
Total=1
IgnoreRemovable=#ignoreRemovable#
IfCondition=1
IfTrueAction=[!SetVariable textDiskKSpaceTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskKSpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskKSpaceTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskKSpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]]
IfCondition2=(MeasureDiskKSpaceTotal > 0) && (#hideDiskK# = 1)
IfTrueAction2=[!CommandMeasure MeasureDisksConfigScript "ConfigureDisk('K:', [MeasureDiskKType:])"]
IfCondition3=(MeasureDiskKSpaceTotal = 0) && (#hideDiskK# = 0)
IfTrueAction3=[!CommandMeasure MeasureDisksConfigScript "ConfigureDisk('K:', 0)"]
DynamicVariables=1

[MeasureDiskKSpaceUsage]
Measure=Calc
Formula=(MeasureDiskKSpaceUsed / MeasureDiskKSpaceTotal)
Group=DiskK
Disabled=#hideDiskK#

[MeasureDiskKName]
Measure=FreeDiskSpace
Drive=K:
Label=1
IgnoreRemovable=#ignoreRemovable#
Substitute="":"#unnamedDiskLabel#"
Group=DiskK
Disabled=#hideDiskK#

; Disk L
[MeasureDiskLType]
Measure=FreeDiskSpace
Drive=L:
Type=1
IgnoreRemovable=#ignoreRemovable#

[MeasureDiskLEject]
Measure=Plugin
Plugin=RunCommand
StartInFolder=#@#Addons\Sync
Parameter=sync -e L:
Group=DiskL | EjectButtons
Disabled=(#hideDiskL# = 1) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

[MeasureDiskLTemp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-SMART-DiskLTemp-SensorId#
HWiNFOSensorInstance=#HWiNFO-SMART-DiskLTemp-SensorInstance#
HWiNFOEntryId=#HWiNFO-SMART-DiskLTemp-EntryId#
HWiNFOType=CurrentValue
Group=DiskL | DiskTemps
Disabled=(#hideDiskL# = 1) || (#showDiskTemps# = 0)

[MeasureDiskLIdleTime]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=% Idle Time
Name=L:
Group=DiskL
Disabled=#hideDiskL#

[MeasureDiskLRWTime]
Measure=Calc
Formula=100 - Clamp(MeasureDiskLIdleTime,0,100)
MinValue=0
MaxValue=100
Group=DiskL
Disabled=#hideDiskL#

[MeasureDiskLActivity]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Bytes/sec
Name=L:
Group=DiskL
Disabled=#hideDiskL#

[MeasureDiskLWrite]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Write Bytes/sec
IfCondition=1
IfTrueAction=[!SetVariable textDiskLWrite [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskLWrite:],[#fpfWriteDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskLWrite [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskLWrite:],[#fpfWriteDepth],'1k')"]]
Name=L:
Group=DiskL | DiskLReadWrite
Disabled=#hideDiskL#

[MeasureDiskLRead]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Read Bytes/sec
IfCondition=1
IfTrueAction=[!SetVariable textDiskLRead [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskLRead:],[#fpfReadDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskLRead [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskLRead:],[#fpfReadDepth],'1k')"]]
Name=L:
Group=DiskL | DiskLReadWrite
Disabled=#hideDiskL#

[MeasureDiskLSpaceUsed]
Measure=FreeDiskSpace
Drive=L:
InvertMeasure=1
IgnoreRemovable=#ignoreRemovable#
IfCondition=1
IfTrueAction=[!SetVariable textDiskLSpaceUsed [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskLSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskLSpaceUsed [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskLSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]]
Group=DiskL
Disabled=#hideDiskL#

[MeasureDiskLSpaceTotal]
Measure=FreeDiskSpace
Drive=L:
Total=1
IgnoreRemovable=#ignoreRemovable#
IfCondition=1
IfTrueAction=[!SetVariable textDiskLSpaceTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskLSpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskLSpaceTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskLSpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]]
IfCondition2=(MeasureDiskLSpaceTotal > 0) && (#hideDiskL# = 1)
IfTrueAction2=[!CommandMeasure MeasureDisksConfigScript "ConfigureDisk('L:', [MeasureDiskLType:])"]
IfCondition3=(MeasureDiskLSpaceTotal = 0) && (#hideDiskL# = 0)
IfTrueAction3=[!CommandMeasure MeasureDisksConfigScript "ConfigureDisk('L:', 0)"]
DynamicVariables=1

[MeasureDiskLSpaceUsage]
Measure=Calc
Formula=(MeasureDiskLSpaceUsed / MeasureDiskLSpaceTotal)
Group=DiskL
Disabled=#hideDiskL#

[MeasureDiskLName]
Measure=FreeDiskSpace
Drive=L:
Label=1
IgnoreRemovable=#ignoreRemovable#
Substitute="":"#unnamedDiskLabel#"
Group=DiskL
Disabled=#hideDiskL#

; Disk M
[MeasureDiskMType]
Measure=FreeDiskSpace
Drive=M:
Type=1
IgnoreRemovable=#ignoreRemovable#

[MeasureDiskMEject]
Measure=Plugin
Plugin=RunCommand
StartInFolder=#@#Addons\Sync
Parameter=sync -e M:
Group=DiskM | EjectButtons
Disabled=(#hideDiskM# = 1) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

[MeasureDiskMTemp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-SMART-DiskMTemp-SensorId#
HWiNFOSensorInstance=#HWiNFO-SMART-DiskMTemp-SensorInstance#
HWiNFOEntryId=#HWiNFO-SMART-DiskMTemp-EntryId#
HWiNFOType=CurrentValue
Group=DiskM | DiskTemps
Disabled=(#hideDiskM# = 1) || (#showDiskTemps# = 0)

[MeasureDiskMIdleTime]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=% Idle Time
Name=M:
Group=DiskM
Disabled=#hideDiskM#

[MeasureDiskMRWTime]
Measure=Calc
Formula=100 - Clamp(MeasureDiskMIdleTime,0,100)
MinValue=0
MaxValue=100
Group=DiskM
Disabled=#hideDiskM#

[MeasureDiskMActivity]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Bytes/sec
Name=M:
Group=DiskM
Disabled=#hideDiskM#

[MeasureDiskMWrite]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Write Bytes/sec
IfCondition=1
IfTrueAction=[!SetVariable textDiskMWrite [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskMWrite:],[#fpfWriteDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskMWrite [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskMWrite:],[#fpfWriteDepth],'1k')"]]
Name=M:
Group=DiskM | DiskMReadWrite
Disabled=#hideDiskM#

[MeasureDiskMRead]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Read Bytes/sec
IfCondition=1
IfTrueAction=[!SetVariable textDiskMRead [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskMRead:],[#fpfReadDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskMRead [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskMRead:],[#fpfReadDepth],'1k')"]]
Name=M:
Group=DiskM | DiskMReadWrite
Disabled=#hideDiskM#

[MeasureDiskMSpaceUsed]
Measure=FreeDiskSpace
Drive=M:
InvertMeasure=1
IgnoreRemovable=#ignoreRemovable#
IfCondition=1
IfTrueAction=[!SetVariable textDiskMSpaceUsed [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskMSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskMSpaceUsed [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskMSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]]
Group=DiskM
Disabled=#hideDiskM#

[MeasureDiskMSpaceTotal]
Measure=FreeDiskSpace
Drive=M:
Total=1
IgnoreRemovable=#ignoreRemovable#
IfCondition=1
IfTrueAction=[!SetVariable textDiskMSpaceTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskMSpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskMSpaceTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskMSpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]]
IfCondition2=(MeasureDiskMSpaceTotal > 0) && (#hideDiskM# = 1)
IfTrueAction2=[!CommandMeasure MeasureDisksConfigScript "ConfigureDisk('M:', [MeasureDiskMType:])"]
IfCondition3=(MeasureDiskMSpaceTotal = 0) && (#hideDiskM# = 0)
IfTrueAction3=[!CommandMeasure MeasureDisksConfigScript "ConfigureDisk('M:', 0)"]
DynamicVariables=1

[MeasureDiskMSpaceUsage]
Measure=Calc
Formula=(MeasureDiskMSpaceUsed / MeasureDiskMSpaceTotal)
Group=DiskM
Disabled=#hideDiskM#

[MeasureDiskMName]
Measure=FreeDiskSpace
Drive=M:
Label=1
IgnoreRemovable=#ignoreRemovable#
Substitute="":"#unnamedDiskLabel#"
Group=DiskM
Disabled=#hideDiskM#

; Disk N
[MeasureDiskNType]
Measure=FreeDiskSpace
Drive=N:
Type=1
IgnoreRemovable=#ignoreRemovable#

[MeasureDiskNEject]
Measure=Plugin
Plugin=RunCommand
StartInFolder=#@#Addons\Sync
Parameter=sync -e N:
Group=DiskN | EjectButtons
Disabled=(#hideDiskN# = 1) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

[MeasureDiskNTemp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-SMART-DiskNTemp-SensorId#
HWiNFOSensorInstance=#HWiNFO-SMART-DiskNTemp-SensorInstance#
HWiNFOEntryId=#HWiNFO-SMART-DiskNTemp-EntryId#
HWiNFOType=CurrentValue
Group=DiskN | DiskTemps
Disabled=(#hideDiskN# = 1) || (#showDiskTemps# = 0)

[MeasureDiskNIdleTime]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=% Idle Time
Name=N:
Group=DiskN
Disabled=#hideDiskN#

[MeasureDiskNRWTime]
Measure=Calc
Formula=100 - Clamp(MeasureDiskNIdleTime,0,100)
MinValue=0
MaxValue=100
Group=DiskN
Disabled=#hideDiskN#

[MeasureDiskNActivity]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Bytes/sec
Name=N:
Group=DiskN
Disabled=#hideDiskN#

[MeasureDiskNWrite]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Write Bytes/sec
IfCondition=1
IfTrueAction=[!SetVariable textDiskNWrite [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskNWrite:],[#fpfWriteDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskNWrite [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskNWrite:],[#fpfWriteDepth],'1k')"]]
Name=N:
Group=DiskN | DiskNReadWrite
Disabled=#hideDiskN#

[MeasureDiskNRead]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Read Bytes/sec
IfCondition=1
IfTrueAction=[!SetVariable textDiskNRead [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskNRead:],[#fpfReadDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskNRead [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskNRead:],[#fpfReadDepth],'1k')"]]
Name=N:
Group=DiskN | DiskNReadWrite
Disabled=#hideDiskN#

[MeasureDiskNSpaceUsed]
Measure=FreeDiskSpace
Drive=N:
InvertMeasure=1
IgnoreRemovable=#ignoreRemovable#
IfCondition=1
IfTrueAction=[!SetVariable textDiskNSpaceUsed [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskNSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskNSpaceUsed [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskNSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]]
Group=DiskN
Disabled=#hideDiskN#

[MeasureDiskNSpaceTotal]
Measure=FreeDiskSpace
Drive=N:
Total=1
IgnoreRemovable=#ignoreRemovable#
IfCondition=1
IfTrueAction=[!SetVariable textDiskNSpaceTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskNSpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskNSpaceTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskNSpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]]
IfCondition2=(MeasureDiskNSpaceTotal > 0) && (#hideDiskN# = 1)
IfTrueAction2=[!CommandMeasure MeasureDisksConfigScript "ConfigureDisk('N:', [MeasureDiskNType:])"]
IfCondition3=(MeasureDiskNSpaceTotal = 0) && (#hideDiskN# = 0)
IfTrueAction3=[!CommandMeasure MeasureDisksConfigScript "ConfigureDisk('N:', 0)"]
DynamicVariables=1

[MeasureDiskNSpaceUsage]
Measure=Calc
Formula=(MeasureDiskNSpaceUsed / MeasureDiskNSpaceTotal)
Group=DiskN
Disabled=#hideDiskN#

[MeasureDiskNName]
Measure=FreeDiskSpace
Drive=N:
Label=1
IgnoreRemovable=#ignoreRemovable#
Substitute="":"#unnamedDiskLabel#"
Group=DiskN
Disabled=#hideDiskN#

; Disk O
[MeasureDiskOType]
Measure=FreeDiskSpace
Drive=O:
Type=1
IgnoreRemovable=#ignoreRemovable#

[MeasureDiskOEject]
Measure=Plugin
Plugin=RunCommand
StartInFolder=#@#Addons\Sync
Parameter=sync -e O:
Group=DiskO | EjectButtons
Disabled=(#hideDiskO# = 1) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

[MeasureDiskOTemp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-SMART-DiskOTemp-SensorId#
HWiNFOSensorInstance=#HWiNFO-SMART-DiskOTemp-SensorInstance#
HWiNFOEntryId=#HWiNFO-SMART-DiskOTemp-EntryId#
HWiNFOType=CurrentValue
Group=DiskO | DiskTemps
Disabled=(#hideDiskO# = 1) || (#showDiskTemps# = 0)

[MeasureDiskOIdleTime]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=% Idle Time
Name=O:
Group=DiskO
Disabled=#hideDiskO#

[MeasureDiskORWTime]
Measure=Calc
Formula=100 - Clamp(MeasureDiskOIdleTime,0,100)
MinValue=0
MaxValue=100
Group=DiskO
Disabled=#hideDiskO#

[MeasureDiskOActivity]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Bytes/sec
Name=O:
Group=DiskO
Disabled=#hideDiskO#

[MeasureDiskOWrite]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Write Bytes/sec
IfCondition=1
IfTrueAction=[!SetVariable textDiskOWrite [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskOWrite:],[#fpfWriteDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskOWrite [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskOWrite:],[#fpfWriteDepth],'1k')"]]
Name=O:
Group=DiskO | DiskOReadWrite
Disabled=#hideDiskO#

[MeasureDiskORead]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Read Bytes/sec
IfCondition=1
IfTrueAction=[!SetVariable textDiskORead [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskORead:],[#fpfReadDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskORead [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskORead:],[#fpfReadDepth],'1k')"]]
Name=O:
Group=DiskO | DiskOReadWrite
Disabled=#hideDiskO#

[MeasureDiskOSpaceUsed]
Measure=FreeDiskSpace
Drive=O:
InvertMeasure=1
IgnoreRemovable=#ignoreRemovable#
IfCondition=1
IfTrueAction=[!SetVariable textDiskOSpaceUsed [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskOSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskOSpaceUsed [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskOSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]]
Group=DiskO
Disabled=#hideDiskO#

[MeasureDiskOSpaceTotal]
Measure=FreeDiskSpace
Drive=O:
Total=1
IgnoreRemovable=#ignoreRemovable#
IfCondition=1
IfTrueAction=[!SetVariable textDiskOSpaceTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskOSpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskOSpaceTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskOSpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]]
IfCondition2=(MeasureDiskOSpaceTotal > 0) && (#hideDiskO# = 1)
IfTrueAction2=[!CommandMeasure MeasureDisksConfigScript "ConfigureDisk('O:', [MeasureDiskOType:])"]
IfCondition3=(MeasureDiskOSpaceTotal = 0) && (#hideDiskO# = 0)
IfTrueAction3=[!CommandMeasure MeasureDisksConfigScript "ConfigureDisk('O:', 0)"]
DynamicVariables=1

[MeasureDiskOSpaceUsage]
Measure=Calc
Formula=(MeasureDiskOSpaceUsed / MeasureDiskOSpaceTotal)
Group=DiskO
Disabled=#hideDiskO#

[MeasureDiskOName]
Measure=FreeDiskSpace
Drive=O:
Label=1
IgnoreRemovable=#ignoreRemovable#
Substitute="":"#unnamedDiskLabel#"
Group=DiskO
Disabled=#hideDiskO#

; Disk P
[MeasureDiskPType]
Measure=FreeDiskSpace
Drive=P:
Type=1
IgnoreRemovable=#ignoreRemovable#

[MeasureDiskPEject]
Measure=Plugin
Plugin=RunCommand
StartInFolder=#@#Addons\Sync
Parameter=sync -e P:
Group=DiskP | EjectButtons
Disabled=(#hideDiskP# = 1) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

[MeasureDiskPTemp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-SMART-DiskPTemp-SensorId#
HWiNFOSensorInstance=#HWiNFO-SMART-DiskPTemp-SensorInstance#
HWiNFOEntryId=#HWiNFO-SMART-DiskPTemp-EntryId#
HWiNFOType=CurrentValue
Group=DiskP | DiskTemps
Disabled=(#hideDiskP# = 1) || (#showDiskTemps# = 0)

[MeasureDiskPIdleTime]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=% Idle Time
Name=P:
Group=DiskP
Disabled=#hideDiskP#

[MeasureDiskPRWTime]
Measure=Calc
Formula=100 - Clamp(MeasureDiskPIdleTime,0,100)
MinValue=0
MaxValue=100
Group=DiskP
Disabled=#hideDiskP#

[MeasureDiskPActivity]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Bytes/sec
Name=P:
Group=DiskP
Disabled=#hideDiskP#

[MeasureDiskPWrite]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Write Bytes/sec
IfCondition=1
IfTrueAction=[!SetVariable textDiskPWrite [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskPWrite:],[#fpfWriteDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskPWrite [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskPWrite:],[#fpfWriteDepth],'1k')"]]
Name=P:
Group=DiskP | DiskPReadWrite
Disabled=#hideDiskP#

[MeasureDiskPRead]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Read Bytes/sec
IfCondition=1
IfTrueAction=[!SetVariable textDiskPRead [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskPRead:],[#fpfReadDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskPRead [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskPRead:],[#fpfReadDepth],'1k')"]]
Name=P:
Group=DiskP | DiskPReadWrite
Disabled=#hideDiskP#

[MeasureDiskPSpaceUsed]
Measure=FreeDiskSpace
Drive=P:
InvertMeasure=1
IgnoreRemovable=#ignoreRemovable#
IfCondition=1
IfTrueAction=[!SetVariable textDiskPSpaceUsed [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskPSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskPSpaceUsed [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskPSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]]
Group=DiskP
Disabled=#hideDiskP#

[MeasureDiskPSpaceTotal]
Measure=FreeDiskSpace
Drive=P:
Total=1
IgnoreRemovable=#ignoreRemovable#
IfCondition=1
IfTrueAction=[!SetVariable textDiskPSpaceTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskPSpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskPSpaceTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskPSpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]]
IfCondition2=(MeasureDiskPSpaceTotal > 0) && (#hideDiskP# = 1)
IfTrueAction2=[!CommandMeasure MeasureDisksConfigScript "ConfigureDisk('P:', [MeasureDiskPType:])"]
IfCondition3=(MeasureDiskPSpaceTotal = 0) && (#hideDiskP# = 0)
IfTrueAction3=[!CommandMeasure MeasureDisksConfigScript "ConfigureDisk('P:', 0)"]
DynamicVariables=1

[MeasureDiskPSpaceUsage]
Measure=Calc
Formula=(MeasureDiskPSpaceUsed / MeasureDiskPSpaceTotal)
Group=DiskP
Disabled=#hideDiskP#

[MeasureDiskPName]
Measure=FreeDiskSpace
Drive=P:
Label=1
IgnoreRemovable=#ignoreRemovable#
Substitute="":"#unnamedDiskLabel#"
Group=DiskP
Disabled=#hideDiskP#

; Disk Q
[MeasureDiskQType]
Measure=FreeDiskSpace
Drive=Q:
Type=1
IgnoreRemovable=#ignoreRemovable#

[MeasureDiskQEject]
Measure=Plugin
Plugin=RunCommand
StartInFolder=#@#Addons\Sync
Parameter=sync -e Q:
Group=DiskQ | EjectButtons
Disabled=(#hideDiskQ# = 1) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

[MeasureDiskQTemp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-SMART-DiskQTemp-SensorId#
HWiNFOSensorInstance=#HWiNFO-SMART-DiskQTemp-SensorInstance#
HWiNFOEntryId=#HWiNFO-SMART-DiskQTemp-EntryId#
HWiNFOType=CurrentValue
Group=DiskQ | DiskTemps
Disabled=(#hideDiskQ# = 1) || (#showDiskTemps# = 0)

[MeasureDiskQIdleTime]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=% Idle Time
Name=Q:
Group=DiskQ
Disabled=#hideDiskQ#

[MeasureDiskQRWTime]
Measure=Calc
Formula=100 - Clamp(MeasureDiskQIdleTime,0,100)
MinValue=0
MaxValue=100
Group=DiskQ
Disabled=#hideDiskQ#

[MeasureDiskQActivity]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Bytes/sec
Name=Q:
Group=DiskQ
Disabled=#hideDiskQ#

[MeasureDiskQWrite]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Write Bytes/sec
IfCondition=1
IfTrueAction=[!SetVariable textDiskQWrite [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskQWrite:],[#fpfWriteDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskQWrite [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskQWrite:],[#fpfWriteDepth],'1k')"]]
Name=Q:
Group=DiskQ | DiskQReadWrite
Disabled=#hideDiskQ#

[MeasureDiskQRead]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Read Bytes/sec
IfCondition=1
IfTrueAction=[!SetVariable textDiskQRead [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskQRead:],[#fpfReadDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskQRead [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskQRead:],[#fpfReadDepth],'1k')"]]
Name=Q:
Group=DiskQ | DiskQReadWrite
Disabled=#hideDiskQ#

[MeasureDiskQSpaceUsed]
Measure=FreeDiskSpace
Drive=Q:
InvertMeasure=1
IgnoreRemovable=#ignoreRemovable#
IfCondition=1
IfTrueAction=[!SetVariable textDiskQSpaceUsed [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskQSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskQSpaceUsed [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskQSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]]
Group=DiskQ
Disabled=#hideDiskQ#

[MeasureDiskQSpaceTotal]
Measure=FreeDiskSpace
Drive=Q:
Total=1
IgnoreRemovable=#ignoreRemovable#
IfCondition=1
IfTrueAction=[!SetVariable textDiskQSpaceTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskQSpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskQSpaceTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskQSpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]]
IfCondition2=(MeasureDiskQSpaceTotal > 0) && (#hideDiskQ# = 1)
IfTrueAction2=[!CommandMeasure MeasureDisksConfigScript "ConfigureDisk('Q:', [MeasureDiskQType:])"]
IfCondition3=(MeasureDiskQSpaceTotal = 0) && (#hideDiskQ# = 0)
IfTrueAction3=[!CommandMeasure MeasureDisksConfigScript "ConfigureDisk('Q:', 0)"]
DynamicVariables=1

[MeasureDiskQSpaceUsage]
Measure=Calc
Formula=(MeasureDiskQSpaceUsed / MeasureDiskQSpaceTotal)
Group=DiskQ
Disabled=#hideDiskQ#

[MeasureDiskQName]
Measure=FreeDiskSpace
Drive=Q:
Label=1
IgnoreRemovable=#ignoreRemovable#
Substitute="":"#unnamedDiskLabel#"
Group=DiskQ
Disabled=#hideDiskQ#

; Disk R
[MeasureDiskRType]
Measure=FreeDiskSpace
Drive=R:
Type=1
IgnoreRemovable=#ignoreRemovable#

[MeasureDiskREject]
Measure=Plugin
Plugin=RunCommand
StartInFolder=#@#Addons\Sync
Parameter=sync -e R:
Group=DiskR | EjectButtons
Disabled=(#hideDiskR# = 1) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

[MeasureDiskRTemp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-SMART-DiskRTemp-SensorId#
HWiNFOSensorInstance=#HWiNFO-SMART-DiskRTemp-SensorInstance#
HWiNFOEntryId=#HWiNFO-SMART-DiskRTemp-EntryId#
HWiNFOType=CurrentValue
Group=DiskR | DiskTemps
Disabled=(#hideDiskR# = 1) || (#showDiskTemps# = 0)

[MeasureDiskRIdleTime]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=% Idle Time
Name=R:
Group=DiskR
Disabled=#hideDiskR#

[MeasureDiskRRWTime]
Measure=Calc
Formula=100 - Clamp(MeasureDiskRIdleTime,0,100)
MinValue=0
MaxValue=100
Group=DiskR
Disabled=#hideDiskR#

[MeasureDiskRActivity]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Bytes/sec
Name=R:
Group=DiskR
Disabled=#hideDiskR#

[MeasureDiskRWrite]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Write Bytes/sec
IfCondition=1
IfTrueAction=[!SetVariable textDiskRWrite [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskRWrite:],[#fpfWriteDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskRWrite [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskRWrite:],[#fpfWriteDepth],'1k')"]]
Name=R:
Group=DiskR | DiskRReadWrite
Disabled=#hideDiskR#

[MeasureDiskRRead]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Read Bytes/sec
IfCondition=1
IfTrueAction=[!SetVariable textDiskRRead [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskRRead:],[#fpfReadDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskRRead [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskRRead:],[#fpfReadDepth],'1k')"]]
Name=R:
Group=DiskR | DiskRReadWrite
Disabled=#hideDiskR#

[MeasureDiskRSpaceUsed]
Measure=FreeDiskSpace
Drive=R:
InvertMeasure=1
IgnoreRemovable=#ignoreRemovable#
IfCondition=1
IfTrueAction=[!SetVariable textDiskRSpaceUsed [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskRSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskRSpaceUsed [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskRSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]]
Group=DiskR
Disabled=#hideDiskR#

[MeasureDiskRSpaceTotal]
Measure=FreeDiskSpace
Drive=R:
Total=1
IgnoreRemovable=#ignoreRemovable#
IfCondition=1
IfTrueAction=[!SetVariable textDiskRSpaceTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskRSpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskRSpaceTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskRSpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]]
IfCondition2=(MeasureDiskRSpaceTotal > 0) && (#hideDiskR# = 1)
IfTrueAction2=[!CommandMeasure MeasureDisksConfigScript "ConfigureDisk('R:', [MeasureDiskRType:])"]
IfCondition3=(MeasureDiskRSpaceTotal = 0) && (#hideDiskR# = 0)
IfTrueAction3=[!CommandMeasure MeasureDisksConfigScript "ConfigureDisk('R:', 0)"]
DynamicVariables=1

[MeasureDiskRSpaceUsage]
Measure=Calc
Formula=(MeasureDiskRSpaceUsed / MeasureDiskRSpaceTotal)
Group=DiskR
Disabled=#hideDiskR#

[MeasureDiskRName]
Measure=FreeDiskSpace
Drive=R:
Label=1
IgnoreRemovable=#ignoreRemovable#
Substitute="":"#unnamedDiskLabel#"
Group=DiskR
Disabled=#hideDiskR#

; Disk S
[MeasureDiskSType]
Measure=FreeDiskSpace
Drive=S:
Type=1
IgnoreRemovable=#ignoreRemovable#

[MeasureDiskSEject]
Measure=Plugin
Plugin=RunCommand
StartInFolder=#@#Addons\Sync
Parameter=sync -e S:
Group=DiskS | EjectButtons
Disabled=(#hideDiskS# = 1) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

[MeasureDiskSTemp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-SMART-DiskSTemp-SensorId#
HWiNFOSensorInstance=#HWiNFO-SMART-DiskSTemp-SensorInstance#
HWiNFOEntryId=#HWiNFO-SMART-DiskSTemp-EntryId#
HWiNFOType=CurrentValue
Group=DiskS | DiskTemps
Disabled=(#hideDiskS# = 1) || (#showDiskTemps# = 0)

[MeasureDiskSIdleTime]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=% Idle Time
Name=S:
Group=DiskS
Disabled=#hideDiskS#

[MeasureDiskSRWTime]
Measure=Calc
Formula=100 - Clamp(MeasureDiskSIdleTime,0,100)
MinValue=0
MaxValue=100
Group=DiskS
Disabled=#hideDiskS#

[MeasureDiskSActivity]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Bytes/sec
Name=S:
Group=DiskS
Disabled=#hideDiskS#

[MeasureDiskSWrite]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Write Bytes/sec
IfCondition=1
IfTrueAction=[!SetVariable textDiskSWrite [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskSWrite:],[#fpfWriteDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskSWrite [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskSWrite:],[#fpfWriteDepth],'1k')"]]
Name=S:
Group=DiskS | DiskSReadWrite
Disabled=#hideDiskS#

[MeasureDiskSRead]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Read Bytes/sec
IfCondition=1
IfTrueAction=[!SetVariable textDiskSRead [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskSRead:],[#fpfReadDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskSRead [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskSRead:],[#fpfReadDepth],'1k')"]]
Name=S:
Group=DiskS | DiskSReadWrite
Disabled=#hideDiskS#

[MeasureDiskSSpaceUsed]
Measure=FreeDiskSpace
Drive=S:
InvertMeasure=1
IgnoreRemovable=#ignoreRemovable#
IfCondition=1
IfTrueAction=[!SetVariable textDiskSSpaceUsed [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskSSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskSSpaceUsed [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskSSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]]
Group=DiskS
Disabled=#hideDiskS#

[MeasureDiskSSpaceTotal]
Measure=FreeDiskSpace
Drive=S:
Total=1
IgnoreRemovable=#ignoreRemovable#
IfCondition=1
IfTrueAction=[!SetVariable textDiskSSpaceTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskSSpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskSSpaceTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskSSpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]]
IfCondition2=(MeasureDiskSSpaceTotal > 0) && (#hideDiskS# = 1)
IfTrueAction2=[!CommandMeasure MeasureDisksConfigScript "ConfigureDisk('S:', [MeasureDiskSType:])"]
IfCondition3=(MeasureDiskSSpaceTotal = 0) && (#hideDiskS# = 0)
IfTrueAction3=[!CommandMeasure MeasureDisksConfigScript "ConfigureDisk('S:', 0)"]
DynamicVariables=1

[MeasureDiskSSpaceUsage]
Measure=Calc
Formula=(MeasureDiskSSpaceUsed / MeasureDiskSSpaceTotal)
Group=DiskS
Disabled=#hideDiskS#

[MeasureDiskSName]
Measure=FreeDiskSpace
Drive=S:
Label=1
IgnoreRemovable=#ignoreRemovable#
Substitute="":"#unnamedDiskLabel#"
Group=DiskS
Disabled=#hideDiskS#

; Disk T
[MeasureDiskTType]
Measure=FreeDiskSpace
Drive=T:
Type=1
IgnoreRemovable=#ignoreRemovable#

[MeasureDiskTEject]
Measure=Plugin
Plugin=RunCommand
StartInFolder=#@#Addons\Sync
Parameter=sync -e T:
Group=DiskT | EjectButtons
Disabled=(#hideDiskT# = 1) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

[MeasureDiskTTemp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-SMART-DiskTTemp-SensorId#
HWiNFOSensorInstance=#HWiNFO-SMART-DiskTTemp-SensorInstance#
HWiNFOEntryId=#HWiNFO-SMART-DiskTTemp-EntryId#
HWiNFOType=CurrentValue
Group=DiskT | DiskTemps
Disabled=(#hideDiskT# = 1) || (#showDiskTemps# = 0)

[MeasureDiskTIdleTime]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=% Idle Time
Name=T:
Group=DiskT
Disabled=#hideDiskT#

[MeasureDiskTRWTime]
Measure=Calc
Formula=100 - Clamp(MeasureDiskTIdleTime,0,100)
MinValue=0
MaxValue=100
Group=DiskT
Disabled=#hideDiskT#

[MeasureDiskTActivity]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Bytes/sec
Name=T:
Group=DiskT
Disabled=#hideDiskT#

[MeasureDiskTWrite]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Write Bytes/sec
IfCondition=1
IfTrueAction=[!SetVariable textDiskTWrite [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskTWrite:],[#fpfWriteDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskTWrite [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskTWrite:],[#fpfWriteDepth],'1k')"]]
Name=T:
Group=DiskT | DiskTReadWrite
Disabled=#hideDiskT#

[MeasureDiskTRead]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Read Bytes/sec
IfCondition=1
IfTrueAction=[!SetVariable textDiskTRead [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskTRead:],[#fpfReadDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskTRead [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskTRead:],[#fpfReadDepth],'1k')"]]
Name=T:
Group=DiskT | DiskTReadWrite
Disabled=#hideDiskT#

[MeasureDiskTSpaceUsed]
Measure=FreeDiskSpace
Drive=T:
InvertMeasure=1
IgnoreRemovable=#ignoreRemovable#
IfCondition=1
IfTrueAction=[!SetVariable textDiskTSpaceUsed [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskTSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskTSpaceUsed [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskTSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]]
Group=DiskT
Disabled=#hideDiskT#

[MeasureDiskTSpaceTotal]
Measure=FreeDiskSpace
Drive=T:
Total=1
IgnoreRemovable=#ignoreRemovable#
IfCondition=1
IfTrueAction=[!SetVariable textDiskTSpaceTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskTSpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskTSpaceTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskTSpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]]
IfCondition2=(MeasureDiskTSpaceTotal > 0) && (#hideDiskT# = 1)
IfTrueAction2=[!CommandMeasure MeasureDisksConfigScript "ConfigureDisk('T:', [MeasureDiskTType:])"]
IfCondition3=(MeasureDiskTSpaceTotal = 0) && (#hideDiskT# = 0)
IfTrueAction3=[!CommandMeasure MeasureDisksConfigScript "ConfigureDisk('T:', 0)"]
DynamicVariables=1

[MeasureDiskTSpaceUsage]
Measure=Calc
Formula=(MeasureDiskTSpaceUsed / MeasureDiskTSpaceTotal)
Group=DiskT
Disabled=#hideDiskT#

[MeasureDiskTName]
Measure=FreeDiskSpace
Drive=T:
Label=1
IgnoreRemovable=#ignoreRemovable#
Substitute="":"#unnamedDiskLabel#"
Group=DiskT
Disabled=#hideDiskT#

; Disk U
[MeasureDiskUType]
Measure=FreeDiskSpace
Drive=U:
Type=1
IgnoreRemovable=#ignoreRemovable#

[MeasureDiskUEject]
Measure=Plugin
Plugin=RunCommand
StartInFolder=#@#Addons\Sync
Parameter=sync -e U:
Group=DiskU | EjectButtons
Disabled=(#hideDiskU# = 1) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

[MeasureDiskUTemp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-SMART-DiskUTemp-SensorId#
HWiNFOSensorInstance=#HWiNFO-SMART-DiskUTemp-SensorInstance#
HWiNFOEntryId=#HWiNFO-SMART-DiskUTemp-EntryId#
HWiNFOType=CurrentValue
Group=DiskU | DiskTemps
Disabled=(#hideDiskU# = 1) || (#showDiskTemps# = 0)

[MeasureDiskUIdleTime]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=% Idle Time
Name=U:
Group=DiskU
Disabled=#hideDiskU#

[MeasureDiskURWTime]
Measure=Calc
Formula=100 - Clamp(MeasureDiskUIdleTime,0,100)
MinValue=0
MaxValue=100
Group=DiskU
Disabled=#hideDiskU#

[MeasureDiskUActivity]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Bytes/sec
Name=U:
Group=DiskU
Disabled=#hideDiskU#

[MeasureDiskUWrite]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Write Bytes/sec
IfCondition=1
IfTrueAction=[!SetVariable textDiskUWrite [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskUWrite:],[#fpfWriteDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskUWrite [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskUWrite:],[#fpfWriteDepth],'1k')"]]
Name=U:
Group=DiskU | DiskUReadWrite
Disabled=#hideDiskU#

[MeasureDiskURead]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Read Bytes/sec
IfCondition=1
IfTrueAction=[!SetVariable textDiskURead [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskURead:],[#fpfReadDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskURead [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskURead:],[#fpfReadDepth],'1k')"]]
Name=U:
Group=DiskU | DiskUReadWrite
Disabled=#hideDiskU#

[MeasureDiskUSpaceUsed]
Measure=FreeDiskSpace
Drive=U:
InvertMeasure=1
IgnoreRemovable=#ignoreRemovable#
IfCondition=1
IfTrueAction=[!SetVariable textDiskUSpaceUsed [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskUSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskUSpaceUsed [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskUSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]]
Group=DiskU
Disabled=#hideDiskU#

[MeasureDiskUSpaceTotal]
Measure=FreeDiskSpace
Drive=U:
Total=1
IgnoreRemovable=#ignoreRemovable#
IfCondition=1
IfTrueAction=[!SetVariable textDiskUSpaceTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskUSpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskUSpaceTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskUSpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]]
IfCondition2=(MeasureDiskUSpaceTotal > 0) && (#hideDiskU# = 1)
IfTrueAction2=[!CommandMeasure MeasureDisksConfigScript "ConfigureDisk('U:', [MeasureDiskUType:])"]
IfCondition3=(MeasureDiskUSpaceTotal = 0) && (#hideDiskU# = 0)
IfTrueAction3=[!CommandMeasure MeasureDisksConfigScript "ConfigureDisk('U:', 0)"]
DynamicVariables=1

[MeasureDiskUSpaceUsage]
Measure=Calc
Formula=(MeasureDiskUSpaceUsed / MeasureDiskUSpaceTotal)
Group=DiskU
Disabled=#hideDiskU#

[MeasureDiskUName]
Measure=FreeDiskSpace
Drive=U:
Label=1
IgnoreRemovable=#ignoreRemovable#
Substitute="":"#unnamedDiskLabel#"
Group=DiskU
Disabled=#hideDiskU#

; Disk V
[MeasureDiskVType]
Measure=FreeDiskSpace
Drive=V:
Type=1
IgnoreRemovable=#ignoreRemovable#

[MeasureDiskVEject]
Measure=Plugin
Plugin=RunCommand
StartInFolder=#@#Addons\Sync
Parameter=sync -e V:
Group=DiskV | EjectButtons
Disabled=(#hideDiskV# = 1) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

[MeasureDiskVTemp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-SMART-DiskVTemp-SensorId#
HWiNFOSensorInstance=#HWiNFO-SMART-DiskVTemp-SensorInstance#
HWiNFOEntryId=#HWiNFO-SMART-DiskVTemp-EntryId#
HWiNFOType=CurrentValue
Group=DiskV | DiskTemps
Disabled=(#hideDiskV# = 1) || (#showDiskTemps# = 0)

[MeasureDiskVIdleTime]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=% Idle Time
Name=V:
Group=DiskV
Disabled=#hideDiskV#

[MeasureDiskVRWTime]
Measure=Calc
Formula=100 - Clamp(MeasureDiskVIdleTime,0,100)
MinValue=0
MaxValue=100
Group=DiskV
Disabled=#hideDiskV#

[MeasureDiskVActivity]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Bytes/sec
Name=V:
Group=DiskV
Disabled=#hideDiskV#

[MeasureDiskVWrite]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Write Bytes/sec
IfCondition=1
IfTrueAction=[!SetVariable textDiskVWrite [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskVWrite:],[#fpfWriteDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskVWrite [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskVWrite:],[#fpfWriteDepth],'1k')"]]
Name=V:
Group=DiskV | DiskVReadWrite
Disabled=#hideDiskV#

[MeasureDiskVRead]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Read Bytes/sec
IfCondition=1
IfTrueAction=[!SetVariable textDiskVRead [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskVRead:],[#fpfReadDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskVRead [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskVRead:],[#fpfReadDepth],'1k')"]]
Name=V:
Group=DiskV | DiskVReadWrite
Disabled=#hideDiskV#

[MeasureDiskVSpaceUsed]
Measure=FreeDiskSpace
Drive=V:
InvertMeasure=1
IgnoreRemovable=#ignoreRemovable#
IfCondition=1
IfTrueAction=[!SetVariable textDiskVSpaceUsed [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskVSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskVSpaceUsed [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskVSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]]
Group=DiskV
Disabled=#hideDiskV#

[MeasureDiskVSpaceTotal]
Measure=FreeDiskSpace
Drive=V:
Total=1
IgnoreRemovable=#ignoreRemovable#
IfCondition=1
IfTrueAction=[!SetVariable textDiskVSpaceTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskVSpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskVSpaceTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskVSpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]]
IfCondition2=(MeasureDiskVSpaceTotal > 0) && (#hideDiskV# = 1)
IfTrueAction2=[!CommandMeasure MeasureDisksConfigScript "ConfigureDisk('V:', [MeasureDiskVType:])"]
IfCondition3=(MeasureDiskVSpaceTotal = 0) && (#hideDiskV# = 0)
IfTrueAction3=[!CommandMeasure MeasureDisksConfigScript "ConfigureDisk('V:', 0)"]
DynamicVariables=1

[MeasureDiskVSpaceUsage]
Measure=Calc
Formula=(MeasureDiskVSpaceUsed / MeasureDiskVSpaceTotal)
Group=DiskV
Disabled=#hideDiskV#

[MeasureDiskVName]
Measure=FreeDiskSpace
Drive=V:
Label=1
IgnoreRemovable=#ignoreRemovable#
Substitute="":"#unnamedDiskLabel#"
Group=DiskV
Disabled=#hideDiskV#

; Disk W
[MeasureDiskWType]
Measure=FreeDiskSpace
Drive=W:
Type=1
IgnoreRemovable=#ignoreRemovable#

[MeasureDiskWEject]
Measure=Plugin
Plugin=RunCommand
StartInFolder=#@#Addons\Sync
Parameter=sync -e W:
Group=DiskW | EjectButtons
Disabled=(#hideDiskW# = 1) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

[MeasureDiskWTemp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-SMART-DiskWTemp-SensorId#
HWiNFOSensorInstance=#HWiNFO-SMART-DiskWTemp-SensorInstance#
HWiNFOEntryId=#HWiNFO-SMART-DiskWTemp-EntryId#
HWiNFOType=CurrentValue
Group=DiskW | DiskTemps
Disabled=(#hideDiskW# = 1) || (#showDiskTemps# = 0)

[MeasureDiskWIdleTime]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=% Idle Time
Name=W:
Group=DiskW
Disabled=#hideDiskW#

[MeasureDiskWRWTime]
Measure=Calc
Formula=100 - Clamp(MeasureDiskWIdleTime,0,100)
MinValue=0
MaxValue=100
Group=DiskW
Disabled=#hideDiskW#

[MeasureDiskWActivity]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Bytes/sec
Name=W:
Group=DiskW
Disabled=#hideDiskW#

[MeasureDiskWWrite]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Write Bytes/sec
IfCondition=1
IfTrueAction=[!SetVariable textDiskWWrite [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskWWrite:],[#fpfWriteDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskWWrite [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskWWrite:],[#fpfWriteDepth],'1k')"]]
Name=W:
Group=DiskW | DiskWReadWrite
Disabled=#hideDiskW#

[MeasureDiskWRead]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Read Bytes/sec
IfCondition=1
IfTrueAction=[!SetVariable textDiskWRead [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskWRead:],[#fpfReadDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskWRead [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskWRead:],[#fpfReadDepth],'1k')"]]
Name=W:
Group=DiskW | DiskWReadWrite
Disabled=#hideDiskW#

[MeasureDiskWSpaceUsed]
Measure=FreeDiskSpace
Drive=W:
InvertMeasure=1
IgnoreRemovable=#ignoreRemovable#
IfCondition=1
IfTrueAction=[!SetVariable textDiskWSpaceUsed [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskWSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskWSpaceUsed [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskWSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]]
Group=DiskW
Disabled=#hideDiskW#

[MeasureDiskWSpaceTotal]
Measure=FreeDiskSpace
Drive=W:
Total=1
IgnoreRemovable=#ignoreRemovable#
IfCondition=1
IfTrueAction=[!SetVariable textDiskWSpaceTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskWSpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskWSpaceTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskWSpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]]
IfCondition2=(MeasureDiskWSpaceTotal > 0) && (#hideDiskW# = 1)
IfTrueAction2=[!CommandMeasure MeasureDisksConfigScript "ConfigureDisk('W:', [MeasureDiskWType:])"]
IfCondition3=(MeasureDiskWSpaceTotal = 0) && (#hideDiskW# = 0)
IfTrueAction3=[!CommandMeasure MeasureDisksConfigScript "ConfigureDisk('W:', 0)"]
DynamicVariables=1

[MeasureDiskWSpaceUsage]
Measure=Calc
Formula=(MeasureDiskWSpaceUsed / MeasureDiskWSpaceTotal)
Group=DiskW
Disabled=#hideDiskW#

[MeasureDiskWName]
Measure=FreeDiskSpace
Drive=W:
Label=1
IgnoreRemovable=#ignoreRemovable#
Substitute="":"#unnamedDiskLabel#"
Group=DiskW
Disabled=#hideDiskW#

; Disk X
[MeasureDiskXType]
Measure=FreeDiskSpace
Drive=X:
Type=1
IgnoreRemovable=#ignoreRemovable#

[MeasureDiskXEject]
Measure=Plugin
Plugin=RunCommand
StartInFolder=#@#Addons\Sync
Parameter=sync -e X:
Group=DiskX | EjectButtons
Disabled=(#hideDiskX# = 1) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

[MeasureDiskXTemp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-SMART-DiskXTemp-SensorId#
HWiNFOSensorInstance=#HWiNFO-SMART-DiskXTemp-SensorInstance#
HWiNFOEntryId=#HWiNFO-SMART-DiskXTemp-EntryId#
HWiNFOType=CurrentValue
Group=DiskX | DiskTemps
Disabled=(#hideDiskX# = 1) || (#showDiskTemps# = 0)

[MeasureDiskXIdleTime]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=% Idle Time
Name=X:
Group=DiskX
Disabled=#hideDiskX#

[MeasureDiskXRWTime]
Measure=Calc
Formula=100 - Clamp(MeasureDiskXIdleTime,0,100)
MinValue=0
MaxValue=100
Group=DiskX
Disabled=#hideDiskX#

[MeasureDiskXActivity]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Bytes/sec
Name=X:
Group=DiskX
Disabled=#hideDiskX#

[MeasureDiskXWrite]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Write Bytes/sec
IfCondition=1
IfTrueAction=[!SetVariable textDiskXWrite [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskXWrite:],[#fpfWriteDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskXWrite [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskXWrite:],[#fpfWriteDepth],'1k')"]]
Name=X:
Group=DiskX | DiskXReadWrite
Disabled=#hideDiskX#

[MeasureDiskXRead]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Read Bytes/sec
IfCondition=1
IfTrueAction=[!SetVariable textDiskXRead [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskXRead:],[#fpfReadDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskXRead [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskXRead:],[#fpfReadDepth],'1k')"]]
Name=X:
Group=DiskX | DiskXReadWrite
Disabled=#hideDiskX#

[MeasureDiskXSpaceUsed]
Measure=FreeDiskSpace
Drive=X:
InvertMeasure=1
IgnoreRemovable=#ignoreRemovable#
IfCondition=1
IfTrueAction=[!SetVariable textDiskXSpaceUsed [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskXSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskXSpaceUsed [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskXSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]]
Group=DiskX
Disabled=#hideDiskX#

[MeasureDiskXSpaceTotal]
Measure=FreeDiskSpace
Drive=X:
Total=1
IgnoreRemovable=#ignoreRemovable#
IfCondition=1
IfTrueAction=[!SetVariable textDiskXSpaceTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskXSpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskXSpaceTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskXSpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]]
IfCondition2=(MeasureDiskXSpaceTotal > 0) && (#hideDiskX# = 1)
IfTrueAction2=[!CommandMeasure MeasureDisksConfigScript "ConfigureDisk('X:', [MeasureDiskXType:])"]
IfCondition3=(MeasureDiskXSpaceTotal = 0) && (#hideDiskX# = 0)
IfTrueAction3=[!CommandMeasure MeasureDisksConfigScript "ConfigureDisk('X:', 0)"]
DynamicVariables=1

[MeasureDiskXSpaceUsage]
Measure=Calc
Formula=(MeasureDiskXSpaceUsed / MeasureDiskXSpaceTotal)
Group=DiskX
Disabled=#hideDiskX#

[MeasureDiskXName]
Measure=FreeDiskSpace
Drive=X:
Label=1
IgnoreRemovable=#ignoreRemovable#
Substitute="":"#unnamedDiskLabel#"
Group=DiskX
Disabled=#hideDiskX#

; Disk Y
[MeasureDiskYType]
Measure=FreeDiskSpace
Drive=Y:
Type=1
IgnoreRemovable=#ignoreRemovable#

[MeasureDiskYEject]
Measure=Plugin
Plugin=RunCommand
StartInFolder=#@#Addons\Sync
Parameter=sync -e Y:
Group=DiskY | EjectButtons
Disabled=(#hideDiskY# = 1) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

[MeasureDiskYTemp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-SMART-DiskYTemp-SensorId#
HWiNFOSensorInstance=#HWiNFO-SMART-DiskYTemp-SensorInstance#
HWiNFOEntryId=#HWiNFO-SMART-DiskYTemp-EntryId#
HWiNFOType=CurrentValue
Group=DiskY | DiskTemps
Disabled=(#hideDiskY# = 1) || (#showDiskTemps# = 0)

[MeasureDiskYIdleTime]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=% Idle Time
Name=Y:
Group=DiskY
Disabled=#hideDiskY#

[MeasureDiskYRWTime]
Measure=Calc
Formula=100 - Clamp(MeasureDiskYIdleTime,0,100)
MinValue=0
MaxValue=100
Group=DiskY
Disabled=#hideDiskY#

[MeasureDiskYActivity]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Bytes/sec
Name=Y:
Group=DiskY
Disabled=#hideDiskY#

[MeasureDiskYWrite]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Write Bytes/sec
IfCondition=1
IfTrueAction=[!SetVariable textDiskYWrite [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskYWrite:],[#fpfWriteDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskYWrite [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskYWrite:],[#fpfWriteDepth],'1k')"]]
Name=Y:
Group=DiskY | DiskYReadWrite
Disabled=#hideDiskY#

[MeasureDiskYRead]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Read Bytes/sec
IfCondition=1
IfTrueAction=[!SetVariable textDiskYRead [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskYRead:],[#fpfReadDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskYRead [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskYRead:],[#fpfReadDepth],'1k')"]]
Name=Y:
Group=DiskY | DiskYReadWrite
Disabled=#hideDiskY#

[MeasureDiskYSpaceUsed]
Measure=FreeDiskSpace
Drive=Y:
InvertMeasure=1
IgnoreRemovable=#ignoreRemovable#
IfCondition=1
IfTrueAction=[!SetVariable textDiskYSpaceUsed [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskYSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskYSpaceUsed [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskYSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]]
Group=DiskY
Disabled=#hideDiskY#

[MeasureDiskYSpaceTotal]
Measure=FreeDiskSpace
Drive=Y:
Total=1
IgnoreRemovable=#ignoreRemovable#
IfCondition=1
IfTrueAction=[!SetVariable textDiskYSpaceTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskYSpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskYSpaceTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskYSpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]]
IfCondition2=(MeasureDiskYSpaceTotal > 0) && (#hideDiskY# = 1)
IfTrueAction2=[!CommandMeasure MeasureDisksConfigScript "ConfigureDisk('Y:', [MeasureDiskYType:])"]
IfCondition3=(MeasureDiskYSpaceTotal = 0) && (#hideDiskY# = 0)
IfTrueAction3=[!CommandMeasure MeasureDisksConfigScript "ConfigureDisk('Y:', 0)"]
DynamicVariables=1

[MeasureDiskYSpaceUsage]
Measure=Calc
Formula=(MeasureDiskYSpaceUsed / MeasureDiskYSpaceTotal)
Group=DiskY
Disabled=#hideDiskY#

[MeasureDiskYName]
Measure=FreeDiskSpace
Drive=Y:
Label=1
IgnoreRemovable=#ignoreRemovable#
Substitute="":"#unnamedDiskLabel#"
Group=DiskY
Disabled=#hideDiskY#

; Disk Z
[MeasureDiskZType]
Measure=FreeDiskSpace
Drive=Z:
Type=1
IgnoreRemovable=#ignoreRemovable#

[MeasureDiskZEject]
Measure=Plugin
Plugin=RunCommand
StartInFolder=#@#Addons\Sync
Parameter=sync -e Z:
Group=DiskZ | EjectButtons
Disabled=(#hideDiskZ# = 1) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

[MeasureDiskZTemp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-SMART-DiskZTemp-SensorId#
HWiNFOSensorInstance=#HWiNFO-SMART-DiskZTemp-SensorInstance#
HWiNFOEntryId=#HWiNFO-SMART-DiskZTemp-EntryId#
HWiNFOType=CurrentValue
Group=DiskZ | DiskTemps
Disabled=(#hideDiskZ# = 1) || (#showDiskTemps# = 0)

[MeasureDiskZIdleTime]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=% Idle Time
Name=Z:
Group=DiskZ
Disabled=#hideDiskZ#

[MeasureDiskZRWTime]
Measure=Calc
Formula=100 - Clamp(MeasureDiskZIdleTime,0,100)
MinValue=0
MaxValue=100
Group=DiskZ
Disabled=#hideDiskZ#

[MeasureDiskZActivity]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Bytes/sec
Name=Z:
Group=DiskZ
Disabled=#hideDiskZ#

[MeasureDiskZWrite]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Write Bytes/sec
IfCondition=1
IfTrueAction=[!SetVariable textDiskZWrite [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskZWrite:],[#fpfWriteDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskZWrite [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskZWrite:],[#fpfWriteDepth],'1k')"]]
Name=Z:
Group=DiskZ | DiskZReadWrite
Disabled=#hideDiskZ#

[MeasureDiskZRead]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Read Bytes/sec
IfCondition=1
IfTrueAction=[!SetVariable textDiskZRead [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskZRead:],[#fpfReadDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskZRead [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskZRead:],[#fpfReadDepth],'1k')"]]
Name=Z:
Group=DiskZ | DiskZReadWrite
Disabled=#hideDiskZ#

[MeasureDiskZSpaceUsed]
Measure=FreeDiskSpace
Drive=Z:
InvertMeasure=1
IgnoreRemovable=#ignoreRemovable#
IfCondition=1
IfTrueAction=[!SetVariable textDiskZSpaceUsed [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskZSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskZSpaceUsed [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskZSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]]
Group=DiskZ
Disabled=#hideDiskZ#

[MeasureDiskZSpaceTotal]
Measure=FreeDiskSpace
Drive=Z:
Total=1
IgnoreRemovable=#ignoreRemovable#
IfCondition=1
IfTrueAction=[!SetVariable textDiskZSpaceTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskZSpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]]
OnChangeAction=[!SetVariable textDiskZSpaceTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDiskZSpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]]
IfCondition2=(MeasureDiskZSpaceTotal > 0) && (#hideDiskZ# = 1)
IfTrueAction2=[!CommandMeasure MeasureDisksConfigScript "ConfigureDisk('Z:', [MeasureDiskZType:])"]
IfCondition3=(MeasureDiskZSpaceTotal = 0) && (#hideDiskZ# = 0)
IfTrueAction3=[!CommandMeasure MeasureDisksConfigScript "ConfigureDisk('Z:', 0)"]
DynamicVariables=1

[MeasureDiskZSpaceUsage]
Measure=Calc
Formula=(MeasureDiskZSpaceUsed / MeasureDiskZSpaceTotal)
Group=DiskZ
Disabled=#hideDiskZ#

[MeasureDiskZName]
Measure=FreeDiskSpace
Drive=Z:
Label=1
IgnoreRemovable=#ignoreRemovable#
Substitute="":"#unnamedDiskLabel#"
Group=DiskZ
Disabled=#hideDiskZ#