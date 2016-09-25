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

fnc_SM_Tow_End =
{
	private ["_vehiclePlayer","_attachedObjects","_selectedAttached","_displayNameSelected","_pos"];
	_vehiclePlayer = vehicle player;
	if (_vehiclePlayer isEqualTo player) exitWith 
	{
		["ErrorTitleAndText",["Exile_SM_Towing:","You must be in a vehicle to untow!"]] call ExileClient_gui_toaster_addTemplateToast;
	};

	_attachedObjects = attachedObjects _vehiclePlayer;
	if ((count _attachedObjects) < 1) exitWith 
	{
		["ErrorTitleAndText",["Exile_SM_Towing:","There is no vehicle being towed!"]] call ExileClient_gui_toaster_addTemplateToast;
	};

	_selectedAttached = _attachedObjects select 0;
	_displayNameSelected = getText(configFile >> "CfgVehicles" >> (typeOf _selectedAttached) >> "displayName");

	if (SMNeedsItemToTow) then { { player addMagazine _x; } foreach SMItemsNeededToTow; };
	_selectedAttached removeEventHandler ["GetIn", 0];

	//Fix for vehicles in the ground
	_pos = getPosATL _selectedAttached;
	_pos set [2, 1];
	detach _selectedAttached;
	_selectedAttached setPosATL _pos;
	["SuccessTitleAndText",["Exile_SM_Towing:",format["Vehicle %1 untowed", _displayNameSelected]]] call ExileClient_gui_toaster_addTemplateToast;
	if (SMLogTow) then
	{
		SM_Tow_ServerLogging =
		[
			format
			[
				'Player %1 untowed a %2 from a %3 at %4',
				(name player),
				(typeOf _selectedAttached),
				(typeOf _vehiclePlayer),
				(getPosATL _vehiclePlayer)
			]
		];
		publicVariableServer "SM_Tow_ServerLogging";
	};
	true
};