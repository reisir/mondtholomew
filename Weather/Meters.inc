[MeterIcon]
Meter=Image
MeasureName=@CurrentIcon
DynamicVariables=1
Path=#@#Weather\[#IconStyle]\
W=(80 * #Scale#)

[WeatherBase]
FontFace=#FontFace1#
FontColor=#MainColor#
DynamicVariables=1
FontSize=(12 * #Scale#)
X=r
Y=R
StringAlign=Left
StringCase=Upper
AntiAlias=1
InlineSetting=Color | #AccentColor#,255
InlinePattern=(\d*)

[MeterLocation]
Meter=String
MeasureName=@LocationName
FontFace=#FontFace2#
MeterStyle=WeatherBase 
FontSize=(18 * #Scale#)
X=10R
Y=r

[MeterCurrentCond]
Meter=String
MeasureName=@CurrentConditions
MeterStyle=WeatherBase 

[MeterTemperature]
Meter=String
MeasureName=@CurrentTemperature
MeasureName2=@UnitsTemperature
MeterStyle=WeatherBase 
Text=" %1#Degrees#%2"
X=R
Y=r
