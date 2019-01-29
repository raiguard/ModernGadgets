; Network In (Download)
[MeasureNetInEthernetBytes]
Measure=Registry
RegHKey=HKEY_LOCAL_MACHINE
RegKey=Software\Gadgets\NetMonitor\#interfaceEthernet#
RegValue=BytesPerSecIn
Group=NetInOut | MeasureEthernet
DynamicVariables=1

[MeasureNetInEthernetBytesSessionTotal]
Measure=Registry
RegHKey=HKEY_LOCAL_MACHINE
RegKey=Software\Gadgets\NetMonitor\#interfaceEthernet#
RegValue=SessionBytesIn
Group=NetInOut | MeasureEthernet
DynamicVariables=1

[MeasureNetInEthernetBytesTotal]
Measure=Registry
RegHKey=HKEY_LOCAL_MACHINE
RegKey=Software\Gadgets\NetMonitor\#interfaceEthernet#
RegValue=TotalBytesIn
Group=NetInOut | MeasureEthernet
DynamicVariables=1

[MeasureNetInWirelessBytes]
Measure=Registry
RegHKey=HKEY_LOCAL_MACHINE
RegKey=Software\Gadgets\NetMonitor\#interfaceWireless#
RegValue=BytesPerSecIn
Group=NetInOut | MeasureWireless
DynamicVariables=1

[MeasureNetInWirelessBytesSessionTotal]
Measure=Registry
RegHKey=HKEY_LOCAL_MACHINE
RegKey=Software\Gadgets\NetMonitor\#interfaceWireless#
RegValue=SessionBytesIn
Group=NetInOut | MeasureWireless
DynamicVariables=1

[MeasureNetInWirelessBytesTotal]
Measure=Registry
RegHKey=HKEY_LOCAL_MACHINE
RegKey=Software\Gadgets\NetMonitor\#interfaceWireless#
RegValue=TotalBytesIn
Group=NetInOut | MeasureWireless
DynamicVariables=1

[MeasureNetInOtherBytes]
Measure=Registry
RegHKey=HKEY_LOCAL_MACHINE
RegKey=Software\Gadgets\NetMonitor\#interfaceOther#
RegValue=BytesPerSecIn
Group=NetInOut | MeasureOther
DynamicVariables=1

[MeasureNetInOtherBytesSessionTotal]
Measure=Registry
RegHKey=HKEY_LOCAL_MACHINE
RegKey=Software\Gadgets\NetMonitor\#interfaceOther#
RegValue=SessionBytesIn
Group=NetInOut | MeasureOther
DynamicVariables=1

[MeasureNetInOtherBytesTotal]
Measure=Registry
RegHKey=HKEY_LOCAL_MACHINE
RegKey=Software\Gadgets\NetMonitor\#interfaceOther#
RegValue=TotalBytesIn
Group=NetInOut | MeasureOther
DynamicVariables=1

; Network Out (Upload)
[MeasureNetOutEthernetBytes]
Measure=Registry
RegHKey=HKEY_LOCAL_MACHINE
RegKey=Software\Gadgets\NetMonitor\#interfaceEthernet#
RegValue=BytesPerSecOut
Group=NetInOut | MeasureEthernet
DynamicVariables=1

[MeasureNetOutEthernetBytesSessionTotal]
Measure=Registry
RegHKey=HKEY_LOCAL_MACHINE
RegKey=Software\Gadgets\NetMonitor\#interfaceEthernet#
RegValue=SessionBytesOut
Group=NetInOut | MeasureEthernet
DynamicVariables=1

[MeasureNetOutEthernetBytesTotal]
Measure=Registry
RegHKey=HKEY_LOCAL_MACHINE
RegKey=Software\Gadgets\NetMonitor\#interfaceEthernet#
RegValue=TotalBytesOut
Group=NetInOut | MeasureEthernet
DynamicVariables=1

[MeasureNetOutWirelessBytes]
Measure=Registry
RegHKey=HKEY_LOCAL_MACHINE
RegKey=Software\Gadgets\NetMonitor\#interfaceWireless#
RegValue=BytesPerSecOut
Group=NetInOut | MeasureWireless
DynamicVariables=1

[MeasureNetOutWirelessBytesSessionTotal]
Measure=Registry
RegHKey=HKEY_LOCAL_MACHINE
RegKey=Software\Gadgets\NetMonitor\#interfaceWireless#
RegValue=SessionBytesOut
Group=NetInOut | MeasureWireless
DynamicVariables=1

[MeasureNetOutWirelessBytesTotal]
Measure=Registry
RegHKey=HKEY_LOCAL_MACHINE
RegKey=Software\Gadgets\NetMonitor\#interfaceWireless#
RegValue=TotalBytesOut
Group=NetInOut | MeasureWireless
DynamicVariables=1

[MeasureNetOutOtherBytes]
Measure=Registry
RegHKey=HKEY_LOCAL_MACHINE
RegKey=Software\Gadgets\NetMonitor\#interfaceOther#
RegValue=BytesPerSecOut
Group=NetInOut | MeasureOther
DynamicVariables=1

[MeasureNetOutOtherBytesSessionTotal]
Measure=Registry
RegHKey=HKEY_LOCAL_MACHINE
RegKey=Software\Gadgets\NetMonitor\#interfaceOther#
RegValue=SessionBytesOut
Group=NetInOut | MeasureOther
DynamicVariables=1

[MeasureNetOutOtherBytesTotal]
Measure=Registry
RegHKey=HKEY_LOCAL_MACHINE
RegKey=Software\Gadgets\NetMonitor\#interfaceOther#
RegValue=TotalBytesOut
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