# Precision Gaming: Variable Volume

This is a simple variable volume script GUI for the use in Arma 3, intended for Exile.

# Features!

  - Graphical interface for volume levels
  - You can alter each level of volume
  - Only works when the earplugs are inserted

# Video:
Variable Volume:
[![IMAGE ALT TEXT](https://img.youtube.com/vi/AvLRwx6tqw0/0.jpg)](https://youtu.be/AvLRwx6tqw0 "Variable Volume")

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
			call PGClient_fnc_earplugVolume;
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
			call PGClient_fnc_earplugVolume;
		};
        _stopPropagation = true;
    };
``` 
Make sure that there are no other mentions of the same case statements. You can make the keys anything that you like.
  - You may also append pg_volumeDialog.hpp to change the colour of the arrows or the bar
# Final Notes:
If you want to use this out of exile an extra snippet of code is included in the init.sqf.

# Author
Made by Tich of Xstreme Gaming and Precision Gaming.

# License
This work is licensed under a Creative Commons Attribution-NoDerivatives 4.0 International License. You may alter the code for personal use but with no redistribution without authorisation.
![IMAGE ALT TEXT](https://i.creativecommons.org/l/by-nd/4.0/88x31.png)