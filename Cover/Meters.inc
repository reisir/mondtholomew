[MeterCoverContainer]
Meter=Shape
Shape=Rectangle 0,0,(#CoverWidth# * #Scale#),(#CoverHeight# * #Scale#),(#CoverCornerRounding# * #Scale#) | Fill Color #FFFFFF | Stroke Color #FFFFFF | Extend Stroke, Outline
Stroke=
Outline=#CoverShapeModifiers#
DynamicVariables=1
X=(Ceil((#CoverOutlineWidth# * #Scale#) / 2))
Y=(Ceil((#CoverOutlineWidth# * #Scale#) / 2))

[MeterCover]
Meter=Image
MeasureName=MeasureCover
SolidColor=#MainColor#
W=[MeterCoverContainer:W]
H=[MeterCoverContainer:H]
PreserveAspectRatio=2
Container=MeterCoverContainer
DynamicVariables=1
Group=Cover | Mouse
ImageTint=(#MouseOver# = 0 ? #CoverTint# : #CoverTintOnHover#),(#MouseOver# = 0 ? #CoverTint# : #CoverTintOnHover#),(#MouseOver# = 0 ? #CoverTint# : #CoverTintOnHover#)

[MeterCoverOutline]
Meter=Shape
MeterStyle=MeterCoverContainer
Stroke=Stroke Color #CoverOutlineColor#
Outline=StrokeWidth (#CoverOutlineWidth# * #Scale#) | Fill Color 0,0,0,0 | #CoverShapeModifiers#
MouseOverAction=[!SetOption #CURRENTSECTION# Stroke "Stroke Color #CoverOutlineHoverColor#"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Stroke "Stroke Color #CoverOutlineColor#"][!UpdateMeter #CURRENTSECTION#][!Redraw]
