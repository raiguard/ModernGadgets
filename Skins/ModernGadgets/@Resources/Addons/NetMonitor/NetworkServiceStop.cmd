@echo off
::
:: this command stops the NetMonitor service; must be run from an elevated command prompt
::
%SystemRoot%\System32\sc.exe stop NetMonitorService