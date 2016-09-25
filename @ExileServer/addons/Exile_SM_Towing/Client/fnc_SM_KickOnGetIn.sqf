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

fnc_SM_KickOnGetIn =
{
	private ["_vehicle"];
	_vehicle = _this select 0;
	_vehicle action ["Eject", _vehicle];
	if (SMLogTow) then
	{
		SM_Tow_ServerLogging =
		[
			format
			[
				'Player %1 tried to enter %2 vehicle while being towed at %3!',
				(name player),
				(typeOf _vehicle),
				(getPosATL _vehicle)
			]
		];
		publicVariableServer "SM_Tow_ServerLogging";
	};
	["ErrorTitleAndText",["Exile_SM_Towing:","You cannot enter this vehicle being towed"]] call ExileClient_gui_toaster_addTemplateToast;
	true
};