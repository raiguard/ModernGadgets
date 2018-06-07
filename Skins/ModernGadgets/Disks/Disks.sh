#!/usr/bin/env zsh
# vim: set ft=sh ts=4 sts=4 cc= ai noet:
template1='
; Disk %1$s
[Disk%1$sNameString]
Meter=String
MeterStyle=StyleString | StyleStringDiskName | StyleStringButtonHover
MeasureName=MeasureDisk%1$sName
Y=((#hideDisk%1$s# = 1) ? ((#largeRowSpacing# = 1) ? -5 : -3) : #rowSpacing#)R
Text=%1$s: %%1
LeftMouseUpAction=["C:\Windows\explorer.exe" /E,%1$s:\]
Group=Disk%1$s
Hidden=#hideDisk%1$s#

[Disk%1$sEjectButton]
Meter=Image
MeterStyle=StyleEjectButton | StyleImgButtonHover
LeftMouseUpAction=[!CommandMeasure MeasureDisk%1$sEject "Run"]
Group=Disk%1$s | EjectButtons
Hidden=(#hideDisk%1$s# = 1) || ([MeasureDisk%1$sType:] = 4) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

[Disk%1$sTempString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringDiskTemp
MeasureName=MeasureDisk%1$sTemp
Group=Disk%1$s | DiskTemps
Hidden=(#hideDisk%1$s# = 1) || ([MeasureDisk%1$sType:] <> 4) || (#showDiskTemps# = 0) || ([MeasureHwinfoDetect:] = -9000)

[Disk%1$sRWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDisk%1$sRWTime
Text=%%1%%
Group=Disk%1$s
Hidden=#hideDisk%1$s#

[Disk%1$sWriteArrow]
Meter=Image
MeterStyle=StyleWriteArrow
ImageTint=#colorDisk%1$s#
Y=(((#showDiskReadWrite# = 0) && (#hideDisk%1$s# = 0)) ? -#rowSpacing# + 1 : #rowSpacing#)R
Group=Disk%1$s | Disk%1$sReadWrite
Hidden=(#hideDisk%1$s# = 1) || (#showDiskReadWrite# = 0)

[Disk%1$sWriteString]
Meter=String
MeterStyle=StyleString | StyleStringWrite
Text=#textDisk%1$sWrite#B/s
Group=Disk%1$s | Disk%1$sReadWrite
Hidden=(#hideDisk%1$s# = 1) || (#showDiskReadWrite# = 0)

[Disk%1$sReadArrow]
Meter=Image
MeterStyle=StyleReadArrow
ImageTint=#colorDisk%1$s#
Group=Disk%1$s | Disk%1$sReadWrite
Hidden=(#hideDisk%1$s# = 1) || (#showDiskReadWrite# = 0)

[Disk%1$sReadString]
Meter=String
MeterStyle=StyleString | StyleStringRead
Text=#textDisk%1$sRead#B/s
Group=Disk%1$s | Disk%1$sReadWrite
Hidden=(#hideDisk%1$s# = 1) || (#showDiskReadWrite# = 0)

[Disk%1$sSpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=#textDisk%1$sSpaceUsed#B / #textDisk%1$sSpaceTotal#B
Group=Disk%1$s
Hidden=#hideDisk%1$s#

[Disk%1$sSpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureDisk%1$sSpaceUsage
Percentual=1
Text=%%1%%
Group=Disk%1$s
Hidden=#hideDisk%1$s#

[Disk%1$sSpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDisk%1$sSpaceUsage
BarColor=#colorDisk%1$s#
Group=Disk%1$s
Hidden=#hideDisk%1$s#

; Disk Measure %1$s
[MeasureDisk%1$sType]
Measure=FreeDiskSpace
Drive=%1$s:
Type=1
IgnoreRemovable=#ignoreRemovable#

[MeasureDisk%1$sEject]
Measure=Plugin
Plugin=RunCommand
StartInFolder=#@#Addons\Sync
Parameter=sync -e %1$s:
Group=Disk%1$s | EjectButtons
Disabled=(#hideDisk%1$s# = 1) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

[MeasureDisk%1$sTemp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-SMART-Disk%1$sTemp-SensorId#
HWiNFOSensorInstance=#HWiNFO-SMART-Disk%1$sTemp-SensorInstance#
HWiNFOEntryId=#HWiNFO-SMART-Disk%1$sTemp-EntryId#
HWiNFOType=CurrentValue
Group=Disk%1$s | DiskTemps
Disabled=(#hideDisk%1$s# = 1) || (#showDiskTemps# = 0)

[MeasureDisk%1$sIdleTime]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=%% Idle Time
Name=%1$s:
Group=Disk%1$s
Disabled=#hideDisk%1$s#

[MeasureDisk%1$sRWTime]
Measure=Calc
Formula=100 - Clamp(MeasureDisk%1$sIdleTime,0,100)
MinValue=0
MaxValue=100
Group=Disk%1$s
Disabled=#hideDisk%1$s#

[MeasureDisk%1$sActivity]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Bytes/sec
Name=%1$s:
Group=Disk%1$s
Disabled=#hideDisk%1$s#

[MeasureDisk%1$sWrite]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Write Bytes/sec
IfCondition=1
IfTrueAction=[!SetVariable textDisk%1$sWrite [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk%1$sWrite:],[#fpfWriteDepth],'1k')"]]
OnChangeAction=[!SetVariable textDisk%1$sWrite [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk%1$sWrite:],[#fpfWriteDepth],'1k')"]]
Name=%1$s:
Group=Disk%1$s | Disk%1$sReadWrite
Disabled=#hideDisk%1$s#

[MeasureDisk%1$sRead]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Read Bytes/sec
IfCondition=1
IfTrueAction=[!SetVariable textDisk%1$sRead [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk%1$sRead:],[#fpfReadDepth],'1k')"]]
OnChangeAction=[!SetVariable textDisk%1$sRead [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk%1$sRead:],[#fpfReadDepth],'1k')"]]
Name=%1$s:
Group=Disk%1$s | Disk%1$sReadWrite
Disabled=#hideDisk%1$s#

[MeasureDisk%1$sSpaceUsed]
Measure=FreeDiskSpace
Drive=%1$s:
InvertMeasure=1
IgnoreRemovable=#ignoreRemovable#
IfCondition=1
IfTrueAction=[!SetVariable textDisk%1$sSpaceUsed [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk%1$sSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]]
OnChangeAction=[!SetVariable textDisk%1$sSpaceUsed [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk%1$sSpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]]
Group=Disk%1$s
Disabled=#hideDisk%1$s#

[MeasureDisk%1$sSpaceTotal]
Measure=FreeDiskSpace
Drive=%1$s:
Total=1
IgnoreRemovable=#ignoreRemovable#
IfCondition=1
IfTrueAction=[!SetVariable textDisk%1$sSpaceTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk%1$sSpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]]
OnChangeAction=[!SetVariable textDisk%1$sSpaceTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk%1$sSpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]]
IfCondition2=(MeasureDisk%1$sSpaceTotal > 0) && (#hideDisk%1$s# = 1)
IfTrueAction2=[!CommandMeasure MeasureDisksConfigScript "ConfigureDisk('%1\$s:', [MeasureDisk%1$sType:])"]
IfCondition3=(MeasureDisk%1$sSpaceTotal = 0) && (#hideDisk%1$s# = 0)
IfTrueAction3=[!CommandMeasure MeasureDisksConfigScript "ConfigureDisk('%1\$s:', 0)"]
DynamicVariables=1

[MeasureDisk%1$sSpaceUsage]
Measure=Calc
Formula=(MeasureDisk%1$sSpaceUsed / MeasureDisk%1$sSpaceTotal)
Group=Disk%1$s
Disabled=#hideDisk%1$s#

[MeasureDisk%1$sName]
Measure=FreeDiskSpace
Drive=%1$s:
Label=1
IgnoreRemovable=#ignoreRemovable#
Substitute="":"#unnamedDiskLabel#"
Group=Disk%1$s
Disabled=#hideDisk%1$s#

[Disk%1$sHistogram]
Meter=Histogram
MeasureName=MeasureDisk%1$sRWTime
PrimaryColor=#colorDisk%1$s#,#histogramAlpha#
X=r
Y=r
W=(#graphWidth# - 2)
H=(#graphHeight# - 2)
DynamicVariables=1
Hidden=(#showLineGraph# = 0) || (#showHistograms# = 0)
Group=LineGraph | Histograms
'

base2='
[GraphLines]
Meter=Line
MeterStyle=StyleLineGraph
X=r
Y=r
W=(#graphWidth# - 2)
H=(#graphHeight# - 2)
LineCount=26
DynamicVariables=1
Antialias=#lineGraphAa#
AutoScale=1
Hidden=(#showLineGraph# = 0)
Group=LineGraph
'

template2='MeasureName%1$d=MeasureDisk%2$sActivity
LineColor%1$d=#colorDisk%2$s#,((#hideDisk%2$s# = 1) ? 0 : 255)'

function output() {
	alphabet=({A..Z})
	cat Disks.template
	printf "${template1}" ${alphabet}
	printf "${base2}"
	for index in {1..26}; do
		printf "${template2}" ${index} ${alphabet[${index}]}
	done
}

output > Disks.ini
