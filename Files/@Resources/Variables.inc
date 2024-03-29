[Variables]
WeatherLocation=Amsterdam
; Just enter your city's name or your address here or whatever. Anything should work here.
; TIP: Check Rainmeter's log to see what location it got.

WeatherUnits=Metric
; The units of the weather info. Valid values are "Metric" and "Imperial".

Language=[&mSystemLocale]
; Set the language of the weather information and names of the days.
; See https://learn.microsoft.com/nl-nl/openspecs/windows_protocols/ms-lcid/a9eac961-e77d-41a6-90a5-ce1a8b0cdb9c for valid values under the 'language tag' column.
; Not all values may work properly.
; NOTE: use "[&mSystemLocale]" to let it use the currently set system language.

24HTime=True
; Enable or disable 24-hour time.
; Valid values are "True" and "False".

; ================================================

Font=Roboto Flex Normal
; The font used in the skin.

Color=255, 255, 255
; The color of the text and the Mono icons.
; Valid values are formatted "RRR, GGG, BBB" with values of 0-255.

WeatherIconStyle=Color
; The style of the weather icons. Valid values are "Color" and "Mono".
; The Mono icons are embedded in the JDWI.ttf font and the Color icons are found in "@Resources\WeatherIcons".
