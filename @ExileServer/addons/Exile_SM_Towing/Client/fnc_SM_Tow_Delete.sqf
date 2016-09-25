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

fnc_SM_Tow_Delete =
{
	player setVariable ["SMHasVehicleToTow", objNull];
	["SuccessTitleAndText",["Exile_SM_Towing:","Selected vehicle cleared!"]] call ExileClient_gui_toaster_addTemplateToast;
	true
};