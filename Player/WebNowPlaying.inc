[MeasureProgress]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=PROGRESS

[MeasureDuration]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=DURATION
RegExpSubstitute=1
Substitute="^(.):":"0\1:"

[MeasurePosition]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=POSITION

[MeasureArtist]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=ARTIST
Substitute="":"N/A"

[MeasureTitle]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=TITLE
RegExpSubstitute=#RemoveArtistFromTitle#
Substitute=#Substitute#
;|^[MeasureArtist]
DynamicVariables=1
