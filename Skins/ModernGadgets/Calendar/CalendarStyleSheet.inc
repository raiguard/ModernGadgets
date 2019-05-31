[Rainmeter]
MouseOverAction=[!ToggleMeterGroup ConfigButton][!UpdateMeterGroup ConfigButton][!UpdateMeterGroup Background][!Redraw]
MouseLeaveAction=[!ToggleMeterGroup ConfigButton][!UpdateMeterGroup ConfigButton][!UpdateMeterGroup Background][!Redraw]
MiddleMouseUpAction=[!Refresh]
DynamicWindowSize=1

[Variables]
BgHeight=(146 * #scale#)
; BgHeight=(#C.h#*7 + #Space.y#*6 + #Bumper.top# + #Bumper.bottom# + 27)
;BgWidth=160
; BgWidth=(#C.w#*7 + #Space.x#*6 + #Bumper.x#*2)

; scaling fudge factor
; FYI: Due to some unknown rounding error in TransformationMatrix, tooltip scaling is thrown off
;      slightly when using non-integer scale values; this fudge factor will restore positioning
;      to some extent, but it is still not perfect.
FF=(Max(0.24, (Frac(#Scale#)/#Scale#)))

; ----------------------------------------- Background --------------------------------------------

[MeterBackground]
Meter=Shape
MeterStyle=StyleBackground
H=(#bgHeight# + (#bgOffset#))

;===== Meter Styles=====
;All of these meter styles are required.

;Day Label Styles
[LblTxtSty]
H=#C.h#
W=#C.w#
X=#Space.X#R
Y=r
FontFace=#FontName#
FontColor=#PaletteColor1#
FontSize=#FontSize2#
FontWeight=#FontWtNormal#
;SolidColor=#PaletteColor1#,40
; SolidColor=#colorDim#
; SolidColor2=100,100,100,255
StringAlign=CenterCenter
AntiAlias=1
TransformationMatrix=#Scale#;0;0;#Scale#;#Scale#;#Scale#

[LblTxtStart]
X=(#Bumper.x#+#C.w#/2)+2
Y=(#Bumper.top#+#C.h#*1.5+#Space.y#)

[LblCurrSty]
FontColor=#Clr.Hrl#
FontWeight=#FontWtBold#

;Main Calendar Styles
[TextStyle]
H=#C.h#
W=#C.w#
X=(#Space.X#+#C.w#)r
Y=r
FontColor=#ColorInfoText1#
FontFace=#FontName#
FontSize=#FontSize1#
FontWeight=#FontWtNormal#
StringAlign=Center
AntiAlias=1
TransformationMatrix=#Scale#;0;0;#Scale#;#Scale#;#Scale#

; modified by TGonZo; add style for ToolTip scaling
[TextStyleTT]
H=((#C.h# + #FF#) * #Scale#)
W=((#C.w# + #FF#) * #Scale#)
X=((#Space.X#+#C.w# + #FF#) * #Scale#)r
Y=r
FontColor=#ColorInfoText1#
FontFace=#FontName#
FontSize=#FontSize1#
StringAlign=Center
AntiAlias=1

[FirstDay]
Y=(#C.h#/2+#Space.y#)r
X=((#Bumper.x#+#C.w#/2)+2)

; modified by TGonZo; add style for ToolTip scaling
[FirstDayTT]
Y=(([mDay1:Y] + 1 + #FF#) * #Scale#)
X=(((#Bumper.x#+#C.w#/2)+3 + #FF#) * #Scale#)

[NewWk]
Y=#Space.y#R
X=(#Bumper.x#+#C.w#/2)+2

; modified by TGonZo; add style for ToolTip scaling
[NewWkTT]
Y=((#Space.y# + #FF#) * #Scale#)R
X=(((#Bumper.x#+#C.w#/2)+3 + #FF#) * #Scale#)

[CurrentDay]
FontColor=#ColorFontTitle#
FontWeight=#FontWtBold#
; comment out this next line if you want the underscore indicator instead
SolidColor=#Clr.Hrl#,0

; modified by TGonZo; add style for ToolTip scaling
[CurrentDayTT]

[LastWeek]
FontColor=0,0,0,0

[PreviousMonth]
FontColor=#colorDisabled#

[NextMonth]
FontColor=#colorDisabled#

[HolidayStyle]
FontColor=#PaletteColor2#
FontWeight=#FontWtBold#

; modified by TGonZo; add style for ToolTip scaling
[HolidayStyleTT]

[WeekendStyle]
; FontColor=#colorDim#

;========== METERS ==========
;These are not required.
[MeasureSettingsScript]
Measure=Script
ScriptFile=#scriptPath#Settings.lua

[MeterGadgetLabel]
Meter=String
MeterStyle=StyleString | StyleStringGadgetLabel
Text=#MonthLabel#
W=(#C.w#*7+#Space.x#*6)
X=((#C.w#*7+#Space.x#*6)/2+#Bumper.x#)+2
Y=#Bumper.top#
H=#C.h#
StringAlign=Center
DynamicVariables=1

;Control Bar

[MeterControlBack_]
Meter=Shape
MeterStyle=StyleSettingsButton | StyleSettingsButtonPivotLeft
Y=(#Bumper.top# - 1)
X=(#contentMargin# + 2)
Group=Controls | ConfigButton
Hidden=1

[MeterControlHome_]
Meter=Shape
MeterStyle=StyleSettingsButton
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Combine Shape1 | XOR Shape2 | Scale 0.02,0.02,0,0 | Offset 0,3.5
Path1=280.37, 148.26 | LineTo 96, 300.11 | LineTo 96, 464 | ArcTo 112, 480, 16, 16, 0, 1, 0 | LineTo 224.06, 479.71 | ArcTo 239.98, 463.71, 16, 16, 0, 1, 0 | LineTo 239.98, 368 | ArcTo 255.98, 352, 16, 16, 0, 0, 0 | LineTo 319.98, 352 | ArcTo 335.98, 368, 16, 16, 0, 0, 0 | LineTo 335.98, 463.64 | ArcTo 351.98, 479.69, 16, 16, 0, 1, 0 | LineTo 464, 480 | ArcTo 480, 464, 16, 16, 0, 1, 0 | LineTo 480, 300 | LineTo 295.67, 148.26 | ArcTo 280.37, 148.26, 12.19, 12.19, 0, 1, 0 | ClosePath 1
Path2=571.6, 251.47 | LineTo 488, 182.56 | LineTo 488, 44.05 | ArcTo 476, 32.05, 12, 12, 0, 1, 0 | LineTo 420, 32.05 | ArcTo 408, 44.05, 12, 12, 0, 1, 0 | LineTo 408, 116.66 | LineTo 318.47, 43 | ArcTo 257.47, 43, 48, 48, 0, 1, 0 | LineTo 4.34, 251.47 | ArcTo 2.74, 268.37, 12, 12, 0, 1, 0 | LineTo 28.24, 299.37 | ArcTo 45.15, 301, 12, 12, 0, 1, 0 | LineTo 280.37, 107.26 | ArcTo 295.67, 107.26, 12.19, 12.19, 0, 0, 0 | LineTo 530.9, 301 | ArcTo 547.8, 299.4, 12, 12, 0, 1, 0 | LineTo 573.3, 268.4 | ArcTo 571.6, 251.47, 12, 12, 0, 1, 0 | ClosePath 1
X=6R
Y=r
Group=Controls | ConfigButton
Hidden=1

[MeterControlForward_]
Meter=Shape
MeterStyle=StyleSettingsButton | StyleSettingsButtonPivotRight
Y=(#Bumper.top# - 1)
X=(#contentMarginRight# - 9)
Group=Controls | ConfigButton
Hidden=1

[MeterConfigButton_]
Meter=Shape
MeterStyle=StyleConfigButtonNew
X=-15r
Group=Controls | ConfigButton
Hidden=1

[MeterControlBack]
Meter=Image
MeterStyle=StyleMouseRegion | StyleMouseRegionShapeButtonHover
LeftMouseUpAction=[!CommandMeasure "Lua" "Move(-1)"][!Update]
ToolTipText=Previous month
Group=Controls | ConfigButton
Hidden=1

[MeterControlHome]
Meter=Image
MeterStyle=StyleMouseRegion | StyleMouseRegionShapeButtonHover
LeftMouseUpAction=[!CommandMeasure "Lua" "Move()"][!Update]
ToolTipText=Back to current time
Group=Controls | ConfigButton
Hidden=1

[MeterControlForward]
Meter=Image
MeterStyle=StyleMouseRegion | StyleMouseRegionShapeButtonHover
LeftMouseUpAction=[!CommandMeasure "Lua" "Move(1)"][!Update]
ToolTipText=Next month
Group=Controls | ConfigButton
Hidden=1

[MeterConfigButton]
Meter=Image
MeterStyle=StyleMouseRegion | StyleMouseRegionShapeButtonHover
LeftMouseUpAction=[!SkinCustomMenu]
Group=Controls | ConfigButton
Hidden=1

;Date Indicator
[TodayHL]
Meter=Image
Antialias=1
X=(#Bumper.x#+(#C.w#+#Space.x#)*#Week#+3)+1
Y=(#Bumper.top#+(#C.h#+#Space.y#)*(#ThisWeek#+1)+#C.h#)
H=2
W=(#C.w#-4)
TransformationMatrix=#Scale#;0;0;#Scale#;#Scale#;#Scale#
SolidColor=#Clr.Hrl#
Hidden=#NotCurrentMonth#
DynamicVariables=1

[Ghost]
Meter=Image
SolidColor=0,0,0,1
H=1
W=1
X=(#C.w#*7+#Space.x#*6+#Bumper.x#*2-1)
Y=(#Bumper.top#+#Bumper.bottom#+(#C.h#+#Space.y#)*7+#C.h#+1)
