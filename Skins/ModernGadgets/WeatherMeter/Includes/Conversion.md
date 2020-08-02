# Converting from jsmorley's weather measures

## WeatherComJSONMeasures

1. Copy contents of WeatherComJSONMeasures.inc
2. Add `[!Update]` to the end of `@EntireSiteSuperParent`'s `FinishAction`
3. Remove all forecast measures after `today`
4. Convert Latitude, Longitude, Language, Units, and UpdateRate variables to camelCase
5. Change TimeFormat variable to `[&Measure[#timeFormat]TimeFormat]`
6. Comment out `@CurrentObservationDate` measure (unused)
7. Copy API key, common substitute, and URL variables from WeatherComJSONVariables.inc, paste at top of WeatherComJSONMeasures.inc
8. Add `; Edited by raiguard for ModernGadgets - see Conversion.md` below last edited date at top

## WeatherComJSONMoon

1. Copy contents of WeatherComJSONMoon.inc
2. Remove all but the first day
3. Change TimeFormat variable to `[&Measure[#timeFormat]TimeFormat]`
4. Add a `,"":"-----"` to `Substitute` in `@MoonDay1PhaseName`
5. Add `; Edited by raiguard for ModernGadgets - see Conversion.md` below last edited date at top

## WeatherComJSONAlerts

1. Copy contents of WeatherComJSONAlerts.inc
2. Remove all but the first alert
3. Add `; Edited by raiguard for ModernGadgets - see Conversion.md` below last edited date at top
