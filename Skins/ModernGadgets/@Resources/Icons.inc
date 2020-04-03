; Vector icons
; Sources: https://materialdesignicons.com/ | https://erikflowers.github.io/weather-icons/
; ^(.*?) == (.*?)$  $1=$2

; UTILITIES
[Variables]
iconSmallTransform=Scale 0.7,0.7,0,0
iconMediumTransform=Scale 0.8,0.8,0,0
iconLargeTransform=Scale 1,1,0,0
weatherIconTransform=Scale 2,2,0,0

; TEMPLATE
[StyleIcon]
DynamicVariables=1
TransformationMatrix=#transformationMatrix#
Fill=Fill Color #colorAccent#

; --------------------------------------------------
; ICONS

[StyleIconAlarm]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Path Path3 | StrokeWidth 0
Shape4=Path Path4 | StrokeWidth 0
Shape5=Path Path5 | StrokeWidth 0
Shape6=Combine Shape1 | XOR Shape2 | XOR Shape3 | XOR Shape4 | XOR Shape5 | #iconMediumTransform#
Path1=12, 20 | ArcTo 5, 13, 7, 7, 0, 0, 0 | ArcTo 12, 6, 7, 7, 0, 0, 0 | ArcTo 19, 13, 7, 7, 0, 0, 0 | ArcTo 12, 20, 7, 7, 0, 0, 0
Path2=12, 4 | ArcTo 3, 13, 9, 9, 0, 1, 0 | ArcTo 12, 22, 9, 9, 0, 1, 0 | ArcTo 21, 13, 9, 9, 0, 1, 0 | ArcTo 12, 4, 9, 9, 0, 1, 0
Path3=12.5, 8 | LineTo 11, 8 | LineTo 11, 14 | LineTo 15.75, 16.85 | LineTo 16.5, 15.62 | LineTo 12.5, 13.25 | LineTo 12.5, 8
Path4=7.88, 3.39 | LineTo 6.6, 1.86 | LineTo 2, 5.71 | LineTo 3.29, 7.24 | LineTo 7.88, 3.39
Path5=22, 5.72 | LineTo 17.4, 1.86 | LineTo 16.11, 3.39 | LineTo 20.71, 7.25 | LineTo 22, 5.72 | ClosePath 1

[StyleIconBarChart]
Shape=Path Path1 | StrokeWidth 0 | #iconSmallTransform# | Extend Fill
Path1=22, 21 | LineTo 2, 21 | LineTo 2, 3 | LineTo 4, 3 | LineTo 4, 19 | LineTo 6, 19 | LineTo 6, 10 | LineTo 10, 10 | LineTo 10, 19 | LineTo 12, 19 | LineTo 12, 6 | LineTo 16, 6 | LineTo 16, 19 | LineTo 18, 19 | LineTo 18, 14 | LineTo 22, 14 | LineTo 22, 21 | ClosePath 1

[StyleIconBattery]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Combine Shape1 | XOR Shape2
Path1=16, 18 | LineTo 8, 18 | LineTo 8, 6 | LineTo 16, 6
Path2=16.67, 4 | LineTo 15, 4 | LineTo 15, 2 | LineTo 9, 2 | LineTo 9, 4 | LineTo 7.33, 4 | ArcTo 6, 5.33, 1.33, 1.33, 0, 1, 0 | LineTo 6, 20.67 | CurveTo 7.33, 22, 6, 21.4, 6.6, 22 | LineTo 16.67, 22 | ArcTo 18, 20.67, 1.33, 1.33, 0, 1, 0 | LineTo 18, 5.33 | CurveTo 16.67, 4, 18, 4.6, 17.4, 4 | ClosePath 1

[StyleIconCalendarToday]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Path Path3 | StrokeWidth 0
Shape4=Combine Shape1 | XOR Shape2 | XOR Shape3 | #iconSmallTransform#
Path1=7, 10 | LineTo 12, 10 | LineTo 12, 15 | LineTo 7, 15
Path2=19, 19 | LineTo 5, 19 | LineTo 5, 8 | LineTo 19, 8
Path3=19, 3 | LineTo 18, 3 | LineTo 18, 1 | LineTo 16, 1 | LineTo 16, 3 | LineTo 8, 3 | LineTo 8, 1 | LineTo 6, 1 | LineTo 6, 3 | LineTo 5, 3 | CurveTo 3, 5, 3.89, 3, 3, 3.9 | LineTo 3, 19 | ArcTo 5, 21, 2, 2, 0, 1, 0 | LineTo 19, 21 | ArcTo 21, 19, 2, 2, 0, 1, 0 | LineTo 21, 5 | ArcTo 19, 3, 2, 2, 0, 1, 0 | ClosePath 1

[StyleIconCellSignal]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Path Path3 | StrokeWidth 0
Shape4=Path Path4 | StrokeWidth 0
Shape5=Combine Shape1 | XOR Shape2 | XOR Shape3 | XOR Shape4 | #iconSmallTransform#
Path1=3, 21 | LineTo 6, 21 | LineTo 6, 18 | LineTo 3, 18
Path2=8, 21 | LineTo 11, 21 | LineTo 11, 14 | LineTo 8, 14
Path3=13, 21 | LineTo 16, 21 | LineTo 16, 9 | LineTo 13, 9
Path4=18, 21 | LineTo 21, 21 | LineTo 21, 3 | LineTo 18, 3 | LineTo 18, 21 | ClosePath 1

[StyleIconChangelog]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Path Path3 | StrokeWidth 0
Shape4=Path Path4 | StrokeWidth 0
Shape5=Path Path5 | StrokeWidth 0
Shape6=Path Path6 | StrokeWidth 0
Shape7=Combine Shape1 | XOR Shape2 | XOR Shape3 | XOR Shape4 | XOR Shape5 | XOR Shape6 | #iconMediumTransform#
Path1=2, 14 | LineTo 8, 14 | LineTo 8, 20 | LineTo 2, 20
Path2=16, 8 | LineTo 10, 8 | LineTo 10, 10 | LineTo 16, 10
Path3=2, 10 | LineTo 8, 10 | LineTo 8, 4 | LineTo 2, 4
Path4=10, 4 | LineTo 10, 6 | LineTo 22, 6 | LineTo 22, 4
Path5=10, 20 | LineTo 16, 20 | LineTo 16, 18 | LineTo 10, 18
Path6=10, 16 | LineTo 22, 16 | LineTo 22, 14 | LineTo 10, 14

[StyleIconChevronDown]
Shape=Path Path1 | StrokeWidth 0 | #iconSmallTransform# | Offset 0,-3 | Extend Fill
Path1=7.41, 8.58 | LineTo 12, 13.17 | LineTo 16.59, 8.58 | LineTo 18, 10 | LineTo 12, 16 | LineTo 6, 10 | LineTo 7.41, 8.58 | ClosePath 1

[StyleIconChevronLeft]
Shape=Path Path1 | StrokeWidth 0 | #iconSmallTransform# | Offset -7,-1 | Extend Fill
Path1=15.41, 16.58 | LineTo 10.83, 12 | LineTo 15.41, 7.41 | LineTo 14, 6 | LineTo 8, 12 | LineTo 14, 18 | LineTo 15.41, 16.58 | ClosePath 1

[StyleIconChevronRight]
Shape=Path Path1 | StrokeWidth 0 | #iconSmallTransform# | Offset -7,-1 | Extend Fill
Path1=8.59, 16.58 | LineTo 13.17, 12 | LineTo 8.59, 7.41 | LineTo 10, 6 | LineTo 16, 12 | LineTo 10, 18 | LineTo 8.59, 16.58 | ClosePath 1

[StyleIconChevronUp]
Shape=Path Path1 | StrokeWidth 0 | #iconSmallTransform# | Offset 0,-2.5 | Extend Fill
Path1=7.41, 15.41 | LineTo 12, 10.83 | LineTo 16.59, 15.41 | LineTo 18, 14 | LineTo 12, 8 | LineTo 6, 14 | LineTo 7.41, 15.41 | ClosePath 1

[StyleIconCheckboxActive]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Combine Shape1 | XOR Shape2 | #iconSmallTransform#
Path1=19, 19 | LineTo 5, 19 | LineTo 5, 5 | LineTo 15, 5 | LineTo 15, 3 | LineTo 5, 3 | CurveTo 3, 5, 3.89, 3, 3, 3.89 | LineTo 3, 19 | ArcTo 5, 21, 2, 2, 0, 1, 0 | LineTo 19, 21 | ArcTo 21, 19, 2, 2, 0, 1, 0 | LineTo 21, 11 | LineTo 19, 11
Path2=7.91, 10.08 | LineTo 6.5, 11.5 | LineTo 11, 16 | LineTo 21, 6 | LineTo 19.59, 4.58 | LineTo 11, 13.17 | LineTo 7.91, 10.08 | ClosePath 1

[StyleIconCheckboxInactive]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Combine Shape1 | XOR Shape2 | #iconSmallTransform#
Path1=19, 3 | LineTo 5, 3 | CurveTo 3, 5, 3.89, 3, 3, 3.89 | LineTo 3, 19 | ArcTo 5, 21, 2, 2, 0, 1, 0 | LineTo 19, 21 | ArcTo 21, 19, 2, 2, 0, 1, 0 | LineTo 21, 5 | CurveTo 19, 3, 21, 3.89, 20.1, 3
Path2=19, 5 | LineTo 19, 19 | LineTo 5, 19 | LineTo 5, 5 | LineTo 19, 5 | ClosePath 1

[StyleIconClipboard]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Path Path3 | StrokeWidth 0
Shape4=Path Path4 | StrokeWidth 0
Shape5=Path Path5 | StrokeWidth 0
Shape6=Combine Shape1 | XOR Shape2 | XOR Shape3 | XOR Shape4 | XOR Shape5 | #iconSmallTransform#
Path1=17, 9 | LineTo 7, 9 | LineTo 7, 7 | LineTo 17, 7
Path2=17, 13 | LineTo 7, 13 | LineTo 7, 11 | LineTo 17, 11
Path3=14, 17 | LineTo 7, 17 | LineTo 7, 15 | LineTo 14, 15
Path4=12, 3 | ArcTo 13, 4, 1, 1, 0, 0, 0 | ArcTo 12, 5, 1, 1, 0, 0, 0 | ArcTo 11, 4, 1, 1, 0, 0, 0 | ArcTo 12, 3, 1, 1, 0, 0, 0
Path5=19, 3 | LineTo 14.82, 3 | CurveTo 12, 1, 14.4, 1.84, 13.3, 1 | CurveTo 9.18, 3, 10.7, 1, 9.6, 1.84 | LineTo 5, 3 | ArcTo 3, 5, 2, 2, 0, 1, 0 | LineTo 3, 19 | ArcTo 5, 21, 2, 2, 0, 1, 0 | LineTo 19, 21 | ArcTo 21, 19, 2, 2, 0, 1, 0 | LineTo 21, 5 | ArcTo 19, 3, 2, 2, 0, 1, 0 | ClosePath 1

[StyleIconClipboardAlt]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Path Path3 | StrokeWidth 0
Shape4=Path Path4 | StrokeWidth 0
Shape5=Path Path5 | StrokeWidth 0
Shape6=Combine Shape1 | XOR Shape2 | XOR Shape3 | XOR Shape4 | XOR Shape5 | #iconSmallTransform#
Path1=19, 3 | LineTo 14.82, 3 | CurveTo 11, 1.2, 14.25, 1.44, 12.53, 0.64 | CurveTo 9.18, 3, 10.14, 1.5, 9.5, 2.16 | LineTo 5, 3 | ArcTo 3, 5, 2, 2, 0, 1, 0 | LineTo 3, 19 | ArcTo 5, 21, 2, 2, 0, 1, 0 | LineTo 19, 21 | ArcTo 21, 19, 2, 2, 0, 1, 0 | LineTo 21, 5 | ArcTo 19, 3, 2, 2, 0, 1, 0
Path2=12, 3 | ArcTo 13, 4, 1, 1, 0, 0, 0 | ArcTo 12, 5, 1, 1, 0, 0, 0 | ArcTo 11, 4, 1, 1, 0, 0, 0 | ArcTo 12, 3, 1, 1, 0, 0, 0
Path3=7, 7 | LineTo 17, 7 | LineTo 17, 5 | LineTo 19, 5 | LineTo 19, 19 | LineTo 5, 19 | LineTo 5, 5 | LineTo 7, 5 | LineTo 7, 7
Path4=17, 11 | LineTo 7, 11 | LineTo 7, 9 | LineTo 17, 9 | LineTo 17, 11
Path5=15, 15 | LineTo 7, 15 | LineTo 7, 13 | LineTo 15, 13 | LineTo 15, 15 | ClosePath 1

[StyleIconCloseWindow]
Shape=Rectangle 2,2,13,13 | Fill Color #colorBg#
Shape2=Path Path1 | StrokeWidth 0 | Extend Fill
Shape3=Path Path2 | StrokeWidth 0
Shape4=Path Path3 | StrokeWidth 0
Shape5=Combine Shape2 | XOR Shape3 | XOR Shape4 | #iconSmallTransform#
Path1=19, 3 | LineTo 5, 3 | ArcTo 3, 5, 2, 2, 0, 1, 0 | LineTo 3, 19 | ArcTo 5, 21, 2, 2, 0, 1, 0 | LineTo 19, 21 | ArcTo 21, 19, 2, 2, 0, 1, 0 | LineTo 21, 5 | ArcTo 19, 3, 2, 2, 0, 1, 0
Path2=19, 19 | LineTo 5, 19 | LineTo 5, 5 | LineTo 19, 5 | LineTo 19, 19
Path3=17, 8.4 | LineTo 13.4, 12 | LineTo 17, 15.6 | LineTo 15.6, 17 | LineTo 12, 13.4 | LineTo 8.4, 17 | LineTo 7, 15.6 | LineTo 10.6, 12 | LineTo 7, 8.4 | LineTo 8.4, 7 | LineTo 12, 10.6 | LineTo 15.6, 7 | LineTo 17, 8.4 | ClosePath 1

[StyleIconCpu]
Shape=Path Path1 | StrokeWidth 0 | Scale 0.75,0.75,0,0 | Offset 0,-0.5 | Extend Fill
Path1=9, 3 | LineTo 9, 5 | LineTo 7, 5 | ArcTo 5, 7, 2, 2, 0, 1, 0 | LineTo 5, 9 | LineTo 3, 9 | LineTo 3, 11 | LineTo 5, 11 | LineTo 5, 13 | LineTo 3, 13 | LineTo 3, 15 | LineTo 5, 15 | LineTo 5, 17 | ArcTo 7, 19, 2, 2, 0, 1, 0 | LineTo 9, 19 | LineTo 9, 21 | LineTo 11, 21 | LineTo 11, 19 | LineTo 13, 19 | LineTo 13, 21 | LineTo 15, 21 | LineTo 15, 19 | LineTo 17, 19 | ArcTo 19, 17, 2, 2, 0, 1, 0 | LineTo 19, 15 | LineTo 21, 15 | LineTo 21, 13 | LineTo 19, 13 | LineTo 19, 11 | LineTo 21, 11 | LineTo 21, 9 | LineTo 19, 9 | LineTo 19, 7 | ArcTo 17, 5, 2, 2, 0, 1, 0 | LineTo 15, 5 | LineTo 15, 3 | LineTo 13, 3 | LineTo 13, 5 | LineTo 11, 5 | LineTo 11, 3

[StyleIconDisk]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Path Path3 | StrokeWidth 0
Shape4=Path Path4 | StrokeWidth 0
Shape5=Path Path5 | StrokeWidth 0
Shape6=Combine Shape1 | XOR Shape2 | XOR Shape3 | XOR Shape4 | XOR Shape5 | #iconSmallTransform#
Path1=6, 2 | LineTo 18, 2 | ArcTo 20, 4, 2, 2, 0, 0, 0 | LineTo 20, 20 | ArcTo 18, 22, 2, 2, 0, 0, 0 | LineTo 6, 22 | ArcTo 4, 20, 2, 2, 0, 0, 0 | LineTo 4, 4 | ArcTo 6, 2, 2, 2, 0, 0, 0
Path2=12, 4 | ArcTo 6, 10, 6, 6, 0, 1, 0 | CurveTo 12.1, 16, 6, 13.31, 8.69, 16 | LineTo 11.22, 13.77 | CurveTo 11.59, 12.4, 10.95, 13.29, 11.11, 12.68 | LineTo 12.45, 11.9 | CurveTo 13.82, 12.27, 12.93, 11.63, 13.54, 11.79 | LineTo 15.74, 14.69 | CurveTo 18, 10, 17.12, 13.59, 18, 11.9 | ArcTo 12, 4, 6, 6, 0, 1, 0
Path3=12, 9 | ArcTo 13, 10, 1, 1, 0, 0, 0 | ArcTo 12, 11, 1, 1, 0, 0, 0 | ArcTo 11, 10, 1, 1, 0, 0, 0 | ArcTo 12, 9, 1, 1, 0, 0, 0
Path4=7, 18 | ArcTo 6, 19, 1, 1, 0, 1, 0 | ArcTo 7, 20, 1, 1, 0, 1, 0 | ArcTo 8, 19, 1, 1, 0, 1, 0 | ArcTo 7, 18, 1, 1, 0, 1, 0
Path5=12.09, 13.27 | LineTo 14.58, 19.58 | LineTo 17.17, 18.08 | LineTo 12.95, 12.77 | LineTo 12.09, 13.27 | ClosePath 1

[StyleIconDonate]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Path Path3 | StrokeWidth 0
Shape4=Path Path4 | StrokeWidth 0
Shape5=Path Path5 | StrokeWidth 0
Shape6=Path Path6 | StrokeWidth 0
Shape7=Path Path7 | StrokeWidth 0
Shape8=Combine Shape1 | XOR Shape2 | XOR Shape3 | XOR Shape4 | XOR Shape5 | XOR Shape6 | XOR Shape7 | #iconSmallTransform#
Path1=22, 12 | LineTo 22, 20 | ArcTo 20, 22, 2, 2, 0, 0, 0 | LineTo 4, 22 | ArcTo 2, 20, 2, 2, 0, 0, 0 | LineTo 2, 12 | ArcTo 1, 11, 1, 1, 0, 0, 0 | LineTo 1, 8 | ArcTo 3, 6, 2, 2, 0, 0, 0 | LineTo 6.17, 6 | CurveTo 6, 5, 6.06, 5.69, 6, 5.35 | ArcTo 9, 2, 3, 3, 0, 0, 0 | CurveTo 11.43, 3.24, 10, 2, 10.88, 2.5 | LineTo 11.43, 3.23 | LineTo 12, 4 | LineTo 12.57, 3.23 | LineTo 12.57, 3.24 | CurveTo 15, 2, 13.12, 2.5, 14, 2 | ArcTo 18, 5, 3, 3, 0, 0, 0 | CurveTo 17.83, 6, 18, 5.35, 17.94, 5.69 | LineTo 21, 6 | ArcTo 23, 8, 2, 2, 0, 0, 0 | LineTo 23, 11 | ArcTo 22, 12, 1, 1, 0, 0, 0
Path2=4, 20 | LineTo 11, 20 | LineTo 11, 12 | LineTo 4, 12 | LineTo 4, 20
Path3=20, 20 | LineTo 20, 12 | LineTo 13, 12 | LineTo 13, 20 | LineTo 20, 20
Path4=9, 4 | ArcTo 8, 5, 1, 1, 0, 1, 0 | ArcTo 9, 6, 1, 1, 0, 1, 0 | ArcTo 10, 5, 1, 1, 0, 1, 0 | ArcTo 9, 4, 1, 1, 0, 1, 0
Path5=15, 4 | ArcTo 14, 5, 1, 1, 0, 1, 0 | ArcTo 15, 6, 1, 1, 0, 1, 0 | ArcTo 16, 5, 1, 1, 0, 1, 0 | ArcTo 15, 4, 1, 1, 0, 1, 0
Path6=3, 8 | LineTo 3, 10 | LineTo 11, 10 | LineTo 11, 8 | LineTo 3, 8
Path7=13, 8 | LineTo 13, 10 | LineTo 21, 10 | LineTo 21, 8 | LineTo 13, 8 | ClosePath 1

[StyleIconEditSettingsFile]
Shape=Rectangle 2,2,13,13 | Fill Color #colorBg#
Shape2=Path Path1 | StrokeWidth 0 | Extend Fill
Shape3=Path Path2 | StrokeWidth 0
Shape4=Path Path3 | StrokeWidth 0
Shape5=Combine Shape2 | XOR Shape3 | XOR Shape4 | #iconSmallTransform#
Path1=5, 3 | CurveTo 3, 5, 3.89, 3, 3, 3.89 | LineTo 3, 19 | ArcTo 5, 21, 2, 2, 0, 1, 0 | LineTo 19, 21 | ArcTo 21, 19, 2, 2, 0, 1, 0 | LineTo 21, 12 | LineTo 19, 12 | LineTo 19, 19 | LineTo 5, 19 | LineTo 5, 5 | LineTo 12, 5 | LineTo 12, 3 | LineTo 5, 3
Path2=17.78, 4 | CurveTo 17.3, 4.2, 17.61, 4, 17.43, 4.07 | LineTo 16.08, 5.41 | LineTo 18.58, 7.91 | LineTo 19.8, 6.7 | CurveTo 19.8, 5.75, 20.06, 6.44, 20.06, 6 | LineTo 18.25, 4.2 | CurveTo 17.78, 4, 18.12, 4.07, 17.95, 4
Path3=15.37, 6.12 | LineTo 8, 13.5 | LineTo 8, 16 | LineTo 10.5, 16 | LineTo 17.87, 8.62 | LineTo 15.37, 6.12 | ClosePath 1

[StyleIconEject]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Combine Shape1 | XOR Shape2 | #iconSmallTransform#
Path1=12, 5 | LineTo 5.33, 15 | LineTo 18.67, 15
Path2=5, 17 | LineTo 19, 17 | LineTo 19, 19 | LineTo 5, 19 | LineTo 5, 17 | ClosePath 1

[StyleIconEye]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Path Path3 | StrokeWidth 0
Shape4=Combine Shape1 | XOR Shape2 | XOR Shape3 | #iconSmallTransform#
Path1=12, 9 | ArcTo 9, 12, 3, 3, 0, 1, 0 | ArcTo 12, 15, 3, 3, 0, 1, 0 | ArcTo 15, 12, 3, 3, 0, 1, 0 | ArcTo 12, 9, 3, 3, 0, 1, 0
Path2=12, 17 | ArcTo 7, 12, 5, 5, 0, 0, 0 | ArcTo 12, 7, 5, 5, 0, 0, 0 | ArcTo 17, 12, 5, 5, 0, 0, 0 | ArcTo 12, 17, 5, 5, 0, 0, 0
Path3=12, 4.5 | CurveTo 1, 12, 7, 4.5, 2.73, 7.61 | CurveTo 12, 19.5, 2.73, 16.39, 7, 19.5 | CurveTo 23, 12, 17, 19.5, 21.27, 16.39 | CurveTo 12, 4.5, 21.27, 7.61, 17, 4.5 | ClosePath 1

[StyleIconEyeSlash]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Path Path3 | StrokeWidth 0
Shape4=Path Path4 | StrokeWidth 0
Shape5=Combine Shape1 | XOR Shape2 | XOR Shape3 | XOR Shape4 | #iconSmallTransform#
Path1=11.83, 9 | LineTo 15, 12.16 | CurveTo 15, 12, 15, 12.11, 15, 12.05 | ArcTo 12, 9, 3, 3, 0, 1, 0 | CurveTo 11.83, 9, 11.94, 9, 11.89, 9
Path2=7.53, 9.8 | LineTo 9.08, 11.35 | CurveTo 9, 12, 9.03, 11.56, 9, 11.77 | ArcTo 12, 15, 3, 3, 0, 1, 0 | CurveTo 12.65, 14.92, 12.22, 15, 12.44, 14.97 | LineTo 14.2, 16.47 | CurveTo 12, 17, 13.53, 16.8, 12.79, 17 | ArcTo 7, 12, 5, 5, 0, 0, 0 | CurveTo 7.53, 9.8, 7, 11.21, 7.2, 10.47
Path3=2, 4.27 | LineTo 4.28, 6.55 | LineTo 4.73, 7 | CurveTo 1, 12, 3.08, 8.3, 1.78, 10 | CurveTo 12, 19.5, 2.73, 16.39, 7, 19.5 | CurveTo 16.38, 18.66, 13.55, 19.5, 15.03, 19.2 | LineTo 16.81, 19.08 | LineTo 19.73, 22 | LineTo 21, 20.73 | LineTo 3.27, 3
Path4=12, 7 | ArcTo 17, 12, 5, 5, 0, 0, 0 | CurveTo 16.64, 13.82, 17, 12.64, 16.87, 13.26 | LineTo 19.57, 16.75 | CurveTo 23, 12, 21.07, 15.5, 22.27, 13.86 | CurveTo 12, 4.5, 21.27, 7.61, 17, 4.5 | CurveTo 8, 5.2, 10.6, 4.5, 9.26, 4.75 | LineTo 10.17, 7.35 | CurveTo 12, 7, 10.74, 7.13, 11.35, 7 | ClosePath 1

[StyleIconFolder]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Combine Shape1 | XOR Shape2 | #iconMediumTransform#
Path1=20, 18 | LineTo 4, 18 | LineTo 4, 8 | LineTo 20, 8
Path2=20, 6 | LineTo 12, 6 | LineTo 10, 4 | LineTo 4, 4 | CurveTo 2, 6, 2.89, 4, 2, 4.89 | LineTo 2, 18 | ArcTo 4, 20, 2, 2, 0, 1, 0 | LineTo 20, 20 | ArcTo 22, 18, 2, 2, 0, 1, 0 | LineTo 22, 8 | CurveTo 20, 6, 22, 6.89, 21.1, 6 | ClosePath 1

[StyleIconGpu]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Path Path3 | StrokeWidth 0
Shape4=Combine Shape1 | XOR Shape2 | XOR Shape3 | #iconMediumTransform#
Path1=2, 7 | LineTo 2, 8.5 | LineTo 3, 8.5 | LineTo 3, 17 | LineTo 4.5, 17 | LineTo 4.5, 7 | CurveTo 2, 7, 3.7, 7, 2.8, 7
Path2=6, 7 | LineTo 6, 7 | LineTo 6, 16 | LineTo 7, 16 | LineTo 7, 17 | LineTo 14, 17 | LineTo 14, 16 | LineTo 22, 16 | LineTo 22, 7 | LineTo 6, 7
Path3=17.5, 9 | ArcTo 20, 11.5, 2.5, 2.5, 0, 0, 0 | ArcTo 17.5, 14, 2.5, 2.5, 0, 0, 0 | ArcTo 15, 11.5, 2.5, 2.5, 0, 0, 0 | ArcTo 17.5, 9, 2.5, 2.5, 0, 0, 0 | ClosePath 1

[StyleIconInfo]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Path Path3 | StrokeWidth 0
Shape4=Path Path4 | StrokeWidth 0
Shape5=Combine Shape1 | XOR Shape2 | XOR Shape3 | XOR Shape4 | #iconSmallTransform#
Path1=11, 9 | LineTo 13, 9 | LineTo 13, 7 | LineTo 11, 7
Path2=12, 20 | CurveTo 4, 12, 7.59, 20, 4, 16.41 | CurveTo 12, 4, 4, 7.59, 7.59, 4 | CurveTo 20, 12, 16.41, 4, 20, 7.59 | CurveTo 12, 20, 20, 16.41, 16.41, 20
Path3=12, 2 | ArcTo 2, 12, 10, 10, 0, 1, 0 | ArcTo 12, 22, 10, 10, 0, 1, 0 | ArcTo 22, 12, 10, 10, 0, 1, 0 | ArcTo 12, 2, 10, 10, 0, 1, 0
Path4=11, 17 | LineTo 13, 17 | LineTo 13, 11 | LineTo 11, 11 | LineTo 11, 17 | ClosePath 1
X=(#contentMarginRight# - [#CURRENTSECTION#:W] + 1)
Y=r

[StyleIconLap]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Path Path3 | StrokeWidth 0
Shape4=Combine Shape1 | XOR Shape2 | XOR Shape3 | #iconSmallTransform#
Path1=12, 20 | ArcTo 4, 12, 8, 8, 0, 0, 0 | ArcTo 12, 4, 8, 8, 0, 0, 0 | ArcTo 20, 12, 8, 8, 0, 0, 0 | ArcTo 12, 20, 8, 8, 0, 0, 0
Path2=12, 2 | ArcTo 2, 12, 10, 10, 0, 1, 0 | ArcTo 12, 22, 10, 10, 0, 1, 0 | ArcTo 22, 12, 10, 10, 0, 1, 0 | ArcTo 12, 2, 10, 10, 0, 1, 0
Path3=16.24, 7.76 | CurveTo 12, 6, 15.07, 6.58, 13.53, 6 | LineTo 12, 12 | LineTo 7.76, 16.24 | CurveTo 16.24, 16.24, 10.1, 18.58, 13.9, 18.58 | CurveTo 16.24, 7.76, 18.59, 13.9, 18.59, 10.1 | ClosePath 1

[StyleIconNetworkPeak]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Path Path3 | StrokeWidth 0
Shape4=Combine Shape1 | XOR Shape2 | XOR Shape3 | #iconSmallTransform#
Path1=3, 22 | LineTo 3, 8 | LineTo 7, 8 | LineTo 7, 22 | LineTo 3, 22
Path2=10, 22 | LineTo 10, 2 | LineTo 14, 2 | LineTo 14, 22 | LineTo 10, 22
Path3=17, 22 | LineTo 17, 14 | LineTo 21, 14 | LineTo 21, 22 | LineTo 17, 22 | ClosePath 1

[StyleIconNetworkWired]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Path Path3 | StrokeWidth 0
Shape4=Path Path4 | StrokeWidth 0
Shape5=Combine Shape1 | XOR Shape2 | XOR Shape3 | XOR Shape4 | #iconSmallTransform#
Path1=10, 2 | CurveTo 8, 4, 8.89, 2, 8, 2.89 | LineTo 8, 7 | CurveTo 10, 9, 8, 8.11, 8.89, 9 | LineTo 11, 9 | LineTo 11, 11 | LineTo 2, 11 | LineTo 2, 13 | LineTo 6, 13 | LineTo 6, 15 | LineTo 5, 15 | CurveTo 3, 17, 3.89, 15, 3, 15.89 | LineTo 3, 20 | CurveTo 5, 22, 3, 21.11, 3.89, 22 | LineTo 9, 22 | CurveTo 11, 20, 10.11, 22, 11, 21.11 | LineTo 11, 17 | CurveTo 9, 15, 11, 15.89, 10.11, 15 | LineTo 8, 15 | LineTo 8, 13 | LineTo 16, 13 | LineTo 16, 15 | LineTo 15, 15 | CurveTo 13, 17, 13.89, 15, 13, 15.89 | LineTo 13, 20 | CurveTo 15, 22, 13, 21.11, 13.89, 22 | LineTo 19, 22 | CurveTo 21, 20, 20.11, 22, 21, 21.11 | LineTo 21, 17 | CurveTo 19, 15, 21, 15.89, 20.11, 15 | LineTo 18, 15 | LineTo 18, 13 | LineTo 22, 13 | LineTo 22, 11 | LineTo 13, 11 | LineTo 13, 9 | LineTo 14, 9 | CurveTo 16, 7, 15.11, 9, 16, 8.11 | LineTo 16, 4 | CurveTo 14, 2, 16, 2.89, 15.11, 2 | LineTo 10, 2
Path2=10, 4 | LineTo 14, 4 | LineTo 14, 7 | LineTo 10, 7 | LineTo 10, 4
Path3=5, 17 | LineTo 9, 17 | LineTo 9, 20 | LineTo 5, 20 | LineTo 5, 17
Path4=15, 17 | LineTo 19, 17 | LineTo 19, 20 | LineTo 15, 20 | LineTo 15, 17 | ClosePath 1

[StyleIconPause]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Combine Shape1 | XOR Shape2 | #iconSmallTransform#
Path1=14, 19 | LineTo 18, 19 | LineTo 18, 5 | LineTo 14, 5
Path2=6, 19 | LineTo 10, 19 | LineTo 10, 5 | LineTo 6, 5 | LineTo 6, 19 | ClosePath 1

[StyleIconPlay]
Shape=Path Path1 | StrokeWidth 0 | #iconSmallTransform# | Extend Fill
Path1=8, 5.14 | LineTo 8, 19.14 | LineTo 19, 12.14 | LineTo 8, 5.14 | ClosePath 1

[StyleIconRadioButtonActive]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Path Path3 | StrokeWidth 0
Shape4=Combine Shape1 | XOR Shape2 | XOR Shape3 | Scale 0.65,0.65,0,0 | Offset 1,0
Path1=12, 20 | ArcTo 4, 12, 8, 8, 0, 0, 0 | ArcTo 12, 4, 8, 8, 0, 0, 0 | ArcTo 20, 12, 8, 8, 0, 0, 0 | ArcTo 12, 20, 8, 8, 0, 0, 0
Path2=12, 2 | ArcTo 2, 12, 10, 10, 0, 1, 0 | ArcTo 12, 22, 10, 10, 0, 1, 0 | ArcTo 22, 12, 10, 10, 0, 1, 0 | ArcTo 12, 2, 10, 10, 0, 1, 0
Path3=12, 7 | ArcTo 7, 12, 5, 5, 0, 1, 0 | ArcTo 12, 17, 5, 5, 0, 1, 0 | ArcTo 17, 12, 5, 5, 0, 1, 0 | ArcTo 12, 7, 5, 5, 0, 1, 0 | ClosePath 1

[StyleIconRadioButtonInactive]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Combine Shape1 | XOR Shape2 | Scale 0.65,0.65,0,0 | Offset 1,0
Path1=12, 20 | ArcTo 4, 12, 8, 8, 0, 0, 0 | ArcTo 12, 4, 8, 8, 0, 0, 0 | ArcTo 20, 12, 8, 8, 0, 0, 0 | ArcTo 12, 20, 8, 8, 0, 0, 0
Path2=12, 2 | ArcTo 2, 12, 10, 10, 0, 1, 0 | ArcTo 12, 22, 10, 10, 0, 1, 0 | ArcTo 22, 12, 10, 10, 0, 1, 0 | ArcTo 12, 2, 10, 10, 0, 1, 0 | ClosePath 1

[StyleIconRefresh]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Combine Shape1 | XOR Shape2 | #iconSmallTransform#
Path1=12, 18 | ArcTo 6, 12, 6, 6, 0, 0, 0 | CurveTo 6.7, 9.2, 6, 11, 6.25, 10.03 | LineTo 5.24, 7.74 | CurveTo 4, 12, 4.46, 8.97, 4, 10.43 | ArcTo 12, 20, 8, 8, 0, 1, 0 | LineTo 12, 23 | LineTo 16, 19 | LineTo 12, 15
Path2=12, 4 | LineTo 12, 1 | LineTo 8, 5 | LineTo 12, 9 | LineTo 12, 6 | ArcTo 18, 12, 6, 6, 0, 0, 0 | CurveTo 17.3, 14.8, 18, 13, 17.75, 13.97 | LineTo 18.76, 16.26 | CurveTo 20, 12, 19.54, 15.03, 20, 13.57 | ArcTo 12, 4, 8, 8, 0, 1, 0 | ClosePath 1

[StyleIconRepeat]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Combine Shape1 | XOR Shape2 | #iconSmallTransform#
Path1=17, 17 | LineTo 7, 17 | LineTo 7, 14 | LineTo 3, 18 | LineTo 7, 22 | LineTo 7, 19 | LineTo 19, 19 | LineTo 19, 13 | LineTo 17, 13
Path2=7, 7 | LineTo 17, 7 | LineTo 17, 10 | LineTo 21, 6 | LineTo 17, 2 | LineTo 17, 5 | LineTo 5, 5 | LineTo 5, 11 | LineTo 7, 11 | LineTo 7, 7 | ClosePath 1

[StyleIconReset]
Shape=Path Path1 | StrokeWidth 0 | #iconSmallTransform# | Extend Fill
Path1=17.65, 6.35 | CurveTo 12, 4, 16.2, 4.9, 14.21, 4 | ArcTo 4, 12, 8, 8, 0, 1, 0 | ArcTo 12, 20, 8, 8, 0, 1, 0 | CurveTo 19.73, 14, 15.73, 20, 18.84, 17.45 | LineTo 17.65, 14 | CurveTo 12, 18, 16.83, 16.33, 14.61, 18 | ArcTo 6, 12, 6, 6, 0, 0, 0 | ArcTo 12, 6, 6, 6, 0, 0, 0 | CurveTo 16.22, 7.78, 13.66, 6, 15.14, 6.69 | LineTo 13, 11 | LineTo 20, 11 | LineTo 20, 4 | LineTo 17.65, 6.35 | ClosePath 1

[StyleIconRepeatOnce]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Path Path3 | StrokeWidth 0
Shape4=Combine Shape1 | XOR Shape2 | XOR Shape3 | #iconSmallTransform#
Path1=13, 15 | LineTo 13, 9 | LineTo 12, 9 | LineTo 10, 10 | LineTo 10, 11 | LineTo 11.5, 11 | LineTo 11.5, 15
Path2=17, 17 | LineTo 7, 17 | LineTo 7, 14 | LineTo 3, 18 | LineTo 7, 22 | LineTo 7, 19 | LineTo 19, 19 | LineTo 19, 13 | LineTo 17, 13
Path3=7, 7 | LineTo 17, 7 | LineTo 17, 10 | LineTo 21, 6 | LineTo 17, 2 | LineTo 17, 5 | LineTo 5, 5 | LineTo 5, 11 | LineTo 7, 11 | LineTo 7, 7 | ClosePath 1

[StyleIconShuffle]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Path Path3 | StrokeWidth 0
Shape4=Combine Shape1 | XOR Shape2 | XOR Shape3 | #iconSmallTransform#
Path1=14.83, 13.41 | LineTo 13.42, 14.82 | LineTo 16.55, 17.95 | LineTo 14.5, 20 | LineTo 20, 20 | LineTo 20, 14.5 | LineTo 17.96, 16.54 | LineTo 14.83, 13.41
Path2=14.5, 4 | LineTo 16.54, 6.04 | LineTo 4, 18.59 | LineTo 5.41, 20 | LineTo 17.96, 7.46 | LineTo 20, 9.5 | LineTo 20, 4
Path3=10.59, 9.17 | LineTo 5.41, 4 | LineTo 4, 5.41 | LineTo 9.17, 10.58 | LineTo 10.59, 9.17 | ClosePath 1

[StyleIconShuffleAlt]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Combine Shape1 | XOR Shape2 | Scale #iconSmallTransform#
Path1=17, 3 | LineTo 22.25, 7.5 | LineTo 17, 12 | LineTo 22.25, 16.5 | LineTo 17, 21 | LineTo 17, 18 | LineTo 14.26, 18 | LineTo 11.44, 15.18 | LineTo 13.56, 13.06 | LineTo 15.5, 15 | LineTo 17, 15 | LineTo 17, 12 | LineTo 17, 9 | LineTo 15.5, 9 | LineTo 6.5, 18 | LineTo 2, 18 | LineTo 2, 15 | LineTo 5.26, 15 | LineTo 14.26, 6 | LineTo 17, 6 | LineTo 17, 3
Path2=2, 6 | LineTo 6.5, 6 | LineTo 9.32, 8.82 | LineTo 7.2, 10.94 | LineTo 5.26, 9 | LineTo 2, 9 | LineTo 2, 6 | ClosePath 1

[StyleIconSkipNext]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Combine Shape1 | XOR Shape2 | #iconSmallTransform#
Path1=16, 18 | LineTo 18, 18 | LineTo 18, 6 | LineTo 16, 6
Path2=6, 18 | LineTo 14.5, 12 | LineTo 6, 6 | LineTo 6, 18 | ClosePath 1

[StyleIconSkipPrevious]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Combine Shape1 | XOR Shape2 | #iconSmallTransform#
Path1=6, 18 | LineTo 6, 6 | LineTo 8, 6 | LineTo 8, 18 | LineTo 6, 18
Path2=9.5, 12 | LineTo 18, 6 | LineTo 18, 18 | LineTo 9.5, 12 | ClosePath 1

[StyleIconSource]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Path Path3 | StrokeWidth 0
Shape4=Path Path4 | StrokeWidth 0
Shape5=Path Path5 | StrokeWidth 0
Shape6=Combine Shape1 | XOR Shape2 | XOR Shape3 | XOR Shape4 | XOR Shape5 | #iconSmallTransform#
Path1=6, 3 | ArcTo 9, 6, 3, 3, 0, 0, 0 | CurveTo 7, 8.83, 9, 7.31, 8.17, 8.42 | LineTo 7, 15.17 | CurveTo 9, 18, 8.17, 15.58, 9, 16.69 | ArcTo 6, 21, 3, 3, 0, 0, 0 | ArcTo 3, 18, 3, 3, 0, 0, 0 | CurveTo 5, 15.17, 3, 16.69, 3.83, 15.58 | LineTo 5, 8.83 | CurveTo 3, 6, 3.83, 8.42, 3, 7.31 | ArcTo 6, 3, 3, 3, 0, 0, 0
Path2=6, 5 | ArcTo 5, 6, 1, 1, 0, 1, 0 | ArcTo 6, 7, 1, 1, 0, 1, 0 | ArcTo 7, 6, 1, 1, 0, 1, 0 | ArcTo 6, 5, 1, 1, 0, 1, 0
Path3=6, 17 | ArcTo 5, 18, 1, 1, 0, 1, 0 | ArcTo 6, 19, 1, 1, 0, 1, 0 | ArcTo 7, 18, 1, 1, 0, 1, 0 | ArcTo 6, 17, 1, 1, 0, 1, 0
Path4=21, 18 | ArcTo 18, 21, 3, 3, 0, 0, 0 | ArcTo 15, 18, 3, 3, 0, 0, 0 | CurveTo 17, 15.17, 15, 16.69, 15.83, 15.58 | LineTo 17, 7 | LineTo 15, 7 | LineTo 15, 10.25 | LineTo 10.75, 6 | LineTo 15, 1.75 | LineTo 15, 5 | LineTo 17, 5 | ArcTo 19, 7, 2, 2, 0, 0, 0 | LineTo 19, 15.17 | CurveTo 21, 18, 20.17, 15.58, 21, 16.69
Path5=18, 17 | ArcTo 17, 18, 1, 1, 0, 1, 0 | ArcTo 18, 19, 1, 1, 0, 1, 0 | ArcTo 19, 18, 1, 1, 0, 1, 0 | ArcTo 18, 17, 1, 1, 0, 1, 0 | ClosePath 1


[StyleIconStopwatch]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Path Path3 | StrokeWidth 0
Shape4=Path Path4 | StrokeWidth 0
Shape5=Combine Shape1 | XOR Shape2 | XOR Shape3 | XOR Shape4 | #iconSmallTransform#
Path1=12, 20 | ArcTo 5, 13, 7, 7, 0, 0, 0 | ArcTo 12, 6, 7, 7, 0, 0, 0 | ArcTo 19, 13, 7, 7, 0, 0, 0 | ArcTo 12, 20, 7, 7, 0, 0, 0
Path2=19.03, 7.39 | LineTo 20.45, 5.97 | CurveTo 19.04, 4.56, 20, 5.46, 19.55, 5 | LineTo 17.62, 6 | CurveTo 12, 4, 16.07, 4.74, 14.12, 4 | ArcTo 3, 13, 9, 9, 0, 1, 0 | ArcTo 12, 22, 9, 9, 0, 1, 0 | CurveTo 21, 13, 17, 22, 21, 17.97 | CurveTo 19.03, 7.39, 21, 10.88, 20.26, 8.93
Path3=11, 14 | LineTo 13, 14 | LineTo 13, 8 | LineTo 11, 8
Path4=15, 1 | LineTo 9, 1 | LineTo 9, 3 | LineTo 15, 3 | LineTo 15, 1 | ClosePath 1

[StyleIconSwap]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Combine Shape1 | XOR Shape2 | #iconSmallTransform#
Path1=21, 9 | LineTo 17, 5 | LineTo 17, 8 | LineTo 10, 8 | LineTo 10, 10 | LineTo 17, 10 | LineTo 17, 13
Path2=7, 11 | LineTo 3, 15 | LineTo 7, 19 | LineTo 7, 16 | LineTo 14, 16 | LineTo 14, 14 | LineTo 7, 14 | LineTo 7, 11 | ClosePath 1

[StyleIconTimer]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Path Path3 | StrokeWidth 0
Shape4=Path Path4 | StrokeWidth 0
Shape5=Combine Shape1 | XOR Shape2 | XOR Shape3 | XOR Shape4 | #iconSmallTransform#
Path1=6, 2 | LineTo 18, 2 | LineTo 18, 8 | LineTo 18, 8 | LineTo 18, 8 | LineTo 14, 12 | LineTo 18, 16 | LineTo 18, 16 | LineTo 18, 16 | LineTo 18, 22 | LineTo 6, 22 | LineTo 6, 16 | LineTo 6, 16 | LineTo 6, 16 | LineTo 10, 12 | LineTo 6, 8 | LineTo 6, 8 | LineTo 6, 8 | LineTo 6, 2
Path2=16, 16.5 | LineTo 12, 12.5 | LineTo 8, 16.5 | LineTo 8, 20 | LineTo 16, 20 | LineTo 16, 16.5
Path3=12, 11.5 | LineTo 16, 7.5 | LineTo 16, 4 | LineTo 8, 4 | LineTo 8, 7.5 | LineTo 12, 11.5
Path4=10, 6 | LineTo 14, 6 | LineTo 14, 6.75 | LineTo 12, 8.75 | LineTo 10, 6.75 | LineTo 10, 6 | ClosePath 1

[StyleIconTutorial]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Path Path3 | StrokeWidth 0
Shape4=Combine Shape1 | XOR Shape2 | XOR Shape3 | #iconMediumTransform#
Path1=12, 3 | LineTo 1, 9 | LineTo 5, 11.18 | LineTo 5, 17.18 | LineTo 12, 21 | LineTo 19, 17.18 | LineTo 19, 11.18 | LineTo 21, 10.09 | LineTo 21, 17 | LineTo 23, 17 | LineTo 23, 9 | LineTo 12, 3
Path2=18.82, 9 | LineTo 12, 12.72 | LineTo 5.18, 9 | LineTo 12, 5.28 | LineTo 18.82, 9
Path3=17, 16 | LineTo 12, 18.72 | LineTo 7, 16 | LineTo 7, 12.27 | LineTo 12, 15 | LineTo 17, 12.27 | LineTo 17, 16 | ClosePath 1

[StyleIconVolume]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Path Path3 | StrokeWidth 0
Shape4=Combine Shape1 | XOR Shape2 | XOR Shape3 | #iconLargeTransform#
Path1=14, 3.23 | LineTo 14, 5.29 | CurveTo 19, 12, 16.89, 6.15, 19, 8.83 | CurveTo 14, 18.7, 19, 15.17, 16.89, 17.84 | LineTo 14, 20.77 | CurveTo 21, 12, 18, 19.86, 21, 16.28 | CurveTo 14, 3.23, 21, 7.72, 18, 4.14
Path2=16.5, 12 | CurveTo 14, 7.97, 16.5, 10.23, 15.5, 8.71 | LineTo 14, 16 | CurveTo 16.5, 12, 15.5, 15.29, 16.5, 13.76
Path3=3, 9 | LineTo 3, 15 | LineTo 7, 15 | LineTo 12, 20 | LineTo 12, 4 | LineTo 7, 9 | LineTo 3, 9 | ClosePath 1

[StyleIconWifi]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Path Path3 | StrokeWidth 0
Shape4=Combine Shape1 | XOR Shape2 | XOR Shape3 | #iconSmallTransform#
Path1=12, 21 | LineTo 15.6, 16.2 | CurveTo 12, 15, 14.6, 15.45, 13.35, 15 | CurveTo 8.4, 16.2, 10.65, 15, 9.4, 15.45 | LineTo 12, 21
Path2=12, 3 | CurveTo 1.2, 6.6, 7.95, 3, 4.21, 4.34 | LineTo 3, 9 | CurveTo 12, 6, 5.5, 7.12, 8.62, 6 | CurveTo 21, 9, 15.38, 6, 18.5, 7.12 | LineTo 22.8, 6.6 | CurveTo 12, 3, 19.79, 4.34, 16.05, 3
Path3=12, 9 | CurveTo 4.8, 11.4, 9.3, 9, 6.81, 9.89 | LineTo 6.6, 13.8 | CurveTo 12, 12, 8.1, 12.67, 9.97, 12 | CurveTo 17.4, 13.8, 14.03, 12, 15.9, 12.67 | LineTo 19.2, 11.4 | CurveTo 12, 9, 17.19, 9.89, 14.7, 9 | ClosePath 1

[StyleIconWrench]
Shape=Path Path1 | StrokeWidth 0 | Scale 0.425,0.425,0,0 | Offset 2,2 | Rotate 90 | Extend Fill
Path1=22.7, 19 | LineTo 13.6, 9.9 | CurveTo 12.1, 3, 14.5, 7.6, 14, 4.9 | CurveTo 4.7, 1.7, 10.1, 1, 7.1, 0.6 | LineTo 9, 6 | LineTo 6, 9 | LineTo 1.6, 4.7 | CurveTo 2.9, 12.1, 0.4, 7.1, 0.9, 10.1 | CurveTo 9.8, 13.6, 4.8, 14, 7.5, 14.5 | LineTo 18.9, 22.7 | CurveTo 20.3, 22.7, 19.3, 23.1, 19.9, 23.1 | LineTo 22.6, 20.4 | CurveTo 22.7, 19, 23.1, 20, 23.1, 19.3 | ClosePath 1

; --------------------------------------------------
; WEATHER ICONS

[StyleWeatherIcon]
DynamicVariables=1
TransformationMatrix=#transformationMatrix#
Fill=Fill Color #colorAccent#

[StyleWeatherIcon-Cloudy-1]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Combine Shape1 | XOR Shape2 | #weatherIconTransform#
Path1=4.61, 16.88 | CurveTo 5.69, 13.81, 4.61, 15.73, 4.97, 14.71 | CurveTo 8.43, 12.08, 6.41, 12.91, 7.32, 12.33 | CurveTo 10.54, 8.71, 8.74, 10.71, 9.45, 9.59 | CurveTo 14.3, 7.39, 11.63, 7.83, 12.89, 7.39 | CurveTo 17.99, 8.67, 15.68, 7.39, 16.91, 7.82 | CurveTo 20.09, 11.96, 19.07, 9.52, 19.77, 10.62 | LineTo 20.42, 11.96 | CurveTo 22.91, 12.61, 21.32, 11.96, 22.15, 12.18 | CurveTo 24.72, 14.4, 23.67, 13.04, 24.28, 13.64 | CurveTo 25.39, 16.88, 25.16, 15.16, 25.39, 15.98 | CurveTo 24.76, 19.33, 25.39, 17.76, 25.18, 18.58 | CurveTo 23.03, 21.13, 24.34, 20.08, 23.76, 20.68 | CurveTo 20.62, 21.85, 22.3, 21.58, 21.49, 21.82 | LineTo 9.41, 21.85 | CurveTo 6.01, 20.32, 8.07, 21.79, 6.94, 21.28 | CurveTo 4.61, 16.88, 5.08, 19.37, 4.61, 18.22 | ClosePath 1
Path2=6.32, 16.88 | CurveTo 7.22, 19.14, 6.32, 17.75, 6.62, 18.5 | CurveTo 9.41, 20.17, 7.82, 19.78, 8.55, 20.12 | LineTo 20.6, 20.17 | CurveTo 22.79, 19.14, 21.46, 20.13, 22.19, 19.78 | CurveTo 23.7, 16.88, 23.4, 18.5, 23.7, 17.74 | CurveTo 22.72, 14.61, 23.7, 16, 23.37, 15.25 | CurveTo 20.4, 13.65, 22.07, 13.97, 21.3, 13.65 | LineTo 18.8, 13.65 | CurveTo 18.63, 13.47, 18.69, 13.65, 18.63, 13.59 | LineTo 18.56, 12.9 | CurveTo 17.16, 10.18, 18.45, 11.82, 17.98, 10.91 | CurveTo 14.3, 9.08, 16.34, 9.45, 15.39, 9.08 | CurveTo 11.45, 10.18, 13.21, 9.08, 12.25, 9.45 | CurveTo 10.08, 12.9, 10.64, 10.91, 10.18, 11.82 | LineTo 10, 13.47 | CurveTo 9.8, 13.65, 10, 13.59, 9.93, 13.65 | LineTo 9.27, 13.65 | CurveTo 7.17, 14.72, 8.43, 13.75, 7.73, 14.11 | CurveTo 6.32, 16.88, 6.61, 15.33, 6.32, 16.05 | ClosePath 1

[StyleWeatherIcon-Cloudy-2]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Path Path3 | StrokeWidth 0
Shape4=Combine Shape1 | XOR Shape2 | XOR Shape3 | #weatherIconTransform#
Path1=3.89, 17.6 | CurveTo 4.82, 14.95, 3.89, 16.61, 4.2, 15.72 | CurveTo 7.2, 13.46, 5.44, 14.18, 6.23, 13.68 | CurveTo 8.98, 10.58, 7.46, 12.29, 8.05, 11.32 | CurveTo 12.2, 9.46, 9.91, 9.83, 10.98, 9.46 | CurveTo 15.36, 10.55, 13.38, 9.46, 14.44, 9.82 | CurveTo 17.16, 13.35, 16.29, 11.28, 16.89, 12.21 | LineTo 17.43, 13.35 | CurveTo 20.44, 14.59, 18.61, 13.35, 19.61, 13.76 | CurveTo 21.69, 17.59, 21.27, 15.42, 21.69, 16.42 | CurveTo 20.44, 20.6, 21.69, 18.77, 21.27, 19.77 | CurveTo 17.43, 21.85, 19.61, 21.43, 18.61, 21.85 | LineTo 8.16, 21.85 | CurveTo 6.51, 21.51, 7.58, 21.85, 7.03, 21.74 | CurveTo 5.14, 20.62, 5.99, 21.28, 5.52, 21 | CurveTo 4.23, 19.26, 4.76, 20.24, 4.46, 19.78 | CurveTo 3.89, 17.6, 4, 18.74, 3.89, 18.17 | ClosePath 1
Path2=5.34, 17.6 | CurveTo 6.16, 19.56, 5.34, 18.36, 5.62, 19.02 | CurveTo 8.15, 20.38, 6.7, 20.1, 7.37, 20.38 | LineTo 17.43, 20.38 | CurveTo 19.42, 19.56, 18.2, 20.38, 18.87, 20.11 | CurveTo 20.25, 17.6, 19.97, 19.01, 20.25, 18.36 | CurveTo 19.42, 15.64, 20.25, 16.84, 19.98, 16.18 | CurveTo 17.43, 14.82, 18.87, 15.1, 18.21, 14.82 | LineTo 16.04, 14.82 | CurveTo 15.89, 14.67, 15.94, 14.82, 15.89, 14.77 | LineTo 15.82, 14.18 | CurveTo 14.63, 11.83, 15.72, 13.24, 15.32, 12.45 | CurveTo 12.18, 10.9, 13.94, 11.21, 13.12, 10.9 | CurveTo 9.72, 11.84, 11.24, 10.9, 10.42, 11.21 | CurveTo 8.54, 14.18, 9.02, 12.46, 8.63, 13.25 | LineTo 8.47, 14.6 | CurveTo 8.31, 14.75, 8.47, 14.7, 8.42, 14.75 | LineTo 7.86, 14.82 | CurveTo 6.05, 15.71, 7.14, 14.88, 6.54, 15.18 | CurveTo 5.34, 17.6, 5.59, 16.24, 5.34, 16.87 | ClosePath 1
Path3=14.19, 8.88 | CurveTo 14.26, 9.09, 14.09, 8.97, 14.11, 9.04 | CurveTo 15.34, 9.64, 14.69, 9.28, 15.05, 9.46 | CurveTo 15.56, 9.61, 15.45, 9.67, 15.53, 9.66 | CurveTo 17.68, 8.75, 16.17, 9.04, 16.87, 8.75 | CurveTo 19.78, 9.56, 18.49, 8.75, 19.18, 9.02 | CurveTo 20.77, 11.56, 20.37, 10.1, 20.7, 10.77 | LineTo 20.86, 12.2 | LineTo 22.28, 12.2 | CurveTo 23.96, 12.9, 22.93, 12.2, 23.49, 12.43 | CurveTo 24.66, 14.56, 24.43, 13.37, 24.66, 13.92 | CurveTo 24.04, 16.13, 24.66, 15.16, 24.45, 15.68 | CurveTo 22.51, 16.9, 23.63, 16.58, 23.12, 16.83 | CurveTo 22.36, 17.06, 22.41, 16.9, 22.36, 16.95 | LineTo 22.36, 18.19 | CurveTo 22.51, 18.35, 22.36, 18.3, 22.41, 18.35 | CurveTo 25.06, 17.16, 23.52, 18.29, 24.37, 17.89 | CurveTo 26.1, 14.56, 25.75, 16.43, 26.1, 15.56 | CurveTo 24.98, 11.86, 26.1, 13.5, 25.73, 12.6 | CurveTo 22.28, 10.74, 24.23, 11.11, 23.33, 10.74 | LineTo 22.13, 10.74 | CurveTo 20.48, 8.27, 21.87, 9.74, 21.32, 8.92 | CurveTo 17.68, 7.3, 19.65, 7.62, 18.71, 7.3 | CurveTo 14.19, 8.88, 16.28, 7.29, 15.11, 7.82 | ClosePath 1

[StyleWeatherIcon-Day-Clear]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Path Path3 | StrokeWidth 0
Shape4=Path Path4 | StrokeWidth 0
Shape5=Path Path5 | StrokeWidth 0
Shape6=Path Path6 | StrokeWidth 0
Shape7=Path Path7 | StrokeWidth 0
Shape8=Path Path8 | StrokeWidth 0
Shape9=Path Path9 | StrokeWidth 0
Shape10=Path Path10 | StrokeWidth 0
Shape11=Combine Shape1 | XOR Shape2 | XOR Shape3 | XOR Shape4 | XOR Shape5 | XOR Shape6 | XOR Shape7 | XOR Shape8 | XOR Shape9 | XOR Shape10 | #weatherIconTransform#
Path1=4.37, 14.62 | CurveTo 4.62, 14, 4.37, 14.38, 4.45, 14.17 | CurveTo 5.22, 13.76, 4.79, 13.84, 5, 13.76 | LineTo 7.26, 13.76 | CurveTo 7.84, 14.01, 7.49, 13.76, 7.68, 13.84 | CurveTo 8.07, 14.62, 7.99, 14.18, 8.07, 14.38 | CurveTo 7.85, 15.23, 8.07, 14.86, 8, 15.06 | CurveTo 7.27, 15.48, 7.7, 15.4, 7.5, 15.48 | LineTo 5.23, 15.48 | CurveTo 4.63, 15.23, 5, 15.48, 4.8, 15.4 | CurveTo 4.37, 14.62, 4.46, 15.06, 4.37, 14.86 | ClosePath 1
Path2=7.23, 21.55 | CurveTo 7.46, 20.94, 7.23, 21.32, 7.31, 21.12 | LineTo 8.93, 19.51 | CurveTo 9.52, 19.28, 9.08, 19.35, 9.28, 19.28 | CurveTo 10.12, 19.51, 9.76, 19.28, 9.96, 19.36 | CurveTo 10.36, 20.08, 10.28, 19.66, 10.36, 19.85 | CurveTo 10.12, 20.72, 10.36, 20.32, 10.28, 20.54 | LineTo 8.7, 22.14 | CurveTo 7.47, 22.14, 8.29, 22.46, 7.88, 22.46 | CurveTo 7.23, 21.55, 7.31, 21.98, 7.23, 21.78 | ClosePath 1
Path3=7.23, 7.71 | CurveTo 7.46, 7.1, 7.23, 7.48, 7.31, 7.28 | CurveTo 8.1, 6.85, 7.66, 6.93, 7.87, 6.85 | CurveTo 8.69, 7.09, 8.32, 6.85, 8.52, 6.93 | LineTo 10.12, 8.56 | CurveTo 10.36, 9.15, 10.28, 8.71, 10.36, 8.91 | CurveTo 10.12, 9.75, 10.36, 9.39, 10.28, 9.59 | CurveTo 9.52, 9.99, 9.96, 9.91, 9.76, 9.99 | CurveTo 8.93, 9.75, 9.28, 9.99, 9.08, 9.91 | LineTo 7.47, 8.32 | CurveTo 7.23, 7.71, 7.31, 8.16, 7.23, 7.95 | ClosePath 1
Path4=9.78, 14.62 | CurveTo 10.48, 12.02, 9.78, 13.69, 10.01, 12.82 | CurveTo 12.39, 10.11, 10.95, 11.22, 11.58, 10.58 | CurveTo 14.99, 9.41, 13.2, 9.64, 14.06, 9.41 | CurveTo 17.01, 9.83, 15.69, 9.41, 16.36, 9.55 | CurveTo 18.67, 10.95, 17.65, 10.11, 18.21, 10.48 | CurveTo 19.78, 12.61, 19.14, 11.42, 19.51, 11.97 | CurveTo 20.19, 14.63, 20.05, 13.25, 20.19, 13.93 | CurveTo 19.49, 17.24, 20.19, 15.57, 19.96, 16.44 | CurveTo 17.59, 19.14, 19.02, 18.04, 18.39, 18.67 | CurveTo 14.98, 19.84, 16.79, 19.61, 15.92, 19.84 | CurveTo 12.37, 19.14, 14.04, 19.84, 13.17, 19.61 | CurveTo 10.47, 17.24, 11.57, 18.67, 10.94, 18.04 | CurveTo 9.78, 14.62, 10.02, 16.43, 9.78, 15.56 | ClosePath 1
Path5=11.48, 14.62 | CurveTo 12.51, 17.12, 11.48, 15.6, 11.82, 16.43 | CurveTo 15, 18.16, 13.19, 17.81, 14.02, 18.16 | CurveTo 17.5, 17.12, 15.98, 18.16, 16.81, 17.81 | CurveTo 18.54, 14.62, 18.19, 16.43, 18.54, 15.6 | CurveTo 17.5, 12.15, 18.54, 13.66, 18.19, 12.84 | CurveTo 15, 11.13, 16.81, 11.47, 15.98, 11.13 | CurveTo 12.52, 12.15, 14.03, 11.13, 13.2, 11.47 | CurveTo 11.48, 14.62, 11.82, 12.84, 11.48, 13.66 | ClosePath 1
Path6=14.14, 22.4 | CurveTo 14.39, 21.8, 14.14, 22.16, 14.22, 21.96 | CurveTo 14.99, 21.56, 14.56, 21.64, 14.76, 21.56 | CurveTo 15.6, 21.8, 15.23, 21.56, 15.44, 21.64 | CurveTo 15.84, 22.4, 15.76, 21.96, 15.84, 22.16 | LineTo 15.84, 24.39 | CurveTo 15.59, 25.01, 15.84, 24.63, 15.76, 24.84 | CurveTo 14.99, 25.26, 15.42, 25.18, 15.22, 25.26 | CurveTo 14.39, 25.01, 14.76, 25.26, 14.55, 25.18 | CurveTo 14.14, 24.39, 14.22, 24.84, 14.14, 24.63 | LineTo 14.14, 22.4 | ClosePath 1
Path7=14.14, 6.9 | LineTo 14.14, 4.86 | CurveTo 14.39, 4.26, 14.14, 4.63, 14.22, 4.43 | CurveTo 15, 4, 14.56, 4.09, 14.76, 4 | CurveTo 15.6, 4.25, 15.24, 4, 15.43, 4.08 | CurveTo 15.85, 4.85, 15.77, 4.42, 15.85, 4.62 | LineTo 15.85, 6.9 | CurveTo 15.6, 7.48, 15.85, 7.13, 15.77, 7.32 | CurveTo 15, 7.71, 15.43, 7.64, 15.23, 7.71 | CurveTo 14.4, 7.48, 14.77, 7.71, 14.56, 7.63 | CurveTo 14.14, 6.9, 14.24, 7.33, 14.14, 7.13 | ClosePath 1
Path8=19.66, 20.08 | CurveTo 19.89, 19.52, 19.66, 19.85, 19.74, 19.66 | CurveTo 20.45, 19.29, 20.04, 19.36, 20.23, 19.29 | CurveTo 21.05, 19.52, 20.69, 19.29, 20.89, 19.37 | LineTo 22.51, 20.95 | CurveTo 22.75, 21.56, 22.67, 21.12, 22.75, 21.33 | CurveTo 22.51, 22.15, 22.75, 21.79, 22.67, 21.99 | CurveTo 21.31, 22.15, 22.11, 22.46, 21.71, 22.46 | LineTo 19.89, 20.73 | CurveTo 19.66, 20.08, 19.74, 20.55, 19.66, 20.34 | ClosePath 1
Path9=19.66, 9.16 | CurveTo 19.89, 8.57, 19.66, 8.91, 19.74, 8.71 | LineTo 21.31, 7.1 | CurveTo 21.9, 6.86, 21.48, 6.94, 21.68, 6.86 | CurveTo 22.5, 7.11, 22.14, 6.86, 22.34, 6.94 | CurveTo 22.75, 7.71, 22.67, 7.28, 22.75, 7.48 | CurveTo 22.51, 8.33, 22.75, 7.96, 22.67, 8.17 | LineTo 21.05, 9.76 | CurveTo 20.45, 10, 20.87, 9.92, 20.67, 10 | CurveTo 19.89, 9.76, 20.22, 10, 20.04, 9.92 | CurveTo 19.66, 9.16, 19.74, 9.6, 19.66, 9.4 | ClosePath 1
Path10=21.92, 14.62 | CurveTo 22.16, 14, 21.92, 14.38, 22, 14.18 | CurveTo 22.73, 13.76, 22.32, 13.84, 22.51, 13.76 | LineTo 24.75, 13.76 | CurveTo 25.35, 14.02, 24.98, 13.76, 25.18, 13.85 | CurveTo 25.61, 14.62, 25.52, 14.19, 25.61, 14.39 | CurveTo 25.35, 15.22, 25.61, 14.85, 25.52, 15.05 | CurveTo 24.75, 15.47, 25.18, 15.39, 24.98, 15.47 | LineTo 22.73, 15.47 | CurveTo 22.15, 15.22, 22.5, 15.47, 22.3, 15.39 | CurveTo 21.92, 14.62, 22, 15.05, 21.92, 14.86 | ClosePath 1

[StyleWeatherIcon-Day-Cloudy-1]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Path Path3 | StrokeWidth 0
Shape4=Path Path4 | StrokeWidth 0
Shape5=Path Path5 | StrokeWidth 0
Shape6=Path Path6 | StrokeWidth 0
Shape7=Path Path7 | StrokeWidth 0
Shape8=Path Path8 | StrokeWidth 0
Shape9=Path Path9 | StrokeWidth 0
Shape10=Combine Shape1 | XOR Shape2 | XOR Shape3 | XOR Shape4 | XOR Shape5 | XOR Shape6 | XOR Shape7 | XOR Shape8 | XOR Shape9 | #weatherIconTransform#
Path1=3.09, 13.43 | CurveTo 3.37, 14.1, 3.09, 13.7, 3.18, 13.92 | CurveTo 4.09, 14.36, 3.56, 14.28, 3.8, 14.36 | LineTo 5.78, 14.36 | CurveTo 6.47, 14.09, 6.05, 14.36, 6.28, 14.27 | CurveTo 6.76, 13.43, 6.66, 13.91, 6.76, 13.69 | CurveTo 6.48, 12.72, 6.76, 13.14, 6.67, 12.9 | CurveTo 5.79, 12.44, 6.29, 12.54, 6.06, 12.44 | LineTo 4.09, 12.44 | CurveTo 3.37, 12.72, 3.8, 12.44, 3.56, 12.53 | CurveTo 3.09, 13.43, 3.18, 12.89, 3.09, 13.13 | ClosePath 1
Path2=4.86, 19.61 | CurveTo 5.92, 22.13, 4.86, 20.58, 5.21, 21.42 | CurveTo 8.43, 23.19, 6.63, 22.84, 7.46, 23.19 | LineTo 15.29, 23.19 | CurveTo 17.78, 22.14, 16.26, 23.19, 17.09, 22.84 | CurveTo 18.82, 19.61, 18.47, 21.44, 18.82, 20.6 | CurveTo 18.61, 18.38, 18.82, 19.13, 18.75, 18.72 | CurveTo 20.58, 16.26, 19.44, 17.85, 20.1, 17.14 | CurveTo 21.31, 13.42, 21.06, 15.38, 21.31, 14.43 | CurveTo 20.83, 11.09, 21.31, 12.61, 21.15, 11.83 | CurveTo 19.55, 9.18, 20.51, 10.35, 20.08, 9.71 | CurveTo 17.64, 7.9, 19.02, 8.65, 18.38, 8.22 | CurveTo 15.32, 7.42, 16.9, 7.58, 16.13, 7.42 | CurveTo 12.3, 8.23, 14.23, 7.42, 13.22, 7.69 | CurveTo 10.12, 10.41, 11.38, 8.77, 10.65, 9.5 | CurveTo 9.33, 13.42, 9.59, 11.33, 9.33, 12.33 | LineTo 9.33, 13.76 | CurveTo 7.35, 16.25, 8.33, 14.33, 7.67, 15.16 | CurveTo 5.54, 17.52, 6.59, 16.49, 5.99, 16.91 | CurveTo 4.86, 19.61, 5.09, 18.13, 4.86, 18.83 | ClosePath 1
Path3=6.42, 5.45 | CurveTo 6.68, 6.12, 6.42, 5.73, 6.51, 5.96 | LineTo 8.29, 7.81 | CurveTo 9.7, 7.81, 8.76, 8.17, 9.23, 8.17 | CurveTo 9.98, 7.11, 9.89, 7.62, 9.98, 7.39 | CurveTo 9.7, 6.41, 9.98, 6.84, 9.89, 6.61 | LineTo 8.05, 4.76 | CurveTo 7.35, 4.47, 7.84, 4.57, 7.6, 4.47 | CurveTo 6.67, 4.75, 7.07, 4.47, 6.84, 4.56 | CurveTo 6.42, 5.45, 6.5, 4.94, 6.42, 5.17 | ClosePath 1
Path4=6.84, 19.61 | CurveTo 7.24, 18.53, 6.84, 19.19, 6.97, 18.83 | CurveTo 8.26, 18.02, 7.51, 18.23, 7.85, 18.06 | LineTo 8.88, 17.94 | CurveTo 9.08, 17.71, 9.01, 17.94, 9.08, 17.86 | LineTo 9.17, 17.15 | CurveTo 9.9, 15.71, 9.24, 16.57, 9.48, 16.09 | CurveTo 11.38, 15.13, 10.32, 15.32, 10.81, 15.13 | CurveTo 12.89, 15.71, 11.96, 15.13, 12.47, 15.32 | CurveTo 13.64, 17.15, 13.32, 16.1, 13.57, 16.58 | LineTo 13.72, 17.8 | CurveTo 13.96, 18.03, 13.78, 17.95, 13.86, 18.03 | LineTo 15.28, 18.03 | CurveTo 16.4, 18.5, 15.71, 18.03, 16.08, 18.19 | CurveTo 16.87, 19.62, 16.72, 18.81, 16.87, 19.18 | CurveTo 16.4, 20.77, 16.87, 20.07, 16.71, 20.45 | CurveTo 15.28, 21.25, 16.09, 21.09, 15.71, 21.25 | LineTo 8.43, 21.25 | CurveTo 7.3, 20.77, 7.98, 21.25, 7.6, 21.09 | CurveTo 6.84, 19.61, 6.99, 20.45, 6.84, 20.06 | ClosePath 1
Path5=11.26, 13.22 | CurveTo 12.53, 10.46, 11.33, 12.13, 11.75, 11.21 | CurveTo 15.32, 9.34, 13.3, 9.72, 14.24, 9.34 | CurveTo 18.16, 10.53, 16.43, 9.34, 17.38, 9.74 | CurveTo 19.33, 13.42, 18.94, 11.32, 19.33, 12.29 | CurveTo 18.82, 15.37, 19.33, 14.12, 19.16, 14.77 | CurveTo 17.44, 16.82, 18.48, 15.97, 18.02, 16.45 | CurveTo 15.41, 16.09, 16.85, 16.33, 16.17, 16.09 | CurveTo 13.87, 14, 15.12, 15.21, 14.6, 14.52 | CurveTo 11.39, 13.22, 13.14, 13.48, 12.31, 13.22 | LineTo 11.26, 13.22 | ClosePath 1
Path6=14.35, 4.47 | CurveTo 14.64, 5.17, 14.35, 4.74, 14.45, 4.98 | CurveTo 15.33, 5.46, 14.83, 5.36, 15.06, 5.46 | CurveTo 16.03, 5.17, 15.61, 5.46, 15.84, 5.36 | CurveTo 16.32, 4.47, 16.22, 4.98, 16.32, 4.75 | LineTo 16.32, 2.13 | CurveTo 16.03, 1.47, 16.32, 1.87, 16.22, 1.65 | CurveTo 15.33, 1.2, 15.84, 1.29, 15.61, 1.2 | CurveTo 14.64, 1.47, 15.06, 1.2, 14.83, 1.29 | CurveTo 14.35, 2.13, 14.45, 1.65, 14.35, 1.87 | LineTo 14.35, 4.47 | ClosePath 1
Path7=20.67, 19.7 | CurveTo 20.94, 20.4, 20.67, 19.97, 20.76, 20.2 | LineTo 22.58, 22.02 | CurveTo 23.99, 22.02, 23, 22.44, 23.47, 22.44 | CurveTo 24.25, 21.34, 24.17, 21.85, 24.25, 21.63 | CurveTo 23.99, 20.67, 24.25, 21.07, 24.16, 20.85 | LineTo 22.3, 19 | CurveTo 21.62, 18.75, 22.12, 18.83, 21.89, 18.75 | CurveTo 20.94, 19.02, 21.34, 18.75, 21.12, 18.84 | CurveTo 20.67, 19.7, 20.76, 19.2, 20.67, 19.43 | ClosePath 1
Path8=20.67, 7.09 | CurveTo 20.94, 7.81, 20.67, 7.37, 20.76, 7.61 | CurveTo 21.62, 8.08, 21.12, 7.99, 21.35, 8.08 | CurveTo 22.3, 7.81, 21.89, 8.08, 22.12, 7.99 | LineTo 23.99, 6.12 | CurveTo 24.25, 5.45, 24.17, 5.95, 24.25, 5.73 | CurveTo 23.96, 4.76, 24.25, 5.17, 24.15, 4.94 | CurveTo 23.26, 4.48, 23.77, 4.58, 23.54, 4.48 | CurveTo 22.58, 4.77, 23, 4.48, 22.77, 4.58 | LineTo 20.94, 6.4 | CurveTo 20.67, 7.09, 20.76, 6.58, 20.67, 6.81 | ClosePath 1
Path9=23.25, 13.43 | CurveTo 23.53, 14.1, 23.25, 13.7, 23.34, 13.92 | CurveTo 24.25, 14.36, 23.72, 14.28, 23.96, 14.36 | LineTo 25.94, 14.36 | CurveTo 26.63, 14.09, 26.21, 14.36, 26.44, 14.27 | CurveTo 26.92, 13.43, 26.82, 13.91, 26.92, 13.69 | CurveTo 26.64, 12.72, 26.92, 13.14, 26.83, 12.9 | CurveTo 25.95, 12.44, 26.45, 12.54, 26.22, 12.44 | LineTo 24.26, 12.44 | CurveTo 23.54, 12.72, 23.97, 12.44, 23.73, 12.53 | CurveTo 23.25, 13.43, 23.35, 12.89, 23.25, 13.13 | ClosePath 1


[StyleWeatherIcon-Day-Cloudy-2]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Path Path3 | StrokeWidth 0
Shape4=Path Path4 | StrokeWidth 0
Shape5=Path Path5 | StrokeWidth 0
Shape6=Path Path6 | StrokeWidth 0
Shape7=Path Path7 | StrokeWidth 0
Shape8=Path Path8 | StrokeWidth 0
Shape9=Combine Shape1 | XOR Shape2 | XOR Shape3 | XOR Shape4 | XOR Shape5 | XOR Shape6 | XOR Shape7 | XOR Shape8 | #weatherIconTransform#
Path1=3.95, 13.05 | CurveTo 4.82, 10.57, 3.95, 12.12, 4.24, 11.3 | CurveTo 7.01, 9.17, 5.4, 9.84, 6.13, 9.37 | CurveTo 8.71, 6.46, 7.27, 8.07, 7.83, 7.17 | CurveTo 11.72, 5.4, 9.59, 5.75, 10.59, 5.4 | CurveTo 14.67, 6.44, 12.82, 5.4, 13.8, 5.75 | CurveTo 16.35, 9.09, 15.54, 7.13, 16.1, 8.01 | LineTo 16.61, 9.09 | CurveTo 19.43, 10.25, 17.71, 9.09, 18.65, 9.48 | CurveTo 20.6, 13.06, 20.21, 11.02, 20.6, 11.96 | CurveTo 20.6, 13.1, 20.6, 13.07, 20.6, 13.08 | CurveTo 20.6, 13.16, 20.6, 13.12, 20.6, 13.14 | CurveTo 21.72, 16.01, 21.35, 13.96, 21.72, 14.91 | CurveTo 21.15, 18.11, 21.72, 16.77, 21.53, 17.47 | CurveTo 19.62, 19.64, 20.77, 18.76, 20.26, 19.27 | CurveTo 17.53, 20.2, 18.98, 20.02, 18.28, 20.2 | CurveTo 14.97, 19.31, 16.57, 20.2, 15.71, 19.9 | CurveTo 13.49, 17.05, 14.23, 18.72, 13.73, 17.96 | LineTo 7.79, 17.05 | CurveTo 5.07, 15.82, 6.72, 17, 5.81, 16.59 | CurveTo 3.95, 13.05, 4.33, 15.05, 3.95, 14.12 | ClosePath 1
Path2=5.31, 13.05 | CurveTo 6.04, 14.87, 5.31, 13.75, 5.55, 14.36 | CurveTo 7.79, 15.69, 6.53, 15.38, 7.11, 15.66 | LineTo 16.78, 15.69 | CurveTo 18.53, 14.87, 17.46, 15.66, 18.05, 15.39 | CurveTo 19.26, 13.05, 19.02, 14.35, 19.26, 13.75 | CurveTo 18.47, 11.22, 19.26, 12.34, 19, 11.73 | CurveTo 16.61, 10.45, 17.94, 10.7, 17.33, 10.45 | LineTo 15.32, 10.45 | CurveTo 15.18, 10.31, 15.23, 10.45, 15.18, 10.4 | LineTo 15.11, 9.84 | CurveTo 13.99, 7.65, 15.02, 8.97, 14.65, 8.24 | CurveTo 11.71, 6.76, 13.33, 7.06, 12.57, 6.76 | CurveTo 9.4, 7.64, 10.82, 6.76, 10.05, 7.05 | CurveTo 8.31, 9.83, 8.75, 8.23, 8.4, 8.96 | LineTo 8.25, 10.3 | CurveTo 8.09, 10.44, 8.25, 10.39, 8.2, 10.44 | LineTo 7.69, 10.44 | CurveTo 6, 11.3, 7.02, 10.52, 6.45, 10.8 | CurveTo 5.31, 13.05, 5.54, 11.79, 5.31, 12.38 | ClosePath 1
Path3=11.51, 22.06 | CurveTo 11.51, 21.08, 11.26, 21.73, 11.26, 21.41 | LineTo 12.64, 19.93 | CurveTo 13.16, 19.75, 12.78, 19.81, 12.95, 19.75 | CurveTo 13.62, 19.93, 13.35, 19.75, 13.5, 19.81 | CurveTo 13.8, 20.4, 13.74, 20.05, 13.8, 20.21 | CurveTo 13.62, 20.88, 13.8, 20.6, 13.74, 20.76 | LineTo 12.48, 22.06 | CurveTo 11.99, 22.25, 12.36, 22.18, 12.19, 22.25 | CurveTo 11.51, 22.06, 11.79, 22.25, 11.63, 22.18 | ClosePath 1
Path4=14.9, 17.04 | CurveTo 15.94, 18.34, 15.11, 17.58, 15.46, 18.01 | CurveTo 17.54, 18.84, 16.42, 18.67, 16.95, 18.84 | CurveTo 19.51, 18.01, 18.31, 18.84, 18.97, 18.56 | CurveTo 20.32, 15.99, 20.05, 17.45, 20.32, 16.78 | CurveTo 20.13, 14.94, 20.32, 15.6, 20.26, 15.25 | CurveTo 18.74, 16.43, 19.8, 15.55, 19.33, 16.05 | CurveTo 16.78, 17.04, 18.14, 16.81, 17.49, 17.01 | LineTo 14.9, 17.04 | ClosePath 1
Path5=16.85, 22.23 | CurveTo 17.05, 21.76, 16.85, 22.04, 16.92, 21.89 | CurveTo 17.53, 21.57, 17.18, 21.64, 17.35, 21.57 | CurveTo 18.03, 21.78, 17.71, 21.57, 17.88, 21.64 | CurveTo 18.22, 22.23, 18.15, 21.9, 18.22, 22.05 | LineTo 18.22, 23.87 | CurveTo 18.02, 24.36, 18.22, 24.06, 18.15, 24.22 | CurveTo 17.54, 24.57, 17.89, 24.5, 17.72, 24.57 | CurveTo 17.06, 24.36, 17.36, 24.57, 17.19, 24.5 | CurveTo 16.86, 23.87, 16.93, 24.22, 16.86, 24.06 | LineTo 16.86, 22.23 | ClosePath 1
Path6=21.26, 20.4 | CurveTo 21.45, 19.94, 21.26, 20.22, 21.32, 20.07 | CurveTo 21.92, 19.75, 21.58, 19.82, 21.74, 19.75 | CurveTo 22.39, 19.93, 22.11, 19.75, 22.27, 19.81 | LineTo 23.57, 21.08 | CurveTo 23.77, 21.56, 23.7, 21.22, 23.77, 21.38 | CurveTo 23.57, 22.04, 23.77, 21.75, 23.7, 21.91 | CurveTo 23.08, 22.24, 23.44, 22.17, 23.27, 22.24 | CurveTo 22.58, 22.05, 22.87, 22.24, 22.71, 22.18 | LineTo 21.45, 20.87 | CurveTo 21.26, 20.4, 21.32, 20.73, 21.26, 20.57 | ClosePath 1
Path7=21.26, 11.59 | CurveTo 21.45, 11.12, 21.26, 11.4, 21.32, 11.24 | LineTo 22.58, 9.94 | CurveTo 23.08, 9.75, 22.72, 9.82, 22.88, 9.75 | CurveTo 23.58, 9.94, 23.27, 9.75, 23.43, 9.81 | CurveTo 23.78, 10.45, 23.71, 10.09, 23.78, 10.26 | CurveTo 23.58, 10.93, 23.78, 10.63, 23.71, 10.78 | LineTo 22.4, 12.08 | CurveTo 21.93, 12.27, 22.28, 12.2, 22.12, 12.27 | CurveTo 21.46, 12.08, 21.74, 12.27, 21.58, 12.21 | CurveTo 21.26, 11.59, 21.32, 11.94, 21.26, 11.78 | ClosePath 1
Path8=23.08, 15.99 | CurveTo 23.27, 15.51, 23.08, 15.8, 23.14, 15.64 | CurveTo 23.74, 15.31, 23.39, 15.38, 23.55, 15.31 | LineTo 25.36, 15.31 | CurveTo 25.86, 15.51, 25.55, 15.31, 25.72, 15.38 | CurveTo 26.07, 15.99, 26, 15.64, 26.07, 15.8 | CurveTo 25.86, 16.48, 26.07, 16.18, 26, 16.35 | CurveTo 25.36, 16.68, 25.72, 16.61, 25.56, 16.68 | LineTo 23.74, 16.68 | CurveTo 23.27, 16.48, 23.55, 16.68, 23.4, 16.61 | CurveTo 23.08, 15.99, 23.14, 16.35, 23.08, 16.19 | ClosePath 1

[StyleWeatherIcon-Day-Cloudy-3]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Path Path3 | StrokeWidth 0
Shape4=Path Path4 | StrokeWidth 0
Shape5=Path Path5 | StrokeWidth 0
Shape6=Path Path6 | StrokeWidth 0
Shape7=Path Path7 | StrokeWidth 0
Shape8=Path Path8 | StrokeWidth 0
Shape9=Combine Shape1 | XOR Shape2 | XOR Shape3 | XOR Shape4 | XOR Shape5 | XOR Shape6 | XOR Shape7 | XOR Shape8 | #weatherIconTransform#
Path1=1.56, 16.9 | CurveTo 2.22, 19.39, 1.56, 17.8, 1.78, 18.63 | CurveTo 4.02, 21.19, 2.66, 20.15, 3.26, 20.75 | CurveTo 6.49, 21.85, 4.78, 21.63, 5.6, 21.85 | LineTo 17.32, 21.85 | CurveTo 19.8, 21.19, 18.21, 21.85, 19.04, 21.63 | CurveTo 21.61, 19.39, 20.56, 20.75, 21.17, 20.15 | CurveTo 22.28, 16.9, 22.05, 18.63, 22.28, 17.8 | CurveTo 21.86, 14.9, 22.28, 16.24, 22.14, 15.57 | CurveTo 23, 11.6, 22.62, 13.98, 23, 12.87 | CurveTo 22.59, 9.56, 23, 10.89, 22.86, 10.21 | CurveTo 21.47, 7.89, 22.32, 8.91, 21.94, 8.36 | CurveTo 19.8, 6.77, 21, 7.42, 20.45, 7.04 | CurveTo 17.76, 6.36, 19.15, 6.49, 18.47, 6.36 | CurveTo 13.88, 8.1, 16.28, 6.36, 14.99, 6.94 | CurveTo 11.18, 7.44, 13.11, 7.66, 12.21, 7.44 | CurveTo 7.45, 8.75, 9.77, 7.44, 8.53, 7.88 | CurveTo 5.37, 12.1, 6.37, 9.62, 5.67, 10.74 | CurveTo 2.63, 13.83, 4.25, 12.36, 3.34, 12.93 | CurveTo 1.56, 16.9, 1.92, 14.73, 1.56, 15.75 | ClosePath 1
Path2=3.27, 16.9 | CurveTo 4.11, 14.73, 3.27, 16.06, 3.55, 15.34 | CurveTo 6.21, 13.67, 4.67, 14.12, 5.37, 13.77 | LineTo 6.71, 13.64 | CurveTo 6.9, 13.46, 6.83, 13.64, 6.9, 13.58 | LineTo 6.97, 12.92 | CurveTo 8.38, 10.21, 7.11, 11.84, 7.58, 10.93 | CurveTo 11.19, 9.12, 9.18, 9.48, 10.12, 9.12 | CurveTo 14.06, 10.22, 12.29, 9.12, 13.25, 9.49 | CurveTo 15.43, 12.93, 14.88, 10.95, 15.33, 11.85 | LineTo 15.5, 13.51 | CurveTo 15.71, 13.68, 15.52, 13.62, 15.59, 13.68 | LineTo 17.32, 13.68 | CurveTo 19.6, 14.64, 18.2, 13.68, 18.96, 14 | CurveTo 20.56, 16.91, 20.24, 15.28, 20.56, 16.03 | CurveTo 19.61, 19.23, 20.56, 17.82, 20.24, 18.59 | CurveTo 17.33, 20.19, 18.98, 19.87, 18.21, 20.19 | LineTo 6.49, 20.19 | CurveTo 4.22, 19.22, 5.61, 20.19, 4.86, 19.87 | CurveTo 3.27, 16.9, 3.59, 18.57, 3.27, 17.8 | ClosePath 1
Path3=9.97, 4.63 | CurveTo 10.21, 5.26, 9.97, 4.87, 10.05, 5.08 | LineTo 10.87, 5.9 | CurveTo 11.51, 6.15, 11.12, 6.09, 11.33, 6.17 | CurveTo 12.06, 5.89, 11.72, 6.15, 11.9, 6.06 | CurveTo 12.3, 5.27, 12.22, 5.72, 12.3, 5.51 | CurveTo 12.04, 4.68, 12.3, 5.03, 12.21, 4.83 | LineTo 11.45, 4.02 | CurveTo 10.84, 3.78, 11.27, 3.86, 11.07, 3.78 | CurveTo 10.22, 4.03, 10.6, 3.78, 10.39, 3.86 | CurveTo 9.97, 4.63, 10.05, 4.19, 9.97, 4.39 | ClosePath 1
Path4=15.31, 9.06 | CurveTo 17.76, 8.06, 16, 8.39, 16.82, 8.06 | CurveTo 20.28, 9.09, 18.75, 8.06, 19.59, 8.4 | CurveTo 21.32, 11.6, 20.97, 9.78, 21.32, 10.61 | CurveTo 20.81, 13.44, 21.32, 12.22, 21.15, 12.84 | CurveTo 17.32, 12, 19.84, 12.48, 18.68, 12 | LineTo 17, 12 | CurveTo 15.31, 9.06, 16.75, 10.91, 16.19, 9.93 | ClosePath 1
Path5=16.94, 3.78 | CurveTo 17.17, 4.4, 16.94, 4.04, 17.02, 4.24 | CurveTo 17.76, 4.63, 17.32, 4.56, 17.52, 4.63 | CurveTo 18.38, 4.4, 18.02, 4.63, 18.22, 4.55 | CurveTo 18.61, 3.78, 18.54, 4.24, 18.61, 4.04 | LineTo 18.61, 1.73 | CurveTo 18.37, 1.14, 18.61, 1.49, 18.53, 1.3 | CurveTo 17.76, 0.91, 18.21, 0.98, 18.01, 0.91 | CurveTo 17.17, 1.14, 17.52, 0.91, 17.33, 0.99 | CurveTo 16.94, 1.73, 17.01, 1.29, 16.94, 1.49 | LineTo 16.94, 3.78 | ClosePath 1
Path6=22.46, 6.07 | CurveTo 22.68, 6.69, 22.46, 6.33, 22.53, 6.53 | CurveTo 23.3, 6.93, 22.89, 6.85, 23.1, 6.93 | CurveTo 23.89, 6.69, 23.48, 6.93, 23.68, 6.85 | LineTo 25.32, 5.26 | CurveTo 25.56, 4.62, 25.48, 5.08, 25.56, 4.87 | CurveTo 25.32, 4.02, 25.56, 4.38, 25.48, 4.18 | CurveTo 24.73, 3.78, 25.16, 3.86, 24.96, 3.78 | CurveTo 24.15, 4.02, 24.49, 3.78, 24.3, 3.86 | LineTo 22.68, 5.45 | CurveTo 22.46, 6.07, 22.53, 5.64, 22.46, 5.84 | ClosePath 1
Path7=23.25, 17.91 | CurveTo 23.5, 18.54, 23.25, 18.15, 23.33, 18.36 | LineTo 24.15, 19.17 | CurveTo 24.73, 19.41, 24.3, 19.33, 24.49, 19.41 | CurveTo 25.33, 19.16, 24.97, 19.41, 25.17, 19.33 | CurveTo 25.57, 18.54, 25.49, 18.99, 25.57, 18.79 | CurveTo 25.33, 17.96, 25.57, 18.32, 25.49, 18.12 | LineTo 24.68, 17.31 | CurveTo 24.11, 17.07, 24.52, 17.15, 24.33, 17.07 | CurveTo 23.51, 17.31, 23.87, 17.07, 23.67, 17.15 | CurveTo 23.25, 17.91, 23.34, 17.47, 23.25, 17.67 | ClosePath 1
Path8=24.72, 11.6 | CurveTo 24.98, 12.18, 24.72, 11.83, 24.81, 12.02 | CurveTo 25.59, 12.42, 25.14, 12.34, 25.35, 12.42 | LineTo 27.63, 12.42 | CurveTo 28.21, 12.19, 27.86, 12.42, 28.05, 12.34 | CurveTo 28.44, 11.6, 28.37, 12.04, 28.44, 11.84 | CurveTo 28.21, 11, 28.44, 11.36, 28.36, 11.16 | CurveTo 27.63, 10.75, 28.06, 10.84, 27.86, 10.75 | LineTo 25.59, 10.75 | CurveTo 24.98, 11, 25.35, 10.75, 25.15, 10.83 | CurveTo 24.72, 11.6, 24.8, 11.17, 24.72, 11.37 | ClosePath 1

[StyleWeatherIcon-Day-Rain]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Path Path3 | StrokeWidth 0
Shape4=Path Path4 | StrokeWidth 0
Shape5=Path Path5 | StrokeWidth 0
Shape6=Path Path6 | StrokeWidth 0
Shape7=Path Path7 | StrokeWidth 0
Shape8=Path Path8 | StrokeWidth 0
Shape9=Path Path9 | StrokeWidth 0
Shape10=Path Path10 | StrokeWidth 0
Shape11=Combine Shape1 | XOR Shape2 | XOR Shape3 | XOR Shape4 | XOR Shape5 | XOR Shape6 | XOR Shape7 | XOR Shape8 | XOR Shape9 | XOR Shape10 | #weatherIconTransform#
Path1=1.51, 16.89 | CurveTo 2.9, 20.33, 1.51, 18.22, 1.97, 19.37 | CurveTo 6.31, 21.86, 3.83, 21.29, 4.96, 21.8 | CurveTo 6.48, 21.69, 6.42, 21.86, 6.48, 21.8 | LineTo 6.48, 20.35 | CurveTo 6.31, 20.18, 6.48, 20.24, 6.42, 20.18 | CurveTo 4.12, 19.15, 5.45, 20.14, 4.72, 19.79 | CurveTo 3.22, 16.89, 3.52, 18.51, 3.22, 17.75 | CurveTo 4.07, 14.73, 3.22, 16.07, 3.5, 15.35 | CurveTo 6.17, 13.66, 4.64, 14.11, 5.34, 13.76 | LineTo 6.7, 13.61 | CurveTo 6.9, 13.44, 6.83, 13.61, 6.9, 13.55 | LineTo 6.97, 12.9 | CurveTo 8.34, 10.18, 7.08, 11.82, 7.53, 10.91 | CurveTo 11.19, 9.08, 9.15, 9.45, 10.1, 9.08 | CurveTo 14.05, 10.18, 12.28, 9.08, 13.23, 9.45 | CurveTo 15.45, 12.9, 14.87, 10.91, 15.33, 11.82 | LineTo 15.52, 13.47 | CurveTo 15.69, 13.66, 15.52, 13.59, 15.58, 13.66 | LineTo 17.31, 13.66 | CurveTo 19.61, 14.62, 18.2, 13.66, 18.96, 13.98 | CurveTo 20.58, 16.89, 20.26, 15.26, 20.58, 16.01 | CurveTo 19.68, 19.15, 20.58, 17.76, 20.28, 18.51 | CurveTo 17.5, 20.18, 19.08, 19.79, 18.35, 20.13 | CurveTo 17.31, 20.35, 17.38, 20.18, 17.31, 20.24 | LineTo 17.31, 21.69 | CurveTo 17.5, 21.86, 17.31, 21.8, 17.37, 21.86 | CurveTo 20.89, 20.35, 18.83, 21.82, 19.96, 21.31 | CurveTo 22.28, 16.9, 21.82, 19.38, 22.28, 18.23 | CurveTo 21.86, 14.89, 22.28, 16.18, 22.14, 15.51 | CurveTo 23.03, 11.58, 22.64, 13.92, 23.03, 12.82 | CurveTo 22.32, 8.94, 23.03, 10.63, 22.79, 9.75 | CurveTo 20.4, 7.02, 21.85, 8.13, 21.21, 7.49 | CurveTo 17.78, 6.32, 19.59, 6.55, 18.72, 6.32 | CurveTo 13.9, 8.06, 16.22, 6.32, 14.93, 6.9 | CurveTo 11.19, 7.4, 13.08, 7.62, 12.18, 7.4 | CurveTo 7.43, 8.72, 9.78, 7.4, 8.52, 7.84 | CurveTo 5.33, 12.08, 6.34, 9.6, 5.64, 10.72 | CurveTo 2.59, 13.82, 4.22, 12.34, 3.31, 12.92 | CurveTo 1.51, 16.89, 1.87, 14.72, 1.51, 15.74 | ClosePath 1
Path2=6.91, 23.75 | CurveTo 7.07, 24.24, 6.91, 23.92, 6.96, 24.08 | CurveTo 7.56, 24.57, 7.18, 24.4, 7.34, 24.51 | CurveTo 7.83, 24.61, 7.67, 24.59, 7.76, 24.61 | CurveTo 8.6, 23.97, 8.22, 24.61, 8.48, 24.4 | LineTo 10.18, 18.09 | CurveTo 10.1, 17.42, 10.25, 17.85, 10.22, 17.63 | CurveTo 9.57, 17.04, 9.98, 17.21, 9.8, 17.09 | CurveTo 8.94, 17.11, 9.35, 16.97, 9.14, 16.99 | CurveTo 8.53, 17.62, 8.74, 17.22, 8.6, 17.39 | LineTo 6.95, 23.53 | CurveTo 6.91, 23.75, 6.93, 23.66, 6.91, 23.73 | ClosePath 1
Path3=9.52, 26.83 | CurveTo 9.67, 27.35, 9.52, 27.02, 9.57, 27.19 | CurveTo 10.19, 27.65, 9.77, 27.51, 9.94, 27.61 | CurveTo 10.45, 27.69, 10.3, 27.67, 10.39, 27.69 | CurveTo 10.9, 27.52, 10.61, 27.69, 10.76, 27.63 | CurveTo 11.17, 27.04, 11.04, 27.4, 11.13, 27.24 | LineTo 13.57, 18.11 | CurveTo 13.5, 17.47, 13.63, 17.88, 13.61, 17.66 | CurveTo 13, 17.07, 13.39, 17.28, 13.22, 17.14 | CurveTo 12.35, 17.14, 12.77, 17, 12.55, 17.02 | CurveTo 11.95, 17.65, 12.15, 17.25, 12.01, 17.42 | LineTo 9.55, 26.58 | CurveTo 9.52, 26.83, 9.53, 26.73, 9.52, 26.82 | ClosePath 1
Path4=9.94, 4.6 | CurveTo 10.19, 5.21, 9.94, 4.84, 10.02, 5.04 | LineTo 10.84, 5.87 | CurveTo 11.46, 6.09, 11.03, 6.02, 11.24, 6.09 | CurveTo 12.04, 5.86, 11.67, 6.09, 11.87, 6.01 | CurveTo 12.3, 5.27, 12.21, 5.7, 12.3, 5.51 | CurveTo 12.06, 4.63, 12.3, 5.03, 12.22, 4.81 | LineTo 11.42, 3.98 | CurveTo 10.82, 3.73, 11.24, 3.81, 11.04, 3.73 | CurveTo 10.2, 3.99, 10.58, 3.73, 10.37, 3.82 | CurveTo 9.94, 4.6, 10.03, 4.16, 9.94, 4.37 | ClosePath 1
Path5=13.67, 23.77 | CurveTo 13.82, 24.24, 13.67, 23.93, 13.72, 24.09 | CurveTo 14.28, 24.56, 13.92, 24.39, 14.08, 24.5 | CurveTo 14.53, 24.6, 14.39, 24.58, 14.48, 24.6 | CurveTo 15.02, 24.45, 14.7, 24.6, 14.87, 24.55 | CurveTo 15.32, 23.96, 15.17, 24.35, 15.27, 24.19 | LineTo 16.9, 18.08 | CurveTo 16.83, 17.44, 16.96, 17.85, 16.94, 17.63 | CurveTo 16.33, 17.04, 16.72, 17.24, 16.55, 17.11 | CurveTo 15.68, 17.11, 16.09, 16.97, 15.88, 16.99 | CurveTo 15.29, 17.62, 15.48, 17.22, 15.35, 17.39 | LineTo 13.71, 23.53 | CurveTo 13.67, 23.77, 13.69, 23.68, 13.67, 23.76 | ClosePath 1
Path6=15.3, 9.03 | CurveTo 17.78, 8.03, 16.01, 8.36, 16.83, 8.03 | CurveTo 20.28, 9.07, 18.76, 8.03, 19.6, 8.38 | CurveTo 21.31, 11.59, 20.97, 9.76, 21.31, 10.6 | CurveTo 20.79, 13.44, 21.31, 12.21, 21.14, 12.83 | CurveTo 17.3, 11.99, 19.82, 12.47, 18.66, 11.99 | LineTo 16.97, 11.99 | CurveTo 15.3, 9.03, 16.7, 10.81, 16.14, 9.83 | ClosePath 1
Path7=16.92, 3.78 | CurveTo 17.17, 4.37, 16.92, 4.01, 17, 4.21 | CurveTo 17.78, 4.61, 17.34, 4.53, 17.54, 4.61 | CurveTo 18.37, 4.38, 18.01, 4.61, 18.21, 4.53 | CurveTo 18.61, 3.79, 18.53, 4.22, 18.61, 4.03 | LineTo 18.61, 1.73 | CurveTo 18.38, 1.1, 18.61, 1.47, 18.53, 1.26 | CurveTo 17.79, 0.86, 18.22, 0.94, 18.03, 0.86 | CurveTo 17.17, 1.11, 17.54, 0.86, 17.33, 0.94 | CurveTo 16.93, 1.73, 17.01, 1.28, 16.93, 1.48 | LineTo 16.93, 3.78 | ClosePath 1
Path8=22.45, 6.06 | CurveTo 22.72, 6.65, 22.45, 6.3, 22.54, 6.5 | CurveTo 23.27, 6.91, 22.86, 6.81, 23.04, 6.89 | CurveTo 23.89, 6.65, 23.5, 6.93, 23.71, 6.84 | LineTo 25.33, 5.22 | CurveTo 25.59, 4.59, 25.51, 5.05, 25.59, 4.84 | CurveTo 25.34, 3.98, 25.59, 4.35, 25.51, 4.14 | CurveTo 24.73, 3.74, 25.17, 3.82, 24.97, 3.74 | CurveTo 24.15, 3.99, 24.52, 3.74, 24.33, 3.82 | LineTo 22.72, 5.43 | CurveTo 22.45, 6.06, 22.54, 5.6, 22.45, 5.81 | ClosePath 1
Path9=23.26, 17.91 | CurveTo 23.5, 18.54, 23.26, 18.15, 23.34, 18.36 | LineTo 24.15, 19.17 | CurveTo 24.75, 19.38, 24.33, 19.31, 24.53, 19.38 | LineTo 24.77, 19.4 | CurveTo 25.35, 19.16, 25, 19.4, 25.19, 19.32 | CurveTo 25.59, 18.55, 25.51, 19, 25.59, 18.79 | CurveTo 25.33, 17.97, 25.59, 18.31, 25.5, 18.12 | LineTo 24.71, 17.31 | CurveTo 24.09, 17.07, 24.53, 17.15, 24.32, 17.07 | CurveTo 23.5, 17.32, 23.86, 17.07, 23.66, 17.15 | CurveTo 23.26, 17.91, 23.34, 17.49, 23.26, 17.67 | ClosePath 1
Path10=24.72, 11.58 | CurveTo 24.98, 12.17, 24.72, 11.82, 24.81, 12.01 | CurveTo 25.6, 12.43, 25.16, 12.35, 25.36, 12.43 | LineTo 27.63, 12.43 | CurveTo 28.24, 12.18, 27.87, 12.43, 28.07, 12.35 | CurveTo 28.49, 11.58, 28.41, 12.01, 28.49, 11.81 | CurveTo 28.24, 10.97, 28.49, 11.34, 28.41, 11.14 | CurveTo 27.63, 10.71, 28.07, 10.8, 27.87, 10.71 | LineTo 25.6, 10.71 | CurveTo 24.98, 10.97, 25.36, 10.71, 25.16, 10.8 | CurveTo 24.72, 11.58, 24.8, 11.14, 24.72, 11.34 | ClosePath 1

[StyleWeatherIcon-Day-Showers]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Path Path3 | StrokeWidth 0
Shape4=Path Path4 | StrokeWidth 0
Shape5=Path Path5 | StrokeWidth 0
Shape6=Path Path6 | StrokeWidth 0
Shape7=Path Path7 | StrokeWidth 0
Shape8=Path Path8 | StrokeWidth 0
Shape9=Path Path9 | StrokeWidth 0
Shape10=Path Path10 | StrokeWidth 0
Shape11=Path Path11 | StrokeWidth 0
Shape12=Path Path12 | StrokeWidth 0
Shape13=Path Path13 | StrokeWidth 0
Shape14=Combine Shape1 | XOR Shape2 | XOR Shape3 | XOR Shape4 | XOR Shape5 | XOR Shape6 | XOR Shape7 | XOR Shape8 | XOR Shape9 | XOR Shape10 | XOR Shape11 | XOR Shape12 | XOR Shape13 | #weatherIconTransform#
Path1=1.56, 16.88 | CurveTo 2.95, 20.31, 1.56, 18.21, 2.02, 19.35 | CurveTo 6.35, 21.84, 3.88, 21.27, 5.01, 21.77 | CurveTo 6.52, 21.67, 6.46, 21.84, 6.52, 21.78 | LineTo 6.52, 20.33 | CurveTo 6.35, 20.15, 6.52, 20.21, 6.46, 20.15 | CurveTo 4.18, 19.13, 5.5, 20.11, 4.78, 19.77 | CurveTo 3.29, 16.88, 3.58, 18.49, 3.29, 17.74 | CurveTo 4.13, 14.71, 3.29, 16.04, 3.57, 15.32 | CurveTo 6.23, 13.65, 4.69, 14.1, 5.39, 13.75 | LineTo 6.73, 13.61 | CurveTo 6.93, 13.43, 6.86, 13.61, 6.93, 13.55 | LineTo 6.99, 12.9 | CurveTo 8.36, 10.19, 7.1, 11.82, 7.55, 10.91 | CurveTo 11.22, 9.1, 9.17, 9.46, 10.12, 9.1 | CurveTo 14.08, 10.19, 12.31, 9.1, 13.27, 9.46 | CurveTo 15.45, 12.9, 14.89, 10.92, 15.35, 11.82 | LineTo 15.52, 13.47 | CurveTo 15.7, 13.65, 15.52, 13.59, 15.58, 13.65 | LineTo 17.37, 13.65 | CurveTo 19.64, 14.61, 18.25, 13.65, 19, 13.97 | CurveTo 20.6, 16.88, 20.28, 15.25, 20.6, 16 | CurveTo 19.7, 19.1, 20.6, 17.73, 20.3, 18.47 | CurveTo 17.54, 20.15, 19.1, 19.73, 18.38, 20.08 | CurveTo 17.37, 20.33, 17.43, 20.15, 17.37, 20.21 | LineTo 17.37, 21.67 | CurveTo 17.54, 21.84, 17.37, 21.78, 17.43, 21.84 | CurveTo 19.94, 21.12, 18.42, 21.82, 19.21, 21.58 | CurveTo 21.65, 19.32, 20.67, 20.66, 21.24, 20.07 | CurveTo 22.27, 16.88, 22.07, 18.57, 22.27, 17.76 | CurveTo 21.86, 14.92, 22.27, 16.17, 22.13, 15.51 | CurveTo 22.99, 11.64, 22.62, 13.98, 22.99, 12.89 | CurveTo 22.58, 9.6, 22.99, 10.93, 22.85, 10.25 | CurveTo 21.46, 7.93, 22.31, 8.95, 21.93, 8.4 | CurveTo 19.8, 6.82, 21, 7.46, 20.44, 7.09 | CurveTo 17.76, 6.41, 19.15, 6.54, 18.47, 6.41 | CurveTo 13.95, 8.07, 16.25, 6.41, 14.98, 6.96 | CurveTo 11.22, 7.43, 13.16, 7.64, 12.25, 7.43 | CurveTo 7.47, 8.74, 9.81, 7.43, 8.56, 7.87 | CurveTo 5.4, 12.09, 6.38, 9.61, 5.7, 10.73 | CurveTo 2.63, 13.81, 4.28, 12.35, 3.35, 12.92 | CurveTo 1.56, 16.88, 1.92, 14.7, 1.56, 15.73 | ClosePath 1
Path2=6.97, 23.58 | CurveTo 7.13, 24.11, 6.97, 23.76, 7.02, 23.94 | CurveTo 7.58, 24.47, 7.24, 24.29, 7.39, 24.4 | CurveTo 8.19, 24.41, 7.77, 24.54, 7.98, 24.52 | CurveTo 8.63, 23.86, 8.41, 24.3, 8.55, 24.12 | LineTo 8.88, 22.81 | CurveTo 8.81, 22.19, 8.95, 22.6, 8.93, 22.4 | CurveTo 8.3, 21.77, 8.69, 21.98, 8.52, 21.84 | CurveTo 7.63, 21.85, 8.05, 21.71, 7.83, 21.74 | CurveTo 7.26, 22.38, 7.43, 21.96, 7.31, 22.15 | LineTo 6.98, 23.37 | CurveTo 6.97, 23.58, 6.98, 23.42, 6.97, 23.49 | ClosePath 1
Path3=8.28, 18.86 | CurveTo 8.92, 19.65, 8.28, 19.24, 8.49, 19.5 | CurveTo 9.56, 19.6, 9.14, 19.73, 9.35, 19.71 | CurveTo 9.97, 19.07, 9.77, 19.49, 9.9, 19.31 | LineTo 10.21, 18.04 | CurveTo 10.14, 17.42, 10.28, 17.83, 10.26, 17.63 | CurveTo 9.63, 17, 10.03, 17.21, 9.86, 17.07 | CurveTo 8.96, 17.08, 9.39, 16.94, 9.16, 16.96 | CurveTo 8.59, 17.6, 8.76, 17.2, 8.64, 17.37 | LineTo 8.29, 18.62 | CurveTo 8.28, 18.86, 8.29, 18.7, 8.28, 18.78 | ClosePath 1
Path4=9.5, 26.75 | CurveTo 9.67, 27.25, 9.5, 26.91, 9.56, 27.08 | CurveTo 10.16, 27.61, 9.78, 27.42, 9.95, 27.54 | CurveTo 10.26, 27.62, 10.17, 27.61, 10.2, 27.61 | CurveTo 10.41, 27.63, 10.32, 27.63, 10.37, 27.63 | CurveTo 10.78, 27.56, 10.55, 27.63, 10.67, 27.61 | CurveTo 11.19, 26.98, 10.97, 27.48, 11.11, 27.29 | LineTo 11.46, 25.99 | CurveTo 11.39, 25.34, 11.53, 25.76, 11.51, 25.54 | CurveTo 10.88, 24.94, 11.27, 25.14, 11.1, 25 | CurveTo 10.23, 25.01, 10.65, 24.87, 10.43, 24.89 | CurveTo 9.83, 25.52, 10.03, 25.13, 9.89, 25.3 | LineTo 9.55, 26.54 | CurveTo 9.5, 26.75, 9.51, 26.63, 9.5, 26.7 | ClosePath 1
Path5=9.96, 4.68 | CurveTo 10.21, 5.3, 9.96, 4.93, 10.04, 5.14 | LineTo 10.87, 5.95 | CurveTo 12.04, 5.95, 11.21, 6.29, 11.6, 6.29 | CurveTo 12.28, 5.34, 12.2, 5.78, 12.28, 5.57 | CurveTo 12.04, 4.73, 12.28, 5.11, 12.2, 4.91 | LineTo 11.41, 4.07 | CurveTo 10.81, 3.83, 11.25, 3.91, 11.05, 3.83 | CurveTo 10.21, 4.08, 10.58, 3.83, 10.38, 3.91 | CurveTo 9.96, 4.68, 10.04, 4.24, 9.96, 4.44 | ClosePath 1
Path6=10.85, 21.96 | CurveTo 11.01, 22.47, 10.85, 22.13, 10.9, 22.3 | CurveTo 11.48, 22.82, 11.12, 22.64, 11.27, 22.75 | CurveTo 12.12, 22.77, 11.71, 22.89, 11.92, 22.87 | CurveTo 12.52, 22.21, 12.31, 22.67, 12.45, 22.48 | LineTo 12.76, 21.2 | CurveTo 12.7, 20.55, 12.83, 20.97, 12.81, 20.75 | CurveTo 12.2, 20.14, 12.59, 20.35, 12.42, 20.21 | CurveTo 11.52, 20.22, 11.95, 20.07, 11.72, 20.1 | CurveTo 11.15, 20.75, 11.32, 20.34, 11.19, 20.52 | LineTo 10.87, 21.78 | CurveTo 10.85, 21.96, 10.85, 21.81, 10.85, 21.87 | ClosePath 1
Path7=13.63, 23.68 | CurveTo 14.26, 24.51, 13.65, 24.06, 13.86, 24.33 | LineTo 14.51, 24.55 | CurveTo 14.98, 24.39, 14.67, 24.55, 14.83, 24.5 | CurveTo 15.3, 23.89, 15.13, 24.28, 15.24, 24.12 | LineTo 15.59, 22.88 | CurveTo 15.5, 22.22, 15.65, 22.64, 15.62, 22.42 | CurveTo 14.97, 21.85, 15.38, 22.02, 15.2, 21.89 | CurveTo 14.35, 21.92, 14.76, 21.78, 14.56, 21.8 | CurveTo 13.94, 22.43, 14.14, 22.04, 14.01, 22.21 | LineTo 13.67, 23.45 | CurveTo 13.65, 23.53, 13.66, 23.47, 13.66, 23.5 | CurveTo 13.63, 23.61, 13.64, 23.56, 13.64, 23.59 | CurveTo 13.63, 23.68, 13.62, 23.63, 13.63, 23.66 | ClosePath 1
Path8=15.03, 18.92 | CurveTo 15.18, 19.4, 15.03, 19.08, 15.08, 19.24 | CurveTo 15.63, 19.72, 15.28, 19.56, 15.43, 19.67 | LineTo 15.88, 19.75 | CurveTo 16.4, 19.57, 16.07, 19.75, 16.25, 19.69 | CurveTo 16.68, 19.1, 16.55, 19.45, 16.64, 19.29 | LineTo 16.95, 18.11 | CurveTo 16.88, 17.46, 17.02, 17.87, 17, 17.66 | CurveTo 16.37, 17.07, 16.77, 17.26, 16.6, 17.13 | CurveTo 15.73, 17.13, 16.14, 17, 15.92, 17.02 | CurveTo 15.34, 17.63, 15.53, 17.24, 15.4, 17.41 | LineTo 15.04, 18.69 | CurveTo 15.03, 18.92, 15.04, 18.77, 15.03, 18.85 | ClosePath 1
Path9=15.36, 9.06 | CurveTo 17.76, 8.1, 16.02, 8.42, 16.82, 8.1 | CurveTo 20.27, 9.14, 18.74, 8.1, 19.58, 8.45 | CurveTo 21.31, 11.65, 20.96, 9.83, 21.31, 10.67 | CurveTo 20.84, 13.41, 21.31, 12.21, 21.15, 12.8 | CurveTo 17.37, 11.98, 19.88, 12.45, 18.73, 11.98 | LineTo 17.03, 11.98 | CurveTo 15.36, 9.06, 16.77, 10.84, 16.21, 9.87 | ClosePath 1
Path10=16.9, 3.83 | CurveTo 17.14, 4.44, 16.9, 4.08, 16.98, 4.28 | CurveTo 17.75, 4.68, 17.3, 4.6, 17.5, 4.68 | CurveTo 18.36, 4.44, 18, 4.68, 18.2, 4.6 | CurveTo 18.6, 3.83, 18.52, 4.28, 18.6, 4.08 | LineTo 18.6, 1.81 | CurveTo 18.36, 1.19, 18.6, 1.56, 18.52, 1.35 | CurveTo 17.75, 0.95, 18.2, 1.03, 18, 0.95 | CurveTo 17.14, 1.19, 17.5, 0.95, 17.3, 1.03 | CurveTo 16.9, 1.81, 16.98, 1.35, 16.9, 1.56 | LineTo 16.9, 3.83 | ClosePath 1
Path11=22.45, 6.12 | CurveTo 22.68, 6.73, 22.45, 6.37, 22.53, 6.57 | CurveTo 23.3, 6.98, 22.89, 6.9, 23.09, 6.98 | CurveTo 23.89, 6.73, 23.49, 6.98, 23.68, 6.9 | LineTo 25.32, 5.3 | CurveTo 25.56, 4.67, 25.48, 5.12, 25.56, 4.91 | CurveTo 25.32, 4.07, 25.56, 4.43, 25.48, 4.23 | CurveTo 24.73, 3.83, 25.16, 3.91, 24.96, 3.83 | CurveTo 24.12, 4.07, 24.5, 3.83, 24.3, 3.91 | LineTo 22.68, 5.5 | CurveTo 22.45, 6.12, 22.53, 5.68, 22.45, 5.88 | ClosePath 1
Path12=23.24, 17.95 | CurveTo 23.5, 18.58, 23.24, 18.18, 23.33, 18.39 | LineTo 24.12, 19.22 | CurveTo 24.74, 19.53, 24.33, 19.43, 24.53, 19.53 | CurveTo 25.32, 19.22, 24.93, 19.53, 25.13, 19.43 | CurveTo 25.58, 18.61, 25.5, 19.04, 25.59, 18.83 | CurveTo 25.32, 18.01, 25.57, 18.38, 25.49, 18.18 | LineTo 24.67, 17.35 | CurveTo 24.1, 17.11, 24.51, 17.19, 24.32, 17.11 | CurveTo 23.49, 17.36, 23.86, 17.11, 23.66, 17.19 | CurveTo 23.24, 17.95, 23.33, 17.52, 23.24, 17.72 | ClosePath 1
Path13=24.71, 11.64 | CurveTo 24.95, 12.22, 24.71, 11.86, 24.79, 12.06 | CurveTo 25.53, 12.46, 25.11, 12.38, 25.31, 12.46 | LineTo 27.57, 12.46 | CurveTo 28.2, 12.23, 27.83, 12.46, 28.04, 12.38 | CurveTo 28.44, 11.64, 28.36, 12.07, 28.44, 11.88 | CurveTo 28.19, 11.02, 28.44, 11.39, 28.36, 11.18 | CurveTo 27.57, 10.78, 28.02, 10.86, 27.82, 10.78 | LineTo 25.53, 10.78 | CurveTo 24.94, 11.03, 25.3, 10.78, 25.1, 10.86 | CurveTo 24.71, 11.64, 24.79, 11.2, 24.71, 11.41 | ClosePath 1

[StyleWeatherIcon-Day-Sleet]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Path Path3 | StrokeWidth 0
Shape4=Path Path4 | StrokeWidth 0
Shape5=Path Path5 | StrokeWidth 0
Shape6=Path Path6 | StrokeWidth 0
Shape7=Path Path7 | StrokeWidth 0
Shape8=Path Path8 | StrokeWidth 0
Shape9=Path Path9 | StrokeWidth 0
Shape10=Path Path10 | StrokeWidth 0
Shape11=Path Path11 | StrokeWidth 0
Shape12=Path Path12 | StrokeWidth 0
Shape13=Path Path13 | StrokeWidth 0
Shape14=Path Path14 | StrokeWidth 0
Shape15=Combine Shape1 | XOR Shape2 | XOR Shape3 | XOR Shape4 | XOR Shape5 | XOR Shape6 | XOR Shape7 | XOR Shape8 | XOR Shape9 | XOR Shape10 | XOR Shape11 | XOR Shape12 | XOR Shape13 | XOR Shape14 | #weatherIconTransform#
Path1=1.49, 16.92 | LineTo 1.49, 16.92 | CurveTo 2.57, 13.83, 1.49, 15.75, 1.85, 14.73 | CurveTo 5.31, 12.09, 3.29, 12.93, 4.21, 12.35 | CurveTo 7.41, 8.71, 5.62, 10.72, 6.32, 9.6 | CurveTo 11.18, 7.39, 8.51, 7.83, 9.76, 7.39 | CurveTo 13.9, 8.05, 12.17, 7.39, 13.08, 7.61 | CurveTo 15.66, 6.8, 14.4, 7.52, 14.99, 7.1 | CurveTo 17.75, 6.35, 16.33, 6.5, 17.03, 6.35 | CurveTo 20.39, 7.06, 18.7, 6.35, 19.58, 6.59 | CurveTo 22.31, 8.98, 21.2, 7.53, 21.84, 8.17 | CurveTo 23.02, 11.62, 22.78, 9.79, 23.02, 10.67 | CurveTo 21.88, 14.91, 23.02, 12.85, 22.64, 13.95 | CurveTo 22.31, 16.93, 22.17, 15.52, 22.31, 16.19 | CurveTo 21.67, 19.38, 22.31, 17.81, 22.1, 18.63 | CurveTo 19.93, 21.19, 21.25, 20.13, 20.67, 20.74 | CurveTo 17.51, 21.91, 19.2, 21.65, 18.39, 21.89 | CurveTo 17.31, 21.73, 17.38, 21.91, 17.31, 21.85 | LineTo 17.31, 20.39 | CurveTo 17.51, 20.21, 17.31, 20.27, 17.38, 20.21 | CurveTo 19.69, 19.18, 18.37, 20.17, 19.09, 19.82 | CurveTo 20.59, 16.92, 20.29, 18.54, 20.59, 17.78 | CurveTo 19.62, 14.63, 20.59, 16.03, 20.27, 15.27 | CurveTo 17.31, 13.67, 18.97, 13.99, 18.21, 13.67 | LineTo 15.7, 13.67 | CurveTo 15.52, 13.5, 15.58, 13.67, 15.52, 13.61 | LineTo 15.44, 12.91 | CurveTo 14.04, 10.19, 15.33, 11.83, 14.86, 10.92 | CurveTo 11.18, 9.09, 13.22, 9.46, 12.26, 9.09 | CurveTo 8.32, 10.19, 10.08, 9.09, 9.13, 9.46 | CurveTo 6.95, 12.91, 7.51, 10.92, 7.05, 11.83 | LineTo 6.88, 13.5 | CurveTo 6.66, 13.63, 6.85, 13.59, 6.77, 13.63 | LineTo 6.15, 13.67 | CurveTo 4.04, 14.73, 5.31, 13.77, 4.6, 14.12 | CurveTo 3.2, 16.91, 3.48, 15.34, 3.2, 16.07 | LineTo 3.2, 16.96 | LineTo 3.23, 16.96 | CurveTo 4.34, 19.39, 3.24, 17.94, 3.61, 18.74 | CurveTo 5.08, 19.88, 4.56, 19.58, 4.81, 19.75 | LineTo 5.08, 19.9 | CurveTo 6.29, 20.21, 5.49, 20.09, 5.9, 20.19 | CurveTo 6.46, 20.38, 6.4, 20.21, 6.46, 20.27 | LineTo 6.46, 21.72 | CurveTo 6.29, 21.89, 6.46, 21.83, 6.4, 21.89 | CurveTo 4.81, 21.59, 5.77, 21.86, 5.28, 21.76 | LineTo 4.81, 21.61 | CurveTo 2.7, 20.18, 3.98, 21.32, 3.27, 20.84 | CurveTo 1.59, 17.87, 2.13, 19.52, 1.75, 18.74 | LineTo 1.59, 17.83 | CurveTo 1.58, 17.8, 1.58, 17.82, 1.58, 17.81 | CurveTo 1.49, 16.92, 1.51, 17.54, 1.49, 17.25 | ClosePath 1
Path2=6.99, 24.09 | CurveTo 7.01, 23.96, 6.99, 24.06, 7, 24.02 | CurveTo 7.03, 23.84, 7.02, 23.91, 7.03, 23.87 | LineTo 7.12, 23.25 | CurveTo 7.53, 22.72, 7.19, 23.01, 7.32, 22.84 | CurveTo 8.21, 22.64, 7.73, 22.6, 7.96, 22.58 | CurveTo 8.72, 23.05, 8.44, 22.71, 8.6, 22.84 | CurveTo 8.79, 23.67, 8.83, 23.25, 8.85, 23.46 | LineTo 8.65, 24.27 | CurveTo 7.89, 24.93, 8.55, 24.71, 8.3, 24.93 | CurveTo 7.74, 24.92, 7.86, 24.93, 7.81, 24.93 | CurveTo 7.61, 24.91, 7.67, 24.91, 7.63, 24.91 | CurveTo 7.15, 24.58, 7.4, 24.85, 7.25, 24.74 | CurveTo 6.99, 24.09, 7.04, 24.43, 6.99, 24.26 | ClosePath 1
Path3=7.73, 21.15 | CurveTo 7.96, 20.56, 7.73, 20.91, 7.81, 20.72 | CurveTo 8.55, 20.33, 8.12, 20.4, 8.31, 20.33 | CurveTo 9.14, 20.56, 8.79, 20.33, 8.98, 20.41 | CurveTo 9.37, 21.15, 9.3, 20.72, 9.37, 20.91 | CurveTo 9.14, 21.73, 9.37, 21.38, 9.29, 21.57 | CurveTo 8.55, 21.96, 8.99, 21.89, 8.79, 21.96 | CurveTo 7.98, 21.72, 8.32, 21.96, 8.13, 21.88 | CurveTo 7.73, 21.15, 7.81, 21.56, 7.73, 21.37 | ClosePath 1
Path4=9.37, 27.13 | CurveTo 9.41, 26.9, 9.37, 27.09, 9.38, 27.02 | LineTo 9.54, 26.32 | CurveTo 9.95, 25.81, 9.61, 26.09, 9.75, 25.92 | CurveTo 10.58, 25.74, 10.16, 25.69, 10.37, 25.67 | CurveTo 11.11, 26.11, 10.81, 25.78, 10.99, 25.91 | CurveTo 11.19, 26.79, 11.23, 26.31, 11.26, 26.54 | LineTo 11.06, 27.38 | CurveTo 10.26, 27.99, 10.96, 27.79, 10.69, 27.99 | CurveTo 10.02, 27.95, 10.21, 27.99, 10.13, 27.98 | CurveTo 9.53, 27.62, 9.8, 27.89, 9.64, 27.78 | CurveTo 9.37, 27.13, 9.42, 27.46, 9.37, 27.3 | ClosePath 1
Path5=9.9, 4.62 | CurveTo 10.15, 4.02, 9.9, 4.38, 9.98, 4.18 | CurveTo 10.78, 3.78, 10.32, 3.86, 10.53, 3.78 | CurveTo 11.38, 4.02, 11.02, 3.78, 11.22, 3.86 | LineTo 12.01, 4.68 | CurveTo 12.26, 5.28, 12.18, 4.85, 12.26, 5.05 | CurveTo 11.96, 5.92, 12.26, 5.52, 12.16, 5.74 | CurveTo 11.35, 6.15, 11.76, 6.1, 11.56, 6.18 | CurveTo 10.8, 5.88, 11.14, 6.13, 10.96, 6.04 | LineTo 10.15, 5.22 | CurveTo 9.9, 4.62, 9.99, 5.05, 9.9, 4.85 | ClosePath 1
Path6=10.16, 24.23 | CurveTo 10.39, 23.65, 10.16, 24, 10.24, 23.8 | CurveTo 10.98, 23.42, 10.55, 23.49, 10.74, 23.42 | CurveTo 11.57, 23.65, 11.22, 23.42, 11.41, 23.5 | CurveTo 11.8, 24.23, 11.73, 23.81, 11.8, 24 | CurveTo 11.57, 24.82, 11.8, 24.47, 11.72, 24.66 | CurveTo 10.98, 25.05, 11.41, 24.98, 11.22, 25.05 | CurveTo 10.4, 24.8, 10.76, 25.05, 10.57, 24.97 | CurveTo 10.16, 24.23, 10.24, 24.64, 10.16, 24.45 | ClosePath 1
Path7=10.78, 21.96 | CurveTo 10.81, 21.7, 10.78, 21.87, 10.79, 21.78 | LineTo 11.04, 20.8 | CurveTo 11.45, 20.27, 11.11, 20.57, 11.25, 20.39 | CurveTo 12.09, 20.19, 11.66, 20.15, 11.87, 20.12 | CurveTo 12.62, 20.59, 12.33, 20.26, 12.5, 20.39 | CurveTo 12.69, 21.21, 12.74, 20.79, 12.76, 20.99 | LineTo 12.43, 22.11 | CurveTo 12.02, 22.68, 12.35, 22.38, 12.21, 22.57 | CurveTo 11.38, 22.74, 11.83, 22.79, 11.61, 22.8 | CurveTo 10.93, 22.44, 11.18, 22.7, 11.03, 22.6 | CurveTo 10.78, 21.96, 10.81, 22.26, 10.76, 22.11 | ClosePath 1
Path8=13.54, 24.1 | CurveTo 13.55, 23.97, 13.54, 24.07, 13.54, 24.03 | CurveTo 13.56, 23.86, 13.56, 23.91, 13.56, 23.88 | LineTo 13.65, 23.27 | CurveTo 14.06, 22.74, 13.72, 23.03, 13.85, 22.86 | CurveTo 14.74, 22.66, 14.26, 22.62, 14.49, 22.6 | CurveTo 15.25, 23.07, 14.97, 22.73, 15.14, 22.87 | CurveTo 15.32, 23.7, 15.37, 23.28, 15.39, 23.49 | LineTo 15.18, 24.3 | CurveTo 14.42, 24.95, 15.08, 24.73, 14.83, 24.95 | CurveTo 14.27, 24.94, 14.39, 24.95, 14.34, 24.95 | CurveTo 14.14, 24.93, 14.2, 24.93, 14.16, 24.93 | CurveTo 13.69, 24.6, 13.94, 24.87, 13.79, 24.76 | CurveTo 13.54, 24.1, 13.59, 24.43, 13.54, 24.27 | ClosePath 1
Path9=14.28, 21.16 | CurveTo 14.51, 20.57, 14.28, 20.92, 14.36, 20.73 | CurveTo 15.1, 20.34, 14.67, 20.41, 14.86, 20.34 | CurveTo 15.69, 20.57, 15.34, 20.34, 15.53, 20.42 | CurveTo 15.92, 21.16, 15.85, 20.73, 15.92, 20.92 | CurveTo 15.69, 21.74, 15.92, 21.39, 15.84, 21.59 | CurveTo 15.1, 21.97, 15.53, 21.9, 15.34, 21.97 | CurveTo 14.52, 21.72, 14.87, 21.97, 14.67, 21.89 | CurveTo 14.28, 21.16, 14.36, 21.57, 14.28, 21.38 | ClosePath 1
Path10=15.31, 9.05 | CurveTo 17.01, 11.98, 16.15, 9.81, 16.71, 10.79 | LineTo 17.32, 11.98 | CurveTo 20.84, 13.43, 18.7, 11.98, 19.87, 12.46 | CurveTo 21.31, 11.61, 21.15, 12.88, 21.31, 12.27 | CurveTo 20.27, 9.11, 21.31, 10.63, 20.96, 9.8 | CurveTo 17.76, 8.08, 19.58, 8.43, 18.74, 8.08 | CurveTo 15.31, 9.05, 16.8, 8.08, 15.98, 8.4 | ClosePath 1
Path11=16.91, 3.78 | LineTo 16.91, 1.73 | CurveTo 17.16, 1.12, 16.91, 1.49, 16.99, 1.29 | CurveTo 17.76, 0.86, 17.33, 0.95, 17.53, 0.86 | CurveTo 18.36, 1.11, 18, 0.86, 18.2, 0.94 | CurveTo 18.6, 1.73, 18.52, 1.28, 18.6, 1.49 | LineTo 18.6, 3.78 | CurveTo 18.36, 4.4, 18.6, 4.02, 18.52, 4.23 | CurveTo 17.76, 4.65, 18.2, 4.57, 18, 4.65 | CurveTo 17.16, 4.39, 17.53, 4.65, 17.33, 4.56 | CurveTo 16.91, 3.78, 16.99, 4.22, 16.91, 4.02 | ClosePath 1
Path12=22.49, 6.07 | CurveTo 22.72, 5.47, 22.49, 5.83, 22.57, 5.63 | LineTo 24.16, 4.02 | CurveTo 24.74, 3.77, 24.31, 3.85, 24.5, 3.77 | CurveTo 25.34, 4.02, 24.98, 3.77, 25.18, 3.85 | CurveTo 25.6, 4.62, 25.52, 4.18, 25.6, 4.38 | CurveTo 25.34, 5.22, 25.6, 4.86, 25.51, 5.06 | LineTo 23.9, 6.68 | CurveTo 23.27, 6.94, 23.71, 6.87, 23.5, 6.95 | CurveTo 22.72, 6.68, 23.04, 6.92, 22.86, 6.84 | CurveTo 22.49, 6.07, 22.56, 6.52, 22.49, 6.32 | ClosePath 1
Path13=23.26, 17.98 | CurveTo 23.51, 17.37, 23.26, 17.74, 23.34, 17.54 | CurveTo 24.11, 17.12, 23.68, 17.2, 23.88, 17.12 | CurveTo 24.72, 17.38, 24.34, 17.12, 24.54, 17.21 | LineTo 25.34, 18.01 | CurveTo 25.6, 18.62, 25.52, 18.18, 25.6, 18.39 | CurveTo 25.34, 19.22, 25.6, 18.86, 25.51, 19.06 | CurveTo 24.8, 19.48, 25.2, 19.39, 25.02, 19.48 | LineTo 24.78, 19.46 | CurveTo 24.16, 19.22, 24.54, 19.46, 24.34, 19.38 | LineTo 23.51, 18.58 | CurveTo 23.26, 17.98, 23.35, 18.41, 23.26, 18.21 | ClosePath 1
Path14=24.73, 11.61 | CurveTo 24.98, 11.01, 24.73, 11.37, 24.81, 11.17 | CurveTo 25.59, 10.77, 25.15, 10.85, 25.35, 10.77 | LineTo 27.65, 10.77 | CurveTo 28.26, 11.01, 27.89, 10.77, 28.1, 10.85 | CurveTo 28.51, 11.61, 28.42, 11.17, 28.51, 11.37 | CurveTo 28.26, 12.22, 28.51, 11.85, 28.43, 12.05 | CurveTo 27.65, 12.47, 28.09, 12.39, 27.89, 12.47 | LineTo 25.59, 12.47 | CurveTo 24.99, 12.2, 25.35, 12.47, 25.15, 12.38 | CurveTo 24.73, 11.61, 24.81, 12.05, 24.73, 11.85 | ClosePath 1

[StyleWeatherIcon-Day-Snow]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Path Path3 | StrokeWidth 0
Shape4=Path Path4 | StrokeWidth 0
Shape5=Path Path5 | StrokeWidth 0
Shape6=Path Path6 | StrokeWidth 0
Shape7=Path Path7 | StrokeWidth 0
Shape8=Path Path8 | StrokeWidth 0
Shape9=Path Path9 | StrokeWidth 0
Shape10=Path Path10 | StrokeWidth 0
Shape11=Path Path11 | StrokeWidth 0
Shape12=Path Path12 | StrokeWidth 0
Shape13=Path Path13 | StrokeWidth 0
Shape14=Path Path14 | StrokeWidth 0
Shape15=Combine Shape1 | XOR Shape2 | XOR Shape3 | XOR Shape4 | XOR Shape5 | XOR Shape6 | XOR Shape7 | XOR Shape8 | XOR Shape9 | XOR Shape10 | XOR Shape11 | XOR Shape12 | XOR Shape13 | XOR Shape14 | #weatherIconTransform#
Path1=1.58, 16.93 | CurveTo 2.22, 19.34, 1.58, 17.79, 1.79, 18.6 | CurveTo 3.96, 21.13, 2.64, 20.08, 3.22, 20.68 | CurveTo 6.36, 21.84, 4.69, 21.58, 5.5, 21.82 | CurveTo 6.53, 21.67, 6.47, 21.84, 6.53, 21.78 | LineTo 6.53, 20.34 | CurveTo 6.36, 20.15, 6.53, 20.22, 6.47, 20.15 | CurveTo 4.18, 19.13, 5.51, 20.11, 4.78, 19.77 | CurveTo 3.28, 16.92, 3.58, 18.49, 3.28, 17.76 | CurveTo 4.13, 14.76, 3.28, 16.1, 3.56, 15.38 | CurveTo 6.23, 13.69, 4.7, 14.15, 5.39, 13.79 | LineTo 6.76, 13.63 | CurveTo 6.94, 13.44, 6.88, 13.63, 6.94, 13.57 | LineTo 7.02, 12.93 | CurveTo 8.38, 10.2, 7.13, 11.84, 7.58, 10.93 | CurveTo 11.23, 9.11, 9.18, 9.47, 10.13, 9.11 | CurveTo 14.08, 10.2, 12.32, 9.11, 13.27, 9.47 | CurveTo 15.46, 12.9, 14.9, 10.93, 15.36, 11.83 | LineTo 15.53, 13.48 | CurveTo 15.7, 13.65, 15.53, 13.59, 15.59, 13.65 | LineTo 17.31, 13.65 | CurveTo 19.62, 14.61, 18.21, 13.65, 18.98, 13.97 | CurveTo 20.58, 16.9, 20.26, 15.25, 20.58, 16.01 | CurveTo 19.68, 19.11, 20.58, 17.74, 20.28, 18.47 | CurveTo 17.51, 20.13, 19.08, 19.74, 18.35, 20.08 | CurveTo 17.32, 20.32, 17.39, 20.13, 17.32, 20.19 | LineTo 17.32, 21.65 | CurveTo 17.51, 21.82, 17.32, 21.76, 17.38, 21.82 | CurveTo 20.89, 20.32, 18.84, 21.78, 19.96, 21.28 | CurveTo 22.28, 16.91, 21.82, 19.36, 22.28, 18.23 | CurveTo 21.85, 14.88, 22.28, 16.15, 22.14, 15.48 | CurveTo 23, 11.6, 22.6, 13.95, 23, 12.85 | CurveTo 22.3, 8.99, 23, 10.66, 22.77, 9.79 | CurveTo 20.39, 7.08, 21.83, 8.19, 21.19, 7.55 | CurveTo 17.77, 6.38, 19.59, 6.61, 18.71, 6.38 | CurveTo 13.9, 8.11, 16.23, 6.38, 14.94, 6.96 | CurveTo 11.21, 7.45, 13.09, 7.67, 12.19, 7.45 | CurveTo 7.47, 8.76, 9.8, 7.45, 8.56, 7.89 | CurveTo 5.38, 12.1, 6.38, 9.63, 5.69, 10.75 | CurveTo 2.64, 13.85, 4.26, 12.38, 3.35, 12.96 | CurveTo 1.58, 16.93, 1.93, 14.75, 1.58, 15.77 | ClosePath 1
Path2=7.92, 20.98 | CurveTo 8.16, 21.59, 7.92, 21.22, 8, 21.42 | CurveTo 8.75, 21.84, 8.32, 21.76, 8.51, 21.84 | CurveTo 9.34, 21.59, 8.98, 21.84, 9.18, 21.76 | CurveTo 9.58, 20.98, 9.5, 21.42, 9.58, 21.22 | CurveTo 9.34, 20.4, 9.58, 20.75, 9.5, 20.56 | CurveTo 8.75, 20.16, 9.18, 20.24, 8.99, 20.16 | CurveTo 8.16, 20.4, 8.52, 20.16, 8.32, 20.24 | CurveTo 7.92, 20.98, 8, 20.56, 7.92, 20.76 | ClosePath 1
Path3=7.92, 24.61 | CurveTo 8.16, 25.18, 7.92, 24.82, 8, 25.01 | CurveTo 8.74, 25.42, 8.34, 25.34, 8.53, 25.42 | CurveTo 9.33, 25.19, 8.98, 25.42, 9.17, 25.34 | CurveTo 9.56, 24.61, 9.49, 25.03, 9.56, 24.84 | CurveTo 9.32, 24.02, 9.56, 24.37, 9.48, 24.18 | CurveTo 8.73, 23.79, 9.16, 23.86, 8.97, 23.79 | CurveTo 8.14, 24.02, 8.5, 23.79, 8.3, 23.87 | CurveTo 7.92, 24.61, 8, 24.17, 7.92, 24.37 | ClosePath 1
Path4=9.97, 4.68 | CurveTo 10.21, 5.27, 9.97, 4.92, 10.05, 5.12 | LineTo 10.87, 5.93 | CurveTo 11.4, 6.18, 11.03, 6.09, 11.21, 6.18 | CurveTo 12.01, 5.96, 11.61, 6.21, 11.81, 6.14 | CurveTo 12.31, 5.33, 12.21, 5.78, 12.31, 5.57 | CurveTo 12.07, 4.69, 12.31, 5.09, 12.23, 4.87 | LineTo 11.43, 4.08 | CurveTo 10.85, 3.83, 11.28, 3.91, 11.09, 3.83 | CurveTo 10.22, 4.08, 10.6, 3.83, 10.39, 3.91 | CurveTo 9.97, 4.68, 10.05, 4.24, 9.97, 4.44 | ClosePath 1
Path5=11.1, 22.9 | CurveTo 11.34, 23.5, 11.1, 23.12, 11.18, 23.32 | CurveTo 11.92, 23.74, 11.5, 23.66, 11.7, 23.74 | CurveTo 12.52, 23.5, 12.16, 23.74, 12.36, 23.66 | CurveTo 12.77, 22.9, 12.68, 23.34, 12.77, 23.14 | CurveTo 12.52, 22.3, 12.77, 22.67, 12.69, 22.47 | CurveTo 11.92, 22.05, 12.35, 22.13, 12.15, 22.05 | CurveTo 11.34, 22.3, 11.69, 22.05, 11.5, 22.13 | CurveTo 11.1, 22.9, 11.18, 22.47, 11.1, 22.67 | ClosePath 1
Path6=11.1, 19.3 | CurveTo 11.34, 19.88, 11.1, 19.53, 11.18, 19.72 | CurveTo 11.92, 20.12, 11.5, 20.04, 11.7, 20.12 | CurveTo 12.52, 19.88, 12.16, 20.12, 12.36, 20.04 | CurveTo 12.77, 19.29, 12.69, 19.72, 12.77, 19.53 | CurveTo 12.52, 18.7, 12.77, 19.06, 12.69, 18.86 | CurveTo 11.92, 18.46, 12.35, 18.54, 12.15, 18.46 | CurveTo 11.34, 18.7, 11.69, 18.46, 11.5, 18.54 | CurveTo 11.1, 19.3, 11.18, 18.86, 11.1, 19.07 | ClosePath 1
Path7=11.1, 26.56 | CurveTo 11.34, 27.13, 11.1, 26.78, 11.18, 26.97 | CurveTo 11.92, 27.38, 11.51, 27.3, 11.7, 27.38 | CurveTo 12.52, 27.15, 12.16, 27.38, 12.36, 27.3 | CurveTo 12.77, 26.56, 12.69, 26.99, 12.77, 26.8 | CurveTo 12.52, 25.96, 12.77, 26.32, 12.69, 26.12 | CurveTo 11.92, 25.71, 12.35, 25.79, 12.15, 25.71 | CurveTo 11.34, 25.96, 11.7, 25.71, 11.51, 25.79 | CurveTo 11.1, 26.56, 11.18, 26.13, 11.1, 26.33 | ClosePath 1
Path8=14.32, 20.98 | CurveTo 14.56, 21.59, 14.32, 21.22, 14.4, 21.42 | CurveTo 15.15, 21.84, 14.72, 21.76, 14.92, 21.84 | CurveTo 15.74, 21.59, 15.38, 21.84, 15.58, 21.76 | CurveTo 15.98, 20.98, 15.9, 21.42, 15.98, 21.22 | CurveTo 15.74, 20.4, 15.98, 20.75, 15.9, 20.56 | CurveTo 15.15, 20.16, 15.58, 20.24, 15.39, 20.16 | CurveTo 14.56, 20.4, 14.91, 20.16, 14.72, 20.24 | CurveTo 14.32, 20.98, 14.4, 20.56, 14.32, 20.76 | ClosePath 1
Path9=14.32, 24.61 | CurveTo 14.55, 25.18, 14.32, 24.82, 14.4, 25.01 | CurveTo 15.15, 25.42, 14.73, 25.34, 14.93, 25.42 | CurveTo 15.74, 25.19, 15.39, 25.42, 15.58, 25.34 | CurveTo 15.97, 24.61, 15.9, 25.03, 15.97, 24.84 | CurveTo 15.73, 24.02, 15.97, 24.37, 15.89, 24.18 | CurveTo 15.14, 23.79, 15.57, 23.86, 15.38, 23.79 | CurveTo 14.54, 24.03, 14.9, 23.79, 14.7, 23.87 | CurveTo 14.32, 24.61, 14.4, 24.18, 14.32, 24.38 | ClosePath 1
Path10=15.3, 9.06 | CurveTo 17.77, 8.07, 15.99, 8.4, 16.81, 8.07 | CurveTo 20.25, 9.11, 18.74, 8.07, 19.57, 8.42 | CurveTo 21.28, 11.6, 20.94, 9.8, 21.28, 10.64 | CurveTo 20.77, 13.44, 21.28, 12.22, 21.11, 12.84 | CurveTo 17.3, 12, 19.82, 12.48, 18.66, 12 | LineTo 16.98, 12 | CurveTo 15.3, 9.06, 16.68, 10.83, 16.12, 9.85 | ClosePath 1
Path11=16.9, 3.84 | CurveTo 17.15, 4.42, 16.9, 4.07, 16.98, 4.27 | CurveTo 17.76, 4.65, 17.32, 4.57, 17.52, 4.65 | CurveTo 18.35, 4.42, 18, 4.65, 18.19, 4.57 | CurveTo 18.58, 3.84, 18.51, 4.26, 18.58, 4.07 | LineTo 18.58, 1.8 | CurveTo 18.34, 1.19, 18.58, 1.56, 18.5, 1.36 | CurveTo 17.77, 0.94, 18.18, 1.02, 18, 0.94 | CurveTo 17.17, 1.2, 17.54, 0.94, 17.34, 1.03 | CurveTo 16.91, 1.8, 17, 1.37, 16.91, 1.57 | LineTo 16.91, 3.84 | ClosePath 1
Path12=22.42, 6.11 | CurveTo 22.67, 6.7, 22.42, 6.34, 22.5, 6.54 | CurveTo 23.23, 6.96, 22.82, 6.86, 23.01, 6.94 | CurveTo 23.85, 6.7, 23.45, 6.98, 23.66, 6.89 | LineTo 25.28, 5.27 | CurveTo 25.54, 4.66, 25.46, 5.09, 25.54, 4.89 | CurveTo 25.28, 4.05, 25.54, 4.42, 25.45, 4.22 | CurveTo 24.68, 3.8, 25.11, 3.88, 24.91, 3.8 | CurveTo 24.1, 4.05, 24.46, 3.8, 24.27, 3.88 | LineTo 22.67, 5.51 | CurveTo 22.42, 6.11, 22.5, 5.67, 22.42, 5.87 | ClosePath 1
Path13=23.22, 17.91 | CurveTo 23.46, 18.53, 23.22, 18.16, 23.3, 18.37 | LineTo 24.1, 19.16 | CurveTo 24.74, 19.4, 24.34, 19.32, 24.56, 19.4 | CurveTo 25.3, 19.14, 24.95, 19.4, 25.13, 19.31 | CurveTo 25.55, 18.53, 25.47, 18.97, 25.55, 18.76 | CurveTo 25.29, 17.95, 25.55, 18.3, 25.46, 18.11 | LineTo 24.67, 17.3 | CurveTo 24.06, 17.06, 24.49, 17.14, 24.29, 17.06 | CurveTo 23.47, 17.31, 23.83, 17.06, 23.63, 17.14 | CurveTo 23.22, 17.91, 23.3, 17.47, 23.22, 17.67 | ClosePath 1
Path14=24.67, 11.6 | CurveTo 24.93, 12.19, 24.67, 11.84, 24.76, 12.03 | CurveTo 25.55, 12.46, 25.1, 12.37, 25.31, 12.46 | LineTo 27.57, 12.46 | CurveTo 28.17, 12.21, 27.8, 12.46, 28, 12.38 | CurveTo 28.42, 11.6, 28.34, 12.04, 28.42, 11.84 | CurveTo 28.17, 11, 28.42, 11.36, 28.34, 11.16 | CurveTo 27.57, 10.75, 28, 10.84, 27.8, 10.75 | LineTo 25.55, 10.75 | CurveTo 24.93, 11, 25.31, 10.75, 25.11, 10.83 | CurveTo 24.67, 11.6, 24.75, 11.17, 24.67, 11.37 | ClosePath 1

[StyleWeatherIcon-Fog]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Path Path3 | StrokeWidth 0
Shape4=Path Path4 | StrokeWidth 0
Shape5=Combine Shape1 | XOR Shape2 | XOR Shape3 | XOR Shape4 | #weatherIconTransform#
Path1=2.62, 21.05 | CurveTo 2.87, 20.44, 2.62, 20.81, 2.7, 20.6 | CurveTo 3.5, 20.2, 3.04, 20.28, 3.25, 20.2 | LineTo 22.17, 20.2 | CurveTo 22.78, 20.44, 22.42, 20.2, 22.62, 20.28 | CurveTo 23.02, 21.05, 22.94, 20.6, 23.02, 20.8 | CurveTo 22.77, 21.63, 23.02, 21.28, 22.94, 21.48 | CurveTo 22.17, 21.86, 22.6, 21.79, 22.4, 21.86 | LineTo 3.5, 21.86 | CurveTo 2.87, 21.63, 3.25, 21.86, 3.04, 21.78 | CurveTo 2.62, 21.05, 2.7, 21.47, 2.62, 21.28 | ClosePath 1
Path2=5.24, 17.91 | CurveTo 5.5, 17.31, 5.24, 17.67, 5.33, 17.47 | CurveTo 6.09, 17.08, 5.65, 17.16, 5.85, 17.08 | LineTo 24.76, 17.08 | CurveTo 25.34, 17.32, 24.99, 17.08, 25.18, 17.16 | CurveTo 25.57, 17.91, 25.5, 17.48, 25.57, 17.67 | CurveTo 25.34, 18.51, 25.57, 18.15, 25.49, 18.35 | CurveTo 24.76, 18.76, 25.18, 18.68, 24.99, 18.76 | LineTo 6.09, 18.76 | CurveTo 5.49, 18.51, 5.85, 18.76, 5.65, 18.68 | CurveTo 5.24, 17.91, 5.32, 18.34, 5.24, 18.14 | ClosePath 1
Path3=5.37, 15.52 | CurveTo 5.52, 15.65, 5.37, 15.61, 5.42, 15.65 | LineTo 6.95, 15.65 | CurveTo 7.15, 15.49, 7.01, 15.65, 7.08, 15.6 | CurveTo 8.21, 14.22, 7.39, 14.97, 7.74, 14.55 | CurveTo 9.76, 13.66, 8.68, 13.89, 9.2, 13.7 | LineTo 10.31, 13.59 | CurveTo 10.48, 13.41, 10.42, 13.59, 10.48, 13.53 | LineTo 10.55, 12.91 | CurveTo 11.92, 10.21, 10.66, 11.83, 11.11, 10.93 | CurveTo 14.77, 9.13, 12.73, 9.49, 13.68, 9.13 | CurveTo 17.6, 10.2, 15.85, 9.13, 16.79, 9.49 | CurveTo 18.97, 12.88, 18.4, 10.91, 18.86, 11.81 | LineTo 19.05, 13.45 | CurveTo 19.25, 13.62, 19.05, 13.56, 19.12, 13.62 | LineTo 20.84, 13.62 | CurveTo 22.6, 14.14, 21.48, 13.62, 22.07, 13.79 | CurveTo 23.78, 15.51, 23.13, 14.49, 23.52, 14.94 | CurveTo 23.99, 15.67, 23.85, 15.62, 23.92, 15.67 | LineTo 25.42, 15.67 | CurveTo 25.56, 15.44, 25.54, 15.67, 25.59, 15.6 | CurveTo 23.82, 12.93, 25.27, 14.42, 24.68, 13.58 | CurveTo 20.85, 11.96, 22.95, 12.28, 21.96, 11.96 | LineTo 20.53, 11.96 | CurveTo 18.43, 8.69, 20.2, 10.63, 19.5, 9.54 | CurveTo 14.78, 7.42, 17.36, 7.84, 16.15, 7.42 | CurveTo 11.05, 8.74, 13.38, 7.42, 12.14, 7.86 | CurveTo 8.96, 12.1, 9.96, 9.62, 9.27, 10.74 | CurveTo 6.72, 13.31, 8.11, 12.3, 7.36, 12.7 | CurveTo 5.38, 15.49, 6.08, 13.92, 5.63, 14.64 | LineTo 5.38, 15.45 | CurveTo 5.37, 15.52, 5.37, 15.45, 5.37, 15.48 | ClosePath 1
Path4=6.98, 24.11 | CurveTo 7.24, 23.52, 6.98, 23.87, 7.07, 23.68 | CurveTo 7.84, 23.29, 7.39, 23.37, 7.59, 23.29 | LineTo 26.52, 23.29 | CurveTo 27.12, 23.52, 26.76, 23.29, 26.96, 23.37 | CurveTo 27.37, 24.1, 27.29, 23.68, 27.37, 23.87 | CurveTo 27.12, 24.71, 27.37, 24.34, 27.29, 24.54 | CurveTo 26.52, 24.96, 26.95, 24.88, 26.75, 24.96 | LineTo 7.84, 24.96 | CurveTo 7.24, 24.7, 7.61, 24.96, 7.41, 24.87 | CurveTo 6.98, 24.11, 7.07, 24.55, 6.98, 24.34 | ClosePath 1

[StyleWeatherIcon-Night-Clear]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Combine Shape1 | XOR Shape2 | #weatherIconTransform#
Path1=7.91, 14.48 | CurveTo 8.47, 11.73, 7.91, 13.52, 8.1, 12.61 | CurveTo 9.98, 9.47, 8.84, 10.85, 9.35, 10.1 | CurveTo 12.25, 7.95, 10.61, 8.84, 11.37, 8.33 | CurveTo 15, 7.38, 13.13, 7.57, 14.05, 7.38 | LineTo 16.14, 7.38 | CurveTo 16.37, 7.66, 16.3, 7.42, 16.37, 7.52 | LineTo 16.42, 8.54 | CurveTo 17.79, 11.78, 16.46, 9.81, 16.91, 10.89 | CurveTo 20.98, 13.2, 18.67, 12.67, 19.73, 13.15 | LineTo 21.8, 13.27 | CurveTo 22.04, 13.5, 21.96, 13.27, 22.04, 13.35 | LineTo 22.04, 14.48 | CurveTo 21.11, 18.04, 22.05, 15.76, 21.74, 16.95 | CurveTo 18.54, 20.63, 20.48, 19.13, 19.63, 19.99 | CurveTo 14.99, 21.58, 17.46, 21.26, 16.27, 21.58 | CurveTo 12.21, 21.02, 14.02, 21.58, 13.09, 21.39 | CurveTo 9.95, 19.51, 11.33, 20.65, 10.58, 20.14 | CurveTo 8.45, 17.25, 9.32, 18.88, 8.82, 18.12 | CurveTo 7.91, 14.48, 8.1, 16.37, 7.91, 15.45 | ClosePath 1
Path2=9.74, 14.48 | CurveTo 10.19, 16.64, 9.74, 15.24, 9.89, 15.96 | CurveTo 11.38, 18.34, 10.49, 17.31, 10.89, 17.88 | CurveTo 13.07, 19.42, 11.87, 18.8, 12.43, 19.16 | CurveTo 15.01, 19.82, 13.7, 19.69, 14.35, 19.82 | CurveTo 16.77, 19.48, 15.59, 19.82, 16.18, 19.71 | CurveTo 18.42, 18.52, 17.36, 19.25, 17.91, 18.93 | CurveTo 19.73, 16.95, 18.93, 18.11, 19.36, 17.59 | CurveTo 20.44, 14.86, 20.1, 16.31, 20.33, 15.62 | CurveTo 16.52, 12.76, 18.81, 14.52, 17.5, 13.82 | CurveTo 14.82, 9.02, 15.54, 11.7, 14.97, 10.46 | CurveTo 12.21, 9.9, 13.86, 9.08, 13, 9.37 | CurveTo 10.39, 11.92, 11.43, 10.43, 10.82, 11.1 | CurveTo 9.74, 14.48, 9.96, 12.74, 9.74, 13.59 | ClosePath 1

[StyleWeatherIcon-Night-Cloudy-1]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Path Path3 | StrokeWidth 0
Shape4=Combine Shape1 | XOR Shape2 | XOR Shape3 | #weatherIconTransform#
Path1=6.77, 19.65 | CurveTo 7.45, 17.56, 6.77, 18.86, 7, 18.17 | CurveTo 9.26, 16.29, 7.9, 16.95, 8.51, 16.53 | CurveTo 11.25, 13.8, 9.58, 15.2, 10.24, 14.37 | LineTo 11.25, 13.45 | CurveTo 12.63, 9.6, 11.25, 11.99, 11.71, 10.71 | CurveTo 16.13, 7.54, 13.55, 8.49, 14.72, 7.8 | CurveTo 17.21, 7.45, 16.49, 7.48, 16.85, 7.45 | LineTo 17.24, 7.45 | CurveTo 17.94, 7.5, 17.45, 7.45, 17.68, 7.47 | CurveTo 18.67, 7.61, 18.2, 7.52, 18.44, 7.56 | LineTo 19.58, 7.89 | CurveTo 19.74, 8.15, 19.71, 7.96, 19.76, 8.05 | LineTo 19.61, 8.85 | CurveTo 19.5, 9.82, 19.54, 9.18, 19.5, 9.5 | CurveTo 19.66, 10.89, 19.5, 10.17, 19.55, 10.53 | CurveTo 20.16, 11.97, 19.77, 11.26, 19.93, 11.61 | CurveTo 21.07, 12.94, 20.39, 12.33, 20.68, 12.65 | CurveTo 22.4, 13.6, 21.45, 13.23, 21.9, 13.45 | LineTo 23.11, 13.81 | CurveTo 23.28, 13.99, 23.22, 13.84, 23.28, 13.89 | CurveTo 23.27, 14.06, 23.28, 14.03, 23.28, 14.05 | LineTo 23.09, 14.74 | CurveTo 22.87, 15.47, 23.03, 14.98, 22.96, 15.23 | CurveTo 22.17, 16.84, 22.72, 15.91, 22.49, 16.36 | CurveTo 22.16, 16.83, 22.17, 16.83, 22.17, 16.83 | CurveTo 20.52, 18.41, 21.72, 17.46, 21.18, 17.99 | CurveTo 20.73, 19.65, 20.66, 18.75, 20.73, 19.16 | CurveTo 19.69, 22.18, 20.73, 20.64, 20.38, 21.48 | CurveTo 17.2, 23.23, 19, 22.88, 18.17, 23.23 | LineTo 10.35, 23.23 | CurveTo 7.83, 22.17, 9.38, 23.23, 8.54, 22.88 | CurveTo 6.77, 19.65, 7.13, 21.46, 6.77, 20.62 | ClosePath 1
Path2=8.75, 19.65 | CurveTo 9.21, 20.8, 8.75, 20.1, 8.9, 20.48 | CurveTo 10.35, 21.27, 9.52, 21.12, 9.9, 21.27 | LineTo 17.2, 21.27 | CurveTo 18.32, 20.79, 17.63, 21.27, 18, 21.11 | CurveTo 18.79, 19.65, 18.64, 20.47, 18.79, 20.09 | CurveTo 18.32, 18.53, 18.79, 19.22, 18.63, 18.85 | CurveTo 17.2, 18.06, 18.01, 18.21, 17.63, 18.06 | LineTo 15.9, 18.06 | CurveTo 15.65, 17.83, 15.79, 18.06, 15.71, 17.99 | LineTo 15.57, 17.19 | CurveTo 14.82, 15.75, 15.5, 16.61, 15.25, 16.13 | CurveTo 13.31, 15.17, 14.39, 15.37, 13.89, 15.17 | CurveTo 11.83, 15.75, 12.74, 15.17, 12.25, 15.36 | CurveTo 11.1, 17.19, 11.41, 16.14, 11.17, 16.62 | LineTo 11, 17.74 | CurveTo 10.81, 17.96, 11, 17.89, 10.94, 17.96 | LineTo 10.18, 18.04 | CurveTo 9.16, 18.55, 9.77, 18.08, 9.43, 18.25 | CurveTo 8.75, 19.65, 8.89, 18.87, 8.75, 19.23 | ClosePath 1
Path3=13.18, 13.25 | LineTo 13.3, 13.25 | CurveTo 15.79, 14.03, 14.23, 13.25, 15.05, 13.51 | CurveTo 17.33, 16.13, 16.52, 14.55, 17.04, 15.25 | CurveTo 19.36, 16.85, 18.1, 16.13, 18.78, 16.37 | CurveTo 20.89, 15.1, 20.05, 16.42, 20.56, 15.83 | CurveTo 18.46, 12.85, 19.85, 14.58, 19.04, 13.83 | CurveTo 17.58, 9.74, 17.88, 11.87, 17.58, 10.84 | LineTo 17.58, 9.39 | CurveTo 17.46, 9.39, 17.55, 9.39, 17.51, 9.39 | CurveTo 17.34, 9.39, 17.41, 9.39, 17.37, 9.39 | CurveTo 15.57, 9.78, 16.73, 9.39, 16.14, 9.52 | CurveTo 14.13, 10.9, 15, 10.04, 14.52, 10.42 | LineTo 14.1, 10.88 | CurveTo 13.18, 13.25, 13.55, 11.56, 13.25, 12.35 | ClosePath 1

[StyleWeatherIcon-Night-Cloudy-2]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Path Path3 | StrokeWidth 0
Shape4=Combine Shape1 | XOR Shape2 | XOR Shape3 | #weatherIconTransform#
Path1=3.57, 13.43 | CurveTo 4.65, 10.35, 3.57, 12.28, 3.93, 11.25 | CurveTo 7.38, 8.61, 5.37, 9.45, 6.28, 8.87 | CurveTo 9.5, 5.24, 7.7, 7.24, 8.4, 6.12 | CurveTo 13.26, 3.93, 10.6, 4.36, 11.85, 3.93 | CurveTo 16.95, 5.21, 14.64, 3.93, 15.87, 4.36 | CurveTo 19.05, 8.5, 18.03, 6.06, 18.73, 7.16 | LineTo 19.38, 8.5 | CurveTo 21.87, 9.15, 20.28, 8.5, 21.11, 8.72 | CurveTo 23.68, 10.94, 22.63, 9.58, 23.24, 10.18 | CurveTo 24.35, 13.42, 24.12, 11.7, 24.35, 12.52 | CurveTo 23.29, 16.5, 24.35, 14.57, 24, 15.6 | CurveTo 25.55, 17.37, 23.93, 17.05, 24.69, 17.34 | LineTo 26.21, 17.43 | CurveTo 26.39, 17.62, 26.33, 17.43, 26.39, 17.49 | LineTo 26.39, 18.39 | CurveTo 25.66, 21.19, 26.4, 19.4, 26.15, 20.34 | CurveTo 23.64, 23.22, 25.17, 22.05, 24.49, 22.72 | CurveTo 20.85, 23.97, 22.79, 23.72, 21.86, 23.97 | CurveTo 18.66, 23.53, 20.08, 23.97, 19.35, 23.82 | CurveTo 16.88, 22.34, 17.97, 23.24, 17.38, 22.84 | CurveTo 15.7, 20.56, 16.39, 21.84, 15.99, 21.25 | CurveTo 15.26, 18.39, 15.41, 19.87, 15.26, 19.15 | LineTo 8.37, 18.39 | CurveTo 4.97, 16.86, 7.03, 18.33, 5.9, 17.82 | CurveTo 3.57, 13.43, 4.04, 15.9, 3.57, 14.76 | ClosePath 1
Path2=5.28, 13.43 | CurveTo 6.18, 15.69, 5.28, 14.3, 5.58, 15.05 | CurveTo 8.37, 16.71, 6.78, 16.33, 7.51, 16.67 | LineTo 19.56, 16.71 | CurveTo 21.75, 15.69, 20.42, 16.67, 21.15, 16.33 | CurveTo 22.65, 13.43, 22.35, 15.05, 22.65, 14.3 | CurveTo 21.68, 11.15, 22.65, 12.55, 22.33, 11.8 | CurveTo 19.37, 10.18, 21.03, 10.51, 20.26, 10.18 | LineTo 17.75, 10.18 | CurveTo 17.58, 10.01, 17.64, 10.18, 17.58, 10.12 | LineTo 17.51, 9.43 | CurveTo 16.11, 6.72, 17.4, 8.35, 16.93, 7.44 | CurveTo 13.25, 5.63, 15.29, 6, 14.34, 5.63 | CurveTo 10.39, 6.72, 12.15, 5.63, 11.2, 5.99 | CurveTo 9.03, 9.43, 9.58, 7.45, 9.13, 8.35 | LineTo 8.96, 10.01 | CurveTo 8.76, 10.18, 8.96, 10.12, 8.89, 10.18 | LineTo 8.23, 10.18 | CurveTo 6.13, 11.25, 7.39, 10.28, 6.69, 10.64 | CurveTo 5.28, 13.43, 5.57, 11.86, 5.28, 12.59 | ClosePath 1
Path3=16.71, 18.39 | CurveTo 17.31, 20.56, 16.71, 19.18, 16.91, 19.91 | CurveTo 18.85, 22.06, 17.71, 21.21, 18.22, 21.71 | CurveTo 20.84, 22.58, 19.48, 22.41, 20.14, 22.58 | CurveTo 22.66, 22.13, 21.46, 22.58, 22.07, 22.43 | CurveTo 24.24, 20.77, 23.26, 21.83, 23.78, 21.38 | CurveTo 25.1, 18.67, 24.7, 20.16, 24.99, 19.46 | CurveTo 22.38, 17.37, 24.02, 18.45, 23.12, 18.02 | CurveTo 19.56, 18.38, 21.54, 18.02, 20.6, 18.36 | LineTo 16.71, 18.38 | ClosePath 1

[StyleWeatherIcon-Night-Cloudy-3]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Path Path3 | StrokeWidth 0
Shape4=Combine Shape1 | XOR Shape2 | XOR Shape3 | #weatherIconTransform#
Path1=4.14, 16.9 | CurveTo 5.2, 13.82, 4.14, 15.74, 4.49, 14.72 | CurveTo 7.94, 12.1, 5.91, 12.92, 6.82, 12.35 | CurveTo 9.34, 9.4, 8.17, 11.07, 8.64, 10.17 | CurveTo 11.87, 7.75, 10.04, 8.63, 10.89, 8.08 | CurveTo 13.8, 7.43, 12.49, 7.54, 13.13, 7.43 | CurveTo 16.15, 7.91, 14.61, 7.43, 15.4, 7.59 | CurveTo 17.14, 6.69, 16.43, 7.44, 16.76, 7.03 | CurveTo 18.31, 5.9, 17.52, 6.35, 17.91, 6.08 | CurveTo 19.49, 5.49, 18.71, 5.72, 19.11, 5.58 | CurveTo 20.61, 5.36, 19.87, 5.4, 20.25, 5.36 | CurveTo 21.84, 5.52, 20.99, 5.36, 21.4, 5.41 | LineTo 22.66, 5.77 | CurveTo 22.8, 5.99, 22.8, 5.83, 22.84, 5.9 | LineTo 22.66, 6.59 | CurveTo 22.56, 7.45, 22.59, 6.9, 22.56, 7.19 | CurveTo 22.71, 8.4, 22.56, 7.76, 22.61, 8.08 | CurveTo 23.15, 9.34, 22.81, 8.72, 22.95, 9.03 | CurveTo 23.95, 10.17, 23.34, 9.65, 23.61, 9.92 | CurveTo 25.1, 10.74, 24.29, 10.42, 24.67, 10.61 | LineTo 25.72, 10.96 | CurveTo 25.87, 11.12, 25.82, 10.99, 25.87, 11.04 | CurveTo 25.85, 11.19, 25.87, 11.14, 25.86, 11.16 | LineTo 25.67, 11.86 | CurveTo 24.17, 14.43, 25.4, 12.94, 24.89, 13.79 | CurveTo 24.82, 16.67, 24.57, 15.13, 24.79, 15.88 | CurveTo 24.83, 16.9, 24.83, 16.72, 24.83, 16.79 | CurveTo 24.16, 19.38, 24.83, 17.79, 24.61, 18.62 | CurveTo 22.36, 21.18, 23.72, 20.14, 23.11, 20.74 | CurveTo 19.88, 21.85, 21.6, 21.62, 20.77, 21.85 | LineTo 9.07, 21.85 | CurveTo 6.59, 21.18, 8.18, 21.85, 7.35, 21.63 | CurveTo 4.8, 19.38, 5.83, 20.73, 5.24, 20.13 | CurveTo 4.14, 16.9, 4.36, 18.63, 4.14, 17.8 | ClosePath 1
Path2=5.85, 16.9 | CurveTo 6.81, 19.21, 5.85, 17.79, 6.17, 18.56 | CurveTo 9.07, 20.19, 7.45, 19.86, 8.2, 20.19 | LineTo 19.88, 20.19 | CurveTo 22.16, 19.22, 20.77, 20.19, 21.53, 19.87 | CurveTo 23.11, 16.9, 22.79, 18.57, 23.11, 17.8 | CurveTo 22.15, 14.64, 23.11, 16.02, 22.79, 15.27 | CurveTo 19.87, 13.69, 21.51, 14.01, 20.75, 13.69 | LineTo 18.09, 13.69 | LineTo 17.99, 12.94 | CurveTo 16.73, 10.35, 17.89, 11.93, 17.47, 11.06 | CurveTo 14.1, 9.15, 15.99, 9.64, 15.11, 9.24 | CurveTo 13.95, 9.14, 14.07, 9.15, 14.02, 9.15 | CurveTo 13.8, 9.13, 13.88, 9.13, 13.84, 9.13 | CurveTo 12.26, 9.42, 13.29, 9.13, 12.78, 9.23 | LineTo 12.26, 9.4 | CurveTo 10.42, 10.77, 11.53, 9.68, 10.91, 10.14 | CurveTo 9.52, 12.94, 9.92, 11.4, 9.62, 12.12 | LineTo 9.45, 13.66 | LineTo 8.77, 13.69 | CurveTo 6.67, 14.75, 7.93, 13.79, 7.23, 14.14 | CurveTo 5.85, 16.9, 6.11, 15.36, 5.85, 16.07 | ClosePath 1
Path3=17.6, 8.79 | CurveTo 19.57, 11.97, 18.66, 9.7, 19.32, 10.76 | LineTo 19.89, 11.97 | CurveTo 23.06, 13.15, 21.13, 11.97, 22.19, 12.36 | CurveTo 23.82, 12.08, 23.39, 12.84, 23.64, 12.48 | CurveTo 21.66, 10.11, 22.91, 11.65, 22.19, 10.99 | CurveTo 20.87, 7.33, 21.14, 9.23, 20.87, 8.3 | LineTo 20.87, 7.09 | CurveTo 20.63, 7.08, 20.82, 7.08, 20.74, 7.08 | CurveTo 18.93, 7.52, 20.05, 7.07, 19.48, 7.21 | CurveTo 17.6, 8.79, 18.38, 7.82, 17.93, 8.24 | ClosePath 1

[StyleWeatherIcon-Night-Rain]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Path Path3 | StrokeWidth 0
Shape4=Path Path4 | StrokeWidth 0
Shape5=Path Path5 | StrokeWidth 0
Shape6=Combine Shape1 | XOR Shape2 | XOR Shape3 | XOR Shape4 | XOR Shape5 | #weatherIconTransform#
Path1=4.07, 16.9 | CurveTo 5.47, 20.34, 4.07, 18.23, 4.54, 19.38 | CurveTo 8.87, 21.87, 6.4, 21.3, 7.54, 21.81 | CurveTo 9.05, 21.7, 8.99, 21.87, 9.05, 21.81 | LineTo 9.05, 20.36 | CurveTo 8.87, 20.19, 9.05, 20.25, 8.99, 20.19 | CurveTo 6.68, 19.16, 8.01, 20.14, 7.28, 19.8 | CurveTo 5.78, 16.9, 6.08, 18.52, 5.78, 17.77 | CurveTo 6.63, 14.73, 5.78, 16.07, 6.06, 15.35 | CurveTo 8.73, 13.66, 7.2, 14.11, 7.9, 13.76 | LineTo 9.26, 13.62 | CurveTo 9.46, 13.45, 9.39, 13.62, 9.46, 13.56 | LineTo 9.53, 12.91 | CurveTo 10.91, 10.19, 9.64, 11.83, 10.1, 10.92 | CurveTo 13.77, 9.09, 11.72, 9.46, 12.68, 9.09 | CurveTo 16.63, 10.19, 14.86, 9.09, 15.81, 9.46 | CurveTo 18.03, 12.91, 17.45, 10.92, 17.91, 11.83 | LineTo 18.11, 13.48 | CurveTo 18.28, 13.66, 18.11, 13.6, 18.17, 13.66 | LineTo 19.9, 13.66 | CurveTo 22.22, 14.62, 20.79, 13.66, 21.57, 13.98 | CurveTo 23.2, 16.9, 22.87, 15.26, 23.2, 16.02 | CurveTo 22.3, 19.16, 23.2, 17.77, 22.9, 18.52 | CurveTo 20.11, 20.19, 21.7, 19.8, 20.97, 20.14 | CurveTo 19.9, 20.36, 19.97, 20.19, 19.9, 20.25 | LineTo 19.9, 21.7 | CurveTo 20.11, 21.87, 19.9, 21.81, 19.97, 21.87 | CurveTo 23.49, 20.36, 21.44, 21.83, 22.57, 21.32 | CurveTo 24.88, 16.91, 24.42, 19.39, 24.88, 18.24 | CurveTo 24.2, 14.45, 24.88, 16.03, 24.65, 15.21 | CurveTo 25.78, 11.83, 25.01, 13.72, 25.53, 12.85 | LineTo 25.92, 11.11 | CurveTo 25.94, 11.04, 25.93, 11.1, 25.94, 11.08 | CurveTo 25.78, 10.88, 25.94, 10.97, 25.89, 10.91 | LineTo 25.22, 10.7 | CurveTo 23.76, 9.87, 24.65, 10.54, 24.16, 10.26 | CurveTo 22.89, 8.64, 23.35, 9.48, 23.06, 9.07 | CurveTo 22.63, 7.36, 22.72, 8.21, 22.63, 7.78 | CurveTo 22.71, 6.54, 22.61, 7.14, 22.64, 6.86 | LineTo 22.85, 5.93 | CurveTo 22.71, 5.69, 22.89, 5.83, 22.85, 5.75 | LineTo 21.92, 5.45 | CurveTo 20.65, 5.3, 21.47, 5.35, 21.05, 5.3 | CurveTo 19.51, 5.43, 20.27, 5.3, 19.89, 5.34 | CurveTo 18.31, 5.84, 19.12, 5.52, 18.72, 5.65 | CurveTo 17.11, 6.64, 17.9, 6.02, 17.5, 6.29 | CurveTo 16.11, 7.86, 16.72, 6.99, 16.39, 7.39 | CurveTo 13.78, 7.41, 15.29, 7.56, 14.51, 7.41 | CurveTo 10.02, 8.73, 12.37, 7.41, 11.11, 7.85 | CurveTo 7.91, 12.1, 8.93, 9.61, 8.22, 10.73 | CurveTo 5.17, 13.83, 6.8, 12.36, 5.89, 12.93 | CurveTo 4.07, 16.9, 4.43, 14.72, 4.07, 15.75 | ClosePath 1
Path2=9.63, 23.74 | CurveTo 9.79, 24.23, 9.63, 23.91, 9.68, 24.07 | CurveTo 10.28, 24.56, 9.9, 24.39, 10.06, 24.5 | CurveTo 10.92, 24.52, 10.51, 24.63, 10.73, 24.61 | CurveTo 11.32, 23.96, 11.12, 24.42, 11.25, 24.24 | LineTo 12.75, 18.09 | CurveTo 12.67, 17.42, 12.81, 17.84, 12.78, 17.61 | CurveTo 12.15, 17.05, 12.55, 17.22, 12.38, 17.1 | CurveTo 11.52, 17.12, 11.93, 16.98, 11.72, 17 | CurveTo 11.11, 17.63, 11.32, 17.23, 11.18, 17.4 | LineTo 9.67, 23.53 | CurveTo 9.65, 23.62, 9.67, 23.54, 9.66, 23.57 | CurveTo 9.63, 23.74, 9.64, 23.67, 9.63, 23.71 | ClosePath 1
Path3=12.24, 26.81 | CurveTo 12.39, 27.27, 12.24, 26.97, 12.29, 27.12 | CurveTo 12.84, 27.58, 12.49, 27.42, 12.64, 27.52 | CurveTo 13.08, 27.62, 12.95, 27.61, 13.03, 27.62 | CurveTo 13.9, 27.03, 13.52, 27.62, 13.79, 27.42 | LineTo 16.15, 18.1 | CurveTo 16.08, 17.45, 16.21, 17.86, 16.19, 17.64 | CurveTo 15.58, 17.06, 15.97, 17.26, 15.8, 17.13 | CurveTo 14.92, 17.13, 15.35, 16.99, 15.13, 17.01 | CurveTo 14.53, 17.63, 14.71, 17.25, 14.58, 17.41 | LineTo 12.27, 26.55 | CurveTo 12.26, 26.67, 12.27, 26.56, 12.27, 26.6 | CurveTo 12.24, 26.81, 12.24, 26.73, 12.24, 26.78 | ClosePath 1
Path4=16.4, 23.82 | CurveTo 17.03, 24.56, 16.4, 24.18, 16.61, 24.42 | CurveTo 17.33, 24.62, 17.17, 24.6, 17.27, 24.62 | CurveTo 17.68, 24.55, 17.44, 24.62, 17.56, 24.6 | CurveTo 18.07, 23.97, 17.89, 24.47, 18.02, 24.27 | LineTo 19.5, 18.1 | CurveTo 19.42, 17.45, 19.56, 17.86, 19.54, 17.65 | CurveTo 18.91, 17.06, 19.31, 17.26, 19.14, 17.13 | CurveTo 18.25, 17.13, 18.68, 16.99, 18.46, 17.01 | CurveTo 17.87, 17.64, 18.04, 17.24, 17.92, 17.41 | LineTo 16.44, 23.54 | CurveTo 16.4, 23.82, 16.42, 23.7, 16.4, 23.8 | ClosePath 1
Path5=17.58, 8.77 | CurveTo 18.89, 7.44, 17.9, 8.19, 18.33, 7.75 | CurveTo 20.65, 7, 19.44, 7.14, 20.03, 6.99 | CurveTo 20.92, 7.01, 20.77, 7, 20.86, 7 | LineTo 20.92, 7.31 | CurveTo 21.69, 10.06, 20.91, 8.28, 21.16, 9.19 | CurveTo 23.9, 12.03, 22.21, 10.92, 22.95, 11.58 | CurveTo 23.11, 13.1, 23.68, 12.49, 23.41, 12.84 | CurveTo 19.88, 11.97, 22.19, 12.34, 21.12, 11.97 | LineTo 19.57, 11.97 | CurveTo 17.58, 8.77, 19.3, 10.7, 18.64, 9.64 | ClosePath 1

[StyleWeatherIcon-Night-Snow]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Path Path3 | StrokeWidth 0
Shape4=Path Path4 | StrokeWidth 0
Shape5=Path Path5 | StrokeWidth 0
Shape6=Path Path6 | StrokeWidth 0
Shape7=Path Path7 | StrokeWidth 0
Shape8=Path Path8 | StrokeWidth 0
Shape9=Path Path9 | StrokeWidth 0
Shape10=Combine Shape1 | XOR Shape2 | XOR Shape3 | XOR Shape4 | XOR Shape5 | XOR Shape6 | XOR Shape7 | XOR Shape8 | XOR Shape9 | #weatherIconTransform#
Path1=4.07, 16.93 | CurveTo 5.47, 20.36, 4.07, 18.26, 4.54, 19.4 | CurveTo 8.87, 21.87, 6.4, 21.32, 7.54, 21.83 | CurveTo 9.05, 21.7, 8.99, 21.87, 9.05, 21.81 | LineTo 9.05, 20.36 | CurveTo 8.87, 20.19, 9.05, 20.25, 8.99, 20.19 | CurveTo 6.69, 19.16, 8.02, 20.15, 7.29, 19.8 | CurveTo 5.78, 16.92, 6.08, 18.52, 5.78, 17.77 | CurveTo 6.63, 14.72, 5.78, 16.07, 6.06, 15.34 | CurveTo 8.73, 13.69, 7.2, 14.1, 7.9, 13.76 | LineTo 9.26, 13.62 | CurveTo 9.46, 13.45, 9.39, 13.62, 9.46, 13.56 | LineTo 9.53, 12.93 | CurveTo 10.9, 10.18, 9.64, 11.84, 10.09, 10.92 | CurveTo 13.76, 9.07, 11.71, 9.44, 12.66, 9.07 | CurveTo 16.62, 10.17, 14.85, 9.07, 15.8, 9.44 | CurveTo 18.02, 12.89, 17.44, 10.9, 17.9, 11.81 | LineTo 18.1, 13.46 | CurveTo 18.27, 13.64, 18.1, 13.58, 18.16, 13.64 | LineTo 19.89, 13.64 | CurveTo 22.22, 14.61, 20.8, 13.64, 21.57, 13.96 | CurveTo 23.19, 16.92, 22.87, 15.25, 23.19, 16.02 | CurveTo 22.28, 19.16, 23.19, 17.77, 22.89, 18.52 | CurveTo 20.1, 20.19, 21.67, 19.8, 20.95, 20.14 | CurveTo 19.89, 20.36, 19.96, 20.19, 19.89, 20.25 | LineTo 19.89, 21.7 | CurveTo 20.1, 21.87, 19.89, 21.81, 19.96, 21.87 | CurveTo 22.51, 21.16, 20.98, 21.85, 21.78, 21.61 | CurveTo 24.24, 19.36, 23.24, 20.71, 23.82, 20.11 | CurveTo 24.87, 16.93, 24.66, 18.61, 24.87, 17.8 | CurveTo 24.22, 14.45, 24.87, 16.02, 24.65, 15.19 | CurveTo 25.74, 11.87, 24.96, 13.79, 25.46, 12.93 | LineTo 25.91, 11.15 | CurveTo 25.93, 11.07, 25.92, 11.14, 25.93, 11.11 | CurveTo 25.77, 10.91, 25.93, 11, 25.88, 10.94 | LineTo 25.16, 10.74 | CurveTo 23.99, 10.17, 24.72, 10.61, 24.33, 10.42 | CurveTo 23.18, 9.33, 23.65, 9.92, 23.38, 9.64 | CurveTo 22.74, 8.38, 22.98, 9.02, 22.84, 8.71 | CurveTo 22.59, 7.43, 22.64, 8.06, 22.59, 7.74 | CurveTo 22.69, 6.57, 22.59, 7.16, 22.62, 6.87 | LineTo 22.8, 5.95 | CurveTo 22.66, 5.73, 22.82, 5.86, 22.78, 5.78 | LineTo 21.86, 5.49 | CurveTo 20.61, 5.33, 21.42, 5.38, 21.01, 5.33 | CurveTo 19.49, 5.46, 20.24, 5.33, 19.87, 5.37 | CurveTo 18.31, 5.87, 19.11, 5.55, 18.72, 5.68 | CurveTo 17.13, 6.67, 17.9, 6.06, 17.51, 6.32 | CurveTo 16.14, 7.89, 16.75, 7.02, 16.42, 7.42 | CurveTo 13.76, 7.39, 15.33, 7.56, 14.54, 7.39 | CurveTo 10, 8.71, 12.35, 7.39, 11.09, 7.83 | CurveTo 7.89, 12.08, 8.91, 9.59, 8.2, 10.71 | CurveTo 5.14, 13.84, 6.77, 12.36, 5.85, 12.95 | CurveTo 4.07, 16.93, 4.43, 14.74, 4.07, 15.77 | ClosePath 1
Path2=10.46, 21.02 | CurveTo 10.7, 21.62, 10.46, 21.26, 10.54, 21.46 | CurveTo 11.29, 21.87, 10.86, 21.79, 11.05, 21.87 | CurveTo 11.89, 21.62, 11.53, 21.87, 11.73, 21.79 | CurveTo 12.13, 21.02, 12.05, 21.45, 12.13, 21.25 | CurveTo 11.89, 20.44, 12.13, 20.8, 12.05, 20.6 | CurveTo 11.29, 20.2, 11.73, 20.28, 11.53, 20.2 | CurveTo 10.7, 20.44, 11.06, 20.2, 10.86, 20.28 | CurveTo 10.46, 21.02, 10.54, 20.6, 10.46, 20.79 | ClosePath 1
Path3=10.46, 24.66 | CurveTo 10.7, 25.24, 10.46, 24.89, 10.54, 25.08 | CurveTo 11.28, 25.48, 10.86, 25.4, 11.06, 25.48 | CurveTo 11.88, 25.25, 11.52, 25.48, 11.72, 25.4 | CurveTo 12.12, 24.66, 12.04, 25.09, 12.12, 24.9 | CurveTo 11.88, 24.07, 12.12, 24.42, 12.04, 24.23 | CurveTo 11.28, 23.84, 11.72, 23.91, 11.52, 23.84 | CurveTo 10.69, 24.07, 11.04, 23.84, 10.85, 23.92 | CurveTo 10.46, 24.66, 10.54, 24.22, 10.46, 24.42 | ClosePath 1
Path4=13.66, 22.96 | CurveTo 13.9, 23.55, 13.66, 23.2, 13.74, 23.4 | CurveTo 14.48, 23.79, 14.06, 23.71, 14.26, 23.79 | CurveTo 15.09, 23.55, 14.72, 23.79, 14.92, 23.71 | CurveTo 15.34, 22.96, 15.26, 23.39, 15.34, 23.19 | CurveTo 15.09, 22.35, 15.34, 22.72, 15.26, 22.52 | CurveTo 14.48, 22.09, 14.92, 22.18, 14.72, 22.09 | CurveTo 13.9, 22.35, 14.26, 22.09, 14.07, 22.18 | CurveTo 13.66, 22.96, 13.73, 22.52, 13.66, 22.72 | ClosePath 1
Path5=13.66, 19.32 | CurveTo 13.9, 19.9, 13.66, 19.56, 13.74, 19.75 | CurveTo 14.48, 20.14, 14.06, 20.06, 14.26, 20.14 | CurveTo 15.09, 19.91, 14.72, 20.14, 14.93, 20.06 | CurveTo 15.34, 19.32, 15.25, 19.76, 15.34, 19.56 | CurveTo 15.09, 18.72, 15.34, 19.09, 15.26, 18.89 | CurveTo 14.48, 18.47, 14.92, 18.55, 14.72, 18.47 | CurveTo 13.9, 18.72, 14.26, 18.47, 14.06, 18.55 | CurveTo 13.66, 19.32, 13.74, 18.89, 13.66, 19.09 | ClosePath 1
Path6=13.66, 26.63 | CurveTo 13.9, 27.2, 13.66, 26.85, 13.74, 27.04 | CurveTo 14.48, 27.45, 14.07, 27.37, 14.26, 27.45 | CurveTo 15.09, 27.21, 14.72, 27.45, 14.92, 27.37 | CurveTo 15.34, 26.62, 15.26, 27.05, 15.34, 26.86 | CurveTo 15.09, 26.01, 15.34, 26.38, 15.26, 26.18 | CurveTo 14.48, 25.75, 14.92, 25.84, 14.72, 25.75 | CurveTo 13.9, 26.01, 14.26, 25.75, 14.07, 25.84 | CurveTo 13.66, 26.63, 13.75, 26.19, 13.66, 26.4 | ClosePath 1
Path7=16.9, 21.02 | CurveTo 17.15, 21.62, 16.9, 21.26, 16.98, 21.46 | CurveTo 17.75, 21.87, 17.32, 21.78, 17.51, 21.87 | CurveTo 18.34, 21.62, 17.99, 21.87, 18.18, 21.79 | CurveTo 18.58, 21.02, 18.5, 21.45, 18.58, 21.25 | CurveTo 18.34, 20.44, 18.58, 20.8, 18.5, 20.6 | CurveTo 17.75, 20.2, 18.18, 20.28, 17.99, 20.2 | CurveTo 17.15, 20.44, 17.51, 20.2, 17.32, 20.28 | CurveTo 16.9, 21.02, 16.98, 20.6, 16.9, 20.79 | ClosePath 1
Path8=16.9, 24.66 | CurveTo 17.14, 25.24, 16.9, 24.89, 16.98, 25.08 | CurveTo 17.74, 25.48, 17.3, 25.4, 17.5, 25.48 | CurveTo 18.33, 25.24, 17.98, 25.48, 18.17, 25.4 | CurveTo 18.56, 24.65, 18.49, 25.08, 18.56, 24.89 | CurveTo 18.33, 24.06, 18.56, 24.41, 18.48, 24.22 | CurveTo 17.74, 23.83, 18.17, 23.9, 17.98, 23.83 | CurveTo 17.14, 24.06, 17.5, 23.83, 17.3, 23.91 | CurveTo 16.9, 24.66, 16.98, 24.22, 16.9, 24.42 | ClosePath 1
Path9=17.58, 8.77 | CurveTo 18.88, 7.51, 17.89, 8.23, 18.33, 7.81 | CurveTo 20.59, 7.05, 19.43, 7.21, 20, 7.06 | CurveTo 20.92, 7.07, 20.74, 7.05, 20.85, 7.06 | LineTo 20.92, 7.38 | CurveTo 21.7, 10.12, 20.92, 8.35, 21.18, 9.26 | CurveTo 23.87, 12.08, 22.22, 10.98, 22.95, 11.63 | CurveTo 23.11, 13.15, 23.71, 12.44, 23.46, 12.8 | CurveTo 19.88, 11.97, 22.22, 12.36, 21.15, 11.97 | LineTo 19.57, 11.97 | CurveTo 17.58, 8.77, 19.3, 10.74, 18.64, 9.68 | ClosePath 1

[StyleWeatherIcon-Night-Sleet]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Path Path3 | StrokeWidth 0
Shape4=Path Path4 | StrokeWidth 0
Shape5=Path Path5 | StrokeWidth 0
Shape6=Path Path6 | StrokeWidth 0
Shape7=Path Path7 | StrokeWidth 0
Shape8=Path Path8 | StrokeWidth 0
Shape9=Path Path9 | StrokeWidth 0
Shape10=Combine Shape1 | XOR Shape2 | XOR Shape3 | XOR Shape4 | XOR Shape5 | XOR Shape6 | XOR Shape7 | XOR Shape8 | XOR Shape9 | #weatherIconTransform#
Path1=4.09, 17.13 | LineTo 4.09, 16.76 | CurveTo 5.22, 13.79, 4.13, 15.64, 4.51, 14.65 | CurveTo 7.9, 12.12, 5.93, 12.93, 6.83, 12.37 | CurveTo 10.01, 8.76, 8.21, 10.76, 8.92, 9.64 | CurveTo 13.77, 7.45, 11.1, 7.88, 12.36, 7.45 | CurveTo 16.15, 7.91, 14.51, 7.45, 15.3, 7.6 | CurveTo 17.14, 6.71, 16.43, 7.45, 16.76, 7.05 | CurveTo 18.32, 5.92, 17.52, 6.37, 17.91, 6.11 | CurveTo 19.51, 5.52, 18.73, 5.74, 19.12, 5.6 | CurveTo 20.64, 5.4, 19.89, 5.44, 20.27, 5.4 | CurveTo 21.88, 5.53, 21.03, 5.4, 21.44, 5.44 | LineTo 22.68, 5.78 | CurveTo 22.82, 6.01, 22.8, 5.84, 22.85, 5.91 | LineTo 22.7, 6.63 | CurveTo 22.6, 7.47, 22.63, 6.92, 22.6, 7.2 | CurveTo 22.75, 8.42, 22.6, 7.78, 22.65, 8.09 | CurveTo 23.19, 9.37, 22.85, 8.74, 22.99, 9.06 | CurveTo 23.99, 10.22, 23.39, 9.68, 23.65, 9.96 | CurveTo 25.15, 10.8, 24.33, 10.48, 24.71, 10.67 | LineTo 25.77, 10.97 | CurveTo 25.92, 11.13, 25.87, 11, 25.92, 11.05 | CurveTo 25.91, 11.2, 25.92, 11.17, 25.92, 11.19 | LineTo 25.72, 11.88 | CurveTo 24.21, 14.5, 25.48, 12.89, 24.97, 13.77 | CurveTo 24.87, 16.95, 24.65, 15.26, 24.87, 16.08 | CurveTo 23.48, 20.4, 24.87, 18.29, 24.41, 19.44 | CurveTo 20.09, 21.91, 22.55, 21.37, 21.42, 21.87 | CurveTo 19.9, 21.72, 19.97, 21.91, 19.9, 21.85 | LineTo 19.9, 20.36 | CurveTo 20.09, 20.18, 19.9, 20.24, 19.96, 20.18 | CurveTo 22.29, 19.15, 20.96, 20.12, 21.69, 19.77 | CurveTo 23.19, 16.94, 22.89, 18.53, 23.19, 17.79 | CurveTo 22.22, 14.65, 23.19, 16.05, 22.87, 15.28 | CurveTo 19.89, 13.7, 21.57, 14.02, 20.8, 13.7 | LineTo 18.27, 13.7 | CurveTo 18.1, 13.52, 18.16, 13.7, 18.1, 13.64 | LineTo 18.03, 12.94 | CurveTo 16.63, 10.23, 17.92, 11.87, 17.45, 10.96 | CurveTo 13.77, 9.13, 15.81, 9.5, 14.86, 9.13 | CurveTo 10.92, 10.23, 12.68, 9.13, 11.72, 9.5 | CurveTo 9.55, 12.95, 10.11, 10.96, 9.65, 11.87 | LineTo 9.48, 13.47 | CurveTo 9.28, 13.64, 9.48, 13.58, 9.41, 13.64 | LineTo 8.75, 13.71 | CurveTo 6.65, 14.78, 7.91, 13.81, 7.21, 14.17 | CurveTo 5.8, 16.95, 6.08, 15.4, 5.8, 16.12 | LineTo 5.8, 16.97 | LineTo 5.81, 16.98 | LineTo 5.83, 16.98 | CurveTo 6.19, 18.46, 5.83, 17.5, 5.95, 18 | CurveTo 7.16, 19.6, 6.43, 18.92, 6.75, 19.3 | LineTo 7.17, 19.6 | LineTo 7.18, 19.61 | LineTo 7.19, 19.62 | CurveTo 7.81, 19.97, 7.41, 19.78, 7.61, 19.89 | CurveTo 8.88, 20.21, 8.15, 20.12, 8.5, 20.2 | CurveTo 9.05, 20.38, 8.99, 20.21, 9.05, 20.27 | LineTo 9.05, 21.72 | CurveTo 8.88, 21.9, 9.05, 21.84, 8.99, 21.9 | CurveTo 6.33, 21.08, 7.95, 21.86, 7.1, 21.58 | LineTo 6.32, 21.08 | CurveTo 4.73, 19.39, 5.66, 20.65, 5.13, 20.09 | CurveTo 4.09, 17.13, 4.33, 18.69, 4.12, 17.94 | ClosePath 1
Path2=9.59, 24.1 | CurveTo 9.61, 23.97, 9.59, 24.07, 9.6, 24.03 | CurveTo 9.63, 23.85, 9.62, 23.91, 9.63, 23.88 | LineTo 9.72, 23.26 | CurveTo 10.13, 22.73, 9.79, 23.02, 9.92, 22.85 | CurveTo 10.81, 22.65, 10.34, 22.61, 10.56, 22.59 | CurveTo 11.32, 23.06, 11.04, 22.72, 11.2, 22.86 | CurveTo 11.39, 23.69, 11.43, 23.27, 11.45, 23.48 | LineTo 11.25, 24.29 | CurveTo 10.49, 24.94, 11.15, 24.72, 10.9, 24.94 | CurveTo 10.34, 24.93, 10.46, 24.94, 10.41, 24.94 | CurveTo 10.21, 24.92, 10.27, 24.92, 10.23, 24.92 | CurveTo 9.75, 24.59, 10, 24.86, 9.85, 24.75 | CurveTo 9.59, 24.1, 9.64, 24.43, 9.59, 24.27 | ClosePath 1
Path3=10.33, 21.16 | CurveTo 10.56, 20.57, 10.33, 20.92, 10.41, 20.73 | CurveTo 11.15, 20.34, 10.71, 20.41, 10.91, 20.34 | CurveTo 11.74, 20.57, 11.39, 20.34, 11.58, 20.42 | CurveTo 11.97, 21.16, 11.9, 20.72, 11.97, 20.92 | CurveTo 11.74, 21.74, 11.97, 21.39, 11.89, 21.59 | CurveTo 11.15, 21.97, 11.59, 21.89, 11.39, 21.97 | CurveTo 10.58, 21.72, 10.92, 21.97, 10.73, 21.89 | CurveTo 10.33, 21.16, 10.42, 21.57, 10.33, 21.38 | ClosePath 1
Path4=11.97, 27.16 | CurveTo 12.01, 26.94, 11.97, 27.12, 11.98, 27.05 | LineTo 12.14, 26.35 | CurveTo 12.55, 25.84, 12.21, 26.12, 12.35, 25.95 | CurveTo 13.18, 25.77, 12.76, 25.72, 12.97, 25.7 | CurveTo 13.71, 26.14, 13.41, 25.81, 13.59, 25.94 | CurveTo 13.79, 26.82, 13.83, 26.34, 13.86, 26.57 | LineTo 13.66, 27.41 | CurveTo 12.86, 28.02, 13.56, 27.82, 13.29, 28.02 | CurveTo 12.62, 27.99, 12.79, 28.02, 12.7, 28.01 | CurveTo 12.13, 27.66, 12.4, 27.93, 12.24, 27.82 | CurveTo 11.97, 27.16, 12.03, 27.49, 11.97, 27.33 | ClosePath 1
Path5=12.76, 24.25 | CurveTo 12.99, 23.67, 12.76, 24.02, 12.84, 23.83 | CurveTo 13.58, 23.44, 13.15, 23.51, 13.34, 23.44 | CurveTo 14.17, 23.67, 13.82, 23.44, 14.01, 23.52 | CurveTo 14.4, 24.25, 14.33, 23.83, 14.4, 24.02 | CurveTo 14.17, 24.84, 14.4, 24.49, 14.32, 24.68 | CurveTo 13.58, 25.07, 14.01, 25, 13.82, 25.07 | CurveTo 13, 24.83, 13.35, 25.07, 13.16, 24.99 | CurveTo 12.76, 24.25, 12.84, 24.67, 12.76, 24.48 | ClosePath 1
Path6=13.38, 21.98 | CurveTo 13.41, 21.71, 13.38, 21.89, 13.39, 21.8 | LineTo 13.64, 20.81 | CurveTo 14.05, 20.28, 13.71, 20.58, 13.85, 20.4 | CurveTo 14.69, 20.2, 14.26, 20.16, 14.47, 20.13 | CurveTo 15.22, 20.6, 14.93, 20.27, 15.1, 20.4 | CurveTo 15.29, 21.23, 15.34, 20.8, 15.36, 21.01 | LineTo 15.03, 22.13 | CurveTo 14.62, 22.69, 14.95, 22.41, 14.81, 22.59 | CurveTo 13.98, 22.75, 14.43, 22.79, 14.21, 22.81 | CurveTo 13.53, 22.45, 13.78, 22.71, 13.63, 22.61 | CurveTo 13.38, 21.98, 13.41, 22.29, 13.37, 22.13 | ClosePath 1
Path7=16.14, 24.12 | CurveTo 16.15, 23.99, 16.14, 24.09, 16.14, 24.04 | CurveTo 16.16, 23.88, 16.16, 23.94, 16.16, 23.9 | LineTo 16.25, 23.29 | CurveTo 16.66, 22.76, 16.32, 23.05, 16.45, 22.88 | CurveTo 17.34, 22.68, 16.87, 22.64, 17.09, 22.62 | CurveTo 17.85, 23.09, 17.57, 22.75, 17.74, 22.89 | CurveTo 17.92, 23.72, 17.97, 23.3, 17.99, 23.51 | LineTo 17.78, 24.32 | CurveTo 17.02, 24.98, 17.68, 24.76, 17.43, 24.98 | CurveTo 16.88, 24.96, 16.99, 24.98, 16.94, 24.97 | CurveTo 16.74, 24.94, 16.82, 24.95, 16.77, 24.94 | CurveTo 16.29, 24.61, 16.54, 24.88, 16.39, 24.77 | CurveTo 16.14, 24.12, 16.19, 24.45, 16.14, 24.29 | ClosePath 1
Path8=16.88, 21.18 | CurveTo 17.11, 20.59, 16.88, 20.94, 16.96, 20.75 | CurveTo 17.7, 20.36, 17.26, 20.43, 17.46, 20.36 | CurveTo 18.29, 20.59, 17.94, 20.36, 18.13, 20.44 | CurveTo 18.52, 21.18, 18.45, 20.75, 18.52, 20.94 | CurveTo 18.29, 21.76, 18.52, 21.41, 18.44, 21.6 | CurveTo 17.7, 21.99, 18.13, 21.92, 17.94, 21.99 | CurveTo 17.12, 21.75, 17.46, 21.99, 17.27, 21.91 | CurveTo 16.88, 21.18, 16.97, 21.6, 16.88, 21.41 | ClosePath 1
Path9=17.59, 8.82 | CurveTo 19.57, 11.98, 18.63, 9.67, 19.29, 10.72 | LineTo 19.9, 11.98 | CurveTo 23.12, 13.16, 21.13, 11.98, 22.2, 12.37 | CurveTo 23.88, 12.12, 23.46, 12.85, 23.71, 12.51 | CurveTo 22.27, 10.91, 23.26, 11.82, 22.73, 11.42 | CurveTo 21.25, 9.25, 21.82, 10.4, 21.48, 9.85 | CurveTo 20.91, 7.39, 21.02, 8.65, 20.91, 8.03 | LineTo 20.91, 7.09 | LineTo 20.69, 7.09 | CurveTo 18.92, 7.54, 20.07, 7.09, 19.48, 7.24 | CurveTo 17.59, 8.82, 18.36, 7.84, 17.92, 8.27 | ClosePath 1

[StyleWeatherIcon-Rain]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Path Path3 | StrokeWidth 0
Shape4=Path Path4 | StrokeWidth 0
Shape5=Combine Shape1 | XOR Shape2 | XOR Shape3 | XOR Shape4 | #weatherIconTransform#
Path1=4.64, 16.91 | CurveTo 5.72, 13.84, 4.64, 15.76, 5, 14.74 | CurveTo 8.45, 12.11, 6.44, 12.94, 7.35, 12.37 | CurveTo 10.56, 8.75, 8.76, 10.75, 9.47, 9.63 | CurveTo 14.31, 7.44, 11.65, 7.87, 12.9, 7.44 | CurveTo 17.99, 8.72, 15.69, 7.44, 16.91, 7.87 | CurveTo 20.09, 12.01, 19.07, 9.57, 19.77, 10.67 | LineTo 20.41, 12.01 | CurveTo 22.89, 12.66, 21.3, 12.01, 22.13, 12.23 | CurveTo 24.7, 14.44, 23.65, 13.09, 24.26, 13.69 | CurveTo 25.37, 16.91, 25.14, 15.19, 25.37, 16.02 | CurveTo 24.74, 19.35, 25.37, 17.79, 25.16, 18.6 | CurveTo 23.01, 21.15, 24.32, 20.1, 23.74, 20.7 | CurveTo 20.61, 21.86, 22.28, 21.6, 21.48, 21.84 | CurveTo 20.41, 21.69, 20.48, 21.86, 20.41, 21.8 | LineTo 20.41, 20.36 | CurveTo 20.61, 20.18, 20.41, 20.24, 20.48, 20.18 | CurveTo 22.79, 19.16, 21.46, 20.14, 22.19, 19.8 | CurveTo 23.69, 16.9, 23.39, 18.52, 23.69, 17.77 | CurveTo 22.71, 14.64, 23.69, 16.03, 23.36, 15.28 | CurveTo 20.4, 13.68, 22.06, 14, 21.29, 13.68 | LineTo 18.79, 13.68 | CurveTo 18.61, 13.51, 18.67, 13.68, 18.61, 13.62 | LineTo 18.53, 12.93 | CurveTo 17.14, 10.22, 18.42, 11.85, 17.95, 10.94 | CurveTo 14.29, 9.13, 16.32, 9.49, 15.38, 9.13 | CurveTo 11.44, 10.22, 13.2, 9.13, 12.24, 9.49 | CurveTo 10.08, 12.93, 10.63, 10.95, 10.18, 11.85 | LineTo 10.01, 13.46 | CurveTo 9.81, 13.65, 10.01, 13.58, 9.94, 13.65 | LineTo 9.28, 13.68 | CurveTo 7.18, 14.75, 8.45, 13.78, 7.75, 14.14 | CurveTo 6.33, 16.91, 6.61, 15.36, 6.33, 16.08 | CurveTo 7.23, 19.17, 6.33, 17.78, 6.63, 18.53 | CurveTo 9.41, 20.19, 7.83, 19.81, 8.56, 20.15 | CurveTo 9.58, 20.37, 9.52, 20.19, 9.58, 20.25 | LineTo 9.58, 21.7 | CurveTo 9.41, 21.87, 9.58, 21.81, 9.52, 21.87 | CurveTo 6.01, 20.34, 8.07, 21.81, 6.94, 21.3 | CurveTo 4.64, 16.91, 5.08, 19.38, 4.64, 18.24 | ClosePath 1
Path2=9.99, 23.6 | CurveTo 10.03, 23.4, 9.99, 23.56, 10, 23.49 | LineTo 11.66, 17.63 | CurveTo 11.98, 17.19, 11.72, 17.44, 11.83, 17.29 | CurveTo 12.44, 17.04, 12.13, 17.09, 12.29, 17.04 | CurveTo 12.68, 17.07, 12.51, 17.04, 12.59, 17.05 | CurveTo 13.22, 17.44, 12.92, 17.11, 13.1, 17.24 | CurveTo 13.3, 18.11, 13.34, 17.64, 13.37, 17.86 | LineTo 11.67, 23.84 | CurveTo 10.85, 24.48, 11.55, 24.27, 11.27, 24.48 | CurveTo 10.74, 24.46, 10.81, 24.48, 10.78, 24.47 | CurveTo 10.64, 24.43, 10.68, 24.44, 10.65, 24.43 | CurveTo 10.15, 24.1, 10.42, 24.37, 10.26, 24.26 | CurveTo 9.99, 23.6, 10.04, 23.93, 9.99, 23.77 | ClosePath 1
Path3=12.61, 26.41 | LineTo 15.05, 17.64 | CurveTo 15.35, 17.2, 15.09, 17.45, 15.19, 17.3 | CurveTo 15.84, 17.05, 15.51, 17.1, 15.67, 17.05 | CurveTo 16.11, 17.08, 15.93, 17.05, 16.02, 17.06 | CurveTo 16.6, 17.47, 16.33, 17.14, 16.49, 17.27 | CurveTo 16.67, 18.11, 16.71, 17.67, 16.73, 17.88 | LineTo 14.24, 26.89 | CurveTo 13.95, 27.32, 14.2, 27.06, 14.11, 27.2 | CurveTo 13.44, 27.5, 13.79, 27.44, 13.63, 27.5 | CurveTo 13.19, 27.45, 13.35, 27.5, 13.26, 27.48 | CurveTo 12.67, 27.06, 12.99, 27.4, 12.82, 27.27 | CurveTo 12.61, 26.41, 12.56, 26.88, 12.54, 26.67 | ClosePath 1
Path4=16.74, 23.62 | CurveTo 16.78, 23.39, 16.74, 23.58, 16.75, 23.51 | LineTo 18.41, 17.62 | CurveTo 18.71, 17.18, 18.47, 17.43, 18.57, 17.28 | CurveTo 19.17, 17.03, 18.86, 17.08, 19.01, 17.03 | CurveTo 19.43, 17.06, 19.25, 17.03, 19.34, 17.04 | CurveTo 19.89, 17.37, 19.64, 17.12, 19.79, 17.22 | CurveTo 20.04, 17.84, 19.99, 17.52, 20.04, 17.68 | CurveTo 20.02, 17.98, 20.04, 17.87, 20.03, 17.92 | CurveTo 20, 18.1, 20.01, 18.04, 20, 18.08 | LineTo 18.37, 23.83 | CurveTo 18.09, 24.29, 18.33, 24.02, 18.24, 24.18 | CurveTo 17.58, 24.46, 17.94, 24.4, 17.77, 24.46 | LineTo 17.34, 24.41 | CurveTo 16.88, 24.09, 17.14, 24.35, 16.99, 24.25 | CurveTo 16.74, 23.62, 16.79, 23.94, 16.74, 23.78 | ClosePath 1

[StyleWeatherIcon-Showers]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Path Path3 | StrokeWidth 0
Shape4=Path Path4 | StrokeWidth 0
Shape5=Path Path5 | StrokeWidth 0
Shape6=Path Path6 | StrokeWidth 0
Shape7=Path Path7 | StrokeWidth 0
Shape8=Combine Shape1 | XOR Shape2 | XOR Shape3 | XOR Shape4 | XOR Shape5 | XOR Shape6 | XOR Shape7 | #weatherIconTransform#
Path1=4.6, 16.93 | CurveTo 5.69, 13.85, 4.6, 15.77, 4.96, 14.75 | CurveTo 8.47, 12.12, 6.41, 12.95, 7.34, 12.37 | CurveTo 10.54, 8.73, 8.76, 10.74, 9.45, 9.62 | CurveTo 14.3, 7.4, 11.63, 7.84, 12.88, 7.4 | CurveTo 18.02, 8.68, 15.69, 7.4, 16.93, 7.83 | CurveTo 20.14, 11.98, 19.1, 9.53, 19.81, 10.63 | LineTo 20.48, 11.98 | CurveTo 22.96, 12.64, 21.38, 11.98, 22.21, 12.2 | CurveTo 24.75, 14.44, 23.72, 13.08, 24.31, 13.68 | CurveTo 25.4, 16.93, 25.18, 15.2, 25.4, 16.03 | CurveTo 24.03, 20.37, 25.4, 18.27, 24.94, 19.41 | CurveTo 20.66, 21.87, 23.11, 21.33, 21.99, 21.83 | CurveTo 20.48, 21.7, 20.54, 21.87, 20.48, 21.81 | LineTo 20.48, 20.36 | CurveTo 20.66, 20.19, 20.48, 20.25, 20.54, 20.19 | CurveTo 22.83, 19.14, 21.5, 20.12, 22.23, 19.77 | CurveTo 23.73, 16.92, 23.43, 18.51, 23.73, 17.77 | CurveTo 22.77, 14.61, 23.73, 16.03, 23.41, 15.26 | CurveTo 20.48, 13.64, 22.13, 13.97, 21.37, 13.64 | LineTo 18.85, 13.64 | CurveTo 18.63, 13.46, 18.73, 13.64, 18.66, 13.58 | LineTo 18.56, 12.89 | CurveTo 17.86, 10.95, 18.49, 12.18, 18.26, 11.53 | CurveTo 16.33, 9.59, 17.46, 10.37, 16.95, 9.92 | CurveTo 14.31, 9.1, 15.71, 9.26, 15.03, 9.1 | CurveTo 11.45, 10.19, 13.21, 9.1, 12.26, 9.46 | CurveTo 10.08, 12.91, 10.64, 10.92, 10.18, 11.83 | LineTo 10.01, 13.45 | CurveTo 9.85, 13.59, 10.01, 13.54, 9.96, 13.59 | LineTo 9.31, 13.7 | CurveTo 7.2, 14.73, 8.47, 13.77, 7.76, 14.11 | CurveTo 6.35, 16.93, 6.63, 15.35, 6.35, 16.08 | CurveTo 7.24, 19.18, 6.35, 17.8, 6.65, 18.55 | CurveTo 9.41, 20.2, 7.83, 19.81, 8.55, 20.15 | CurveTo 9.59, 20.37, 9.53, 20.2, 9.59, 20.26 | LineTo 9.59, 21.71 | CurveTo 9.41, 21.88, 9.59, 21.82, 9.53, 21.88 | CurveTo 7.53, 21.43, 8.75, 21.85, 8.13, 21.7 | CurveTo 6, 20.36, 6.93, 21.16, 6.42, 20.8 | CurveTo 4.98, 18.81, 5.57, 19.92, 5.23, 19.41 | CurveTo 4.6, 16.93, 4.73, 18.21, 4.6, 17.59 | ClosePath 1
Path2=10.02, 23.7 | CurveTo 10.04, 23.57, 10.02, 23.67, 10.03, 23.62 | CurveTo 10.06, 23.46, 10.05, 23.52, 10.06, 23.48 | LineTo 10.33, 22.43 | CurveTo 10.73, 21.92, 10.4, 22.21, 10.53, 22.03 | CurveTo 11.37, 21.85, 10.93, 21.8, 11.14, 21.78 | CurveTo 11.89, 22.25, 11.6, 21.92, 11.77, 22.05 | CurveTo 11.96, 22.89, 12.01, 22.45, 12.03, 22.66 | LineTo 11.72, 23.9 | CurveTo 10.96, 24.56, 11.59, 24.34, 11.34, 24.56 | CurveTo 10.87, 24.56, 10.93, 24.56, 10.91, 24.56 | CurveTo 10.76, 24.55, 10.84, 24.56, 10.8, 24.55 | CurveTo 10.66, 24.54, 10.72, 24.54, 10.69, 24.54 | CurveTo 10.18, 24.2, 10.45, 24.48, 10.29, 24.36 | CurveTo 10.02, 23.7, 10.07, 24.04, 10.02, 23.86 | ClosePath 1
Path3=11.34, 18.88 | CurveTo 11.35, 18.77, 11.34, 18.86, 11.34, 18.82 | CurveTo 11.36, 18.68, 11.36, 18.72, 11.36, 18.69 | LineTo 11.66, 17.63 | CurveTo 11.98, 17.18, 11.72, 17.44, 11.83, 17.29 | CurveTo 12.45, 17.03, 12.13, 17.08, 12.29, 17.03 | CurveTo 12.53, 17.03, 12.47, 17.03, 12.5, 17.03 | CurveTo 12.62, 17.04, 12.56, 17.03, 12.59, 17.04 | CurveTo 12.7, 17.05, 12.65, 17.05, 12.68, 17.05 | CurveTo 13.21, 17.45, 12.93, 17.12, 13.1, 17.25 | CurveTo 13.28, 18.09, 13.33, 17.65, 13.35, 17.86 | LineTo 13.04, 19.09 | CurveTo 12.64, 19.68, 12.97, 19.37, 12.84, 19.56 | CurveTo 11.99, 19.7, 12.44, 19.8, 12.22, 19.8 | CurveTo 11.5, 19.36, 11.77, 19.64, 11.61, 19.53 | CurveTo 11.34, 18.88, 11.39, 19.19, 11.34, 19.04 | ClosePath 1
Path4=12.57, 26.83 | CurveTo 12.59, 26.7, 12.57, 26.8, 12.58, 26.76 | CurveTo 12.61, 26.58, 12.6, 26.64, 12.61, 26.61 | LineTo 12.9, 25.59 | CurveTo 13.3, 25.05, 12.96, 25.35, 13.1, 25.17 | CurveTo 13.95, 24.97, 13.5, 24.93, 13.72, 24.9 | CurveTo 14.46, 25.38, 14.18, 25.04, 14.34, 25.17 | CurveTo 14.53, 26.03, 14.58, 25.59, 14.59, 25.8 | LineTo 14.28, 27.07 | CurveTo 13.48, 27.68, 14.17, 27.48, 13.91, 27.68 | CurveTo 13.24, 27.64, 13.43, 27.68, 13.35, 27.67 | CurveTo 12.75, 27.34, 13.02, 27.6, 12.86, 27.5 | CurveTo 12.57, 26.83, 12.63, 27.18, 12.57, 27.01 | ClosePath 1
Path5=13.91, 22.06 | CurveTo 13.95, 21.81, 13.91, 22, 13.92, 21.92 | LineTo 14.22, 20.78 | CurveTo 14.63, 20.27, 14.29, 20.55, 14.42, 20.38 | CurveTo 15.28, 20.2, 14.83, 20.15, 15.05, 20.13 | CurveTo 15.79, 20.59, 15.51, 20.26, 15.67, 20.39 | CurveTo 15.85, 21.24, 15.9, 20.79, 15.92, 21 | LineTo 15.61, 22.23 | CurveTo 14.89, 22.91, 15.48, 22.68, 15.24, 22.91 | CurveTo 14.58, 22.85, 14.85, 22.91, 14.74, 22.89 | CurveTo 14.09, 22.55, 14.36, 22.81, 14.2, 22.71 | CurveTo 13.91, 22.06, 13.97, 22.4, 13.91, 22.23 | ClosePath 1
Path6=16.73, 23.74 | CurveTo 16.76, 23.5, 16.73, 23.67, 16.74, 23.59 | LineTo 17.04, 22.51 | CurveTo 17.45, 21.97, 17.11, 22.27, 17.24, 22.09 | CurveTo 18.08, 21.88, 17.66, 21.85, 17.86, 21.82 | CurveTo 18.61, 22.29, 18.31, 21.95, 18.49, 22.08 | CurveTo 18.7, 22.92, 18.73, 22.49, 18.76, 22.7 | LineTo 18.41, 23.98 | CurveTo 17.62, 24.59, 18.31, 24.39, 18.05, 24.59 | CurveTo 17.36, 24.56, 17.53, 24.59, 17.44, 24.58 | CurveTo 16.9, 24.26, 17.16, 24.52, 17.01, 24.42 | CurveTo 16.73, 23.74, 16.8, 24.08, 16.74, 23.91 | ClosePath 1
Path7=18.11, 18.98 | CurveTo 18.16, 18.72, 18.11, 18.95, 18.13, 18.86 | LineTo 18.46, 17.69 | CurveTo 18.75, 17.22, 18.5, 17.48, 18.59, 17.32 | CurveTo 19.24, 17.08, 18.91, 17.12, 19.07, 17.07 | CurveTo 19.48, 17.11, 19.28, 17.07, 19.37, 17.08 | CurveTo 20, 17.49, 19.7, 17.16, 19.87, 17.29 | CurveTo 20.07, 18.14, 20.12, 17.66, 20.14, 17.87 | LineTo 19.83, 19.17 | CurveTo 19.07, 19.82, 19.7, 19.6, 19.45, 19.82 | CurveTo 18.73, 19.76, 19.01, 19.82, 18.9, 19.8 | CurveTo 18.27, 19.45, 18.52, 19.7, 18.37, 19.59 | CurveTo 18.11, 18.98, 18.16, 19.29, 18.11, 19.14 | ClosePath 1

[StyleWeatherIcon-Sleet]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Path Path3 | StrokeWidth 0
Shape4=Path Path4 | StrokeWidth 0
Shape5=Path Path5 | StrokeWidth 0
Shape6=Path Path6 | StrokeWidth 0
Shape7=Path Path7 | StrokeWidth 0
Shape8=Path Path8 | StrokeWidth 0
Shape9=Combine Shape1 | XOR Shape2 | XOR Shape3 | XOR Shape4 | XOR Shape5 | XOR Shape6 | XOR Shape7 | XOR Shape8 | #weatherIconTransform#
Path1=4.09, 16.95 | CurveTo 5.17, 13.86, 4.09, 15.79, 4.45, 14.76 | CurveTo 7.91, 12.12, 5.89, 12.96, 6.81, 12.37 | CurveTo 10.01, 8.75, 8.22, 10.75, 8.92, 9.63 | CurveTo 13.78, 7.43, 11.1, 7.87, 12.36, 7.43 | CurveTo 15.98, 7.83, 14.59, 7.43, 15.33, 7.56 | CurveTo 15.99, 7.85, 15.98, 7.84, 15.98, 7.84 | CurveTo 18.2, 9.4, 16.83, 8.17, 17.57, 8.69 | LineTo 18.23, 9.4 | CurveTo 19.6, 12.02, 18.91, 10.13, 19.36, 11 | LineTo 19.91, 12.02 | CurveTo 22.74, 12.88, 20.99, 12.02, 21.93, 12.31 | LineTo 22.74, 12.87 | CurveTo 24.08, 14.2, 23.27, 13.23, 23.72, 13.67 | CurveTo 24.81, 15.94, 24.44, 14.73, 24.68, 15.31 | CurveTo 24.89, 16.46, 24.85, 16.15, 24.87, 16.32 | LineTo 24.89, 16.52 | CurveTo 24.9, 16.69, 24.89, 16.53, 24.89, 16.58 | CurveTo 24.91, 16.93, 24.91, 16.8, 24.91, 16.88 | LineTo 24.91, 16.96 | CurveTo 24.27, 19.41, 24.91, 17.84, 24.7, 18.66 | CurveTo 22.53, 21.22, 23.85, 20.16, 23.27, 20.77 | CurveTo 20.11, 21.94, 21.8, 21.67, 20.99, 21.91 | CurveTo 19.91, 21.77, 19.98, 21.94, 19.91, 21.88 | LineTo 19.91, 20.43 | CurveTo 20.11, 20.24, 19.91, 20.3, 19.98, 20.24 | CurveTo 22.29, 19.22, 20.97, 20.2, 21.69, 19.86 | CurveTo 23.19, 16.96, 22.89, 18.58, 23.19, 17.83 | CurveTo 22.22, 14.67, 23.19, 16.07, 22.87, 15.31 | CurveTo 19.91, 13.71, 21.58, 14.03, 20.81, 13.71 | LineTo 18.3, 13.71 | CurveTo 18.12, 13.54, 18.18, 13.71, 18.12, 13.65 | LineTo 18.04, 12.95 | CurveTo 16.77, 10.36, 17.94, 11.95, 17.52, 11.09 | CurveTo 16.75, 10.33, 16.76, 10.35, 16.76, 10.34 | CurveTo 16.73, 10.3, 16.74, 10.32, 16.73, 10.31 | CurveTo 16.69, 10.28, 16.72, 10.29, 16.71, 10.28 | CurveTo 16.67, 10.25, 16.69, 10.26, 16.68, 10.25 | CurveTo 14.11, 9.13, 15.94, 9.59, 15.09, 9.21 | CurveTo 13.77, 9.12, 14.04, 9.12, 13.93, 9.12 | CurveTo 10.91, 10.22, 12.67, 9.12, 11.72, 9.49 | CurveTo 9.54, 12.94, 10.1, 10.95, 9.64, 11.86 | LineTo 9.46, 13.53 | CurveTo 9.24, 13.67, 9.43, 13.62, 9.35, 13.67 | LineTo 8.75, 13.7 | CurveTo 6.64, 14.77, 7.91, 13.8, 7.2, 14.16 | CurveTo 5.8, 16.95, 6.08, 15.38, 5.8, 16.11 | LineTo 5.8, 16.99 | LineTo 5.83, 16.99 | CurveTo 6.13, 18.34, 5.84, 17.47, 5.94, 17.92 | CurveTo 6.93, 19.43, 6.33, 18.77, 6.59, 19.13 | CurveTo 7.67, 19.91, 7.14, 19.61, 7.38, 19.77 | LineTo 7.67, 19.92 | CurveTo 8.88, 20.24, 8.07, 20.11, 8.47, 20.22 | CurveTo 9.05, 20.42, 8.99, 20.24, 9.05, 20.3 | LineTo 9.05, 21.76 | CurveTo 8.88, 21.93, 9.05, 21.87, 8.99, 21.93 | CurveTo 7.4, 21.63, 8.36, 21.9, 7.87, 21.8 | LineTo 7.4, 21.64 | CurveTo 5.29, 20.21, 6.57, 21.35, 5.86, 20.87 | CurveTo 4.18, 17.9, 4.72, 19.55, 4.34, 18.77 | LineTo 4.18, 17.87 | CurveTo 4.17, 17.83, 4.17, 17.86, 4.17, 17.85 | CurveTo 4.09, 16.95, 4.11, 17.57, 4.09, 17.27 | ClosePath 1
Path2=9.59, 24.12 | CurveTo 9.61, 23.99, 9.59, 24.09, 9.6, 24.05 | CurveTo 9.63, 23.87, 9.62, 23.94, 9.63, 23.9 | LineTo 9.72, 23.28 | CurveTo 10.13, 22.75, 9.79, 23.04, 9.92, 22.87 | CurveTo 10.81, 22.67, 10.34, 22.63, 10.56, 22.61 | CurveTo 11.32, 23.08, 11.04, 22.74, 11.2, 22.88 | CurveTo 11.39, 23.71, 11.43, 23.29, 11.45, 23.5 | LineTo 11.25, 24.31 | CurveTo 10.49, 24.97, 11.15, 24.75, 10.9, 24.97 | CurveTo 10.35, 24.95, 10.46, 24.97, 10.41, 24.96 | CurveTo 10.21, 24.93, 10.29, 24.94, 10.25, 24.93 | CurveTo 9.75, 24.6, 10, 24.87, 9.85, 24.76 | CurveTo 9.59, 24.12, 9.64, 24.45, 9.59, 24.29 | ClosePath 1
Path3=10.33, 21.18 | CurveTo 10.56, 20.59, 10.33, 20.94, 10.41, 20.75 | CurveTo 11.15, 20.36, 10.71, 20.43, 10.91, 20.36 | CurveTo 11.74, 20.59, 11.39, 20.36, 11.58, 20.44 | CurveTo 11.97, 21.18, 11.9, 20.74, 11.97, 20.94 | CurveTo 11.74, 21.76, 11.97, 21.41, 11.89, 21.6 | CurveTo 11.15, 21.99, 11.59, 21.92, 11.39, 21.99 | CurveTo 10.58, 21.75, 10.92, 21.99, 10.73, 21.91 | CurveTo 10.33, 21.18, 10.42, 21.59, 10.33, 21.4 | ClosePath 1
Path4=11.97, 27.17 | CurveTo 12.01, 26.94, 11.97, 27.13, 11.98, 27.06 | LineTo 12.14, 26.35 | CurveTo 12.55, 25.84, 12.21, 26.12, 12.35, 25.95 | CurveTo 13.18, 25.77, 12.76, 25.72, 12.97, 25.7 | CurveTo 13.71, 26.14, 13.41, 25.81, 13.59, 25.94 | CurveTo 13.79, 26.82, 13.83, 26.34, 13.86, 26.57 | LineTo 13.66, 27.41 | CurveTo 12.86, 28.02, 13.56, 27.82, 13.29, 28.02 | CurveTo 12.62, 27.99, 12.79, 28.02, 12.7, 28.01 | CurveTo 12.13, 27.66, 12.4, 27.93, 12.24, 27.82 | CurveTo 11.97, 27.17, 12.03, 27.5, 11.97, 27.34 | ClosePath 1
Path5=12.76, 24.26 | CurveTo 12.99, 23.68, 12.76, 24.03, 12.84, 23.83 | CurveTo 13.58, 23.45, 13.15, 23.52, 13.34, 23.45 | CurveTo 14.17, 23.68, 13.82, 23.45, 14.01, 23.53 | CurveTo 14.4, 24.26, 14.33, 23.84, 14.4, 24.03 | CurveTo 14.17, 24.85, 14.4, 24.5, 14.32, 24.69 | CurveTo 13.58, 25.08, 14.01, 25.01, 13.82, 25.08 | CurveTo 13, 24.84, 13.35, 25.08, 13.16, 25 | CurveTo 12.76, 24.26, 12.84, 24.68, 12.76, 24.49 | ClosePath 1
Path6=13.38, 21.99 | CurveTo 13.41, 21.72, 13.38, 21.89, 13.39, 21.8 | LineTo 13.64, 20.82 | CurveTo 14.05, 20.29, 13.71, 20.59, 13.85, 20.41 | CurveTo 14.69, 20.21, 14.26, 20.17, 14.47, 20.14 | CurveTo 15.22, 20.61, 14.93, 20.28, 15.1, 20.41 | CurveTo 15.29, 21.24, 15.34, 20.81, 15.36, 21.02 | LineTo 15.03, 22.14 | CurveTo 14.62, 22.7, 14.95, 22.42, 14.81, 22.6 | CurveTo 13.98, 22.76, 14.43, 22.8, 14.21, 22.82 | CurveTo 13.53, 22.46, 13.78, 22.72, 13.63, 22.62 | CurveTo 13.38, 21.99, 13.41, 22.3, 13.37, 22.14 | ClosePath 1
Path7=16.14, 24.13 | CurveTo 16.15, 24, 16.14, 24.1, 16.14, 24.05 | CurveTo 16.16, 23.89, 16.16, 23.95, 16.16, 23.91 | LineTo 16.25, 23.3 | CurveTo 16.66, 22.77, 16.32, 23.06, 16.45, 22.89 | CurveTo 17.34, 22.69, 16.87, 22.65, 17.09, 22.63 | CurveTo 17.85, 23.1, 17.57, 22.76, 17.74, 22.9 | CurveTo 17.92, 23.73, 17.97, 23.31, 17.99, 23.52 | LineTo 17.78, 24.33 | CurveTo 17.02, 24.99, 17.68, 24.77, 17.43, 24.99 | CurveTo 16.88, 24.97, 16.99, 24.99, 16.94, 24.98 | CurveTo 16.74, 24.95, 16.82, 24.96, 16.77, 24.95 | CurveTo 16.29, 24.62, 16.54, 24.89, 16.39, 24.78 | CurveTo 16.14, 24.13, 16.2, 24.46, 16.14, 24.3 | ClosePath 1
Path8=16.88, 21.19 | CurveTo 17.11, 20.6, 16.88, 20.95, 16.96, 20.76 | CurveTo 17.7, 20.37, 17.27, 20.44, 17.46, 20.37 | CurveTo 18.29, 20.6, 17.94, 20.37, 18.13, 20.45 | CurveTo 18.52, 21.19, 18.45, 20.76, 18.52, 20.95 | CurveTo 18.29, 21.77, 18.52, 21.42, 18.44, 21.62 | CurveTo 17.71, 22, 18.14, 21.92, 17.95, 22 | CurveTo 17.13, 21.76, 17.47, 22, 17.28, 21.92 | CurveTo 16.88, 21.19, 16.97, 21.61, 16.88, 21.42 | ClosePath 1

[StyleWeatherIcon-Snow]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Path Path3 | StrokeWidth 0
Shape4=Path Path4 | StrokeWidth 0
Shape5=Path Path5 | StrokeWidth 0
Shape6=Path Path6 | StrokeWidth 0
Shape7=Path Path7 | StrokeWidth 0
Shape8=Path Path8 | StrokeWidth 0
Shape9=Combine Shape1 | XOR Shape2 | XOR Shape3 | XOR Shape4 | XOR Shape5 | XOR Shape6 | XOR Shape7 | XOR Shape8 | #weatherIconTransform#
Path1=4.64, 16.95 | CurveTo 5.7, 13.87, 4.64, 15.79, 4.99, 14.77 | CurveTo 8.44, 12.11, 6.41, 12.97, 7.32, 12.39 | CurveTo 10.54, 8.75, 8.75, 10.75, 9.45, 9.63 | CurveTo 14.29, 7.44, 11.63, 7.87, 12.88, 7.44 | CurveTo 17.97, 8.72, 15.67, 7.44, 16.89, 7.87 | CurveTo 20.07, 12.01, 19.05, 9.57, 19.75, 10.67 | LineTo 20.39, 12.01 | CurveTo 22.87, 12.67, 21.28, 12.01, 22.11, 12.23 | CurveTo 24.68, 14.47, 23.63, 13.11, 24.24, 13.71 | CurveTo 25.35, 16.95, 25.12, 15.23, 25.35, 16.06 | CurveTo 23.96, 20.37, 25.35, 18.27, 24.89, 19.42 | CurveTo 20.58, 21.87, 23.04, 21.33, 21.91, 21.83 | CurveTo 20.38, 21.7, 20.45, 21.87, 20.38, 21.81 | LineTo 20.38, 20.37 | CurveTo 20.58, 20.19, 20.38, 20.25, 20.45, 20.19 | CurveTo 22.76, 19.17, 21.43, 20.15, 22.16, 19.81 | CurveTo 23.66, 16.94, 23.36, 18.53, 23.66, 17.79 | CurveTo 22.69, 14.64, 23.66, 16.05, 23.34, 15.29 | CurveTo 20.37, 13.67, 22.04, 13.99, 21.27, 13.67 | LineTo 18.76, 13.67 | CurveTo 18.58, 13.5, 18.64, 13.67, 18.58, 13.61 | LineTo 18.5, 12.92 | CurveTo 17.11, 10.2, 18.39, 11.84, 17.92, 10.93 | CurveTo 14.26, 9.1, 16.29, 9.47, 15.35, 9.1 | CurveTo 11.4, 10.21, 13.16, 9.1, 12.21, 9.47 | CurveTo 10.03, 12.96, 10.59, 10.95, 10.13, 11.86 | LineTo 9.97, 13.46 | CurveTo 9.77, 13.65, 9.97, 13.58, 9.9, 13.65 | LineTo 9.24, 13.72 | CurveTo 7.14, 14.76, 8.41, 13.79, 7.71, 14.13 | CurveTo 6.29, 16.95, 6.57, 15.39, 6.29, 16.11 | CurveTo 7.19, 19.18, 6.29, 17.8, 6.59, 18.54 | CurveTo 9.37, 20.2, 7.79, 19.82, 8.52, 20.15 | CurveTo 9.54, 20.38, 9.48, 20.2, 9.54, 20.26 | LineTo 9.54, 21.71 | CurveTo 9.37, 21.88, 9.54, 21.82, 9.48, 21.88 | CurveTo 5.97, 20.38, 8.03, 21.84, 6.9, 21.34 | CurveTo 4.64, 16.95, 5.1, 19.42, 4.64, 18.27 | ClosePath 1
Path2=11, 21.02 | CurveTo 11.24, 20.44, 11, 20.8, 11.08, 20.6 | CurveTo 11.83, 20.2, 11.4, 20.28, 11.59, 20.2 | CurveTo 12.42, 20.44, 12.06, 20.2, 12.26, 20.28 | CurveTo 12.66, 21.02, 12.58, 20.6, 12.66, 20.8 | CurveTo 12.42, 21.62, 12.66, 21.26, 12.58, 21.46 | CurveTo 11.83, 21.87, 12.26, 21.79, 12.07, 21.87 | CurveTo 11.24, 21.62, 11.6, 21.87, 11.4, 21.79 | CurveTo 11, 21.02, 11.08, 21.46, 11, 21.26 | ClosePath 1
Path3=11, 24.65 | CurveTo 11.24, 24.05, 11, 24.41, 11.08, 24.21 | CurveTo 11.82, 23.82, 11.4, 23.9, 11.59, 23.82 | CurveTo 12.41, 24.05, 12.05, 23.82, 12.25, 23.9 | CurveTo 12.65, 24.64, 12.57, 24.21, 12.65, 24.4 | CurveTo 12.41, 25.23, 12.65, 24.88, 12.57, 25.07 | CurveTo 11.82, 25.46, 12.25, 25.39, 12.06, 25.46 | CurveTo 11.23, 25.23, 11.59, 25.46, 11.39, 25.38 | CurveTo 11, 24.65, 11.08, 25.08, 11, 24.88 | ClosePath 1
Path4=14.19, 22.95 | CurveTo 14.44, 22.33, 14.19, 22.72, 14.27, 22.51 | CurveTo 15.01, 22.09, 14.6, 22.17, 14.79, 22.09 | CurveTo 15.61, 22.35, 15.24, 22.09, 15.44, 22.18 | CurveTo 15.87, 22.95, 15.78, 22.52, 15.87, 22.72 | CurveTo 15.62, 23.55, 15.87, 23.18, 15.79, 23.38 | CurveTo 15.01, 23.8, 15.45, 23.72, 15.25, 23.8 | CurveTo 14.43, 23.55, 14.78, 23.8, 14.59, 23.72 | CurveTo 14.19, 22.95, 14.27, 23.38, 14.19, 23.18 | ClosePath 1
Path5=14.19, 19.33 | CurveTo 14.44, 18.73, 14.19, 19.1, 14.27, 18.9 | CurveTo 15.01, 18.49, 14.62, 18.57, 14.81, 18.49 | CurveTo 15.62, 18.74, 15.25, 18.49, 15.45, 18.57 | CurveTo 15.87, 19.34, 15.79, 18.91, 15.87, 19.1 | CurveTo 15.62, 19.93, 15.87, 19.57, 15.79, 19.77 | CurveTo 15.01, 20.17, 15.45, 20.09, 15.25, 20.17 | CurveTo 14.43, 19.93, 14.78, 20.17, 14.59, 20.09 | CurveTo 14.19, 19.33, 14.27, 19.76, 14.19, 19.56 | ClosePath 1
Path6=14.19, 26.61 | CurveTo 14.44, 26, 14.19, 26.38, 14.27, 26.18 | CurveTo 15.01, 25.76, 14.6, 25.84, 14.79, 25.76 | CurveTo 15.62, 26.01, 15.25, 25.76, 15.45, 25.84 | CurveTo 15.87, 26.61, 15.79, 26.18, 15.87, 26.38 | CurveTo 15.62, 27.2, 15.87, 26.84, 15.79, 27.04 | CurveTo 15.01, 27.44, 15.45, 27.36, 15.25, 27.44 | CurveTo 14.43, 27.2, 14.78, 27.44, 14.59, 27.36 | CurveTo 14.19, 26.61, 14.27, 27.03, 14.19, 26.84 | ClosePath 1
Path7=17.41, 21.02 | CurveTo 17.66, 20.44, 17.41, 20.8, 17.49, 20.61 | CurveTo 18.26, 20.19, 17.83, 20.27, 18.03, 20.19 | CurveTo 18.85, 20.43, 18.49, 20.19, 18.69, 20.27 | CurveTo 19.09, 21.01, 19.01, 20.59, 19.09, 20.79 | CurveTo 18.85, 21.61, 19.09, 21.25, 19.01, 21.45 | CurveTo 18.26, 21.86, 18.69, 21.78, 18.5, 21.86 | CurveTo 17.66, 21.61, 18.02, 21.86, 17.82, 21.78 | CurveTo 17.41, 21.02, 17.5, 21.45, 17.41, 21.25 | ClosePath 1
Path8=17.41, 24.65 | CurveTo 17.66, 24.05, 17.41, 24.43, 17.49, 24.23 | CurveTo 18.26, 23.82, 17.82, 23.9, 18.02, 23.82 | CurveTo 18.85, 24.05, 18.5, 23.82, 18.69, 23.9 | CurveTo 19.08, 24.64, 19.01, 24.2, 19.08, 24.4 | CurveTo 18.85, 25.23, 19.08, 24.88, 19, 25.07 | CurveTo 18.26, 25.46, 18.69, 25.39, 18.5, 25.46 | CurveTo 17.66, 25.22, 18.02, 25.46, 17.82, 25.38 | CurveTo 17.41, 24.65, 17.5, 25.07, 17.41, 24.88 | ClosePath 1

[StyleWeatherIcon-Wind]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Combine Shape1 | XOR Shape2 | #weatherIconTransform#
Path1=3.1, 16.97 | CurveTo 3.38, 17.59, 3.1, 17.21, 3.19, 17.42 | CurveTo 4.01, 17.87, 3.54, 17.78, 3.75, 17.87 | LineTo 18.7, 17.87 | CurveTo 19.43, 18.17, 18.99, 17.87, 19.23, 17.97 | CurveTo 19.73, 18.91, 19.63, 18.37, 19.73, 18.62 | CurveTo 19.43, 19.63, 19.73, 19.2, 19.63, 19.44 | CurveTo 18.69, 19.92, 19.23, 19.82, 18.99, 19.92 | CurveTo 17.96, 19.63, 18.4, 19.92, 18.15, 19.82 | CurveTo 17.36, 19.37, 17.8, 19.45, 17.6, 19.37 | CurveTo 16.72, 19.63, 17.11, 19.37, 16.9, 19.46 | CurveTo 16.45, 20.24, 16.54, 19.8, 16.45, 20.01 | CurveTo 16.73, 20.87, 16.45, 20.49, 16.54, 20.7 | CurveTo 18.69, 21.7, 17.29, 21.42, 17.95, 21.7 | CurveTo 20.7, 20.89, 19.47, 21.7, 20.14, 21.43 | CurveTo 21.53, 18.92, 21.26, 20.35, 21.53, 19.7 | CurveTo 20.69, 16.92, 21.53, 18.14, 21.25, 17.48 | CurveTo 18.69, 16.08, 20.13, 16.36, 19.46, 16.08 | LineTo 4.01, 16.08 | CurveTo 3.37, 16.34, 3.76, 16.08, 3.55, 16.17 | CurveTo 3.1, 16.97, 3.19, 16.51, 3.1, 16.72 | ClosePath 1
Path2=3.1, 13.69 | CurveTo 3.38, 14.3, 3.1, 13.92, 3.19, 14.12 | CurveTo 4.01, 14.56, 3.55, 14.48, 3.76, 14.56 | LineTo 24.05, 14.56 | CurveTo 26.06, 13.74, 24.83, 14.56, 25.5, 14.29 | CurveTo 26.9, 11.77, 26.62, 13.2, 26.9, 12.54 | CurveTo 26.06, 9.78, 26.9, 11, 26.62, 10.33 | CurveTo 24.05, 8.95, 25.5, 9.23, 24.83, 8.95 | CurveTo 22.1, 9.75, 23.28, 8.95, 22.63, 9.22 | CurveTo 21.83, 10.42, 21.92, 9.91, 21.83, 10.13 | CurveTo 22.09, 11.05, 21.83, 10.68, 21.92, 10.89 | CurveTo 22.72, 11.29, 22.26, 11.21, 22.47, 11.29 | CurveTo 23.35, 11.05, 22.96, 11.29, 23.17, 11.21 | CurveTo 24.05, 10.74, 23.54, 10.84, 23.77, 10.74 | CurveTo 24.78, 11.04, 24.34, 10.74, 24.58, 10.84 | CurveTo 25.08, 11.77, 24.98, 11.24, 25.08, 11.48 | CurveTo 24.78, 12.49, 25.08, 12.06, 24.98, 12.3 | CurveTo 24.05, 12.78, 24.58, 12.68, 24.34, 12.78 | LineTo 4.01, 12.78 | CurveTo 3.37, 13.04, 3.76, 12.78, 3.55, 12.87 | CurveTo 3.1, 13.69, 3.19, 13.23, 3.1, 13.44 | ClosePath 1