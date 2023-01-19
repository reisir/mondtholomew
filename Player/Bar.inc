[DurationBase]
FontColor=#MainColor#
SolidColor=0,0,0,1
DynamicVariables=1
Y=(9 * #Scale#)
FontFace=#FontFace1#
FontSize=(10 * #Scale#)
AntiAlias=1

; sizing helper for non-monospace fonts
[dummy]
Meter=String
MeterStyle=DurationBase
Text=-00:00
DynamicVariables=1
FontColor=255,0,0,0

; Calculate bar width
[barw]
Measure=Calc
Formula=([MeasureProgress:%] / 100 * ((#MaxWidth# * #Scale#) - ([dummy:W] * 2) - (#Padding# * 2)))
DynamicVariables=1

[MeterDuration]
Meter=String
MeasureName=MeasureDuration
MeterStyle=DurationBase 
Text="%1"
W=[dummy:W]
X=[dummy:W]
StringAlign=Right

[MeterBar]
Meter=Shape
X=#Padding#r
Y=(15 * #Scale#)
; bg line
Shape=Line 0,(5 * #Scale# / 2),((#MaxWidth# * #Scale#) - ([dummy:W] * 2) - (#Padding# * 2)),(5 * #Scale# / 2) | Extend Defaults | Stroke Color #MainColor#,30 | StrokeWidth (1 * #Scale#) | Extend StrokeDefaults
; progress line
Shape2=Line 0,(5 * #Scale# / 2),[barw],(5 * #Scale# / 2) | StrokeWidth (5 * #Scale#) | Stroke Color #MainColor# | Extend StrokeDefaults
; dot halo
Shape3=Ellipse [barw],(5 * #Scale# / 2),(10 * #Scale#) | Extend Defaults | Fill Color #MainColor#,50 
; dot 
Shape4=Ellipse [barw],(5 * #Scale# / 2),(4 * #Scale#) | Extend Defaults
StrokeDefaults=StrokeStartCap Round | StrokeEndCap Round
Defaults=StrokeWidth 0 | Fill Color #MainColor#
DynamicVariables=1

[MeterPosition]
Meter=String
MeasureName=MeasureMinutesRemaining
MeasureName2=MeasureSecondsRemaining
MeterStyle=DurationBase 
X=#Padding#R
W=[dummy:W]
Text="-%1:%2"
