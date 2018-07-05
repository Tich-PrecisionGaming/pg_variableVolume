/* Volume script to change the volume level once exile.airplugs are inserted
This script is the intellectual and legal property of Tich of Precision and Xstreme Gaming
This work is licensed under a Creative Commons Attribution-NoDerivatives 4.0 International License.
You may alter the code for personal use but with no redistribution without authorisation.
created on: 05/07/2018.
*/
class pg_volumeDialog
{
	idd = 8000;
	onLoad = "uiNamespace setVariable ['pg_volumeDialog', _this select 0];";
	onUnload = "uiNamespace setVariable ['pg_volumeDialog', displayNull];";
	fadeIn = 1;
	fadeOut = 1;
	duration = 2;
	movingEnable = 0;

	class controls
	{
        class RscPicture_1200: pg_volumeRscPicture
        {
        	idc = 1200;
        	text = "variableVolume\resources\VolumeUpArrow.paa";
        	x = 0.025625 * safezoneW + safezoneX;
        	y = 0.225 * safezoneH + safezoneY;
        	w = 0.04125 * safezoneW;
        	h = 0.055 * safezoneH;
        };
        class RscPicture_1201: pg_volumeRscPicture
        {
        	idc = 1201;
        	text = "variableVolume\resources\VolumeBar.jpg";
        	x = 0.025625 * safezoneW + safezoneX;
        	y = 0.291 * safezoneH + safezoneY;
        	w = 0.04125 * safezoneW;
        	h = 0.022 * safezoneH;
        };
        class RscPicture_1202: pg_volumeRscPicture
        {
        	idc = 1202;
        	text = "variableVolume\resources\VolumeBar.jpg";
        	x = 0.025625 * safezoneW + safezoneX;
        	y = 0.324 * safezoneH + safezoneY;
        	w = 0.04125 * safezoneW;
        	h = 0.022 * safezoneH;
        };
        class RscPicture_1203: pg_volumeRscPicture
        {
        	idc = 1203;
        	text = "variableVolume\resources\VolumeBar.jpg";
        	x = 0.025625 * safezoneW + safezoneX;
        	y = 0.357 * safezoneH + safezoneY;
        	w = 0.04125 * safezoneW;
        	h = 0.022 * safezoneH;
        };
        class RscPicture_1204: pg_volumeRscPicture
        {
        	idc = 1204;
        	text = "variableVolume\resources\VolumeBar.jpg";
        	x = 0.025625 * safezoneW + safezoneX;
        	y = 0.39 * safezoneH + safezoneY;
        	w = 0.04125 * safezoneW;
        	h = 0.022 * safezoneH;
        };
        class RscPicture_1205: pg_volumeRscPicture
        {
        	idc = 1205;
        	text = "variableVolume\resources\VolumeBar.jpg";
        	x = 0.025625 * safezoneW + safezoneX;
        	y = 0.423 * safezoneH + safezoneY;
        	w = 0.04125 * safezoneW;
        	h = 0.022 * safezoneH;
        };
        class RscPicture_1206: pg_volumeRscPicture
        {
        	idc = 1206;
        	text = "variableVolume\resources\VolumeBar.jpg";
        	x = 0.025625 * safezoneW + safezoneX;
        	y = 0.456 * safezoneH + safezoneY;
        	w = 0.04125 * safezoneW;
        	h = 0.022 * safezoneH;
        };
        class RscPicture_1207: pg_volumeRscPicture
        {
        	idc = 1207;
        	text = "variableVolume\resources\VolumeBar.jpg";
        	x = 0.025625 * safezoneW + safezoneX;
        	y = 0.489 * safezoneH + safezoneY;
        	w = 0.04125 * safezoneW;
        	h = 0.022 * safezoneH;
        };
        class RscPicture_1208: pg_volumeRscPicture
        {
        	idc = 1208;
        	text = "variableVolume\resources\VolumeBar.jpg";
        	x = 0.025625 * safezoneW + safezoneX;
        	y = 0.522 * safezoneH + safezoneY;
        	w = 0.04125 * safezoneW;
        	h = 0.022 * safezoneH;
        };
        class RscPicture_1209: pg_volumeRscPicture
        {
        	idc = 1209;
        	text = "variableVolume\resources\VolumeBar.jpg";
        	x = 0.025625 * safezoneW + safezoneX;
        	y = 0.555 * safezoneH + safezoneY;
        	w = 0.04125 * safezoneW;
        	h = 0.022 * safezoneH;
        };
        class RscPicture_1210: pg_volumeRscPicture
        {
        	idc = 1210;
        	text = "variableVolume\resources\VolumeBar.jpg";
        	x = 0.025625 * safezoneW + safezoneX;
        	y = 0.588 * safezoneH + safezoneY;
        	w = 0.04125 * safezoneW;
        	h = 0.022 * safezoneH;
        };
        class RscPicture_1211: pg_volumeRscPicture
        {
        	idc = 1211;
        	text = "variableVolume\resources\VolumeDownArrow.paa";
        	x = 0.025625 * safezoneW + safezoneX;
        	y = 0.621 * safezoneH + safezoneY;
        	w = 0.04125 * safezoneW;
        	h = 0.055 * safezoneH;
        };
	};
};
