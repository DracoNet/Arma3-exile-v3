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

fnc_add_SM_Tow_End_Action =
{
	private["_veh","_actionid"];
	_veh = _this;
	_actionid = _veh getVariable ['SM_Tow_End_Action',-1];
	if(_actionid isEqualTo -1)then
	{
		_actionid = _veh addAction ['Untow vehicle','
			[] call fnc_SM_Tow_End;
			(_this select 0) removeAction (_this select 2);
			(_this select 0) setVariable [''SM_Tow_End_Action'',-1];
		'];
		_veh setVariable ['SM_Tow_End_Action',_actionid];
	};
	true
};