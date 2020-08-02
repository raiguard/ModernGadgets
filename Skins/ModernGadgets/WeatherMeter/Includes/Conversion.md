# Converting from jsmorley's weather measures

## WeatherComJSONMeasures

1. Copy contents of WeatherComJSONMeasures.inc
2. Remove all forecast measures after `today`
3. Convert Latitude, Longitude, Language, Units, and UpdateRate variables to camelCase
4. Change TimeFormat variable to `[&Measure[#timeFormat]TimeFormat]`
5. Comment out @CurrentObservationDate measure (unused)
6. Copy API key, common substitute, and URL variables from WeatherComJSONVariables.inc, paste at top of WeatherComJSONMeasures.inc
7. Add `; Edited by raiguard for ModernGadgets - see Conversion.md` below last edited date at top

## WeatherComJSONMoon

1. Copy contents of WeatherComJSONMoon.inc
2. Remove all but the first day
3. Change TimeFormat variable to `[&Measure[#timeFormat]TimeFormat]`
4. Add `; Edited by raiguard for ModernGadgets - see Conversion.md` below last edited date at top
