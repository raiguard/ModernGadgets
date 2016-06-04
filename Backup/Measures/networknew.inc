; MODERNGADGETS NETWORK MEASURES

[MeasureFixedPrecisionFormatScript]
Measure=Script
ScriptFile=#@#Scripts\FixedPrecisionFormat.lua

; ----- Adapter Configuration -----

[MeasureCheckAdapterConfig1]
Measure=Calc
IfCondition=(#interfaceEthernet# < 1)
IfTrueAction=[!SetVariable interfaceEthernet 0]
IfCondition2=(#interfaceWireless# < 1)
IfTrueAction2=[!SetVariable interfaceWireless 0]
IfCondition3=(#interfaceBroadband# < 1)
IfTrueAction3=[!SetVariable interfaceBroadband 0]
UpdateDivider=-1

[MeasureCheckAdapterConfig2]
Measure=Calc
IfCondition=(#interfaceEthernet > 0)
IfTrueAction=[!SetVariable disableEthernet 0]
IfCondition2=
UpdateDivider=-1
DynamicVariables=1
