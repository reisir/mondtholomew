[RecycleTextBase]
FontFace=#FontFace1#
FontColor=#MainColor#
DynamicVariables=1
FontSize=(12 * #Scale#)
Y=R

[MeterRecycleBinText]
Meter=String
MeterStyle=RecycleTextBase | RecycleBinTextStyles
StringAlign=Left
FontFace=#FontFace2#
FontSize=(18 * #Scale#)
Text=#RecycleBin#
Y=0

[MeterRecycleBinInfoText]
Meter=String
MeterStyle=RecycleTextBase | RecycleBinTextStyles
MeasureName=MeasureRecycleBin
X=R
Text=#Files# %1

[MeterRecycleSize]
Meter=String
MeterStyle=RecycleTextBase | RecycleBinTextStyles
MeasureName=MeasureRecycleBinSize
X=r
Text=#Size# %1B

;-------------------------------------------------------------
;-------------------------------------------------------------

[RecycleIconAlignment]
W=(80 * #Scale#)
DynamicVariables=1
X=r

[MeterIconEmpty]
Meter=Image
ImageName=#@#Bin\Empty.png
MeterStyle=RecycleIconAlignment | RecyleBinIconStyles

[MeterIconFull]
Meter=Image
ImageName=#@#Bin\Full.png
MeterStyle=RecycleIconAlignment | RecyleBinIconStyles
Hidden=1
