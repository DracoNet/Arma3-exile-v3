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

diag_log "Exile_SM_Towing v0.5 Initializing";
SM_Towing_Client = compileFinal preprocessFileLineNumbers 'Exile_SM_Towing\SM_Towing_Client.sqf';

"SM_Tow_ServerLogging" addPublicVariableEventHandler
{
	private['_array','_log','_logString'];
	_array = _this select 1;
	_log = _array select 0;
	_logString = format['Exile_SM_Towing: %1', _log];
	if(!isNil "FN_CALL_LOG_DLL") then { _logString call FN_CALL_LOG_DLL; };
	diag_log _logString;
};

['', SM_Towing_Client, -2, 'Exile_SM_Towing'] call FN_infiSTAR_S;
diag_log "Exile_SM_Towing v0.5 Fully initialised";
true