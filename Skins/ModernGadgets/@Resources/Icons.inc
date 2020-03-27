; Vector icons
; Sources: https://materialdesignicons.com/ | https://erikflowers.github.io/weather-icons/
; ^(.*?) == (.*?)$  $1=$2

; UTILITIES
[Variables]
iconSmallTransform=Scale 0.7,0.7,0,0
iconMediumTransform=Scale 0.8,0.8,0,0
iconLargeTransform=Scale 1,1,0,0

; TEMPLATE
[StyleIcon]
DynamicVariables=1
TransformationMatrix=#transformationMatrix#
Fill=Fill Color #colorAccent#
Transform=#iconSmallTransform#

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
Shape=Path Path1 | StrokeWidth 0 | #iconSmallTransform# | Offset 0,-2.5 | Extend Fill
Path1=15.41, 16.58 | LineTo 10.83, 12 | LineTo 15.41, 7.41 | LineTo 14, 6 | LineTo 8, 12 | LineTo 14, 18 | LineTo 15.41, 16.58 | ClosePath 1

[StyleIconChevronRight]
Shape=Path Path1 | StrokeWidth 0 | #iconSmallTransform# | Offset 0,-2.5 | Extend Fill
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
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Path Path3 | StrokeWidth 0
Shape4=Combine Shape1 | XOR Shape2 | XOR Shape3 | #iconMediumTransform#
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
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Path Path3 | StrokeWidth 0
Shape4=Combine Shape1 | XOR Shape2 | XOR Shape3 | #iconMediumTransform#
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
Shape5=Combine Shape1 | XOR Shape2 | XOR Shape3 | XOR Shape4 | #iconMediumTransform#
Path1=11, 9 | LineTo 13, 9 | LineTo 13, 7 | LineTo 11, 7
Path2=12, 20 | CurveTo 4, 12, 7.59, 20, 4, 16.41 | CurveTo 12, 4, 4, 7.59, 7.59, 4 | CurveTo 20, 12, 16.41, 4, 20, 7.59 | CurveTo 12, 20, 20, 16.41, 16.41, 20
Path3=12, 2 | ArcTo 2, 12, 10, 10, 0, 1, 0 | ArcTo 12, 22, 10, 10, 0, 1, 0 | ArcTo 22, 12, 10, 10, 0, 1, 0 | ArcTo 12, 2, 10, 10, 0, 1, 0
Path4=11, 17 | LineTo 13, 17 | LineTo 13, 11 | LineTo 11, 11 | LineTo 11, 17 | ClosePath 1

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
Shape4=Combine Shape1 | XOR Shape2 | XOR Shape3 | #iconSmallTransform#
Path1=12, 20 | ArcTo 4, 12, 8, 8, 0, 0, 0 | ArcTo 12, 4, 8, 8, 0, 0, 0 | ArcTo 20, 12, 8, 8, 0, 0, 0 | ArcTo 12, 20, 8, 8, 0, 0, 0
Path2=12, 2 | ArcTo 2, 12, 10, 10, 0, 1, 0 | ArcTo 12, 22, 10, 10, 0, 1, 0 | ArcTo 22, 12, 10, 10, 0, 1, 0 | ArcTo 12, 2, 10, 10, 0, 1, 0
Path3=12, 7 | ArcTo 7, 12, 5, 5, 0, 1, 0 | ArcTo 12, 17, 5, 5, 0, 1, 0 | ArcTo 17, 12, 5, 5, 0, 1, 0 | ArcTo 12, 7, 5, 5, 0, 1, 0 | ClosePath 1

[StyleIconRadioButtonInactive]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Combine Shape1 | XOR Shape2 | #iconSmallTransform#
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

[StyleIconWan]
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
Shape11=Combine Shape1 | XOR Shape2 | XOR Shape3 | XOR Shape4 | XOR Shape5 | XOR Shape6 | XOR Shape7 | XOR Shape8 | XOR Shape9 | XOR Shape10 | #iconSmallTransform#
Path1=12, 2 | ArcTo 4, 10, 8, 8, 0, 1, 0 | CurveTo 11, 17.93, 4, 14.03, 7, 17.42 | LineTo 11, 19 | LineTo 10, 19 | ArcTo 9, 20, 1, 1, 0, 1, 0 | LineTo 2, 20 | LineTo 2, 22 | LineTo 9, 22 | ArcTo 10, 23, 1, 1, 0, 1, 0 | LineTo 14, 23 | ArcTo 15, 22, 1, 1, 0, 1, 0 | LineTo 22, 22 | LineTo 22, 20 | LineTo 15, 20 | ArcTo 14, 19, 1, 1, 0, 1, 0 | LineTo 13, 19 | LineTo 13, 17.93 | CurveTo 20, 10, 17, 17.43, 20, 14.03 | ArcTo 12, 2, 8, 8, 0, 1, 0
Path2=12, 4 | CurveTo 13.26, 7, 12, 4, 12.74, 5.28 | LineTo 10.74, 7 | CurveTo 12, 4, 11.26, 5.28, 12, 4
Path3=9.77, 4.43 | CurveTo 8.74, 7, 9.5, 4.93, 9.09, 5.84 | LineTo 6.81, 7 | CurveTo 9.77, 4.43, 7.5, 5.84, 8.5, 4.93
Path4=14.23, 4.44 | CurveTo 17.19, 7, 15.5, 4.94, 16.5, 5.84 | LineTo 15.26, 7 | CurveTo 14.23, 4.44, 14.91, 5.84, 14.5, 4.93
Path5=6.09, 9 | LineTo 8.32, 9 | CurveTo 8.25, 10, 8.28, 9.33, 8.25, 9.66 | CurveTo 8.32, 11, 8.25, 10.34, 8.28, 10.67 | LineTo 6.09, 11 | CurveTo 6, 10, 6.03, 10.67, 6, 10.34 | CurveTo 6.09, 9, 6, 9.66, 6.03, 9.33
Path6=10.32, 9 | LineTo 13.68, 9 | CurveTo 13.75, 10, 13.72, 9.33, 13.75, 9.66 | CurveTo 13.68, 11, 13.75, 10.34, 13.72, 10.67 | LineTo 10.32, 11 | CurveTo 10.25, 10, 10.28, 10.67, 10.25, 10.34 | CurveTo 10.32, 9, 10.25, 9.66, 10.28, 9.33
Path7=15.68, 9 | LineTo 17.91, 9 | CurveTo 18, 10, 17.97, 9.33, 18, 9.66 | CurveTo 17.91, 11, 18, 10.34, 17.97, 10.67 | LineTo 15.68, 11 | CurveTo 15.75, 10, 15.72, 10.67, 15.75, 10.34 | CurveTo 15.68, 9, 15.75, 9.66, 15.72, 9.33
Path8=6.81, 13 | LineTo 8.74, 13 | CurveTo 9.77, 15.56, 9.09, 14.16, 9.5, 15.07 | CurveTo 6.81, 13, 8.5, 15.06, 7.5, 14.16
Path9=10.74, 13 | LineTo 13.26, 13 | CurveTo 12, 16, 12.74, 14.72, 12, 16 | CurveTo 10.74, 13, 12, 16, 11.26, 14.72
Path10=15.26, 13 | LineTo 17.19, 13 | CurveTo 14.23, 15.57, 16.5, 14.16, 15.5, 15.07 | CurveTo 15.26, 13, 14.5, 15.07, 14.91, 14.16 | ClosePath 1

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