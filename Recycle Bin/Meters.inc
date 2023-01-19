[RecycleTextBase]
AntiAlias=1
AutoScale=1
NumOfDecimals=0
StringAlign=Right
StringCase=Upper
FontFace=#FontFace1#
FontColor=#MainColor#
FontSize=(12 * #Scale#)
InlineSetting=Color | #AccentColor#,255
InlinePattern=(\d*)
DynamicVariables=1
Y=R

[MeterRecycleBinText]
Meter=String
MeterStyle=RecycleTextBase 
StringAlign=Left
FontFace=#FontFace2#
FontSize=(18 * #Scale#)
Text=#RecycleBin#
Y=0

[MeterFileCount]
Meter=String
MeterStyle=RecycleTextBase 
Text=#Files# [MeasureRecycleBinFiles:]
X=R

[MeterSize]
Meter=String
MeterStyle=RecycleTextBase 
MeasureName=MeasureRecycleBinSize
Text=#Size# %1B
X=r

[MeterIcon]
Meter=Image
MeasureName=MeasureRecycleBinFiles
ImageName=#@#Bin\%1.png
W=(80 * #Scale#)
DynamicVariables=1
ImageTint=#AccentColor#
X=r
