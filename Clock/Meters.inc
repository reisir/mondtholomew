
[ClockBase]
DynamicVariables=1
FontColor=#MainColor#
FontFace=#FontFace1#
FontSize=(14 * #Scale#)

[MeterDay]
Meter=String
MeterStyle=ClockBase | ClockStyles
StringAlign=Left
FontFace=#ClockFont#
FontSize=(40 * #Scale#)
MeasureName=MeasureDay
InlineSetting=CharacterSpacing | (10 * #Scale#) | (10 * #Scale#)
Text="%1"
Y=0

[MeterDate]
Meter=String
MeterStyle=ClockBase | ClockStyles
MeasureName=MeasureDate
X=([MeterDay:W]/2)
DynamicVariables=1
Text="%1"
Y=5R

[Meter24hClock]
Meter=String
MeterStyle=ClockBase | ClockStyles
MeasureName=MeasureTime
X=([MeterDay:W]/2)
DynamicVariables=1
Text="- %1 -"
Y=5R
