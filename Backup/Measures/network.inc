; NETWORK MEASURES

[MeasureFixedPrecisionFormatScript]
Measure=Script
ScriptFile=#SKINSPATH#CoreMeter\@Resources\Scripts\FixedPrecisionFormat.lua

[CheckAdapterConfig1]
Measure=Calc
UpdateDivider=-1
IfCondition=(#interfaceEthernet# < 1)
IfTrueAction=[!SetVariable interfaceEthernet 0]
IfCondition2=(#interfaceWireless# < 1)
IfTrueAction2=[!SetVariable interfaceWireless 0]
IfCondition3=(#interfaceBroadband# < 1)
IfTrueAction3=[!SetVariable interfaceBroadband 0]

[CheckAdapterConfig2]
Measure=Calc
UpdateDivider=-1
DynamicVariables=1

; default configuration, measure all interfaces (enable one interface, disable others to prevent duplication)
; NOTE:  Having any connected virtualized interfaces will result in incorrect measurements by Rainmeter.
IfCondition=((#interfaceEthernet# = 0) && (#interfaceWireless# = 0) && (#interfaceBroadband# = 0))
IfTrueAction=[!SetVariable disableEthernet 0][!SetVariable disableWireless 1][!SetVariable disableBroadband 1]

; measure ethernet only
IfCondition2=((#interfaceEthernet# > 0) && (#interfaceWireless# = 0) && (#interfaceBroadband# = 0))
IfTrueAction2=[!SetVariable disableEthernet 0][!SetVariable disableWireless 1][!SetVariable disableBroadband 1]

; measure wireless only
IfCondition3=((#interfaceEthernet# = 0) && (#interfaceWireless# > 0) && (#interfaceBroadband# = 0))
IfTrueAction3=[!SetVariable disableEthernet 1][!SetVariable disableWireless 0][!SetVariable disableBroadband 1]

; measure broadband only
IfCondition4=((#interfaceEthernet# = 0) && (#interfaceWireless# = 0) && (#interfaceBroadband# > 0))
IfTrueAction4=[!SetVariable disableEthernet 1][!SetVariable disableWireless 1][!SetVariable disableBroadband 0]

; measure ethernet + wireless
IfCondition5=((#interfaceEthernet# > 0) && (#interfaceWireless# > 0) && (#interfaceBroadband# = 0))
IfTrueAction5=[!SetVariable disableEthernet 0][!SetVariable disableWireless 0][!SetVariable disableBroadband 1]

; measure ethernet + broadband
IfCondition6=((#interfaceEthernet# > 0) && (#interfaceWireless# = 0) && (#interfaceBroadband# > 0))
IfTrueAction6=[!SetVariable disableEthernet 0][!SetVariable disableWireless 1][!SetVariable disableBroadband 0]

; measure wireless + broadband
IfCondition7=((#interfaceEthernet# = 0) && (#interfaceWireless# > 0) && (#interfaceBroadband# > 0))
IfTrueAction7=[!SetVariable disableEthernet 1][!SetVariable disableWireless 0][!SetVariable disableBroadband 0]

; measure ethernet + wireless + broadband
IfCondition8=((#interfaceEthernet# > 0) && (#interfaceWireless# > 0) && (#interfaceBroadband# > 0))
IfTrueAction8=[!SetVariable disableEthernet 0][!SetVariable disableWireless 0][!SetVariable disableBroadband 0]

; ## NETWORK IN ##
[NetInEthernet]
Measure=NetIn
Interface=#interfaceEthernet#
Disabled=#disableEthernet#
DynamicVariables=1

[NetInEthernetTotal]
Measure=NetIn
Interface=#interfaceEthernet#
Cumulative=1
Disabled=#disableEthernet#
DynamicVariables=1

[NetInWireless]
Measure=NetIn
Interface=#interfaceWireless#
Disabled=#disableWireless#
DynamicVariables=1

[NetInWirelessTotal]
Measure=NetIn
Interface=#InterfaceWireless#
Cumulative=1
Disabled=#disableWireless#
DynamicVariables=1

[NetInBroadband]
Measure=NetIn
Interface=#interfaceBroadband#
Disabled=#disableBroadband#
DynamicVariables=1

[NetInBroadbandTotal]
Measure=NetIn
Interface=#interfaceBroadband#
Cumulative=1
Disabled=#disableBroadband#
DynamicVariables=1

[NetIn]
Measure=Calc
Formula=NetInEthernet + NetInWireless + NetInBroadband
IfAboveValue=0
IfAboveAction=[!SetVariable dataIsInbound 1]
IfBelowValue=1
IfBelowAction=[!SetVariable dataIsInbound 0]
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([NetIn], 4, '1k', 'textNetIn')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([NetIn], 4, '1k', 'textNetIn')"]

[NetInBytesTotal]
Measure=Calc
Formula=NetInEthernetTotal + NetInWirelessTotal + NetInBroadbandTotal
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([NetInBytesTotal], 5, '1k', 'textNetInBytesTotal')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([NetInBytesTotal], 5, '1k', 'textNetInBytesTotal')"]

[NetInBytesBase]
Measure=Calc
Formula=NetInEthernetTotal + NetInWirelessTotal + NetInBroadbandTotal
UpdateDivider=-1

[NetInBytesCurrent]
Measure=Calc
Formula=NetInBytesTotal - NetInBytesBase
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([NetInBytesCurrent], 5, '1k', 'textNetInBytesCurrent')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([NetInBytesCurrent], 5, '1k', 'textNetInBytesCurrent')"]

[NetInBits]
Measure=Calc
Formula=NetIn * 8
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([NetInBits], 4, '1k', 'textNetInBits')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([NetInBits], 4, '1k', 'textNetInBits')"]

; ## NETWORK OUT ##
[NetOutEthernet]
Measure=NetOut
Interface=#InterfaceEthernet#
Disabled=#DisableEthernet#
DynamicVariables=1

[NetOutEthernetTotal]
Measure=NetOut
Interface=#InterfaceEthernet#
Cumulative=1
Disabled=#DisableEthernet#
DynamicVariables=1

[NetOutWireless]
Measure=NetOut
Interface=#InterfaceWireless#
Disabled=#DisableWireless#
DynamicVariables=1

[NetOutWirelessTotal]
Measure=NetOut
Interface=#InterfaceWireless#
Cumulative=1
Disabled=#DisableWireless#
DynamicVariables=1

[NetOutBroadband]
Measure=NetOut
Interface=#InterfaceBroadband#
Disabled=#DisableBroadband#
DynamicVariables=1

[NetOutBroadbandTotal]
Measure=NetOut
Interface=#InterfaceBroadband#
Cumulative=1
Disabled=#DisableBroadband#
DynamicVariables=1

[NetOut]
Measure=Calc
Formula=NetOutEthernet + NetOutWireless + NetOutBroadband
IfAboveValue=0
IfAboveAction=[!SetVariable DataIsOutbound 1]
IfBelowValue=1
IfBelowAction=[!SetVariable DataIsOutbound 0]
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([NetOut], 4, '1k', 'textNetOut')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([NetOut], 4, '1k', 'textNetOut')"]

[NetOutBytesTotal]
Measure=Calc
Formula=NetOutEthernetTotal + NetOutWirelessTotal + NetOutBroadbandTotal
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([NetOutBytesTotal], 5, '1k', 'textNetOutBytesTotal')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([NetOutBytesTotal], 5, '1k', 'textNetOutBytesTotal')"]

[NetOutBytesBase]
Measure=Calc
Formula=NetOutEthernetTotal + NetOutWirelessTotal + NetOutBroadbandTotal
UpdateDivider=-1

[NetOutBytesCurrent]
Measure=Calc
Formula=NetOutBytesTotal - NetOutBytesBase
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([NetOutBytesCurrent], 5, '1k', 'textNetOutBytesCurrent')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([NetOutBytesCurrent], 5, '1k', 'textNetOutBytesCurrent')"]

[NetOutBits]
Measure=Calc
Formula=NetOut * 8
IfCondition=1
IfTrueAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([NetOutBits], 4, '1k', 'textNetOutBits')"]
OnChangeAction=[!CommandMeasure MeasureFixedPrecisionFormatScript "FormatNumber([NetOutBits], 4, '1k', 'textNetOutBits')"]

; ## MAX TRANSFER SPEED ##
[MaxBytesPerSec]
Measure=Calc
Formula=Max(Max(NetIn, NetOut), #maxBytesPerSec#)
OnChangeAction=[!SetVariable MaxBytesPerSec ([MaxBytesPerSec])]
DynamicVariables=1

[MaxBitsPerSec]
Measure=Calc
Formula=(#maxBytesPerSec# * 8)
DynamicVariables=1

; ## IP ADDRESSES ##
[IPLan]
Measure=Plugin
Plugin=SysInfo
SysInfoType=IP_ADDRESS
SysInfoData=Best
DynamicVariables=1

[IPWeb]
Measure=Plugin
Plugin=WebParser
Url=https://secure.internode.on.net/webtools/showmyip?textonly=1
RegExp="(.*)"
StringIndex=1
ForceReload=1
UpdateRate=-1
OnChangeAction=[!SetOption MeterExternalIPValueMouseRegion LeftMouseUpAction "http://addgadgets.com/ipaddress/index.php?ipaddr=[MeasureIPWeb]"]
;
; NOTE:  Websites that can be used for obtaining your external IP address:
;
;   Url=https://secure.internode.on.net/webtools/showmyip?textonly=1  RegExp="(.*)"
;   Url=http://checkip.dyndns.org                                     RegExp="(?siU)Address: (.*)</body>"
;   Url=http://ipdetect.dnspark.com                                   RegExp="(?siU)Address: (.*)</body>"

; ## ACTIVE ADAPTER ##
[AdapterName]
Measure=Plugin
Plugin=SysInfo
SysInfoType=ADAPTER_DESCRIPTION
SysInfoDat=Best
DynamicVariables=1
OnChangeAction=[!Log "Network adapter changed, refreshing ActiveNet info" Notice][!SetOption AdapterType Reload 0][!SetOption AdapterTypeID Reload 0][!SetOption InterfaceName Reload 0][!SetOption InterfaceID Reload 0]
;
; IMPORTANT:
;  The measure above is required to get the active adapter name, which is used as input to the
;  ActiveNet plugin measures.
;

[AdapterType]
Measure=Plugin
Plugin=ActiveNet
Type=AdapterType
Name=[AdapterName]
;
; For a list of adapter types, see:
;   https://msdn.microsoft.com/en-us/library/system.net.networkinformation.networkinterfacetype(v=vs.110).aspx
;   https://github.com/Microsoft/referencesource/blob/master/System/net/System/Net/NetworkInformation/interfacetype.cs
;
; The Rainmeter debug log will list type and numeric value (this is an example only):
;
;   DBUG (00:00:00.062) : 1: Intel(R) 82579LM Gigabit Network Connection
;   DBUG (00:00:00.062) :   Alias: Local Area Connection
;   DBUG (00:00:00.062) :   Type=Ethernet(6), Hardware=Yes, Filter=No
;   DBUG (00:00:00.078) : 2 : Intel(R) Centrino(R) Ultimate-N 6300 AGN
;   DBUG (00:00:00.078) :   Alias: Wireless Network Connection
;   DBUG (00:00:00.078) :   Type=IEEE802.11(71), Hardware=Yes, Filter=No
;   DBUG (00:00:00.093) : 3: PANTECH UML290 Mobile Broadband
;   DBUG (00:00:00.093) :   Alias: Mobile Broadband Connection
;   DBUG (00:00:00.093) :   Type=Other(243), Hardware=Yes, Filter=No
;
; Common adapter type values:
;
;   AdapterType   AdapterTypeID Remarks
;   ------------- ------------- -----------------------------------------
;   Ethernet      6
;   Wireless80211 71            Wireless 802.11 (all types)
;   Wwanpp        243           Mobile broadband (GSM)
;   Wwanpp2       244           Mobile broadband (CDMA)
;

[AdapterTypeID]
Measure=Plugin
Plugin=ActiveNet
Type=AdapterTypeID
Name=[AdapterName]

[InterfaceName]
Measure=Plugin
Plugin=ActiveNet
Type=InterfaceName
Name=[AdapterName]

[InterfaceID]
Measure=Plugin
Plugin=ActiveNet
Type=InterfaceID
Name=[AdapterName]
;
; IMPORTANT:
;  The measure above will return the interface ID of the active adapter.  This is the value to
;  be used for the "Interface" setting for the NetIn/NetOut/NetTotal measures.
;

; - Wireless Adapter -

;[WiFiSSID]
;Measure=Plugin
;Plugin=WiFiStatus
;WiFiInfoType=SSID
;WiFiIntfID=#WiFiInterfaceID#
;RegExpSubstitute=1
;Substitute="(^-1$)":"Not Connected","(^0$)":"No Connection"

; ## CONNECTIVITY ##
[NetworkIsLAN]
Measure=Plugin
Plugin=SysInfo
SysInfoType=LAN_CONNECTIVITY
OnChangeAction=[!Log "LAN state change, refreshing internal IP" Notice][!SetOption AdapterName Reload 0][!SetOption IPLan Reload 0][!SetOption AdapterType Reload 0][!SetOption AdapterTypeID Reload 0][!SetOption InterfaceName Reload 0][!SetOption InterfaceID Reload 0]

[NetworkIsWAN]
Measure=Plugin
Plugin=SysInfo
SysInfoType=INTERNET_CONNECTIVITY
OnChangeAction=[!Log "WAN state change, refreshing external IP" Notice][!CommandMeasure IPWeb Update]
