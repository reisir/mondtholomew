[ClockBase]
AntiAlias=1
StringAlign=Center
StringCase=Upper
DynamicVariables=1
FontColor=#MainColor#
FontFace=#FontFace1#
FontSize=(14 * #Scale#)
UpdateDivider=-1
Group=Time
Y=5R
X=([MeterDay:W]/2)

[MeterDay]
Meter=String
MeasureName=MeasureDay
Text="%1"
MeterStyle=ClockBase
StringAlign=Left
FontFace=#ClockFont#
FontSize=(40 * #Scale#)
InlineSetting=CharacterSpacing | (10 * #Scale#) | (10 * #Scale#)
X=0
Y=0

[MeterDate]
Meter=String
MeterStyle=ClockBase 
MeasureName=MeasureDate
Text="%1"

[MeterTime]
Meter=String
MeterStyle=ClockBase
MeasureName=MeasureTime
Text="- %1 -"
