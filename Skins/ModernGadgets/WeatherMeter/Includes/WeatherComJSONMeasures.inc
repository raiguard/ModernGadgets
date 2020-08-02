; =================================================================================================
; WeatherComJSONMeasures.inc by JSMorley
; "Weather.com - Parsing the JSON" (https://forum.rainmeter.net/viewtopic.php?f=118&t=34628)
;
; Updated July 31, 2020
; Edited by raiguard for ModernGadgets - see Conversion.md
; ==================================================================================================

[Variables]
APIKey=d522aa97197fd864d36b418f39ebb323

CommonSubstitute='"':"","^null$":"","\\u002F":"/","\\u005C":"\","\\u003C":"<","\\u003E":">"
URLSite=https://api.weather.com/v3/aggcommon/v3-wx-observations-current;v3-wx-forecast-daily-15day;v3alertsHeadlines;v3-location-point?format=json&geocode=#Latitude#,#Longitude#&units=#Units#&language=#Language#&apiKey=#APIKey#

[@EntireSiteSuperParent]
Measure=WebParser
URL=#URLSite#
UpdateRate=#UpdateRate#
Flags=Resync | NoCookies
UserAgent=Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:78.0) Gecko/20100101 Firefox/78.0
DecodeCharacterReference=1
LogSubstringErrors=0
RegExp=(?siU)^(.*)$
StringIndex=1
FinishAction=[!EnableMeasureGroup Parents][!Update]
;Debug=2
;Debug2File=#@#EntireSite.txt

; ========================================
; Units of Measure information
; ========================================

[@UnitsType]
Measure=String
String=#Units#

[@UnitsTemperature]
Measure=String
String=#Units#
RegExpSubstitute=1
Substitute="m":"C","e":"F","h":"C"

[@UnitsSpeed]
Measure=String
String=#Units#
RegExpSubstitute=1
Substitute="^m$":"km/h","^e$":"mph","^h$":"mph"

[@UnitsDistance]
Measure=String
String=#Units#
RegExpSubstitute=1
Substitute="m":"km","e":"mi","h":"mi"

[@UnitsAccumulation]
Measure=String
String=#Units#
RegExpSubstitute=1
Substitute="m":"cm","e":"in","h":"cm"

[@UnitsPrecipitation]
Measure=String
String=#Units#
RegExpSubstitute=1
Substitute="m":"mm","e":"in","h":"mm"

[@UnitsPressure]
Measure=String
String=#Units#
RegExpSubstitute=1
Substitute="m":"mb","e":"in","h":"mb"

; =========================================
; Location information
; =========================================

[@LocationParent]
Measure=WebParser
Group=Parents
URL=[@EntireSiteSuperParent]
Disabled=1
StringIndex=1
RegExp=(?siU)"v3-location-point":.*"latitude":(.*),.*"longitude":(.*),.*"adminDistrict":(.*),.*"adminDistrictCode":(.*),.*"country":(.*),.*"countryCode":(.*),.*"displayName":(.*),

[@LocationLanguageCode]
Measure=String
String=#Language#

[@LocationLatitude]
Measure=WebParser
URL=[@LocationParent]
StringIndex=1
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@LocationLongitude]
Measure=WebParser
URL=[@LocationParent]
StringIndex=2
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@LocationAdminDistrict]
Measure=WebParser
URL=[@LocationParent]
StringIndex=3
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@LocationAdminDistrictCode]
Measure=WebParser
URL=[@LocationParent]
StringIndex=4
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@LocationCountry]
Measure=WebParser
URL=[@LocationParent]
StringIndex=5
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@LocationCountryCode]
Measure=WebParser
URL=[@LocationParent]
StringIndex=6
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@LocationName]
Measure=WebParser
URL=[@LocationParent]
StringIndex=7
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@LocationTimeZoneAbbreviation]
Measure=WebParser
URL=https://api.weather.com/v3/dateTime?geocode=#latitude#,#longitude#&format=json&apiKey=#APIKey#
RegExp=(?siU)"timeZoneAbbreviation":"(.*)"
UpdateRate=#UpdateRate#
Flags=Resync | NoCookies
UserAgent=Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:78.0) Gecko/20100101 Firefox/78.0
StringIndex=1
RegExpSubstitute=1
Substitute=#CommonSubstitute#

; =============================================
; Current Conditions as of the Observation Time
; =============================================

[@CurrentConditionsParent]
Measure=WebParser
Group=Parents
URL=[@EntireSiteSuperParent]
Disabled=1
StringIndex=1
RegExp=(?siU)"v3-wx-observations-current":.*"cloudCoverPhrase":(.*),.*"iconCode":(.*),.*"precip24Hour":(.*),.*"pressureAltimeter":(.*),.*"pressureChange":(.*),.*"pressureTendencyCode":(.*),.*"pressureTendencyTrend":(.*),.*"relativeHumidity":(.*),.*"sunriseTimeLocal":(.*),.*"sunsetTimeLocal":(.*),.*"temperature":(.*),.*"temperatureDewPoint":(.*),.*"temperatureFeelsLike":(.*),.*"temperatureMaxSince7AM":(.*),.*"uvDescription":(.*),.*"uvIndex":(.*),.*"validTimeLocal":(.*),.*"visibility":(.*),.*"windDirection":(.*),.*"windDirectionCardinal":(.*),.*"windGust":(.*),.*"windSpeed":(.*),.*"wxPhraseLong":(.*),.*"wxPhraseMedium":(.*),"wxPhraseShort":(.*)}
FinishAction=[!EnableMeasureGroup "Times"]

[@CurrentObservationTimeStamp]
Measure=WebParser
URL=[@CurrentConditionsParent]
StringIndex=17
RegExpSubstitute=1
Substitute=#CommonSubstitute#

; [@CurrentObservationDate]
; Measure=Time
; Group=Times
; Disabled=1
; TimeStamp=[@CurrentObservationTimeStamp]
; DynamicVariables=1
; TimeStampFormat=%Y-%m-%dT%H:%M:%S
; Format=#DateFormat#

[@CurrentObservationTime]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@CurrentObservationTimeStamp]
DynamicVariables=1
TimeStampFormat=%Y-%m-%dT%H:%M:%S
Format=[&Measure[#timeFormat]TimeFormat]
Substitute="AM":"am","PM":"pm"

[@CurrentIcon]
Measure=WebParser
URL=[@CurrentConditionsParent]
StringIndex=2
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@CurrentTemperature]
Measure=WebParser
URL=[@CurrentConditionsParent]
StringIndex=11
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@CurrentFeelsLike]
Measure=WebParser
URL=[@CurrentConditionsParent]
StringIndex=13
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@CurrentTemperatureMaxSince7AM]
Measure=WebParser
URL=[@CurrentConditionsParent]
StringIndex=14
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@CurrentDewPoint]
Measure=WebParser
URL=[@CurrentConditionsParent]
StringIndex=12
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@CurrentPressure]
Measure=WebParser
URL=[@CurrentConditionsParent]
StringIndex=4
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@CurrentPressureChangeAmount]
Measure=WebParser
URL=[@CurrentConditionsParent]
StringIndex=5
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@CurrentPressureCode]
Measure=WebParser
URL=[@CurrentConditionsParent]
StringIndex=6
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@CurrentPressureChangeTrend]
Measure=WebParser
URL=[@CurrentConditionsParent]
StringIndex=7
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@CurrentHumidity]
Measure=WebParser
URL=[@CurrentConditionsParent]
StringIndex=8
MinValue=0
MaxValue=100
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@CurrentWindDirectionDegrees]
Measure=WebParser
URL=[@CurrentConditionsParent]
StringIndex=19
MinValue=0
MaxValue=360
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@CurrentWindDirectionCompass]
Measure=WebParser
URL=[@CurrentConditionsParent]
StringIndex=20
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@CurrentWindGust]
Measure=WebParser
URL=[@CurrentConditionsParent]
StringIndex=21
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@CurrentWindSpeed]
Measure=WebParser
URL=[@CurrentConditionsParent]
StringIndex=22
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@CurrentConditions]
Measure=WebParser
URL=[@CurrentConditionsParent]
StringIndex=23
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@CurrentConditionsMedium]
Measure=WebParser
URL=[@CurrentConditionsParent]
StringIndex=24
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@CurrentConditionsShort]
Measure=WebParser
URL=[@CurrentConditionsParent]
StringIndex=25
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@CurrentUVDescription]
Measure=WebParser
URL=[@CurrentConditionsParent]
StringIndex=15
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@CurrentUVIndex]
Measure=WebParser
URL=[@CurrentConditionsParent]
StringIndex=16
MinValue=0
MaxValue=10
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@CurrentVisibilityDistance]
Measure=WebParser
URL=[@CurrentConditionsParent]
StringIndex=18
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@CurrentPrecipitationLast24Hours]
Measure=WebParser
URL=[@CurrentConditionsParent]
StringIndex=3
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@CurrentCloudCoverPhrase]
Measure=WebParser
URL=[@CurrentConditionsParent]
StringIndex=1
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@CurrentSunriseTimeStamp]
Measure=WebParser
URL=[@CurrentConditionsParent]
StringIndex=9
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@CurrentSunriseTime]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@CurrentSunriseTimeStamp]
DynamicVariables=1
TimeStampFormat=%Y-%m-%dT%H:%M:%S
Format=[&Measure[#timeFormat]TimeFormat]
Substitute="AM":"am","PM":"pm"

[@CurrentSunSetTimeStamp]
Measure=WebParser
URL=[@CurrentConditionsParent]
StringIndex=10
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@CurrentSunsetTime]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@CurrentSunsetTimeStamp]
DynamicVariables=1
TimeStampFormat=%Y-%m-%dT%H:%M:%S
Format=[&Measure[#timeFormat]TimeFormat]
Substitute="AM":"am","PM":"pm"

; ========================================
; Forecasts for Today day and night
; ========================================

[@ForecastTodayParent]
Measure=WebParser
Group=Parents
URL=[@EntireSiteSuperParent]
Disabled=1
StringIndex=1
RegExp=(?siU)"v3-wx-forecast-daily-15day":.*"dayOfWeek":\[(?:.*[,|\]]){0}(.*)[,|\]].*"narrative":\[(?:null,|".*"[,|\]]){0}(null|".*")[,|\]].*"qpf":\[(?:.*[,|\]]){0}(.*)[,|\]].*"qpfSnow":\[(?:.*[,|\]]){0}(.*)[,|\]].*"sunriseTimeLocal":\[(?:.*[,|\]]){0}(.*)[,|\]].*"sunsetTimeLocal":\[(?:.*[,|\]]){0}(.*)[,|\]].*"temperatureMax":\[(?:.*[,|\]]){0}(.*)[,|\]].*"temperatureMin":\[(?:.*[,|\]]){0}(.*)[,|\]].*"cloudCover":\[(?:.*[,|\]]){0}(.*),(.*)[,|\]].*"dayOrNight":\[(?:.*[,|\]]){0}(.*),(.*)[,|\]].*"daypartName":\[(?:.*[,|\]]){0}(.*),(.*)[,|\]].*"iconCode":\[(?:.*[,|\]]){0}(.*),(.*)[,|\]].*"narrative":\[(?:null,|".*"[,|\]]){0}(null|".*")[,|\]](null|".*")[,|\]].*"precipChance":\[(?:.*[,|\]]){0}(.*),(.*)[,|\]].*"precipType":\[(?:.*[,|\]]){0}(.*),(.*)[,|\]].*"qpf":\[(?:.*[,|\]]){0}(.*),(.*)[,|\]].*"qpfSnow":\[(?:.*[,|\]]){0}(.*),(.*)[,|\]].*"relativeHumidity":\[(?:.*[,|\]]){0}(.*),(.*)[,|\]].*"snowRange":\[(?:.*[,|\]]){0}(.*),(.*)[,|\]].*"temperature":\[(?:.*[,|\]]){0}(.*),(.*)[,|\]].*"temperatureHeatIndex":\[(?:.*[,|\]]){0}(.*),(.*)[,|\]].*"temperatureWindChill":\[(?:.*[,|\]]){0}(.*),(.*)[,|\]].*"thunderCategory":\[(?:.*[,|\]]){0}(.*),(.*)[,|\]].*"thunderIndex":\[(?:.*[,|\]]){0}(.*),(.*)[,|\]].*"uvDescription":\[(?:.*[,|\]]){0}(.*),(.*)[,|\]].*"uvIndex":\[(?:.*[,|\]]){0}(.*),(.*)[,|\]].*"windDirection":\[(?:.*[,|\]]){0}(.*),(.*)[,|\]].*"windDirectionCardinal":\[(?:.*[,|\]]){0}(.*),(.*)[,|\]].*"windPhrase":\[(?:null,|".*"[,|\]]){0}(null|".*")[,|\]](null|".*")[,|\]].*"windSpeed":\[(?:.*[,|\]]){0}(.*),(.*)[,|\]].*"wxPhraseLong":\[(?:null,|".*"[,|\]]){0}(null|".*")[,|\]](null|".*")[,|\]].*"wxPhraseShort":\[(?:null,|".*"[,|\]]){0}(null|".*")[,|\]](null|".*")[,|\]]

; ========================================
; Data for the entire day
; ========================================

[@ForecastTodayDateString]
Measure=WebParser
URL=[@EntireSiteSuperParent]
RegExp=(?siU)"v3-wx-forecast-daily-15day":.*"validTimeLocal":\s*\[(?:".*",\s*){0}(".*")
StringIndex=1
StringIndex2=1
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayDayLong]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=1
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayDayShort]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@ForecastTodayDateString]
DynamicVariables=1
TimeStampFormat=%Y-%m-%dT%H:%M:%S
FormatLocale=#Language#
Format=%a

[@ForecastTodayMonthLong]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@ForecastTodayDateString]
DynamicVariables=1
TimeStampFormat=%Y-%m-%dT%H:%M:%S
FormatLocale=#Language#
Format=%B

[@ForecastTodayMonthShort]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@ForecastTodayDateString]
DynamicVariables=1
TimeStampFormat=%Y-%m-%dT%H:%M:%S
FormatLocale=#Language#
Format=%b

[@ForecastTodayDayOfMonth]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@ForecastTodayDateString]
DynamicVariables=1
FormatLocale=#Language#
TimeStampFormat=%Y-%m-%dT%H:%M:%S
Format=%#d

[@ForecastTodayNarative]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=2
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayHighTemperature]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=7
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayLowTemperature]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=8
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodaySunriseTimeStamp]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=5
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodaySunriseTime]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@ForecastTodaySunriseTimeStamp]
DynamicVariables=1
TimeStampFormat=%Y-%m-%dT%H:%M:%S
Format=[&Measure[#timeFormat]TimeFormat]
Substitute="AM":"am","PM":"pm"

[@ForecastTodaySunsetTimeStamp]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=6
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodaySunsetTime]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@ForecastTodaySunsetTimeStamp]
DynamicVariables=1
TimeStampFormat=%Y-%m-%dT%H:%M:%S
Format=[&Measure[#timeFormat]TimeFormat]
Substitute="AM":"am","PM":"pm"

[@ForecastTodayQPFRain]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=3
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayQPFSnow]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=4
RegExpSubstitute=1
Substitute=#CommonSubstitute#

; ========================================
; Data for the Day part of the day
; ========================================

[@ForecastTodayDayPart]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=13
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayDayLetter]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=11
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayDayIcon]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=15
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayDayConditions]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=53
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayDayConditionsShort]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=55
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayDayTemperature]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=31
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayDayHeatIndex]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=33
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayDayWindChill]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=35
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayDayNarrative]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=17
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayDayHumidity]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=27
MinValue=0
MaxValue=100
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayDayWindSpeed]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=51
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayDayWindDirectionDegrees]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=45
MinValue=0
MaxValue=360
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayDayWindDirectionCompass]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=47
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayDayWindPhrase]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=49
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayDayPrecipitationPercent]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=19
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayDayPrecipitationType]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=21
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayDayPrecipitationAmount]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=23
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayDayThunderCategory]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=37
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayDayThunderIndex]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=39
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayDaySnowAmount]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=25
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayDaySnowRange]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=29
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayDayCloudPercent]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=9
MinValue=0
MaxValue=100
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayDayUVIndex]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=43
MinValue=0
MaxValue=10
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayDayUVIndexDescription]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=41
RegExpSubstitute=1
Substitute=#CommonSubstitute#

; ========================================
; Data for the Night part of the day
; ========================================

[@ForecastTodayNightPart]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=14
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayNightLetter]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=12
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayNightIcon]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=16
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayNightConditions]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=54
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayNightConditionsShort]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=56
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayNightTemperature]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=32
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayNightHeatIndex]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=34
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayNightWindChill]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=36
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayNightNarrative]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=18
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayNightHumidity]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=28
MinValue=0
MaxValue=100
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayNightWindSpeed]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=52
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayNightWindDirectionDegrees]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=46
MinValue=0
MaxValue=360
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayNightWindDirectionCompass]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=48
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayNightWindPhrase]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=50
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayNightPrecipitationPercent]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=20
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayNightPrecipitationType]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=22
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayNightPrecipitationAmount]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=24
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayNightThunderCategory]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=38
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayNightThunderIndex]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=40
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayNightSnowAmount]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=26
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayNightSnowRange]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=30
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayNightCloudPercent]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=10
MinValue=0
MaxValue=100
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayNightUVIndex]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=44
MinValue=0
MaxValue=10
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayNightUVIndexDescription]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=42
RegExpSubstitute=1
Substitute=#CommonSubstitute#