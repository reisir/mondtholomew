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

[MeasureTitle]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=TITLE
RegExpSubstitute=#RemoveArtistFromTitle#
Substitute="(?i)^[MeasureArtist].*?-\s?":"","(?i)^([MeasureArtist])":""
DynamicVariables=1
