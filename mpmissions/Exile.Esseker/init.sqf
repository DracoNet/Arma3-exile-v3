[] execVM "scripts\bypass.sqf";

// statusbar
[] execVM "addons\StatusBar\statusbar.sqf";

// Welcome Credits by Gr8
//[] execVM "custom\welcome.sqf";

//Enigma Revive
[] execVM "custom\EnigmaRevive\init.sqf";

// scarCODE ServerInfoMenu
[] ExecVM "scarCODE\ServerInfoMenu\sqf\initLocal.sqf";

if (isServer) then {
	//[] execVM "custom\safezones.sqf";
	[] execVM "custom\objects.sqf";
};

// Disable Radio Chatter
enableRadio false;
0 fadeRadio 0;