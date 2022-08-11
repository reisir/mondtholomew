[DurationBase]
FontColor=#MainColor#
SolidColor=0,0,0,1
DynamicVariables=1
Y=(9 * #Scale#)

[MeterDuration]
Meter=String
MeasureName=MeasureDuration
MeterStyle=DurationBase | DurationStyles
Text="%1"
W=[dummy:W]

[barw]
Measure=Calc
Formula=([MeasureProgress:%] / 100 * ((#MaxWidth# * #Scale#) - ([dummy:W] * 2) - (#Padding# * 2)))
DynamicVariables=1

[MeterBar]
Meter=Shape
X=#Padding#R
Y=(15 * #Scale#)
; bg line
Shape=Line 0,(5 * #Scale# / 2),((#MaxWidth# * #Scale#) - ([dummy:W] * 2) - (#Padding# * 2)),(5 * #Scale# / 2) | Extend Defaults | Stroke Color #MainColor#,30 | StrokeWidth (1 * #Scale#) | Extend StrokeDefaults
; progress line
Shape2=Line 0,(5 * #Scale# / 2),[barw],(5 * #Scale# / 2) | StrokeWidth (5 * #Scale#) | Stroke Color #MainColor# | Extend StrokeDefaults
; dot
Shape3=Ellipse [barw],(5 * #Scale# / 2),(4 * #Scale#) | Extend Defaults
; dot halo
Shape4=Ellipse [barw],(5 * #Scale# / 2),(10 * #Scale#) | Extend Defaults | Fill Color #MainColor#,50 
DynamicVariables=1
StrokeDefaults=StrokeStartCap Round | StrokeEndCap Round
Defaults=StrokeWidth 0 | Fill Color #MainColor#

[MeterPosition]
Meter=String
MeasureName=MeasureMinutesRemaining
MeasureName2=MeasureSecondsRemaining
MeterStyle=DurationBase | DurationStyles
X=#Padding#R
W=[dummy2:W]
Text="-%1:%2"
