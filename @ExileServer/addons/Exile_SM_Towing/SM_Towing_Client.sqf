/*
	Project:
		Exile_SM_Towing

	Authors:
	[XG] StokesMagee:
		www.xexgaming.com

	[XG] KamikazeXeX:
		www.xexgaming.com

	Credits:
	Chris(tian) "infiSTAR" Lorenzen:
		infiSTAR23@gmail.com
		www.infiSTAR.de
*/

/* This it the config/settings file, you ARE free to edit this accordingly */
#include "SM_Towing_Config.sqf"

/* DO NOT EDIT ANY FILES LISTED BELOW THIS LINE UNLESS YOU KNOW WHAT YOU ARE DOING!*/
/* DO NOT EDIT ANY FILES LISTED BELOW THIS LINE UNLESS YOU KNOW WHAT YOU ARE DOING!*/
/* DO NOT EDIT ANY FILES LISTED BELOW THIS LINE UNLESS YOU KNOW WHAT YOU ARE DOING!*/
/* DO NOT EDIT ANY FILES LISTED BELOW THIS LINE UNLESS YOU KNOW WHAT YOU ARE DOING!*/
/* DO NOT EDIT ANY FILES LISTED BELOW THIS LINE UNLESS YOU KNOW WHAT YOU ARE DOING!*/
/* DO NOT EDIT ANY FILES LISTED BELOW THIS LINE UNLESS YOU KNOW WHAT YOU ARE DOING!*/

#include "Client\fnc_SM_Tow_Get.sqf"
#include "Client\fnc_SM_Tow.sqf"
#include "Client\fnc_SM_Tow_End.sqf"
#include "Client\fnc_SM_Tow_Delete.sqf"
#include "Client\fnc_SM_KickOnGetIn.sqf"
#include "Client\fnc_add_SM_Tow_Delete_Action.sqf"
#include "Client\fnc_add_SM_Tow_Get_Action.sqf"
#include "Client\fnc_add_SM_Tow_Action.sqf"
#include "Client\fnc_add_SM_Tow_End_Action.sqf"
#include "Client\fnc_remove_SM_Tow_Get_Action.sqf"
#include "Client\fnc_remove_SM_Tow_Action.sqf"
#include "Client\fnc_remove_SM_Tow_End_Action.sqf"
#include "Client\fnc_remove_SM_Tow_Delete_Action.sqf"
#include "Client\fnc_remove_SM_Tow_All_Actions.sqf"

_SM_Tow_Thread =
{
	private ["_SMVehiclePlayer","_SMHasVehicleToTow","_SMAttachedObjects"];
	_SMVehiclePlayer = vehicle player;
	_SMHasVehicleToTow = (player getVariable ["SMHasVehicleToTow", objNull]);

	if((alive player) && !(_SMVehiclePlayer isEqualTo player)) then
	{
		_SMAttachedObjects = attachedObjects _SMVehiclePlayer;
		if (((typeOf _SMVehiclePlayer) in SMCanBeTowedVehicles) || ((typeOf _SMVehiclePlayer) in SMCanTowVehicles)) then
		{
			if !((count _SMAttachedObjects) isEqualTo 0) then
			{
				player setVariable ["SM_Tow_PassActions", _SMVehiclePlayer];
				_SMVehiclePlayer call fnc_remove_SM_Tow_Action;
				_SMVehiclePlayer call fnc_remove_SM_Tow_Get_Action;
				_SMVehiclePlayer call fnc_remove_SM_Tow_Delete_Action;
				_SMVehiclePlayer call fnc_add_SM_Tow_End_Action;
			};
			if ((typeOf _SMVehiclePlayer) in SMCanBeTowedVehicles) then
			{
				if ((isNull _SMHasVehicleToTow) && ((count _SMAttachedObjects) isEqualTo 0)) then
				{
					player setVariable ["SM_Tow_PassActions", _SMVehiclePlayer];
					_SMVehiclePlayer call fnc_remove_SM_Tow_Action;
					_SMVehiclePlayer call fnc_remove_SM_Tow_End_Action;
					_SMVehiclePlayer call fnc_remove_SM_Tow_Delete_Action;
					_SMVehiclePlayer call fnc_add_SM_Tow_Get_Action;
				};
			};
			if ((typeOf _SMVehiclePlayer) in SMCanTowVehicles) then
			{
				if (!(isNull _SMHasVehicleToTow) && !(_SMHasVehicleToTow isEqualTo _SMVehiclePlayer) && ((count _SMAttachedObjects) isEqualTo 0)) then
				{
					player setVariable ["SM_Tow_PassActions", _SMVehiclePlayer];
					_SMVehiclePlayer call fnc_add_SM_Tow_Action;
					_SMVehiclePlayer call fnc_add_SM_Tow_Delete_Action;
					_SMVehiclePlayer call fnc_remove_SM_Tow_End_Action;
					_SMVehiclePlayer call fnc_remove_SM_Tow_Get_Action;
				};
			};
		}
		else
		{
			if (SMCanTowEverything) then
			{
				if !((count _SMAttachedObjects) isEqualTo 0) then
				{
					player setVariable ["SM_Tow_PassActions", _SMVehiclePlayer];
					_SMVehiclePlayer call fnc_remove_SM_Tow_Action;
					_SMVehiclePlayer call fnc_remove_SM_Tow_Get_Action;
					_SMVehiclePlayer call fnc_remove_SM_Tow_Delete_Action;
					_SMVehiclePlayer call fnc_add_SM_Tow_End_Action;
				};
				if ((isNull _SMHasVehicleToTow) && ((count _SMAttachedObjects) isEqualTo 0)) then
				{
					player setVariable ["SM_Tow_PassActions", _SMVehiclePlayer];
					_SMVehiclePlayer call fnc_remove_SM_Tow_Action;
					_SMVehiclePlayer call fnc_remove_SM_Tow_End_Action;
					_SMVehiclePlayer call fnc_remove_SM_Tow_Delete_Action;
					_SMVehiclePlayer call fnc_add_SM_Tow_Get_Action;
				};
				if (!(isNull _SMHasVehicleToTow) && !(_SMHasVehicleToTow isEqualTo _SMVehiclePlayer) && ((count _SMAttachedObjects) isEqualTo 0)) then
				{
					player setVariable ["SM_Tow_PassActions", _SMVehiclePlayer];
					_SMVehiclePlayer call fnc_add_SM_Tow_Action;
					_SMVehiclePlayer call fnc_add_SM_Tow_Delete_Action;
					_SMVehiclePlayer call fnc_remove_SM_Tow_End_Action;
					_SMVehiclePlayer call fnc_remove_SM_Tow_Get_Action;
				};
			};
		};
	}
	else
	{
		call fnc_remove_SM_Tow_All_Actions;
	};
	true
};
if!(isNil 'Exile_SM_Towing_ActionThread') then { [Exile_SM_Towing_ActionThread] call ExileClient_system_thread_removeTask; };
Exile_SM_Towing_ActionThread = [0.25, _SM_Tow_Thread, [], true] call ExileClient_system_thread_addtask;
true