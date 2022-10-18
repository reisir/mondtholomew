
[MeasureTitle]
Measure=NowPlaying
PlayerName=#PlayerName#
PlayerType=TITLE
RegExpSubstitute=#RemoveArtistFromTitle#
Substitute=#Substitute#
DynamicVariables=1

[MeasureProgress]
Measure=NowPlaying
PlayerName=[MeasureTitle]
PlayerType=PROGRESS

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

[MeasureArtist]
Measure=NowPlaying
PlayerName=[MeasureTitle]
PlayerType=ARTIST

