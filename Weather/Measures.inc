[MeasureAccentIcon]
Measure=String
String=[@CurrentIcon]
RegExpSubstitute=1
Substitute=#Accents#
DynamicVariables=1

; Override substitute to prevent Unable to open ".png" errors
[@CurrentIcon]
Substitute=#CommonSubstitute#,"^$":"loading"

; Override substitute to add a loading indicator
[@LocationName]
Substitute=#CommonSubstitute#,"^$":"#__Loading#"
