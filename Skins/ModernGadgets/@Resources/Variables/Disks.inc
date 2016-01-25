[Variables]
alphaHistogram=50

; -- User settings --

fpfDiskSpaceFreeDepth=5
fpfDiskSpaceTotalDepth=3
fpfDiskSpaceUsedDepth=4

showHistogram=1
showGraph=1
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

; Drives to monitor
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

; -- Background --

bgHeight=(30 + ((((#rowYOffset# - 1) * 3) + 1) * ([CalcNumOfDisks] - 1) + ((#rowYOffset# - 1) * 2) + (#rowYOffset# + (2 - #gadgetsRowSpacing#))) + ((#showGraph# = 1) ? #graphHeight# : -2) + 6)

; -- Dynamic (do not change) --

; Colors (Dynamic)
colorDiskC=0,0,0,0
colorDiskD=0,0,0,0
colorDiskE=0,0,0,0
colorDiskF=0,0,0,0
colorDiskG=0,0,0,0
colorDiskH=0,0,0,0
colorDiskI=0,0,0,0
colorDiskJ=0,0,0,0
colorDiskK=0,0,0,0
colorDiskL=0,0,0,0

colorDiskCRgb=0,0,0
colorDiskDRgb=0,0,0
colorDiskERgb=0,0,0
colorDiskFRgb=0,0,0
colorDiskGRgb=0,0,0
colorDiskHRgb=0,0,0
colorDiskIRgb=0,0,0
colorDiskJRgb=0,0,0
colorDiskKRgb=0,0,0
colorDiskLRgb=0,0,0

colorDiskCA=0
colorDiskDA=0
colorDiskEA=0
colorDiskFA=0
colorDiskGA=0
colorDiskHA=0
colorDiskIA=0
colorDiskJA=0
colorDiskKA=0
colorDiskLA=0

colorDisk1Rgb=0,0,0
colorDisk2Rgb=0,0,0
colorDisk3Rgb=0,0,0
colorDisk4Rgb=0,0,0
colorDisk5Rgb=0,0,0
colorDisk6Rgb=0,0,0
colorDisk7Rgb=0,0,0
colorDisk8Rgb=0,0,0
colorDisk9Rgb=0,0,0
colorDisk10Rgb=0,0,0

colorDisk1A=0
colorDisk2A=0
colorDisk3A=0
colorDisk4A=0
colorDisk5A=0
colorDisk6A=0
colorDisk7A=0
colorDisk8A=0
colorDisk9A=0
colorDisk10A=0

; Disk not found
diskCNotFound=0
diskDNotFound=0
diskENotFound=0
diskFNotFound=0
diskGNotFound=0
diskHNotFound=0
diskINotFound=0
diskJNotFound=0
diskKNotFound=0
diskLNotFound=0

; Text variables (dynamic)
textDiskCSpaceFree=""
textDiskDSpaceFree=""
textDiskESpaceFree=""
textDiskFSpaceFree=""
textDiskGSpaceFree=""
textDiskHSpaceFree=""
textDiskISpaceFree=""
textDiskJSpaceFree=""
textDiskKSpaceFree=""
textDiskLSpaceFree=""
textDiskCSpaceUsed=""
textDiskDSpaceUsed=""
textDiskESpaceUsed=""
textDiskFSpaceUsed=""
textDiskGSpaceUsed=""
textDiskHSpaceUsed=""
textDiskISpaceUsed=""
textDiskJSpaceUsed=""
textDiskKSpaceUsed=""
textDiskLSpaceUsed=""
textDiskCSpaceTotal=""
textDiskDSpaceTotal=""
textDiskESpaceTotal=""
textDiskFSpaceTotal=""
textDiskGSpaceTotal=""
textDiskHSpaceTotal=""
textDiskISpaceTotal=""
textDiskJSpaceTotal=""
textDiskKSpaceTotal=""
textDiskLSpaceTotal=""

textDiskCRead=""
textDiskDRead=""
textDiskERead=""
textDiskFRead=""
textDiskGRead=""
textDiskHRead=""
textDiskIRead=""
textDiskJRead=""
textDiskKRead=""
textDiskLRead=""
textDiskCWrite=""
textDiskDWrite=""
textDiskEWrite=""
textDiskFWrite=""
textDiskGWrite=""
textDiskHWrite=""
textDiskIWrite=""
textDiskJWrite=""
textDiskKWrite=""
textDiskLWrite=""
