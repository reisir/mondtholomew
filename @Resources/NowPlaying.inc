[ArtistTitleSeparator]
Measure=String
String=#ArtistTitleSeparator#
IfCondition=NowPlaying > 0
IfTrueAction=[!SetOption #CURRENTSECTION# String "#ArtistTitleSeparator#"][!UpdateMeterGroup State][!Redraw]
IfFalseAction=[!SetOption #CURRENTSECTION# String ""][!UpdateMeterGroup State][!Redraw]

[NowPlaying]
Measure=NowPlaying
PlayerName=#PlayerName#
PlayerType=STATE

[MeasureStateButton]
Measure=String
String=[&NowPlaying]

[MeasureTitle]
Measure=NowPlaying
PlayerName=#PlayerName#
PlayerType=TITLE

[MeasureProgress]
Measure=NowPlaying
PlayerName=[MeasureTitle]
PlayerType=PROGRESS
AverageSize=(#SmoothProgress# = 1 ? 62 : 1)

[MeasureDuration]
Measure=NowPlaying
PlayerName=[MeasureTitle]
PlayerType=DURATION
RegExpSubstitute=1
Substitute="^(.):":"0\1:"

[MeasurePosition]
Measure=NowPlaying
PlayerName=[MeasureTitle]
PlayerType=POSITION
RegExpSubstitute=1
Substitute="^(.):":"0\1:"

[MeasureArtist]
Measure=NowPlaying
PlayerName=[MeasureTitle]
PlayerType=ARTIST

[MeasureMinutesRemaining]
Measure=Calc
Formula=Trunc((MeasureDuration - MeasurePosition) / 60)
RegExpSubstitute=1
Substitute="^(.)$":"0\1"

[MeasureSecondsRemaining]
Measure=Calc
Formula=((MeasureDuration - MeasurePosition) % 60)
RegExpSubstitute=1
Substitute="^(.)$":"0\1"

[MeasureRemaining]
Measure=String
String=-[&MeasureMinutesRemaining]:[&MeasureSecondsRemaining]
DynamicVariables=1

[MeasureCover]
Measure=NowPlaying
PlayerName=[MeasureTitle]
PlayerType=COVER

[MeasureRatingSystem]
Measure=Calc
Formula=0

[MeasureShuffle]
Measure=Calc
Formula=0
