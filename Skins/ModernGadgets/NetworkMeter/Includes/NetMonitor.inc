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

[MeasureNetInBestBytes]
Measure=Registry
RegHKey=HKEY_LOCAL_MACHINE
RegKey=Software\Gadgets\NetMonitor\[MeasureBestAdapterName]
RegValue=BytesPerSecIn
Group=NetInOut | MeasureBest
DynamicVariables=1
Disabled=1

[MeasureNetInBestBytesSessionTotal]
Measure=Registry
RegHKey=HKEY_LOCAL_MACHINE
RegKey=Software\Gadgets\NetMonitor\[MeasureBestAdapterName]
RegValue=SessionBytesIn
Group=NetInOut | MeasureBest
DynamicVariables=1
Disabled=1

[MeasureNetInBestBytesTotal]
Measure=Registry
RegHKey=HKEY_LOCAL_MACHINE
RegKey=Software\Gadgets\NetMonitor\[MeasureBestAdapterName]
RegValue=TotalBytesIn
Group=NetInOut | MeasureBest
DynamicVariables=1
Disabled=1

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

[MeasureNetOutBestBytes]
Measure=Registry
RegHKey=HKEY_LOCAL_MACHINE
RegKey=Software\Gadgets\NetMonitor\[MeasureBestAdapterName]
RegValue=BytesPerSecOut
Group=NetInOut | MeasureBest
DynamicVariables=1
Disabled=1

[MeasureNetOutBestBytesSessionTotal]
Measure=Registry
RegHKey=HKEY_LOCAL_MACHINE
RegKey=Software\Gadgets\NetMonitor\[MeasureBestAdapterName]
RegValue=SessionBytesOut
Group=NetInOut | MeasureBest
DynamicVariables=1
Disabled=1

[MeasureNetOutBestBytesTotal]
Measure=Registry
RegHKey=HKEY_LOCAL_MACHINE
RegKey=Software\Gadgets\NetMonitor\[MeasureBestAdapterName]
RegValue=TotalBytesOut
Group=NetInOut | MeasureBest
DynamicVariables=1
Disabled=1