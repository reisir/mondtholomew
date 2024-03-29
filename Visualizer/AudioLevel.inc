; Optimal AudioLevel setup
; Thanks to @kodikuu for the math

[Variables]
SkipBands=1

; Get the current audio devices sampling rate
[MeasureSamplingRate]
Measure=Plugin
Plugin=AudioLevel
Type=Format
RegExpSubstitute=1
Substitute="(Hz.*)$":"","(.*)":"#SamplingRateOverride#"
UpdateDivider=-1

[Audio]
Measure=Plugin
Plugin=AudioLevel
DynamicVariables=1
FFTSize=(Floor([MeasureSamplingRate] * #Accuracy# / #FPS#))
FFTOverlap=(Floor([MeasureSamplingRate] * (#Accuracy# - 1) / #FPS#))
FFTAttack=#FFTAttack#
FFTDecay=#FFTDecay#
Sensitivity=#Sensitivity#
Bands=(#Bands# + #SkipBands#)
FreqMin=#FreqMin#
FreqMax=#FreqMax#
OnUpdateAction=[!UpdateMeasureGroup Audio][!UpdateMeterGroup Bars][!Redraw]
