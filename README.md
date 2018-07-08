# Precision Gaming: Variable Volume

This is a simple variable volume script GUI for the use in Arma 3, intended for Exile.

# Features!

  - Graphical interface for volume levels
  - You can alter each level of volume
  - Only works when the earplugs are inserted

# Instructions:
  - 7 - Volume Down
  - 8 - Volume Up
# Video:
Variable Volume:
[![IMAGE ALT TEXT](https://img.youtube.com/vi/cpUq78Et55M/0.jpg)](https://youtu.be/cpUq78Et55M "Variable Volume")

# Installation:
  - Copy the "variableVoume" folder into your mission directory
  - Append your Init.sqf and Description.ext with the included ones.
  - Override "ExileClient_gui_hud_event_onKeyUp.sqf" and append:
  ```	
    //Key 8
    case 0x09:
    {
		if(ExileClientEarplugsInserted) then {
			if (playerSound < 9) then{
				playerSound = playerSound + 1;
			};
			true call variableVolume;
		};
		_stopPropagation = true;
    };
    //Key 7
    case 0x08:
    {
		if(ExileClientEarplugsInserted) then {
			if (playerSound > 0) then{
				playerSound = playerSound - 1;
			};
			true call variableVolume;
		};
        _stopPropagation = true;
    };
``` 
```
case 0x06:
	{
		if (ExileClientIsInConstructionMode) then
		{
			ExileClientConstructionShowHint = !ExileClientConstructionShowHint;
			[] call ExileClient_gui_constructionMode_update;
		}
		else 
		{
			call ExileClient_system_music_earplugs_toggle;
			false call variableVolume;
			
		};
		_stopPropagation = true;
	};
```
Make sure that there are no other mentions of the same case statements. You can make the keys anything that you like.
  - You may also append pg_volumeDialog.hpp to change the colour of the arrows or the bar
  - If you use infistar, locate : "EXILE_AHAT_CONFIG.hpp", append : allowedIDDs[] ={8000};
  - To use it with the infistar hotkeys just add this code:
```
["Variable Volume Up", 0, false, false, false, "if (playerSound < 9) then {playerSound = playerSound + 1;};true call variableVolume;", {true}],
["Variable Volume Down", 0, false, false, false, "if (playerSound > 0) then {playerSound = playerSound - 1;};true call variableVolume;", {true}], 
```
  
# Final Notes:
If you want to use this out of exile an extra snippet of code is included in the init.sqf.

# Author
Made by Tich of Xstreme Gaming and Precision Gaming.

# License
This work is licensed under a Creative Commons Attribution-NoDerivatives 4.0 International License. You may alter the code for personal use but with no redistribution without authorisation.
![IMAGE ALT TEXT](https://i.creativecommons.org/l/by-nd/4.0/88x31.png)