; =================================================================================================
; WeatherComJSONAlerts.inc by JSMorley
; "Weather.com - Parsing the JSON" (https://forum.rainmeter.net/viewtopic.php?f=118&t=34628)
;
; Requires that WeatherComJSONVariables.inc and WeatherComJSONMeasures.inc
; be @Included in the skin before this file.
;
; Updated August 2, 2020
; Edited by raiguard for ModernGadgets - see Conversion.md
; ==================================================================================================

[@AlertsParent]
Measure=WebParser
Group=Parents
URL=[@EntireSiteSuperParent]
Disabled=1
LogSubstringErrors=0
StringIndex=1
RegExp=(?siU)"v3alertsHeadlines":(?(?=.*{.*,"alerts":).*{.*,"alerts":.*(?(?=.*{"detailKey").*:".*",.*,"eventDescription":"(.*)","severityCode":(.*),"severity":"(.*)",.*,"headlineText":"(.*)",.*}).*(?(?=.*{"detailKey").*:".*",.*,"eventDescription":"(.*)","severityCode":(.*),"severity":"(.*)",.*,"headlineText":"(.*)",.*}).*(?(?=.*{"detailKey").*:".*",.*,"eventDescription":"(.*)","severityCode":(.*),"severity":"(.*)",.*,"headlineText":"(.*)",.*}).*(?(?=.*{"detailKey").*:".*",.*,"eventDescription":"(.*)","severityCode":(.*),"severity":"(.*)",.*,"headlineText":"(.*)",.*}).*(?(?=.*{"detailKey").*:".*",.*,"eventDescription":"(.*)","severityCode":(.*),"severity":"(.*)",.*,"headlineText":"(.*)",.*}).*(?(?=.*{"detailKey").*:".*",.*,"eventDescription":"(.*)","severityCode":(.*),"severity":"(.*)",.*,"headlineText":"(.*)",.*}).*(?(?=.*{"detailKey").*:".*",.*,"eventDescription":"(.*)","severityCode":(.*),"severity":"(.*)",.*,"headlineText":"(.*)",.*}).*(?(?=.*{"detailKey").*:".*",.*,"eventDescription":"(.*)","severityCode":(.*),"severity":"(.*)",.*,"headlineText":"(.*)",.*}).*)

[@Alert1Description]
Measure=WebParser
Url=[@AlertsParent]
StringIndex=1
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute=#CommonSubstitute#
DynamicVariables=1

[@Alert1SeverityCode]
Measure=WebParser
Url=[@AlertsParent]
StringIndex=2
Substitute=#CommonSubstitute#

[@Alert1Severity]
Measure=WebParser
Url=[@AlertsParent]
StringIndex=3
Substitute=#CommonSubstitute#

[@Alert1Text]
Measure=WebParser
Url=[@AlertsParent]
DecodeCharacterReference=1
StringIndex=4
Substitute=#CommonSubstitute#