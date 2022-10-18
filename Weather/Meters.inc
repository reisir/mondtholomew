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

[MeterLocation]
Meter=String
MeasureName=@LocationName
FontFace=#FontFace2#
MeterStyle=WeatherBase | WeatherStyles
FontSize=(18 * #Scale#)
X=10R
Y=r

[MeterCurrentCond]
Meter=String
MeasureName=@CurrentConditions
MeterStyle=WeatherBase | WeatherStyles

[MeterTemperature]
Meter=String
MeasureName=@CurrentTemperature
MeasureName2=@UnitsTemperature
MeterStyle=WeatherBase | WeatherStyles
Text=" %1#Degrees#%2"
X=R
Y=r
