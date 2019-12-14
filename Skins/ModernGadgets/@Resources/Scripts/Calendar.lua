-- LuaCalendar v5.0 by Smurfier (john@smurfier.com)
-- This work is licensed under a Creative Commons Attribution-Noncommercial-Share Alike 3.0 License.

-- Modifications by SilverAzide:
--   1.0.0 - revised so moon phases are subordinate to holidays
--   3.0.0 - corrected error in calculating "{LastXxx}" event dates when StartOnMonday is true
--         - enhanced code to use localized strings for months and days
--   4.1.1 - removed localization code; Lua in Rainmeter does not support localization
-- Modifications by TGonZo:
--   1.6.1 - revised to add support for TransformationMatrix (scaling)

function Initialize()
  Settings.Color = 'FontColor'
  Settings.HideLastWeek = Get.NumberVariable('HideLastWeek') > 0
  Settings.LeadingZeroes = Get.NumberVariable('LeadingZeroes') > 0
  Settings.StartOnMonday = Get.NumberVariable('StartOnMonday') > 0
  Settings.LabelFormat = Get.Variable('LabelText', '{$MName} {$Year}')
  Settings.NextFormat = Get.Variable('NextFormat', '{$day}: {$desc}')
  Settings.Locale = Get.NumberVariable('UseLocalMonths') > 0
  --Settings.MonthNames = Delim(Get.Variable('MonthLabels'))
  Settings.MonthNames = Delim(Get.Variable('MonthLabels', 'Jan|Feb|Mar|Apr|May|Jun|Jul|Aug|Sep|Oct|Nov|Dec'))
  Settings.MoonPhases = Get.NumberVariable('ShowMoonPhases') > 0
  Settings.MoonColor = Parse.Color(Get.Variable('MoonColor', ''))
  Settings.ShowEvents = Get.NumberVariable('ShowEvents') > 0
  -- Weekday labels text
  SetLabels(Delim(Get.Variable('DayLabels', 'S|M|T|W|T|F|S')))
  --Events File
  LoadEvents(ExpandFolder(Delim(Get.Variable('EventFile'))))

 end -- Initialize

 function Update()
  CombineScroll(0)

  -- If in the current month or if browsing and Month changes to that month, set to Real Time
  if (Time.stats.inmonth and Time.show.month ~= Time.curr.month) or ((not Time.stats.inmonth) and Time.show.month == Time.curr.month and Time.show.year == Time.curr.year) then
     Move()
  end

  if Time.show.month ~= Time.old.month or Time.show.year ~= Time.old.year then -- Recalculate and Redraw if Month and/or Year changes
     Time.old = {month = Time.show.month, year = Time.show.year, day = Time.curr.day}
     Events()
     Draw()
  elseif Time.curr.day ~= Time.old.day then -- Redraw if Today changes
     Time.old.day = Time.curr.day
     Draw()
  end

  return ReturnError()
 end -- Update

 function CombineScroll(input)
  if input and not Scroll then
     Scroll = input
  elseif Scroll ~= 0 and input == 0 then
     Move(Scroll / math.abs(Scroll))
     Scroll = 0
  else
     Scroll = Scroll + input
  end
 end -- CombineScroll

 Settings = setmetatable({}, {
  __index = {
     Name = 'LuaCalendar', -- String
     Color = '', -- String
     Range = 'month', -- String
     HideLastWeek = false, -- Boolean
     LeadingZeroes = false, -- Boolean
     StartOnMonday = false, -- Boolean
     LabelFormat = '{$MName}, {$Year}', -- String
     NextFormat = '{$day}: {$desc}', -- String
     Locale = false, -- Boolean
     MonthNames = {}, -- Table
     MoonPhases = false, -- Boolean
     MoonColor = '', -- String
     ShowEvents = true, -- Boolean
  },
  __newindex = function(_, key, value)
     local tbl = getmetatable(Settings).__index
     if tbl[key] ~= nil then
      if type(value) == type(tbl[key]) then
       rawset(Settings, key, value)
      else
       local title = function(input) return (type(input):gsub('(.)(.*)', function(first, rest) return first:upper() .. rest:lower() end)) end
       ErrMsg(nil, '%s: Invalid Setting type. %s expected, received %s instead.', key, title(tbl[key]), title(value))
      end
     else
      ErrMsg(nil, 'Setting does not exist: %s', key)
     end
  end}
 ) -- Settings

 Meters = setmetatable({}, {
  __index = {
     Labels = { -- Week Day Labels
      Name = 'l%d',
      Styles = {
       Normal = 'LblTxtSty',
       First = 'LblTxtStart',
       Current = 'LblCurrSty',
      },
     },
     Days = { -- Month Days
      Name = 'mDay%d',
      Styles = {
       Normal = 'TextStyle',
       FirstDay = 'FirstDay',
       NewWeek = 'NewWk',
       Current = 'CurrentDay',
       LastWk = 'LastWeek',
       PrevMnth = 'PreviousMonth',
       NxtMnth = 'NextMonth',
       Wknd = 'WeekendStyle',
       Holiday = 'HolidayStyle',
      },
     },
     DaysTT = { -- Month Days for ToolTips (TGonZo)
      Name = 'ttDay%d',
      Styles = {
       Normal = 'TextStyleTT',
       FirstDay = 'FirstDayTT',
       NewWeek = 'NewWkTT',
       Current = 'CurrentDayTT',
       LastWk = 'LastWeek',
       PrevMnth = 'PreviousMonth',
       NxtMnth = 'NextMonth',
       Wknd = 'WeekendStyle',
       Holiday = 'HolidayStyleTT',
      },
     },
  },
 }) -- Meters

 Time = { -- Used to store and call date functions and statistics
  curr = setmetatable({}, {__index = function(_, index) return os.date('*t')[index] end,}),
  old = {day = 0, month = 0, year = 0,},
  show = os.date('*t'),
  stats = setmetatable({inmonth = true,}, {__index = function(_, index)
     local tstart = os.time{day = 1, month = Time.show.month, year = Time.show.year, isdst = false,}
     local nstart = os.time{day = 1, month = (Time.show.month % 12 + 1), year = (Time.show.year + (Time.show.month == 12 and 1 or 0)), isdst = false,}

     return ({
      clength = ((nstart - tstart) / 86400),
      plength = (tonumber(os.date('%d', tstart - 86400))),
      startday = rotate(tonumber(os.date('%w', tstart))),
     })[index]
  end,}),
 } -- Time

 Range = setmetatable({ -- Makes allowance for either Month or Week ranges
  month = {
     formula = function(input) return input - Time.stats.startday end,
     adjustment = function(input) return input end,
     days = 42,
     week = function() return math.ceil((Time.curr.day + Time.stats.startday) / 7) end,
  },
  week = {
     formula = function(input) return Time.curr.day + ((input - 1) - rotate(Time.curr.wday - 1)) end,
     adjustment = function(input) local num = input % 7 return num == 0 and 7 or num end,
     days = 7,
     week = function() return 1 end,
     nomove = true,
  },
  }, { __index = function(tbl, index) return ErrMsg(tbl.month, 'Invalid Range: %s', index) end,
 }) -- Range

 function MLabels(input) -- Makes allowance for Month Names
  if Settings.Locale then
     os.setlocale('', 'time')
     return os.date('%B', os.time{year = 2000, month = input, day = 1})
  elseif Settings.MonthNames then
     return Settings.MonthNames[input] or ErrMsg(input, 'Not enough indices in MonthNames')
  else
     return input
  end
 end -- MLabels

 function Delim(input, sep) -- Separates an input string by a delimiter
  test(type(input) == 'string', 'Delim: input must be a string. Received %s instead', type(input))
  if sep then test(type(sep) == 'string', 'Delim: sep must be a string. Received %s instead', type(sep)) end
  local tbl = {}
  for word in input:gmatch('[^' .. (sep or '|') .. ']+') do table.insert(tbl, word:match('^%s*(.-)%s*$')) end
  return tbl
 end -- Delim

 function ExpandFolder(input) -- Makes allowance for when the first value in a table represents the folder containing all objects.
  test(type(input) == 'table', 'ExpandFolder: input must be a table. Received %s instead.', type(input))
  if #input > 1 then
     local folder = table.remove(input, 1)
     if not folder:match('[/\\]$') then folder = folder .. '\\' end
     for k, v in ipairs(input) do input[k] = SKIN:MakePathAbsolute(folder .. v) end
  end
  return input
 end -- ExpandFolder

 function SetLabels(tbl) -- Sets weekday labels
  local res = test(type(tbl) == 'table', 'SetLabels must receive a table')
  if res then res = test(#tbl >= 7, 'SetLabels must receive a table with seven indicies') end
  if not res then tbl = {'S', 'M', 'T', 'W', 'T', 'F', 'S'} end
  for a = 1, 7 do SKIN:Bang('!SetOption', Meters.Labels.Name:format(a), 'Text', tbl[Settings.StartOnMonday and (a % 7 + 1) or a]) end
 end -- SetLabels

 function LoadEvents(FileTable)
  test(type(FileTable) == 'table', 'LoadEvents: input must be a table. Received %s instead.', type(FileTable))

  if not Settings.ShowEvents then
     FileTable = {}
  end

  hFile = {}

  local Keys = function(line)
     local tbl = {}

     local escape = {quot = '"', lt = '<', gt = '>', amp = '&',} -- XML escape characters

     for key, value in line:gmatch('(%a+)="([^"]+)"') do
      tbl[key:lower()] = value:gsub('&([^;]+);', escape):gsub('\r?\n', ' '):match('^%s*(.-)%s*$')
     end

     return tbl
  end

  for _, FileName in ipairs(FileTable) do
     local File, fName = test(io.open(FileName, 'r'), 'File Read Error: %s', fName), FileName:match('[^/\\]+$')

     local open, content, close = File:read('*all'):gsub('<!%-%-.-%-%->', ''):match('^.-<([^>]+)>(.+)<([^>]+)>[^>]*$')
     File:close()

     test(open:match('%S+'):lower() == 'eventfile' and close:lower() == '/eventfile', 'Invalid Event File: %s', fName)
     local eFile, eSet = Keys(open), {}

     for tag, line in content:gmatch('<([^%s>]+)([^>]*)>') do
      local ntag = tag:lower()

      if ntag == 'variable' then
       local Tmp = Keys(line)

       if not Variables then
        Variables = {[fName] = {[Tmp.name:lower()] = Tmp.select,},}
       elseif not Variables[fName] then
        Variables[fName] = {[Tmp.name:lower()] = Tmp.select,}
       else
        Variables[fname][Tmp.name:lower()] = Tmp.select
       end
      elseif ntag == 'set' then
       table.insert(eSet, Keys(line))
      elseif ntag == '/set' then
       table.remove(eSet)
      elseif ntag == 'event' then
       local Tmp, dSet, tbl = Keys(line), {}, {}
       for _, column in ipairs(eSet) do
        for key, value in pairs(column) do dSet[key] = value end
       end
       for _, v in pairs{'month', 'day', 'year', 'description', 'title', 'color', 'repeat', 'multiplier', 'anniversary', 'inactive', 'case', 'skip', 'timestamp'} do
        tbl[v] = Tmp[v] or dSet[v] or eFile[v] or ''
       end
       tbl.fname = fName
       table.insert(hFile, tbl)
      else
       ErrMsg(nil, 'Invalid Event Tag <%s> in %s', tag, fName)
      end
     end
  end
 end -- LoadEvents

 function Events() -- Parse Events table.
  Hol = setmetatable({}, { __call = function(self) -- Returns a list of events
     local Evns = {}

     for day = Time.stats.inmonth and Time.curr.day or 1, Time.stats.clength do -- Parse through month days to keep days in order
      if self[day] then
       local tbl = setmetatable({day = day, desc = table.concat(self[day]['text'], ', ')},
        { __index = function(_, input) return ErrMsg('', 'Invalid NextFormat variable {$%s}', input) end,})
       table.insert(Evns, (Settings.NextFormat:gsub('{%$([^}]+)}', function(variable) return tbl[variable:lower()] end)) )
      end
     end

     return table.concat(Evns, '\n')
  end})

  local tstamp = function(d, m, y) return os.time{day = d, month = m, year = y, isdst = false} end

  local DefineEvent = function(d, e, c)
     if not Hol[d] then
      Hol[d] = {text = {e}, color = {c},}
     else
      table.insert(Hol[d].text, e)
      -- next line commented out by SilverAzide so moon phases are subordinate to holidays
      --table.insert(Hol[d].color, c)
     end
  end

  for _, event in ipairs(hFile or {}) do

     -- Parse necesssary options
     local dtbl = {stamp = Parse.Number(event.timestamp, false, event.fname)}
     if dtbl.stamp then
      dtbl = os.date('*t', dtbl.stamp)
     else
      dtbl.month = Parse.Number(event.month, false, event.fname)
      dtbl.day = Parse.Number(event.day, false, event.fname) or ErrMsg(0, 'Invalid Event Day %s in %s', event.day, event.description)
      dtbl.year = Parse.Number(event.year, false, event.fname)
     end
     dtbl.multip = Parse.Number(event.multiplier, 1, event.fname, 0)
     dtbl.erepeat = Parse.List(event['repeat'], 'none', event.fname, 'none|week|year|month|custom')

     -- Find matching events
     if not Parse.Boolean(event.inactive, event.fname) then

      local AddEvn = function(day, ann)
       local desc = Parse.String(event.description, '', event.fname, true)
       if Parse.Boolean(event.anniversary, event.fname) and ann then desc = desc .. (' (%s)'):format(ann) end
       local title = Parse.String(event.title, '', event.fname, true)
       if title ~= '' then desc = ' -' .. title end

       local color = Parse.Color(event.color, event.fname)

       local case = Parse.List(event.case, 'none', event.fname, 'none|lower|upper|title|sentence')
       if case == 'lower' then
        desc = desc:lower()
       elseif case == 'upper' then
        desc = desc:upper()
       elseif case == 'title' then
        desc = desc:gsub('(%S)(%S*)', function(first, rest) return first:upper() .. rest:lower() end)
       elseif case == 'sentence' then
        desc = desc:gsub('[^.!?]+', function(sentence)
           local space, first, rest = sentence:match('(%s*)(.)(.*)')
           return space .. first:upper() .. rest:lower():gsub("%si([%s'])", ' I%1')
        end)
       end

       if not Parse.String(event.skip, '', event.fname):find(('%02d%02d%04d'):format(day, Time.show.month, Time.show.year)) then
        DefineEvent(day, desc, color)
       end
      end

      local frame = function(period)
       local start, current = tstamp(dtbl.day, dtbl.month, dtbl.year), tstamp(1, Time.show.month, Time.show.year)

       if (current + Time.stats.clength * 86400) >= start and period > 0 then
        local mod = (current - start) % period
        local first = current + (mod > 0 and period - mod or 0)

        while true do
           if first >= start then
            local temp = os.date('*t', first)
            if temp.month == Time.show.month and temp.year == Time.show.year then
             AddEvn(temp.day, (first - start) / period + 1)
            else
             break
            end
           end
           first = first + period
        end
       end
      end

      if dtbl.erepeat == 'custom' and dtbl.year and dtbl.month and dtbl.day and dtbl.multip >= 86400 then
       frame(dtbl.multip)
      elseif dtbl.erepeat == 'week' and dtbl.month and dtbl.year and dtbl.day then
       frame(dtbl.multip * 604800)
      elseif dtbl.erepeat == 'year' and dtbl.month == Time.show.month and ((dtbl.year and dtbl.multip > 1) and ((Time.show.year - dtbl.year) % dtbl.multip) or 0) == 0 then
       AddEvn(dtbl.day, dtbl.year and Time.show.year - dtbl.year / dtbl.multip)
      elseif dtbl.erepeat == 'month' then
       if not dtbl.month and dtbl.year then
        AddEvn(dtbl.day)
       elseif Time.show.year >= dtbl.year then
        local ydiff = Time.show.year - dtbl.year - 1
        local mdiff = ydiff == -1 and (Time.show.month - dtbl.month) or ((12 - dtbl.month) + Time.show.month + (ydiff * 12))

        if (mdiff % dtbl.multip) == 0 and tstamp(1, Time.show.month, Time.show.year) >= tstamp(1, dtbl.month, dtbl.year) then
           AddEvn(dtbl.day, mdiff / dtbl.multip + 1)
        end
       end
      elseif dtbl.erepeat =='none' and dtbl.year == Time.show.year then
       AddEvn(dtbl.day)
      end
     end
  end

  -- Find the Moon Phases for the Month
  if type(GetPhaseNumber) == 'function' and Settings.MoonPhases and Settings.ShowEvents then
     local moon, names = {}, {[1] = 'New Moon', [5] = 'Full Moon',}
     for i = 1, Time.stats.clength do
      local phase = GetPhaseNumber(Time.show.year, Time.show.month, i)
      if names[phase] and not moon[i - 1] then
       moon[i] = names[phase]
      end
     end
     -- Apply the Moon Phases to the Hol table
     for k, v in pairs(moon) do
      DefineEvent(k, v, Settings.MoonColor)
     end
  end
 end -- Events

 function Draw() -- Sets all meter properties and calculates days
  local LastWeek = Settings.HideLastWeek and math.ceil((Time.stats.startday + Time.stats.clength) / 7) < 6

  for wday = 1, 7 do -- Set Weekday Labels styles
     local Styles = {Meters.Labels.Styles.Normal}
     if wday == 1 then
      table.insert(Styles, Meters.Labels.Styles.First)
     end
     if rotate(Time.curr.wday - 1) == (wday - 1) and Time.stats.inmonth then
      table.insert(Styles, Meters.Labels.Styles.Current)
     end
     SKIN:Bang('!SetOption', Meters.Labels.Name:format(wday), 'MeterStyle', table.concat(Styles, '|'))
  end

  for meter = 1, Range[Settings.Range].days do -- Calculate and set day meters

     --
     -- insert into array the X, Y, H, W, font size/type/color, transformationmatrix for the meter
     --
     local Styles, day, event, color = {Meters.Days.Styles.Normal}, Range[Settings.Range].formula(meter)

     -- insert into array the X, Y for the meter if first day of week
     if meter == 1 then
      table.insert(Styles, Meters.Days.Styles.FirstDay)
     elseif (meter % 7) == 1 then
      table.insert(Styles, Meters.Days.Styles.NewWeek)
     end

     -- insert into array change of color, bold for holidays
     -- Holiday ToolTip and Style
     if (Hol or {})[day] and day > 0 and day <= Time.stats.clength then
      event = table.concat(Hol[day].text, '\n')
      table.insert(Styles, Meters.Days.Styles.Holiday)

      for _, value in ipairs(Hol[day].color) do
       if value == '' then
        -- Do Nothing
       elseif not color then
        color = value
       elseif color ~= value then
        color = ''
        break
       end
      end
     end

     -- insert into array the FontColor for where the date is in month
     if Range[Settings.Range].adjustment(Time.curr.day + Time.stats.startday) == meter and Time.stats.inmonth then
      table.insert(Styles, Meters.Days.Styles.Current)
     elseif meter > 35 and LastWeek then
      table.insert(Styles, Meters.Days.Styles.LastWk)
     elseif day < 1 then
      day = day + Time.stats.plength
      table.insert(Styles, Meters.Days.Styles.PrevMnth)
     elseif day > Time.stats.clength then
      day = day - Time.stats.clength
      table.insert(Styles, Meters.Days.Styles.NxtMnth)
     elseif (meter % 7) == 0 or (meter % 7) == (Settings.StartOnMonday and 6 or 1) then
      table.insert(Styles, Meters.Days.Styles.Wknd)
     end

     --
     -- output meter options from above
     --
     for k, v in pairs{ -- Define meter properties
      Text = LZero(day),
      MeterStyle = table.concat(Styles, '|'),
      [Settings.Color] = color or '',
     } do SKIN:Bang('!SetOption', Meters.Days.Name:format(meter), k, v) end
  end

  --
  -- modified by TGonZo: loop to create ToolTip overlays
  --
  for meter = 1, Range[Settings.Range].days do
     --
     -- insert into array the X, Y, H, W, font size/type/color for the meter
     --
     local Styles, day, event, color = {Meters.DaysTT.Styles.Normal}, Range[Settings.Range].formula(meter)

     -- insert into array the X, Y for the meter if first day of week
     if meter == 1 then
      table.insert(Styles, Meters.DaysTT.Styles.FirstDay)
     elseif (meter % 7) == 1 then
      table.insert(Styles, Meters.DaysTT.Styles.NewWeek)
     end

     -- insert into array change of color, bold for holidays
     -- Holiday ToolTip and Style
     if (Hol or {})[day] and day > 0 and day <= Time.stats.clength then
      event = table.concat(Hol[day].text, '\n')
      table.insert(Styles, Meters.DaysTT.Styles.Holiday)

     end

     --
     -- output meter options from above
     --
     for k, v in pairs{ -- Define meter properties
      MeterStyle = table.concat(Styles, '|'),
      ToolTipText = event or '',
      [Settings.Color] = color or '',
     } do SKIN:Bang('!SetOption', Meters.DaysTT.Name:format(meter), k, v) end

  end  -- meters for ToolTips

  -- Week Numbers for the current month
  local FirstWeek = os.time{day = (6 - Time.stats.startday), month = Time.show.month, year = Time.show.year}
  local GetWeek = function(i) return math.ceil(os.date('%j', FirstWeek + i * 604800) / 7) end

  -- Define skin variables
  for k, v in pairs{
     ThisWeek = Range[Settings.Range].week(),
     Week = rotate(Time.curr.wday - 1),
     Today = LZero(Time.curr.day),
     Month = MLabels(Time.show.month),
     Year = Time.show.year,
     MonthLabel = Vars(Settings.LabelFormat),
     LastWkHidden = LastWeek and 1 or 0,
     NextEvent = Hol and Hol() or '',
     WeekNumber1 = GetWeek(0),
     WeekNumber2 = GetWeek(1),
     WeekNumber3 = GetWeek(2),
     WeekNumber4 = GetWeek(3),
     WeekNumber5 = GetWeek(4),
     WeekNumber6 = GetWeek(5),
  } do SKIN:Bang('!SetVariable', k, v) end
 end -- Draw

 function Move(value) -- Move calendar through the months
  if value then test(type(value) == 'number', 'Move: input must be a number. Received %s instead.', type(value)) end
  if Range[Settings.Range].nomove or not value then
     Time.show = Time.curr
  elseif math.ceil(value) ~= value then
     ErrMsg(nil, 'Invalid Move Parameter %s', value)
  else
     local mvalue = Time.show.month + value - (math.modf(value / 12)) * 12
     local mchange = value < 0 and (mvalue < 1 and 12 or 0) or (mvalue > 12 and -12 or 0)
     Time.show = {month = (mvalue + mchange), year = (Time.show.year + (math.modf(value / 12)) - mchange / 12),}
  end

  Time.stats.inmonth = Time.show.month == Time.curr.month and Time.show.year == Time.curr.year
  SKIN:Bang('!SetVariable', 'NotCurrentMonth', Time.stats.inmonth and 0 or 1)
 end -- Move

 function Easter()
  local a, b, c, h, L, m = (Time.show.year % 19), math.floor(Time.show.year / 100), (Time.show.year % 100), 0, 0, 0
  local d, e, f, i, k = math.floor(b/4), (b % 4), math.floor((b + 8) / 25), math.floor(c / 4), (c % 4)
  h = (19 * a + b - d - math.floor((b - f + 1) / 3) + 15) % 30
  L = (32 + 2 * e + 2 * i - h - k) % 7
  m = math.floor((a + 11 * h + 22 * L) / 451)

  return os.time{month = math.floor((h + L - 7 * m + 114) / 31), day = ((h + L - 7 * m + 114) % 31 + 1), year = Time.show.year}
 end

 BuiltIn = {
  easter = function() return Easter() end,
  goodfriday = function() return Easter() - 2 * 86400 end,
  ashwednesday = function() return Easter() - 46 * 86400 end,
  mardigras = function() return Easter() - 47 * 86400 end,
 } -- BuiltIn

 function Vars(line, fname, esub) -- Makes allowance for {$Variables}
  local tbl = {mname = MLabels(Time.show.month), year = Time.show.year, today = LZero(Time.curr.day), month = Time.show.month}

  return (line:gsub('{%$([^}]+)}', function(variable)
     local var = variable:gsub('%s', ''):lower()
     if (BuiltIn or {})[var:match('([^:]+):') or ''] then -- BuiltIn Event
      local name, vtype = var:match('^([^:]+):(.+)')
      if vtype == 'stamp' then
       return BuiltIn[name]()
      else
       return os.date('*t', BuiltIn[name]())[vtype] or ErrMsg(esub, 'Invalid Variable {$%s}', variable)
      end
     elseif BuiltIn[var:match('(.+)month$') or var:match('(.+)day$') or ''] then
      local name = var:match('(.+)month$') or var:match('(.+)day$')
      local vtype = var:match('^' .. name .. '(.+)')
      return os.date('*t', BuiltIn[name]())[vtype]
     elseif ((Variables or {})[fname or ''] or {})[var] then -- Event File Variable
      return Variables[fname][var]
     elseif tbl[var] then -- Script Variable
      return tbl[var]
     else -- Variable Day
      local D, W = {sun = 0, mon = 1, tue = 2, wed = 3, thu = 4, fri = 5, sat = 6}, {first = 0, second = 1, third = 2, fourth = 3, last = 4}
      local v1, v2 = var:match('(.+)(...)')
      if not (W[v1 or ''] and D[v2 or '']) then -- Error
       return ErrMsg(esub, 'Invalid Variable {$%s}', variable)
      elseif v1 == 'last' then -- Last Day
       local L = rotate(36 + D[v2] - Time.stats.startday)     -- corrected by SilverAzide; rotate() was missing
       return L - math.ceil((L - Time.stats.clength) / 7) * 7
      else -- Variable Day
       return rotate(D[v2]) + 1 - Time.stats.startday + (Time.stats.startday > rotate(D[v2]) and 7 or 0) + 7 * W[v1]
      end
     end
  end))
 end -- Vars

 Parse = {
  Number = function(line, default, fname, round)
     line = Vars(line, fname, 0):gsub('%s', '')
     if line == '' then
      return default
     else
      local number = SKIN:ParseFormula('(' .. line .. ')') or default
      return tonumber(round and ('%.' .. round .. 'f'):format(number) or number)
     end
  end, -- Number

  Boolean = function(line, fname)
     line = Vars(line, fname, ''):gsub('%s', ''):gsub('(%b())', function(input) return SKIN:ParseFormula(input) end)
     if tonumber(line) then
      return tonumber(line) > 0
     else
      return line:lower() == 'true'
     end
  end, -- Boolean

  List = function(line, default, fname, list)
     line = Vars(line, fname, ''):gsub('[|%s]', ''):lower()
     return list:find(line) and line or default
  end, -- List

  String = function(line, default, fname, spaces)
     line = Vars(line, fname, '')
     if line == '' then line = default end
     return spaces and line or line:gsub('%s', '')
  end, -- String

  Color = function(line, fname)
     line = Vars(line, fname, 0):gsub('%s', ''):gsub('(%b())', function(input) return SKIN:ParseFormula(input) end)
     local tbl = {}
     if line == '' then
      return ''
     elseif line:match(',') then
      for rgb in line:gmatch('[^,]+') do
       if not tonumber(rgb) then
        return ''
       else
        table.insert(tbl, ('%02X'):format(tonumber(rgb)))
       end
      end
     else
      for hex in line:gmatch('%S%S') do
       if not tonumber(hex, 16) then
        return ''
       else
        table.insert(tbl, hex:upper())
       end
      end
     end
     return table.concat(tbl)
  end, -- Color
 }

 function rotate(value) -- Makes allowance for StartOnMonday
   if Settings.StartOnMonday then
     return ((value - 1 + 7) % 7)
   else
     return value
   end
 end -- rotate

 function LZero(value) -- Makes allowance for LeadingZeros
   if Settings.LeadingZeroes then
     return string.format('%02d', value)
   else
     return value
   end
 end -- LZero

 function ErrMsg(...) -- Used to display errors
  local value = table.remove(arg, 1)
  local msg = string.format(unpack(arg))
  if not rMessage then
     rMessage = {msg}
  else
     table.insert(rMessage, msg)
  end
  return value
 end -- ErrMsg

 function ReturnError() -- Used to prevent duplicate error messages
  if rMessage then
     local temp = {}
     for k, v in ipairs(rMessage) do
      local count = 0
      for k2, v2 in ipairs(temp) do
       if v == v2 then count = count + 1 end
      end
      if count == 0 then
       SKIN:Bang('!Log', Settings.Name .. ': ' .. v, 'ERROR')
       table.insert(temp, v)
      end
     end
     Error, rMessage = rMessage[#rMessage], nil
     return Error
  else
     return Error or 'Success!'
  end
 end -- ReturnError

 function test(...) -- clone of assert
  local rvalue = table.remove(arg, 1)
  if not rvalue then
     ErrMsg(nil, unpack(arg))
  end
  return rvalue
 end -- test

 Get = {
  Option = function(option, default) -- Allows for existing but empty string options.
     local input = SELF:GetOption(option)
     if input == '' then
      return default or ''
     else
      return input
     end
  end, -- GetOption

  NumberOption = function(option, default) -- Allows for existing but empty number options.
     return tonumber(SELF:GetOption(option)) or default or 0
  end, -- GetNumberOption

  Variable = function(option, default) -- Allows for existing but empty variables.
     local input = SKIN:GetVariable(option) or default
     if default and input == '' then
      return default
     else
      return input
     end
  end, -- GetVariable

  NumberVariable = function(option, default) -- Allows for existing but empty numeric variables.
     local input = SKIN:GetVariable(option) or default or 0
     if default and input == '' then
      input = default
     end
     return SKIN:ParseFormula(input) or default or 0
  end, -- GetNumberVariable
 }

 -- Function provided by Mordasius, tweaked by Smurfier
 function GetPhaseNumber(year, month, day)
  -- Helper functions
  local fixangle = function(a) return a % 360 end
  -- Deg->Rad
  local torad = function(d) return d * (math.pi / 180) end

  -- Convert Gregorian Date into Julian Date
  local gregorian = year >= 1583
  if month == 1 or month == 2 then
     year, month = (year - 1), (month + 12)
  end
  local a = math.floor(year / 100)
  local b = gregorian and (2 - a + math.floor(a / 4)) or 0
  local Jday = math.floor(365.25 * (year + 4716)) + math.floor(30.6001 * (month + 1)) + day + b - 1524.5 + ((60 * (60 * 12)) / 86400)

  local eccent, Day, M, Ec, Lambdasun, ml, Ev, Ae, MM, MmP, mEc, lP
  eccent = 0.016718 -- Eccentricity of Earth's orbit
  Day = Jday - 2444238.5 -- Date within epoch
  M = torad(fixangle(fixangle((360 / 365.2422) * Day) - 3.762863)) -- Convert from perigee co-ordinates to epoch 1980.0

  -- Solve Kepler equation
  local e, m2 = M, M
  local delta = e - eccent * math.sin(e) - m2
  while math.abs(delta) > 1E-6 do
     delta = e - eccent * math.sin(e) - m2
     e = e - delta / (1 - eccent * math.cos(e))
  end

  Ec = 2 * ((math.atan(math.sqrt((1 + eccent) / (1 - eccent)) * math.tan(e / 2))) * (180 / math.pi)) -- True anomaly
  Lambdasun = fixangle(Ec + 282.596403) -- Sun's geocentric ecliptic Longitude
  ml = fixangle(13.1763966 * Day + 64.975464) -- Moon's mean Longitude
  MM = fixangle(ml - 0.1114041 * Day - 348.383063) -- Moon's mean anomaly
  Ev = 1.2739 * math.sin(torad(2 * (ml - Lambdasun) - MM)) -- Evection
  Ae = 0.1858 * math.sin(M) -- Annual equation
  MmP = torad(MM + Ev - Ae - (0.37 * math.sin(M))) -- Corrected anomaly
  mEc = 6.2886 * math.sin(MmP) -- Correction for the equation of the centre
  lP = ml + Ev + mEc - Ae + (0.214 * math.sin(2 * MmP)) -- Corrected Longitude
  local PhaseNum = fixangle((lP + (0.6583 * math.sin(torad(2 * (lP - Lambdasun))))) - Lambdasun)

  if PhaseNum > 10 and PhaseNum <= 85 then
     return 2 -- Waxing Crescent
  elseif PhaseNum > 85 and PhaseNum <= 95 then
     return 3 -- First Quarter
  elseif PhaseNum > 95 and PhaseNum <= 170 then
     return 4 -- Waxing Gibbous
  elseif PhaseNum > 170 and PhaseNum <= 190 then
     return 5 -- Full Moon
  elseif PhaseNum > 190 and PhaseNum <= 265 then
     return 6 -- Waning Gibbous
  elseif PhaseNum > 265 and PhaseNum <= 275 then
     return 7 -- Last Quarter
  elseif PhaseNum > 275 and PhaseNum <= 350 then
     return 8 -- Waning Crescent
  else
     return 1 -- New Moon
  end
 end  -- function GetPhaseNumber