; MODERNGADGETS SETTINGS FILE

[Variables]
fileVersion=1.0.1
; Global
lineGraphAa=0
; rowSpacing=2

; CPU
overrideCores=0
overrideThreads=0
fpfRamDepth=4
fpfPageDepth=4
showCpuName=1
showPage=1
showCpuFan=2
showAvgCpuOnly=0
showCpuClockSpeed=1
useHwinfoClockSpeed=1
showCpuGraph=1

colorRam=107,198,250,240
colorPage=255,204,0,240
colorCpuFan=150,150,150,240
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

; Network
fpfNetCurrentDepth=4
fpfNetTotalDepth=5
showNetworkRefreshButtons=1
showNetworkGraph=1
censorExtIp=1
interfaceBroadband=0
interfaceEthernet=0
interfaceWireless=0

colorUpload=107,238,98,200
colorDownload=255,246,42,200

; GPU
showGpuName=1
showMemController=0
showShaderClock=1
showCoreVoltage=0
showGpuGraph=1

colorTotalUsage=255,246,42,200
colorMemoryUsage=107,198,250,200
colorFanUsage=107,238,98,200
colorMemController=250,158,0,200

; Disks
fpfDiskSpaceFreeDepth=5
fpfDiskSpaceTotalDepth=3
fpfDiskSpaceUsedDepth=4

showDisksHistogram=1
showDisksGraph=1
showCapacityWarnings=1
showDiskTemps=1

hideDiskD=0
hideDiskE=0
hideDiskF=0
hideDiskG=0
hideDiskH=0
hideDiskI=0
hideDiskJ=0
hideDiskK=0
hideDiskL=0

colorDisk1=107,238,98,240
colorDisk2=255,246,42,240
colorDisk3=250,158,0,240
colorDisk4=236,28,70,240
colorDisk5=199,36,199,240
colorDisk6=145,70,232,240
colorDisk7=42,112,250,240
colorDisk8=43,224,224,240
colorDisk9=121,182,62,240
colorDisk10=204,255,0,240
colorDiskThresholdWarn=220,200,0,240
colorDiskThresholdFull=200,0,0,240

diskThresholdWarn=0.8
diskThresholdFull=0.95

d01="C:"
d02="D:"
d03="E:"
d04="F:"
d05="G:"
d06="H:"
d07="I:"
d08="J:"
d09="K:"
d10="L:"

; -- HWiNFO --

;
; CPU 0
;
; sensor ID and instance
HWiNFO-CPU0-SensorId=0xf0000300
HWiNFO-CPU0-SensorInstance=0x0
; entry IDs
; CPU usage (percent)
HWiNFO-CPU0-Usage=0x7000009
; core 0 clock frequency (MHz)
HWiNFO-CPU0-Core0Clock=0x6000000
; core 1 clock frequency (MHz)
HWiNFO-CPU0-Core1Clock=0x6000001
; core 2 clock frequency (MHz)
HWiNFO-CPU0-Core2Clock=0x6000002
; core 3 clock frequency (MHz)
HWiNFO-CPU0-Core3Clock=0x6000003
; core 4 clock frequency (MHz)
HWiNFO-CPU0-Core4Clock=0x6000004
; core 5 clock frequency (MHz)
HWiNFO-CPU0-Core5Clock=0x6000005
; core 6 clock frequency (MHz)
HWiNFO-CPU0-Core6Clock=0x6000006
; core 7 clock frequency (MHz)
HWiNFO-CPU0-Core7Clock=0x6000007
; core 0 voltage (volts)
HWiNFO-CPU0-Core0VID=0x2000000
; core 1 voltage (volts)
HWiNFO-CPU0-Core1VID=0x2000001
; core 2 voltage (volts)
HWiNFO-CPU0-Core2VID=0x2000002
; core 3 voltage (volts)
HWiNFO-CPU0-Core3VID=0x2000003
; core 4 voltage (volts)
HWiNFO-CPU0-Core4VID=0x2000004
; core 5 voltage (volts)
HWiNFO-CPU0-Core5VID=0x2000005
; core 6 voltage (volts)
HWiNFO-CPU0-Core6VID=0x2000006
; core 7 voltage (volts)
HWiNFO-CPU0-Core7VID=0x2000007

;
; CPU 0 DTS
;
; sensor ID and instance
HWiNFO-CPU0-DTS-SensorId=0xf0000400
HWiNFO-CPU0-DTS-SensorInstance=0x0
; entry IDs
; core 0 temperature (degrees)
HWiNFO-CPU0-DTS-Core0Temp=0x1000000
; core 1 temperature (degrees)
HWiNFO-CPU0-DTS-Core1Temp=0x1000001
; core 2 temperature (degrees)
HWiNFO-CPU0-DTS-Core2Temp=0x1000002
; core 3 temperature (degrees)
HWiNFO-CPU0-DTS-Core3Temp=0x1000003
; core 4 temperature (degrees)
HWiNFO-CPU0-DTS-Core4Temp=0x1000004
; core 5 temperature (degrees)
HWiNFO-CPU0-DTS-Core5Temp=0x1000005
; core 6 temperature (degrees)
HWiNFO-CPU0-DTS-Core6Temp=0x1000006
; core 7 temperature (degrees)
HWiNFO-CPU0-DTS-Core7Temp=0x1000007
; maximum current core temperature (degrees)
HWiNFO-CPU0-DTS-CoreMax=0x100007f

;
; Motherboard
;
; sensor ID and instance
HWiNFO-MOBO-SensorId=0xf7067910
HWiNFO-MOBO-SensorInstance=0x0
; entry IDs
; CPU fan speed (RPM)
HWiNFO-MOBO-CPUFan=0x3000001

;
; GPU 0
;
; sensor ID and instance
HWiNFO-GPU0-SensorId=0xe0002000
HWiNFO-GPU0-SensorInstance=0x0
; entry IDs
; GPU core clock frequency (MHz)
HWiNFO-GPU0-Clock=0x6000000
; GPU temperature (degrees)
HWiNFO-GPU0-Temp=0x1000000
; GPU load (percent)
HWiNFO-GPU0-CoreLoad=0x7000000
; GPU memory clock frequency (MHz)
HWiNFO-GPU0-MemoryClock=0x6000004
; GPU memory usage (percent)
HWiNFO-GPU0-MemoryUsage=0x7000008
; GPU memory allocated (MB)
HWiNFO-GPU0-MemoryAlloc=0x800003c
; GPU fan speed (RPM)
HWiNFO-GPU0-FanSpeed=0x3000000
; GPU fan usage (percent, not RPM!)
HWiNFO-GPU0-FanUsage=0x8000000
; GPU shader clock
HWiNFO-GPU0-VideoClock=0x6000005
; GPU memory controller usage
HWiNFO-GPU0-MemController=0x7000001
; GPU core voltage (volts)
HWiNFO-GPU0-CoreVoltage=0x2000000

;
; GPU 1
;
; sensor ID and instance
HWiNFO-GPU1-SensorId=0xe0002000
HWiNFO-GPU1-SensorInstance=0x14
; entry IDs
; GPU core clock frequency (MHz)
HWiNFO-GPU1-Clock=0x6000000
; GPU temperature (degrees)
HWiNFO-GPU1-Temp=0x1000000
; GPU load (percent)
HWiNFO-GPU1-CoreLoad=0x7000000
; GPU memory clock frequency (MHz)
HWiNFO-GPU1-MemoryClock=0x6000004
; GPU memory usage (percent)
HWiNFO-GPU1-MemoryUsage=0x7000008
; GPU memory allocated (MB)
HWiNFO-GPU1-MemoryAlloc=0x800003c
; GPU fan usage (percent, not RPM!)
HWiNFO-GPU1-FanSpeed=0x3000000
; GPU fan usage (percent, not RPM!)
HWiNFO-GPU1-FanUsage=0x8000000
; GPU shader clock
HWiNFO-GPU1-VideoClock=0x6000005
; GPU memory controller usage
HWiNFO-GPU1-MemController=0x7000001
; GPU core voltage (volts)
HWiNFO-GPU1-CoreVoltage=0x2000000

;
; S.M.A.R.T. Drive 1
;
; disk C
HWiNFO-SMART-DiskC-SensorId=0xf0000100
HWiNFO-SMART-DiskC-SensorInstance=0x0
HWiNFO-SMART-DiskC-Temp=0x1000001
; disk D
HWiNFO-SMART-DiskD-SensorId=0xf0000100
HWiNFO-SMART-DiskD-SensorInstance=0x2
HWiNFO-SMART-DiskD-Temp=0x1000000
; disk E
HWiNFO-SMART-DiskE-SensorId=0xf0000100
HWiNFO-SMART-DiskE-SensorInstance=0x1
HWiNFO-SMART-DiskE-Temp=0x1000000
; disk F
HWiNFO-SMART-DiskF-SensorId=0
HWiNFO-SMART-DiskF-SensorInstance=0
HWiNFO-SMART-DiskF-Temp=0
; disk G
HWiNFO-SMART-DiskG-SensorId=0
HWiNFO-SMART-DiskG-SensorInstance=0
HWiNFO-SMART-DiskG-Temp=0
; disk H
HWiNFO-SMART-DiskH-SensorId=0
HWiNFO-SMART-DiskH-SensorInstance=0
HWiNFO-SMART-DiskH-Temp=0
; disk I
HWiNFO-SMART-DiskI-SensorId=0
HWiNFO-SMART-DiskI-SensorInstance=0
HWiNFO-SMART-DiskI-Temp=0
; disk J
HWiNFO-SMART-DiskJ-SensorId=0
HWiNFO-SMART-DiskJ-SensorInstance=0
HWiNFO-SMART-DiskJ-Temp=0
; disk K
HWiNFO-SMART-DiskK-SensorId=0
HWiNFO-SMART-DiskK-SensorInstance=0
HWiNFO-SMART-DiskK-Temp=0
; disk L
HWiNFO-SMART-DiskL-SensorId=0
HWiNFO-SMART-DiskL-SensorInstance=0
HWiNFO-SMART-DiskL-Temp=0
