; Disk P:
[MeasureDiskPType]
Measure=FreeDiskSpace
Drive=P:
Type=1
IgnoreRemovable=0

[MeasureDiskPName]
Measure=FreeDiskSpace
Drive=P:
Label=1
IgnoreRemovable=0
Substitute="":"Unnamed"
Group=DiskP
Disabled=#hideDiskP#

[MeasureDiskPEject]
Measure=Plugin
Plugin=RunCommand
StartInFolder=#@#Addons\Sync
Parameter=sync -e P:
Group=DiskP | EjectButtons
Disabled=(#hideDiskP# = 1) || (#showEjectButtons# = 0)

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
Name=P:
Group=DiskP
Disabled=#hideDiskP#

[MeasureDiskPRead]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Read Bytes/sec
Name=P:
Group=DiskP
Disabled=#hideDiskP#

[MeasureDiskPSpaceUsed]
Measure=FreeDiskSpace
Drive=P:
InvertMeasure=1
IgnoreRemovable=0
Group=DiskP
Disabled=#hideDiskP#

[MeasureDiskPSpaceTotal]
Measure=FreeDiskSpace
Drive=P:
Total=1
IgnoreRemovable=0
IfCondition=(MeasureDiskPSpaceTotal > 0) && (#hideDiskP# = 1)
IfTrueAction=[!CommandMeasure MeasureDisksConfigScript "ConfigureDisk('P:', [MeasureDiskPType:])"]
IfCondition2=(MeasureDiskPSpaceTotal = 0) && (#hideDiskP# = 0)
IfTrueAction2=[!CommandMeasure MeasureDisksConfigScript "ConfigureDisk('P:', 0)"]
DynamicVariables=1

[MeasureDiskPSpaceUsage]
Measure=Calc
Formula=(MeasureDiskPSpaceUsed / MeasureDiskPSpaceTotal)
Group=DiskP
Disabled=#hideDiskP#

