/*
	A simple way to bypass the A3 DLCs ingame
	for Arma 3
	
	Created and written by 0verHeaT
	https://github.com/0verHeaT
*/
[] spawn
{
	act_plyr_dlc_0 = -1;
	act_plyr_dlc_1 = -1;
	act_plyr_dlc_2 = -1;
	
	while {1 == 1} do 
	{
		if !(288520 in (getDLCs 1)) then
		{
			if ((cursorTarget isKindOf "Kart_01_Base_F") && (player distance cursorTarget < 3.4) && (isNull driver cursorTarget) && !(vehicle player != player)) then 
			{
				if (act_plyr_dlc_0 < 0) then 
				{
					act_plyr_dlc_0 = player addAction ["DLC Bypass - Get in as driver (unlock vehicle first)","player moveInDriver cursorTarget;",cursorTarget,6,true,true];
				};
			} 
			else 
			{
				player removeAction act_plyr_dlc_0;
				act_plyr_dlc_0 = -1;
			};	
		};
		if !(304380 in (getDLCs 1)) then
		{
			if (((cursorTarget isKindOf "B_Heli_Transport_03_base_F") || (cursorTarget isKindOf "Heli_Transport_04_base_F")) && (player distance cursorTarget < 6.5) && (isNull driver cursorTarget) && !(vehicle player != player)) then 
			{
				if (act_plyr_dlc_1 < 0) then 
				{
					act_plyr_dlc_1 = player addAction ["DLC Bypass - Get in as driver (unlock vehicle first)","player moveInDriver cursorTarget;",cursorTarget,6,true,true];
				};
			} 
			else 
			{
				player removeAction act_plyr_dlc_1;
				act_plyr_dlc_1 = -1;
			};
			
			if (((cursorTarget isKindOf "B_Heli_Transport_03_base_F") || (cursorTarget isKindOf "Heli_Transport_04_base_F")) && (player distance cursorTarget < 6.5) && (cursorTarget emptyPositions "Gunner" > 0) && !(vehicle player != player)) then 
			{
				if (act_plyr_dlc_2 < 0) then 
				{
					act_plyr_dlc_2 = player addAction ["DLC Bypass - Get in as gunner (unlock vehicle first)","player moveInGunner cursorTarget;",cursorTarget,5,true,true];
				};
			} 
			else 
			{
				player removeAction act_plyr_dlc_2;
				act_plyr_dlc_2 = -1;
			};
		};
		uiSleep 0.5;
	};
};