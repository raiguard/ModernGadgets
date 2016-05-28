[MeasureFixedPrecisionFormatScript]
Measure=Script
ScriptFile=#@#Scripts\FixedPrecisionFormat.lua

; ----- Disks -----

; Disk C
[MeasureDiskCLabel]
Measure=FreeDiskSpace
Drive=#d01#
Label=1

[MeasureDiskCSpaceTotal]
Measure=FreeDiskSpace
Drive=#d01#
Total=1
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskCSpaceTotal], 3, '1k', 'textDiskCSpaceTotal')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskCSpaceTotal], 3, '1k', 'textDiskCSpaceTotal')"]

[MeasureDiskCSpaceFree]
Measure=FreeDiskSpace
Drive=#d01#
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskCSpaceFree], 5, '1k', 'textDiskCSpaceFree')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskCSpaceFree], 5, '1k', 'textDiskCSpaceFree')"]

[MeasureDiskCSpaceUsed]
Measure=FreeDiskSpace
Drive=#d01#
InvertMeasure=1
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskCSpaceUsed], 5, '1k', 'textDiskCSpaceUsed')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskCSpaceUsed], 5, '1k', 'textDiskCSpaceUsed')"]

[MeasureDiskCType]
Measure=FreeDiskSpace
Drive=#d01#
Type=1
IfCondition=(#showDiskTemps# = 0)
IfTrueAction=[!HideMeter DiskCTempString][!SetOption DiskCLabelString W "110"]

[CalcDiskCExists]
Measure=Calc
Formula=(MeasureDiskCSpaceTotal > 0 && ((MeasureDiskCType = 3) || (MeasureDiskCType = 4))) ? 1 : 0
; set disk not found flag
IfCondition=(CalcDiskCExists = 1)
IfTrueAction= [!SetVariable DiskCNotFound 0][!SetOption MeasureDiskCPercentFull Disabled 0][!SetOption MeasureDiskCIdleTime Disabled 0][!SetOption MeasureDiskCTime Disabled 0][!SetOption MeasureDiskCRead Disabled 0][!SetOption MeasureDiskCWrite Disabled 0][!SetOption MeasureDiskCReadWrite Disabled 0]
IfFalseAction=[!SetVariable DiskCNotFound 1][!SetOption MeasureDiskCPercentFull Disabled 1][!SetOption MeasureDiskCIdleTime Disabled 1][!SetOption MeasureDiskCTime Disabled 1][!SetOption MeasureDiskCRead Disabled 1][!SetOption MeasureDiskCWrite Disabled 1][!SetOption MeasureDiskCReadWrite Disabled 1]

[MeasureDiskCPercentFull]
Measure=Calc
Formula=MeasureDiskCSpaceUsed / MeasureDiskCSpaceTotal
IfCondition=(MeasureDiskCPercentFull > #diskThresholdWarn#) && (#showCapacityWarnings# = 1)
IfTrueAction=[!SetOption DiskCStorageBar BarColor "#colorDiskThresholdWarn#"]
IfCondition2=(MeasureDiskCPercentFull > #diskThresholdFull#) && (#showCapacityWarnings# = 1)
IfTrueAction2=[!SetOption DiskCStorageBar BarColor "#colorDiskThresholdFull#"]

[MeasureDiskCIdleTime]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="% Idle Time"
PerfMonInstance="#d01#"

[MeasureDiskCTime]
Measure=Calc
Formula=(100.0 - (MeasureDiskCIdleTime / 100000))
MaxValue=100.0
MinValue=0.0

[MeasureDiskCRead]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Read Bytes/sec"
PerfMonInstance="#d01#"
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskCRead], 4, '1k', 'textDiskCRead')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskCRead], 4, '1k', 'textDiskCRead')"]

[MeasureDiskCWrite]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Write Bytes/sec"
PerfMonInstance="#d01#"
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskCWrite], 4, '1k', 'textDiskCWrite')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskCWrite], 4, '1k', 'textDiskCWrite')"]

[MeasureDiskCReadWrite]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Bytes/sec"
PerfMonInstance="#d01#"

[MeasureDiskCTemp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-SMART-DiskC-SensorId#
HWiNFOSensorInstance=#HWiNFO-SMART-DiskC-SensorInstance#
HWiNFOEntryId=#HWiNFO-SMART-DiskC-Temp#
HWiNFOType=CurrentValue

; Disk D
[MeasureDiskDLabel]
Measure=FreeDiskSpace
Drive=#d02#
IgnoreRemovable=0
Label=1

[MeasureDiskDSpaceTotal]
Measure=FreeDiskSpace
Drive=#d02#
IgnoreRemovable=0
Total=1
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskDSpaceTotal], 3, '1k', 'textDiskDSpaceTotal')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskDSpaceTotal], 3, '1k', 'textDiskDSpaceTotal')"]

[MeasureDiskDSpaceFree]
Measure=FreeDiskSpace
Drive=#d02#
IgnoreRemovable=0
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskDSpaceFree], 5, '1k', 'textDiskDSpaceFree')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskDSpaceFree], 5, '1k', 'textDiskDSpaceFree')"]

[MeasureDiskDSpaceUsed]
Measure=FreeDiskSpace
Drive=#d02#
IgnoreRemovable=0
InvertMeasure=1
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskDSpaceUsed], 5, '1k', 'textDiskDSpaceUsed')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskDSpaceUsed], 5, '1k', 'textDiskDSpaceUsed')"]

[MeasureDiskDType]
Measure=FreeDiskSpace
Drive=#d02#
IgnoreRemovable=0
Type=1
IfCondition=((MeasureDiskDType = 3) || (#showDiskTemps# = 0))
IfTrueAction=[!HideMeter DiskDTempString][!SetOption DiskDLabelString W "110"]

[CalcDiskDExists]
Measure=Calc
Formula=(MeasureDiskDSpaceTotal > 0 && ((MeasureDiskDType = 3) || (MeasureDiskDType = 4)) && (#hideDiskD# = 0)) ? 1 : 0
; set disk not found flag
IfCondition=((CalcDiskDExists = 1) && (#hideDiskD# = 0))
IfTrueAction= [!SetVariable DiskDNotFound 0][!SetOption MeasureDiskDPercentFull Disabled 0][!SetOption MeasureDiskDIdleTime Disabled 0][!SetOption MeasureDiskDTime Disabled 0][!SetOption MeasureDiskDRead Disabled 0][!SetOption MeasureDiskDWrite Disabled 0][!SetOption MeasureDiskDReadWrite Disabled 0][!SetOption DiskDLabelString Y ""][!SetOption DiskDStorageBar Y ""]
IfFalseAction=[!SetVariable DiskDNotFound 1][!SetOption MeasureDiskDPercentFull Disabled 1][!SetOption MeasureDiskDIdleTime Disabled 1][!SetOption MeasureDiskDTime Disabled 1][!SetOption MeasureDiskDRead Disabled 1][!SetOption MeasureDiskDWrite Disabled 1][!SetOption MeasureDiskDReadWrite Disabled 1][!SetOption DiskDLabelString Y "[*DiskCLabelString:Y*]"][!SetOption DiskDStorageBar Y "[*DiskCStorageBar:Y*]"]

[MeasureDiskDPercentFull]
Measure=Calc
Formula=MeasureDiskDSpaceUsed / MeasureDiskDSpaceTotal
IfCondition=(MeasureDiskDPercentFull > #diskThresholdWarn#) && (#showCapacityWarnings# = 1)
IfTrueAction=[!SetOption DiskDStorageBar BarColor "#colorDiskThresholdWarn#"]
IfCondition2=(MeasureDiskDPercentFull > #diskThresholdFull#) && (#showCapacityWarnings# = 1)
IfTrueAction2=[!SetOption DiskDStorageBar BarColor "#colorDiskThresholdFull#"]

[MeasureDiskDIdleTime]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="% Idle Time"
PerfMonInstance="#d02#"

[MeasureDiskDTime]
Measure=Calc
Formula=(100.0 - (MeasureDiskDIdleTime / 100000))
MaxValue=100.0
MinValue=0.0

[MeasureDiskDRead]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Read Bytes/sec"
PerfMonInstance="#d02#"
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskDRead], 4, '1k', 'textDiskDRead')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskDRead], 4, '1k', 'textDiskDRead')"]

[MeasureDiskDWrite]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Write Bytes/sec"
PerfMonInstance="#d02#"
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskDWrite], 4, '1k', 'textDiskDWrite')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskDWrite], 4, '1k', 'textDiskDWrite')"]

[MeasureDiskDReadWrite]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Bytes/sec"
PerfMonInstance="#d02#"

[MeasureDiskDTemp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-SMART-DiskD-SensorId#
HWiNFOSensorInstance=#HWiNFO-SMART-DiskD-SensorInstance#
HWiNFOEntryId=#HWiNFO-SMART-DiskD-Temp#
HWiNFOType=CurrentValue

; Disk E
[MeasureDiskELabel]
Measure=FreeDiskSpace
Drive=#d03#
IgnoreRemovable=0
Label=1

[MeasureDiskESpaceTotal]
Measure=FreeDiskSpace
Drive=#d03#
IgnoreRemovable=0
Total=1
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskESpaceTotal], 3, '1k', 'textDiskESpaceTotal')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskESpaceTotal], 3, '1k', 'textDiskESpaceTotal')"]

[MeasureDiskESpaceFree]
Measure=FreeDiskSpace
Drive=#d03#
IgnoreRemovable=0
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskESpaceFree], 5, '1k', 'textDiskESpaceFree')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskESpaceFree], 5, '1k', 'textDiskESpaceFree')"]

[MeasureDiskESpaceUsed]
Measure=FreeDiskSpace
Drive=#d03#
IgnoreRemovable=0
InvertMeasure=1
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskESpaceUsed], 5, '1k', 'textDiskESpaceUsed')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskESpaceUsed], 5, '1k', 'textDiskESpaceUsed')"]

[MeasureDiskEType]
Measure=FreeDiskSpace
Drive=#d03#
IgnoreRemovable=0
Type=1
IfCondition=((MeasureDiskEType = 3) || (#showDiskTemps# = 0))
IfTrueAction=[!HideMeter DiskETempString][!SetOption DiskELabelString W "110"]

[CalcDiskEExists]
Measure=Calc
Formula=(MeasureDiskESpaceTotal > 0 && ((MeasureDiskEType = 3) || (MeasureDiskEType = 4)) && (#hideDiskE# = 0)) ? 1 : 0
; set disk not found flag
IfCondition=((CalcDiskEExists = 1) && (#hideDiskE# = 0))
IfTrueAction= [!SetVariable DiskENotFound 0][!SetOption MeasureDiskEPercentFull Disabled 0][!SetOption MeasureDiskEIdleTime Disabled 0][!SetOption MeasureDiskETime Disabled 0][!SetOption MeasureDiskERead Disabled 0][!SetOption MeasureDiskEWrite Disabled 0][!SetOption MeasureDiskEReadWrite Disabled 0][!SetOption DiskELabelString Y "(#*gadgetsRowSpacing*# + (([*CalcDiskDExists*] = 1) ? 0 : 1))R"][!SetOption DiskEStorageBar Y ""]
IfFalseAction=[!SetVariable DiskENotFound 1][!SetOption MeasureDiskEPercentFull Disabled 1][!SetOption MeasureDiskEIdleTime Disabled 1][!SetOption MeasureDiskETime Disabled 1][!SetOption MeasureDiskERead Disabled 1][!SetOption MeasureDiskEWrite Disabled 1][!SetOption MeasureDiskEReadWrite Disabled 1][!SetOption DiskELabelString Y "[*DiskDLabelString:Y*]"][!SetOption DiskEStorageBar Y "[*DiskDStorageBar:Y*]"]

[MeasureDiskEPercentFull]
Measure=Calc
Formula=MeasureDiskESpaceUsed / MeasureDiskESpaceTotal
IfCondition=(MeasureDiskEPercentFull > #diskThresholdWarn#) && (#showCapacityWarnings# = 1)
IfTrueAction=[!SetOption DiskEStorageBar BarColor "#colorDiskThresholdWarn#"]
IfCondition2=(MeasureDiskEPercentFull > #diskThresholdFull#) && (#showCapacityWarnings# = 1)
IfTrueAction2=[!SetOption DiskEStorageBar BarColor "#colorDiskThresholdFull#"]

[MeasureDiskEIdleTime]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="% Idle Time"
PerfMonInstance="#d03#"

[MeasureDiskETime]
Measure=Calc
Formula=(100.0 - (MeasureDiskEIdleTime / 100000))
MaxValue=100.0
MinValue=0.0

[MeasureDiskERead]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Read Bytes/sec"
PerfMonInstance="#d03#"
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskERead], 4, '1k', 'textDiskERead')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskERead], 4, '1k', 'textDiskERead')"]

[MeasureDiskEWrite]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Write Bytes/sec"
PerfMonInstance="#d03#"
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskEWrite], 4, '1k', 'textDiskEWrite')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskEWrite], 4, '1k', 'textDiskEWrite')"]

[MeasureDiskEReadWrite]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Bytes/sec"
PerfMonInstance="#d03#"

[MeasureDiskETemp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-SMART-DiskE-SensorId#
HWiNFOSensorInstance=#HWiNFO-SMART-DiskE-SensorInstance#
HWiNFOEntryId=#HWiNFO-SMART-DiskE-Temp#
HWiNFOType=CurrentValue

; Disk F
[MeasureDiskFLabel]
Measure=FreeDiskSpace
Drive=#d04#
IgnoreRemovable=0
Label=1

[MeasureDiskFSpaceTotal]
Measure=FreeDiskSpace
Drive=#d04#
IgnoreRemovable=0
Total=1
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskFSpaceTotal], 3, '1k', 'textDiskFSpaceTotal')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskFSpaceTotal], 3, '1k', 'textDiskFSpaceTotal')"]

[MeasureDiskFSpaceFree]
Measure=FreeDiskSpace
Drive=#d04#
IgnoreRemovable=0
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskFSpaceFree], 5, '1k', 'textDiskFSpaceFree')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskFSpaceFree], 5, '1k', 'textDiskFSpaceFree')"]

[MeasureDiskFSpaceUsed]
Measure=FreeDiskSpace
Drive=#d04#
IgnoreRemovable=0
InvertMeasure=1
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskFSpaceUsed], 5, '1k', 'textDiskFSpaceUsed')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskFSpaceUsed], 5, '1k', 'textDiskFSpaceUsed')"]

[MeasureDiskFType]
Measure=FreeDiskSpace
Drive=#d04#
IgnoreRemovable=0
Type=1
IfCondition=((MeasureDiskFType = 3) || (#showDiskTemps# = 0))
IfTrueAction=[!HideMeter DiskFTempString][!SetOption DiskFLabelString W "110"]

[CalcDiskFExists]
Measure=Calc
Formula=(MeasureDiskFSpaceTotal > 0 && ((MeasureDiskFType = 3) || (MeasureDiskFType = 4)) && (#hideDiskF# = 0)) ? 1 : 0
; set disk not found flag
IfCondition=((CalcDiskFExists = 1) && (#hideDiskF# = 0))
IfTrueAction= [!SetVariable diskFNotFound 0][!SetOption MeasureDiskFPercentFull Disabled 0][!SetOption MeasureDiskFIdleTime Disabled 0][!SetOption MeasureDiskFTime Disabled 0][!SetOption MeasureDiskFRead Disabled 0][!SetOption MeasureDiskFWrite Disabled 0][!SetOption MeasureDiskFReadWrite Disabled 0][!SetOption DiskFLabelString Y "(#*gadgetsRowSpacing*# + (([*CalcDiskEExists*] = 1) ? 0 : 1))R"][!SetOption DiskFStorageBar Y ""]
IfFalseAction=[!SetVariable diskFNotFound 1][!SetOption MeasureDiskFPercentFull Disabled 1][!SetOption MeasureDiskFIdleTime Disabled 1][!SetOption MeasureDiskFTime Disabled 1][!SetOption MeasureDiskFRead Disabled 1][!SetOption MeasureDiskFWrite Disabled 1][!SetOption MeasureDiskFReadWrite Disabled 1][!SetOption DiskFLabelString Y "[*DiskELabelString:Y*]"][!SetOption DiskFStorageBar Y "[*DiskEStorageBar:Y*]"]

[MeasureDiskFPercentFull]
Measure=Calc
Formula=MeasureDiskFSpaceUsed / MeasureDiskFSpaceTotal
IfCondition=(MeasureDiskFPercentFull > #diskThresholdWarn#) && (#showCapacityWarnings# = 1)
IfTrueAction=[!SetOption DiskFStorageBar BarColor "#colorDiskThresholdWarn#"]
IfCondition2=(MeasureDiskFPercentFull > #diskThresholdFull#) && (#showCapacityWarnings# = 1)
IfTrueAction2=[!SetOption DiskFStorageBar BarColor "#colorDiskThresholdFull#"]

[MeasureDiskFIdleTime]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="% Idle Time"
PerfMonInstance="#d04#"

[MeasureDiskFTime]
Measure=Calc
Formula=(100.0 - (MeasureDiskFIdleTime / 100000))
MaxValue=100.0
MinValue=0.0

[MeasureDiskFRead]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Read Bytes/sec"
PerfMonInstance="#d04#"
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskFRead], 4, '1k', 'textDiskFRead')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskFRead], 4, '1k', 'textDiskFRead')"]

[MeasureDiskFWrite]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Write Bytes/sec"
PerfMonInstance="#d04#"
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskFWrite], 4, '1k', 'textDiskFWrite')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskFWrite], 4, '1k', 'textDiskFWrite')"]

[MeasureDiskFReadWrite]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Bytes/sec"
PerfMonInstance="#d04#"

[MeasureDiskFTemp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-SMART-DiskF-SensorId#
HWiNFOSensorInstance=#HWiNFO-SMART-DiskF-SensorInstance#
HWiNFOEntryId=#HWiNFO-SMART-DiskF-Temp#
HWiNFOType=CurrentValue

; Disk G
[MeasureDiskGLabel]
Measure=FreeDiskSpace
Drive=#d05#
IgnoreRemovable=0
Label=1

[MeasureDiskGSpaceTotal]
Measure=FreeDiskSpace
Drive=#d05#
IgnoreRemovable=0
Total=1
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskGSpaceTotal], 3, '1k', 'textDiskGSpaceTotal')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskGSpaceTotal], 3, '1k', 'textDiskGSpaceTotal')"]

[MeasureDiskGSpaceFree]
Measure=FreeDiskSpace
Drive=#d05#
IgnoreRemovable=0
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskGSpaceFree], 5, '1k', 'textDiskGSpaceFree')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskGSpaceFree], 5, '1k', 'textDiskGSpaceFree')"]

[MeasureDiskGSpaceUsed]
Measure=FreeDiskSpace
Drive=#d05#
IgnoreRemovable=0
InvertMeasure=1
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskGSpaceUsed], 5, '1k', 'textDiskGSpaceUsed')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskGSpaceUsed], 5, '1k', 'textDiskGSpaceUsed')"]

[MeasureDiskGType]
Measure=FreeDiskSpace
Drive=#d05#
IgnoreRemovable=0
Type=1
IfCondition=((MeasureDiskGType = 3) || (#showDiskTemps# = 0))
IfTrueAction=[!HideMeter DiskGTempString][!SetOption DiskGLabelString W "110"]

[CalcDiskGExists]
Measure=Calc
Formula=(MeasureDiskGSpaceTotal > 0 && ((MeasureDiskGType = 3) || (MeasureDiskGType = 4)) && (#hideDiskG# = 0)) ? 1 : 0
; set disk not found flag
IfCondition=((CalcDiskGExists = 1) && (#hideDiskG# = 0))
IfTrueAction= [!SetVariable diskGNotFound 0][!SetOption MeasureDiskGPercentFull Disabled 0][!SetOption MeasureDiskGIdleTime Disabled 0][!SetOption MeasureDiskGTime Disabled 0][!SetOption MeasureDiskGRead Disabled 0][!SetOption MeasureDiskGWrite Disabled 0][!SetOption MeasureDiskGReadWrite Disabled 0][!SetOption DiskGLabelString Y "(#*gadgetsRowSpacing*# + (([*CalcDiskFExists*] = 1) ? 0 : 1))R"][!SetOption DiskGStorageBar Y ""]
IfFalseAction=[!SetVariable diskGNotFound 1][!SetOption MeasureDiskGPercentFull Disabled 1][!SetOption MeasureDiskGIdleTime Disabled 1][!SetOption MeasureDiskGTime Disabled 1][!SetOption MeasureDiskGRead Disabled 1][!SetOption MeasureDiskGWrite Disabled 1][!SetOption MeasureDiskGReadWrite Disabled 1][!SetOption DiskGLabelString Y "[*DiskFLabelString:Y*]"][!SetOption DiskGStorageBar Y "[*DiskFStorageBar:Y*]"]

[MeasureDiskGPercentFull]
Measure=Calc
Formula=MeasureDiskGSpaceUsed / MeasureDiskGSpaceTotal
IfCondition=(MeasureDiskGPercentFull > #diskThresholdWarn#) && (#showCapacityWarnings# = 1)
IfTrueAction=[!SetOption DiskGStorageBar BarColor "#colorDiskThresholdWarn#"]
IfCondition2=(MeasureDiskGPercentFull > #diskThresholdFull#) && (#showCapacityWarnings# = 1)
IfTrueAction2=[!SetOption DiskGStorageBar BarColor "#colorDiskThresholdFull#"]

[MeasureDiskGIdleTime]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="% Idle Time"
PerfMonInstance="#d05#"

[MeasureDiskGTime]
Measure=Calc
Formula=(100.0 - (MeasureDiskGIdleTime / 100000))
MaxValue=100.0
MinValue=0.0

[MeasureDiskGRead]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Read Bytes/sec"
PerfMonInstance="#d05#"
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskGRead], 4, '1k', 'textDiskGRead')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskGRead], 4, '1k', 'textDiskGRead')"]

[MeasureDiskGWrite]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Write Bytes/sec"
PerfMonInstance="#d05#"
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskGWrite], 4, '1k', 'textDiskGWrite')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskGWrite], 4, '1k', 'textDiskGWrite')"]

[MeasureDiskGReadWrite]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Bytes/sec"
PerfMonInstance="#d05#"

[MeasureDiskGTemp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-SMART-DiskG-SensorId#
HWiNFOSensorInstance=#HWiNFO-SMART-DiskG-SensorInstance#
HWiNFOEntryId=#HWiNFO-SMART-DiskG-Temp#
HWiNFOType=CurrentValue

; Disk H
[MeasureDiskHLabel]
Measure=FreeDiskSpace
Drive=#d06#
IgnoreRemovable=0
Label=1

[MeasureDiskHSpaceTotal]
Measure=FreeDiskSpace
Drive=#d06#
IgnoreRemovable=0
Total=1
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskHSpaceTotal], 3, '1k', 'textDiskHSpaceTotal')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskHSpaceTotal], 3, '1k', 'textDiskHSpaceTotal')"]

[MeasureDiskHSpaceFree]
Measure=FreeDiskSpace
Drive=#d06#
IgnoreRemovable=0
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskHSpaceFree], 5, '1k', 'textDiskHSpaceFree')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskHSpaceFree], 5, '1k', 'textDiskHSpaceFree')"]

[MeasureDiskHSpaceUsed]
Measure=FreeDiskSpace
Drive=#d06#
IgnoreRemovable=0
InvertMeasure=1
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskHSpaceUsed], 5, '1k', 'textDiskHSpaceUsed')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskHSpaceUsed], 5, '1k', 'textDiskHSpaceUsed')"]

[MeasureDiskHType]
Measure=FreeDiskSpace
Drive=#d06#
IgnoreRemovable=0
Type=1
IfCondition=((MeasureDiskHType = 3) || (#showDiskTemps# = 0))
IfTrueAction=[!HideMeter DiskHTempString][!SetOption DiskHLabelString W "110"]

[CalcDiskHExists]
Measure=Calc
Formula=(MeasureDiskHSpaceTotal > 0 && ((MeasureDiskHType = 3) || (MeasureDiskHType = 4)) && (#hideDiskH# = 0)) ? 1 : 0
; set disk not found flag
IfCondition=((CalcDiskHExists = 1) && (#hideDiskH# = 0))
IfTrueAction= [!SetVariable diskHNotFound 0][!SetOption MeasureDiskHPercentFull Disabled 0][!SetOption MeasureDiskHIdleTime Disabled 0][!SetOption MeasureDiskHTime Disabled 0][!SetOption MeasureDiskHRead Disabled 0][!SetOption MeasureDiskHWrite Disabled 0][!SetOption MeasureDiskHReadWrite Disabled 0][!SetOption DiskHLabelString Y "(#*gadgetsRowSpacing*# + (([*CalcDiskGExists*] = 1) ? 0 : 1))R"][!SetOption DiskHStorageBar Y ""]
IfFalseAction=[!SetVariable diskHNotFound 1][!SetOption MeasureDiskHPercentFull Disabled 1][!SetOption MeasureDiskHIdleTime Disabled 1][!SetOption MeasureDiskHTime Disabled 1][!SetOption MeasureDiskHRead Disabled 1][!SetOption MeasureDiskHWrite Disabled 1][!SetOption MeasureDiskHReadWrite Disabled 1][!SetOption DiskHLabelString Y "[*DiskGLabelString:Y*]"][!SetOption DiskHStorageBar Y "[*DiskGStorageBar:Y*]"]

[MeasureDiskHPercentFull]
Measure=Calc
Formula=MeasureDiskHSpaceUsed / MeasureDiskHSpaceTotal
IfCondition=(MeasureDiskHPercentFull > #diskThresholdWarn#) && (#showCapacityWarnings# = 1)
IfTrueAction=[!SetOption DiskHStorageBar BarColor "#colorDiskThresholdWarn#"]
IfCondition2=(MeasureDiskHPercentFull > #diskThresholdFull#) && (#showCapacityWarnings# = 1)
IfTrueAction2=[!SetOption DiskHStorageBar BarColor "#colorDiskThresholdFull#"]

[MeasureDiskHIdleTime]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="% Idle Time"
PerfMonInstance="#d06#"

[MeasureDiskHTime]
Measure=Calc
Formula=(100.0 - (MeasureDiskHIdleTime / 100000))
MaxValue=100.0
MinValue=0.0

[MeasureDiskHRead]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Read Bytes/sec"
PerfMonInstance="#d06#"
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskHRead], 4, '1k', 'textDiskHRead')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskHRead], 4, '1k', 'textDiskHRead')"]

[MeasureDiskHWrite]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Write Bytes/sec"
PerfMonInstance="#d06#"
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskHWrite], 4, '1k', 'textDiskHWrite')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskHWrite], 4, '1k', 'textDiskHWrite')"]

[MeasureDiskHReadWrite]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Bytes/sec"
PerfMonInstance="#d06#"

[MeasureDiskHTemp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-SMART-DiskH-SensorId#
HWiNFOSensorInstance=#HWiNFO-SMART-DiskH-SensorInstance#
HWiNFOEntryId=#HWiNFO-SMART-DiskH-Temp#
HWiNFOType=CurrentValue

; Disk I
[MeasureDiskILabel]
Measure=FreeDiskSpace
Drive=#d07#
IgnoreRemovable=0
Label=1

[MeasureDiskISpaceTotal]
Measure=FreeDiskSpace
Drive=#d07#
IgnoreRemovable=0
Total=1
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskISpaceTotal], 3, '1k', 'textDiskISpaceTotal')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskISpaceTotal], 3, '1k', 'textDiskISpaceTotal')"]

[MeasureDiskISpaceFree]
Measure=FreeDiskSpace
Drive=#d07#
IgnoreRemovable=0
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskISpaceFree], 5, '1k', 'textDiskISpaceFree')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskISpaceFree], 5, '1k', 'textDiskISpaceFree')"]

[MeasureDiskISpaceUsed]
Measure=FreeDiskSpace
Drive=#d07#
IgnoreRemovable=0
InvertMeasure=1
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskISpaceUsed], 5, '1k', 'textDiskISpaceUsed')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskISpaceUsed], 5, '1k', 'textDiskISpaceUsed')"]

[MeasureDiskIType]
Measure=FreeDiskSpace
Drive=#d07#
IgnoreRemovable=0
Type=1
IfCondition=((MeasureDiskIType = 3) || (#showDiskTemps# = 0))
IfTrueAction=[!HideMeter DiskITempString][!SetOption DiskILabelString W "110"]

[CalcDiskIExists]
Measure=Calc
Formula=(MeasureDiskISpaceTotal > 0 && ((MeasureDiskIType = 3) || (MeasureDiskIType = 4)) && (#hideDiskI# = 0)) ? 1 : 0
; set disk not found flag
IfCondition=((CalcDiskIExists = 1) && (#hideDiskI# = 0))
IfTrueAction= [!SetVariable diskINotFound 0][!SetOption MeasureDiskIPercentFull Disabled 0][!SetOption MeasureDiskIIdleTime Disabled 0][!SetOption MeasureDiskITime Disabled 0][!SetOption MeasureDiskIRead Disabled 0][!SetOption MeasureDiskIWrite Disabled 0][!SetOption MeasureDiskIReadWrite Disabled 0][!SetOption DiskILabelString Y "(#*gadgetsRowSpacing*# + (([*CalcDiskHExists*] = 1) ? 0 : 1))R"][!SetOption DiskIStorageBar Y ""]
IfFalseAction=[!SetVariable diskINotFound 1][!SetOption MeasureDiskIPercentFull Disabled 1][!SetOption MeasureDiskIIdleTime Disabled 1][!SetOption MeasureDiskITime Disabled 1][!SetOption MeasureDiskIRead Disabled 1][!SetOption MeasureDiskIWrite Disabled 1][!SetOption MeasureDiskIReadWrite Disabled 1][!SetOption DiskILabelString Y "[*DiskHLabelString:Y*]"][!SetOption DiskIStorageBar Y "[*DiskHStorageBar:Y*]"]

[MeasureDiskIPercentFull]
Measure=Calc
Formula=MeasureDiskISpaceUsed / MeasureDiskISpaceTotal
IfCondition=(MeasureDiskIPercentFull > #diskThresholdWarn#) && (#showCapacityWarnings# = 1)
IfTrueAction=[!SetOption DiskIStorageBar BarColor "#colorDiskThresholdWarn#"]
IfCondition2=(MeasureDiskIPercentFull > #diskThresholdFull#) && (#showCapacityWarnings# = 1)
IfTrueAction2=[!SetOption DiskIStorageBar BarColor "#colorDiskThresholdFull#"]

[MeasureDiskIIdleTime]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="% Idle Time"
PerfMonInstance="#d07#"

[MeasureDiskITime]
Measure=Calc
Formula=(100.0 - (MeasureDiskIIdleTime / 100000))
MaxValue=100.0
MinValue=0.0

[MeasureDiskIRead]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Read Bytes/sec"
PerfMonInstance="#d07#"
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskIRead], 4, '1k', 'textDiskIRead')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskIRead], 4, '1k', 'textDiskIRead')"]

[MeasureDiskIWrite]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Write Bytes/sec"
PerfMonInstance="#d07#"
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskIWrite], 4, '1k', 'textDiskIWrite')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskIWrite], 4, '1k', 'textDiskIWrite')"]

[MeasureDiskIReadWrite]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Bytes/sec"
PerfMonInstance="#d07#"

[MeasureDiskITemp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-SMART-DiskI-SensorId#
HWiNFOSensorInstance=#HWiNFO-SMART-DiskI-SensorInstance#
HWiNFOEntryId=#HWiNFO-SMART-DiskI-Temp#
HWiNFOType=CurrentValue

; Disk J
[MeasureDiskJLabel]
Measure=FreeDiskSpace
Drive=#d08#
IgnoreRemovable=0
Label=1

[MeasureDiskJSpaceTotal]
Measure=FreeDiskSpace
Drive=#d08#
IgnoreRemovable=0
Total=1
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskJSpaceTotal], 3, '1k', 'textDiskJSpaceTotal')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskJSpaceTotal], 3, '1k', 'textDiskJSpaceTotal')"]

[MeasureDiskJSpaceFree]
Measure=FreeDiskSpace
Drive=#d08#
IgnoreRemovable=0
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskJSpaceFree], 5, '1k', 'textDiskJSpaceFree')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskJSpaceFree], 5, '1k', 'textDiskJSpaceFree')"]

[MeasureDiskJSpaceUsed]
Measure=FreeDiskSpace
Drive=#d08#
IgnoreRemovable=0
InvertMeasure=1
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskJSpaceUsed], 5, '1k', 'textDiskJSpaceUsed')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskJSpaceUsed], 5, '1k', 'textDiskJSpaceUsed')"]

[MeasureDiskJType]
Measure=FreeDiskSpace
Drive=#d08#
IgnoreRemovable=0
Type=1
IfCondition=((MeasureDiskJType = 3) || (#showDiskTemps# = 0))
IfTrueAction=[!HideMeter DiskJTempString][!SetOption DiskJLabelString W "110"]

[CalcDiskJExists]
Measure=Calc
Formula=(MeasureDiskJSpaceTotal > 0 && ((MeasureDiskJType = 3) || (MeasureDiskJType = 4))  && (#hideDiskJ# = 0)) ? 1 : 0
; set disk not found flag
IfCondition=((CalcDiskJExists = 1) && (#hideDiskJ# = 0))
IfTrueAction= [!SetVariable diskJNotFound 0][!SetOption MeasureDiskJPercentFull Disabled 0][!SetOption MeasureDiskJIdleTime Disabled 0][!SetOption MeasureDiskJTime Disabled 0][!SetOption MeasureDiskJRead Disabled 0][!SetOption MeasureDiskJWrite Disabled 0][!SetOption MeasureDiskJReadWrite Disabled 0][!SetOption DiskJLabelString Y "(#*gadgetsRowSpacing*# + (([*CalcDiskIExists*] = 1) ? 0 : 1))R"][!SetOption DiskJStorageBar Y ""]
IfFalseAction=[!SetVariable diskJNotFound 1][!SetOption MeasureDiskJPercentFull Disabled 1][!SetOption MeasureDiskJIdleTime Disabled 1][!SetOption MeasureDiskJTime Disabled 1][!SetOption MeasureDiskJRead Disabled 1][!SetOption MeasureDiskJWrite Disabled 1][!SetOption MeasureDiskJReadWrite Disabled 1][!SetOption DiskJLabelString Y "[*DiskILabelString:Y*]"][!SetOption DiskJStorageBar Y "[*DiskIStorageBar:Y*]"]

[MeasureDiskJPercentFull]
Measure=Calc
Formula=MeasureDiskJSpaceUsed / MeasureDiskJSpaceTotal
IfCondition=(MeasureDiskJPercentFull > #diskThresholdWarn#) && (#showCapacityWarnings# = 1)
IfTrueAction=[!SetOption DiskJStorageBar BarColor "#colorDiskThresholdWarn#"]
IfCondition2=(MeasureDiskJPercentFull > #diskThresholdFull#) && (#showCapacityWarnings# = 1)
IfTrueAction2=[!SetOption DiskJStorageBar BarColor "#colorDiskThresholdFull#"]

[MeasureDiskJIdleTime]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="% Idle Time"
PerfMonInstance="#d08#"

[MeasureDiskJTime]
Measure=Calc
Formula=(100.0 - (MeasureDiskJIdleTime / 100000))
MaxValue=100.0
MinValue=0.0

[MeasureDiskJRead]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Read Bytes/sec"
PerfMonInstance="#d08#"
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskJRead], 4, '1k', 'textDiskJRead')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskJRead], 4, '1k', 'textDiskJRead')"]

[MeasureDiskJWrite]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Write Bytes/sec"
PerfMonInstance="#d08#"
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskJWrite], 4, '1k', 'textDiskJWrite')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskJWrite], 4, '1k', 'textDiskJWrite')"]

[MeasureDiskJReadWrite]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Bytes/sec"
PerfMonInstance="#d08#"

[MeasureDiskJTemp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-SMART-DiskJ-SensorId#
HWiNFOSensorInstance=#HWiNFO-SMART-DiskJ-SensorInstance#
HWiNFOEntryId=#HWiNFO-SMART-DiskJ-Temp#
HWiNFOType=CurrentValue

; Disk K
[MeasureDiskKLabel]
Measure=FreeDiskSpace
Drive=#d09#
IgnoreRemovable=0
Label=1

[MeasureDiskKSpaceTotal]
Measure=FreeDiskSpace
Drive=#d09#
IgnoreRemovable=0
Total=1
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskKSpaceTotal], 3, '1k', 'textDiskKSpaceTotal')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskKSpaceTotal], 3, '1k', 'textDiskKSpaceTotal')"]

[MeasureDiskKSpaceFree]
Measure=FreeDiskSpace
Drive=#d09#
IgnoreRemovable=0
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskKSpaceFree], 5, '1k', 'textDiskKSpaceFree')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskKSpaceFree], 5, '1k', 'textDiskKSpaceFree')"]

[MeasureDiskKSpaceUsed]
Measure=FreeDiskSpace
Drive=#d09#
IgnoreRemovable=0
InvertMeasure=1
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskKSpaceUsed], 5, '1k', 'textDiskKSpaceUsed')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskKSpaceUsed], 5, '1k', 'textDiskKSpaceUsed')"]

[MeasureDiskKType]
Measure=FreeDiskSpace
Drive=#d09#
IgnoreRemovable=0
Type=1
IfCondition=((MeasureDiskKType = 3) || (#showDiskTemps# = 0))
IfTrueAction=[!HideMeter DiskKTempString][!SetOption DiskKLabelString W "110"]

[CalcDiskKExists]
Measure=Calc
Formula=(MeasureDiskKSpaceTotal > 0 && ((MeasureDiskKType = 3) || (MeasureDiskKType = 4))  && (#hideDiskK# = 0)) ? 1 : 0
; set disk not found flag
IfCondition=((CalcDiskKExists = 1) && (#hideDiskK# = 0))
IfTrueAction= [!SetVariable diskKNotFound 0][!SetOption MeasureDiskKPercentFull Disabled 0][!SetOption MeasureDiskKIdleTime Disabled 0][!SetOption MeasureDiskKTime Disabled 0][!SetOption MeasureDiskKRead Disabled 0][!SetOption MeasureDiskKWrite Disabled 0][!SetOption MeasureDiskKReadWrite Disabled 0][!SetOption DiskKLabelString Y "(#*gadgetsRowSpacing*# + (([*CalcDiskJExists*] = 1) ? 0 : 1))R"][!SetOption DiskKStorageBar Y ""]
IfFalseAction=[!SetVariable diskKNotFound 1][!SetOption MeasureDiskKPercentFull Disabled 1][!SetOption MeasureDiskKIdleTime Disabled 1][!SetOption MeasureDiskKTime Disabled 1][!SetOption MeasureDiskKRead Disabled 1][!SetOption MeasureDiskKWrite Disabled 1][!SetOption MeasureDiskKReadWrite Disabled 1][!SetOption DiskKLabelString Y "[*DiskJLabelString:Y*]"][!SetOption DiskKStorageBar Y "[*DiskJStorageBar:Y*]"]

[MeasureDiskKPercentFull]
Measure=Calc
Formula=MeasureDiskKSpaceUsed / MeasureDiskKSpaceTotal
IfCondition=(MeasureDiskKPercentFull > #diskThresholdWarn#) && (#showCapacityWarnings# = 1)
IfTrueAction=[!SetOption DiskKStorageBar BarColor "#colorDiskThresholdWarn#"]
IfCondition2=(MeasureDiskKPercentFull > #diskThresholdFull#) && (#showCapacityWarnings# = 1)
IfTrueAction2=[!SetOption DiskKStorageBar BarColor "#colorDiskThresholdFull#"]

[MeasureDiskKIdleTime]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="% Idle Time"
PerfMonInstance="#d09#"

[MeasureDiskKTime]
Measure=Calc
Formula=(100.0 - (MeasureDiskKIdleTime / 100000))
MaxValue=100.0
MinValue=0.0

[MeasureDiskKRead]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Read Bytes/sec"
PerfMonInstance="#d09#"
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskKRead], 4, '1k', 'textDiskKRead')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskKRead], 4, '1k', 'textDiskKRead')"]

[MeasureDiskKWrite]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Write Bytes/sec"
PerfMonInstance="#d09#"
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskKWrite], 4, '1k', 'textDiskKWrite')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskKWrite], 4, '1k', 'textDiskKWrite')"]

[MeasureDiskKReadWrite]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Bytes/sec"
PerfMonInstance="#d09#"

[MeasureDiskKTemp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-SMART-DiskK-SensorId#
HWiNFOSensorInstance=#HWiNFO-SMART-DiskK-SensorInstance#
HWiNFOEntryId=#HWiNFO-SMART-DiskK-Temp#
HWiNFOType=CurrentValue

; Disk L
[MeasureDiskLLabel]
Measure=FreeDiskSpace
Drive=#d10#
IgnoreRemovable=0
Label=1

[MeasureDiskLSpaceTotal]
Measure=FreeDiskSpace
Drive=#d10#
IgnoreRemovable=0
Total=1
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskLSpaceTotal], 3, '1k', 'textDiskLSpaceTotal')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskLSpaceTotal], 3, '1k', 'textDiskLSpaceTotal')"]

[MeasureDiskLSpaceFree]
Measure=FreeDiskSpace
Drive=#d10#
IgnoreRemovable=0
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskLSpaceFree], 5, '1k', 'textDiskLSpaceFree')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskLSpaceFree], 5, '1k', 'textDiskLSpaceFree')"]

[MeasureDiskLSpaceUsed]
Measure=FreeDiskSpace
Drive=#d10#
IgnoreRemovable=0
InvertMeasure=1
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskLSpaceUsed], 5, '1k', 'textDiskLSpaceUsed')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskLSpaceUsed], 5, '1k', 'textDiskLSpaceUsed')"]

[MeasureDiskLType]
Measure=FreeDiskSpace
Drive=#d10#
IgnoreRemovable=0
Type=1
IfCondition=((MeasureDiskLType = 3) || (#showDiskTemps# = 0))
IfTrueAction=[!HideMeter DiskLTempString][!SetOption DiskLLabelString W "110"]

[CalcDiskLExists]
Measure=Calc
Formula=(MeasureDiskLSpaceTotal > 0 && ((MeasureDiskLType = 3) || (MeasureDiskLType = 4))  && (#hideDiskL# = 0)) ? 1 : 0
; set disk not found flag
IfCondition=((CalcDiskLExists = 1) && (#hideDiskL# = 0))
IfTrueAction= [!SetVariable diskLNotFound 0][!SetOption MeasureDiskLPercentFull Disabled 0][!SetOption MeasureDiskLIdleTime Disabled 0][!SetOption MeasureDiskLTime Disabled 0][!SetOption MeasureDiskLRead Disabled 0][!SetOption MeasureDiskLWrite Disabled 0][!SetOption MeasureDiskLReadWrite Disabled 0][!SetOption DiskLLabelString Y "(#*gadgetsRowSpacing*# + (([*CalcDiskKExists*] = 1) ? 0 : 1))R"][!SetOption DiskLStorageBar Y ""]
IfFalseAction=[!SetVariable diskLNotFound 1][!SetOption MeasureDiskLPercentFull Disabled 1][!SetOption MeasureDiskLIdleTime Disabled 1][!SetOption MeasureDiskLTime Disabled 1][!SetOption MeasureDiskLRead Disabled 1][!SetOption MeasureDiskLWrite Disabled 1][!SetOption MeasureDiskLReadWrite Disabled 1][!SetOption DiskLLabelString Y "[*DiskKLabelString:Y*]"][!SetOption DiskLStorageBar Y "[*DiskKStorageBar:Y*]"]

[MeasureDiskLPercentFull]
Measure=Calc
Formula=MeasureDiskLSpaceUsed / MeasureDiskLSpaceTotal
IfCondition=(MeasureDiskLPercentFull > #diskThresholdWarn#) && (#showCapacityWarnings# = 1)
IfTrueAction=[!SetOption DiskLStorageBar BarColor "#colorDiskThresholdWarn#"]
IfCondition2=(MeasureDiskLPercentFull > #diskThresholdFull#) && (#showCapacityWarnings# = 1)
IfTrueAction2=[!SetOption DiskLStorageBar BarColor "#colorDiskThresholdFull#"]

[MeasureDiskLIdleTime]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="% Idle Time"
PerfMonInstance="#d10#"

[MeasureDiskLTime]
Measure=Calc
Formula=(100.0 - (MeasureDiskLIdleTime / 100000))
MaxValue=100.0
MinValue=0.0

[MeasureDiskLRead]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Read Bytes/sec"
PerfMonInstance="#d10#"
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskLRead], 4, '1k', 'textDiskLRead')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskLRead], 4, '1k', 'textDiskLRead')"]

[MeasureDiskLWrite]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Write Bytes/sec"
PerfMonInstance="#d10#"
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskLWrite], 4, '1k', 'textDiskLWrite')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([MeasureDiskLWrite], 4, '1k', 'textDiskLWrite')"]

[MeasureDiskLReadWrite]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Bytes/sec"
PerfMonInstance="#d10#"

[MeasureDiskLTemp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-SMART-DiskL-SensorId#
HWiNFOSensorInstance=#HWiNFO-SMART-DiskL-SensorInstance#
HWiNFOEntryId=#HWiNFO-SMART-DiskL-Temp#
HWiNFOType=CurrentValue

; ----- Calc drive numbers / assign disk colors -----

[CalcNumOfDisks]
Measure=Calc
Formula=(CalcDiskCExists + CalcDiskDExists + CalcDiskEExists + CalcDiskFExists + CalcDiskGExists + CalcDiskHExists + CalcDiskIExists + CalcDiskJExists + CalcDiskKExists + CalcDiskLExists)

[CalcDiskCNumber]
Measure=Calc
Formula=0
IfCondition=(CalcDiskCNumber = 0) && (CalcDiskCExists = 1)
IfTrueAction=[!SetVariable colorDiskC #colorDisk1#][!SetVariable colorDiskCRgb #colorDisk1Rgb#][!SetVariable colorDiskCA #colorDisk1A#]
DynamicVariables=1

[CalcDiskDNumber]
Measure=Calc
Formula=(CalcDiskCNumber + CalcDiskDExists)
IfCondition=(CalcDiskDNumber = 0) && (CalcDiskDExists = 1)
IfTrueAction=[!SetVariable colorDiskD #colorDisk1#][!SetVariable colorDiskDRgb #colorDisk1Rgb#][!SetVariable colorDiskDA #colorDisk1A#]
IfCondition2=(CalcDiskDNumber = 1) && (CalcDiskDExists = 1)
IfTrueAction2=[!SetVariable colorDiskD #colorDisk2#][!SetVariable colorDiskDRgb #colorDisk2Rgb#][!SetVariable colorDiskDA #colorDisk2A#]
DynamicVariables=1

[CalcDiskENumber]
Measure=Calc
Formula=(CalcDiskCNumber + CalcDiskDExists + CalcDiskEExists)
IfCondition=(CalcDiskENumber = 0) && (CalcDiskEExists = 1)
IfTrueAction=[!SetVariable colorDiskE #colorDisk1#][!SetVariable colorDiskERgb #colorDisk1Rgb#][!SetVariable colorDiskEA #colorDisk1A#]
IfCondition2=(CalcDiskENumber = 1) && (CalcDiskEExists = 1)
IfTrueAction2=[!SetVariable colorDiskE #colorDisk2#][!SetVariable colorDiskERgb #colorDisk2Rgb#][!SetVariable colorDiskEA #colorDisk2A#]
IfCondition3=(CalcDiskENumber = 2) && (CalcDiskEExists = 1)
IfTrueAction3=[!SetVariable colorDiskE #colorDisk3#][!SetVariable colorDiskERgb #colorDisk3Rgb#][!SetVariable colorDiskEA #colorDisk3A#]
DynamicVariables=1

[CalcDiskFNumber]
Measure=Calc
Formula=(CalcDiskCNumber + CalcDiskDExists + CalcDiskEExists + CalcDiskFExists)
IfCondition=(CalcDiskFNumber = 0) && (CalcDiskFExists = 1)
IfTrueAction=[!SetVariable colorDiskF #colorDisk1#][!SetVariable colorDiskFRgb #colorDisk1Rgb#][!SetVariable colorDiskFA #colorDisk1A#]
IfCondition2=(CalcDiskFNumber = 1) && (CalcDiskFExists = 1)
IfTrueAction2=[!SetVariable colorDiskF #colorDisk2#][!SetVariable colorDiskFRgb #colorDisk2Rgb#][!SetVariable colorDiskFA #colorDisk2A#]
IfCondition3=(CalcDiskFNumber = 2) && (CalcDiskFExists = 1)
IfTrueAction3=[!SetVariable colorDiskF #colorDisk3#][!SetVariable colorDiskFRgb #colorDisk3Rgb#][!SetVariable colorDiskFA #colorDisk3A#]
IfCondition4=(CalcDiskFNumber = 3) && (CalcDiskFExists = 1)
IfTrueAction4=[!SetVariable colorDiskF #colorDisk4#][!SetVariable colorDiskFRgb #colorDisk4Rgb#][!SetVariable colorDiskFA #colorDisk4A#]
DynamicVariables=1

[CalcDiskGNumber]
Measure=Calc
Formula=(CalcDiskCNumber + CalcDiskDExists + CalcDiskEExists + CalcDiskFExists + CalcDiskGExists)
IfCondition=(CalcDiskGNumber = 0) && (CalcDiskGExists = 1)
IfTrueAction=[!SetVariable colorDiskG #colorDisk1#][!SetVariable colorDiskGRgb #colorDisk1Rgb#][!SetVariable colorDiskGA #colorDisk1A#]
IfCondition2=(CalcDiskGNumber = 1) && (CalcDiskGExists = 1)
IfTrueAction2=[!SetVariable colorDiskG #colorDisk2#][!SetVariable colorDiskGRgb #colorDisk2Rgb#][!SetVariable colorDiskGA #colorDisk2A#]
IfCondition3=(CalcDiskGNumber = 2) && (CalcDiskGExists = 1)
IfTrueAction3=[!SetVariable colorDiskG #colorDisk3#][!SetVariable colorDiskGRgb #colorDisk3Rgb#][!SetVariable colorDiskGA #colorDisk3A#]
IfCondition4=(CalcDiskGNumber = 3) && (CalcDiskGExists = 1)
IfTrueAction4=[!SetVariable colorDiskG #colorDisk4#][!SetVariable colorDiskGRgb #colorDisk4Rgb#][!SetVariable colorDiskGA #colorDisk4A#]
IfCondition5=(CalcDiskGNumber = 4) && (CalcDiskGExists = 1)
IfTrueAction5=[!SetVariable colorDiskG #colorDisk5#][!SetVariable colorDiskGRgb #colorDisk5Rgb#][!SetVariable colorDiskGA #colorDisk5A#]
DynamicVariables=1

[CalcDiskHNumber]
Measure=Calc
Formula=(CalcDiskCNumber + CalcDiskDExists + CalcDiskEExists + CalcDiskFExists + CalcDiskGExists + CalcDiskHExists)
IfCondition=(CalcDiskHNumber = 0) && (CalcDiskHExists = 1)
IfTrueAction=[!SetVariable colorDiskH #colorDisk1#][!SetVariable colorDiskHRgb #colorDisk1Rgb#][!SetVariable colorDiskHA #colorDisk1A#]
IfCondition2=(CalcDiskHNumber = 1) && (CalcDiskHExists = 1)
IfTrueAction2=[!SetVariable colorDiskH #colorDisk2#][!SetVariable colorDiskHRgb #colorDisk2Rgb#][!SetVariable colorDiskHA #colorDisk2A#]
IfCondition3=(CalcDiskHNumber = 2) && (CalcDiskHExists = 1)
IfTrueAction3=[!SetVariable colorDiskH #colorDisk3#][!SetVariable colorDiskHRgb #colorDisk3Rgb#][!SetVariable colorDiskHA #colorDisk3A#]
IfCondition4=(CalcDiskHNumber = 3) && (CalcDiskHExists = 1)
IfTrueAction4=[!SetVariable colorDiskH #colorDisk4#][!SetVariable colorDiskHRgb #colorDisk4Rgb#][!SetVariable colorDiskHA #colorDisk4A#]
IfCondition5=(CalcDiskHNumber = 4) && (CalcDiskHExists = 1)
IfTrueAction5=[!SetVariable colorDiskH #colorDisk5#][!SetVariable colorDiskHRgb #colorDisk5Rgb#][!SetVariable colorDiskHA #colorDisk5A#]
IfCondition6=(CalcDiskHNumber = 5) && (CalcDiskHExists = 1)
IfTrueAction6=[!SetVariable colorDiskH #colorDisk6#][!SetVariable colorDiskHRgb #colorDisk6Rgb#][!SetVariable colorDiskHA #colorDisk6A#]
DynamicVariables=1

[CalcDiskINumber]
Measure=Calc
Formula=(CalcDiskCNumber + CalcDiskDExists + CalcDiskEExists + CalcDiskFExists + CalcDiskGExists + CalcDiskHExists + CalcDiskIExists)
IfCondition=(CalcDiskINumber = 0) && (CalcDiskIExists = 1)
IfTrueAction=[!SetVariable colorDiskI #colorDisk1#][!SetVariable colorDiskIRgb #colorDisk1Rgb#][!SetVariable colorDiskIA #colorDisk1A#]
IfCondition2=(CalcDiskINumber = 1) && (CalcDiskIExists = 1)
IfTrueAction2=[!SetVariable colorDiskI #colorDisk2#][!SetVariable colorDiskIRgb #colorDisk2Rgb#][!SetVariable colorDiskIA #colorDisk2A#]
IfCondition3=(CalcDiskINumber = 2) && (CalcDiskIExists = 1)
IfTrueAction3=[!SetVariable colorDiskI #colorDisk3#][!SetVariable colorDiskIRgb #colorDisk3Rgb#][!SetVariable colorDiskIA #colorDisk3A#]
IfCondition4=(CalcDiskINumber = 3) && (CalcDiskIExists = 1)
IfTrueAction4=[!SetVariable colorDiskI #colorDisk4#][!SetVariable colorDiskIRgb #colorDisk4Rgb#][!SetVariable colorDiskIA #colorDisk4A#]
IfCondition5=(CalcDiskINumber = 4) && (CalcDiskIExists = 1)
IfTrueAction5=[!SetVariable colorDiskI #colorDisk5#][!SetVariable colorDiskIRgb #colorDisk5Rgb#][!SetVariable colorDiskIA #colorDisk5A#]
IfCondition6=(CalcDiskINumber = 5) && (CalcDiskIExists = 1)
IfTrueAction6=[!SetVariable colorDiskI #colorDisk6#][!SetVariable colorDiskIRgb #colorDisk6Rgb#][!SetVariable colorDiskIA #colorDisk6A#]
IfCondition7=(CalcDiskINumber = 6) && (CalcDiskIExists = 1)
IfTrueAction7=[!SetVariable colorDiskI #colorDisk7#][!SetVariable colorDiskIRgb #colorDisk7Rgb#][!SetVariable colorDiskIA #colorDisk7A#]
DynamicVariables=1

[CalcDiskJNumber]
Measure=Calc
Formula=(CalcDiskCNumber + CalcDiskDExists + CalcDiskEExists + CalcDiskFExists + CalcDiskGExists + CalcDiskHExists + CalcDiskIExists + CalcDiskJExists)
IfCondition=(CalcDiskJNumber = 0) && (CalcDiskJExists = 1)
IfTrueAction=[!SetVariable colorDiskJ #colorDisk1#][!SetVariable colorDiskJRgb #colorDisk1Rgb#][!SetVariable colorDiskJA #colorDisk1A#]
IfCondition2=(CalcDiskJNumber = 1) && (CalcDiskJExists = 1)
IfTrueAction2=[!SetVariable colorDiskJ #colorDisk2#][!SetVariable colorDiskJRgb #colorDisk2Rgb#][!SetVariable colorDiskJA #colorDisk2A#]
IfCondition3=(CalcDiskJNumber = 2) && (CalcDiskJExists = 1)
IfTrueAction3=[!SetVariable colorDiskJ #colorDisk3#][!SetVariable colorDiskJRgb #colorDisk3Rgb#][!SetVariable colorDiskJA #colorDisk3A#]
IfCondition4=(CalcDiskJNumber = 3) && (CalcDiskJExists = 1)
IfTrueAction4=[!SetVariable colorDiskJ #colorDisk4#][!SetVariable colorDiskJRgb #colorDisk4Rgb#][!SetVariable colorDiskJA #colorDisk4A#]
IfCondition5=(CalcDiskJNumber = 4) && (CalcDiskJExists = 1)
IfTrueAction5=[!SetVariable colorDiskJ #colorDisk5#][!SetVariable colorDiskJRgb #colorDisk5Rgb#][!SetVariable colorDiskJA #colorDisk5A#]
IfCondition6=(CalcDiskJNumber = 5) && (CalcDiskJExists = 1)
IfTrueAction6=[!SetVariable colorDiskJ #colorDisk6#][!SetVariable colorDiskJRgb #colorDisk6Rgb#][!SetVariable colorDiskJA #colorDisk6A#]
IfCondition7=(CalcDiskJNumber = 6) && (CalcDiskJExists = 1)
IfTrueAction7=[!SetVariable colorDiskJ #colorDisk7#][!SetVariable colorDiskJRgb #colorDisk7Rgb#][!SetVariable colorDiskJA #colorDisk7A#]
IfCondition8=(CalcDiskJNumber = 7) && (CalcDiskJExists = 1)
IfTrueAction8=[!SetVariable colorDiskJ #colorDisk8#][!SetVariable colorDiskJRgb #colorDisk8Rgb#][!SetVariable colorDiskJA #colorDisk8A#]
DynamicVariables=1

[CalcDiskKNumber]
Measure=Calc
Formula=(CalcDiskCNumber + CalcDiskDExists + CalcDiskEExists + CalcDiskFExists + CalcDiskGExists + CalcDiskHExists + CalcDiskIExists + CalcDiskJExists + CalcDiskKExists)
IfCondition=(CalcDiskKNumber = 0) && (CalcDiskKExists = 1)
IfTrueAction=[!SetVariable colorDiskK #colorDisk1#][!SetVariable colorDiskKRgb #colorDisk1Rgb#][!SetVariable colorDiskKA #colorDisk1A#]
IfCondition2=(CalcDiskKNumber = 1) && (CalcDiskKExists = 1)
IfTrueAction2=[!SetVariable colorDiskK #colorDisk2#][!SetVariable colorDiskKRgb #colorDisk2Rgb#][!SetVariable colorDiskKA #colorDisk2A#]
IfCondition3=(CalcDiskKNumber = 2) && (CalcDiskKExists = 1)
IfTrueAction3=[!SetVariable colorDiskK #colorDisk3#][!SetVariable colorDiskKRgb #colorDisk3Rgb#][!SetVariable colorDiskKA #colorDisk3A#]
IfCondition4=(CalcDiskKNumber = 3) && (CalcDiskKExists = 1)
IfTrueAction4=[!SetVariable colorDiskK #colorDisk4#][!SetVariable colorDiskKRgb #colorDisk4Rgb#][!SetVariable colorDiskKA #colorDisk4A#]
IfCondition5=(CalcDiskKNumber = 4) && (CalcDiskKExists = 1)
IfTrueAction5=[!SetVariable colorDiskK #colorDisk5#][!SetVariable colorDiskKRgb #colorDisk5Rgb#][!SetVariable colorDiskKA #colorDisk5A#]
IfCondition6=(CalcDiskKNumber = 5) && (CalcDiskKExists = 1)
IfTrueAction6=[!SetVariable colorDiskK #colorDisk6#][!SetVariable colorDiskKRgb #colorDisk6Rgb#][!SetVariable colorDiskKA #colorDisk6A#]
IfCondition7=(CalcDiskKNumber = 6) && (CalcDiskKExists = 1)
IfTrueAction7=[!SetVariable colorDiskK #colorDisk7#][!SetVariable colorDiskKRgb #colorDisk7Rgb#][!SetVariable colorDiskKA #colorDisk7A#]
IfCondition8=(CalcDiskKNumber = 7) && (CalcDiskKExists = 1)
IfTrueAction8=[!SetVariable colorDiskK #colorDisk8#][!SetVariable colorDiskKRgb #colorDisk8Rgb#][!SetVariable colorDiskKA #colorDisk8A#]
IfCondition9=(CalcDiskKNumber = 8) && (CalcDiskKExists = 1)
IfTrueAction9=[!SetVariable colorDiskK #colorDisk9#][!SetVariable colorDiskKRgb #colorDisk9Rgb#][!SetVariable colorDiskKA #colorDisk9A#]
DynamicVariables=1

[CalcDiskLNumber]
Measure=Calc
Formula=(CalcDiskCNumber + CalcDiskDExists + CalcDiskEExists + CalcDiskFExists + CalcDiskGExists + CalcDiskHExists + CalcDiskIExists + CalcDiskJExists + CalcDiskKExists + CalcDiskLExists)
IfCondition=(CalcDiskLNumber = 0) && (CalcDiskLExists = 1)
IfTrueAction=[!SetVariable colorDiskL #colorDisk1#][!SetVariable colorDiskLRgb #colorDisk1Rgb#][!SetVariable colorDiskLA #colorDisk1A#]
IfCondition2=(CalcDiskLNumber = 1) && (CalcDiskLExists = 1)
IfTrueAction2=[!SetVariable colorDiskL #colorDisk2#][!SetVariable colorDiskLRgb #colorDisk2Rgb#][!SetVariable colorDiskLA #colorDisk2A#]
IfCondition3=(CalcDiskLNumber = 2) && (CalcDiskLExists = 1)
IfTrueAction3=[!SetVariable colorDiskL #colorDisk3#][!SetVariable colorDiskLRgb #colorDisk3Rgb#][!SetVariable colorDiskLA #colorDisk3A#]
IfCondition4=(CalcDiskLNumber = 3) && (CalcDiskLExists = 1)
IfTrueAction4=[!SetVariable colorDiskL #colorDisk4#][!SetVariable colorDiskLRgb #colorDisk4Rgb#][!SetVariable colorDiskLA #colorDisk4A#]
IfCondition5=(CalcDiskLNumber = 4) && (CalcDiskLExists = 1)
IfTrueAction5=[!SetVariable colorDiskL #colorDisk5#][!SetVariable colorDiskLRgb #colorDisk5Rgb#][!SetVariable colorDiskLA #colorDisk5A#]
IfCondition6=(CalcDiskLNumber = 5) && (CalcDiskLExists = 1)
IfTrueAction6=[!SetVariable colorDiskL #colorDisk6#][!SetVariable colorDiskLRgb #colorDisk6Rgb#][!SetVariable colorDiskLA #colorDisk6A#]
IfCondition7=(CalcDiskLNumber = 6) && (CalcDiskLExists = 1)
IfTrueAction7=[!SetVariable colorDiskL #colorDisk7#][!SetVariable colorDiskLRgb #colorDisk7Rgb#][!SetVariable colorDiskLA #colorDisk7A#]
IfCondition8=(CalcDiskLNumber = 7) && (CalcDiskLExists = 1)
IfTrueAction8=[!SetVariable colorDiskL #colorDisk8#][!SetVariable colorDiskLRgb #colorDisk8Rgb#][!SetVariable colorDiskLA #colorDisk8A#]
IfCondition9=(CalcDiskLNumber = 8) && (CalcDiskLExists = 1)
IfTrueAction9=[!SetVariable colorDiskL #colorDisk9#][!SetVariable colorDiskLRgb #colorDisk9Rgb#][!SetVariable colorDiskLA #colorDisk9A#]
IfCondition10=(CalcDiskLNumber = 9) && (CalcDiskLExists = 1)
IfTrueAction10=[!SetVariable colorDiskL #colorDisk10#][!SetVariable colorDiskLRgb #colorDisk10Rgb#][!SetVariable colorDiskLA #colorDisk10A#]
DynamicVariables=1
