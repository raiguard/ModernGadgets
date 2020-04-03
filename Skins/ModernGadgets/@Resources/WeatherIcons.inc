; Vector icons
; Sources: https://materialdesignicons.com/ | https://erikflowers.github.io/weather-icons/
; ^(.*?) == (.*?)$  $1=$2

; UTILITIES
[Variables]
weatherIconScale=2
weatherIconCode0=tornado
weatherIconCode1=hurricane
weatherIconCode2=hurricane
weatherIconCode3=
weatherIconCode4=
weatherIconCode5=
weatherIconCode6=
weatherIconCode7=
weatherIconCode8=
weatherIconCode9=
weatherIconCode10=
weatherIconCode11=
weatherIconCode12=
weatherIconCode13=
weatherIconCode14=
weatherIconCode15=
weatherIconCode16=
weatherIconCode17=
weatherIconCode18=
weatherIconCode19=
weatherIconCode20=
weatherIconCode21=
weatherIconCode22=
weatherIconCode23=
weatherIconCode24=
weatherIconCode25=
weatherIconCode26=
weatherIconCode27=
weatherIconCode28=
weatherIconCode29=
weatherIconCode30=
weatherIconCode31=night-clear
weatherIconCode32=
weatherIconCode33=
weatherIconCode34=
weatherIconCode35=
weatherIconCode36=
weatherIconCode37=
weatherIconCode38=
weatherIconCode39=
weatherIconCode40=
weatherIconCode41=
weatherIconCode42=
weatherIconCode43=
weatherIconCode44=
weatherIconCode45=
weatherIconCode46=
weatherIconCode47=

; --------------------------------------------------
; WEATHER ICONS

[StyleWeatherIcon-hurricane]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Combine Shape1 | XOR Shape2 | Scale #weatherIconScale#,#weatherIconScale#,0,0
Path1=11.08, 14.53 | LineTo 11.08, 14.51 | CurveTo 11.08, 14.14, 11.07, 14.43, 11.08, 14.31 | CurveTo 11.18, 13.33, 11.09, 13.98, 11.12, 13.71 | CurveTo 11.43, 12.18, 11.24, 12.95, 11.32, 12.57 | CurveTo 11.94, 10.83, 11.54, 11.79, 11.71, 11.34 | CurveTo 12.76, 9.39, 12.17, 10.32, 12.44, 9.84 | CurveTo 14.02, 8, 13.08, 8.94, 13.5, 8.47 | CurveTo 15.75, 6.76, 14.54, 7.53, 15.12, 7.11 | CurveTo 16.24, 6.7, 15.91, 6.67, 16.07, 6.65 | CurveTo 16.62, 7.01, 16.41, 6.75, 16.54, 6.85 | CurveTo 16.68, 7.51, 16.71, 7.17, 16.73, 7.33 | CurveTo 16.38, 7.9, 16.63, 7.68, 16.53, 7.82 | CurveTo 13.35, 10.95, 15.07, 8.62, 14.06, 9.63 | CurveTo 14.98, 10.57, 13.89, 10.7, 14.43, 10.57 | CurveTo 17.75, 11.72, 16.05, 10.57, 16.98, 10.95 | CurveTo 18.9, 14.48, 18.52, 12.49, 18.9, 13.41 | CurveTo 18.9, 14.72, 18.9, 14.56, 18.9, 14.64 | CurveTo 18.86, 15.24, 18.9, 14.8, 18.88, 14.97 | CurveTo 18.75, 16.01, 18.84, 15.51, 18.8, 15.76 | CurveTo 18.52, 16.94, 18.7, 16.26, 18.62, 16.57 | CurveTo 18.14, 18, 18.41, 17.31, 18.29, 17.67 | CurveTo 17.56, 19.1, 17.99, 18.33, 17.8, 18.7 | CurveTo 16.75, 20.22, 17.32, 19.5, 17.05, 19.87 | CurveTo 15.67, 21.27, 16.45, 20.57, 16.09, 20.92 | CurveTo 14.28, 22.22, 15.24, 21.62, 14.78, 21.94 | CurveTo 13.97, 22.3, 14.19, 22.28, 14.08, 22.3 | CurveTo 13.39, 21.95, 13.71, 22.3, 13.52, 22.18 | CurveTo 13.33, 21.46, 13.3, 21.79, 13.28, 21.63 | CurveTo 13.64, 21.08, 13.38, 21.29, 13.48, 21.16 | CurveTo 16.7, 18, 14.98, 20.33, 16, 19.3 | CurveTo 14.99, 18.38, 16.16, 18.26, 15.59, 18.38 | CurveTo 13.05, 17.86, 14.3, 18.38, 13.65, 18.21 | CurveTo 11.62, 16.45, 12.45, 17.52, 11.98, 17.05 | CurveTo 11.08, 14.53, 11.27, 15.87, 11.09, 15.23 | ClosePath 1
Path2=12.78, 14.48 | CurveTo 13.43, 16.05, 12.78, 15.09, 13, 15.61 | CurveTo 14.99, 16.7, 13.86, 16.48, 14.38, 16.7 | CurveTo 16.48, 16.13, 15.56, 16.7, 16.05, 16.51 | CurveTo 17.21, 14.72, 16.9, 15.75, 17.14, 15.28 | LineTo 17.22, 14.49 | CurveTo 17.23, 14.44, 17.22, 14.47, 17.22, 14.45 | CurveTo 16.57, 12.92, 17.22, 13.84, 17, 13.33 | CurveTo 15, 12.3, 16.14, 12.5, 15.61, 12.3 | CurveTo 13.54, 12.84, 14.44, 12.3, 13.96, 12.48 | CurveTo 12.81, 14.2, 13.12, 13.2, 12.88, 13.66 | LineTo 12.79, 14.45 | LineTo 12.79, 14.48 | ClosePath 1

[StyleWeatherIcon-night-clear]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Combine Shape1 | XOR Shape2 | Scale #weatherIconScale#,#weatherIconScale#,0,0
Path1=7.91, 14.48 | CurveTo 8.47, 11.73, 7.91, 13.52, 8.1, 12.61 | CurveTo 9.98, 9.47, 8.84, 10.85, 9.35, 10.1 | CurveTo 12.25, 7.95, 10.61, 8.84, 11.37, 8.33 | CurveTo 15, 7.38, 13.13, 7.57, 14.05, 7.38 | LineTo 16.14, 7.38 | CurveTo 16.37, 7.66, 16.3, 7.42, 16.37, 7.52 | LineTo 16.42, 8.54 | CurveTo 17.79, 11.78, 16.46, 9.81, 16.91, 10.89 | CurveTo 20.98, 13.2, 18.67, 12.67, 19.73, 13.15 | LineTo 21.8, 13.27 | CurveTo 22.04, 13.5, 21.96, 13.27, 22.04, 13.35 | LineTo 22.04, 14.48 | CurveTo 21.11, 18.04, 22.05, 15.76, 21.74, 16.95 | CurveTo 18.54, 20.63, 20.48, 19.13, 19.63, 19.99 | CurveTo 14.99, 21.58, 17.46, 21.26, 16.27, 21.58 | CurveTo 12.21, 21.02, 14.02, 21.58, 13.09, 21.39 | CurveTo 9.95, 19.51, 11.33, 20.65, 10.58, 20.14 | CurveTo 8.45, 17.25, 9.32, 18.88, 8.82, 18.12 | CurveTo 7.91, 14.48, 8.1, 16.37, 7.91, 15.45 | ClosePath 1
Path2=9.74, 14.48 | CurveTo 10.19, 16.64, 9.74, 15.24, 9.89, 15.96 | CurveTo 11.38, 18.34, 10.49, 17.31, 10.89, 17.88 | CurveTo 13.07, 19.42, 11.87, 18.8, 12.43, 19.16 | CurveTo 15.01, 19.82, 13.7, 19.69, 14.35, 19.82 | CurveTo 16.77, 19.48, 15.59, 19.82, 16.18, 19.71 | CurveTo 18.42, 18.52, 17.36, 19.25, 17.91, 18.93 | CurveTo 19.73, 16.95, 18.93, 18.11, 19.36, 17.59 | CurveTo 20.44, 14.86, 20.1, 16.31, 20.33, 15.62 | CurveTo 16.52, 12.76, 18.81, 14.52, 17.5, 13.82 | CurveTo 14.82, 9.02, 15.54, 11.7, 14.97, 10.46 | CurveTo 12.21, 9.9, 13.86, 9.08, 13, 9.37 | CurveTo 10.39, 11.92, 11.43, 10.43, 10.82, 11.1 | CurveTo 9.74, 14.48, 9.96, 12.74, 9.74, 13.59 | ClosePath 1

[StyleWeatherIcon-thunderstorm]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Path Path3 | StrokeWidth 0
Shape4=Combine Shape1 | XOR Shape2 | XOR Shape3 | Scale #weatherIconScale#,#weatherIconScale#,0,0
Path1=4.63, 16.91 | CurveTo 5.62, 19.88, 4.63, 18.02, 4.96, 19.01 | CurveTo 8.2, 21.67, 6.28, 20.75, 7.14, 21.35 | LineTo 7.54, 23.35 | CurveTo 7.68, 23.57, 7.51, 23.49, 7.56, 23.57 | LineTo 9.81, 23.57 | LineTo 8.83, 27.87 | LineTo 9.11, 27.87 | LineTo 13.03, 22.12 | CurveTo 13.04, 21.98, 13.07, 22.08, 13.07, 22.03 | CurveTo 12.89, 21.91, 13.01, 21.93, 12.96, 21.91 | LineTo 10.71, 21.91 | LineTo 13.19, 17.27 | CurveTo 13.05, 17.05, 13.26, 17.13, 13.21, 17.05 | LineTo 10.11, 17.05 | CurveTo 9.88, 17.2, 10.02, 17.05, 9.94, 17.1 | LineTo 8.81, 20.07 | CurveTo 7.04, 18.91, 8.1, 19.89, 7.51, 19.5 | CurveTo 6.34, 16.9, 6.57, 18.32, 6.34, 17.65 | CurveTo 7.19, 14.73, 6.34, 16.07, 6.62, 15.35 | CurveTo 9.29, 13.66, 7.76, 14.12, 8.46, 13.76 | LineTo 9.82, 13.59 | CurveTo 10.02, 13.41, 9.95, 13.59, 10.02, 13.53 | LineTo 10.09, 12.9 | CurveTo 11.46, 10.18, 10.2, 11.82, 10.65, 10.91 | CurveTo 14.31, 9.08, 12.27, 9.45, 13.22, 9.08 | CurveTo 17.16, 10.18, 15.4, 9.08, 16.35, 9.45 | CurveTo 18.56, 12.9, 17.98, 10.91, 18.44, 11.82 | LineTo 18.63, 13.48 | CurveTo 18.81, 13.65, 18.63, 13.59, 18.69, 13.65 | LineTo 20.41, 13.65 | CurveTo 22.73, 14.6, 21.32, 13.65, 22.09, 13.97 | CurveTo 23.7, 16.88, 23.37, 15.23, 23.7, 16 | CurveTo 22.81, 19.09, 23.7, 17.73, 23.4, 18.47 | CurveTo 20.61, 20.13, 22.22, 19.71, 21.48, 20.06 | CurveTo 20.41, 20.31, 20.48, 20.13, 20.41, 20.19 | LineTo 20.41, 21.68 | CurveTo 20.61, 21.85, 20.41, 21.79, 20.48, 21.85 | CurveTo 24, 20.34, 21.94, 21.81, 23.07, 21.3 | CurveTo 25.39, 16.89, 24.93, 19.38, 25.39, 18.23 | CurveTo 24.72, 14.4, 25.39, 15.99, 25.17, 15.16 | CurveTo 22.91, 12.6, 24.28, 13.64, 23.67, 13.04 | CurveTo 20.41, 11.94, 22.14, 12.16, 21.31, 11.94 | LineTo 20.1, 11.94 | CurveTo 17.99, 8.68, 19.77, 10.61, 19.06, 9.52 | CurveTo 14.31, 7.41, 16.92, 7.84, 15.69, 7.41 | CurveTo 10.55, 8.72, 12.9, 7.41, 11.64, 7.85 | CurveTo 8.45, 12.08, 9.46, 9.59, 8.76, 10.71 | CurveTo 5.71, 13.81, 7.34, 12.34, 6.43, 12.91 | CurveTo 4.63, 16.91, 4.99, 14.71, 4.63, 15.76 | ClosePath 1
Path2=12.77, 26.62 | CurveTo 13.35, 27.39, 12.77, 27.01, 12.96, 27.27 | CurveTo 13.46, 27.4, 13.36, 27.39, 13.4, 27.39 | CurveTo 13.6, 27.41, 13.52, 27.41, 13.57, 27.41 | CurveTo 14.09, 27.26, 13.77, 27.41, 13.93, 27.36 | CurveTo 14.41, 26.78, 14.25, 27.16, 14.36, 27 | LineTo 16.66, 18.09 | CurveTo 16.59, 17.44, 16.72, 17.85, 16.7, 17.64 | CurveTo 16.09, 17.05, 16.48, 17.25, 16.32, 17.12 | CurveTo 15.83, 17.02, 15.92, 17.03, 15.83, 17.02 | CurveTo 15.36, 17.17, 15.67, 17.02, 15.51, 17.07 | CurveTo 15.05, 17.62, 15.21, 17.27, 15.1, 17.42 | LineTo 12.79, 26.34 | CurveTo 12.77, 26.62, 12.78, 26.44, 12.77, 26.53 | ClosePath 1
Path3=16.93, 23.56 | CurveTo 17.03, 23.94, 16.93, 23.69, 16.96, 23.82 | CurveTo 17.54, 24.38, 17.17, 24.16, 17.34, 24.31 | CurveTo 17.84, 24.43, 17.65, 24.41, 17.75, 24.43 | CurveTo 18.16, 24.35, 17.93, 24.43, 18.04, 24.41 | CurveTo 18.58, 23.78, 18.37, 24.26, 18.51, 24.07 | LineTo 20.02, 18.11 | CurveTo 20.07, 17.84, 20.05, 17.97, 20.07, 17.88 | CurveTo 19.91, 17.39, 20.07, 17.69, 20.02, 17.54 | CurveTo 19.45, 17.07, 19.8, 17.24, 19.65, 17.13 | CurveTo 19.19, 17.04, 19.28, 17.05, 19.19, 17.04 | CurveTo 18.72, 17.19, 19.02, 17.04, 18.86, 17.09 | CurveTo 18.42, 17.64, 18.58, 17.29, 18.48, 17.44 | LineTo 16.96, 23.34 | CurveTo 16.95, 23.45, 16.96, 23.36, 16.96, 23.39 | CurveTo 16.93, 23.56, 16.93, 23.5, 16.93, 23.53 | ClosePath 1

[StyleWeatherIcon-tornado]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Path Path3 | StrokeWidth 0
Shape4=Path Path4 | StrokeWidth 0
Shape5=Path Path5 | StrokeWidth 0
Shape6=Path Path6 | StrokeWidth 0
Shape7=Combine Shape1 | XOR Shape2 | XOR Shape3 | XOR Shape4 | XOR Shape5 | XOR Shape6 | Scale #weatherIconScale#,#weatherIconScale#,0,0
Path1=4.13, 15.19 | CurveTo 5.21, 16.96, 4.13, 15.88, 4.49, 16.47 | CurveTo 11.19, 18.35, 6.53, 17.89, 8.52, 18.35 | CurveTo 14.53, 18.04, 12.39, 18.35, 13.5, 18.25 | CurveTo 17.18, 16.94, 15.61, 17.81, 16.5, 17.44 | CurveTo 18.21, 15.18, 17.86, 16.44, 18.21, 15.86 | CurveTo 18.09, 14.56, 18.21, 14.97, 18.17, 14.77 | CurveTo 21.36, 13.18, 19.48, 14.22, 20.57, 13.76 | CurveTo 22.55, 11.18, 22.15, 12.6, 22.55, 11.93 | CurveTo 22.46, 10.58, 22.55, 10.99, 22.52, 10.79 | CurveTo 25.89, 7.3, 24.75, 9.77, 25.89, 8.68 | CurveTo 24.4, 4.96, 25.89, 6.42, 25.39, 5.64 | CurveTo 15.82, 3.01, 22.45, 3.66, 19.59, 3.01 | CurveTo 10.99, 3.48, 14.04, 3.01, 12.43, 3.17 | CurveTo 7.2, 4.98, 9.42, 3.8, 8.16, 4.3 | CurveTo 5.76, 7.31, 6.24, 5.66, 5.76, 6.44 | CurveTo 6.24, 8.73, 5.76, 7.83, 5.92, 8.3 | CurveTo 4.47, 11.19, 5.06, 9.4, 4.47, 10.22 | CurveTo 5.57, 13.17, 4.47, 11.94, 4.84, 12.6 | CurveTo 4.13, 15.19, 4.61, 13.73, 4.13, 14.4 | ClosePath 1
Path2=4.73, 19.69 | CurveTo 6.08, 21.41, 4.73, 20.42, 5.18, 21 | CurveTo 9.49, 22.03, 6.98, 21.82, 8.12, 22.03 | CurveTo 12.93, 21.41, 10.88, 22.03, 12.02, 21.82 | CurveTo 14.29, 19.69, 13.84, 21, 14.29, 20.42 | CurveTo 14.03, 19, 14.29, 19.42, 14.2, 19.19 | CurveTo 13.36, 18.72, 13.86, 18.81, 13.63, 18.72 | CurveTo 12.76, 18.95, 13.14, 18.72, 12.94, 18.8 | CurveTo 12.42, 19.52, 12.58, 19.1, 12.47, 19.3 | CurveTo 11.32, 19.95, 12.22, 19.68, 11.86, 19.82 | CurveTo 9.49, 20.15, 10.78, 20.08, 10.17, 20.15 | CurveTo 6.81, 19.68, 8.39, 20.15, 7.49, 19.99 | CurveTo 7.07, 19.08, 6.97, 19.52, 7.05, 19.32 | CurveTo 6.92, 18.46, 7.09, 18.84, 7.03, 18.63 | CurveTo 6.31, 18.06, 6.76, 18.25, 6.56, 18.11 | CurveTo 5.61, 18.19, 6.06, 18.01, 5.83, 18.06 | CurveTo 4.73, 19.69, 5.02, 18.6, 4.73, 19.09 | ClosePath 1
Path3=6.01, 15.19 | CurveTo 6.2, 15.01, 6.01, 15.18, 6.07, 15.12 | CurveTo 6.76, 14.67, 6.29, 14.92, 6.48, 14.81 | CurveTo 7.72, 14.32, 7.04, 14.53, 7.37, 14.42 | LineTo 7.84, 14.26 | CurveTo 13.51, 15.07, 9.46, 14.8, 11.35, 15.07 | CurveTo 16.09, 14.91, 14.46, 15.07, 15.32, 15.02 | LineTo 16.35, 15.14 | CurveTo 15.72, 15.64, 16.26, 15.3, 16.05, 15.46 | CurveTo 13.86, 16.21, 15.32, 15.85, 14.7, 16.05 | CurveTo 11.19, 16.46, 13.02, 16.37, 12.13, 16.46 | CurveTo 8.52, 16.21, 10.25, 16.46, 9.36, 16.38 | CurveTo 6.64, 15.64, 7.68, 16.04, 7.05, 15.85 | CurveTo 6.01, 15.19, 6.3, 15.5, 6.09, 15.35 | ClosePath 1
Path4=6.12, 23.61 | CurveTo 7.2, 25.07, 6.12, 24.24, 6.48, 24.73 | CurveTo 9.87, 25.58, 7.92, 25.41, 8.81, 25.58 | CurveTo 12.59, 25.07, 10.95, 25.58, 11.86, 25.41 | CurveTo 13.69, 23.61, 13.32, 24.73, 13.69, 24.24 | CurveTo 13.41, 22.94, 13.69, 23.36, 13.6, 23.13 | CurveTo 12.75, 22.65, 13.22, 22.75, 13, 22.65 | CurveTo 11.83, 23.37, 12.28, 22.65, 11.97, 22.89 | CurveTo 9.87, 23.74, 11.44, 23.61, 10.79, 23.74 | CurveTo 7.95, 23.37, 9.07, 23.74, 8.43, 23.62 | CurveTo 7.03, 22.65, 7.8, 22.89, 7.5, 22.65 | CurveTo 6.39, 22.93, 6.78, 22.65, 6.56, 22.74 | CurveTo 6.12, 23.61, 6.22, 23.12, 6.12, 23.34 | ClosePath 1
Path5=6.33, 11.19 | CurveTo 6.48, 10.91, 6.33, 11.11, 6.38, 11.02 | CurveTo 7.9, 10.03, 6.72, 10.61, 7.2, 10.31 | CurveTo 15.81, 11.57, 9.82, 11.06, 12.46, 11.57 | CurveTo 20.63, 11.1, 17.52, 11.57, 19.13, 11.41 | LineTo 20.63, 11.19 | CurveTo 20.35, 11.64, 20.63, 11.34, 20.54, 11.49 | CurveTo 18.06, 12.67, 19.94, 12, 19.18, 12.34 | CurveTo 13.5, 13.21, 16.85, 13.03, 15.33, 13.21 | CurveTo 8.93, 12.67, 11.66, 13.21, 10.14, 13.03 | CurveTo 6.61, 11.65, 7.77, 12.35, 7, 12.01 | CurveTo 6.33, 11.19, 6.42, 11.5, 6.33, 11.35 | ClosePath 1
Path6=7.63, 7.31 | CurveTo 7.98, 6.72, 7.63, 7.13, 7.75, 6.94 | CurveTo 10.66, 5.51, 8.43, 6.3, 9.33, 5.9 | CurveTo 15.8, 4.88, 12.09, 5.09, 13.8, 4.88 | CurveTo 20.99, 5.51, 17.81, 4.88, 19.54, 5.09 | CurveTo 23.67, 6.73, 22.34, 5.9, 23.23, 6.31 | CurveTo 24.01, 7.32, 23.89, 6.95, 24.01, 7.15 | CurveTo 23.67, 7.88, 24.01, 7.49, 23.9, 7.67 | CurveTo 20.99, 9.11, 23.23, 8.3, 22.34, 8.71 | CurveTo 15.8, 9.74, 19.54, 9.53, 17.82, 9.74 | CurveTo 10.66, 9.11, 13.8, 9.74, 12.08, 9.53 | CurveTo 7.98, 7.87, 9.32, 8.71, 8.42, 8.3 | CurveTo 7.63, 7.31, 7.75, 7.66, 7.63, 7.48 | ClosePath 1