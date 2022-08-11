[MeasureRecycleBin]
Measure=Plugin
Plugin=RecycleManager.dll
Drives=ALL
RecycleType=COUNT

[MeasureRecycleBinSize]
Measure=Plugin
Plugin=RecycleManager.dll
Drives=ALL
RecycleType=SIZE

[MeasureRecycleBinAction]
Measure=Calc
Formula=MeasureRecycleBin
IfAboveAction=[!HideMeter MeterIconEmpty][!ShowMeter MeterIconFull]
IfAboveValue=0
IfEqualAction=[!HideMeter MeterIconFull][!ShowMeter MeterIconEmpty]
IfEqualValue=0
