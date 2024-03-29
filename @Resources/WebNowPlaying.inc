[Variables]
Separators=[\-|\x|\×|\•|\–|\\|\/|\|]
SeparatorPattern=\s?#Separators#?\s?
Artist=[MeasureArtist:EscapeRegExp]
Open=\(\[\{
Close=\)\]\}
RemoveArtist="(?i)^#Artist##SeparatorPattern#|#SeparatorPattern##Artist#$":""
RemoveAudioVideo="(?i)[#Open#][^#Open#]*?(?:video|audio)[^#Close#]*?[#Close#]\s?":""
StandardizeFeaturing="(?i)^[\,|\x|\&]\s?|^t\.\s|ft\.\s?|feat\.\s?|featuring\s?":"#__Featuring#"
MoveFeaturingToEnd="^(#__Featuring#.*)\s?#Separators#\s?(.*?)$":"\2 \1","^#__Featuring#\s?":""
NotAvailable="":"[TitleNotAvailable]"
Substitute1="#RemoveArtist#","#RemoveAudioVideo#","#StandardizeFeaturing#","#MoveFeaturingToEnd#","#NotAvailable#"
Substitute0=

; Artist Sanitization stages
RemoveTopic="(?i)\s?-\s?topic":""
RemoveVEVO="(?i)\s?VEVO":""

SanitizeArtist1="#RemoveTopic#","#RemoveVEVO#","":"[ArtistNotAvailable]"
SanitizeArtist0="":"[ArtistNotAvailable]"

; Rainmeter crashes if the right hand side of a substitute is empty
; or something like that so using these the user can't accidentally crash
[ArtistNotAvailable]
Measure=String
String=#__ArtistNotAvailable#
Substitute="":" "
UpdateDivider=-1
[TitleNotAvailable]
Measure=String
String=#__TitleNotAvailable#
Substitute="":" "
UpdateDivider=-1
[ArtistTitleSeparator]
Measure=String
String=#ArtistTitleSeparator#
IfCondition=WebNowPlaying > 0
IfTrueAction=[!SetOption #CURRENTSECTION# String "#ArtistTitleSeparator#"][!UpdateMeterGroup State][!Redraw]
IfFalseAction=[!SetOption #CURRENTSECTION# String ""][!UpdateMeterGroup State][!Redraw]

[WebNowPlaying]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=STATE

[MeasureStateButton]
Measure=String
String=[&WebNowPlaying]

[MeasureProgress]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=PROGRESS
AverageSize=(#SmoothProgress# = 1 ? 62 : 1)

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
RegExpSubstitute=1
Substitute="^(.):":"0\1:"

[MeasureArtist]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=ARTIST
RegExpSubstitute=1
Substitute="[#SanitizeArtist[#SanitizeArtist]]"

[MeasureTitle]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=TITLE
RegExpSubstitute=1
Substitute="[#Substitute[#TitleExtraction]]"
DynamicVariables=1

[MeasureRemaining]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=REMAINING
RegExpSubstitute=1
Substitute="(.*)":"-\1"

[MeasureCover]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=COVER
DefaultPath=#@#Images\DefaultCover.png

[MeasureCoverWebAddress]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=CoverWebAddress

[MeasureRatingSystem]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=RatingSystem

[MeasureShuffle]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=SupportsToggleRepeatMode
