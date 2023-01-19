; Styles and background
[AllStyle]
X=#Padding#
FontSize=11
FontColor=191,242,196,255
ClipString=2
ClipStringH=50
AntiAlias=1
DynamicVariables=1

[MeterBack]
Meter=Image
X=0
Y=0
W=#Width#
H=(82 + #Padding#)
SolidColor=#BackgroundColor#

; Controls

[MeterClose]
Meter=String
Group=Controls
MeterStyle=AllStyle
X=(#Width# - #Padding#)
Y=#Padding#
FontFace=Font Awesome 5 Free Solid
FontSize=16
FontColor=200,200,200,255
StringAlign=Right
Text=[\xf057]
MouseOverAction=[!SetOption MeterClose FontColor "255,88,75,255"][!UpdateMeter *][!Redraw]
MouseLeaveAction=[!SetOption MeterClose FontColor "200,200,200,255"][!UpdateMeter *][!Redraw]
LeftMouseUpAction=[!DeactivateConfig]

; Search

[MeterSearchLocationLabel]
Meter=String
MeterStyle=AllStyle
Y=(#Padding# * 2.5)
FontColor=#Yellow#
FontSize=14
FontWeight=600
Text=Search For Location

[MeterSearchBox]
Meter=String
MeterStyle=AllStyle
Text=#InputSearch#
SolidColor=#Yellow#
StringAlign=LeftCenter
X=(#Padding#)
Y=(#Padding# * 1.5)R
Padding=5,0,0,0
W=(#Width# - (#Padding# * 3))
H=21
FontColor=0,0,0
LeftMouseUpAction=[!CommandMeasure "MeasureSearchInput" "ExecuteBatch 1"]

[MeasureSearchInput]
Measure=Plugin
Plugin=InputText
X=([MeterSearchBox:X] + 5)
Y=([MeterSearchBox:Y])
W=([MeterSearchBox:W] - 5)
H=([MeterSearchBox:H])
SolidColor=#Yellow#
FontColor=0,0,0,255
FontSize=11
DefaultValue=#InputSearch#
FocusDismiss=1
UpdateDivider=-1
Command1=[!WriteKeyValue Variables InputSearch "$UserInput$"][!Refresh]
