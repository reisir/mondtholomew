[InfoBase]
DynamicVariables=1
SolidColor=0,0,0,1
FontSize=(14 * #Scale#)
FontColor=#PlayerMainColor#
StringAlign=Center
StringCase=#StringCase#
FontFace=#FontFace#
AntiAlias=1
Y=(5 * #Scale#)R
FontWeight=#FontWeight#

[MeterInfo]
Meter=String
MeasureName=MeasureInfo
MeterStyle=InfoBase 
X=([MeterBar:X] + ([MeterBar:W] / 2))
W=[MeterBar:W]
Y=(5 * #Scale#)R
ClipString=2
InlineSetting=#PlayerInfoInline#
InlinePattern=#PlayerInfoInlinePattern#
