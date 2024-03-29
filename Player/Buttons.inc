[ButtonBase]
DynamicVariables=1
SolidColor=0,0,0,1
Y=r
AntiAlias=1
FontSize=(16 * #Scale#)
FontColor=#PlayerMainColor#
MouseOverAction=[!SetOption #CURRENTSECTION# FontColor  #PlayerHoverColor#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# FontColor #PlayerMainColor#][!UpdateMeter #CURRENTSECTION#][!Redraw]

[MeterPlayPause]
Meter=String
MeasureName=MeasureStateGlyph
StringAlign=Center
X=([MeterBar:X] + ([MeterBar:W] / 2))
Y=R
MeterStyle=ButtonBase | fas
LeftMouseUpAction=[!CommandMeasure #PlayerPlugin# "PlayPause"]

[MeterNext]
Meter=String
Text=forward
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
