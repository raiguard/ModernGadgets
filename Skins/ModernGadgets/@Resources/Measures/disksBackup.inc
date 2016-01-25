; DISKS MEASURES

[MeasureFixedPrecisionFormatScript]
Measure=Script
ScriptFile=#SKINSPATH#CoreMeter\@Resources\Scripts\FixedPrecisionFormat.lua

; ## DISK C ##
[MeasureDiskLabelC]
Measure=FreeDiskSpace
Drive=#d01#
Label=1

[MeasureDiskSpaceTotalC]
Measure=FreeDiskSpace
Drive=#d01#
Total=1
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskSpaceTotalC], 3, '1k', 'textDiskSpaceTotalC')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskSpaceTotalC], 3, '1k', 'textDiskSpaceTotalC')"]

[MeasureDiskSpaceFreeC]
Measure=FreeDiskSpace
Drive=#d01#
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskSpaceFreeC], 5, '1k', 'textDiskSpaceFreeC')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskSpaceFreeC], 5, '1k', 'textDiskSpaceFreeC')"]

[MeasureDiskSpaceUsedC]
Measure=FreeDiskSpace
Drive=#d01#
InvertMeasure=1
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskSpaceUsedC], 5, '1k', 'textDiskSpaceUsedC')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskSpaceUsedC], 5, '1k', 'textDiskSpaceUsedC')"]

[MeasureDiskTypeC]
Measure=FreeDiskSpace
Drive=#d01#
Type=1

[CalcDiskExistsC]
Measure=Calc
Formula=(MeasureDiskSpaceTotalC > 0 && ((MeasureDiskTypeC = 3) || (MeasureDiskTypeC = 4))) ? 1 : 0
; set disk not found flag
IfCondition=(CalcDiskExistsC = 1)
IfTrueAction= [!SetVariable DiskNotFoundC 0][!SetOption MeasureDiskPercentFullC Disabled 0][!SetOption MeasureDiskIdleTimeC Disabled 0][!SetOption MeasureDiskTimeC Disabled 0][!SetOption MeasureDiskReadC Disabled 0][!SetOption MeasureDiskWriteC Disabled 0][!SetOption MeasureDiskReadWriteC Disabled 0]
IfFalseAction=[!SetVariable DiskNotFoundC 1][!SetOption MeasureDiskPercentFullC Disabled 1][!SetOption MeasureDiskIdleTimeC Disabled 1][!SetOption MeasureDiskTimeC Disabled 1][!SetOption MeasureDiskReadC Disabled 1][!SetOption MeasureDiskWriteC Disabled 1][!SetOption MeasureDiskReadWriteC Disabled 1]

[MeasureDiskPercentFullC]
Measure=Calc
Formula=MeasureDiskSpaceUsedC / MeasureDiskSpaceTotalC
IfCondition=(MeasureDiskPercentFullC > #diskThresholdWarn#) && (#hideCapacityWarnings# = 0)
IfTrueAction=[!SetOption DiskCStorageBar BarColor "#colorDiskThresholdWarn#"]
IfCondition2=(MeasureDiskPercentFullC > #diskThresholdFull#) && (#hideCapacityWarnings# = 0)
IfTrueAction2=[!SetOption DiskCStorageBar BarColor "#colorDiskThresholdFull#"]

[MeasureDiskIdleTimeC]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="% Idle Time"
PerfMonInstance="#d01#"

[MeasureDiskTimeC]
Measure=Calc
Formula=(100.0 - (MeasureDiskIdleTimeC / 100000))
MaxValue=100.0
MinValue=0.0

[MeasureDiskReadC]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Read Bytes/sec"
PerfMonInstance="#d01#"
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskReadC], 4, '1k', 'textDiskReadC')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskReadC], 4, '1k', 'textDiskReadC')"]

[MeasureDiskWriteC]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Write Bytes/sec"
PerfMonInstance="#d01#"
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskWriteC], 4, '1k', 'textDiskWriteC')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskWriteC], 4, '1k', 'textDiskWriteC')"]

[MeasureDiskReadWriteC]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Bytes/sec"
PerfMonInstance="#d01#"

; ## DISK D ##
[MeasureDiskLabelD]
Measure=FreeDiskSpace
Drive=#d02#
IgnoreRemovable=0
Label=1

[MeasureDiskSpaceTotalD]
Measure=FreeDiskSpace
Drive=#d02#
IgnoreRemovable=0
Total=1
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskSpaceTotalD], 3, '1k', 'textDiskSpaceTotalD')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskSpaceTotalD], 3, '1k', 'textDiskSpaceTotalD')"]

[MeasureDiskSpaceFreeD]
Measure=FreeDiskSpace
IgnoreRemovable=0
Drive=#d02#
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskSpaceFreeD], 5, '1k', 'textDiskSpaceFreeD')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskSpaceFreeD], 5, '1k', 'textDiskSpaceFreeD')"]

[MeasureDiskSpaceUsedD]
Measure=FreeDiskSpace
IgnoreRemovable=0
Drive=#d02#
InvertMeasure=1
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskSpaceUsedD], 5, '1k', 'textDiskSpaceUsedD')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskSpaceUsedD], 5, '1k', 'textDiskSpaceUsedD')"]

[MeasureDiskTypeD]
Measure=FreeDiskSpace
Drive=#d02#
IgnoreRemovable=0
Type=1

[CalcDiskExistsD]
Measure=Calc
Formula=(MeasureDiskSpaceTotalD > 0 && ((MeasureDiskTypeD = 3) || (MeasureDiskTypeD = 4)) && (#HideDiskD# = 0)) ? 1 : 0
; set disk not found flag
IfCondition=(CalcDiskExistsD = 1)
IfTrueAction= [!SetVariable diskNotFoundD 0][!SetOption MeasureDiskPercentFullD Disabled 0][!SetOption MeasureDiskIdleTimeD Disabled 0][!SetOption MeasureDiskTimeD Disabled 0][!SetOption MeasureDiskReadD Disabled 0][!SetOption MeasureDiskWriteD Disabled 0][!SetOption MeasureDiskReadWriteD Disabled 0]
IfFalseAction=[!SetVariable diskNotFoundD 1][!SetOption MeasureDiskPercentFullD Disabled 1][!SetOption MeasureDiskIdleTimeD Disabled 1][!SetOption MeasureDiskTimeD Disabled 1][!SetOption MeasureDiskReadD Disabled 1][!SetOption MeasureDiskWriteD Disabled 1][!SetOption MeasureDiskReadWriteD Disabled 1]

[MeasureDiskPercentFullD]
Measure=Calc
Formula=MeasureDiskSpaceUsedD / MeasureDiskSpaceTotalD
IfCondition=(MeasureDiskPercentFullD > #diskThresholdWarn#) && (#hideCapacityWarnings# = 0)
IfTrueAction=[!SetOption DriveStoragePercentD FontColor "#colorDiskThresholdWarn#"][!SetOption DriveStorageBarD BarColor "#colorDiskThresholdWarn#"]
IfCondition2=(MeasureDiskPercentFullD > #diskThresholdFull#) && (#hideCapacityWarnings# = 0)
IfTrueAction2=[!SetOption DriveStoragePercentD FontColor "#colorDiskThresholdFull#"][!SetOption DriveStorageBarD BarColor "#colorDiskThresholdFull#"]

[MeasureDiskIdleTimeD]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="% Idle Time"
PerfMonInstance="#d02#"

[MeasureDiskTimeD]
Measure=Calc
Formula=(100.0 - (MeasureDiskIdleTimeD / 100000))
MaxValue=100.0
MinValue=0.0

[MeasureDiskReadD]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Read Bytes/sec"
PerfMonInstance="#d02#"
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskReadD], 4, '1k', 'textDiskReadD')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskReadD], 4, '1k', 'textDiskReadD')"]

[MeasureDiskWriteD]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Write Bytes/sec"
PerfMonInstance="#d02#"
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskWriteD], 4, '1k', 'textDiskWriteD')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskWriteD], 4, '1k', 'textDiskWriteD')"]

[MeasureDiskReadWriteD]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Bytes/sec"
PerfMonInstance="#d02#"

; ## DISK E ##
[MeasureDiskLabelE]
Measure=FreeDiskSpace
Drive=#d03#
IgnoreRemovable=0
Label=1

[MeasureDiskSpaceTotalE]
Measure=FreeDiskSpace
Drive=#d03#
IgnoreRemovable=0
Total=1
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskSpaceTotalE], 3, '1k', 'textDiskSpaceTotalE')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskSpaceTotalE], 3, '1k', 'textDiskSpaceTotalE')"]

[MeasureDiskSpaceFreeE]
Measure=FreeDiskSpace
IgnoreRemovable=0
Drive=#d03#
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskSpaceFreeE], 5, '1k', 'textDiskSpaceFreeE')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskSpaceFreeE], 5, '1k', 'textDiskSpaceFreeE')"]

[MeasureDiskSpaceUsedE]
Measure=FreeDiskSpace
IgnoreRemovable=0
Drive=#d03#
InvertMeasure=1
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskSpaceUsedE], 5, '1k', 'textDiskSpaceUsedE')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskSpaceUsedE], 5, '1k', 'textDiskSpaceUsedE')"]

[MeasureDiskTypeE]
Measure=FreeDiskSpace
Drive=#d03#
IgnoreRemovable=0
Type=1

[CalcDiskExistsE]
Measure=Calc
Formula=(MeasureDiskSpaceTotalE > 0 && ((MeasureDiskTypeE = 3) || (MeasureDiskTypeE = 4)) && (#hideDiskE# = 0)) ? 1 : 0
; set disk not found flag
IfCondition=(CalcDiskExistsE = 1)
IfTrueAction= [!SetVariable diskNotFoundE 0][!SetOption MeasureDiskPercentFullE Disabled 0][!SetOption MeasureDiskIdleTimeE Disabled 0][!SetOption MeasureDiskTimeE Disabled 0][!SetOption MeasureDiskReadE Disabled 0][!SetOption MeasureDiskWriteE Disabled 0][!SetOption MeasureDiskReadWriteE Disabled 0]
IfFalseAction=[!SetVariable diskNotFoundE 1][!SetOption MeasureDiskPercentFullE Disabled 1][!SetOption MeasureDiskIdleTimeE Disabled 1][!SetOption MeasureDiskTimeE Disabled 1][!SetOption MeasureDiskReadE Disabled 1][!SetOption MeasureDiskWriteE Disabled 1][!SetOption MeasureDiskReadWriteE Disabled 1]

[MeasureDiskPercentFullE]
Measure=Calc
Formula=MeasureDiskSpaceUsedE / MeasureDiskSpaceTotalE
IfCondition=(MeasureDiskPercentFullE > #diskThresholdWarn#) && (#hideCapacityWarnings# = 0)
IfTrueAction=[!SetOption DriveStoragePercentE FontColor "#colorDiskThresholdWarn#"][!SetOption DriveStorageBarE BarColor "#colorDiskThresholdWarn#"]
IfCondition2=(MeasureDiskPercentFullE > #diskThresholdFull#) && (#hideCapacityWarnings# = 0)
IfTrueAction2=[!SetOption DriveStoragePercentE FontColor "#colorDiskThresholdFull#"][!SetOption DriveStorageBarE BarColor "#colorDiskThresholdFull#"]

[MeasureDiskIdleTimeE]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="% Idle Time"
PerfMonInstance="#d03#"

[MeasureDiskTimeE]
Measure=Calc
Formula=(100.0 - (MeasureDiskIdleTimeE / 100000))
MaxValue=100.0
MinValue=0.0

[MeasureDiskReadE]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Read Bytes/sec"
PerfMonInstance="#d03#"
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskReadE], 4, '1k', 'textDiskReadE')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskReadE], 4, '1k', 'textDiskReadE')"]

[MeasureDiskWriteE]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Write Bytes/sec"
PerfMonInstance="#d03#"
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskWriteE], 4, '1k', 'TextDiskWriteE')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskWriteE], 4, '1k', 'TextDiskWriteE')"]

[MeasureDiskReadWriteE]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Bytes/sec"
PerfMonInstance="#d03#"

; ## DISK F ##
[MeasureDiskLabelF]
Measure=FreeDiskSpace
Drive=#d04#
IgnoreRemovable=0
Label=1

[MeasureDiskSpaceTotalF]
Measure=FreeDiskSpace
Drive=#d04#
IgnoreRemovable=0
Total=1
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskSpaceTotalF], 3, '1k', 'textDiskSpaceTotalF')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskSpaceTotalF], 3, '1k', 'textDiskSpaceTotalF')"]

[MeasureDiskSpaceFreeF]
Measure=FreeDiskSpace
Drive=#d04#
IgnoreRemovable=0
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskSpaceFreeF], 5, '1k', 'textDiskSpaceFreeF')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskSpaceFreeF], 5, '1k', 'textDiskSpaceFreeF')"]

[MeasureDiskSpaceUsedF]
Measure=FreeDiskSpace
Drive=#d04#
IgnoreRemovable=0
InvertMeasure=1
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskSpaceUsedF], 5, '1k', 'textDiskSpaceUsedF')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskSpaceUsedF], 5, '1k', 'textDiskSpaceUsedF')"]

[MeasureDiskTypeF]
Measure=FreeDiskSpace
Drive=#d04#
IgnoreRemovable=0
Type=1

[CalcDiskExistsF]
Measure=Calc
Formula=(MeasureDiskSpaceTotalF > 0 && ((MeasureDiskTypeF = 3) || (MeasureDiskTypeF = 4)) && (#HideDiskF# = 0)) ? 1 : 0
; set disk not found flag
IfCondition=(CalcDiskExistsF = 1)
IfTrueAction= [!SetVariable DiskNotFoundF 0][!SetOption MeasureDiskPercentFullF Disabled 0][!SetOption MeasureDiskIdleTimeF Disabled 0][!SetOption MeasureDiskTimeF Disabled 0][!SetOption MeasureDiskReadF Disabled 0][!SetOption MeasureDiskWriteF Disabled 0][!SetOption MeasureDiskReadWriteF Disabled 0]
IfFalseAction=[!SetVariable DiskNotFoundF 1][!SetOption MeasureDiskPercentFullF Disabled 1][!SetOption MeasureDiskIdleTimeF Disabled 1][!SetOption MeasureDiskTimeF Disabled 1][!SetOption MeasureDiskReadF Disabled 1][!SetOption MeasureDiskWriteF Disabled 1][!SetOption MeasureDiskReadWriteF Disabled 1]

[MeasureDiskPercentFullF]
Measure=Calc
Formula=MeasureDiskSpaceUsedF / MeasureDiskSpaceTotalF
IfCondition=(MeasureDiskPercentFullF > #diskThresholdWarn#) && (#hideCapacityWarnings# = 0)
IfTrueAction=[!SetOption DriveStoragePercentF FontColor "#colorDiskThresholdWarn#"][!SetOption DriveStorageBarF BarColor "#colorDiskThresholdWarn#"]
IfCondition2=(MeasureDiskPercentFullF > #diskThresholdFull#) && (#hideCapacityWarnings# = 0)
IfTrueAction2=[!SetOption DriveStoragePercentF FontColor "#colorDiskThresholdFull#"][!SetOption DriveStorageBarF BarColor "#colorDiskThresholdFull#"]

[MeasureDiskIdleTimeF]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="% Idle Time"
PerfMonInstance="#d04#"

[MeasureDiskTimeF]
Measure=Calc
Formula=(100.0 - (MeasureDiskIdleTimeF / 100000))
MaxValue=100.0
MinValue=0.0

[MeasureDiskReadF]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Read Bytes/sec"
PerfMonInstance="#d04#"
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskReadF], 4, '1k', 'textDiskReadF')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskReadF], 4, '1k', 'textDiskReadF')"]

[MeasureDiskWriteF]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Write Bytes/sec"
PerfMonInstance="#d04#"
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskWriteF], 4, '1k', 'textDiskWriteF')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskWriteF], 4, '1k', 'textDiskWriteF')"]

[MeasureDiskReadWriteF]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Bytes/sec"
PerfMonInstance="#d04#"

; ## DISK G ##
[MeasureDiskLabelG]
Measure=FreeDiskSpace
Drive=#d05#
IgnoreRemovable=0
Label=1

[MeasureDiskSpaceTotalG]
Measure=FreeDiskSpace
Drive=#d05#
IgnoreRemovable=0
Total=1
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskSpaceTotalG], 3, '1k', 'textDiskSpaceTotalG')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskSpaceTotalG], 3, '1k', 'textDiskSpaceTotalG')"]

[MeasureDiskSpaceFreeG]
Measure=FreeDiskSpace
Drive=#d05#
IgnoreRemovable=0
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskSpaceFreeG], 5, '1k', 'textDiskSpaceFreeG')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskSpaceFreeG], 5, '1k', 'textDiskSpaceFreeG')"]

[MeasureDiskSpaceUsedG]
Measure=FreeDiskSpace
Drive=#d05#
IgnoreRemovable=0
InvertMeasure=1
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskSpaceUsedG], 5, '1k', 'textDiskSpaceUsedG')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskSpaceUsedG], 5, '1k', 'textDiskSpaceUsedG')"]

[MeasureDiskTypeG]
Measure=FreeDiskSpace
Drive=#d05#
IgnoreRemovable=0
Type=1

[CalcDiskExistsG]
Measure=Calc
Formula=(MeasureDiskSpaceTotalG > 0 && ((MeasureDiskTypeG = 3) || (MeasureDiskTypeG = 4)) && (#HideDiskG# = 0)) ? 1 : 0
; set disk not found flag
IfCondition=(CalcDiskExistsG = 1)
IfTrueAction= [!SetVariable DiskNotFoundG 0][!SetOption MeasureDiskPercentFullG Disabled 0][!SetOption MeasureDiskIdleTimeG Disabled 0][!SetOption MeasureDiskTimeG Disabled 0][!SetOption MeasureDiskReadG Disabled 0][!SetOption MeasureDiskWriteG Disabled 0][!SetOption MeasureDiskReadWriteG Disabled 0]
IfFalseAction=[!SetVariable DiskNotFoundG 1][!SetOption MeasureDiskPercentFullG Disabled 1][!SetOption MeasureDiskIdleTimeG Disabled 1][!SetOption MeasureDiskTimeG Disabled 1][!SetOption MeasureDiskReadG Disabled 1][!SetOption MeasureDiskWriteG Disabled 1][!SetOption MeasureDiskReadWriteG Disabled 1]

[MeasureDiskPercentFullG]
Measure=Calc
Formula=MeasureDiskSpaceUsedG / MeasureDiskSpaceTotalG
IfCondition=(MeasureDiskPercentFullG > #diskThresholdWarn#) && (#hideCapacityWarnings# = 0)
IfTrueAction=[!SetOption DriveStoragePercentG FontColor "#colorDiskThresholdWarn#"][!SetOption DriveStorageBarG BarColor "#colorDiskThresholdWarn#"]
IfCondition2=(MeasureDiskPercentFullG > #diskThresholdFull#) && (#hideCapacityWarnings# = 0)
IfTrueAction2=[!SetOption DriveStoragePercentG FontColor "#colorDiskThresholdFull#"][!SetOption DriveStorageBarG BarColor "#colorDiskThresholdFull#"]

[MeasureDiskIdleTimeG]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="% Idle Time"
PerfMonInstance="#d05#"

[MeasureDiskTimeG]
Measure=Calc
Formula=(100.0 - (MeasureDiskIdleTimeG / 100000))
MaxValue=100.0
MinValue=0.0

[MeasureDiskReadG]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Read Bytes/sec"
PerfMonInstance="#d05#"
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskReadG], 4, '1k', 'textDiskReadG')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskReadG], 4, '1k', 'textDiskReadG')"]

[MeasureDiskWriteG]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Write Bytes/sec"
PerfMonInstance="#d05#"
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskWriteG], 4, '1k', 'textDiskWriteG')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskWriteG], 4, '1k', 'textDiskWriteG')"]

[MeasureDiskReadWriteG]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Bytes/sec"
PerfMonInstance="#d05#"

; ## DISK H ##
[MeasureDiskLabelH]
Measure=FreeDiskSpace
Drive=#d06#
IgnoreRemovable=0
Label=1

[MeasureDiskSpaceTotalH]
Measure=FreeDiskSpace
Drive=#d06#
IgnoreRemovable=0
Total=1
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskSpaceTotalH], 3, '1k', 'textDiskSpaceTotalH')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskSpaceTotalH], 3, '1k', 'textDiskSpaceTotalH')"]

[MeasureDiskSpaceFreeH]
Measure=FreeDiskSpace
Drive=#d06#
IgnoreRemovable=0
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskSpaceFreeH], 5, '1k', 'textDiskSpaceFreeH')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskSpaceFreeH], 5, '1k', 'textDiskSpaceFreeH')"]

[MeasureDiskSpaceUsedH]
Measure=FreeDiskSpace
Drive=#d06#
IgnoreRemovable=0
InvertMeasure=1
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskSpaceUsedH], 5, '1k', 'textDiskSpaceUsedH')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskSpaceUsedH], 5, '1k', 'textDiskSpaceUsedH')"]

[MeasureDiskTypeH]
Measure=FreeDiskSpace
Drive=#d06#
IgnoreRemovable=0
Type=1

[CalcDiskExistsH]
Measure=Calc
Formula=(MeasureDiskSpaceTotalH > 0 && ((MeasureDiskTypeH = 3) || (MeasureDiskTypeH = 4)) && (#HideDiskH# = 0)) ? 1 : 0
; set disk not found flag
IfCondition=(CalcDiskExistsH = 1)
IfTrueAction= [!SetVariable DiskNotFoundH 0][!SetOption MeasureDiskPercentFullH Disabled 0][!SetOption MeasureDiskIdleTimeH Disabled 0][!SetOption MeasureDiskTimeH Disabled 0][!SetOption MeasureDiskReadH Disabled 0][!SetOption MeasureDiskWriteH Disabled 0][!SetOption MeasureDiskReadWriteH Disabled 0]
IfFalseAction=[!SetVariable DiskNotFoundH 1][!SetOption MeasureDiskPercentFullH Disabled 1][!SetOption MeasureDiskIdleTimeH Disabled 1][!SetOption MeasureDiskTimeH Disabled 1][!SetOption MeasureDiskReadH Disabled 1][!SetOption MeasureDiskWriteH Disabled 1][!SetOption MeasureDiskReadWriteH Disabled 1]

[MeasureDiskPercentFullH]
Measure=Calc
Formula=MeasureDiskSpaceUsedH / MeasureDiskSpaceTotalH
IfCondition=(MeasureDiskPercentFullH > #diskThresholdWarn#) && (#hideCapacityWarnings# = 0)
IfTrueAction=[!SetOption DriveStoragePercentH FontColor "#colorDiskThresholdWarn#"][!SetOption DriveStorageBarH BarColor "#colorDiskThresholdWarn#"]
IfCondition2=(MeasureDiskPercentFullH > #diskThresholdFull#) && (#hideCapacityWarnings# = 0)
IfTrueAction2=[!SetOption DriveStoragePercentH FontColor "#colorDiskThresholdFull#"][!SetOption DriveStorageBarH BarColor "#colorDiskThresholdFull#"]

[MeasureDiskIdleTimeH]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="% Idle Time"
PerfMonInstance="#d06#"

[MeasureDiskTimeH]
Measure=Calc
Formula=(100.0 - (MeasureDiskIdleTimeH / 100000))
MaxValue=100.0
MinValue=0.0

[MeasureDiskReadH]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Read Bytes/sec"
PerfMonInstance="#d06#"
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskReadH], 4, '1k', 'textDiskReadH')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskReadH], 4, '1k', 'textDiskReadH')"]

[MeasureDiskWriteH]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Write Bytes/sec"
PerfMonInstance="#d06#"
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskWriteH], 4, '1k', 'textDiskWriteH')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskWriteH], 4, '1k', 'textDiskWriteH')"]

[MeasureDiskReadWriteH]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Bytes/sec"
PerfMonInstance="#d06#"

; ## DISK I ##
[MeasureDiskLabelI]
Measure=FreeDiskSpace
Drive=#d07#
IgnoreRemovable=0
Label=1

[MeasureDiskSpaceTotalI]
Measure=FreeDiskSpace
Drive=#d07#
IgnoreRemovable=0
Total=1
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskSpaceTotalI], 3, '1k', 'textDiskSpaceTotalI')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskSpaceTotalI], 3, '1k', 'textDiskSpaceTotalI')"]

[MeasureDiskSpaceFreeI]
Measure=FreeDiskSpace
Drive=#d07#
IgnoreRemovable=0
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskSpaceFreeI], 5, '1k', 'textDiskSpaceFreeI')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskSpaceFreeI], 5, '1k', 'textDiskSpaceFreeI')"]

[MeasureDiskSpaceUsedI]
Measure=FreeDiskSpace
Drive=#d07#
IgnoreRemovable=0
InvertMeasure=1
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskSpaceUsedI], 5, '1k', 'textDiskSpaceUsedI')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskSpaceUsedI], 5, '1k', 'textDiskSpaceUsedI')"]

[MeasureDiskTypeI]
Measure=FreeDiskSpace
Drive=#d07#
IgnoreRemovable=0
Type=1

[CalcDiskExistsI]
Measure=Calc
Formula=(MeasureDiskSpaceTotalI > 0 && ((MeasureDiskTypeI = 3) || (MeasureDiskTypeI = 4)) && (#HideDiskI# = 0)) ? 1 : 0
; set disk not found flag
IfCondition=(CalcDiskExistsI = 1)
IfTrueAction= [!SetVariable DiskNotFoundI 0][!SetOption MeasureDiskPercentFullI Disabled 0][!SetOption MeasureDiskIdleTimeI Disabled 0][!SetOption MeasureDiskTimeI Disabled 0][!SetOption MeasureDiskReadI Disabled 0][!SetOption MeasureDiskWriteI Disabled 0][!SetOption MeasureDiskReadWriteI Disabled 0]
IfFalseAction=[!SetVariable DiskNotFoundI 1][!SetOption MeasureDiskPercentFullI Disabled 1][!SetOption MeasureDiskIdleTimeI Disabled 1][!SetOption MeasureDiskTimeI Disabled 1][!SetOption MeasureDiskReadI Disabled 1][!SetOption MeasureDiskWriteI Disabled 1][!SetOption MeasureDiskReadWriteI Disabled 1]

[MeasureDiskPercentFullI]
Measure=Calc
Formula=MeasureDiskSpaceUsedI / MeasureDiskSpaceTotalI
IfCondition=(MeasureDiskPercentFullI > #diskThresholdWarn#) && (#hideCapacityWarnings# = 0)
IfTrueAction=[!SetOption DriveStoragePercentI FontColor "#colorDiskThresholdWarn#"][!SetOption DriveStorageBarI BarColor "#colorDiskThresholdWarn#"]
IfCondition2=(MeasureDiskPercentFullI > #diskThresholdFull#) && (#hideCapacityWarnings# = 0)
IfTrueAction2=[!SetOption DriveStoragePercentI FontColor "#colorDiskThresholdFull#"][!SetOption DriveStorageBarI BarColor "#colorDiskThresholdFull#"]

[MeasureDiskIdleTimeI]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="% Idle Time"
PerfMonInstance="#d07#"

[MeasureDiskTimeI]
Measure=Calc
Formula=(100.0 - (MeasureDiskIdleTimeI / 100000))
MaxValue=100.0
MinValue=0.0

[MeasureDiskReadI]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Read Bytes/sec"
PerfMonInstance="#d07#"
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskReadI], 4, '1k', 'textDiskReadI')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskReadI], 4, '1k', 'textDiskReadI')"]

[MeasureDiskWriteI]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Write Bytes/sec"
PerfMonInstance="#d07#"
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskWriteI], 4, '1k', 'textDiskWriteI')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskWriteI], 4, '1k', 'textDiskWriteI')"]

[MeasureDiskReadWriteI]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Bytes/sec"
PerfMonInstance="#d07#"

; ## DISK J ##
[MeasureDiskLabelJ]
Measure=FreeDiskSpace
Drive=#d08#
IgnoreRemovable=0
Label=1

[MeasureDiskSpaceTotalJ]
Measure=FreeDiskSpace
Drive=#d08#
IgnoreRemovable=0
Total=1
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskSpaceTotalJ], 3, '1k', 'textDiskSpaceTotalJ')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskSpaceTotalJ], 3, '1k', 'textDiskSpaceTotalJ')"]

[MeasureDiskSpaceFreeJ]
Measure=FreeDiskSpace
Drive=#d08#
IgnoreRemovable=0
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskSpaceFreeJ], 5, '1k', 'textDiskSpaceFreeJ')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskSpaceFreeJ], 5, '1k', 'textDiskSpaceFreeJ')"]

[MeasureDiskSpaceUsedJ]
Measure=FreeDiskSpace
Drive=#d08#
IgnoreRemovable=0
InvertMeasure=1
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskSpaceUsedJ], 5, '1k', 'textDiskSpaceUsedJ')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskSpaceUsedJ], 5, '1k', 'textDiskSpaceUsedJ')"]

[MeasureDiskTypeJ]
Measure=FreeDiskSpace
Drive=#d08#
IgnoreRemovable=0
Type=1

[CalcDiskExistsJ]
Measure=Calc
Formula=(MeasureDiskSpaceTotalJ > 0 && ((MeasureDiskTypeJ = 3) || (MeasureDiskTypeJ = 4)) && (#HideDiskJ# = 0)) ? 1 : 0
; set disk not found flag
IfCondition=(CalcDiskExistsJ = 1)
IfTrueAction= [!SetVariable DiskNotFoundJ 0][!SetOption MeasureDiskPercentFullJ Disabled 0][!SetOption MeasureDiskIdleTimeJ Disabled 0][!SetOption MeasureDiskTimeJ Disabled 0][!SetOption MeasureDiskReadJ Disabled 0][!SetOption MeasureDiskWriteJ Disabled 0][!SetOption MeasureDiskReadWriteJ Disabled 0]
IfFalseAction=[!SetVariable DiskNotFoundJ 1][!SetOption MeasureDiskPercentFullJ Disabled 1][!SetOption MeasureDiskIdleTimeJ Disabled 1][!SetOption MeasureDiskTimeJ Disabled 1][!SetOption MeasureDiskReadJ Disabled 1][!SetOption MeasureDiskWriteJ Disabled 1][!SetOption MeasureDiskReadWriteJ Disabled 1]

[MeasureDiskPercentFullJ]
Measure=Calc
Formula=MeasureDiskSpaceUsedJ / MeasureDiskSpaceTotalJ
IfCondition=(MeasureDiskPercentFullJ > #diskThresholdWarn#) && (#hideCapacityWarnings# = 0)
IfTrueAction=[!SetOption DriveStoragePercentJ FontColor "#colorDiskThresholdWarn#"][!SetOption DriveStorageBarJ BarColor "#colorDiskThresholdWarn#"]
IfCondition2=(MeasureDiskPercentFullJ > #diskThresholdFull#) && (#hideCapacityWarnings# = 0)
IfTrueAction2=[!SetOption DriveStoragePercentJ FontColor "#colorDiskThresholdFull#"][!SetOption DriveStorageBarJ BarColor "#colorDiskThresholdFull#"]

[MeasureDiskIdleTimeJ]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="% Idle Time"
PerfMonInstance="#d08#"

[MeasureDiskTimeJ]
Measure=Calc
Formula=(100.0 - (MeasureDiskIdleTimeJ / 100000))
MaxValue=100.0
MinValue=0.0

[MeasureDiskReadJ]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Read Bytes/sec"
PerfMonInstance="#d08#"
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskReadJ], 4, '1k', 'textDiskReadJ')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskReadJ], 4, '1k', 'textDiskReadJ')"]

[MeasureDiskWriteJ]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Write Bytes/sec"
PerfMonInstance="#d08#"
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskWriteJ], 4, '1k', 'textDiskWriteJ')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskWriteJ], 4, '1k', 'textDiskWriteJ')"]

[MeasureDiskReadWriteJ]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Bytes/sec"
PerfMonInstance="#d08#"

; ## DISK K ##
[MeasureDiskLabelK]
Measure=FreeDiskSpace
Drive=#d09#
IgnoreRemovable=0
Label=1

[MeasureDiskSpaceTotalK]
Measure=FreeDiskSpace
Drive=#d09#
IgnoreRemovable=0
Total=1
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskSpaceTotalK], 3, '1k', 'textDiskSpaceTotalK')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskSpaceTotalK], 3, '1k', 'textDiskSpaceTotalK')"]

[MeasureDiskSpaceFreeK]
Measure=FreeDiskSpace
Drive=#d09#
IgnoreRemovable=0
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskSpaceFreeK], 5, '1k', 'textDiskSpaceFreeK')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskSpaceFreeK], 5, '1k', 'textDiskSpaceFreeK')"]

[MeasureDiskSpaceUsedK]
Measure=FreeDiskSpace
Drive=#d09#
IgnoreRemovable=0
InvertMeasure=1
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskSpaceUsedK], 5, '1k', 'textDiskSpaceUsedK')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskSpaceUsedK], 5, '1k', 'textDiskSpaceUsedK')"]

[MeasureDiskTypeK]
Measure=FreeDiskSpace
Drive=#d09#
IgnoreRemovable=0
Type=1

[CalcDiskExistsK]
Measure=Calc
Formula=(MeasureDiskSpaceTotalK > 0 && ((MeasureDiskTypeK = 3) || (MeasureDiskTypeK = 4)) && (#HideDiskK# = 0)) ? 1 : 0
; set disk not found flag
IfCondition=(CalcDiskExistsK = 1)
IfTrueAction= [!SetVariable DiskNotFoundK 0][!SetOption MeasureDiskPercentFullK Disabled 0][!SetOption MeasureDiskIdleTimeK Disabled 0][!SetOption MeasureDiskTimeK Disabled 0][!SetOption MeasureDiskReadK Disabled 0][!SetOption MeasureDiskWriteK Disabled 0][!SetOption MeasureDiskReadWriteK Disabled 0]
IfFalseAction=[!SetVariable DiskNotFoundK 1][!SetOption MeasureDiskPercentFullK Disabled 1][!SetOption MeasureDiskIdleTimeK Disabled 1][!SetOption MeasureDiskTimeK Disabled 1][!SetOption MeasureDiskReadK Disabled 1][!SetOption MeasureDiskWriteK Disabled 1][!SetOption MeasureDiskReadWriteK Disabled 1]

[MeasureDiskPercentFullK]
Measure=Calc
Formula=MeasureDiskSpaceUsedK / MeasureDiskSpaceTotalK
IfCondition=(MeasureDiskPercentFullK > #diskThresholdWarn#) && (#hideCapacityWarnings# = 0)
IfTrueAction=[!SetOption DriveStoragePercentK FontColor "#colorDiskThresholdWarn#"][!SetOption DriveStorageBarK BarColor "#colorDiskThresholdWarn#"]
IfCondition2=(MeasureDiskPercentFullK > #diskThresholdFull#) && (#hideCapacityWarnings# = 0)
IfTrueAction2=[!SetOption DriveStoragePercentK FontColor "#colorDiskThresholdFull#"][!SetOption DriveStorageBarK BarColor "#colorDiskThresholdFull#"]

[MeasureDiskIdleTimeK]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="% Idle Time"
PerfMonInstance="#d09#"

[MeasureDiskTimeK]
Measure=Calc
Formula=(100.0 - (MeasureDiskIdleTimeK / 100000))
MaxValue=100.0
MinValue=0.0

[MeasureDiskReadK]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Read Bytes/sec"
PerfMonInstance="#d09#"
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskReadK], 4, '1k', 'textDiskReadK')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskReadK], 4, '1k', 'textDiskReadK')"]

[MeasureDiskWriteK]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Write Bytes/sec"
PerfMonInstance="#d09#"
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskWriteK], 4, '1k', 'textDiskWriteK')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskWriteK], 4, '1k', 'textDiskWriteK')"]

[MeasureDiskReadWriteK]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Bytes/sec"
PerfMonInstance="#d09#"

; ## DISK L ##
[MeasureDiskLabelL]
Measure=FreeDiskSpace
Drive=#d10#
IgnoreRemovable=0
Label=1

[MeasureDiskSpaceTotalL]
Measure=FreeDiskSpace
Drive=#d10#
IgnoreRemovable=0
Total=1
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskSpaceTotalL], 3, '1k', 'textDiskSpaceTotalL')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskSpaceTotalL], 3, '1k', 'textDiskSpaceTotalL')"]

[MeasureDiskSpaceFreeL]
Measure=FreeDiskSpace
Drive=#d10#
IgnoreRemovable=0
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskSpaceFreeL], 5, '1k', 'textDiskSpaceFreeL')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskSpaceFreeL], 5, '1k', 'textDiskSpaceFreeL')"]

[MeasureDiskSpaceUsedL]
Measure=FreeDiskSpace
Drive=#d10#
IgnoreRemovable=0
InvertMeasure=1
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskSpaceUsedL], 5, '1k', 'textDiskSpaceUsedL')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskSpaceUsedL], 5, '1k', 'textDiskSpaceUsedL')"]

[MeasureDiskTypeL]
Measure=FreeDiskSpace
Drive=#d10#
IgnoreRemovable=0
Type=1

[CalcDiskExistsL]
Measure=Calc
Formula=(MeasureDiskSpaceTotalL > 0 && ((MeasureDiskTypeL = 3) || (MeasureDiskTypeL = 4)) && (#HideDiskL# = 0)) ? 1 : 0
; set disk not found flag
IfCondition=(CalcDiskExistsL = 1)
IfTrueAction= [!SetVariable DiskNotFoundL 0][!SetOption MeasureDiskPercentFullL Disabled 0][!SetOption MeasureDiskIdleTimeL Disabled 0][!SetOption MeasureDiskTimeL Disabled 0][!SetOption MeasureDiskReadL Disabled 0][!SetOption MeasureDiskWriteL Disabled 0][!SetOption MeasureDiskReadWriteL Disabled 0]
IfFalseAction=[!SetVariable DiskNotFoundL 1][!SetOption MeasureDiskPercentFullL Disabled 1][!SetOption MeasureDiskIdleTimeL Disabled 1][!SetOption MeasureDiskTimeL Disabled 1][!SetOption MeasureDiskReadL Disabled 1][!SetOption MeasureDiskWriteL Disabled 1][!SetOption MeasureDiskReadWriteL Disabled 1]

[MeasureDiskPercentFullL]
Measure=Calc
Formula=MeasureDiskSpaceUsedL / MeasureDiskSpaceTotalL
IfCondition=(MeasureDiskPercentFullL > #diskThresholdWarn#) && (#hideCapacityWarnings# = 0)
IfTrueAction=[!SetOption DriveStoragePercentL FontColor "#colorDiskThresholdWarn#"][!SetOption DriveStorageBarL BarColor "#colorDiskThresholdWarn#"]
IfCondition2=(MeasureDiskPercentFullL > #diskThresholdFull#) && (#hideCapacityWarnings# = 0)
IfTrueAction2=[!SetOption DriveStoragePercentL FontColor "#colorDiskThresholdFull#"][!SetOption DriveStorageBarL BarColor "#colorDiskThresholdFull#"]

[MeasureDiskIdleTimeL]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="% Idle Time"
PerfMonInstance="#d10#"

[MeasureDiskTimeL]
Measure=Calc
Formula=(100.0 - (MeasureDiskIdleTimeL / 100000))
MaxValue=100.0
MinValue=0.0

[MeasureDiskReadL]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Read Bytes/sec"
PerfMonInstance="#d10#"
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskReadL], 4, '1k', 'textDiskReadL')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskReadL], 4, '1k', 'textDiskReadL')"]

[MeasureDiskWriteL]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Write Bytes/sec"
PerfMonInstance="#d10#"
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskWriteL], 4, '1k', 'textDiskWriteL')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskWriteL], 4, '1k', 'textDiskWriteL')"]

[MeasureDiskReadWriteL]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Bytes/sec"
PerfMonInstance="#d10#"

; ## DISK (TOTAL) ##
[MeasureDiskIdleTimeAll]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="% Idle Time"
PerfMonInstance="_Total"

[MeasureDiskTimeAll]
Measure=Calc
Formula=(100.0 - (MeasureDiskIdleTimeAll / 100000))
MaxValue=100.0
MinValue=0.0

[MeasureDiskReadAll]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Read Bytes/sec"
PerfMonInstance="_Total"

[MeasureDiskWriteAll]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Write Bytes/sec"
PerfMonInstance="_Total"

[CalcDiskCount]
Measure=Calc
Formula=(CalcDiskExistsC + CalcDiskExistsD + CalcDiskExistsE + CalcDiskExistsF + CalcDiskExistsG + CalcDiskExistsH + CalcDiskExistsI + CalcDiskExistsJ + CalcDiskExistsK + CalcDiskExistsL)

; ## CALC DRIVE NUMBERS / ASSIGN DISK COLORS ##
[CalcDiskNumberC]
Measure=Calc
Formula=0
IfCondition=(CalcDiskNumberC = 0) && (CalcDiskExistsC = 1)
IfTrueAction=[!SetVariable colorDiskC #colorDisk1#][!SetVariable colorDiskCRgb #colorDisk1Rgb#][!SetVariable colorDiskCA #colorDisk1A#]
DynamicVariables=1

[CalcDiskNumberD]
Measure=Calc
Formula=(CalcDiskNumberC + CalcDiskExistsD)
IfCondition=(CalcDiskNumberD = 0) && (CalcDiskExistsD = 1)
IfTrueAction=[!SetVariable colorDiskD #colorDisk1#][!SetVariable colorDiskDRgb #colorDisk1Rgb#][!SetVariable colorDiskDA #colorDisk1A#]
IfCondition2=(CalcDiskNumberD = 1) && (CalcDiskExistsD = 1)
IfTrueAction2=[!SetVariable colorDiskD #colorDisk2#][!SetVariable colorDiskDRgb #colorDisk2Rgb#][!SetVariable colorDiskDA #colorDisk2A#]
DynamicVariables=1

[CalcDiskNumberE]
Measure=Calc
Formula=(CalcDiskNumberC + CalcDiskExistsD + CalcDiskExistsE)
IfCondition=(CalcDiskNumberE = 0) && (CalcDiskExistsE = 1)
IfTrueAction=[!SetVariable colorDiskE #colorDisk1#][!SetVariable colorDiskERgb #colorDisk1Rgb#][!SetVariable colorDiskEA #colorDisk1A#]
IfCondition2=(CalcDiskNumberE = 1) && (CalcDiskExistsE = 1)
IfTrueAction2=[!SetVariable colorDiskE #colorDisk2#][!SetVariable colorDiskERgb #colorDisk2Rgb#][!SetVariable colorDiskEA #colorDisk2A#]
IfCondition3=(CalcDiskNumberE = 2) && (CalcDiskExistsE = 1)
IfTrueAction3=[!SetVariable colorDiskE #colorDisk3#][!SetVariable colorDiskERgb #colorDisk3Rgb#][!SetVariable colorDiskEA #colorDisk3A#]
DynamicVariables=1

[CalcDiskNumberF]
Measure=Calc
Formula=(CalcDiskNumberC + CalcDiskExistsD + CalcDiskExistsE + CalcDiskExistsF)
IfCondition=(CalcDiskNumberF = 0) && (CalcDiskExistsF = 1)
IfTrueAction=[!SetVariable colorDiskF #colorDisk1#][!SetVariable colorDiskFRgb #colorDisk1Rgb#][!SetVariable colorDiskFA #colorDisk1A#]
IfCondition2=(CalcDiskNumberF = 1) && (CalcDiskExistsF = 1)
IfTrueAction2=[!SetVariable colorDiskF #colorDisk2#][!SetVariable colorDiskFRgb #colorDisk2Rgb#][!SetVariable colorDiskFA #colorDisk2A#]
IfCondition3=(CalcDiskNumberF = 2) && (CalcDiskExistsF = 1)
IfTrueAction3=[!SetVariable colorDiskF #colorDisk3#][!SetVariable colorDiskFRgb #colorDisk3Rgb#][!SetVariable colorDiskFA #colorDisk3A#]
IfCondition4=(CalcDiskNumberF = 3) && (CalcDiskExistsF = 1)
IfTrueAction4=[!SetVariable colorDiskF #colorDisk4#][!SetVariable colorDiskFRgb #colorDisk4Rgb#][!SetVariable colorDiskFA #colorDisk4A#]
DynamicVariables=1

[CalcDiskNumberG]
Measure=Calc
Formula=(CalcDiskNumberC + CalcDiskExistsD + CalcDiskExistsE + CalcDiskExistsF + CalcDiskExistsG)
IfCondition=(CalcDiskNumberG = 0) && (CalcDiskExistsG = 1)
IfTrueAction=[!SetVariable colorDiskG #colorDisk1#][!SetVariable colorDiskGRgb #colorDisk1Rgb#][!SetVariable colorDiskGA #colorDisk1A#]
IfCondition2=(CalcDiskNumberG = 1) && (CalcDiskExistsG = 1)
IfTrueAction2=[!SetVariable colorDiskG #colorDisk2#][!SetVariable colorDiskGRgb #colorDisk2Rgb#][!SetVariable colorDiskGA #colorDisk2A#]
IfCondition3=(CalcDiskNumberG = 2) && (CalcDiskExistsG = 1)
IfTrueAction3=[!SetVariable colorDiskG #colorDisk3#][!SetVariable colorDiskGRgb #colorDisk3Rgb#][!SetVariable colorDiskGA #colorDisk3A#]
IfCondition4=(CalcDiskNumberG = 3) && (CalcDiskExistsG = 1)
IfTrueAction4=[!SetVariable colorDiskG #colorDisk4#][!SetVariable colorDiskGRgb #colorDisk4Rgb#][!SetVariable colorDiskGA #colorDisk4A#]
IfCondition5=(CalcDiskNumberG = 4) && (CalcDiskExistsG = 1)
IfTrueAction5=[!SetVariable colorDiskG #colorDisk5#][!SetVariable colorDiskGRgb #colorDisk5Rgb#][!SetVariable colorDiskGA #colorDisk5A#]
DynamicVariables=1

[CalcDiskNumberH]
Measure=Calc
Formula=(CalcDiskNumberC + CalcDiskExistsD + CalcDiskExistsE + CalcDiskExistsF + CalcDiskExistsG + CalcDiskExistsH)
IfCondition=(CalcDiskNumberH = 0) && (CalcDiskExistsH = 1)
IfTrueAction=[!SetVariable colorDiskH #colorDisk1#][!SetVariable colorDiskHRgb #colorDisk1Rgb#][!SetVariable colorDiskHA #colorDisk1A#]
IfCondition2=(CalcDiskNumberH = 1) && (CalcDiskExistsH = 1)
IfTrueAction2=[!SetVariable colorDiskH #colorDisk2#][!SetVariable colorDiskHRgb #colorDisk2Rgb#][!SetVariable colorDiskHA #colorDisk2A#]
IfCondition3=(CalcDiskNumberH = 2) && (CalcDiskExistsH = 1)
IfTrueAction3=[!SetVariable colorDiskH #colorDisk3#][!SetVariable colorDiskHRgb #colorDisk3Rgb#][!SetVariable colorDiskHA #colorDisk3A#]
IfCondition4=(CalcDiskNumberH = 3) && (CalcDiskExistsH = 1)
IfTrueAction4=[!SetVariable colorDiskH #colorDisk4#][!SetVariable colorDiskHRgb #colorDisk4Rgb#][!SetVariable colorDiskHA #colorDisk4A#]
IfCondition5=(CalcDiskNumberH = 4) && (CalcDiskExistsH = 1)
IfTrueAction5=[!SetVariable colorDiskH #colorDisk5#][!SetVariable colorDiskHRgb #colorDisk5Rgb#][!SetVariable colorDiskHA #colorDisk5A#]
IfCondition6=(CalcDiskNumberH = 5) && (CalcDiskExistsH = 1)
IfTrueAction6=[!SetVariable colorDiskH #colorDisk6#][!SetVariable colorDiskHRgb #colorDisk6Rgb#][!SetVariable colorDiskHA #colorDisk6A#]
DynamicVariables=1

[CalcDiskNumberI]
Measure=Calc
Formula=(CalcDiskNumberC + CalcDiskExistsD + CalcDiskExistsE + CalcDiskExistsF + CalcDiskExistsG + CalcDiskExistsH + CalcDiskExistsI)
IfCondition=(CalcDiskNumberI = 0) && (CalcDiskExistsI = 1)
IfTrueAction=[!SetVariable colorDiskI #colorDisk1#][!SetVariable colorDiskIRgb #colorDisk1Rgb#][!SetVariable colorDiskIA #colorDisk1A#]
IfCondition2=(CalcDiskNumberI = 1) && (CalcDiskExistsI = 1)
IfTrueAction2=[!SetVariable colorDiskI #colorDisk2#][!SetVariable colorDiskIRgb #colorDisk2Rgb#][!SetVariable colorDiskIA #colorDisk2A#]
IfCondition3=(CalcDiskNumberI = 2) && (CalcDiskExistsI = 1)
IfTrueAction3=[!SetVariable colorDiskI #colorDisk3#][!SetVariable colorDiskIRgb #colorDisk3Rgb#][!SetVariable colorDiskIA #colorDisk3A#]
IfCondition4=(CalcDiskNumberI = 3) && (CalcDiskExistsI = 1)
IfTrueAction4=[!SetVariable colorDiskI #colorDisk4#][!SetVariable colorDiskIRgb #colorDisk4Rgb#][!SetVariable colorDiskIA #colorDisk4A#]
IfCondition5=(CalcDiskNumberI = 4) && (CalcDiskExistsI = 1)
IfTrueAction5=[!SetVariable colorDiskI #colorDisk5#][!SetVariable colorDiskIRgb #colorDisk5Rgb#][!SetVariable colorDiskIA #colorDisk5A#]
IfCondition6=(CalcDiskNumberI = 5) && (CalcDiskExistsI = 1)
IfTrueAction6=[!SetVariable colorDiskI #colorDisk6#][!SetVariable colorDiskIRgb #colorDisk6Rgb#][!SetVariable colorDiskIA #colorDisk6A#]
IfCondition7=(CalcDiskNumberI = 6) && (CalcDiskExistsI = 1)
IfTrueAction7=[!SetVariable colorDiskI #colorDisk7#][!SetVariable colorDiskIRgb #colorDisk7Rgb#][!SetVariable colorDiskIA #colorDisk7A#]
DynamicVariables=1

[CalcDiskNumberJ]
Measure=Calc
Formula=(CalcDiskNumberC + CalcDiskExistsD + CalcDiskExistsE + CalcDiskExistsF + CalcDiskExistsG + CalcDiskExistsH + CalcDiskExistsI + CalcDiskExistsJ)
IfCondition=(CalcDiskNumberJ = 0) && (CalcDiskExistsJ = 1)
IfTrueAction=[!SetVariable colorDiskJ #colorDisk1#][!SetVariable colorDiskJRgb #colorDisk1Rgb#][!SetVariable colorDiskJA #colorDisk1A#]
IfCondition2=(CalcDiskNumberJ = 1) && (CalcDiskExistsJ = 1)
IfTrueAction2=[!SetVariable colorDiskJ #colorDisk2#][!SetVariable colorDiskJRgb #colorDisk2Rgb#][!SetVariable colorDiskJA #colorDisk2A#]
IfCondition3=(CalcDiskNumberJ = 2) && (CalcDiskExistsJ = 1)
IfTrueAction3=[!SetVariable colorDiskJ #colorDisk3#][!SetVariable colorDiskJRgb #colorDisk3Rgb#][!SetVariable colorDiskJA #colorDisk3A#]
IfCondition4=(CalcDiskNumberJ = 3) && (CalcDiskExistsJ = 1)
IfTrueAction4=[!SetVariable colorDiskJ #colorDisk4#][!SetVariable colorDiskJRgb #colorDisk4Rgb#][!SetVariable colorDiskJA #colorDisk4A#]
IfCondition5=(CalcDiskNumberJ = 4) && (CalcDiskExistsJ = 1)
IfTrueAction5=[!SetVariable colorDiskJ #colorDisk5#][!SetVariable colorDiskJRgb #colorDisk5Rgb#][!SetVariable colorDiskJA #colorDisk5A#]
IfCondition6=(CalcDiskNumberJ = 5) && (CalcDiskExistsJ = 1)
IfTrueAction6=[!SetVariable colorDiskJ #colorDisk6#][!SetVariable colorDiskJRgb #colorDisk6Rgb#][!SetVariable colorDiskJA #colorDisk6A#]
IfCondition7=(CalcDiskNumberJ = 6) && (CalcDiskExistsJ = 1)
IfTrueAction7=[!SetVariable colorDiskJ #colorDisk7#][!SetVariable colorDiskJRgb #colorDisk7Rgb#][!SetVariable colorDiskJA #colorDisk7A#]
IfCondition8=(CalcDiskNumberJ = 7) && (CalcDiskExistsJ = 1)
IfTrueAction8=[!SetVariable colorDiskJ #colorDisk8#][!SetVariable colorDiskJRgb #colorDisk8Rgb#][!SetVariable colorDiskJA #colorDisk8A#]
DynamicVariables=1

[CalcDiskNumberK]
Measure=Calc
Formula=(CalcDiskNumberC + CalcDiskExistsD + CalcDiskExistsE + CalcDiskExistsF + CalcDiskExistsG + CalcDiskExistsH + CalcDiskExistsI + CalcDiskExistsJ + CalcDiskExistsK)
IfCondition=(CalcDiskNumberK = 0) && (CalcDiskExistsK = 1)
IfTrueAction=[!SetVariable colorDiskK #colorDisk1#][!SetVariable colorDiskKRgb #colorDisk1Rgb#][!SetVariable colorDiskKA #colorDisk1A#]
IfCondition2=(CalcDiskNumberK = 1) && (CalcDiskExistsK = 1)
IfTrueAction2=[!SetVariable colorDiskK #colorDisk2#][!SetVariable colorDiskKRgb #colorDisk2Rgb#][!SetVariable colorDiskKA #colorDisk2A#]
IfCondition3=(CalcDiskNumberK = 2) && (CalcDiskExistsK = 1)
IfTrueAction3=[!SetVariable colorDiskK #colorDisk3#][!SetVariable colorDiskKRgb #colorDisk3Rgb#][!SetVariable colorDiskKA #colorDisk3A#]
IfCondition4=(CalcDiskNumberK = 3) && (CalcDiskExistsK = 1)
IfTrueAction4=[!SetVariable colorDiskK #colorDisk4#][!SetVariable colorDiskKRgb #colorDisk4Rgb#][!SetVariable colorDiskKA #colorDisk4A#]
IfCondition5=(CalcDiskNumberK = 4) && (CalcDiskExistsK = 1)
IfTrueAction5=[!SetVariable colorDiskK #colorDisk5#][!SetVariable colorDiskKRgb #colorDisk5Rgb#][!SetVariable colorDiskKA #colorDisk5A#]
IfCondition6=(CalcDiskNumberK = 5) && (CalcDiskExistsK = 1)
IfTrueAction6=[!SetVariable colorDiskK #colorDisk6#][!SetVariable colorDiskKRgb #colorDisk6Rgb#][!SetVariable colorDiskKA #colorDisk6A#]
IfCondition7=(CalcDiskNumberK = 6) && (CalcDiskExistsK = 1)
IfTrueAction7=[!SetVariable colorDiskK #colorDisk7#][!SetVariable colorDiskKRgb #colorDisk7Rgb#][!SetVariable colorDiskKA #colorDisk7A#]
IfCondition8=(CalcDiskNumberK = 7) && (CalcDiskExistsK = 1)
IfTrueAction8=[!SetVariable colorDiskK #colorDisk8#][!SetVariable colorDiskKRgb #colorDisk8Rgb#][!SetVariable colorDiskKA #colorDisk8A#]
IfCondition9=(CalcDiskNumberK = 8) && (CalcDiskExistsK = 1)
IfTrueAction9=[!SetVariable colorDiskK #colorDisk9#][!SetVariable colorDiskKRgb #colorDisk9Rgb#][!SetVariable colorDiskKA #colorDisk9A#]
DynamicVariables=1

[CalcDiskNumberL]
Measure=Calc
Formula=(CalcDiskNumberC + CalcDiskExistsD + CalcDiskExistsE + CalcDiskExistsF + CalcDiskExistsG + CalcDiskExistsH + CalcDiskExistsI + CalcDiskExistsJ + CalcDiskExistsK + CalcDiskExistsL)
IfCondition=(CalcDiskNumberL = 0) && (CalcDiskExistsL = 1)
IfTrueAction=[!SetVariable colorDiskL #colorDisk1#][!SetVariable colorDiskLRgb #colorDisk1Rgb#][!SetVariable colorDiskLA #colorDisk1A#]
IfCondition2=(CalcDiskNumberL = 1) && (CalcDiskExistsL = 1)
IfTrueAction2=[!SetVariable colorDiskL #colorDisk2#][!SetVariable colorDiskLRgb #colorDisk2Rgb#][!SetVariable colorDiskLA #colorDisk2A#]
IfCondition3=(CalcDiskNumberL = 2) && (CalcDiskExistsL = 1)
IfTrueAction3=[!SetVariable colorDiskL #colorDisk3#][!SetVariable colorDiskLRgb #colorDisk3Rgb#][!SetVariable colorDiskLA #colorDisk3A#]
IfCondition4=(CalcDiskNumberL = 3) && (CalcDiskExistsL = 1)
IfTrueAction4=[!SetVariable colorDiskL #colorDisk4#][!SetVariable colorDiskLRgb #colorDisk4Rgb#][!SetVariable colorDiskLA #colorDisk4A#]
IfCondition5=(CalcDiskNumberL = 4) && (CalcDiskExistsL = 1)
IfTrueAction5=[!SetVariable colorDiskL #colorDisk5#][!SetVariable colorDiskLRgb #colorDisk5Rgb#][!SetVariable colorDiskLA #colorDisk5A#]
IfCondition6=(CalcDiskNumberL = 5) && (CalcDiskExistsL = 1)
IfTrueAction6=[!SetVariable colorDiskL #colorDisk6#][!SetVariable colorDiskLRgb #colorDisk6Rgb#][!SetVariable colorDiskLA #colorDisk6A#]
IfCondition7=(CalcDiskNumberL = 6) && (CalcDiskExistsL = 1)
IfTrueAction7=[!SetVariable colorDiskL #colorDisk7#][!SetVariable colorDiskLRgb #colorDisk7Rgb#][!SetVariable colorDiskLA #colorDisk7A#]
IfCondition8=(CalcDiskNumberL = 7) && (CalcDiskExistsL = 1)
IfTrueAction8=[!SetVariable colorDiskL #colorDisk8#][!SetVariable colorDiskLRgb #colorDisk8Rgb#][!SetVariable colorDiskLA #colorDisk8A#]
IfCondition9=(CalcDiskNumberL = 8) && (CalcDiskExistsL = 1)
IfTrueAction9=[!SetVariable colorDiskL #colorDisk9#][!SetVariable colorDiskLRgb #colorDisk9Rgb#][!SetVariable colorDiskLA #colorDisk9A#]
IfCondition10=(CalcDiskNumberL = 9) && (CalcDiskExistsL = 1)
IfTrueAction10=[!SetVariable colorDiskL #colorDisk10#][!SetVariable colorDiskLRgb #colorDisk10Rgb#][!SetVariable colorDiskLA #colorDisk10A#]
DynamicVariables=1
