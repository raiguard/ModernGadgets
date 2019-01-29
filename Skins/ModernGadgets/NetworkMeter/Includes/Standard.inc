; Network In (Download)
[MeasureNetInEthernetBytes]
Measure=NetIn
Interface=#interfaceEthernet#
Group=NetInOut | MeasureEthernet
DynamicVariables=1

[MeasureNetInEthernetBytesTotal]
Measure=NetIn
Interface=#interfaceEthernet#
Cumulative=1
Group=NetInOut | MeasureEthernet
DynamicVariables=1

[MeasureNetInEthernetBytesSessionTotalBase]
Measure=Calc
Formula=MeasureNetInEthernetBytesTotal
UpdateDivider=-1
Group=NetInOut | MeasureEthernet | NetInOutBytesSessionTotalBase
DynamicVariables=1

[MeasureNetInEthernetBytesSessionTotal]
Measure=Calc
Formula=MeasureNetInEthernetBytesTotal - MeasureNetInEthernetBytesSessionTotalBase
Group=NetInOut | MeasureEthernet
DynamicVariables=1

[MeasureNetInWirelessBytes]
Measure=NetIn
Interface=#interfaceWireless#
Group=NetInOut | MeasureWireless
DynamicVariables=1

[MeasureNetInWirelessBytesTotal]
Measure=NetIn
Interface=#interfaceWireless#
Cumulative=1
Group=NetInOut | MeasureWireless
DynamicVariables=1

[MeasureNetInWirelessBytesSessionTotalBase]
Measure=Calc
Formula=MeasureNetInWirelessBytesTotal
UpdateDivider=-1
Group=NetInOut | MeasureWireless | NetInOutBytesSessionTotalBase
DynamicVariables=1

[MeasureNetInWirelessBytesSessionTotal]
Measure=Calc
Formula=MeasureNetInWirelessBytesTotal - MeasureNetInWirelessBytesSessionTotalBase
Group=NetInOut | MeasureWireless
DynamicVariables=1

[MeasureNetInOtherBytes]
Measure=NetIn
Interface=#interfaceOther#
Group=NetInOut | MeasureOther
DynamicVariables=1

[MeasureNetInOtherBytesTotal]
Measure=NetIn
Interface=#interfaceOther#
Cumulative=1
Group=NetInOut | MeasureOther
DynamicVariables=1

[MeasureNetInOtherBytesSessionTotalBase]
Measure=Calc
Formula=MeasureNetInOtherBytesTotal
UpdateDivider=-1
Group=NetInOut | MeasureOther | NetInOutBytesSessionTotalBase
DynamicVariables=1

[MeasureNetInOtherBytesSessionTotal]
Measure=Calc
Formula=MeasureNetInOtherBytesTotal - MeasureNetInOtherBytesSessionTotalBase
Group=NetInOut | MeasureOther
DynamicVariables=1

; Network Out (Upload)
[MeasureNetOutEthernetBytes]
Measure=NetOut
Interface=#interfaceEthernet#
Group=NetInOut | MeasureEthernet
DynamicVariables=1

[MeasureNetOutEthernetBytesTotal]
Measure=NetOut
Interface=#interfaceEthernet#
Cumulative=1
Group=NetInOut | MeasureEthernet
DynamicVariables=1

[MeasureNetOutEthernetBytesSessionTotalBase]
Measure=Calc
Formula=MeasureNetOutEthernetBytesTotal
UpdateDivider=-1
Group=NetInOut | MeasureEthernet | NetInOutBytesSessionTotalBase
DynamicVariables=1

[MeasureNetOutEthernetBytesSessionTotal]
Measure=Calc
Formula=MeasureNetOutEthernetBytesTotal - MeasureNetOutEthernetBytesSessionTotalBase
Group=NetInOut | MeasureEthernet
DynamicVariables=1

[MeasureNetOutWirelessBytes]
Measure=NetOut
Interface=#interfaceWireless#
Group=NetInOut | MeasureWireless
DynamicVariables=1

[MeasureNetOutWirelessBytesTotal]
Measure=NetOut
Interface=#interfaceWireless#
Cumulative=1
Group=NetInOut | MeasureWireless
DynamicVariables=1

[MeasureNetOutWirelessBytesSessionTotalBase]
Measure=Calc
Formula=MeasureNetOutWirelessBytesTotal
UpdateDivider=-1
Group=NetInOut | MeasureWireless | NetInOutBytesSessionTotalBase
DynamicVariables=1

[MeasureNetOutWirelessBytesSessionTotal]
Measure=Calc
Formula=MeasureNetOutWirelessBytesTotal - MeasureNetOutWirelessBytesSessionTotalBase
Group=NetInOut | MeasureWireless
DynamicVariables=1

[MeasureNetOutOtherBytes]
Measure=NetOut
Interface=#interfaceOther#
Group=NetInOut | MeasureOther
DynamicVariables=1

[MeasureNetOutOtherBytesTotal]
Measure=NetOut
Interface=#interfaceOther#
Cumulative=1
Group=NetInOut | MeasureOther
DynamicVariables=1

[MeasureNetOutOtherBytesSessionTotalBase]
Measure=Calc
Formula=MeasureNetOutOtherBytesTotal
UpdateDivider=-1
Group=NetInOut | MeasureOther | NetInOutBytesSessionTotalBase
DynamicVariables=1

[MeasureNetOutOtherBytesSessionTotal]
Measure=Calc
Formula=MeasureNetOutOtherBytesTotal - MeasureNetOutOtherBytesSessionTotalBase
Group=NetInOut | MeasureOther
DynamicVariables=1

; Calculations
[MeasureNetInBytes]
Measure=Calc
Formula=MeasureNetInEthernetBytes + MeasureNetInWirelessBytes + MeasureNetInOtherBytes
IfCondition=1
IfTrueAction=[!SetVariable textNetInBytes [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureNetInBytes],5,'1k')]]
OnChangeAction=[!SetVariable textNetInBytes [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureNetInBytes],5,'1k')]]
DynamicVariables=1

[MeasureNetInBitsCalc]
Measure=Calc
Formula=MeasureNetInBytes * 8
IfCondition=1
IfTrueAction=[!SetVariable textNetInBits [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureNetInBitsCalc],5,'1k')]]
OnChangeAction=[!SetVariable textNetInBits [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureNetInBitsCalc],5,'1k')]]
DynamicVariables=1

[MeasureNetInBytesSessionTotal]
Measure=Calc
Formula=MeasureNetInEthernetBytesSessionTotal + MeasureNetInWirelessBytesSessionTotal + MeasureNetInOtherBytesSessionTotal
IfCondition=1
IfTrueAction=[!SetVariable textNetInSessionTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureNetInBytesSessionTotal],6,'1k')]]
OnChangeAction=[!SetVariable textNetInSessionTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureNetInBytesSessionTotal],6,'1k')]]
DynamicVariables=1

[MeasureNetInBytesTotal]
Measure=Calc
Formula=MeasureNetInEthernetBytesTotal + MeasureNetInWirelessBytesTotal + MeasureNetInOtherBytesTotal
IfCondition=1
IfTrueAction=[!SetVariable textNetInTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureNetInBytesTotal],6,'1k')]]
OnChangeAction=[!SetVariable textNetInTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureNetInBytesTotal],6,'1k')]]
DynamicVariables=1

[MeasureNetOutBytes]
Measure=Calc
Formula=MeasureNetOutEthernetBytes + MeasureNetOutWirelessBytes + MeasureNetOutOtherBytes
IfCondition=1
IfTrueAction=[!SetVariable textNetOutBytes [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureNetOutBytes],5,'1k')]]
OnChangeAction=[!SetVariable textNetOutBytes [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureNetOutBytes],5,'1k')]]
DynamicVariables=1

[MeasureNetOutBitsCalc]
Measure=Calc
Formula=MeasureNetOutBytes * 8
IfCondition=1
IfTrueAction=[!SetVariable textNetOutBits [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureNetOutBitsCalc],5,'1k')]]
OnChangeAction=[!SetVariable textNetOutBits [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureNetOutBitsCalc],5,'1k')]]
DynamicVariables=1

[MeasureNetOutBytesSessionTotal]
Measure=Calc
Formula=MeasureNetOutEthernetBytesSessionTotal + MeasureNetOutWirelessBytesSessionTotal + MeasureNetOutOtherBytesSessionTotal
IfCondition=1
IfTrueAction=[!SetVariable textNetOutSessionTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureNetOutBytesSessionTotal],6,'1k')]]
OnChangeAction=[!SetVariable textNetOutSessionTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureNetOutBytesSessionTotal],6,'1k')]]
DynamicVariables=1

[MeasureNetOutBytesTotal]
Measure=Calc
Formula=MeasureNetOutEthernetBytesTotal + MeasureNetOutWirelessBytesTotal + MeasureNetOutOtherBytesTotal
IfCondition=1
IfTrueAction=[!SetVariable textNetOutTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureNetOutBytesTotal],6,'1k')]]
OnChangeAction=[!SetVariable textNetOutTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureNetOutBytesTotal],6,'1k')]]
DynamicVariables=1