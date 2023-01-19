; -----------------------
; Measures
; -----------------------

[MeasureLocations]
Measure=WebParser
URL=https://nominatim.openstreetmap.org/search.php?q=#InputSearch#&format=json
Flags=Resync | NoCookies
UserAgent=Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:78.0) Gecko/20100101 Firefox/78.0
Header="Accept-Language: #Language#"
RegExp=(?siU)#Record##Record##Record##Record##Record##Record##Record##Record##Record##Record#
UpdateRate=86400
LogSubstringErrors=0
FinishAction=[!EnableMeasureGroup Children][!UpdateMeasureGroup Children][!ShowMeterGroup Controls][!Redraw]
; Disabled=1
;Debug=2
;Debug2File=#@#Weather\EntireSite.txt

[MeasureName1]
Measure=WebParser
Group=Children
Disabled=1
URL=[MeasureLocations]
StringIndex=3
Substitute="":"No results"

[MeasureLatitude1]
Measure=WebParser
Group=Children
Disabled=1
URL=[MeasureLocations]
StringIndex=1
RegExpSubstitute=1
Substitute="^(.*\.)([\d]{1,6}).*$":"\1\2","":"No results"

[MeasureLongitude1]
Measure=WebParser
Group=Children
Disabled=1
URL=[MeasureLocations]
StringIndex=2
RegExpSubstitute=1
Substitute="^(.*\.)([\d]{1,6}).*$":"\1\2"
IfMatch=^$
IfNotMatchAction=[!ShowMeterGroup Group1][!UpdateMeterGroup Group1][!Redraw]CodeStyle[!UpdateMeter *][!Redraw]

[MeasureName2]
Measure=WebParser
Group=Children
Disabled=1
URL=[MeasureLocations]
StringIndex=6

[MeasureLatitude2]
Measure=WebParser
Group=Children
Disabled=1
URL=[MeasureLocations]
StringIndex=4
RegExpSubstitute=1
Substitute="^(.*\.)([\d]{1,6}).*$":"\1\2"

[MeasureLongitude2]
Measure=WebParser
Group=Children
Disabled=1
URL=[MeasureLocations]
StringIndex=5
RegExpSubstitute=1
Substitute="^(.*\.)([\d]{1,6}).*$":"\1\2"
IfMatch=^$
IfNotMatchAction=[!ShowMeterGroup Group2][!UpdateMeterGroup Group2][!Redraw]CodeStyle[!UpdateMeter *][!Redraw]

[MeasureName3]
Measure=WebParser
Group=Children
Disabled=1
URL=[MeasureLocations]
StringIndex=9

[MeasureLatitude3]
Measure=WebParser
Group=Children
Disabled=1
URL=[MeasureLocations]
StringIndex=7
RegExpSubstitute=1
Substitute="^(.*\.)([\d]{1,6}).*$":"\1\2"

[MeasureLongitude3]
Measure=WebParser
Group=Children
Disabled=1
URL=[MeasureLocations]
StringIndex=8
RegExpSubstitute=1
Substitute="^(.*\.)([\d]{1,6}).*$":"\1\2"
IfMatch=^$
IfNotMatchAction=[!ShowMeterGroup Group3][!UpdateMeterGroup Group3][!Redraw]CodeStyle[!UpdateMeter *][!Redraw]

[MeasureName4]
Measure=WebParser
Group=Children
Disabled=1
URL=[MeasureLocations]
StringIndex=12

[MeasureLatitude4]
Measure=WebParser
Group=Children
Disabled=1
URL=[MeasureLocations]
StringIndex=10
RegExpSubstitute=1
Substitute="^(.*\.)([\d]{1,6}).*$":"\1\2"

[MeasureLongitude4]
Measure=WebParser
Group=Children
Disabled=1
URL=[MeasureLocations]
StringIndex=11
RegExpSubstitute=1
Substitute="^(.*\.)([\d]{1,6}).*$":"\1\2"
IfMatch=^$
IfNotMatchAction=[!ShowMeterGroup Group4][!UpdateMeterGroup Group4][!Redraw]CodeStyle[!UpdateMeter *][!Redraw]

[MeasureName5]
Measure=WebParser
Group=Children
Disabled=1
URL=[MeasureLocations]
StringIndex=15

[MeasureLatitude5]
Measure=WebParser
Group=Children
Disabled=1
URL=[MeasureLocations]
StringIndex=13
RegExpSubstitute=1
Substitute="^(.*\.)([\d]{1,6}).*$":"\1\2"

[MeasureLongitude5]
Measure=WebParser
Group=Children
Disabled=1
URL=[MeasureLocations]
StringIndex=14
RegExpSubstitute=1
Substitute="^(.*\.)([\d]{1,6}).*$":"\1\2"
IfMatch=^$
IfNotMatchAction=[!ShowMeterGroup Group5][!UpdateMeterGroup Group5][!Redraw]CodeStyle[!UpdateMeter *][!Redraw]

[MeasureName6]
Measure=WebParser
Group=Children
Disabled=1
URL=[MeasureLocations]
StringIndex=18

[MeasureLatitude6]
Measure=WebParser
Group=Children
Disabled=1
URL=[MeasureLocations]
StringIndex=16
RegExpSubstitute=1
Substitute="^(.*\.)([\d]{1,6}).*$":"\1\2"

[MeasureLongitude6]
Measure=WebParser
Group=Children
Disabled=1
URL=[MeasureLocations]
StringIndex=17
RegExpSubstitute=1
Substitute="^(.*\.)([\d]{1,6}).*$":"\1\2"
IfMatch=^$
IfNotMatchAction=[!ShowMeterGroup Group6][!UpdateMeterGroup Group6][!Redraw]CodeStyle[!UpdateMeter *][!Redraw]

[MeasureName7]
Measure=WebParser
Group=Children
Disabled=1
URL=[MeasureLocations]
StringIndex=21

[MeasureLatitude7]
Measure=WebParser
Group=Children
Disabled=1
URL=[MeasureLocations]
StringIndex=19
RegExpSubstitute=1
Substitute="^(.*\.)([\d]{1,6}).*$":"\1\2"

[MeasureLongitude7]
Measure=WebParser
Group=Children
Disabled=1
URL=[MeasureLocations]
StringIndex=20
RegExpSubstitute=1
Substitute="^(.*\.)([\d]{1,6}).*$":"\1\2"
IfMatch=^$
IfNotMatchAction=[!ShowMeterGroup Group7][!UpdateMeterGroup Group7][!Redraw]CodeStyle[!UpdateMeter *][!Redraw]