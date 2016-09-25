class CfgXM8
{
	extraApps[] = {"ExAd_VG","ExAd_Info","ExAd_CHVD","ExAd_Journal","ExAd_Bike","ExAd_APOC_Airdrop","BRAmaRecipes"};

	class ExAd_VG 
	{
		title = "Virtual Garage";
		controlID = 50000;					//IDC:50000 -> 50015 || These need to be unique and out of range from each other 
		logo = "ExadClient\XM8\Apps\VG\Icon_VG.paa";
		onLoad = "ExAdClient\XM8\Apps\VG\onLoad.sqf";
		onOpen = "ExAdClient\XM8\Apps\VG\onOpen.sqf";
		onClose = "ExAdClient\XM8\Apps\VG\onClose.sqf";
	};	
	class ExAd_Info 
	{
		title = "Server Info";
		controlID = 50100;					//IDC:50100 -> 50102 || These need to be unique and out of range from each other
		logo = "ExadClient\XM8\Apps\Info\Icon_SI.paa";
		onLoad = "ExAdClient\XM8\Apps\Info\onLoad.sqf";
		onOpen = "ExAdClient\XM8\Apps\Info\onOpen.sqf";
		onClose = "ExAdClient\XM8\Apps\Info\onClose.sqf";
	};	
	class ExAd_CHVD 
	{
		title = "View Distance Settings";
		controlID = 50200;					//IDC:50200 -> 50102 || These need to be unique and out of range from each other
		config = "ExadClient\XM8\Apps\CHVD\config.sqf";
		logo = "ExadClient\XM8\Apps\CHVD\Icon_CHVD.paa";
		onLoad = "ExAdClient\XM8\Apps\CHVD\onLoad.sqf";
		onOpen = "ExAdClient\XM8\Apps\CHVD\onOpen.sqf";
		onClose = "ExAdClient\XM8\Apps\CHVD\onClose.sqf";
	};	
	class ExAd_Journal 
	{
		title = "Journal";
		controlID = 50300;					//IDC:50300 -> 50305 || These need to be unique and out of range from each other
		config = "ExadClient\XM8\Apps\Journal\config.sqf";
		logo = "ExadClient\XM8\Apps\Journal\Icon_Journal.paa";
		onLoad = "ExAdClient\XM8\Apps\Journal\onLoad.sqf";
		onOpen = "ExAdClient\XM8\Apps\Journal\onOpen.sqf";
		onClose = "ExAdClient\XM8\Apps\Journal\onClose.sqf";
	};
	class ExAd_Bike
	{
		title = "Deploy Bike";
		config = "ExadClient\XM8\Apps\DeployVehicle\config.sqf";
		bambiState = 0;
		vehicleClass = "Exile_Bike_MountainBike";
		recipe[] = {{"Exile_Item_ExtensionCord",-1}};
		packable = 1;
		autoCleanUp = 1;
		quickFunction = "['ExAd_Bike'] call ExAd_XM8_DV_fnc_spawnVehicle";
	};
	class ExAd_Quad
	{
		title = "Deploy Quad";
		bambiState = 0;
		vehicleClass = "Exile_Bike_QuadBike_Fia";
		recipe[] = {{"Exile_Item_ExtensionCord",1}};
		packable = 1;
		quickFunction = "['ExAd_Quad'] call ExAd_XM8_DV_fnc_spawnVehicle";
	};
	class ExAd_APOC_Airdrop
	{
		title = "APOC Airdrop";
		controlID = 66000;					//IDC:66000 -> 66005 || These need to be unique and out of range from each other
		logo = "\a3\Ui_f\data\GUI\Cfg\CommunicationMenu\supplydrop_ca.paa";
		config = "ExadClient\XM8\Apps\APOC_Airdrop\config.sqf";
		onLoad = "ExAdClient\XM8\Apps\APOC_Airdrop\onLoad.sqf";
		onOpen = "ExAdClient\XM8\Apps\APOC_Airdrop\onOpen.sqf";
		onClose = "ExAdClient\XM8\Apps\APOC_Airdrop\onClose.sqf";
	};
	class BRAmaRecipes 
	{
		controlID = 107000;
		title = "Recipies";		
		logo = "ExAdClient\XM8\Apps\BRAmaRecipes\BRAma.paa";
		config = "ExAdClient\XM8\Apps\BRAmaRecipes\config.sqf";
		onLoad = "ExAdClient\XM8\Apps\BRAmaRecipes\onLoad.sqf";
		onOpen = "ExAdClient\XM8\Apps\BRAmaRecipes\onOpen.sqf";
	};
};