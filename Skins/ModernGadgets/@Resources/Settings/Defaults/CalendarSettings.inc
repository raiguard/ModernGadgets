[Variables]
;Set to 1 to hide week 6 if not included in the current month
HideLastWeek=0

;Holidays File names
;Note: For Holiday file names, multiple sources can be used by uisng the pipe delimiter (|).
EventFile=#CURRENTPATH#CalendarEvents.xml

;Custom Text formatting for Month Labels. See Readme for details.
LabelText=

;Set to 1 to add a leading zero to any number below 10.
LeadingZeroes=0

;Set to 1 to have the week start on Monday
StartOnMonday=0

;Set to 1 to pull month names from the Localization Settings of your computer. Overrides Custom Month Labels.
; Note from SilverAzide: do not change this; Rainmeter does not support localization in Lua
UseLocalMonths=0

;The format for the list of upcoming events. {day} and {desc} are valid variables.
NextFormat=

;Show the Moon Phases as events
ShowMoonPhases=1

;Set to 0 to hide all calendar events including the Moon Phases
ShowEvents=1

; LUACALENDAR SETTINGS

; day color
ColorInfoText1=#colorMain#
; moon phase color
ColorInfoText2=#colorDim#,230
; month/year and current day color
ColorFontTitle=#colorMain#
; control arrow buttons
ColorFontSubtitle=#colorDim#
; weekday label color
PaletteColor1=#colorAccent#,180
; holiday color
PaletteColor2=#colorAccent#
; current day highlight/background color
PaletteColor3=#colorAccent#
; control home button
PaletteColor4=236,28,70
; required
FontName=#fontFace#
FontSize1=#fontSize#
FontSize2=#fontSize#
FontSizeS=#fontSize#
FontWtBold=(#fontWeight# + 100)
FontWtNormal=#fontWeight#

; /////////////////////////////////// LuaCalendar options ///////////////////////////////////
;Date indicator line color
Clr.Hrl=#PaletteColor3#

;Custom text for Weekday labels. Uses the following format: Sun|Mon|Tue|Wed|Thu|Fri|Sat
DayLabels=S|M|T|W|T|F|S

;Custom text for Month labels. Uses the following format: Jan|Feb|Mar|Apr|May|Jun|Jul|Aug|Sep|Oct|Nov|Dec
MonthLabels=Jan|Feb|Mar|Apr|May|Jun|Jul|Aug|Sep|Oct|Nov|Dec

;Color to use for the Moon Phases Events
MoonColor=#ColorInfoText2#

;===== Positioning options =====
;Cell Dimensions - The dimensions of the individual string meters.
C.w=16
C.h=16
;Spacers and bumper
;Vertical space between cells
Space.x=5
;Horizontal space between cells
Space.y=1
;Space on left and right of calendar
Bumper.x=6
;Space on top of calendar
Bumper.top=5
;Space on bottom of calendar
Bumper.bottom=0
