[Variables]
tempUom=C
ttSoundPath=#@#Assets\Sounds\alarmalerteffect.wav
threadCount=8

; Fixed precision format
fpfRamDepth=4
fpfPageDepth=4

; Colors
colorRam=107,198,250
colorPage=255,204,0
colorTempGraph=200,0,0
colorCpuFan=150,150,150
colorAvgCpu=237,28,32
ttHistogramAlpha=70
colorTt=255,100,100
colorCore1=107,238,98
colorCore2=255,246,42
colorCore3=250,158,0
colorCore4=236,28,70
colorCore5=199,36,199
colorCore6=145,70,232
colorCore7=42,112,250
colorCore8=43,224,224
colorCore9=121,182,62
colorCore10=204,255,0
colorCore11=250,205,22
colorCore12=191,100,55
colorCore13=201,41,56
colorCore14=179,0,91
colorCore15=153,84,166
colorCore16=99,125,217
colorCore17=43,224,152
colorCore18=227,242,10
colorCore19=#colorCore1#
colorCore20=#colorCore2#
colorCore21=#colorCore3#
colorCore22=#colorCore4#
colorCore23=#colorCore5#
colorCore24=#colorCore6#
colorCore25=#colorCore7#
colorCore26=#colorCore8#
colorCore27=#colorCore9#
colorCore28=#colorCore10#
colorCore29=#colorCore11#
colorCore30=#colorCore12#
colorCore31=#colorCore13#
colorCore32=#colorCore14#
colorCore33=#colorCore15#
colorCore34=#colorCore16#
colorCore35=#colorCore17#
colorCore36=#colorCore18#

showCpuName=1
showPageFile=0
showCoreTemps=1
showCoreVoltages=1
showCpuTempGraph=1
showTopProcess=0
showCpuFan=1
showCpuClock=1
showLineGraph=1
showAvgCpu=0
showTt=0
playTtSound=0
coreTempSource=HWiNFO

cpuName=auto

isHwinfoAvailable=1
useHwinfoClock=1

; ====== DEFAULTS ======

dColorRam=107,198,250
dColorPage=255,204,0
dColorCpuFan=150,150,150
dColorAvgCpu=237,28,32
dColorCore1=107,238,98
dColorCore2=255,246,42
dColorCore3=250,158,0
dColorCore4=236,28,70
dColorCore5=199,36,199
dColorCore6=145,70,232
dColorCore7=42,112,250
dColorCore8=43,224,224
dColorCore9=121,182,62
dColorCore10=204,255,0
dColorCore11=250,205,22
dColorCore12=191,100,55
dColorCore13=201,41,56
dColorCore14=179,0,91
dColorCore15=153,84,166
dColorCore16=99,125,217
dColorCore17=43,224,152
dColorCore18=227,242,10
dColorTt=255,120,147
dTtHistogramAlpha=50

; ===== HWiNFO =====

; 
; CPU 0
; 
; Core 0 Temperature [HWiNFO-CPU0-Core0Temp]
HWiNFO-CPU0-Core0Temp-SensorId=0xf0000400
HWiNFO-CPU0-Core0Temp-SensorInstance=0x0
HWiNFO-CPU0-Core0Temp-EntryId=0x1000000
; Core 1 Temperature [HWiNFO-CPU0-Core1Temp]
HWiNFO-CPU0-Core1Temp-SensorId=#HWiNFO-CPU0-Core0Temp-SensorId#
HWiNFO-CPU0-Core1Temp-SensorInstance=#HWiNFO-CPU0-Core0Temp-SensorInstance#
HWiNFO-CPU0-Core1Temp-EntryId=0x1000001
; Core 2 Temperature [HWiNFO-CPU0-Core2Temp]
HWiNFO-CPU0-Core2Temp-SensorId=#HWiNFO-CPU0-Core0Temp-SensorId#
HWiNFO-CPU0-Core2Temp-SensorInstance=#HWiNFO-CPU0-Core0Temp-SensorInstance#
HWiNFO-CPU0-Core2Temp-EntryId=0x1000002
; Core 3 Temperature [HWiNFO-CPU0-Core3Temp]
HWiNFO-CPU0-Core3Temp-SensorId=#HWiNFO-CPU0-Core0Temp-SensorId#
HWiNFO-CPU0-Core3Temp-SensorInstance=#HWiNFO-CPU0-Core0Temp-SensorInstance#
HWiNFO-CPU0-Core3Temp-EntryId=0x1000003
; Core 4 Temperature [HWiNFO-CPU0-Core4Temp]
HWiNFO-CPU0-Core4Temp-SensorId=#HWiNFO-CPU0-Core0Temp-SensorId#
HWiNFO-CPU0-Core4Temp-SensorInstance=#HWiNFO-CPU0-Core0Temp-SensorInstance#
HWiNFO-CPU0-Core4Temp-EntryId=0x1000004
; Core 5 Temperature [HWiNFO-CPU0-Core5Temp]
HWiNFO-CPU0-Core5Temp-SensorId=#HWiNFO-CPU0-Core0Temp-SensorId#
HWiNFO-CPU0-Core5Temp-SensorInstance=#HWiNFO-CPU0-Core0Temp-SensorInstance#
HWiNFO-CPU0-Core5Temp-EntryId=0x1000005
; Core 6 Temperature [HWiNFO-CPU0-Core6Temp]
HWiNFO-CPU0-Core6Temp-SensorId=#HWiNFO-CPU0-Core0Temp-SensorId#
HWiNFO-CPU0-Core6Temp-SensorInstance=#HWiNFO-CPU0-Core0Temp-SensorInstance#
HWiNFO-CPU0-Core6Temp-EntryId=0x1000006
; Core 7 Temperature [HWiNFO-CPU0-Core7Temp]
HWiNFO-CPU0-Core7Temp-SensorId=#HWiNFO-CPU0-Core0Temp-SensorId#
HWiNFO-CPU0-Core7Temp-SensorInstance=#HWiNFO-CPU0-Core0Temp-SensorInstance#
HWiNFO-CPU0-Core7Temp-EntryId=0x1000007
; Core 8 Temperature [HWiNFO-CPU0-Core8Temp]
HWiNFO-CPU0-Core8Temp-SensorId=#HWiNFO-CPU0-Core0Temp-SensorId#
HWiNFO-CPU0-Core8Temp-SensorInstance=#HWiNFO-CPU0-Core0Temp-SensorInstance#
HWiNFO-CPU0-Core8Temp-EntryId=0x1000008
; Core 9 Temperature [HWiNFO-CPU0-Core9Temp]
HWiNFO-CPU0-Core9Temp-SensorId=#HWiNFO-CPU0-Core0Temp-SensorId#
HWiNFO-CPU0-Core9Temp-SensorInstance=#HWiNFO-CPU0-Core0Temp-SensorInstance#
HWiNFO-CPU0-Core9Temp-EntryId=0x1000009
; Core 10 Temperature [HWiNFO-CPU0-Core10Temp]
HWiNFO-CPU0-Core10Temp-SensorId=#HWiNFO-CPU0-Core0Temp-SensorId#
HWiNFO-CPU0-Core10Temp-SensorInstance=#HWiNFO-CPU0-Core0Temp-SensorInstance#
HWiNFO-CPU0-Core10Temp-EntryId=0x100000a
; Core 11 Temperature [HWiNFO-CPU0-Core11Temp]
HWiNFO-CPU0-Core11Temp-SensorId=#HWiNFO-CPU0-Core0Temp-SensorId#
HWiNFO-CPU0-Core11Temp-SensorInstance=#HWiNFO-CPU0-Core0Temp-SensorInstance#
HWiNFO-CPU0-Core11Temp-EntryId=0x100000b
; Core 12 Temperature [HWiNFO-CPU0-Core12Temp]
HWiNFO-CPU0-Core12Temp-SensorId=#HWiNFO-CPU0-Core0Temp-SensorId#
HWiNFO-CPU0-Core12Temp-SensorInstance=#HWiNFO-CPU0-Core0Temp-SensorInstance#
HWiNFO-CPU0-Core12Temp-EntryId=0x100000c
; Core 13 Temperature [HWiNFO-CPU0-Core13Temp]
HWiNFO-CPU0-Core13Temp-SensorId=#HWiNFO-CPU0-Core0Temp-SensorId#
HWiNFO-CPU0-Core13Temp-SensorInstance=#HWiNFO-CPU0-Core0Temp-SensorInstance#
HWiNFO-CPU0-Core13Temp-EntryId=0x100000d
; Core 14 Temperature [HWiNFO-CPU0-Core14Temp]
HWiNFO-CPU0-Core14Temp-SensorId=#HWiNFO-CPU0-Core0Temp-SensorId#
HWiNFO-CPU0-Core14Temp-SensorInstance=#HWiNFO-CPU0-Core0Temp-SensorInstance#
HWiNFO-CPU0-Core14Temp-EntryId=0x100000e
; Core 15 Temperature [HWiNFO-CPU0-Core15Temp]
HWiNFO-CPU0-Core15Temp-SensorId=#HWiNFO-CPU0-Core0Temp-SensorId#
HWiNFO-CPU0-Core15Temp-SensorInstance=#HWiNFO-CPU0-Core0Temp-SensorInstance#
HWiNFO-CPU0-Core15Temp-EntryId=0x100000f
; Core 16 Temperature [HWiNFO-CPU0-Core16Temp]
HWiNFO-CPU0-Core16Temp-SensorId=#HWiNFO-CPU0-Core0Temp-SensorId#
HWiNFO-CPU0-Core16Temp-SensorInstance=#HWiNFO-CPU0-Core0Temp-SensorInstance#
HWiNFO-CPU0-Core16Temp-EntryId=0x1000010
; Core 17 Temperature [HWiNFO-CPU0-Core17Temp]
HWiNFO-CPU0-Core17Temp-SensorId=#HWiNFO-CPU0-Core0Temp-SensorId#
HWiNFO-CPU0-Core17Temp-SensorInstance=#HWiNFO-CPU0-Core0Temp-SensorInstance#
HWiNFO-CPU0-Core17Temp-EntryId=0x1000011

; CPU Package Temperature [HWiNFO-CPU0-PackageTemp]
HWiNFO-CPU0-PackageTemp-SensorId=#HWiNFO-CPU0-Core0Temp-SensorId#
HWiNFO-CPU0-PackageTemp-SensorInstance=#HWiNFO-CPU0-Core0Temp-SensorInstance#
HWiNFO-CPU0-PackageTemp-EntryId=0x100007e
; CPU Package Thermal Throttling [HWiNFO-CPU0-PackageTt]
HWiNFO-CPU0-PackageTt-SensorId=0xf0000400
HWiNFO-CPU0-PackageTt-SensorInstance=0x0
HWiNFO-CPU0-PackageTt-EntryId=0x800000c

; Core 0 Voltage [HWiNFO-CPU0-Core0Vid]
HWiNFO-CPU0-Core0Vid-SensorId=0xf0000300
HWiNFO-CPU0-Core0Vid-SensorInstance=0x0
HWiNFO-CPU0-Core0Vid-EntryId=0x2000000
; Core 1 Voltage [HWiNFO-CPU0-Core1Vid]
HWiNFO-CPU0-Core1Vid-SensorId=#HWiNFO-CPU0-Core0Vid-SensorId#
HWiNFO-CPU0-Core1Vid-SensorInstance=#HWiNFO-CPU0-Core0Vid-SensorInstance#
HWiNFO-CPU0-Core1Vid-EntryId=0x2000001
; Core 2 Voltage [HWiNFO-CPU0-Core2Vid]
HWiNFO-CPU0-Core2Vid-SensorId=#HWiNFO-CPU0-Core0Vid-SensorId#
HWiNFO-CPU0-Core2Vid-SensorInstance=#HWiNFO-CPU0-Core0Vid-SensorInstance#
HWiNFO-CPU0-Core2Vid-EntryId=0x2000002
; Core 3 Voltage [HWiNFO-CPU0-Core3Vid]
HWiNFO-CPU0-Core3Vid-SensorId=#HWiNFO-CPU0-Core0Vid-SensorId#
HWiNFO-CPU0-Core3Vid-SensorInstance=#HWiNFO-CPU0-Core0Vid-SensorInstance#
HWiNFO-CPU0-Core3Vid-EntryId=0x2000003
; Core 4 Voltage [HWiNFO-CPU0-Core4Vid]
HWiNFO-CPU0-Core4Vid-SensorId=#HWiNFO-CPU0-Core0Vid-SensorId#
HWiNFO-CPU0-Core4Vid-SensorInstance=#HWiNFO-CPU0-Core0Vid-SensorInstance#
HWiNFO-CPU0-Core4Vid-EntryId=0x2000004
; Core 5 Voltage [HWiNFO-CPU0-Core5Vid]
HWiNFO-CPU0-Core5Vid-SensorId=#HWiNFO-CPU0-Core0Vid-SensorId#
HWiNFO-CPU0-Core5Vid-SensorInstance=#HWiNFO-CPU0-Core0Vid-SensorInstance#
HWiNFO-CPU0-Core5Vid-EntryId=0x2000005
; Core 6 Voltage [HWiNFO-CPU0-Core6Vid]
HWiNFO-CPU0-Core6Vid-SensorId=#HWiNFO-CPU0-Core0Vid-SensorId#
HWiNFO-CPU0-Core6Vid-SensorInstance=#HWiNFO-CPU0-Core0Vid-SensorInstance#
HWiNFO-CPU0-Core6Vid-EntryId=0x2000006
; Core 7 Voltage [HWiNFO-CPU0-Core7Vid]
HWiNFO-CPU0-Core7Vid-SensorId=#HWiNFO-CPU0-Core0Vid-SensorId#
HWiNFO-CPU0-Core7Vid-SensorInstance=#HWiNFO-CPU0-Core0Vid-SensorInstance#
HWiNFO-CPU0-Core7Vid-EntryId=0x2000007
; Core 8 Voltage [HWiNFO-CPU0-Core8Vid]
HWiNFO-CPU0-Core8Vid-SensorId=#HWiNFO-CPU0-Core0Vid-SensorId#
HWiNFO-CPU0-Core8Vid-SensorInstance=#HWiNFO-CPU0-Core0Vid-SensorInstance#
HWiNFO-CPU0-Core8Vid-EntryId=0x2000008
; Core 9 Voltage [HWiNFO-CPU0-Core9Vid]
HWiNFO-CPU0-Core9Vid-SensorId=#HWiNFO-CPU0-Core0Vid-SensorId#
HWiNFO-CPU0-Core9Vid-SensorInstance=#HWiNFO-CPU0-Core0Vid-SensorInstance#
HWiNFO-CPU0-Core9Vid-EntryId=0x2000009
; Core 10 Voltage [HWiNFO-CPU0-Core10Vid]
HWiNFO-CPU0-Core10Vid-SensorId=#HWiNFO-CPU0-Core0Vid-SensorId#
HWiNFO-CPU0-Core10Vid-SensorInstance=#HWiNFO-CPU0-Core0Vid-SensorInstance#
HWiNFO-CPU0-Core10Vid-EntryId=0x200000a
; Core 11 Voltage [HWiNFO-CPU0-Core11Vid]
HWiNFO-CPU0-Core11Vid-SensorId=#HWiNFO-CPU0-Core0Vid-SensorId#
HWiNFO-CPU0-Core11Vid-SensorInstance=#HWiNFO-CPU0-Core0Vid-SensorInstance#
HWiNFO-CPU0-Core11Vid-EntryId=0x200000b
; Core 12 Voltage [HWiNFO-CPU0-Core12Vid]
HWiNFO-CPU0-Core12Vid-SensorId=#HWiNFO-CPU0-Core0Vid-SensorId#
HWiNFO-CPU0-Core12Vid-SensorInstance=#HWiNFO-CPU0-Core0Vid-SensorInstance#
HWiNFO-CPU0-Core12Vid-EntryId=0x200000c
; Core 13 Voltage [HWiNFO-CPU0-Core13Vid]
HWiNFO-CPU0-Core13Vid-SensorId=#HWiNFO-CPU0-Core0Vid-SensorId#
HWiNFO-CPU0-Core13Vid-SensorInstance=#HWiNFO-CPU0-Core0Vid-SensorInstance#
HWiNFO-CPU0-Core13Vid-EntryId=0x200000d
; Core 14 Voltage [HWiNFO-CPU0-Core14Vid]
HWiNFO-CPU0-Core14Vid-SensorId=#HWiNFO-CPU0-Core0Vid-SensorId#
HWiNFO-CPU0-Core14Vid-SensorInstance=#HWiNFO-CPU0-Core0Vid-SensorInstance#
HWiNFO-CPU0-Core14Vid-EntryId=0x200000e
; Core 15 Voltage [HWiNFO-CPU0-Core15Vid]
HWiNFO-CPU0-Core15Vid-SensorId=#HWiNFO-CPU0-Core0Vid-SensorId#
HWiNFO-CPU0-Core15Vid-SensorInstance=#HWiNFO-CPU0-Core0Vid-SensorInstance#
HWiNFO-CPU0-Core15Vid-EntryId=0x200000f
; Core 16 Voltage [HWiNFO-CPU0-Core16Vid]
HWiNFO-CPU0-Core16Vid-SensorId=#HWiNFO-CPU0-Core0Vid-SensorId#
HWiNFO-CPU0-Core16Vid-SensorInstance=#HWiNFO-CPU0-Core0Vid-SensorInstance#
HWiNFO-CPU0-Core16Vid-EntryId=0x1000010
; Core 17 Voltage [HWiNFO-CPU0-Core17Vid]
HWiNFO-CPU0-Core17Vid-SensorId=#HWiNFO-CPU0-Core0Vid-SensorId#
HWiNFO-CPU0-Core17Vid-SensorInstance=#HWiNFO-CPU0-Core0Vid-SensorInstance#
HWiNFO-CPU0-Core17Vid-EntryId=0x1000011

; Core 0 Clock [HWiNFO-CPU0-Core0Clock]
HWiNFO-CPU0-Core0Clock-SensorId=0xf0000300
HWiNFO-CPU0-Core0Clock-SensorInstance=0x0
HWiNFO-CPU0-Core0Clock-EntryId=0x6000000
; Core 1 Clock [HWiNFO-CPU0-Core1Clock]
HWiNFO-CPU0-Core1Clock-SensorId=#HWiNFO-CPU0-Core0Clock-SensorId#
HWiNFO-CPU0-Core1Clock-SensorInstance=#HWiNFO-CPU0-Core0Clock-SensorInstance#
HWiNFO-CPU0-Core1Clock-EntryId=0x6000001
; Core 2 Clock [HWiNFO-CPU0-Core2Clock]
HWiNFO-CPU0-Core2Clock-SensorId=#HWiNFO-CPU0-Core0Clock-SensorId#
HWiNFO-CPU0-Core2Clock-SensorInstance=#HWiNFO-CPU0-Core0Clock-SensorInstance#
HWiNFO-CPU0-Core2Clock-EntryId=0x6000002
; Core 3 Clock [HWiNFO-CPU0-Core3Clock]
HWiNFO-CPU0-Core3Clock-SensorId=#HWiNFO-CPU0-Core0Clock-SensorId#
HWiNFO-CPU0-Core3Clock-SensorInstance=#HWiNFO-CPU0-Core0Clock-SensorInstance#
HWiNFO-CPU0-Core3Clock-EntryId=0x6000003
; Core 4 Clock [HWiNFO-CPU0-Core4Clock]
HWiNFO-CPU0-Core4Clock-SensorId=#HWiNFO-CPU0-Core0Clock-SensorId#
HWiNFO-CPU0-Core4Clock-SensorInstance=#HWiNFO-CPU0-Core0Clock-SensorInstance#
HWiNFO-CPU0-Core4Clock-EntryId=0x6000004
; Core 5 Clock [HWiNFO-CPU0-Core5Clock]
HWiNFO-CPU0-Core5Clock-SensorId=#HWiNFO-CPU0-Core0Clock-SensorId#
HWiNFO-CPU0-Core5Clock-SensorInstance=#HWiNFO-CPU0-Core0Clock-SensorInstance#
HWiNFO-CPU0-Core5Clock-EntryId=0x6000005
; Core 6 Clock [HWiNFO-CPU0-Core6Clock]
HWiNFO-CPU0-Core6Clock-SensorId=#HWiNFO-CPU0-Core0Clock-SensorId#
HWiNFO-CPU0-Core6Clock-SensorInstance=#HWiNFO-CPU0-Core0Clock-SensorInstance#
HWiNFO-CPU0-Core6Clock-EntryId=0x6000006
; Core 7 Clock [HWiNFO-CPU0-Core7Clock]
HWiNFO-CPU0-Core7Clock-SensorId=#HWiNFO-CPU0-Core0Clock-SensorId#
HWiNFO-CPU0-Core7Clock-SensorInstance=#HWiNFO-CPU0-Core0Clock-SensorInstance#
HWiNFO-CPU0-Core7Clock-EntryId=0x6000007
; Core 8 Clock [HWiNFO-CPU0-Core8Clock]
HWiNFO-CPU0-Core8Clock-SensorId=#HWiNFO-CPU0-Core0Clock-SensorId#
HWiNFO-CPU0-Core8Clock-SensorInstance=#HWiNFO-CPU0-Core0Clock-SensorInstance#
HWiNFO-CPU0-Core8Clock-EntryId=0x6000008
; Core 9 Clock [HWiNFO-CPU0-Core9Clock]
HWiNFO-CPU0-Core9Clock-SensorId=#HWiNFO-CPU0-Core0Clock-SensorId#
HWiNFO-CPU0-Core9Clock-SensorInstance=#HWiNFO-CPU0-Core0Clock-SensorInstance#
HWiNFO-CPU0-Core9Clock-EntryId=0x6000009
; Core 10 Clock [HWiNFO-CPU0-Core10Clock]
HWiNFO-CPU0-Core10Clock-SensorId=#HWiNFO-CPU0-Core0Clock-SensorId#
HWiNFO-CPU0-Core10Clock-SensorInstance=#HWiNFO-CPU0-Core0Clock-SensorInstance#
HWiNFO-CPU0-Core10Clock-EntryId=0x600000a
; Core 11 Clock [HWiNFO-CPU0-Core11Clock]
HWiNFO-CPU0-Core11Clock-SensorId=#HWiNFO-CPU0-Core0Clock-SensorId#
HWiNFO-CPU0-Core11Clock-SensorInstance=#HWiNFO-CPU0-Core0Clock-SensorInstance#
HWiNFO-CPU0-Core11Clock-EntryId=0x600000b
; Core 12 Clock [HWiNFO-CPU0-Core12Clock]
HWiNFO-CPU0-Core12Clock-SensorId=#HWiNFO-CPU0-Core0Clock-SensorId#
HWiNFO-CPU0-Core12Clock-SensorInstance=#HWiNFO-CPU0-Core0Clock-SensorInstance#
HWiNFO-CPU0-Core12Clock-EntryId=0x600000c
; Core 13 Clock [HWiNFO-CPU0-Core13Clock]
HWiNFO-CPU0-Core13Clock-SensorId=#HWiNFO-CPU0-Core0Clock-SensorId#
HWiNFO-CPU0-Core13Clock-SensorInstance=#HWiNFO-CPU0-Core0Clock-SensorInstance#
HWiNFO-CPU0-Core13Clock-EntryId=0x600000d
; Core 14 Clock [HWiNFO-CPU0-Core14Clock]
HWiNFO-CPU0-Core14Clock-SensorId=#HWiNFO-CPU0-Core0Clock-SensorId#
HWiNFO-CPU0-Core14Clock-SensorInstance=#HWiNFO-CPU0-Core0Clock-SensorInstance#
HWiNFO-CPU0-Core14Clock-EntryId=0x600000e
; Core 15 Clock [HWiNFO-CPU0-Core15Clock]
HWiNFO-CPU0-Core15Clock-SensorId=#HWiNFO-CPU0-Core0Clock-SensorId#
HWiNFO-CPU0-Core15Clock-SensorInstance=#HWiNFO-CPU0-Core0Clock-SensorInstance#
HWiNFO-CPU0-Core15Clock-EntryId=0x600000f
; Core 16 Clock [HWiNFO-CPU0-Core16Clock]
HWiNFO-CPU0-Core16Clock-SensorId=#HWiNFO-CPU0-Core0Clock-SensorId#
HWiNFO-CPU0-Core16Clock-SensorInstance=#HWiNFO-CPU0-Core0Clock-SensorInstance#
HWiNFO-CPU0-Core16Clock-EntryId=0x1000010
; Core 17 Clock [HWiNFO-CPU0-Core17Clock]
HWiNFO-CPU0-Core17Clock-SensorId=#HWiNFO-CPU0-Core0Clock-SensorId#
HWiNFO-CPU0-Core17Clock-SensorInstance=#HWiNFO-CPU0-Core0Clock-SensorInstance#
HWiNFO-CPU0-Core17Clock-EntryId=0x1000011
; CPU Package Temperature [HWiNFO-CPU0-PackageTemp]
HWiNFO-CPU0-PackageTemp-SensorId=#HWiNFO-CPU0-Core0Temp-SensorId#
HWiNFO-CPU0-PackageTemp-SensorInstance=#HWiNFO-CPU0-Core0Temp-SensorInstance#
HWiNFO-CPU0-PackageTemp-EntryId=0x100007e
; CPU Package Thermal Throttling [HWiNFO-CPU0-PackageTt]
HWiNFO-CPU0-PackageTt-SensorId=#HWiNFO-CPU0-Core0Temp-SensorId#
HWiNFO-CPU0-PackageTt-SensorInstance=#HWiNFO-CPU0-Core0Temp-SensorInstance#
HWiNFO-CPU0-PackageTt-EntryId=0x800000c

;
; MOBO
;
; CPU Fan [HWiNFO-MOBO-CPUFan]
HWiNFO-MOBO-CPUFan-SensorId=0xf7067910
HWiNFO-MOBO-CPUFan-SensorInstance=0x0
HWiNFO-MOBO-CPUFan-EntryId=0x3000001

[HWiNFO-Config-Temperatures]
HWiNFO-CPU0-Core0Temp=Core 0 Temperature
HWiNFO-CPU0-Core1Temp=Core 1 Temperature
HWiNFO-CPU0-Core2Temp=Core 2 Temperature
HWiNFO-CPU0-Core3Temp=Core 3 Temperature
HWiNFO-CPU0-Core4Temp=Core 4 Temperature
HWiNFO-CPU0-Core5Temp=Core 5 Temperature
HWiNFO-CPU0-Core6Temp=Core 6 Temperature
HWiNFO-CPU0-Core7Temp=Core 7 Temperature
HWiNFO-CPU0-Core8Temp=Core 8 Temperature
HWiNFO-CPU0-Core9Temp=Core 9 Temperature
HWiNFO-CPU0-Core10Temp=Core 10 Temperature
HWiNFO-CPU0-Core11Temp=Core 11 Temperature
HWiNFO-CPU0-Core12Temp=Core 12 Temperature
HWiNFO-CPU0-Core13Temp=Core 13 Temperature
HWiNFO-CPU0-Core14Temp=Core 14 Temperature
HWiNFO-CPU0-Core15Temp=Core 15 Temperature
HWiNFO-CPU0-PackageTemp=CPU Package Temperature
HWINFO-CPU0-PackageTt=CPU Package Thermal Throttling

[HWiNFO-Config-Voltages]
HWiNFO-CPU0-Core0Vid=Core 0 VID
HWiNFO-CPU0-Core1Vid=Core 1 VID
HWiNFO-CPU0-Core2Vid=Core 2 VID
HWiNFO-CPU0-Core3Vid=Core 3 VID
HWiNFO-CPU0-Core4Vid=Core 4 VID
HWiNFO-CPU0-Core5Vid=Core 5 VID
HWiNFO-CPU0-Core6Vid=Core 6 VID
HWiNFO-CPU0-Core7Vid=Core 7 VID
HWiNFO-CPU0-Core8Vid=Core 8 VID
HWiNFO-CPU0-Core9Vid=Core 9 VID
HWiNFO-CPU0-Core10Vid=Core 10 VID
HWiNFO-CPU0-Core11Vid=Core 11 VID
HWiNFO-CPU0-Core12Vid=Core 12 VID
HWiNFO-CPU0-Core13Vid=Core 13 VID
HWiNFO-CPU0-Core14Vid=Core 14 VID
HWiNFO-CPU0-Core15Vid=Core 15 VID

[HWiNFO-Config-Clocks]
HWiNFO-CPU0-Core0Clock=Core 0 Clock
HWiNFO-CPU0-Core1Clock=Core 1 Clock
HWiNFO-CPU0-Core2Clock=Core 2 Clock
HWiNFO-CPU0-Core3Clock=Core 3 Clock
HWiNFO-CPU0-Core4Clock=Core 4 Clock
HWiNFO-CPU0-Core5Clock=Core 5 Clock
HWiNFO-CPU0-Core6Clock=Core 6 Clock
HWiNFO-CPU0-Core7Clock=Core 7 Clock
HWiNFO-CPU0-Core8Clock=Core 8 Clock
HWiNFO-CPU0-Core9Clock=Core 9 Clock
HWiNFO-CPU0-Core10Clock=Core 10 Clock
HWiNFO-CPU0-Core11Clock=Core 11 Clock
HWiNFO-CPU0-Core12Clock=Core 12 Clock
HWiNFO-CPU0-Core13Clock=Core 13 Clock
HWiNFO-CPU0-Core14Clock=Core 14 Clock
HWiNFO-CPU0-Core15Clock=Core 15 Clock
