// ******************************************************************************************
// // * This script is licensed under the GNU Lesser GPL v3. Copyright © 2016 A3Wasteland.com *
// ******************************************************************************************
//	@file Version: 1.0
//	@file Name: getBallMagazine.sqf
//	@file Author: AgentRev
//	@file Created: 30/06/2013 15:06

private ["_mag", "_magCfg"];

_mag = _this;
_magCfg = configFile >> "CfgMagazines" >> _mag;

if (isClass _magCfg) then
{
	// Fix case
	_mag = configName (_magCfg);

	while {["_Tracer", configName (_magCfg)] call ExAdServer_fnc_findString != -1} do //Modified by Apoc for Exile, ExAd Addon
	{
		_magCfg = inheritsFrom _magCfg;
	};

	if (isClass _magCfg) then
	{
		_mag = configName (_magCfg);
	};
};

_mag
