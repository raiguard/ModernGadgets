[Variables]
; LocationCode can be obtained at http://wxdata.weather.com/wxdata/search/search?where=YourCityName
locationCode=JAXX0085:1:JA
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

weatherUpdateRate=10

showHumidity=1
showUv=1
showUvChart=1
showVisibility=1
showDewpoint=1

showMoon=1
