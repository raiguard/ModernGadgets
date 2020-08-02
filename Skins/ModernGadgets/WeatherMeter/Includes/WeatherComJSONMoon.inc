; ==========================================================================
; Requires that WeatherComJSONVariables.inc and WeatherComJSONMeasures.inc
; be @Included in the skin before this file.
;
; Icons in #@#Images\MoonPhase are:
; New Moon :        N.png
; Waning Crescent : WNC.png
; Last Quarter :    LQ.png
; Waning Gibbous :  WNG.png
; Full Moon :       F.png
; Waxing Gibbous :  WXG.png
; First Quarter :   FQ.png
; Waxing Crescent : WXC.png
;
; WeatherComJSONMoon.inc by JSMorley
; from "Weather.com - Parsing the JSON" (https://forum.rainmeter.net/viewtopic.php?f=118&t=34628)
;
; JSON V3 modifications by OnyxBlack
;
; Updated July 31, 2020
; Edited by raiguard for ModernGadgets - see Conversion.md
; ==========================================================================

; ========================================
; Day 1
; ========================================

[@MoonDay1Parent]
Measure=WebParser
Group=Parents
URL=[@EntireSiteSuperParent]
Disabled=1
StringIndex=1
RegExp=(?siU)"v3-wx-forecast-daily-15day":.*"moonPhase":\s*\[(?:".*",\s*){0}(".*")(?:,|\]).*"moonPhaseCode":\s*\[(?:".*",\s*){0}(".*")(?:,|\]).*"moonPhaseDay":\s*\[(?:.*,\s*){0}(.*)(?:,|\]).*"moonriseTimeLocal":\s*\[(?:".*",\s*){0}(".*")(?:,|\]).*"moonsetTimeLocal":\s*\[(?:".*",\s*){0}(".*")(?:,|\]).*

[@MoonDay1PhaseName]
Measure=WebParser
URL=[@MoonDay1Parent]
StringIndex=1
RegExpSubstitute=1
Substitute=#CommonSubstitute#,"":"-----"

[@MoonDay1PhaseIcon]
Measure=WebParser
URL=[@MoonDay1Parent]
StringIndex=2
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@MoonDay1PhaseDay]
Measure=WebParser
URL=[@MoonDay1Parent]
StringIndex=3
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@MoonDay1RiseTimeStamp]
Measure=WebParser
URL=[@MoonDay1Parent]
StringIndex=4
RegExpSubstitute=1
Substitute=#CommonSubstitute#
IfMatch=^$
IfMatchAction=[!SetOption @MoonDay1RiseTime TimeStamp "[*@CurrentObservationTimeStamp*]"][!SetOption @MoonDay1RiseTime Format "N/A"]
IfNotMatchAction=[!SetOption @MoonDay1RiseTime TimeStamp "[*@MoonDay1RiseTimeStamp*]"][!SetOption @MoonDay1RiseTime Format "[&Measure[#timeFormat]TimeFormat]"]

[@MoonDay1RiseTime]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@MoonDay1RiseTimeStamp]
TimeStampFormat=%Y-%m-%dT%H:%M:%S
Format=[&Measure[#timeFormat]TimeFormat]
Substitute="AM":"am","PM":"pm"
DynamicVariables=1

[@MoonDay1SetTimeStamp]
Measure=WebParser
URL=[@MoonDay1Parent]
StringIndex=5
RegExpSubstitute=1
Substitute=#CommonSubstitute#
IfMatch=^$
IfMatchAction=[!SetOption @MoonDay1SetTime TimeStamp "[*@CurrentObservationTimeStamp*]"][!SetOption @MoonDay1SetTime Format "N/A"]
IfNotMatchAction=[!SetOption @MoonDay1SetTime TimeStamp "[*@MoonDay1SetTimeStamp*]"][!SetOption @MoonDay1SetTime Format "[&Measure[#timeFormat]TimeFormat]"]

[@MoonDay1SetTime]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@MoonDay1SetTimeStamp]
DynamicVariables=1
TimeStampFormat=%Y-%m-%dT%H:%M:%S
Format=[&Measure[#timeFormat]TimeFormat]
Substitute="AM":"am","PM":"pm"