[TopProcess1LabelString]
Meter=String
MeterStyle=StyleString | StyleStringProcessLabel
MeasureName=MeasureTopProcess1

[TopProcess1RamString]
Meter=String
MeterStyle=StyleString | StyleStringProcessRam
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureTopProcessRam1:],[#fpfProcessRamDepth],'1k')]B

[TopProcess1PercentageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringProcessPercentage
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureTopProcess1:],[#fpfProcessCpuDepth],'0')]%

;[TopProcess1ExpandButton]
;Meter=String
;MeterStyle=StyleString | StyleStringRightAlign
;FontFace=ElegantIcons
;FontColor=#colorProcess1#
;SolidColor=#colorBg#
;FontSize=12
;Y=-2r
;Text=[\x59]

[TopProcess1Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureTopProcess1
BarColor=#colorProcess1#

[TopProcess2LabelString]
Meter=String
MeterStyle=StyleString | StyleStringProcessLabel
MeasureName=MeasureTopProcess2

[TopProcess2RamString]
Meter=String
MeterStyle=StyleString | StyleStringProcessRam
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureTopProcessRam2:],[#fpfProcessRamDepth],'1k')]B

[TopProcess2PercentageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringProcessPercentage
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureTopProcess2:],[#fpfProcessCpuDepth],'0')]%

[TopProcess2Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureTopProcess2
BarColor=#colorProcess2#

[TopProcess3LabelString]
Meter=String
MeterStyle=StyleString | StyleStringProcessLabel
MeasureName=MeasureTopProcess3

[TopProcess3RamString]
Meter=String
MeterStyle=StyleString | StyleStringProcessRam
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureTopProcessRam3:],[#fpfProcessRamDepth],'1k')]B

[TopProcess3PercentageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringProcessPercentage
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureTopProcess3:],[#fpfProcessCpuDepth],'0')]%

[TopProcess3Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureTopProcess3
BarColor=#colorProcess3#

[TopProcess4LabelString]
Meter=String
MeterStyle=StyleString | StyleStringProcessLabel
MeasureName=MeasureTopProcess4

[TopProcess4RamString]
Meter=String
MeterStyle=StyleString | StyleStringProcessRam
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureTopProcessRam4:],[#fpfProcessRamDepth],'1k')]B

[TopProcess4PercentageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringProcessPercentage
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureTopProcess4:],[#fpfProcessCpuDepth],'0')]%

[TopProcess4Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureTopProcess4
BarColor=#colorProcess4#

[TopProcess5LabelString]
Meter=String
MeterStyle=StyleString | StyleStringProcessLabel
MeasureName=MeasureTopProcess5

[TopProcess5RamString]
Meter=String
MeterStyle=StyleString | StyleStringProcessRam
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureTopProcessRam5:],[#fpfProcessRamDepth],'1k')]B

[TopProcess5PercentageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringProcessPercentage
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureTopProcess5:],[#fpfProcessCpuDepth],'0')]%

[TopProcess5Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureTopProcess5
BarColor=#colorProcess5#