; Draw lines from last to first, to improve aesthetics
[MeterLineGraph]
Meter=Line
MeterStyle=StyleLineGraph
X=r
Y=r
LineCount=72
MeasureName=MeasureCpuUsageCore64
MeasureName2=MeasureCpuUsageCore63
MeasureName3=MeasureCpuUsageCore62
MeasureName4=MeasureCpuUsageCore61
MeasureName5=MeasureCpuUsageCore60
MeasureName6=MeasureCpuUsageCore59
MeasureName7=MeasureCpuUsageCore58
MeasureName8=MeasureCpuUsageCore57
MeasureName9=MeasureCpuUsageCore56
MeasureName10=MeasureCpuUsageCore55
MeasureName11=MeasureCpuUsageCore54
MeasureName12=MeasureCpuUsageCore53
MeasureName13=MeasureCpuUsageCore52
MeasureName14=MeasureCpuUsageCore51
MeasureName15=MeasureCpuUsageCore50
MeasureName16=MeasureCpuUsageCore49
MeasureName17=MeasureCpuUsageCore48
MeasureName18=MeasureCpuUsageCore47
MeasureName19=MeasureCpuUsageCore46
MeasureName20=MeasureCpuUsageCore45
MeasureName21=MeasureCpuUsageCore44
MeasureName22=MeasureCpuUsageCore43
MeasureName23=MeasureCpuUsageCore42
MeasureName24=MeasureCpuUsageCore41
MeasureName25=MeasureCpuUsageCore40
MeasureName26=MeasureCpuUsageCore39
MeasureName27=MeasureCpuUsageCore38
MeasureName28=MeasureCpuUsageCore37
MeasureName29=MeasureCpuUsageCore36
MeasureName30=MeasureCpuUsageCore35
MeasureName31=MeasureCpuUsageCore34
MeasureName32=MeasureCpuUsageCore33
MeasureName33=MeasureCpuUsageCore32
MeasureName34=MeasureCpuUsageCore31
MeasureName35=MeasureCpuUsageCore30
MeasureName36=MeasureCpuUsageCore29
MeasureName37=MeasureCpuUsageCore28
MeasureName38=MeasureCpuUsageCore27
MeasureName39=MeasureCpuUsageCore26
MeasureName40=MeasureCpuUsageCore25
MeasureName41=MeasureCpuUsageCore24
MeasureName42=MeasureCpuUsageCore23
MeasureName43=MeasureCpuUsageCore22
MeasureName44=MeasureCpuUsageCore21
MeasureName45=MeasureCpuUsageCore20
MeasureName46=MeasureCpuUsageCore19
MeasureName47=MeasureCpuUsageCore18
MeasureName48=MeasureCpuUsageCore17
MeasureName49=MeasureCpuUsageCore16
MeasureName50=MeasureCpuUsageCore15
MeasureName51=MeasureCpuUsageCore14
MeasureName52=MeasureCpuUsageCore13
MeasureName53=MeasureCpuUsageCore12
MeasureName54=MeasureCpuUsageCore11
MeasureName55=MeasureCpuUsageCore10
MeasureName56=MeasureCpuUsageCore9
MeasureName57=MeasureCpuUsageCore8
MeasureName58=MeasureCpuUsageCore7
MeasureName59=MeasureCpuUsageCore6
MeasureName60=MeasureCpuUsageCore5
MeasureName61=MeasureCpuUsageCore4
MeasureName62=MeasureCpuUsageCore3
MeasureName63=MeasureCpuUsageCore2
MeasureName64=MeasureCpuUsageCore1
MeasureName65=MeasureCpuUsage
MeasureName66=MeasureCpuFanPercentCalc
MeasureName67=MeasureCpuFanPercentCalcSpeedFan
MeasureName68=MeasurePageUsage
MeasureName69=MeasureRamUsage
MeasureName70=MeasureCpuTempHwinfoPackage
MeasureName71=MeasureCpuTempCoreTempCore1
MeasureName72=MeasureCpuTempSpeedFanCore1
Scale70=(100 / [#[#maxCpuTempMode]MaxCpuTemp])
Scale71=(100 / [#[#maxCpuTempMode]MaxCpuTemp])
Scale72=(100 / [#[#maxCpuTempMode]MaxCpuTemp])
LineColor=#colorCore64#,(#cpuCores# >= 64) * 255 * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1)
LineColor2=#colorCore63#,(#cpuCores# >= 63) * 255 * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1)
LineColor3=#colorCore62#,(#cpuCores# >= 62) * 255 * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1)
LineColor4=#colorCore61#,(#cpuCores# >= 61) * 255 * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1)
LineColor5=#colorCore60#,(#cpuCores# >= 60) * 255 * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1)
LineColor6=#colorCore59#,(#cpuCores# >= 59) * 255 * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1)
LineColor7=#colorCore58#,(#cpuCores# >= 58) * 255 * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1)
LineColor8=#colorCore57#,(#cpuCores# >= 57) * 255 * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1)
LineColor9=#colorCore56#,(#cpuCores# >= 56) * 255 * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1)
LineColor10=#colorCore55#,(#cpuCores# >= 55) * 255 * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1)
LineColor11=#colorCore54#,(#cpuCores# >= 54) * 255 * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1)
LineColor12=#colorCore53#,(#cpuCores# >= 53) * 255 * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1)
LineColor13=#colorCore52#,(#cpuCores# >= 52) * 255 * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1)
LineColor14=#colorCore51#,(#cpuCores# >= 51) * 255 * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1)
LineColor15=#colorCore50#,(#cpuCores# >= 50) * 255 * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1)
LineColor16=#colorCore49#,(#cpuCores# >= 49) * 255 * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1)
LineColor17=#colorCore48#,(#cpuCores# >= 48) * 255 * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1)
LineColor18=#colorCore47#,(#cpuCores# >= 47) * 255 * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1)
LineColor19=#colorCore46#,(#cpuCores# >= 46) * 255 * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1)
LineColor20=#colorCore45#,(#cpuCores# >= 45) * 255 * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1)
LineColor21=#colorCore44#,(#cpuCores# >= 44) * 255 * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1)
LineColor22=#colorCore43#,(#cpuCores# >= 43) * 255 * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1)
LineColor23=#colorCore42#,(#cpuCores# >= 42) * 255 * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1)
LineColor24=#colorCore41#,(#cpuCores# >= 41) * 255 * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1)
LineColor25=#colorCore40#,(#cpuCores# >= 40) * 255 * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1)
LineColor26=#colorCore39#,(#cpuCores# >= 39) * 255 * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1)
LineColor27=#colorCore38#,(#cpuCores# >= 38) * 255 * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1)
LineColor28=#colorCore37#,(#cpuCores# >= 37) * 255 * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1)
LineColor29=#colorCore36#,(#cpuCores# >= 36) * 255 * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1)
LineColor30=#colorCore35#,(#cpuCores# >= 35) * 255 * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1)
LineColor31=#colorCore34#,(#cpuCores# >= 34) * 255 * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1)
LineColor32=#colorCore33#,(#cpuCores# >= 33) * 255 * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1)
LineColor33=#colorCore32#,(#cpuCores# >= 32) * 255 * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1)
LineColor34=#colorCore31#,(#cpuCores# >= 31) * 255 * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1)
LineColor35=#colorCore30#,(#cpuCores# >= 30) * 255 * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1)
LineColor36=#colorCore29#,(#cpuCores# >= 29) * 255 * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1)
LineColor37=#colorCore28#,(#cpuCores# >= 28) * 255 * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1)
LineColor38=#colorCore27#,(#cpuCores# >= 27) * 255 * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1)
LineColor39=#colorCore26#,(#cpuCores# >= 26) * 255 * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1)
LineColor40=#colorCore25#,(#cpuCores# >= 25) * 255 * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1)
LineColor41=#colorCore24#,(#cpuCores# >= 24) * 255 * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1)
LineColor42=#colorCore23#,(#cpuCores# >= 23) * 255 * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1)
LineColor43=#colorCore22#,(#cpuCores# >= 22) * 255 * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1)
LineColor44=#colorCore21#,(#cpuCores# >= 21) * 255 * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1)
LineColor45=#colorCore20#,(#cpuCores# >= 20) * 255 * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1)
LineColor46=#colorCore19#,(#cpuCores# >= 19) * 255 * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1)
LineColor47=#colorCore18#,(#cpuCores# >= 18) * 255 * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1)
LineColor48=#colorCore17#,(#cpuCores# >= 17) * 255 * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1)
LineColor49=#colorCore16#,(#cpuCores# >= 16) * 255 * (#showAvgCpu# = 0)
LineColor50=#colorCore15#,(#cpuCores# >= 15) * 255 * (#showAvgCpu# = 0)
LineColor51=#colorCore14#,(#cpuCores# >= 14) * 255 * (#showAvgCpu# = 0)
LineColor52=#colorCore13#,(#cpuCores# >= 13) * 255 * (#showAvgCpu# = 0)
LineColor53=#colorCore12#,(#cpuCores# >= 12) * 255 * (#showAvgCpu# = 0)
LineColor54=#colorCore11#,(#cpuCores# >= 11) * 255 * (#showAvgCpu# = 0)
LineColor55=#colorCore10#,(#cpuCores# >= 10) * 255 * (#showAvgCpu# = 0)
LineColor56=#colorCore9#,(#cpuCores# >= 9) * 255 * (#showAvgCpu# = 0)
LineColor57=#colorCore8#,(#cpuCores# >= 8) * 255 * (#showAvgCpu# = 0)
LineColor58=#colorCore7#,(#cpuCores# >= 7) * 255 * (#showAvgCpu# = 0)
LineColor59=#colorCore6#,(#cpuCores# >= 6) * 255 * (#showAvgCpu# = 0)
LineColor60=#colorCore5#,(#cpuCores# >= 5) * 255 * (#showAvgCpu# = 0)
LineColor61=#colorCore4#,(#cpuCores# >= 4) * 255 * (#showAvgCpu# = 0)
LineColor62=#colorCore3#,(#cpuCores# >= 3) * 255 * (#showAvgCpu# = 0)
LineColor63=#colorCore2#,(#cpuCores# >= 2) * 255 * (#showAvgCpu# = 0)
LineColor64=#colorCore1#,(#cpuCores# >= 1) * 255 * (#showAvgCpu# = 0)
LineColor65=#colorCore1#,(#showAvgCpu# * 255)
LineColor66=#colorCpuFan#,(#showCpuFanGraph# * 255 * (#extProgram# = 1))
LineColor67=#colorCpuFan#,(#showCpuFanGraph# * 255 * (#extProgram# = 4))
LineColor68=#colorPage#,(#showPageFile# * 255)
LineColor69=#colorRam#
LineColor70=#colorCpuTemp#,(#showCpuTempGraph# * 255 * (#extProgram# = 1))
LineColor71=#colorCpuTemp#,(#showCpuTempGraph# * 255 * ((#extProgram# = 2) || (#extProgram# = 6)))
LineColor72=#colorCpuTemp#,(#showCpuTempGraph# * 255 * (#extProgram# = 4))