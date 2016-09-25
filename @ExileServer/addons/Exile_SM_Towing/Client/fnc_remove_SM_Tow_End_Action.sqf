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

fnc_remove_SM_Tow_End_Action =
{
	private["_veh","_actionid"];
	_veh = _this;
	_actionid = _veh getVariable ['SM_Tow_End_Action',-1];
	if!(_actionid isEqualTo -1)then
	{
		_veh removeAction _actionid;
		_veh setVariable ['SM_Tow_End_Action',-1];
	};
	true
};