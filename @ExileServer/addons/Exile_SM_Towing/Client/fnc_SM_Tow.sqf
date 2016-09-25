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

fnc_SM_Tow =
{
	private ["_vehiclePlayer","_hasSelected","_attachedObjects","_displayNameTowing","_displayNameToBeTowed","_offset","_notEnought","_neededCount","_playerCount","_towed"];
	_vehiclePlayer = vehicle player;
	if(_vehiclePlayer isEqualTo player) exitWith 
	{ 
		["ErrorTitleAndText",["Exile_SM_Towing:","You must be in a vehicle to tow!"]] call ExileClient_gui_toaster_addTemplateToast;
	};
	if(!(SMCanTowInSafeZone) && ExilePlayerInSafezone) exitWith 
	{ 
		["ErrorTitleAndText",["Exile_SM_Towing:","You cannot tow in a safezone!"]] call ExileClient_gui_toaster_addTemplateToast;
	};

	_hasSelected = (player getVariable ["SMHasVehicleToTow", objNull]);
	if (isNull _hasSelected) exitWith 
	{
		["ErrorTitleAndText",["Exile_SM_Towing:","You must select a vehicle to tow first!"]] call ExileClient_gui_toaster_addTemplateToast;
	};
	if ((_vehiclePlayer distance _hasSelected) >= 11) exitWith 
	{ 
		["ErrorTitleAndText",["Exile_SM_Towing:","The selected vehicle is to far away!"]] call ExileClient_gui_toaster_addTemplateToast;
	};

	_attachedObjects = attachedObjects _vehiclePlayer;
	if!((count _attachedObjects) isEqualTo 0) exitwith 
	{ 
		["ErrorTitleAndText",["Exile_SM_Towing:","You are already towing a vehicle!"]] call ExileClient_gui_toaster_addTemplateToast;
	};

	_displayNameTowing = getText(configFile >> "CfgVehicles" >> (typeOf _vehiclePlayer) >> "displayName");
	_displayNameToBeTowed = getText(configFile >> "CfgVehicles" >> (typeOf _hasSelected) >> "displayName");

	_offset = getArray(missionConfigFile >> "CfgSMTowing" >> "Offsets" >> (typeOf _vehiclePlayer) >> "offset");
	if((count _offset) isEqualTo 0) then
	{
		_offset = getArray(missionConfigFile >> "CfgSMTowing" >> "Offsets" >> "Default" >> "offset");
	};

	_notEnought = false;
	_displayNameMissing = "";
	if (SMNeedsItemToTow) then
	{
		{
			_item = _x;
			_neededCount = { (_item == _x) } count SMItemsNeededToTow;
			_playerCount = { (_item == _x) } count (magazines player);

			if (_playerCount < _neededCount) exitWith
			{
				_notEnought = true;
				_displayNameMissing = getText(configFile >> "CfgMagazines" >> _item >> "displayName");
			};
		} foreach SMItemsNeededToTow;
	};

	if (_notEnought) exitWith 
	{ 
		["ErrorTitleAndText",["Exile_SM_Towing:",format["You're missing %1 %2 to tow!", (_neededCount - _playerCount), _displayNameMissing]]] call ExileClient_gui_toaster_addTemplateToast;
	};

	_towed = false;
	if (((typeOf _vehiclePlayer) in SMCanTowVehicles) || SMCanTowEverything) then
	{
		_hasSelected attachTo [_vehiclePlayer, _offset];
		if(SMNeedsItemToTow) then { { player removeMagazine _x; } foreach SMItemsNeededToTow; };
		_hasSelected addEventHandler ["GetIn","call fnc_SM_KickOnGetIn"];

		["SuccessTitleAndText",["Exile_SM_Towing:",format["Vehicle %1 towed to %2!", _displayNameToBeTowed, _displayNameTowing]]] call ExileClient_gui_toaster_addTemplateToast;
		player setVariable ["SMHasVehicleToTow", objNull];
		_towed = true;
	}
	else
	{
		["ErrorTitleAndText",["Exile_SM_Towing:","You arent in a vehicle that can tow!"]] call ExileClient_gui_toaster_addTemplateToast;
	};
	if (_towed) then
	{
		if(SMLogTow) then
		{
			SM_Tow_ServerLogging =
			[
				format
				[
					'Player %1 towed a %2 to %3 at %4',
					(name player),
					(typeOf _hasSelected),
					(typeOf _vehiclePlayer),
					(getPosATL _vehiclePlayer)
				]
			];
			publicVariableServer "SM_Tow_ServerLogging";
		};
	};
	true
};