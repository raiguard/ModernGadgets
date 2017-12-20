@echo off
::
:: this command pauses the NetMonitor service; must be run from an elevated command prompt
::
%SystemRoot%\System32\sc.exe pause NetMonitorService