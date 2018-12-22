[Variables]
; LocationCode can be obtained at http://wxdata.weather.com/wxdata/search/search?where=YourCityName
locationCode=USUT0281
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

weatherUpdateRate=10

showHumidity=1
showUv=1
showUvChart=1
showVisibility=1
showDewpoint=1
showMoon=1

timeFormat=WinShort
dateFormat=WinShort
customTimeFormat=%#I:%M %p
customDateFormat=%m/%d/%y

colorUvLow=47,149,35
colorUvModerate=245,229,55
colorUvHigh=247,90,26
colorUvVeryHigh=214,0,27
colorUvExtreme=109,69,198

colorSkyDialBg=150,150,150
colorSkyDialSun=250,222,110
colorSkyDialMoon=180,180,180

colorMoon=200,200,200
colorMoonBg=60,60,60

showMoonInfo=1
showMoonAngle=1
