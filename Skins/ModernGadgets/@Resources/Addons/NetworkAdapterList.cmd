@echo off
::
:: This command file lists all physical and active network interface adapters installed on the
:: system.
::
mode con: cols=120 lines=35

:: determine Windows version
::    5.0 = Windows 2000
::    5.1 = Windows XP
::    5.2 = Windows XP 64-bit Edition, Windows Server 2003, Windows Server 2003 R2
::    6.0 = Windows Vista, Windows Server 2008
::    6.1 = Windows 7, Windows Server 2008 R2
::    6.2 = Windows 8, Windows Server 2012
::    6.3 = Windows 8.1, Windows Server 2012 R2
::   10.0 = Windows 10, Windows Server 2016
::
for /f "tokens=4-7 delims=[.] " %%i in ('ver') do (if %%i==Version (set VERSION=%%j.%%k) else (set VERSION=%%i.%%j))

:: display help (assumes nothing older than XP)
if "%VERSION%" == "5.1" goto SHOW_STD
if "%VERSION%" == "5.2" goto SHOW_STD
if "%VERSION%" == "6.0" goto SHOW_STD
if "%VERSION%" == "6.1" goto SHOW_STD
if "%VERSION%" == "6.2" goto SHOW_STD
if "%VERSION%" == "6.3" goto SHOW_STD

:: show info in Win10 ANSI mode
echo.
echo [97;7m Network Meter Configuration [27;37m
echo.
echo   To configure your [97mNetwork Meter[37m gadget, enter the names of the interfaces listed below into the Network Meter
echo   Settings configuration. Up to three interfaces can be monitored simultaneously.
echo.
echo   [93mNOTE:[37m If all interface options are left blank, the [97mNetwork[37m gadgets will monitor whichever network interface
echo         is currently active, including virtual interfaces (e.g., VPN connections). This mode does not support
echo         the case where multiple interfaces are in use simultaneously.
echo.
echo   [93mNOTE:[37m The variant [97mNetwork Meter Pro[37m requires the [97mNetMonitor[37m service to be installed and
echo         running. NetMonitor provides more accurate network statistics than Rainmeter.
echo.
echo.
goto DO_CMD

:SHOW_STD
:: show info in normal mode
echo.
echo Network Meter Configuration
echo.
echo   To configure your Network Meter gadget, enter the names of the interfaces listed below into the Network
echo   Meter Settings configuration. Up to three interfaces can be monitored simultaneously.
echo.
echo   NOTE: If all interface options are left blank, the Network gadgets will monitor whichever network interface
echo         is currently active, including virtual interfaces (e.g., VPN connections). This mode does not support
echo         the case where multiple interfaces are in use simultaneously.
echo.
echo   NOTE: The variant Network Meter Pro requires the NetMonitor service to be installed and running. NetMonitor
echo         provides more accurate network statistics than Rainmeter.
echo.
echo.

:DO_CMD
:: use Powershell to list interfaces for Windows 8 and later; otherwise use WMIC (assumes nothing older than XP)
if "%VERSION%" == "5.1" goto USE_WMIC
if "%VERSION%" == "5.2" goto USE_WMIC
if "%VERSION%" == "6.0" goto USE_WMIC
if "%VERSION%" == "6.1" goto USE_WMIC

:: Windows 8 or later (or default), use Powershell
echo   Interface Name = Name of the network interface (use this value)
echo   Connection     = Network connection name
echo   Virtual        = True if interface is virtual; False if interface is physical
echo   State          = 0=unknown, 1=present, 2=started, 3=disabled
echo   Type           = 6=ethernet, 71=wireless, etc.
echo.

powershell -Command "Get-WmiObject -Class MSFT_NetAdapter -Namespace root\StandardCimv2 | Sort-Object -Property InterfaceType, Virtual, InterfaceDescription | Format-Table -Property @{Label='Interface Name'; Expression={$_.InterfaceDescription}}, @{Label='Connection'; Expression={$_.Name}}, Virtual, State, @{Label='Type'; Expression={$_.InterfaceType}} -AutoSize"
goto END

:USE_WMIC
:: Windows 7 or earlier, use WMIC
echo   Name            = Name of the network interface (use this value)
echo   NetConnectionID = Network connection name
echo   NetEnabled      = TRUE if interface is currently enabled
echo   PhysicalAdapter = TRUE if interface is a physical device (may be wrong)
echo.
echo.

wmic nic where (PhysicalAdapter=TRUE or NetEnabled=TRUE) get Name, NetConnectionID, NetEnabled, PhysicalAdapter
goto END

:END
pause