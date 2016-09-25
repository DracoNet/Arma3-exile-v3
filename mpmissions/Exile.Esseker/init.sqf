[] execVM "scripts\bypass.sqf";

// statusbar
[] execVM "addons\StatusBar\statusbar.sqf";

// Welcome Credits by Gr8
[] execVM "custom\welcome.sqf";

//Enigma Revive
[] execVM "custom\EnigmaRevive\init.sqf";

if (isServer) then {
	[] execVM "custom\safezones.sqf";
};

// Disable Radio Chatter
enableRadio false;
0 fadeRadio 0;