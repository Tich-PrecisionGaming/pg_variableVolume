if(hasInterface)then{
    playerSound = 2;
    variableVolume = compileFinal preprocessFileLineNumbers "variableVolume\code\pg_variableVolume.sqf";
};

/*
-----------------------------------------------------------------------
--------This allows you to test the script offline---------------------
-----------------------------------------------------------------------
volumeUp ={
params ['_editctrl','_keycode', '_keyshift', '_keyctrl', '_keyalt'];
   //if(_keycode != 0x09 && _keycode != 0x08)exitWith {};
   if(_keycode == 0x09) then
   {
           if (playerSound < 9) then{
               playerSound = playerSound + 1;

               call variableVolume;
       };
   }else{
       //Key 7
       if(_keycode == 0x08) then
       {
            if (playerSound > 0) then{
                playerSound = playerSound - 1;
                call variableVolume;
            };
       };
   };
   true
  };

waitUntil {!isNull (findDisplay 46)};
_temp = (findDisplay 46) displayAddEventHandler ['KeyUp', "_this call volumeUp"];
*/