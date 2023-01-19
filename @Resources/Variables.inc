[Variables]
; Fonts
; Preinstalled: Anurati | Quicksand | Aquatico | Fira Sans
ClockFont=Anurati
FontFace1=Quicksand
FontFace2=Aquatico

; Colors 
; In RGB https://goo.gl/search/color+picker
MainColor=255,255,255
AccentColor=250,126,0

; --- CLOCK ---

; A standard locale code eg. en-US
; Using Local uses the system language
LanguageCode=Local
; https://docs.rainmeter.net/manual/measures/time/#Format
MeasureTimeFormat=%I:%M

; --- PLAYER ---

; Character to insert between Artist and Title in player.
; For a new line, use #CRLF#
ArtistTitleSeparator=" - "

; Toggles title extraction. Useful when the title of the media is filled with unnecessary or duplicated information.
; For example, the song Fake Friends posted on the YouTube channel MANON has the title "MANON / Fake Friends (Music Video)"
; Without title extraction, the player skin would display 
; MANON - MANON / Fake Friends (Music Video)
; With title extraction, the player skin will display
; MANON - Fake Friends
TitleExtraction=1

; WebNowPlaying | NowPlaying
PlayerPlugin=WebNowPlaying

; PlayerName Only works with PlayerPlugin=NowPlaying
; https://docs.rainmeter.net/manual/measures/nowplaying/#playerlist
PlayerName=CAD

; --- RECYCLE BIN ---
RecycleBin=Recycle Bin
Files=Files
Size=Size

; --- WEATHER ---

; SiteIcons | RealisticIcons
IconStyle=SiteIcons

; --- INTERNAL ---

; Acceptable values: https://en.wikipedia.org/wiki/Real_number
ScrollMouseIncrement=0.1
