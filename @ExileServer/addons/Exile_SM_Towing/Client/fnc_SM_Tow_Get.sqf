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

fnc_SM_Tow_Get =
{
	private ["_vehiclePlayer","_attachedObjects","_displayNameSelected","_selected"];
	_vehiclePlayer = vehicle player;
	if(_vehiclePlayer isEqualTo player) exitWith 
	{ 
		["ErrorTitleAndText",["Exile_SM_Towing:","You must be in a vehicle to tow!"]] call ExileClient_gui_toaster_addTemplateToast;
	};
	if(!(SMCanTowInSafeZone) && ExilePlayerInSafezone) exitWith 
	{ 
		["ErrorTitleAndText",["Exile_SM_Towing:","You cannot tow in a safezone!"]] call ExileClient_gui_toaster_addTemplateToast;
	};

	_attachedObjects = attachedObjects _vehiclePlayer;
	if!((count _attachedObjects) isEqualTo 0) exitwith 
	{ 
		["ErrorTitleAndText",["Exile_SM_Towing:","You are already towing a vehicle!"]] call ExileClient_gui_toaster_addTemplateToast;
	};

	_displayNameSelected = getText(configFile >> "CfgVehicles" >> (typeOf _vehiclePlayer) >> "displayName");

	_selected = false;
	if(((typeOf _vehiclePlayer) in SMCanBeTowedVehicles) || SMCanTowEverything) then
	{
		player setVariable ["SMHasVehicleToTow", _vehiclePlayer];
		["SuccessTitleAndText",["Exile_SM_Towing:",format["Vehicle %1 selected!",_displayNameSelected]]] call ExileClient_gui_toaster_addTemplateToast;
		_selected = true;
	}
	else
	{
		["ErrorTitleAndText",["Exile_SM_Towing:","You cannot tow this vehicle"]] call ExileClient_gui_toaster_addTemplateToast;
	};

	if (_selected) then
	{
		if(SMLogTow) then
		{
			SM_Tow_ServerLogging =
			[
				format
				[
					'Player %1 selected a %2 vehicle to tow at %3',
					(name player),
					_displayNameSelected,
					(getPos _vehiclePlayer)
				]
			];
			publicVariableServer "SM_Tow_ServerLogging";
		};
	};
	true
};