[Variables]
@Include=#@#Variables.inc
@Include2=#CurrentPath#ConfigVariables.inc

True=1
False=0

WeatherIconStyleMono=0
WeatherIconStyleColor=1

[Rainmeter]
Update=1000
AccurateText=1
DynamicWindowSize=1

BackgroundMode=2
SolidColor=0, 0, 0, 1

ContextTitle=Global settings...
ContextAction=["#ConfigEditor#" "#@#Variables.inc"]
ContextTitle2=Config settings...
ContextAction2=["#ConfigEditor#" "#CurrentPath#ConfigVariables.inc"]

OnRefreshAction=[!UpdateMeter *] [!UpdateMeter *] [!Redraw]
