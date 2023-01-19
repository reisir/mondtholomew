[MeasureRecycleBinFiles]
Measure=RecycleManager
Drives=ALL
RecycleType=COUNT
RegExpSubstitute=1
Substitute="^0$":"Empty","\d+":"Full"

[MeasureRecycleBinSize]
Measure=RecycleManager
Drives=ALL
RecycleType=SIZE
