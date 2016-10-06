class CfgExileCustomCode 
{
	/*
		You can overwrite every single file of our code without touching it.
		To do that, add the function name you want to overwrite plus the 
		path to your custom file here. If you wonder how this works, have a
		look at our bootstrap/fn_preInit.sqf function.

		Simply add the following scheme here:

		<Function Name of Exile> = "<New File Name>";

		Example:

		ExileClient_util_fusRoDah = "myaddon\myfunction.sqf";
	*/

	//RZ Infection Addon ADD THESE LINES :)
	ExileClient_object_item_consume = "Overrides\ExileClient_object_item_consume.sqf";
	ExileClient_object_item_craft = "fixes\ExileClient_object_item_craft.sqf";
	ExileServer_object_tree_network_chopTreeRequest = "fixes\ExileServer_object_tree_network_chopTreeRequest.sqf";
	// Kill Messages
	ExileServer_object_player_event_onMpKilled = "Overrides\KillMessages\ExileServer_object_player_event_onMpKilled.sqf";
	// Happys Revive
    ExileClient_object_player_death_startBleedingOut = "custom\EnigmaRevive\ExileClient_object_player_death_startBleedingOut.sqf"; //Happys Revive
    ExileClient_object_player_event_onInventoryOpened = "custom\EnigmaRevive\ExileClient_object_player_event_onInventoryOpened.sqf"; //Happys Revive AntiDupe ---NEW with v0.65
	// ExAd XM8
	ExileClient_gui_xm8_slide = "ExAdClient\XM8\CustomCode\ExileClient_gui_xm8_slide.sqf";
	ExileClient_gui_xm8_show = "ExAdClient\XM8\CustomCode\ExileClient_gui_xm8_show.sqf";
	// ExAd VirtualGarage
	ExileServer_system_territory_database_load = "ExAdClient\VirtualGarage\CustomCode\ExileServer_system_territory_database_load.sqf"; 
	// helipad Spawn TraderZones
	ExileServer_system_trading_network_purchaseVehicleRequest = "custom\helipad\ExileServer_system_trading_network_purchaseVehicleRequest.sqf";	
};