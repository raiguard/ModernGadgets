; CPU STYLESHEET
; Local stylesheet for use with the CPU skin

[Variables]
bgHeight=275
; bgHeight=(30 + (#rowYOffset# * (1 + #showPage# + #showFan# + (#showAvgCpuOnly# = 1) ? 1 : #cpuCores# + #showCpuClockSpeed#)) + #graphHeight# + 3)

cpuCores=8
threadsPerCore=2

varPath=#@#StyleSheets/CPU.inc

; -- User settings --

fpfRamDepth=4
fpfPageDepth=4

showPage=1
showFan=1
showAvgCpuOnly=0
showCpuClockSpeed=0
useHwinfoClockSpeed=1
showGraph=1

; -- Colors --

colorRam=107,198,250,240
colorPage=255,204,0,240
colorFan=150,150,150,240
colorAvgCpu=236,28,70,240
colorCore1=107,238,98,240
colorCore2=255,246,42,240
colorCore3=250,158,0,240
colorCore4=236,28,70,240
colorCore5=199,36,199,240
colorCore6=145,70,232,240
colorCore7=42,112,250,240
colorCore8=43,224,224,240
colorCore9=121,182,62,240
colorCore10=204,255,0,240
colorCore11=250,205,22,240
colorCore12=191,100,55,240
colorCore13=201,41,56,240
colorCore14=179,0,91,240
colorCore15=153,84,166,240
colorCore16=99,125,217,240

; Dynamic RGBA
colorRamRgb=0,0,0
colorPageRgb=0,0,0
colorFanRgb=0,0,0
colorAvgCpuRgb=0,0,0
colorCore1Rgb=0,0,0
colorCore2Rgb=0,0,0
colorCore3Rgb=0,0,0
colorCore4Rgb=0,0,0
colorCore5Rgb=0,0,0
colorCore6Rgb=0,0,0
colorCore7Rgb=0,0,0
colorCore8Rgb=0,0,0
colorCore9Rgb=0,0,0
colorCore10Rgb=0,0,0
colorCore11Rgb=0,0,0
colorCore12Rgb=0,0,0
colorCore13Rgb=0,0,0
colorCore14Rgb=0,0,0
colorCore15Rgb=0,0,0
colorCore16Rgb=0,0,0

colorRamA=0
colorPageA=0
colorFanA=0
colorAvgCpuA=0
colorCore1A=0
colorCore2A=0
colorCore3A=0
colorCore4A=0
colorCore5A=0
colorCore6A=0
colorCore7A=0
colorCore8A=0
colorCore9A=0
colorCore10A=0
colorCore11A=0
colorCore12A=0
colorCore13A=0
colorCore14A=0
colorCore15A=0
colorCore16A=0

; -- Show/Hide --

hideCore1=0
hideCore2=0
hideCore3=0
hideCore4=0
hideCore5=0
hideCore6=0
hideCore7=0
hideCore8=0
hideCore9=1
hideCore10=1
hideCore11=1
hideCore12=1
hideCore13=1
hideCore14=1
hideCore15=1
hideCore16=1

; -- Dynamic Text Variables --

textRamUsed=0
textRamTotal=0

textPageUsed=0
textPageTotal=0
