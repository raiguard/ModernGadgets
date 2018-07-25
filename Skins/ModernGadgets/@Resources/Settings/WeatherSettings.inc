[Variables]
; LocationCode can be obtained at http://wxdata.weather.com/wxdata/search/search?where=YourCityName
locationCode=USUT0281:1:US
; UnitOfMeasure can be "f" (Fahrenheit / Imperial) or "m" (Celsius / Metric)
unitOfMeasure=f
; Number of days to return in the feed.(1-6).
; The feed will always return the current conditions and the forecast for "Today"
; Then up to 5 additional forecast days. (Day 1 - Day 5)
daysFeed=6
; Locale (language) to use in the feed.
; https://msdn.microsoft.com/en-us/goglobal/bb896001.aspx
; Note that Weather.com uses "_" underline instead of "-" dash in the codes.
locale=en_US
;Locale=fr_FR
