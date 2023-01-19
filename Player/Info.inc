[MeasureInfoCombine]
Measure=String
MeasureName=MeasureArtist
MeasureName2=MeasureTitle
String=[MeasureArtist]#ArtistTitleSeparator#[MeasureTitle]
DynamicVariables=1
OnChangeAction=[!UpdateMeter MeterInfo][!Redraw]
RegExpSubstitute=1
Substitute="N\/A#ArtistTitleSeparator#$":"N/A"

[InfoBase]
DynamicVariables=1
SolidColor=0,0,0,1
FontSize=(10 * #Scale#)
FontColor=#MainColor#
StringAlign=Center
StringCase=Upper
FontFace=#FontFace2#
AntiAlias=1
Y=(5 * #SCALE#)R

[MeterInfo]
Meter=String
MeasureName=MeasureInfoCombine
MeterStyle=InfoBase 
X=([MeterBar:X] + ([MeterBar:W] / 2))
W=[MeterBar:W]
Y=(5 * #SCALE#)R
ClipString=2
UpdateDivider=-1
