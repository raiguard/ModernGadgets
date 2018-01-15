@echo off
::
:: send custom command to service: 200 = reset session statistics
::                                 201 = reset all statistics
::
%SystemRoot%\System32\sc.exe control NetMonitorService 201