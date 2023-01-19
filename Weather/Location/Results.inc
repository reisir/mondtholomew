[Variables]
ItemWidth=(#Width# - (#Padding# * 3))

[ResultStyle]
X=#Padding#
AntiAlias=1
Hidden=1
W=#ItemWidth#
DynamicVariables=1
Y=r
FontSize=11
FontColor=255,219,179,255
Padding=5,5,5,5
SolidColor=47,47,47,255
ClipString=2
ClipStringH=33

[CodeStyle]
X=r
Y=R
W=#ItemWidth#
H=22
AntiAlias=1
Hidden=1
DynamicVariables=1
FontSize=11
FontWeight=600
Padding=5,5,5,5
SolidColor=47,47,47,255
FontColor=186,217,255,255
StringAlign=Left

[BackgroundStyle]
SolidColor=0,0,0,200
X=0
Hidden=1
Y=#Padding#R
W=#Width#
H=(22 + 33 + 40 - #Padding#)

; Results

[Background1]
Meter=Image
MeterStyle=BackgroundStyle
Group=Group1
[MeterName1]
Meter=String
Group=Group1
MeasureName=MeasureName1
MeterStyle=ResultStyle
LeftMouseUpAction=[!WriteKeyValue Variables Latitude "[&MeasureLatitude1]" "#FileToWrite#"][!WriteKeyValue Variables Longitude "[&MeasureLongitude1]" "#FileToWrite#"][!WriteKeyValue Variables InputSearch "#InputSearch#"][!Refresh "#ConfigToRefresh#"][!DeactivateConfig]
[MeterCode1]
Meter=String
Group=Group1
MeasureName=MeasureLatitude1
MeasureName2=MeasureLongitude1
MeterStyle=CodeStyle
LeftMouseUpAction=[!WriteKeyValue Variables Latitude "[&MeasureLatitude2]" "#FileToWrite#"][!WriteKeyValue Variables Longitude "[&MeasureLongitude2]" "#FileToWrite#"][!WriteKeyValue Variables InputSearch "#InputSearch#"][!Refresh "#ConfigToRefresh#"][!DeactivateConfig]

[Background2]
Meter=Image
MeterStyle=BackgroundStyle
Group=Group2
[MeterName2]
Meter=String
Group=Group2
MeasureName=MeasureName2
MeterStyle=ResultStyle
LeftMouseUpAction=[!WriteKeyValue Variables Latitude "[&MeasureLatitude2]" "#FileToWrite#"][!WriteKeyValue Variables Longitude "[&MeasureLongitude2]" "#FileToWrite#"][!WriteKeyValue Variables InputSearch "#InputSearch#"][!Refresh "#ConfigToRefresh#"][!DeactivateConfig]
[MeterCode2]
Meter=String
Group=Group2
MeasureName=MeasureLatitude2
MeasureName2=MeasureLongitude2
MeterStyle=CodeStyle
Text=%1,%2
LeftMouseUpAction=[!WriteKeyValue Variables Latitude "[&MeasureLatitude2]" "#FileToWrite#"][!WriteKeyValue Variables Longitude "[&MeasureLongitude2]" "#FileToWrite#"][!WriteKeyValue Variables InputSearch "#InputSearch#"][!Refresh "#ConfigToRefresh#"][!DeactivateConfig]

[Background3]
Meter=Image
MeterStyle=BackgroundStyle
Group=Group3
[MeterName3]
Meter=String
Group=Group3
MeasureName=MeasureName3
MeterStyle=ResultStyle
LeftMouseUpAction=[!WriteKeyValue Variables Latitude "[&MeasureLatitude3]" "#FileToWrite#"][!WriteKeyValue Variables Longitude "[&MeasureLongitude3]" "#FileToWrite#"][!WriteKeyValue Variables InputSearch "#InputSearch#"][!Refresh "#ConfigToRefresh#"][!DeactivateConfig]
[MeterCode3]
Meter=String
Group=Group3
MeasureName=MeasureLatitude3
MeasureName2=MeasureLongitude3
MeterStyle=CodeStyle
Text=%1,%2
LeftMouseUpAction=[!WriteKeyValue Variables Latitude "[&MeasureLatitude3]" "#FileToWrite#"][!WriteKeyValue Variables Longitude "[&MeasureLongitude3]" "#FileToWrite#"][!WriteKeyValue Variables InputSearch "#InputSearch#"][!Refresh "#ConfigToRefresh#"][!DeactivateConfig]

[Background4]
Meter=Image
MeterStyle=BackgroundStyle
Group=Group4
[MeterName4]
Meter=String
Group=Group4
MeasureName=MeasureName4
MeterStyle=ResultStyle
LeftMouseUpAction=[!WriteKeyValue Variables Latitude "[&MeasureLatitude4]" "#FileToWrite#"][!WriteKeyValue Variables Longitude "[&MeasureLongitude4]" "#FileToWrite#"][!WriteKeyValue Variables InputSearch "#InputSearch#"][!Refresh "#ConfigToRefresh#"][!DeactivateConfig]
[MeterCode4]
Meter=String
Group=Group4
MeasureName=MeasureLatitude4
MeasureName2=MeasureLongitude4
MeterStyle=CodeStyle
Text=%1,%2
LeftMouseUpAction=[!WriteKeyValue Variables Latitude "[&MeasureLatitude4]" "#FileToWrite#"][!WriteKeyValue Variables Longitude "[&MeasureLongitude4]" "#FileToWrite#"][!WriteKeyValue Variables InputSearch "#InputSearch#"][!Refresh "#ConfigToRefresh#"][!DeactivateConfig]

[Background5]
Meter=Image
MeterStyle=BackgroundStyle
Group=Group5
[MeterName5]
Meter=String
Group=Group5
MeasureName=MeasureName5
MeterStyle=ResultStyle
LeftMouseUpAction=[!WriteKeyValue Variables Latitude "[&MeasureLatitude5]" "#FileToWrite#"][!WriteKeyValue Variables Longitude "[&MeasureLongitude5]" "#FileToWrite#"][!WriteKeyValue Variables InputSearch "#InputSearch#"][!Refresh "#ConfigToRefresh#"][!DeactivateConfig]
[MeterCode5]
Meter=String
Group=Group5
MeasureName=MeasureLatitude5
MeasureName2=MeasureLongitude5
MeterStyle=CodeStyle
Text=%1,%2
LeftMouseUpAction=[!WriteKeyValue Variables Latitude "[&MeasureLatitude5]" "#FileToWrite#"][!WriteKeyValue Variables Longitude "[&MeasureLongitude5]" "#FileToWrite#"][!WriteKeyValue Variables InputSearch "#InputSearch#"][!Refresh "#ConfigToRefresh#"][!DeactivateConfig]

[Background6]
Meter=Image
MeterStyle=BackgroundStyle
Group=Group6
[MeterName6]
Meter=String
Group=Group6
MeasureName=MeasureName6
MeterStyle=ResultStyle
LeftMouseUpAction=[!WriteKeyValue Variables Latitude "[&MeasureLatitude6]" "#FileToWrite#"][!WriteKeyValue Variables Longitude "[&MeasureLongitude6]" "#FileToWrite#"][!WriteKeyValue Variables InputSearch "#InputSearch#"][!Refresh "#ConfigToRefresh#"][!DeactivateConfig]
[MeterCode6]
Meter=String
Group=Group6
MeasureName=MeasureLatitude6
MeasureName2=MeasureLongitude6
MeterStyle=CodeStyle
Text=%1,%2
LeftMouseUpAction=[!WriteKeyValue Variables Latitude "[&MeasureLatitude6]" "#FileToWrite#"][!WriteKeyValue Variables Longitude "[&MeasureLongitude6]" "#FileToWrite#"][!WriteKeyValue Variables InputSearch "#InputSearch#"][!Refresh "#ConfigToRefresh#"][!DeactivateConfig]

[Background7]
Meter=Image
MeterStyle=BackgroundStyle
Group=Group7
[MeterName7]
Meter=String
Group=Group7
MeasureName=MeasureName7
MeterStyle=ResultStyle
LeftMouseUpAction=[!WriteKeyValue Variables Latitude "[&MeasureLatitude7]" "#FileToWrite#"][!WriteKeyValue Variables Longitude "[&MeasureLongitude7]" "#FileToWrite#"][!WriteKeyValue Variables InputSearch "#InputSearch#"][!Refresh "#ConfigToRefresh#"][!DeactivateConfig]
[MeterCode7]
Meter=String
Group=Group7
MeasureName=MeasureLatitude7
MeasureName2=MeasureLongitude7
MeterStyle=CodeStyle
Text=%1,%2
LeftMouseUpAction=[!WriteKeyValue Variables Latitude "[&MeasureLatitude7]" "#FileToWrite#"][!WriteKeyValue Variables Longitude "[&MeasureLongitude7]" "#FileToWrite#"][!WriteKeyValue Variables InputSearch "#InputSearch#"][!Refresh "#ConfigToRefresh#"][!DeactivateConfig]
