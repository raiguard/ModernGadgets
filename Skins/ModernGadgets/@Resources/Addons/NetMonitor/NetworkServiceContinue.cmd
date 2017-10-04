@echo off
::
:: this command unpauses the NetMonitor service; must be run from an elevated command prompt
::
%SystemRoot%\System32\sc.exe continue NetMonitorService