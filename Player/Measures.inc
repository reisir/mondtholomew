[Variables]
MouseX=0

[MeasureStart]
Measure=String
String=00:00

[MeasureInfo]
Measure=String
String=[MeasureArtist][ArtistTitleSeparator][MeasureTitle]
DynamicVariables=1
Group=State

[MeasureMouse]
Measure=Plugin
Plugin=Mouse
MouseMoveAction=[!SetVariable MouseX $mouseX$]

[MeasureSeekPercentage]
Measure=Calc
Formula=(Clamp((#MouseX# - [MeterSeek:X] - #SeekBarPadding#) / Max([MeterSeek:W] - (#SeekBarPadding# * 2),1),0,1) * 100)
MinValue=0
MaxValue=100
DynamicVariables=1
