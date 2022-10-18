[InfoBase]
DynamicVariables=1
SolidColor=0,0,0,1
Text=%1

[MeterInfo]
Meter=String
MeasureName=MeasureArtist
MeasureName2=MeasureTitle
MeterStyle=InfoBase | InfoStyles
X=([MeterBar:X] + ([MeterBar:W] / 2))
W=[MeterBar:W]
Y=(5 * #SCALE#)R
DynamicVariables=1
ClipString=2
Text=%1#ArtistTitleSeparator#%2
