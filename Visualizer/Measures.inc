[MeasureBandFactory]
Measure=Script
ScriptFile=#@#Factory.lua
IncFile=BandMeasures.inc
Number=#Bands#
SectionName=MeasureBand%%
Option0=Measure
Value0=Plugin
Option1=Plugin
Value1=[#Plugin[#EnableAudioLevelBeta]]
Option2=Parent
Value2=Audio
Option3=Type
Value3=Band
Option4=BandIdx
Value4={%% + 1}
Option5=Group
Value5=Audio
Option6=UpdateDivider
Value6=([#EnableAudioLevelBeta] = 1 ? -1 : 1)
Option7=AverageSize
Value7=(#*SmoothnessLevel*#)

[MeterBandFactory]
Measure=Script
ScriptFile=#@#Factory.lua
IncFile=BandMeters.inc
Number=#Bands#
SectionName=%%
Option0=Meter
Value0=Shape
Option1=MeterStyle
Value1=BarStyle
Option2=Group
Value2=Bars
