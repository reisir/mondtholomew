[Rainmeter]
DynamicWindowSize=1
AccurateText=1
BackgroundMode=2
SolidColor=0,0,0,1
MouseScrollUpAction=[!SetVariable Scale "([#Scale] + #ScrollMouseIncrement#)"][!WriteKeyValue Variables Scale "[#Scale]"][!UpdateMeter *][!Redraw] 
MouseScrollDownAction=[!SetVariable Scale "([#Scale] - #ScrollMouseIncrement# < 0.5 ? 0.5 : [#Scale]-#ScrollMouseIncrement#)"][!WriteKeyValue Variables Scale "[#Scale]"][!UpdateMeter *][!Redraw] 
ContextTitle=Center horizontally
ContextAction=[!SetWindowPosition "50%" "#CURRENTCONFIGY#" "50%" "0%"]
ContextTitle2=Center vertically
ContextAction2=[!SetWindowPosition "#CURRENTCONFIGX#" "50%" "0%" "50%"]
ContextTitle3=Edit settings
ContextAction3=["#@#Variables.inc"]
DefaultAlwaysOnTop=-2
