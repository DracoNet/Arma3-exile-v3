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

class CfgPatches
{
	class Exile_SM_Towing
	{
		requiredVersion = 0.3;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
		Exile_SM_Towing = 0.5;
	};
};
class CfgFunctions
{
	class Exile_SM_Towing
	{
		class main
		{
			file = "Exile_SM_Towing";
			class postInit { postInit = 1; };
		};
	};
};