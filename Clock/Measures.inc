[MeasureDay]
Measure=Time
Format=#MeasureDayFormat#
FormatLocale=#LanguageCode#
OnChangeAction=[!UpdateMeterGroup Time][!UpdateMeasureGroup Time][!Redraw]

[MeasureDate]
Measure=Time
Format=#MeasureDateFormat#
FormatLocale=#LanguageCode#
OnChangeAction=[!UpdateMeter MeterDate][!Redraw]

[MeasureTime]
Measure=Time
Format=#MeasureTimeFormat#
FormatLocale=#LanguageCode#
OnChangeAction=[!UpdateMeter MeterTime][!Redraw]
