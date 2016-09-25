scriptName "config.sqf";
/*--------------------------------------------------------------------
// ******************************************************************************************
// * This script is licensed under the GNU Lesser GPL v3.
// ******************************************************************************************
	file: config.sqf
	======
	Author: Bill Springer <Apoc@MayhemServers.com>
	Description: XM8 App config for ExAd APOC Airdrop Port
--------------------------------------------------------------------*/
#include "functions.sqf"; //Dialog functions for the client
#include "..\..\..\..\scripts\Donate.sqf" 

/* ************************************ */

APOC_AA_AdvancedBanking = false;		// Advanced Banking support. Change false to true if you run Advanced Banking on your server.  Not sure of 0.9.8 compatability.
APOC_AA_UseExileLockerFunds = true;	//Removes funds from player's locker stash instead of their hand
APOC_AA_DamageOnWhenLanded = false;		//Turn object allowDamage back on when object is on ground, instead of when in 'chute

APOC_AA_coolDownTime = 300; //Expressed in sec

if ((isServer) OR _donateUIDs) then {
		APOC_AA_Drops =[
			#include "Menu\DonateDropsMenu.hpp"
			#include "Menu\DropsMenu.hpp"
		];
	}
	else {
		APOC_AA_Drops =[
			#include "Menu\DropsMenu.hpp"
		];
	};

APOC_AA_Drop_Contents =[
	["airdrop_Snipers",  //Name of the drop
		[
		// Item type, Item class(es), # of items, # of magazines per weapon
		// Valid item types: wep, itm, or bac.
			["wep", ["srifle_LRR_LRPS_F","srifle_LRR_camo_LRPS_F","srifle_GM6_LRPS_F","srifle_GM6_camo_LRPS_F"],		1, 3]
		]
	],

	["airdrop_DLC_Rifles",
		[
			["wep", ["srifle_DMR_03_multicam_F","srifle_DMR_02_sniper_F","srifle_DMR_05_hex_F","srifle_DMR_04_Tan_F"],	1, 3],

			// ["ItemType",[Array of items/weps to choose from randomly], number of items]
			// If using wep, you need also number of mags to be included.
			["itm", ["V_PlateCarrierIAGL_dgtl","V_TacVest_camo","V_PlateCarrierGL_rgr"], 1],
			["itm", ["bipod_01_F_blk","bipod_02_F_hex"], 1],
			["itm", ["optic_DMS","optic_AMS","optic_KHS_blk"], 1],
			["itm", ["muzzle_snds_B","muzzle_snds_338_black","muzzle_snds_338_sand","muzzle_snds_93mmg"], 1],
			["bac", ["B_Carryall_mcamo","B_Kitbag_mcamo"], 1]
		]
	],

	["airdrop_DLC_LMGs",
		[
			["wep", ["MMG_02_black_F","MMG_02_camo_F","MMG_02_sand_F","MMG_01_hex_F","MMG_01_tan_F"], 1,4],
			["itm", ["V_PlateCarrierIAGL_dgtl","V_TacVest_camo","V_PlateCarrierGL_rgr"], 1],
			["bac", ["B_Carryall_mcamo","B_Kitbag_mcamo"], 1],
			["itm", ["bipod_01_F_blk","bipod_02_F_hex"], 1],
			["itm", ["optic_DMS","optic_AMS","optic_KHS_blk"], 1],
			["itm", ["muzzle_snds_338_black","muzzle_snds_338_sand","muzzle_snds_93mmg"], 1]
		]
	],

	["airdrop_FoodSmall",
		[
			["itm", ["Exile_Item_EMRE","Exile_Item_GloriousKnakworst","Exile_Item_Surstromming"], 5],
			["itm", ["Exile_Item_EMRE","Exile_Item_GloriousKnakworst","Exile_Item_Surstromming"], 5],
			["itm", ["Exile_Item_PlasticBottleCoffee","Exile_Item_PlasticBottleFreshWater","Exile_Item_MountainDupe"], 5],
			["itm", ["Exile_Item_PlasticBottleCoffee","Exile_Item_PlasticBottleFreshWater","Exile_Item_MountainDupe"], 5]
		]
	],

	["airdrop_FoodLarge",
		[
			["itm", ["Exile_Item_EMRE","Exile_Item_GloriousKnakworst","Exile_Item_Surstromming"], 10],
			["itm", ["Exile_Item_EMRE","Exile_Item_GloriousKnakworst","Exile_Item_Surstromming"], 10],
			["itm", ["Exile_Item_PlasticBottleCoffee","Exile_Item_PlasticBottleFreshWater","Exile_Item_MountainDupe"], 10],
			["itm", ["Exile_Item_PlasticBottleCoffee","Exile_Item_PlasticBottleFreshWater","Exile_Item_MountainDupe"], 10]
		]
	],
	
	["airdrop_Meds",
        [
            ["itm", ["Exile_Item_InstaDoc"], 2],
            ["itm", ["rzinfection_antivirus_pills"], 1],
            ["itm", ["rzinfection_antivirus_injector"], 1],
            ["itm", ["Exile_Item_Vishpirin"], 2],
            ["itm", ["Exile_Item_Bandage"], 2]
        ]
    ],

	["airdrop_DonateStart",
		[
			["itm", ["Exile_Item_EMRE","Exile_Item_GloriousKnakworst","Exile_Item_Surstromming"], 5],
			["itm", ["Exile_Item_PlasticBottleCoffee","Exile_Item_PlasticBottleFreshWater","Exile_Item_MountainDupe"], 5],
			["itm", ["Exile_Item_FuelCanisterFull","Exile_Item_InstaDoc"], 1],
			["itm", ["Exile_Item_CanOpener"], 1],
			["itm", ["Exile_Item_InstaDoc"], 1],
			["itm", ["V_PlateCarrierIAGL_dgtl","V_TacVest_camo","V_PlateCarrierGL_rgr"], 1],
			["itm", ["U_BG_Leader"], 1],
			["itm", ["bipod_01_F_blk","bipod_02_F_hex"], 1],
			["itm", ["optic_DMS","optic_AMS","optic_KHS_blk"], 1],
			["itm", ["muzzle_snds_338_black","muzzle_snds_338_sand","muzzle_snds_93mmg"], 1],
			["wep", ["MMG_02_black_F","MMG_02_camo_F","MMG_02_sand_F","MMG_01_hex_F","MMG_01_tan_F"], 1, 4],
			["bac", ["B_Carryall_mcamo"], 1]
		]
	],

	["airdrop_RepairSmall",
        [
            ["itm", ["Exile_Item_FuelCanisterFull"], 1],
            ["itm", ["Exile_Item_Foolbox"], 1],
            ["itm", ["Exile_Item_Wrench"], 1],
            ["itm", ["Exile_Item_DuctTape"], 2],
            ["itm", ["Exile_Item_JunkMetal"], 2]
        ]
    ],
    
    ["airdrop_RepairLarge",
        [
            ["itm", ["Exile_Item_FuelCanisterFull"], 2],
            ["itm", ["Exile_Item_Foolbox"], 1],
            ["itm", ["Exile_Item_Wrench"], 1],
            ["itm", ["Exile_Item_DuctTape"], 4],
            ["itm", ["Exile_Item_JunkMetal"], 4]
        ]
    ],
	
	["airdrop_BuildSmall",
        [
            ["itm", ["Exile_Item_WoodFloorKit"], 5],
            ["itm", ["Exile_Item_WoodPlank"], 5],
            ["itm", ["Exile_Item_WoodWallKit"], 5],
            ["itm", ["Exile_Item_WoodWindowKit"], 5],
            ["itm", ["Exile_Item_FortificationUpgrade"], 5],
            ["itm", ["Exile_Item_MetalBoard"], 5],
            ["itm", ["Exile_Item_WoodLog"], 5],
            ["itm", ["Exile_Item_MetalPole"], 5],
            ["itm", ["Exile_Item_WoodDoorKit"], 3],
            ["itm", ["Exile_Item_WoodStairsKit"], 1],
            ["itm", ["Exile_Item_WorkBenchKit"], 1],
            ["itm", ["Exile_Item_CamoTentKit"], 1],
            ["itm", ["Exile_Item_Storagecratekit"], 1],
            ["bac", ["B_Carryall_mcamo"], 1]
        ]
    ],
    
    ["airdrop_DonateBuildLarge",
        [
            ["itm", ["Exile_Item_WoodFloorKit"], 10],
            ["itm", ["Exile_Item_WoodPlank"], 10],
            ["itm", ["Exile_Item_WoodFloorPortKit"], 10],
            ["itm", ["Exile_Item_WoodWallKit"], 10],
            ["itm", ["Exile_Item_WoodWallHalfKit"], 10],
            ["itm", ["Exile_Item_WoodWindowKit"], 10],
            ["itm", ["Exile_Item_FortificationUpgrade"], 10],
            ["itm", ["Exile_Item_MetalBoard"], 10],
            ["itm", ["Exile_Item_WoodLog"], 10],
            ["itm", ["Exile_Item_MetalPole"], 5],
            ["itm", ["Exile_Item_WoodGateKit"], 3],
            ["itm", ["Exile_Item_WoodStairsKit"], 3],
            ["itm", ["Exile_Item_WoodSupportKit"], 3],
            ["itm", ["Exile_Item_WoodDoorKit"], 3],
            ["itm", ["Exile_Item_WoodDoorwayKit"], 3],
            ["itm", ["Exile_Item_WorkBenchKit"], 3],
            ["itm", ["Exile_Item_CamoTentKit"], 3],
            ["itm", ["Exile_Item_CodeLock"], 3],
            ["itm", ["Exile_Item_Storagecratekit"], 3],
            ["itm", ["Exile_Item_CampFireKit"], 1],
            ["bac", ["B_Carryall_mcamo"], 2]
        ]
    ],
	
	["airdrop_DonateRifles",  //Name of the drop
		[
		// Item type, Item class(es), # of items, # of magazines per weapon
		// Valid item types: wep, itm, or bac.
			["wep", ["arifle_MXM_F","LMG_Mk200_F"],		1, 3]
		]
	]
];