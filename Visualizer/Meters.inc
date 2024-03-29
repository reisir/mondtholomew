[VisContainer]
Meter=Shape
Shape=Rectangle 0,0,((#Bands# * (#VisWidth# + #VisPaddingHorizontal#)) * #Scale#), ((#VisHeight# + #VisMinHeight#) * #Scale#) | Extend Defaults
Defaults=StrokeWidth 0 | Fill Color FFFFFF
DynamicVariables=1
UpdateDivider=-1

[BarStyle]
Shape=Rectangle 0,((#VisHeight# - (#VisHeight# * [&MeasureBand[#CURRENTSECTION]])) * #Scale#),(#VisWidth# * #Scale#),((#VisMinHeight# + (#VisHeight# * [&MeasureBand[#CURRENTSECTION]])) * #Scale#),(#VisRounding# * #Scale#), (#VisRounding# * #Scale#) | Extend Defaults, VisFade[#VisFade]
Defaults=StrokeWidth 0 
VisFade0=Fill Color #VisFillColor#
VisFade1=Fill LinearGradient Fade
Fade=#VisFadeDirection# | #VisFadeStartColor# ; #VisFadeStart# | #VisFadeEndColor# ; #VisFadeEnd#
DynamicVariables=1
Container=VisContainer
X=(#VisPaddingHorizontal# * #Scale#)R
Y=r
UpdateDivider=([#EnableAudioLevelBeta] = 1 ? -1 : 1)
