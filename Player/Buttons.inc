[MeasureStateButton]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=STATE
Substitute="0":"Play.png","1":"Pause.png","2":"Play.png"

[ButtonBase]
DynamicVariables=1
SolidColor=0,0,0,1
X=(8 * #Scale#)R
W=(32 * #Scale#)
Y=r
ImageTint=#AccentColor#

[MeterPlayPause]
Meter=Image
ImageName=#@#Player\[MeasureStateButton]
X=([MeterBar:X] + ([MeterBar:W] / 2) - (32 * #Scale# / 2))
Y=R
MeterStyle=ButtonBase 
LeftMouseUpAction=[!CommandMeasure "MeasureStateButton" "PlayPause"]

[MeterNext]
Meter=Image
ImageName=#@#Player\Next.png
MeterStyle=ButtonBase 
LeftMouseUpAction=[!CommandMeasure "MeasureStateButton" "Next"]

[MeterPrevious]
Meter=Image
ImageName=#@#Player\Previous.png
MeterStyle=ButtonBase 
X=((-32 * #Scale# * 2) + (-8 * 2 * #Scale#))r
LeftMouseUpAction=[!CommandMeasure "MeasureStateButton" "Previous"]
