; CPU METER COLOR CUSTOMIZATION

[ColorRamLabelString]
Meter=String
MeterStyle=StyleString | StyleStringColorPickerLabel
X=53
Text="RAM"

[ColorRamPicker]
Meter=Shape
MeterStyle=StyleColorPicker
MeterSpecific=Fill Color #colorRam#
LeftMouseUpAction=[#rainRgbPath# VarName=colorRam FileName=#cpuSettingsPath# RefreshConfig=#CURRENTCONFIG#]
RightMouseUpAction=[!SetVariable colorRam "#dColorRam#"][!WriteKeyValue Variables colorRam "#dColorRam#" "#cpuSettingsPath#"][!UpdateMeter ColorRamPicker][!Redraw]
ToolTipText=#colorRam#

[ColorPageLabelString]
Meter=String
MeterStyle=StyleString | StyleStringColorPickerLabel
Text="Page"

[ColorPagePicker]
Meter=Shape
MeterStyle=StyleColorPicker
MeterSpecific=Fill Color #colorPage#
LeftMouseUpAction=[#rainRgbPath# VarName=colorPage FileName=#cpuSettingsPath# RefreshConfig=#CURRENTCONFIG#]
RightMouseUpAction=[!SetVariable colorPage "#dColorPage#"][!WriteKeyValue Variables colorPage "#dColorPage#" "#cpuSettingsPath#"][!UpdateMeter ColorPagePicker][!Redraw]
ToolTipText=#colorPage#

[ColorAvgCpuLabelString]
Meter=String
MeterStyle=StyleString | StyleStringColorPickerLabel
Text="Avg."

[ColorAvgCpuPicker]
Meter=Shape
MeterStyle=StyleColorPicker
MeterSpecific=Fill Color #colorAvgCpu#
LeftMouseUpAction=[#rainRgbPath# VarName=colorAvgCpu FileName=#cpuSettingsPath# RefreshConfig=#CURRENTCONFIG#]
RightMouseUpAction=[!SetVariable colorAvgCpu "#dColorAvgCpu#"][!WriteKeyValue Variables colorAvgCpu "#dColorAvgCpu#" "#cpuSettingsPath#"][!UpdateMeter ColorAvgCpuPicker][!Redraw]
ToolTipText=#colorAvgCpu#

[ColorCore1LabelString]
Meter=String
MeterStyle=StyleString | StyleStringColorPickerLabel
Text="Core 1"

[ColorCore1Picker]
Meter=Shape
MeterStyle=StyleColorPicker
MeterSpecific=Fill Color #colorCore1#
LeftMouseUpAction=[#rainRgbPath# VarName=colorCore1 FileName=#cpuSettingsPath# RefreshConfig=#CURRENTCONFIG#]
RightMouseUpAction=[!SetVariable colorCore1 "#dColorCore1#"][!WriteKeyValue Variables colorCore1 "#dColorCore1#" "#cpuSettingsPath#"][!UpdateMeter ColorCore1Picker][!Redraw]
ToolTipText=#colorCore1#

[ColorCore2LabelString]
Meter=String
MeterStyle=StyleString | StyleStringColorPickerLabel
Text="Core 2"

[ColorCore2Picker]
Meter=Shape
MeterStyle=StyleColorPicker
MeterSpecific=Fill Color #colorCore2#
LeftMouseUpAction=[#rainRgbPath# VarName=colorCore2 FileName=#cpuSettingsPath# RefreshConfig=#CURRENTCONFIG#]
RightMouseUpAction=[!SetVariable colorCore2 "#dColorCore2#"][!WriteKeyValue Variables colorCore2 "#dColorCore2#" "#cpuSettingsPath#"][!UpdateMeter ColorCore2Picker][!Redraw]
ToolTipText=#colorCore2#

[ColorCore3LabelString]
Meter=String
MeterStyle=StyleString | StyleStringColorPickerLabel
Text="Core 3"

[ColorCore3Picker]
Meter=Shape
MeterStyle=StyleColorPicker
MeterSpecific=Fill Color #colorCore3#
LeftMouseUpAction=[#rainRgbPath# VarName=colorCore3 FileName=#cpuSettingsPath# RefreshConfig=#CURRENTCONFIG#]
RightMouseUpAction=[!SetVariable colorCore3 "#dColorCore3#"][!WriteKeyValue Variables colorCore3 "#dColorCore3#" "#cpuSettingsPath#"][!UpdateMeter ColorCore3Picker][!Redraw]
ToolTipText=#colorCore3#

[ColorCore4LabelString]
Meter=String
MeterStyle=StyleString | StyleStringColorPickerLabel
Text="Core 4"

[ColorCore4Picker]
Meter=Shape
MeterStyle=StyleColorPicker
MeterSpecific=Fill Color #colorCore4#
LeftMouseUpAction=[#rainRgbPath# VarName=colorCore4 FileName=#cpuSettingsPath# RefreshConfig=#CURRENTCONFIG#]
RightMouseUpAction=[!SetVariable colorCore4 "#dColorCore4#"][!WriteKeyValue Variables colorCore4 "#dColorCore4#" "#cpuSettingsPath#"][!UpdateMeter ColorCore4Picker][!Redraw]
ToolTipText=#colorCore4#

[ColorCore5LabelString]
Meter=String
MeterStyle=StyleString | StyleStringColorPickerLabel
X=#labelOffset#R
Y=[ColorRamLabelString:Y]
Text="Core 5"
DynamicVariables=1

[ColorCore5Picker]
Meter=Shape
MeterStyle=StyleColorPicker
MeterSpecific=Fill Color #colorCore5#
LeftMouseUpAction=[#rainRgbPath# VarName=colorCore5 FileName=#cpuSettingsPath# RefreshConfig=#CURRENTCONFIG#]
RightMouseUpAction=[!SetVariable colorCore5 "#dColorCore5#"][!WriteKeyValue Variables colorCore5 "#dColorCore5#" "#cpuSettingsPath#"][!UpdateMeter ColorCore5Picker][!Redraw]
ToolTipText=#colorCore5#

[ColorCore6LabelString]
Meter=String
MeterStyle=StyleString | StyleStringColorPickerLabel
Text="Core 6"

[ColorCore6Picker]
Meter=Shape
MeterStyle=StyleColorPicker
MeterSpecific=Fill Color #colorCore6#
LeftMouseUpAction=[#rainRgbPath# VarName=colorCore6 FileName=#cpuSettingsPath# RefreshConfig=#CURRENTCONFIG#]
RightMouseUpAction=[!SetVariable colorCore6 "#dColorCore6#"][!WriteKeyValue Variables colorCore6 "#dColorCore6#" "#cpuSettingsPath#"][!UpdateMeter ColorCore6Picker][!Redraw]
ToolTipText=#colorCore6#

[ColorCore7LabelString]
Meter=String
MeterStyle=StyleString | StyleStringColorPickerLabel
Text="Core 7"

[ColorCore7Picker]
Meter=Shape
MeterStyle=StyleColorPicker
MeterSpecific=Fill Color #colorCore7#
LeftMouseUpAction=[#rainRgbPath# VarName=colorCore7 FileName=#cpuSettingsPath# RefreshConfig=#CURRENTCONFIG#]
RightMouseUpAction=[!SetVariable colorCore7 "#dColorCore7#"][!WriteKeyValue Variables colorCore7 "#dColorCore7#" "#cpuSettingsPath#"][!UpdateMeter ColorCore7Picker][!Redraw]
ToolTipText=#colorCore7#

[ColorCore8LabelString]
Meter=String
MeterStyle=StyleString | StyleStringColorPickerLabel
Text="Core 8"

[ColorCore8Picker]
Meter=Shape
MeterStyle=StyleColorPicker
MeterSpecific=Fill Color #colorCore8#
LeftMouseUpAction=[#rainRgbPath# VarName=colorCore8 FileName=#cpuSettingsPath# RefreshConfig=#CURRENTCONFIG#]
RightMouseUpAction=[!SetVariable colorCore8 "#dColorCore8#"][!WriteKeyValue Variables colorCore8 "#dColorCore8#" "#cpuSettingsPath#"][!UpdateMeter ColorCore8Picker][!Redraw]
ToolTipText=#colorCore8#

[ColorCore9LabelString]
Meter=String
MeterStyle=StyleString | StyleStringColorPickerLabel
Text="Core 9"

[ColorCore9Picker]
Meter=Shape
MeterStyle=StyleColorPicker
MeterSpecific=Fill Color #colorCore9#
LeftMouseUpAction=[#rainRgbPath# VarName=colorCore9 FileName=#cpuSettingsPath# RefreshConfig=#CURRENTCONFIG#]
RightMouseUpAction=[!SetVariable colorCore9 "#dColorCore9#"][!WriteKeyValue Variables colorCore9 "#dColorCore9#" "#cpuSettingsPath#"][!UpdateMeter ColorCore9Picker][!Redraw]
ToolTipText=#colorCore9#

[ColorCore10LabelString]
Meter=String
MeterStyle=StyleString | StyleStringColorPickerLabel
Text="Core 10"

[ColorCore10Picker]
Meter=Shape
MeterStyle=StyleColorPicker
MeterSpecific=Fill Color #colorCore10#
LeftMouseUpAction=[#rainRgbPath# VarName=colorCore10 FileName=#cpuSettingsPath# RefreshConfig=#CURRENTCONFIG#]
RightMouseUpAction=[!SetVariable colorCore10 "#dColorCore10#"][!WriteKeyValue Variables colorCore10 "#dColorCore10#" "#cpuSettingsPath#"][!UpdateMeter ColorCore10Picker][!Redraw]
ToolTipText=#colorCore10#

[ColorCore11LabelString]
Meter=String
MeterStyle=StyleString | StyleStringColorPickerLabel
Text="Core 11"

[ColorCore11Picker]
Meter=Shape
MeterStyle=StyleColorPicker
MeterSpecific=Fill Color #colorCore11#
LeftMouseUpAction=[#rainRgbPath# VarName=colorCore11 FileName=#cpuSettingsPath# RefreshConfig=#CURRENTCONFIG#]
RightMouseUpAction=[!SetVariable colorCore11 "#dColorCore11#"][!WriteKeyValue Variables colorCore11 "#dColorCore11#" "#cpuSettingsPath#"][!UpdateMeter ColorCore11Picker][!Redraw]
ToolTipText=#colorCore11#

[ColorCore12LabelString]
Meter=String
MeterStyle=StyleString | StyleStringColorPickerLabel
Text="Core 12"

[ColorCore12Picker]
Meter=Shape
MeterStyle=StyleColorPicker
MeterSpecific=Fill Color #colorCore12#
LeftMouseUpAction=[#rainRgbPath# VarName=colorCore12 FileName=#cpuSettingsPath# RefreshConfig=#CURRENTCONFIG#]
RightMouseUpAction=[!SetVariable colorCore12 "#dColorCore12#"][!WriteKeyValue Variables colorCore12 "#dColorCore12#" "#cpuSettingsPath#"][!UpdateMeter ColorCore12Picker][!Redraw]
ToolTipText=#colorCore12#

[ColorCore13LabelString]
Meter=String
MeterStyle=StyleString | StyleStringColorPickerLabel
X=#labelOffset#R
Y=[ColorRamLabelString:Y]
Text="Core 13"
DynamicVariables=1

[ColorCore13Picker]
Meter=Shape
MeterStyle=StyleColorPicker
MeterSpecific=Fill Color #colorCore13#
LeftMouseUpAction=[#rainRgbPath# VarName=colorCore13 FileName=#cpuSettingsPath# RefreshConfig=#CURRENTCONFIG#]
RightMouseUpAction=[!SetVariable colorCore13 "#dColorCore13#"][!WriteKeyValue Variables colorCore13 "#dColorCore13#" "#cpuSettingsPath#"][!UpdateMeter ColorCore13Picker][!Redraw]
ToolTipText=#colorCore13#

[ColorCore14LabelString]
Meter=String
MeterStyle=StyleString | StyleStringColorPickerLabel
Text="Core 14"

[ColorCore14Picker]
Meter=Shape
MeterStyle=StyleColorPicker
MeterSpecific=Fill Color #colorCore14#
LeftMouseUpAction=[#rainRgbPath# VarName=colorCore14 FileName=#cpuSettingsPath# RefreshConfig=#CURRENTCONFIG#]
RightMouseUpAction=[!SetVariable colorCore14 "#dColorCore14#"][!WriteKeyValue Variables colorCore14 "#dColorCore14#" "#cpuSettingsPath#"][!UpdateMeter ColorCore14Picker][!Redraw]
ToolTipText=#colorCore14#

[ColorCore15LabelString]
Meter=String
MeterStyle=StyleString | StyleStringColorPickerLabel
Text="Core 15"

[ColorCore15Picker]
Meter=Shape
MeterStyle=StyleColorPicker
MeterSpecific=Fill Color #colorCore15#
LeftMouseUpAction=[#rainRgbPath# VarName=colorCore15 FileName=#cpuSettingsPath# RefreshConfig=#CURRENTCONFIG#]
RightMouseUpAction=[!SetVariable colorCore15 "#dColorCore15#"][!WriteKeyValue Variables colorCore15 "#dColorCore15#" "#cpuSettingsPath#"][!UpdateMeter ColorCore15Picker][!Redraw]
ToolTipText=#colorCore15#

[ColorCore16LabelString]
Meter=String
MeterStyle=StyleString | StyleStringColorPickerLabel
Text="Core 16"

[ColorCore16Picker]
Meter=Shape
MeterStyle=StyleColorPicker
MeterSpecific=Fill Color #colorCore16#
LeftMouseUpAction=[#rainRgbPath# VarName=colorCore16 FileName=#cpuSettingsPath# RefreshConfig=#CURRENTCONFIG#]
RightMouseUpAction=[!SetVariable colorCore16 "#dColorCore16#"][!WriteKeyValue Variables colorCore16 "#dColorCore16#" "#cpuSettingsPath#"][!UpdateMeter ColorCore16Picker][!Redraw]
ToolTipText=#colorCore16#

[ColorCore17LabelString]
Meter=String
MeterStyle=StyleString | StyleStringColorPickerLabel
Text="Core 17"

[ColorCore17Picker]
Meter=Shape
MeterStyle=StyleColorPicker
MeterSpecific=Fill Color #colorCore17#
LeftMouseUpAction=[#rainRgbPath# VarName=colorCore17 FileName=#cpuSettingsPath# RefreshConfig=#CURRENTCONFIG#]
RightMouseUpAction=[!SetVariable colorCore17 "#dColorCore17#"][!WriteKeyValue Variables colorCore17 "#dColorCore17#" "#cpuSettingsPath#"][!UpdateMeter ColorCore17Picker][!Redraw]
ToolTipText=#colorCore17#

[ColorCore18LabelString]
Meter=String
MeterStyle=StyleString | StyleStringColorPickerLabel
Text="Core 18"

[ColorCore18Picker]
Meter=Shape
MeterStyle=StyleColorPicker
MeterSpecific=Fill Color #colorCore18#
LeftMouseUpAction=[#rainRgbPath# VarName=colorCore18 FileName=#cpuSettingsPath# RefreshConfig=#CURRENTCONFIG#]
RightMouseUpAction=[!SetVariable colorCore18 "#dColorCore18#"][!WriteKeyValue Variables colorCore18 "#dColorCore18#" "#cpuSettingsPath#"][!UpdateMeter ColorCore18Picker][!Redraw]
ToolTipText=#colorCore18#

[ColorCore19LabelString]
Meter=String
MeterStyle=StyleString | StyleStringColorPickerLabel
Text="Core 19"

[ColorCore19Picker]
Meter=Shape
MeterStyle=StyleColorPicker
MeterSpecific=Fill Color #colorCore19#
LeftMouseUpAction=[#rainRgbPath# VarName=colorCore19 FileName=#cpuSettingsPath# RefreshConfig=#CURRENTCONFIG#]
RightMouseUpAction=[!SetVariable colorCore19 "#dColorCore19#"][!WriteKeyValue Variables colorCore19 "#dColorCore19#" "#cpuSettingsPath#"][!UpdateMeter ColorCore19Picker][!Redraw]
ToolTipText=#colorCore19#

[ColorCore20LabelString]
Meter=String
MeterStyle=StyleString | StyleStringColorPickerLabel
Text="Core 20"

[ColorCore20Picker]
Meter=Shape
MeterStyle=StyleColorPicker
MeterSpecific=Fill Color #colorCore20#
LeftMouseUpAction=[#rainRgbPath# VarName=colorCore20 FileName=#cpuSettingsPath# RefreshConfig=#CURRENTCONFIG#]
RightMouseUpAction=[!SetVariable colorCore20 "#dColorCore20#"][!WriteKeyValue Variables colorCore20 "#dColorCore20#" "#cpuSettingsPath#"][!UpdateMeter ColorCore20Picker][!Redraw]
ToolTipText=#colorCore20#
