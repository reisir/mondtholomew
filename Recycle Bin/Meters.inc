[RecycleTextBase]
AntiAlias=1
AutoScale=1
NumOfDecimals=0
StringAlign=Right
StringCase=#StringCase#
FontFace=#FontFace#
FontColor=#BinMainColor#
FontWeight=#FontWeight#
FontSize=(12 * #Scale#)
InlineSetting=Color | #BinAccentColor#,255
InlinePattern=(\d*)
DynamicVariables=1
Y=R
LeftMouseUpAction=[shell:RecycleBinFolder]

[MeterRecycleBinText]
Meter=String
MeterStyle=RecycleTextBase 
StringAlign=Left
FontFace=#FontFace#
FontSize=(18 * #Scale#)
Text=#__RecycleBin#
Y=0

[MeterFileCount]
Meter=String
MeterStyle=RecycleTextBase 
Text=#__Files# [MeasureRecycleBinFiles:]
X=R

[MeterSize]
Meter=String
MeterStyle=RecycleTextBase 
MeasureName=MeasureRecycleBinSize
Text=#__Size# %1B
X=r

[MeterIcon]
Meter=Image
MeasureName=MeasureRecycleBinFiles
ImageName=#@#Images\%1.png
W=(80 * #Scale#)
DynamicVariables=1
ImageTint=#BinAccentColor#
X=r
LeftMouseUpAction=[shell:RecycleBinFolder]
