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

fnc_remove_SM_Tow_All_Actions =
{
	private ["_SMVehiclePlayer"];
	_SMVehiclePlayer = (player getVariable ["SM_Tow_PassActions", objNull]);
	_SMVehiclePlayer call fnc_remove_SM_Tow_Action;
	_SMVehiclePlayer call fnc_remove_SM_Tow_End_Action;
	_SMVehiclePlayer call fnc_remove_SM_Tow_Get_Action;
	_SMVehiclePlayer call fnc_remove_SM_Tow_Delete_Action;
	player setVariable ["SM_Tow_PassActions", objNull];
	true
};