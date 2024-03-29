[BarMaxWidth]
Measure=Calc
Formula=((#PlayerMaxWidth# * #Scale#) - ([dummy:W] * 2) - (#Padding# * 2))
DynamicVariables=1

[BarInfoBase]
FontColor=#PlayerMainColor#
SolidColor=0,0,0,1
DynamicVariables=1
Y=(9 * #Scale#)
FontFace=#FontFace#
FontSize=(10 * #Scale#)
InlineSetting=CharacterSpacing | (-10 * #Scale#) | (-10 * #Scale#) | (6 * #Scale#)
AntiAlias=1
FontWeight=#FontWeight#

; sizing helper for non-monospace fonts
[dummy]
Meter=String
MeterStyle=BarInfoBase
Text=-00:00
FontColor=255,0,0,0

; Calculate bar width
[barw]
Measure=Calc
Formula=([MeasureProgress:%] / 100 * [BarMaxWidth])
DynamicVariables=1

[MeterLeftInfo]
Meter=String
MeasureName=Measure[#PlayerLeft]
MeterStyle=BarInfoBase
Text="%1"
W=[dummy:W]
X=[dummy:W]
StringAlign=Right

[MeterBar]
Meter=Shape
X=#Padding#r
Y=(15 * #Scale#)
Shape=Line 0,(5 * #Scale# / 2),[BarMaxWidth],(5 * #Scale# / 2) | Extend Defaults | Stroke Color #ProgressLineBackgroundColor# | StrokeWidth (1 * #Scale#) | Extend StrokeDefaults
Shape2=Line 0,(5 * #Scale# / 2),([barw]),(5 * #Scale# / 2) | StrokeWidth (5 * #Scale#) | Stroke Color #PlayerMainColor# | Extend StrokeDefaults | Fill Color #ProgressLineColor#
Shape3=Ellipse ([barw]),(5 * #Scale# / 2),(10 * #Scale#) | Extend Defaults | Fill Color #ProgressDotHaloColor# 
Shape4=Ellipse ([barw]),(5 * #Scale# / 2),(4 * #Scale#) | Extend Defaults | Fill Color #ProgressDotColor# 
StrokeDefaults=StrokeStartCap Round | StrokeEndCap Round
Defaults=StrokeWidth 0
DynamicVariables=1

[MeterRightInfo]
Meter=String
MeasureName=Measure[#PlayerRight]
MeterStyle=BarInfoBase 
X=#Padding#R
W=[dummy:W]

[MeterSeek]
Meter=Image
W=([BarMaxWidth] + (#SeekBarPadding# * 2))
H=(10 * #Scale#)
X=([MeterBar:X] - #SeekBarPadding#)
Y=([MeterBar:Y] - (3 * #Scale#))
DynamicVariables=1
LeftMouseUpAction=[!CommandMeasure #PlayerPlugin# "SetPosition [&MeasureSeekPercentage]"]

[BarModuleAnchor]
Meter=Image
X=0
Y=(25 * #Scale#)
DynamicVariables=1
