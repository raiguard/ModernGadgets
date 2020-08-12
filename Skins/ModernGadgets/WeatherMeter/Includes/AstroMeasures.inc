; This is NOT part of the WeatherCom includes, this is a custom file that depends on them

[Variables]
astroApiKey=6532d6454b8aa370768e63d6ba5a832e

[@AstroTimestamp]
Measure=Time
Group=Times
Disabled=1
TimeStamp=[@CurrentObservationTimeStamp]
TimeStampFormat=%Y-%m-%dT%H:%M:%S
Format=%Y%m%d
DynamicVariables=1

[@AstroSuperParent]
Measure=WebParser
URL=https://api.weather.com/v2/astro?apiKey=#astroApiKey#&geocode=#latitude#%2C#longitude#&days=1&date=[&@AstroTimestamp]&format=json
UpdateRate=#UpdateRate#
Flags=Resync | NoCookies
UserAgent=Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:78.0) Gecko/20100101 Firefox/78.0
DecodeCharacterReference=1
LogSubstringErrors=0
RegExp=(?siU)^(.*)$
StringIndex=1
DynamicVariables=1
FinishAction=[!EnableMeasureGroup Astro][!Update]
Group=Times
Disabled=1

[@AstroMoonRiseSetParent]
Measure=WebParser
URL=[@AstroSuperParent]
RegExp=(?siU)"percentIlluminated":(.*),
StringIndex=1
Group=Astro
Disabled=1

[@AstroMoonPercentIlluminated]
Measure=WebParser
URL=[@AstroMoonRiseSetParent]
StringIndex=1
Group=Astro
Disabled=1