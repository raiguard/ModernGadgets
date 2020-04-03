; WeatherComJSONMeasures
; By jsmorley
; Edited to work better with ModernGadgets

[Variables]
CommonSubstitute='"':"","^null$":"","\\u002F":"/","\\u005C":"\","\\u003C":"<","\\u003E":">"
URLSite=https://weather.com/#language#/weather/today/l/#locationCode#

[@EntireSiteSuperParent]
Measure=WebParser
URL=#URLSite#
DecodeCharacterReference=1
UpdateRate=#UpdateRate#
LogSubstringErrors=0
RegExp=(?siU)^(.*)$
StringIndex=1
FinishAction=[!EnableMeasureGroup Parents]
;Debug=2
;Debug2File=#@#EntireSite.txt

; ========================================
; Units of Measure information
; ========================================

[@UnitsParent]
Measure=WebParser
Group=Parents
URL=[@EntireSiteSuperParent]
Disabled=1
StringIndex=1
RegExp=(?siU){"units":(.*),"temp":(.*),.*"speed":(.*),.*"distance":(.*),.*accumulation":(.*),.*"precip":(.*),.*"pressure":(.*)}

[@UnitsType]
Measure=WebParser
URL=[@UnitsParent]
StringIndex=1
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@UnitsTemperature]
Measure=WebParser
URL=[@UnitsParent]
StringIndex=2
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@UnitsSpeed]
Measure=WebParser
URL=[@UnitsParent]
StringIndex=3
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@UnitsDistance]
Measure=WebParser
URL=[@UnitsParent]
StringIndex=4
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@UnitsAccumulation]
Measure=WebParser
URL=[@UnitsParent]
StringIndex=5
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@UnitsPrecipitation]
Measure=WebParser
URL=[@UnitsParent]
StringIndex=6
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@UnitsPressure]
Measure=WebParser
URL=[@UnitsParent]
StringIndex=7
RegExpSubstitute=1
Substitute=#CommonSubstitute#

; =========================================
; Location information
; =========================================

[@LocationParent]
Measure=WebParser
Group=Parents
URL=[@EntireSiteSuperParent]
Disabled=1
StringIndex=1
RegExp=(?siU)"Location":{.*"latitude":(.*),.*"longitude":(.*),.*"displayName":(.*),.*"adminDistrict":(.*),.*"adminDistrictCode":(.*),.*"country":(.*),.*"countryCode":(.*),.*"Observation":.*language:(.*):.*"timeZoneAbbreviation":(.*)}

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

[@LocationName]
Measure=WebParser
URL=[@LocationParent]
StringIndex=3
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@LocationAdminDistrict]
Measure=WebParser
URL=[@LocationParent]
StringIndex=4
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@LocationAdminDistrictCode]
Measure=WebParser
URL=[@LocationParent]
StringIndex=5
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@LocationCountry]
Measure=WebParser
URL=[@LocationParent]
StringIndex=6
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@LocationCountryCode]
Measure=WebParser
URL=[@LocationParent]
StringIndex=7
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@LocationLanguageCode]
Measure=WebParser
URL=[@LocationParent]
StringIndex=8
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@LocationTimeZoneAbbreviation]
Measure=WebParser
URL=[@LocationParent]
StringIndex=9
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
RegExp=(?siU)"vt1observation":.*"altimeter":(.*),.*"barometerTrend":(.*),.*"barometerCode":(.*),.*"barometerChange":(.*),.*"dewPoint":(.*),.*"feelsLike":(.*),.*"gust":(.*),.*"humidity":(.*),.*"icon":(.*),.*"observationTime":(.*),.*"phrase":(.*),.*"precip24Hour":(.*),.*"snowDepth":(.*),.*"temperature":(.*),.*"temperatureMaxSince7am":(.*),.*"uvIndex":(.*),.*"uvDescription":(.*),.*"visibility":(.*),.*"windSpeed":(.*),.*"windDirCompass":(.*),.*"windDirDegrees":(.*)}.*"sunrise":(.*),.*"sunset":(.*),
FinishAction=[!EnableMeasureGroup "Times"]

[@CurrentPressure]
Measure=WebParser
URL=[@CurrentConditionsParent]
StringIndex=1
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@CurrentPressureChangeTrend]
Measure=WebParser
URL=[@CurrentConditionsParent]
StringIndex=2
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@CurrentPressureCode]
Measure=WebParser
URL=[@CurrentConditionsParent]
StringIndex=3
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@CurrentPressureChangeAmount]
Measure=WebParser
URL=[@CurrentConditionsParent]
StringIndex=4
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@CurrentDewPoint]
Measure=WebParser
URL=[@CurrentConditionsParent]
StringIndex=5
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@CurrentFeelsLike]
Measure=WebParser
URL=[@CurrentConditionsParent]
StringIndex=6
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@CurrentWindGust]
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

[@CurrentIcon]
Measure=WebParser
URL=[@CurrentConditionsParent]
StringIndex=9
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@CurrentObservationTimeStamp]
Measure=WebParser
URL=[@CurrentConditionsParent]
StringIndex=10
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
; FormatLocale=#Language#

[@CurrentObservationTime]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@CurrentObservationTimeStamp]
DynamicVariables=1
TimeStampFormat=%Y-%m-%dT%H:%M:%S
Format=[&Measure[#timeFormat]TimeFormat]
FormatLocale=#Language#
Substitute="AM":"am","PM":"pm"

[@CurrentConditions]
Measure=WebParser
URL=[@CurrentConditionsParent]
StringIndex=11
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@CurrentPrecipitationLast24Hours]
Measure=WebParser
URL=[@CurrentConditionsParent]
StringIndex=12
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@CurrentSnowDepth]
Measure=WebParser
URL=[@CurrentConditionsParent]
StringIndex=13
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@CurrentTemperature]
Measure=WebParser
URL=[@CurrentConditionsParent]
StringIndex=14
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@CurrentTemperatureMaxSince7AM]
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

[@CurrentUVDescription]
Measure=WebParser
URL=[@CurrentConditionsParent]
StringIndex=17
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@CurrentVisibilityDistance]
Measure=WebParser
URL=[@CurrentConditionsParent]
StringIndex=18
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@CurrentWindSpeed]
Measure=WebParser
URL=[@CurrentConditionsParent]
StringIndex=19
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@CurrentWindDirectionCompass]
Measure=WebParser
URL=[@CurrentConditionsParent]
StringIndex=20
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@CurrentWindDirectionDegrees]
Measure=WebParser
URL=[@CurrentConditionsParent]
StringIndex=21
MinValue=0
MaxValue=360
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@CurrentSunriseTimeStamp]
Measure=WebParser
URL=[@CurrentConditionsParent]
StringIndex=22
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@CurrentSunriseTime]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@CurrentSunriseTimeStamp]
DynamicVariables=1
TimeStampFormat=%Y-%m-%dT%H:%M:%S
Format=#TimeFormat#
FormatLocale=#Language#
Substitute="AM":"am","PM":"pm"

[@CurrentSunSetTimeStamp]
Measure=WebParser
URL=[@CurrentConditionsParent]
StringIndex=23
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@CurrentSunsetTime]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@CurrentSunsetTimeStamp]
DynamicVariables=1
TimeStampFormat=%Y-%m-%dT%H:%M:%S
Format=#TimeFormat#
FormatLocale=#Language#
Substitute="AM":"am","PM":"pm"


; ========================================
; Forecasts for today and following 6 days
; ========================================

[@ForecastTodayParent]
Measure=WebParser
Group=Parents
URL=[@EntireSiteSuperParent]
Disabled=1
StringIndex=1
RegExp=(?siU)"vt1dailyForecast":.*"dayOfWeek":(.*),.*"dayPartName":(.*),.*"precipPct":(.*),.*"precipAmt":(.*),.*"precipType":(.*),.*"temperature":(.*),.*"uvIndex":(.*),.*"uvDescription":(.*),.*"icon":(.*),.*"phrase":(.*),.*"narrative":(.*),.*"cloudPct":(.*),.*windDirCompass":(.*),.*"windDirDegrees":(.*),.*"windSpeed":(.*),.*"humidityPct":(.*),.*"snowRange":(.*),.*"dayPartName":(.*),.*"precipPct":(.*),.*"precipAmt":(.*),.*"precipType":(.*),.*"temperature":(.*),.*"uvIndex":(.*),.*"uvDescription":(.*),.*"icon":(.*),.*"phrase":(.*),.*"narrative":(.*),.*"cloudPct":(.*),.*windDirCompass":(.*),.*"windDirDegrees":(.*),.*"windSpeed":(.*),.*"humidityPct":(.*),.*"snowRange":(.*),

; ========================================
; Forecasts for today day and night
; ========================================

[@ForecastTodayDayLong]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=1
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayDayShort]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=2
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayDayPrecipitationPercent]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=3
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayDayPrecipitationAmount]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=4
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayDayPrecipitationType]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=5
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayDayTemperature]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=6
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayDayUVIndex]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=7
MinValue=0
MaxValue=10
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayDayUVIndexDescription]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=8
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayDayIcon]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=9
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayDayConditions]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=10
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayDayNarrative]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=11
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayDayCloudPercent]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=12
RegExpSubstitute=1
MinValue=0
MaxValue=100
Substitute=#CommonSubstitute#

[@ForecastTodayDayWindDirectionCompass]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=13
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayDayWindDirectionDegrees]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=14
MinValue=0
MaxValue=360
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayDayWindSpeed]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=15
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayDayHumidity]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=16
MinValue=0
MaxValue=100
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayDaySnowRange]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=17
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayNightShort]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=18
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayNightPrecipitationPercent]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=19
MinValue=0
MaxValue=100
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayNightPrecipitationAmount]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=20
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayNightPrecipitationType]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=21
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayNightTemperature]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=22
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayNightUVIndex]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=23
MinValue=0
MaxValue=10
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayNightUVIndexDescription]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=24
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayNightIcon]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=25
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayNightConditions]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=26
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayNightNarrative]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=27
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayNightCloudPercent]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=28
MinValue=0
MaxValue=100
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayNightWindDirectionCompass]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=29
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayNightWindDirectionDegrees]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=30
MinValue=0
MaxValue=360
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayNightWindSpeed]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=31
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayNightHumidity]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=32
MinValue=0
MaxValue=100
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayNightSnowRange]
Measure=WebParser
URL=[@ForecastTodayParent]
StringIndex=33
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastTodayMonthLong]
Measure=Time
TimeStamp=[@CurrentObservationTime:TimeStamp]
DynamicVariables=1
FormatLocale=#Language#
Format=%B

[@ForecastTodayMonthShort]
Measure=Time
TimeStamp=[@CurrentObservationTime:TimeStamp]
DynamicVariables=1
FormatLocale=#Language#
Format=%b

[@ForecastTodayDayOfMonth]
Measure=Time
TimeStamp=[@CurrentObservationTime:TimeStamp]
DynamicVariables=1
FormatLocale=#Language#
Format=%#d

; ========================================
; Forecasts for Day 2 day and night
; ========================================

[@ForecastDay2Parent]
Measure=WebParser
Group=Parents
URL=[@EntireSiteSuperParent]
Disabled=1
StringIndex=1
RegExp=(?siU)"vt1dailyForecast":.*"dayOfWeek":.*"dayOfWeek":(.*),.*"dayPartName":(.*),.*"precipPct":(.*),.*"precipAmt":(.*),.*"precipType":(.*),.*"temperature":(.*),.*"uvIndex":(.*),.*"uvDescription":(.*),.*"icon":(.*),.*"phrase":(.*),.*"narrative":(.*),.*"cloudPct":(.*),.*windDirCompass":(.*),.*"windDirDegrees":(.*),.*"windSpeed":(.*),.*"humidityPct":(.*),.*"snowRange":(.*),.*"dayPartName":(.*),.*"precipPct":(.*),.*"precipAmt":(.*),.*"precipType":(.*),.*"temperature":(.*),.*"uvIndex":(.*),.*"uvDescription":(.*),.*"icon":(.*),.*"phrase":(.*),.*"narrative":(.*),.*"cloudPct":(.*),.*windDirCompass":(.*),.*"windDirDegrees":(.*),.*"windSpeed":(.*),.*"humidityPct":(.*),.*"snowRange":(.*),

[@ForecastDay2DayLong]
Measure=WebParser
URL=[@ForecastDay2Parent]
StringIndex=1
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay2DayShort]
Measure=WebParser
URL=[@ForecastDay2Parent]
StringIndex=2
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay2DayPrecipitationPercent]
Measure=WebParser
URL=[@ForecastDay2Parent]
StringIndex=3
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay2DayPrecipitationAmount]
Measure=WebParser
URL=[@ForecastDay2Parent]
StringIndex=4
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay2DayPrecipitationType]
Measure=WebParser
URL=[@ForecastDay2Parent]
StringIndex=5
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay2DayTemperature]
Measure=WebParser
URL=[@ForecastDay2Parent]
StringIndex=6
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay2DayUVIndex]
Measure=WebParser
URL=[@ForecastDay2Parent]
StringIndex=7
MinValue=0
MaxValue=10
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay2DayUVIndexDescription]
Measure=WebParser
URL=[@ForecastDay2Parent]
StringIndex=8
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay2DayIcon]
Measure=WebParser
URL=[@ForecastDay2Parent]
StringIndex=9
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay2DayConditions]
Measure=WebParser
URL=[@ForecastDay2Parent]
StringIndex=10
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay2DayNarrative]
Measure=WebParser
URL=[@ForecastDay2Parent]
StringIndex=11
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay2DayCloudPercent]
Measure=WebParser
URL=[@ForecastDay2Parent]
StringIndex=12
MinValue=0
MaxValue=100
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay2DayWindDirectionCompass]
Measure=WebParser
URL=[@ForecastDay2Parent]
StringIndex=13
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay2DayWindDirectionDegrees]
Measure=WebParser
URL=[@ForecastDay2Parent]
StringIndex=14
MinValue=0
MaxValue=360
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay2DayWindSpeed]
Measure=WebParser
URL=[@ForecastDay2Parent]
StringIndex=15
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay2DayHumidity]
Measure=WebParser
URL=[@ForecastDay2Parent]
StringIndex=16
MinValue=0
MaxValue=100
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay2DaySnowRange]
Measure=WebParser
URL=[@ForecastDay2Parent]
StringIndex=17
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay2NightShort]
Measure=WebParser
URL=[@ForecastDay2Parent]
StringIndex=18
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay2NightPrecipitationPercent]
Measure=WebParser
URL=[@ForecastDay2Parent]
StringIndex=19
MinValue=0
MaxValue=100
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay2NightPrecipitationAmount]
Measure=WebParser
URL=[@ForecastDay2Parent]
StringIndex=20
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay2NightPrecipitationType]
Measure=WebParser
URL=[@ForecastDay2Parent]
StringIndex=21
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay2NightTemperature]
Measure=WebParser
URL=[@ForecastDay2Parent]
StringIndex=22
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay2NightUVIndex]
Measure=WebParser
URL=[@ForecastDay2Parent]
StringIndex=23
MinValue=0
MaxValue=10
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay2NightUVIndexDescription]
Measure=WebParser
URL=[@ForecastDay2Parent]
StringIndex=24
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay2NightIcon]
Measure=WebParser
URL=[@ForecastDay2Parent]
StringIndex=25
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay2NightConditions]
Measure=WebParser
URL=[@ForecastDay2Parent]
StringIndex=26
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay2NightNarrative]
Measure=WebParser
URL=[@ForecastDay2Parent]
StringIndex=27
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay2NightCloudPercent]
Measure=WebParser
URL=[@ForecastDay2Parent]
StringIndex=28
MinValue=0
MaxValue=100
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay2NightWindDirectionCompass]
Measure=WebParser
URL=[@ForecastDay2Parent]
StringIndex=29
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay2NightWindDirectionDegrees]
Measure=WebParser
URL=[@ForecastDay2Parent]
StringIndex=30
MinValue=0
MaxValue=360
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay2NightWindSpeed]
Measure=WebParser
URL=[@ForecastDay2Parent]
StringIndex=31
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay2NightHumidity]
Measure=WebParser
URL=[@ForecastDay2Parent]
StringIndex=32
MinValue=0
MaxValue=100
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay2NightSnowRange]
Measure=WebParser
URL=[@ForecastDay2Parent]
StringIndex=33
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay2MonthLong]
Measure=Time
TimeStamp=([@CurrentObservationTime:TimeStamp]+(86400 * 1))
DynamicVariables=1
FormatLocale=#Language#
Format=%B

[@ForecastDay2MonthShort]
Measure=Time
TimeStamp=([@CurrentObservationTime:TimeStamp]+(86400 * 1))
DynamicVariables=1
FormatLocale=#Language#
Format=%b

[@ForecastDay2DayOfMonth]
Measure=Time
TimeStamp=([@CurrentObservationTime:TimeStamp]+(86400 * 1))
DynamicVariables=1
FormatLocale=#Language#
Format=%#d

; ========================================
; Forecasts for Day 3 day and night
; ========================================

[@ForecastDay3Parent]
Measure=WebParser
Group=Parents
URL=[@EntireSiteSuperParent]
Disabled=1
StringIndex=1
RegExp=(?siU)"vt1dailyForecast":.*"dayOfWeek":.*"dayOfWeek":.*,.*"dayOfWeek":(.*),.*"dayPartName":(.*),.*"precipPct":(.*),.*"precipAmt":(.*),.*"precipType":(.*),.*"temperature":(.*),.*"uvIndex":(.*),.*"uvDescription":(.*),.*"icon":(.*),.*"phrase":(.*),.*"narrative":(.*),.*"cloudPct":(.*),.*windDirCompass":(.*),.*"windDirDegrees":(.*),.*"windSpeed":(.*),.*"humidityPct":(.*),.*"snowRange":(.*),.*"dayPartName":(.*),.*"precipPct":(.*),.*"precipAmt":(.*),.*"precipType":(.*),.*"temperature":(.*),.*"uvIndex":(.*),.*"uvDescription":(.*),.*"icon":(.*),.*"phrase":(.*),.*"narrative":(.*),.*"cloudPct":(.*),.*windDirCompass":(.*),.*"windDirDegrees":(.*),.*"windSpeed":(.*),.*"humidityPct":(.*),.*"snowRange":(.*),

[@ForecastDay3DayLong]
Measure=WebParser
URL=[@ForecastDay3Parent]
StringIndex=1
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay3DayShort]
Measure=WebParser
URL=[@ForecastDay3Parent]
StringIndex=2
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay3DayPrecipitationPercent]
Measure=WebParser
URL=[@ForecastDay3Parent]
StringIndex=3
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay3DayPrecipitationAmount]
Measure=WebParser
URL=[@ForecastDay3Parent]
StringIndex=4
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay3DayPrecipitationType]
Measure=WebParser
URL=[@ForecastDay3Parent]
StringIndex=5
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay3DayTemperature]
Measure=WebParser
URL=[@ForecastDay3Parent]
StringIndex=6
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay3DayUVIndex]
Measure=WebParser
URL=[@ForecastDay3Parent]
StringIndex=7
MinValue=0
MaxValue=10
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay3DayUVIndexDescription]
Measure=WebParser
URL=[@ForecastDay3Parent]
StringIndex=8
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay3DayIcon]
Measure=WebParser
URL=[@ForecastDay3Parent]
StringIndex=9
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay3DayConditions]
Measure=WebParser
URL=[@ForecastDay3Parent]
StringIndex=10
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay3DayNarrative]
Measure=WebParser
URL=[@ForecastDay3Parent]
StringIndex=11
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay3DayCloudPercent]
Measure=WebParser
URL=[@ForecastDay3Parent]
StringIndex=12
MinValue=0
MaxValue=100
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay3DayWindDirectionCompass]
Measure=WebParser
URL=[@ForecastDay3Parent]
StringIndex=13
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay3DayWindDirectionDegrees]
Measure=WebParser
URL=[@ForecastDay3Parent]
StringIndex=14
MinValue=0
MaxValue=360
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay3DayWindSpeed]
Measure=WebParser
URL=[@ForecastDay3Parent]
StringIndex=15
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay3DayHumidity]
Measure=WebParser
URL=[@ForecastDay3Parent]
StringIndex=16
MinValue=0
MaxValue=100
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay3DaySnowRange]
Measure=WebParser
URL=[@ForecastDay3Parent]
StringIndex=17
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay3NightShort]
Measure=WebParser
URL=[@ForecastDay3Parent]
StringIndex=18
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay3NightPrecipitationPercent]
Measure=WebParser
URL=[@ForecastDay3Parent]
StringIndex=19
MinValue=0
MaxValue=100
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay3NightPrecipitationAmount]
Measure=WebParser
URL=[@ForecastDay3Parent]
StringIndex=20
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay3NightPrecipitationType]
Measure=WebParser
URL=[@ForecastDay3Parent]
StringIndex=21
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay3NightTemperature]
Measure=WebParser
URL=[@ForecastDay3Parent]
StringIndex=22
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay3NightUVIndex]
Measure=WebParser
URL=[@ForecastDay3Parent]
StringIndex=23
MinValue=0
MaxValue=10
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay3NightUVIndexDescription]
Measure=WebParser
URL=[@ForecastDay3Parent]
StringIndex=24
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay3NightIcon]
Measure=WebParser
URL=[@ForecastDay3Parent]
StringIndex=25
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay3NightConditions]
Measure=WebParser
URL=[@ForecastDay3Parent]
StringIndex=26
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay3NightNarrative]
Measure=WebParser
URL=[@ForecastDay3Parent]
StringIndex=27
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay3NightCloudPercent]
Measure=WebParser
URL=[@ForecastDay3Parent]
StringIndex=28
MinValue=0
MaxValue=100
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay3NightWindDirectionCompass]
Measure=WebParser
URL=[@ForecastDay3Parent]
StringIndex=29
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay3NightWindDirectionDegrees]
Measure=WebParser
URL=[@ForecastDay3Parent]
StringIndex=30
MinValue=0
MaxValue=360
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay3NightWindSpeed]
Measure=WebParser
URL=[@ForecastDay3Parent]
StringIndex=31
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay3NightHumidity]
Measure=WebParser
URL=[@ForecastDay3Parent]
StringIndex=32
MinValue=0
MaxValue=100
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay3NightSnowRange]
Measure=WebParser
URL=[@ForecastDay3Parent]
StringIndex=33
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay3MonthLong]
Measure=Time
TimeStamp=([@CurrentObservationTime:TimeStamp]+(86400 * 2))
DynamicVariables=1
FormatLocale=#Language#
Format=%B

[@ForecastDay3MonthShort]
Measure=Time
TimeStamp=([@CurrentObservationTime:TimeStamp]+(86400 * 2))
DynamicVariables=1
FormatLocale=#Language#
Format=%b

[@ForecastDay3DayOfMonth]
Measure=Time
TimeStamp=([@CurrentObservationTime:TimeStamp]+(86400 * 2))
DynamicVariables=1
FormatLocale=#Language#
Format=%#d

; ========================================
; Forecasts for Day 4 day and night
; ========================================

[@ForecastDay4Parent]
Measure=WebParser
Group=Parents
URL=[@EntireSiteSuperParent]
Disabled=1
StringIndex=1
RegExp=(?siU)"vt1dailyForecast":.*"dayOfWeek":.*"dayOfWeek":.*,.*"dayOfWeek":.*,.*"dayOfWeek":(.*),.*"dayPartName":(.*),.*"precipPct":(.*),.*"precipAmt":(.*),.*"precipType":(.*),.*"temperature":(.*),.*"uvIndex":(.*),.*"uvDescription":(.*),.*"icon":(.*),.*"phrase":(.*),.*"narrative":(.*),.*"cloudPct":(.*),.*windDirCompass":(.*),.*"windDirDegrees":(.*),.*"windSpeed":(.*),.*"humidityPct":(.*),.*"snowRange":(.*),.*"dayPartName":(.*),.*"precipPct":(.*),.*"precipAmt":(.*),.*"precipType":(.*),.*"temperature":(.*),.*"uvIndex":(.*),.*"uvDescription":(.*),.*"icon":(.*),.*"phrase":(.*),.*"narrative":(.*),.*"cloudPct":(.*),.*windDirCompass":(.*),.*"windDirDegrees":(.*),.*"windSpeed":(.*),.*"humidityPct":(.*),.*"snowRange":(.*),

[@ForecastDay4DayLong]
Measure=WebParser
URL=[@ForecastDay4Parent]
StringIndex=1
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay4DayShort]
Measure=WebParser
URL=[@ForecastDay4Parent]
StringIndex=2
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay4DayPrecipitationPercent]
Measure=WebParser
URL=[@ForecastDay4Parent]
StringIndex=3
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay4DayPrecipitationAmount]
Measure=WebParser
URL=[@ForecastDay4Parent]
StringIndex=4
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay4DayPrecipitationType]
Measure=WebParser
URL=[@ForecastDay4Parent]
StringIndex=5
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay4DayTemperature]
Measure=WebParser
URL=[@ForecastDay4Parent]
StringIndex=6
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay4DayUVIndex]
Measure=WebParser
URL=[@ForecastDay4Parent]
StringIndex=7
MinValue=0
MaxValue=10
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay4DayUVIndexDescription]
Measure=WebParser
URL=[@ForecastDay4Parent]
StringIndex=8
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay4DayIcon]
Measure=WebParser
URL=[@ForecastDay4Parent]
StringIndex=9
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay4DayConditions]
Measure=WebParser
URL=[@ForecastDay4Parent]
StringIndex=10
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay4DayNarrative]
Measure=WebParser
URL=[@ForecastDay4Parent]
StringIndex=11
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay4DayCloudPercent]
Measure=WebParser
URL=[@ForecastDay4Parent]
StringIndex=12
MinValue=0
MaxValue=100
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay4DayWindDirectionCompass]
Measure=WebParser
URL=[@ForecastDay4Parent]
StringIndex=13
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay4DayWindDirectionDegrees]
Measure=WebParser
URL=[@ForecastDay4Parent]
StringIndex=14
MinValue=0
MaxValue=360
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay4DayWindSpeed]
Measure=WebParser
URL=[@ForecastDay4Parent]
StringIndex=15
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay4DayHumidity]
Measure=WebParser
URL=[@ForecastDay4Parent]
StringIndex=16
MinValue=0
MaxValue=100
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay4DaySnowRange]
Measure=WebParser
URL=[@ForecastDay4Parent]
StringIndex=17
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay4NightShort]
Measure=WebParser
URL=[@ForecastDay4Parent]
StringIndex=18
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay4NightPrecipitationPercent]
Measure=WebParser
URL=[@ForecastDay4Parent]
StringIndex=19
MinValue=0
MaxValue=100
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay4NightPrecipitationAmount]
Measure=WebParser
URL=[@ForecastDay4Parent]
StringIndex=20
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay4NightPrecipitationType]
Measure=WebParser
URL=[@ForecastDay4Parent]
StringIndex=21
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay4NightTemperature]
Measure=WebParser
URL=[@ForecastDay4Parent]
StringIndex=22
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay4NightUVIndex]
Measure=WebParser
URL=[@ForecastDay4Parent]
StringIndex=23
MinValue=0
MaxValue=10
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay4NightUVIndexDescription]
Measure=WebParser
URL=[@ForecastDay4Parent]
StringIndex=24
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay4NightIcon]
Measure=WebParser
URL=[@ForecastDay4Parent]
StringIndex=25
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay4NightConditions]
Measure=WebParser
URL=[@ForecastDay4Parent]
StringIndex=26
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay4NightNarrative]
Measure=WebParser
URL=[@ForecastDay4Parent]
StringIndex=27
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay4NightCloudPercent]
Measure=WebParser
URL=[@ForecastDay4Parent]
StringIndex=28
MinValue=0
MaxValue=100
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay4NightWindDirectionCompass]
Measure=WebParser
URL=[@ForecastDay4Parent]
StringIndex=29
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay4NightWindDirectionDegrees]
Measure=WebParser
URL=[@ForecastDay4Parent]
StringIndex=30
MinValue=0
MaxValue=360
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay4NightWindSpeed]
Measure=WebParser
URL=[@ForecastDay4Parent]
StringIndex=31
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay4NightHumidity]
Measure=WebParser
URL=[@ForecastDay4Parent]
StringIndex=32
MinValue=0
MaxValue=100
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay4NightSnowRange]
Measure=WebParser
URL=[@ForecastDay4Parent]
StringIndex=33
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay4MonthLong]
Measure=Time
TimeStamp=([@CurrentObservationTime:TimeStamp]+(86400 * 3))
DynamicVariables=1
FormatLocale=#Language#
Format=%B

[@ForecastDay4MonthShort]
Measure=Time
TimeStamp=([@CurrentObservationTime:TimeStamp]+(86400 * 3))
DynamicVariables=1
FormatLocale=#Language#
Format=%b

[@ForecastDay4DayOfMonth]
Measure=Time
TimeStamp=([@CurrentObservationTime:TimeStamp]+(86400 * 3))
DynamicVariables=1
FormatLocale=#Language#
Format=%#d

; ========================================
; Forecasts for Day 5 day and night
; ========================================

[@ForecastDay5Parent]
Measure=WebParser
Group=Parents
URL=[@EntireSiteSuperParent]
Disabled=1
StringIndex=1
RegExp=(?siU)"vt1dailyForecast":.*"dayOfWeek":.*"dayOfWeek":.*"dayOfWeek":.*"dayOfWeek":.*"dayOfWeek":(.*),.*"dayPartName":(.*),.*"precipPct":(.*),.*"precipAmt":(.*),.*"precipType":(.*),.*"temperature":(.*),.*"uvIndex":(.*),.*"uvDescription":(.*),.*"icon":(.*),.*"phrase":(.*),.*"narrative":(.*),.*"cloudPct":(.*),.*windDirCompass":(.*),.*"windDirDegrees":(.*),.*"windSpeed":(.*),.*"humidityPct":(.*),.*"snowRange":(.*),.*"dayPartName":(.*),.*"precipPct":(.*),.*"precipAmt":(.*),.*"precipType":(.*),.*"temperature":(.*),.*"uvIndex":(.*),.*"uvDescription":(.*),.*"icon":(.*),.*"phrase":(.*),.*"narrative":(.*),.*"cloudPct":(.*),.*windDirCompass":(.*),.*"windDirDegrees":(.*),.*"windSpeed":(.*),.*"humidityPct":(.*),.*"snowRange":(.*),

[@ForecastDay5DayLong]
Measure=WebParser
URL=[@ForecastDay5Parent]
StringIndex=1
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay5DayShort]
Measure=WebParser
URL=[@ForecastDay5Parent]
StringIndex=2
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay5DayPrecipitationPercent]
Measure=WebParser
URL=[@ForecastDay5Parent]
StringIndex=3
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay5DayPrecipitationAmount]
Measure=WebParser
URL=[@ForecastDay5Parent]
StringIndex=4
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay5DayPrecipitationType]
Measure=WebParser
URL=[@ForecastDay5Parent]
StringIndex=5
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay5DayTemperature]
Measure=WebParser
URL=[@ForecastDay5Parent]
StringIndex=6
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay5DayUVIndex]
Measure=WebParser
URL=[@ForecastDay5Parent]
StringIndex=7
MinValue=0
MaxValue=10
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay5DayUVIndexDescription]
Measure=WebParser
URL=[@ForecastDay5Parent]
StringIndex=8
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay5DayIcon]
Measure=WebParser
URL=[@ForecastDay5Parent]
StringIndex=9
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay5DayConditions]
Measure=WebParser
URL=[@ForecastDay5Parent]
StringIndex=10
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay5DayNarrative]
Measure=WebParser
URL=[@ForecastDay5Parent]
StringIndex=11
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay5DayCloudPercent]
Measure=WebParser
URL=[@ForecastDay5Parent]
StringIndex=12
MinValue=0
MaxValue=100
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay5DayWindDirectionCompass]
Measure=WebParser
URL=[@ForecastDay5Parent]
StringIndex=13
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay5DayWindDirectionDegrees]
Measure=WebParser
URL=[@ForecastDay5Parent]
StringIndex=14
MinValue=0
MaxValue=360
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay5DayWindSpeed]
Measure=WebParser
URL=[@ForecastDay5Parent]
StringIndex=15
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay5DayHumidity]
Measure=WebParser
URL=[@ForecastDay5Parent]
StringIndex=16
MinValue=0
MaxValue=100
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay5DaySnowRange]
Measure=WebParser
URL=[@ForecastDay5Parent]
StringIndex=17
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay5NightShort]
Measure=WebParser
URL=[@ForecastDay5Parent]
StringIndex=18
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay5NightPrecipitationPercent]
Measure=WebParser
URL=[@ForecastDay5Parent]
StringIndex=19
MinValue=0
MaxValue=100
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay5NightPrecipitationAmount]
Measure=WebParser
URL=[@ForecastDay5Parent]
StringIndex=20
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay5NightPrecipitationType]
Measure=WebParser
URL=[@ForecastDay5Parent]
StringIndex=21
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay5NightTemperature]
Measure=WebParser
URL=[@ForecastDay5Parent]
StringIndex=22
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay5NightUVIndex]
Measure=WebParser
URL=[@ForecastDay5Parent]
StringIndex=23
MinValue=0
MaxValue=10
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay5NightUVIndexDescription]
Measure=WebParser
URL=[@ForecastDay5Parent]
StringIndex=24
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay5NightIcon]
Measure=WebParser
URL=[@ForecastDay5Parent]
StringIndex=25
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay5NightConditions]
Measure=WebParser
URL=[@ForecastDay5Parent]
StringIndex=26
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay5NightNarrative]
Measure=WebParser
URL=[@ForecastDay5Parent]
StringIndex=27
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay5NightCloudPercent]
Measure=WebParser
URL=[@ForecastDay5Parent]
StringIndex=28
MinValue=0
MaxValue=100
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay5NightWindDirectionCompass]
Measure=WebParser
URL=[@ForecastDay5Parent]
StringIndex=29
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay5NightWindDirectionDegrees]
Measure=WebParser
URL=[@ForecastDay5Parent]
StringIndex=30
MinValue=0
MaxValue=360
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay5NightWindSpeed]
Measure=WebParser
URL=[@ForecastDay5Parent]
StringIndex=31
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay5NightHumidity]
Measure=WebParser
URL=[@ForecastDay5Parent]
StringIndex=32
MinValue=0
MaxValue=100
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay5NightSnowRange]
Measure=WebParser
URL=[@ForecastDay5Parent]
StringIndex=33
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay5MonthLong]
Measure=Time
TimeStamp=([@CurrentObservationTime:TimeStamp]+(86400 * 4))
DynamicVariables=1
FormatLocale=#Language#
Format=%B

[@ForecastDay5MonthShort]
Measure=Time
TimeStamp=([@CurrentObservationTime:TimeStamp]+(86400 * 4))
DynamicVariables=1
FormatLocale=#Language#
Format=%b

[@ForecastDay5DayOfMonth]
Measure=Time
TimeStamp=([@CurrentObservationTime:TimeStamp]+(86400 * 4))
DynamicVariables=1
FormatLocale=#Language#
Format=%#d

; ========================================
; Forecasts for Day 6 day and night
; ========================================

[@ForecastDay6Parent]
Measure=WebParser
Group=Parents
URL=[@EntireSiteSuperParent]
Disabled=1
StringIndex=1
RegExp=(?siU)"vt1dailyForecast":.*"dayOfWeek":.*"dayOfWeek":.*"dayOfWeek":.*"dayOfWeek":.*"dayOfWeek":.*"dayOfWeek":(.*),.*"dayPartName":(.*),.*"precipPct":(.*),.*"precipAmt":(.*),.*"precipType":(.*),.*"temperature":(.*),.*"uvIndex":(.*),.*"uvDescription":(.*),.*"icon":(.*),.*"phrase":(.*),.*"narrative":(.*),.*"cloudPct":(.*),.*windDirCompass":(.*),.*"windDirDegrees":(.*),.*"windSpeed":(.*),.*"humidityPct":(.*),.*"snowRange":(.*),.*"dayPartName":(.*),.*"precipPct":(.*),.*"precipAmt":(.*),.*"precipType":(.*),.*"temperature":(.*),.*"uvIndex":(.*),.*"uvDescription":(.*),.*"icon":(.*),.*"phrase":(.*),.*"narrative":(.*),.*"cloudPct":(.*),.*windDirCompass":(.*),.*"windDirDegrees":(.*),.*"windSpeed":(.*),.*"humidityPct":(.*),.*"snowRange":(.*),

[@ForecastDay6DayLong]
Measure=WebParser
URL=[@ForecastDay6Parent]
StringIndex=1
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay6DayShort]
Measure=WebParser
URL=[@ForecastDay6Parent]
StringIndex=2
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay6DayPrecipitationPercent]
Measure=WebParser
URL=[@ForecastDay6Parent]
StringIndex=3
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay6DayPrecipitationAmount]
Measure=WebParser
URL=[@ForecastDay6Parent]
StringIndex=4
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay6DayPrecipitationType]
Measure=WebParser
URL=[@ForecastDay6Parent]
StringIndex=5
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay6DayTemperature]
Measure=WebParser
URL=[@ForecastDay6Parent]
StringIndex=6
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay6DayUVIndex]
Measure=WebParser
URL=[@ForecastDay6Parent]
StringIndex=7
MinValue=0
MaxValue=10
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay6DayUVIndexDescription]
Measure=WebParser
URL=[@ForecastDay6Parent]
StringIndex=8
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay6DayIcon]
Measure=WebParser
URL=[@ForecastDay6Parent]
StringIndex=9
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay6DayConditions]
Measure=WebParser
URL=[@ForecastDay6Parent]
StringIndex=10
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay6DayNarrative]
Measure=WebParser
URL=[@ForecastDay6Parent]
StringIndex=11
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay6DayCloudPercent]
Measure=WebParser
URL=[@ForecastDay6Parent]
StringIndex=12
MinValue=0
MaxValue=100
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay6DayWindDirectionCompass]
Measure=WebParser
URL=[@ForecastDay6Parent]
StringIndex=13
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay6DayWindDirectionDegrees]
Measure=WebParser
URL=[@ForecastDay6Parent]
StringIndex=14
MinValue=0
MaxValue=360
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay6DayWindSpeed]
Measure=WebParser
URL=[@ForecastDay6Parent]
StringIndex=15
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay6DayHumidity]
Measure=WebParser
URL=[@ForecastDay6Parent]
StringIndex=16
MinValue=0
MaxValue=100
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay6DaySnowRange]
Measure=WebParser
URL=[@ForecastDay6Parent]
StringIndex=17
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay6NightShort]
Measure=WebParser
URL=[@ForecastDay6Parent]
StringIndex=18
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay6NightPrecipitationPercent]
Measure=WebParser
URL=[@ForecastDay6Parent]
StringIndex=19
MinValue=0
MaxValue=100
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay6NightPrecipitationAmount]
Measure=WebParser
URL=[@ForecastDay6Parent]
StringIndex=20
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay6NightPrecipitationType]
Measure=WebParser
URL=[@ForecastDay6Parent]
StringIndex=21
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay6NightTemperature]
Measure=WebParser
URL=[@ForecastDay6Parent]
StringIndex=22
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay6NightUVIndex]
Measure=WebParser
URL=[@ForecastDay6Parent]
StringIndex=23
MinValue=0
MaxValue=10
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay6NightUVIndexDescription]
Measure=WebParser
URL=[@ForecastDay6Parent]
StringIndex=24
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay6NightIcon]
Measure=WebParser
URL=[@ForecastDay6Parent]
StringIndex=25
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay6NightConditions]
Measure=WebParser
URL=[@ForecastDay6Parent]
StringIndex=26
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay6NightNarrative]
Measure=WebParser
URL=[@ForecastDay6Parent]
StringIndex=27
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay6NightCloudPercent]
Measure=WebParser
URL=[@ForecastDay6Parent]
StringIndex=28
MinValue=0
MaxValue=100
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay6NightWindDirectionCompass]
Measure=WebParser
URL=[@ForecastDay6Parent]
StringIndex=29
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay6NightWindDirectionDegrees]
Measure=WebParser
URL=[@ForecastDay6Parent]
StringIndex=30
MinValue=0
MaxValue=360
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay6NightWindSpeed]
Measure=WebParser
URL=[@ForecastDay6Parent]
StringIndex=31
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay6NightHumidity]
Measure=WebParser
URL=[@ForecastDay6Parent]
StringIndex=32
MinValue=0
MaxValue=100
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay6NightSnowRange]
Measure=WebParser
URL=[@ForecastDay6Parent]
StringIndex=33
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@ForecastDay6MonthLong]
Measure=Time
TimeStamp=([@CurrentObservationTime:TimeStamp]+(86400 * 5))
DynamicVariables=1
FormatLocale=#Language#
Format=%B

[@ForecastDay6MonthShort]
Measure=Time
TimeStamp=([@CurrentObservationTime:TimeStamp]+(86400 * 5))
DynamicVariables=1
FormatLocale=#Language#
Format=%b

[@ForecastDay6DayOfMonth]
Measure=Time
TimeStamp=([@CurrentObservationTime:TimeStamp]+(86400 * 5))
DynamicVariables=1
FormatLocale=#Language#
Format=%#d