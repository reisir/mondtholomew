[ButtonBase]
DynamicVariables=1
SolidColor=0,0,0,1
Y=r
AntiAlias=1
FontSize=(16 * #Scale#)
FontColor=#CoverMainColor#
MouseOverAction=[!SetOption #CURRENTSECTION# FontColor  #CoverHoverColor#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# FontColor #CoverMainColor#][!UpdateMeter #CURRENTSECTION#][!Redraw]
Group=Mouse
Hidden=(1 - #MouseOver#)

[MeterPlayPause]
Meter=String
MeasureName=MeasureStateGlyph
StringAlign=Center
X=((#CoverWidth# / 2 * #Scale#))
Y=R
MeterStyle=ButtonBase | fas
LeftMouseUpAction=[!CommandMeasure #PlayerPlugin# "PlayPause"]

[MeterNext]
Meter=String
Text=#next#
MeterStyle=ButtonBase | fas
StringAlign=Left
X=([MeterPlayPause:X] + ([MeterPlayPause:W] * 1.5) + [#MediaButtonSpacing])
LeftMouseUpAction=[!CommandMeasure #PlayerPlugin# "Next"]

[MeterPrevious]
Meter=String
Text=#previous#
MeterStyle=ButtonBase | fas
StringAlign=Right
X=([MeterPlayPause:X] - ([MeterPlayPause:W] / 2) - [#MediaButtonSpacing])
LeftMouseUpAction=[!CommandMeasure #PlayerPlugin# "Previous"]
