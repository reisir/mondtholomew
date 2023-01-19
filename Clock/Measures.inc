[MeasureDay]
Measure=Time
Format=%A
FormatLocale=#LanguageCode#
OnChangeAction=[!UpdateMeterGroup Time][!Redraw]

[MeasureDate]
Measure=Time
Format=%d  %B,  %Y
FormatLocale=#LanguageCode#
OnChangeAction=[!UpdateMeter MeterDate][!Redraw]

[MeasureTime]
Measure=Time
Format=#MeasureTimeFormat#
FormatLocale=#LanguageCode#
OnChangeAction=[!UpdateMeter MeterTime][!Redraw]
