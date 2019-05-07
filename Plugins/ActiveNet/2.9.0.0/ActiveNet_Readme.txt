
ActiveNet plugin v2.9.0.0

ActiveNet measures various informaton about the active hardware-based network adapter, CPUs, and
the active battery.  Requires Microsoft .NET Framework 4.5.2 or later.

  NOTE:

    This plugin provides additional network adapter information not available from within the
    Rainmeter environment.  The plugin uses the name of the adapter as the key to look up the
    information.  Your Rainmeter skin will be required to use a measure to obtain the adapter name,
    and this value must then be fed as input to the plugin.

    The plugin also provides information about the physical CPU and active battery not available
    from within Rainmeter or its standard plug-ins.

  ADDITIONAL INFO:

    For a list of network adapter types, see:
      https://msdn.microsoft.com/en-us/library/system.net.networkinformation.networkinterfacetype(v=vs.110).aspx
      https://github.com/Microsoft/referencesource/blob/master/System/net/System/Net/NetworkInformation/interfacetype.cs

    The Rainmeter debug log will list the adapter type and its corresponding numeric value (this is
    an example only):

      DBUG (00:00:00.062) : 1: Intel(R) 82579LM Gigabit Network Connection
      DBUG (00:00:00.062) :   Alias: Local Area Connection
      DBUG (00:00:00.062) :   Type=Ethernet(6), Hardware=Yes, Filter=No
      DBUG (00:00:00.078) : 2: Intel(R) Centrino(R) Ultimate-N 6300 AGN
      DBUG (00:00:00.078) :   Alias: Wireless Network Connection
      DBUG (00:00:00.078) :   Type=IEEE802.11(71), Hardware=Yes, Filter=No
      DBUG (00:00:00.093) : 3: PANTECH UML290 Mobile Broadband
      DBUG (00:00:00.093) :   Alias: Mobile Broadband Connection
      DBUG (00:00:00.093) :   Type=Other(243), Hardware=Yes, Filter=No

    Common adapter type values:

      AdapterType   AdapterTypeID Remarks
      ------------- ------------- -----------------------------------------
      Ethernet      6             Includes Bluetooth adapters
      Wireless80211 71            Wireless 802.11 (all types, a/b/g/n/ac)
      Wwanpp        243           Mobile broadband (GSM)
      Wwanpp2       244           Mobile broadband (CDMA)

  IMPORTANT:

    Use of "DynamicVariables=1" on ActiveNet network measures must NOT be used, as this will cause
    the measure to continuously reload the adapter information on every update.  Retrieval of
    adapter information is a resource-intensive process that will impact system performance.  Use a
    !SetOption bang to force the measure to be refreshed whenever the adapter changes.


Options

  General measure options

    All general measure options are valid.

  Type

    The type of information to retrieve.

      BatChargeRate

        Returns the charge rate (in watts) for the specified battery.

      BatDeviceName

        Returns the device name of the battery.  Using the Name parameter is not required.

      BatInstanceName

        Returns the instance name of the active battery.  If multiple batteries are present and
        active, this will return the instance name of the first battery. Using the Name parameter
        is not required.

        NOTE: If you have the case where a system has multiple batteries and you want the measure
              to automatically "fail-over" to the next available battery once the first is
              exhausted, use DynamicVariables=1 on the measure.

      BatRemainingCapacity

        Returns the remaining capacity (in watt-hours) for the specified battery.

      BatVoltage

        Returns the voltage (in volts) for the specified battery.

        Example:

          [MeasureBatteryInstanceName]
          Measure=Plugin
          Plugin=ActiveNet
          Type=BatInstanceName
          UpdateDivider=-1

          [MeasureBatteryVoltage]
          Measure=Plugin
          Plugin=ActiveNet
          Type=BatVoltage
          Name=[MeasureBatteryInstanceName]

          In this example, the MeasureBatteryVoltage measure will return the output voltage of the
          active battery.

      CpuPhysicalCores

        Returns the number of physical cores per physical CPU.  Using the Name parameter is not
        required.

      CpuProcessors

        Returns the number of physical CPUs.  Using the Name parameter is not required.

      CpuThreadsPerCore

        Returns the number of threads per physical core.  Using the Name parameter is not required.
        On hypertheaded CPUs, this value will be greater than one.
        CpuThreadsPerCore x CpuPhysicalCores x CpuProcessors = the number of logical cores.

      NetAdapterType

        Returns the type of the adapter as both a string and a numeric value; e.g., "Ethernet" or
        6, "Wireless80211" or 71.  Some types of adapters may not have a descriptive text value,
        and may instead return a numeric string; i.e., "243" instead of "Wwanpp".
        
        NOTE:  This measure option is similar to the Rainmeter SysInfo plugin using the
               SysInfoType=ADAPTER_TYPE option, but will return more verbose network adapter
               descriptions. Rainmeter will only return "Ethernet", "Wireless", or "Other", whereas
               the ActiveNet plugin will return all possible adapter type names.

      NetInterfaceID

        Returns the numeric interface ID needed by the NetIn/NetOut/NetTotal measures.  This option
        can be used to allow a skin to dynamically switch the NetIn/NetOut/NetTotal measures when
        the active adapter changes.

        Example:

          [MeasureInterfaceID]
          Measure=Plugin
          Plugin=ActiveNet
          Type=NetInterfaceID
          Name="Intel(R) Centrino(R) Ultimate-N 6300 AGN"

          [MeasureNetOut]
          Measure=NetOut
          Interface=[MeasureInterfaceID]
          DynamicVariables=1

          In this example (assuming the adapters are listed as in the debug log example above),
          the MeasureInterfaceID measure will return 2.  The MeasureNetOut measure would then
          return the number of outbound bytes for this adapter.  Use of DynamicVariables on the
          NetOut measure is required.

      NetInterfaceName

        Returns the name of the active network interface (noted as the "alias" in the Rainmeter
        debug log); e.g., "Local Area Connection".

      NetStatus

        Returns the operational status of the specified network interface as both a string and a
        numeric value; e.g., "Up" or 1, "Down" or 2. The possible values are:
        
          1 ("Up")             = The network interface is up; it can transmit data packets.
          2 ("Down")           = The network interface is unable to transmit data packets.
          3 ("Testing")        = The network interface is running tests.
          4 ("Unknown")        = The network interface status is not known.
          5 ("Dormant")        = The network interface is not in a condition to transmit data
                                 packets; it is waiting for an external event.
          6 ("NotPresent")     = The network interface is unable to transmit data packets because of
                                 a missing component, typically a hardware component.
          7 ("LowerLayerDown") = The network interface is unable to transmit data packets because it
                                 runs on top of one or more other interfaces, and at least one of
                                 these "lower layer" interfaces is down.

        Example:

          [MeasureAdapterName]
          Measure=Plugin
          Plugin=SysInfo
          SysInfoType=ADAPTER_DESCRIPTION
          SysInfoData=Best
          DynamicVariables=1
          OnChangeAction=[!SetOption MeasureOperationalStatus Reload 0]

          [MeasureOperationalStatus]
          Measure=Plugin
          Plugin=ActiveNet
          Type=NetStatus
          Name=[MeasureAdapterName]
          UpdateInterval=-1

          In this example, the MeasureOperationalStatus measure will return the operational status
          of the currently active ("best") network adapter.  Use of DynamicVariables on the SysInfo
          measure is required. It must be noted again that use of "DynamicVariables=1" on ActiveNet
          network measures must NOT be used, as enumerating adapters is a resource intensive
          process.  It is strongly suggested to manually reload the measure uaing a triggering
          action (as shown in this example and in the sample skin below). If you want to create a
          measure that will "watch" the status of a network adapter and immediately respond to
          changes, then set "DynamicVariables=1" and use as large of an UpdateInterval value as
          practical.
          
  Name

    For network measures, this option is the name of the adapter for which information will be
    retrieved; e.g., "Intel(R) Centrino(R) Ultimate-N 6300 AGN".  The measure will return an empty
    string (or zero) if the adapter name is invalid.  The adapter name is commonly obtained by
    using the SysInfo plugin with the ADAPTER_DESCRIPTION option.  To see all the active network
    adapters in your system, at a PowerShell prompt enter the following commands (the first will
    return a simple list of adapters, the second will dump out detailed information about each
    adapter):

      PS C:\> Get-NetAdapter
      PS C:\> gwmi MSFT_NetAdapter -Namespace root\StandardCimv2

    For battery measures, this option is the instance name of the battery for which information
    will be retrieved; e.g., "ACPI\PNP0C0A\0_0".  Do not confuse the instance name with the device
    name.  Laptops with multiple batteries (or the option for multiple batteries), will have
    multiple instance names.  To see detailed information about each of the batteries in your
    system, at a PowerShell prompt enter the command:

      PS C:\> gwmi -Class BatteryStatus -Namespace root\wmi


Sample skin:

[Rainmeter]
Update=1000
BackgroundMode=2
SolidColor=0,0,0,255

;
; IMPORTANT:  Create a measure that can detect network adapter changes as a trigger to force the
;             ActiveNet plugin to be refreshed.  In this example, if the network adapter changes,
;             the OnChangeAction's !SetOption bangs will refresh other ActiveNet measures.
;
; get adapter name; e.g., "Intel(R) Centrino(R) Ultimate-N 6300 AGN"
[MeasureAdapterName]
Measure=Plugin
Plugin=SysInfo
SysInfoType=ADAPTER_DESCRIPTION
SysInfoData=Best
DynamicVariables=1
OnChangeAction=[!SetOption MeasureInterfaceName Reload 0][!SetOption MeasureOperationalStatus Reload 0]

; get network interface name; e.g., "Local Area Connection"
[MeasureInterfaceName]
Measure=Plugin
Plugin=ActiveNet
Type=NetInterfaceName
Name=[MeasureAdapterName]

[MeasureOperationalStatus]
Measure=Plugin
Plugin=ActiveNet
Type=NetStatus
Name=[MeasureAdapterName]

; measure network inbound bytes/sec
[MeasureNetIn]
Measure=NetIn
Interface=[MeasureAdapterName]
DynamicVariables=1

; measure network outbound bytes/sec
[MeasureNetOut]
Measure=NetOut
Interface=[MeasureAdapterName]
DynamicVariables=1

; display network connection and adapter name
[MeterText]
Meter=String
MeasureName=MeasureInterfaceName
MeasureName2=MeasureAdapterName
MeasureName2=MeasureOperationalStatus
MeasureName3=MeasureNetIn
MeasureName4=MeasureNetOut
AutoScale=1k
NumOfDecimals=3
X=5
Y=5
W=400
H=70
FontColor=255,255,255,255
Text="Connection: %1#CRLF#Network Adapter: %2#CRLF#Status: %3#CRLF#In: %4B/sec#CRLF#Out: %5B/sec"
