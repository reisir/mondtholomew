[MeasureRecycleBin]
Measure=RecycleManager
Drives=ALL
RecycleType=COUNT

[MeasureRecycleBinSize]
Measure=RecycleManager
Drives=ALL
RecycleType=SIZE

[MeasureRecycleBinAction]
Measure=Calc
Formula=MeasureRecycleBin
IfAboveAction=[!HideMeter MeterIconEmpty][!ShowMeter MeterIconFull]
IfAboveValue=0
IfEqualAction=[!HideMeter MeterIconFull][!ShowMeter MeterIconEmpty]
IfEqualValue=0
