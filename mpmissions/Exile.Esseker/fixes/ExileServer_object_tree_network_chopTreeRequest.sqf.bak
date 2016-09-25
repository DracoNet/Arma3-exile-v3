/**
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/. 
 * Yb9IfG8VRNOOtggqvAUNp6I0hsfGvPYY/AfLZTU1Rxc=
 */

// Edited by Phate from easy-gaming.net
 
private["_sessionId","_parameters","_treeNetId","_tree","_isTree","_treeModelNames","_treeHeight","_newDamage","_treePosition","_spawnRadius","_weaponHolders","_weaponHolder","_weaponHolderPosition"];
_sessionId = _this select 0;
_parameters = _this select 1;
_treeNetId = _parameters select 0;

// Define Wood Drop Notify Text here
_woodText = "Wood dropped in your Area!";
_woodVehicleText = "Wood was put inside your Vehicle!";
_woodVehicleFullText = "Wood dropped in your Area! Vehicle is Full!";
// Define Wood Drop Notify Text here

_tree = objectFromNetId _treeNetId;
if (!isNull _tree) then
{
	_isTree = false;
	_treeModelNames = getArray(configFile >> "CfgInteractionModels" >> "WoodSource" >> "models");
	{
		if !(((str _tree) find _x) isEqualTo -1)exitWith {_isTree = true};
	}
	forEach _treeModelNames;
	if (_isTree) then 
	{
		if (alive _tree) then
		{
			_treeHeight = _tree call ExileClient_util_model_getHeight;
			_treeHeight = _treeHeight max 1; 
			_newDamage = ((damage _tree) + (1 / (floor _treeHeight) )) min 1;
			_tree setDamage _newDamage; 
			if (_newDamage isEqualTo 1) then
			{
				_tree setDamage 999; 
			};
			_nearestTruck = (getPosATL _tree) nearEntities[["Exile_Car_Hatchback_Beige","Exile_Car_Hatchback_Green","Exile_Car_Hatchback_Blue","Exile_Car_Hatchback_BlueCustom","Exile_Car_Hatchback_BeigeCustom","Exile_Car_Hatchback_Yellow","Exile_Car_Hatchback_Grey","Exile_Car_Hatchback_Black","Exile_Car_Hatchback_Dark","Exile_Car_Hatchback_Rusty1","Exile_Car_Hatchback_Rusty2","Exile_Car_Hatchback_Rusty3","Exile_Car_Hatchback_Sport_Red","Exile_Car_Hatchback_Sport_Blue","Exile_Car_Hatchback_Sport_Orange","Exile_Car_Hatchback_Sport_White","Exile_Car_Hatchback_Sport_Beige","Exile_Car_Hatchback_Sport_Green","Exile_Car_HEMMT","Exile_Car_Hunter","Exile_Car_Ifrit","Exile_Car_Offroad_Red","Exile_Car_Offroad_Beige","Exile_Car_Offroad_White","Exile_Car_Offroad_Blue","Exile_Car_Offroad_DarkRed","Exile_Car_Offroad_BlueCustom","Exile_Car_Offroad_Guerilla01","Exile_Car_Offroad_Guerilla02","Exile_Car_Offroad_Guerilla03","Exile_Car_Offroad_Guerilla04","Exile_Car_Offroad_Guerilla05","Exile_Car_Offroad_Guerilla06","Exile_Car_Offroad_Guerilla07","Exile_Car_Offroad_Guerilla08","Exile_Car_Offroad_Guerilla09","Exile_Car_Offroad_Guerilla10","Exile_Car_Offroad_Guerilla11","Exile_Car_Offroad_Guerilla12","Exile_Car_Offroad_Rusty1","Exile_Car_Offroad_Rusty2","Exile_Car_Offroad_Rusty3","Exile_Car_Offroad_Armed_Guerilla01","Exile_Car_Offroad_Armed_Guerilla02","Exile_Car_Offroad_Armed_Guerilla03","Exile_Car_Offroad_Armed_Guerilla04","Exile_Car_Offroad_Armed_Guerilla05","Exile_Car_Offroad_Armed_Guerilla06","Exile_Car_Offroad_Armed_Guerilla07","Exile_Car_Offroad_Armed_Guerilla08","Exile_Car_Offroad_Armed_Guerilla09","Exile_Car_Offroad_Armed_Guerilla10","Exile_Car_Offroad_Armed_Guerilla11","Exile_Car_Offroad_Armed_Guerilla12","Exile_Car_Offroad_Repair_Civillian","Exile_Car_Offroad_Repair_Red","Exile_Car_Offroad_Repair_Beige","Exile_Car_Offroad_Repair_White","Exile_Car_Offroad_Repair_Blue","Exile_Car_Offroad_Repair_DarkRed","Exile_Car_Offroad_Repair_BlueCustom","Exile_Car_Offroad_Repair_Guerilla01","Exile_Car_Offroad_Repair_Guerilla02","Exile_Car_Offroad_Repair_Guerilla03","Exile_Car_Offroad_Repair_Guerilla04","Exile_Car_Offroad_Repair_Guerilla05","Exile_Car_Offroad_Repair_Guerilla06","Exile_Car_Offroad_Repair_Guerilla07","Exile_Car_Offroad_Repair_Guerilla08","Exile_Car_Offroad_Repair_Guerilla09","Exile_Car_Offroad_Repair_Guerilla10","Exile_Car_Offroad_Repair_Guerilla11","Exile_Car_Offroad_Repair_Guerilla12","Exile_Car_Strider","Exile_Car_SUV_Red","Exile_Car_SUV_Black","Exile_Car_SUV_Grey","Exile_Car_SUV_Orange","Exile_Car_Tempest","Exile_Car_Van_Black","Exile_Car_Van_White","Exile_Car_Van_Red","Exile_Car_Van_Guerilla01","Exile_Car_Van_Guerilla02","Exile_Car_Van_Guerilla03","Exile_Car_Van_Guerilla04","Exile_Car_Van_Guerilla05","Exile_Car_Van_Guerilla06","Exile_Car_Van_Guerilla07","Exile_Car_Van_Guerilla08","Exile_Car_Van_Box_Black","Exile_Car_Van_Box_White","Exile_Car_Van_Box_Red","Exile_Car_Van_Box_Guerilla01","Exile_Car_Van_Box_Guerilla02","Exile_Car_Van_Box_Guerilla03","Exile_Car_Van_Box_Guerilla04","Exile_Car_Van_Box_Guerilla05","Exile_Car_Van_Box_Guerilla06","Exile_Car_Van_Box_Guerilla07","Exile_Car_Van_Box_Guerilla08","Exile_Car_Van_Fuel_Black","Exile_Car_Van_Fuel_White","Exile_Car_Van_Fuel_Red","Exile_Car_Van_Fuel_Guerilla01","Exile_Car_Van_Fuel_Guerilla02","Exile_Car_Van_Fuel_Guerilla03","Exile_Car_Zamak","Land_Pod_Heli_Transport_04_covered_F","Land_Pod_Heli_Transport_04_fuel_F","Land_Pod_Heli_Transport_04_box_F","Land_Pod_Heli_Transport_04_repair_F","Land_Pod_Heli_Transport_04_medevac_F","Land_Pod_Heli_Transport_04_bench_F","Exile_Bike_OldBike","Exile_Bike_MountainBike","Exile_Bike_QuadBike_Black","Exile_Bike_QuadBike_Blue","Exile_Bike_QuadBike_Red","Exile_Bike_QuadBike_White","Exile_Bike_QuadBike_Nato","Exile_Bike_QuadBike_Csat","Exile_Bike_QuadBike_Fia","Exile_Bike_QuadBike_Guerilla01","Exile_Bike_QuadBike_Guerilla02","Exile_Car_Kart_BluKing","Exile_Car_Kart_RedStone","Exile_Car_Kart_Vrana","Exile_Car_Kart_Green","Exile_Car_Kart_Blue","Exile_Car_Kart_Orange","Exile_Car_Kart_White","Exile_Car_Kart_Yellow","Exile_Car_Kart_Black","Exile_Boat_MotorBoat_Police","Exile_Boat_MotorBoat_Orange","Exile_Boat_MotorBoat_White","Exile_Boat_RubberDuck_CSAT","Exile_Boat_RubberDuck_Digital","Exile_Boat_RubberDuck_Orange","Exile_Boat_RubberDuck_Blue","Exile_Boat_RubberDuck_Black","Exile_Boat_SDV_CSAT","Exile_Boat_SDV_Digital","Exile_Boat_SDV_Grey","Exile_Chopper_Hellcat_Green","Exile_Chopper_Hellcat_FIA","Exile_Chopper_Hummingbird_Green","Exile_Chopper_Hummingbird_Civillian_Blue","Exile_Chopper_Hummingbird_Civillian_Red","Exile_Chopper_Hummingbird_Civillian_ION","Exile_Chopper_Hummingbird_Civillian_BlueLine","Exile_Chopper_Hummingbird_Civillian_Digital","Exile_Chopper_Hummingbird_Civillian_Elliptical","Exile_Chopper_Hummingbird_Civillian_Furious","Exile_Chopper_Hummingbird_Civillian_GrayWatcher","Exile_Chopper_Hummingbird_Civillian_Jeans","Exile_Chopper_Hummingbird_Civillian_Light","Exile_Chopper_Hummingbird_Civillian_Shadow","Exile_Chopper_Hummingbird_Civillian_Sheriff","Exile_Chopper_Hummingbird_Civillian_Speedy","Exile_Chopper_Hummingbird_Civillian_Sunset","Exile_Chopper_Hummingbird_Civillian_Vrana","Exile_Chopper_Hummingbird_Civillian_Wasp","Exile_Chopper_Hummingbird_Civillian_Wave","Exile_Chopper_Huron_Black","Exile_Chopper_Huron_Green","Exile_Chopper_Mohawk_FIA","Exile_Chopper_Orca_CSAT","Exile_Chopper_Orca_Black","Exile_Chopper_Orca_BlackCustom","Exile_Chopper_Taru_Transport_CSAT","Exile_Chopper_Taru_Transport_Black","Exile_Chopper_Taru_CSAT","Exile_Chopper_Taru_Black","Exile_Chopper_Taru_Covered_CSAT","Exile_Chopper_Taru_Covered_Black","Exile_Plane_Cessna","I_mas_cars_UAZ_Unarmed","I_mas_cars_UAZ_Med","O_mas_cars_UAZ_Unarmed","O_mas_cars_UAZ_Med","B_mas_cars_Hilux_Unarmed","B_mas_cars_Hilux_Med","B_mas_cars_LR_Unarmed","B_mas_cars_LR_Med","I_mas_cars_LR_soft_Unarmed","I_mas_cars_LR_soft_Med","B_mas_HMMWV_UNA","B_mas_HMMWV_MEV","B_mas_HMMWV_UNA_des","B_mas_HMMWV_MEV_des","I_mas_cars_Ural","I_mas_cars_Ural_open","I_mas_cars_Ural_ammo","I_mas_cars_Ural_repair","I_mas_cars_Ural_fuel","O_mas_cars_Ural","O_mas_cars_Ural_open","O_mas_cars_Ural_ammo","O_mas_cars_Ural_repair","O_mas_cars_Ural_fuel","I_mas_cars_UAZ_MG","I_mas_cars_UAZ_M2","O_mas_cars_UAZ_MG","B_mas_cars_Hilux_MG","B_mas_cars_Hilux_M2","I_mas_cars_LR_soft_M2","B_mas_cars_LR_M2","B_mas_HMMWV_M134","B_mas_HMMWV_SOV_M134","B_mas_HMMWV_M134_des","B_mas_HMMWV_M2","B_mas_HMMWV_SOV_M134_des","B_mas_HMMWV_M2_des","B_mas_UH60M_MEV","B_mas_UH1Y_UNA_F","B_mas_UH1Y_MEV_F","B_Heli_Transport_01_F","B_Heli_Transport_01_camo_F","b_heli_transport_03_black_f","b_heli_transport_03_f","b_mas_uh60m","B_mas_CH_47F","B_mas_UH60M_SF","rhsusf_m1025_w","rhsusf_m1025_d","rhsusf_m1025_w_s","rhsusf_m1025_d_s","rhsusf_m1025_w_m2","rhsusf_m1025_d_m2","rhsusf_m1025_w_s_m2","rhsusf_m1025_d_s_m2","rhsusf_m998_w_2dr","rhsusf_m998_d_2dr","rhsusf_m998_w_2dr_halftop","rhsusf_m998_d_2dr_halftop","rhsusf_m998_w_2dr_fulltop","rhsusf_m998_d_2dr_fulltop","rhsusf_m998_w_4dr","rhsusf_m998_d_4dr","rhsusf_m998_w_4dr_halftop","rhsusf_m998_d_4dr_halftop","rhsusf_m998_w_4dr_fulltop","rhsusf_m998_d_4dr_fulltop","rhs_tigr_vdv","rhs_tigr_vmf","rhs_tigr_msv","rhs_tigr_vv","rhs_tigr_3camo_vdv","rhs_tigr_3camo_vmf","rhs_tigr_3camo_msv","rhs_tigr_3camo_vv","rhs_tigr_ffv_vdv","rhs_tigr_ffv_vmf","rhs_tigr_ffv_msv","rhs_tigr_ffv_vv","rhs_tigr_ffv_3camo_vdv","rhs_tigr_ffv_3camo_vmf","rhs_tigr_ffv_3camo_msv","rhs_tigr_ffv_3camo_vv","rhsusf_m977a2_usarmy_wd","rhsusf_m977a2_cpk_usarmy_wd","rhsusf_m978a2_usarmy_wd","rhsusf_m978a2_cpk_usarmy_wd","rhs_uaz_msv_01","rhs_uaz_vdv","rhs_uaz_vmf","rhs_uaz_vv","rhs_uaz_open_msv_01","rhs_uaz_open_vdv","rhs_uaz_open_vmf","rhs_uaz_open_vv","rhs_ural_msv_01","rhs_ural_vdv_01","rhs_ural_vmf_01","rhs_ural_vv_01","rhs_ural_flat_msv_01","rhs_ural_flat_vdv_01","rhs_ural_flat_vmf_01","rhs_ural_flat_vv_01","rhs_ural_open_msv_01","rhs_ural_open_vdv_01","rhs_ural_open_vmf_01","rhs_ural_open_vv_01","rhs_ural_open_flat_msv_01","rhs_ural_open_flat_vdv_01","rhs_ural_open_flat_vmf_01","rhs_ural_open_flat_vv_01","rhs_ural_fuel_msv_01","rhs_ural_fuel_vdv_01","rhs_ural_fuel_vmf_01","rhs_ural_fuel_vv_01","rhs_ural_civ_01","rhs_ural_civ_02","rhs_ural_civ_03","rhs_ural_open_civ_01","rhs_ural_open_civ_02","rhs_ural_open_civ_03","rhs_civ_truck_02_covered_f","rhs_civ_truck_02_transport_f","rhs_typhoon_vdv","rhs_gaz66_vmf","rhs_gaz66_vdv","rhs_gaz66_vv","rhs_gaz66_msv","rhs_gaz66_flat_vmf","rhs_gaz66_flat_vdv","rhs_gaz66_flat_vv","rhs_gaz66_flat_msv","rhs_gaz66o_vmf","rhs_gaz66o_vdv","rhs_gaz66o_vv","rhs_gaz66o_msv","rhs_gaz66o_flat_vmf","rhs_gaz66o_flat_vdv","rhs_gaz66o_flat_vv","rhs_gaz66o_flat_msv","rhs_gaz66_r142_vmf","rhs_gaz66_r142_vdv","rhs_gaz66_r142_msv","rhs_gaz66_r142_vv","rhs_gaz66_repair_vmf","rhs_gaz66_repair_vdv","rhs_gaz66_repair_vv","rhs_gaz66_repair_msv","rhs_gaz66_ap2_vmf","rhs_gaz66_ap2_vdv","rhs_gaz66_ap2_vv","rhs_gaz66_ap2_msv","rhs_gaz66_ammo_vmf","rhs_gaz66_ammo_vdv","rhs_gaz66_ammo_vv","rhs_gaz66_ammo_msv","rhs_uaz_chdkz","rhs_uaz_open_chdkz","rhs_ural_chdkz","rhs_ural_open_chdkz","rhs_ural_work_chdkz","rhs_ural_work_open_chdkz","C_Offroad_02_unarmed_F", "B_T_LSV_01_armed_F", "B_T_LSV_01_unarmed_F","O_T_LSV_02_armed_F","O_T_LSV_02_unarmed_F","B_T_UAV_03_F","C_Plane_Civil_01_F","O_T_UAV_04_CAS_F","B_T_VTOL_01_armed_F", "B_T_VTOL_01_infantry_F", "B_T_VTOL_01_vehicle_F","O_T_VTOL_02_infantry_F", "O_T_VTOL_02_vehicle_F","I_C_Boat_Transport_02_F","C_Scoooter_Transport_01_F","Exile_Car_MB4WDOpen"], 10];
			_weaponHolder = objNull;
			if ((count _nearestTruck > 0)) then 
			{
				_truck = _nearestTruck select 0;
				if (_truck canAdd "Exile_Item_WoodLog") then 
					{
					_truck addMagazineCargoGlobal ["Exile_Item_WoodLog", 1];
					[_sessionID, "notificationRequest", ["Success", [_woodVehicleText]]] call ExileServer_system_network_send_to;
					}
					else
					{
						_treePosition = getPosATL _tree;
						_treePosition set[2, 0];
						_spawnRadius = 3;
						_weaponHolders = nearestObjects[_treePosition, ["GroundWeaponHolder"], _spawnRadius];
						_weaponHolder = objNull;
						if (_weaponHolders isEqualTo []) then
						{
							_weaponHolderPosition = [_treePosition, _spawnRadius] call ExileClient_util_math_getRandomPositionInCircle;
							_weaponHolderPosition set [2, 0];
							_weaponHolder = createVehicle ["GroundWeaponHolder", _weaponHolderPosition, [], 0, "CAN_COLLIDE"];
							_weaponHolder setPosATL _weaponHolderPosition;
						}
						else 
						{
							_weaponHolder = _weaponHolders select 0;
						};
						_weaponHolder addMagazineCargoGlobal ["Exile_Item_WoodLog", 1];
						[_sessionID, "notificationRequest", ["Success", [_woodVehicleFullText]]] call ExileServer_system_network_send_to;
					};
			}
			else
			{
			_treePosition = getPosATL _tree;
			_treePosition set[2, 0];
			_spawnRadius = 3;
			_weaponHolders = nearestObjects[_treePosition, ["GroundWeaponHolder"], _spawnRadius];
			_weaponHolder = objNull;
			if (_weaponHolders isEqualTo []) then
			{
				_weaponHolderPosition = [_treePosition, _spawnRadius] call ExileClient_util_math_getRandomPositionInCircle;
				_weaponHolderPosition set [2, 0];
				_weaponHolder = createVehicle ["GroundWeaponHolder", _weaponHolderPosition, [], 0, "CAN_COLLIDE"];
				_weaponHolder setPosATL _weaponHolderPosition;
			}
			else 
			{
				_weaponHolder = _weaponHolders select 0;
			};
			_weaponHolder addMagazineCargoGlobal ["Exile_Item_WoodLog", 1];
			[_sessionID, "notificationRequest", ["Success", [_woodText]]] call ExileServer_system_network_send_to;
			};
		};
	};
};
true