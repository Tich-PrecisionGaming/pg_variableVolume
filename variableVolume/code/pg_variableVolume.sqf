/* Volume script to change the volume level once exile.airplugs are inserted
This script is the intellectual and legal property of Tich of Precision and Xstreme Gaming
This work is licensed under a Creative Commons Attribution-NoDerivatives 4.0 International License.
You may alter the code for personal use but with no redistribution without authorisation.
created on: 05/07/2018.
*/
private ["_useGUI"];
_useGUI = _this;
private _volumeIDC = [1210, 1209, 1208, 1207, 1206, 1205, 1204, 1203, 1202, 1201];
if (alive player) then
{
    switch (playerSound) do
	{
        case 9:
            {
                0.5 fadeSound 0.9;
            };
        case 8:
            {
                0.5 fadeSound 0.8;
            };
        case 7:
            {
                0.5 fadeSound 0.7;

            };
        case 6:
            {
                0.5 fadeSound 0.6;

            };
        case 5:
            {
                0.5 fadeSound 0.5;

            };
        case 4:
            {
                0.5 fadeSound 0.4;

            };
        case 3:
            {
                0.5 fadeSound 0.3;

            };
        case 2:
            {
                0.5 fadeSound 0.2;

            };
        case 1:
            {
                0.5 fadeSound 0.1;

            };
        case 0:
            {
                0.5 fadeSound 0.02;

            };
	};
	if(_useGUI) then {
        disableSerialization;
        20000 cutRsc ["pg_volumeDialog", "Plain", 0.5];
        _display = (uiNamespace getVariable "pg_volumeDialog");
        _display displayCtrl 1200 ctrlShow true;
        _display displayCtrl 1211 ctrlShow true;
        _count = 0;
        while {_count < 10} do {
            _display displayCtrl (_volumeIDC select _count) ctrlShow false;
            _count = _count + 1;
        };
        _count = 0;
        while {_count <= playerSound} do {
           _display displayCtrl (_volumeIDC select _count) ctrlShow true;
            _count = _count + 1;
        };
	};
};