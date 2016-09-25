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

class CfgSMTowing
{
	class Offsets
	{
		//Default for Large vehicles
		class DefaultFar { offset[] = {0,-10,0}; };
		//Default for small vehicles
		class DefaultClose { offset[] = {0,-5,0}; };
		//Default for AIR
		class DefaultAir { offset[] = {0,0,-10}; };
		//If there is no class for the vehicle.
		class Default { offset[] = {0,-11,0}; };

		class Exile_Car_Ikarus_Blue: DefaultFar {};
		class Exile_Car_Kart_Orange: DefaultClose {};
		class Exile_Bike_OldBike: DefaultClose {};
		class Exile_Bike_MountainBike: DefaultClose {};
		class Exile_Bike_QuadBike_Black: DefaultClose {};
		class Exile_Bike_QuadBike_Blue: DefaultClose {};
		class Exile_Bike_QuadBike_Red: DefaultClose {};
		class Exile_Bike_QuadBike_White: DefaultClose {};
		class Exile_Bike_QuadBike_Nato: DefaultClose {};
		class Exile_Bike_QuadBike_Csat:  DefaultClose {};
		class Exile_Bike_QuadBike_Fia: DefaultClose {};
		class Exile_Bike_QuadBike_Guerilla01: DefaultClose {};
		class Exile_Bike_QuadBike_Guerilla02: DefaultClose {};
		class Exile_Car_Kart_BluKing: DefaultClose {};
		class Exile_Car_Kart_RedStone: DefaultClose {};
		class Exile_Car_Kart_Vrana: DefaultClose {};
		class Exile_Car_Kart_Green: DefaultClose {};
		class Exile_Car_Kart_Blue: DefaultClose {};
		class Exile_Car_Kart_White: DefaultClose {};
		class Exile_Car_Kart_Yellow: DefaultClose {};
		class Exile_Car_Kart_Black: DefaultClose {};
		class Exile_Boat_MotorBoat_Police: DefaultFar {};
		class Exile_Boat_MotorBoat_Orange: DefaultFar {};
		class Exile_Boat_MotorBoat_White: DefaultFar {};
		class Exile_Boat_RubberDuck_CSAT: DefaultFar {};
		class Exile_Boat_RubberDuck_Digital: DefaultFar {};
		class Exile_Boat_RubberDuck_Orange: DefaultFar {};
		class Exile_Boat_RubberDuck_Blue: DefaultFar {};
		class Exile_Boat_RubberDuck_Black: DefaultFar {};
		class Exile_Boat_SDV_CSAT: DefaultFar {};
		class Exile_Boat_SDV_Digital: DefaultFar {};
		class Exile_Boat_SDV_Grey: DefaultFar {};
		class Exile_Chopper_Huey_Green: DefaultAir {};
		class Exile_Chopper_Huey_Desert: DefaultAir {};
		class Exile_Chopper_Huey_Armed_Green: DefaultAir {};
		class Exile_Chopper_Huey_Armed_Desert: DefaultAir {};
		class Exile_Chopper_Hellcat_Green: DefaultAir {};
		class Exile_Chopper_Hellcat_FIA: DefaultAir {};
		class Exile_Chopper_Hummingbird_Green: DefaultAir {};
		class Exile_Chopper_Hummingbird_Civillian_Blue: DefaultAir {};
		class Exile_Chopper_Hummingbird_Civillian_Red: DefaultAir {};
		class Exile_Chopper_Hummingbird_Civillian_ION: DefaultAir {};
		class Exile_Chopper_Hummingbird_Civillian_BlueLine: DefaultAir {};
		class Exile_Chopper_Hummingbird_Civillian_Digital: DefaultAir {};
		class Exile_Chopper_Hummingbird_Civillian_Elliptical: DefaultAir {};
		class Exile_Chopper_Hummingbird_Civillian_Furious: DefaultAir {};
		class Exile_Chopper_Hummingbird_Civillian_GrayWatcher: DefaultAir {};
		class Exile_Chopper_Hummingbird_Civillian_Jeans: DefaultAir {};
		class Exile_Chopper_Hummingbird_Civillian_Light: DefaultAir {};
		class Exile_Chopper_Hummingbird_Civillian_Shadow: DefaultAir {};
		class Exile_Chopper_Hummingbird_Civillian_Sheriff: DefaultAir {};
		class Exile_Chopper_Hummingbird_Civillian_Speedy: DefaultAir {};
		class Exile_Chopper_Hummingbird_Civillian_Sunset: DefaultAir {};
		class Exile_Chopper_Hummingbird_Civillian_Vrana: DefaultAir {};
		class Exile_Chopper_Hummingbird_Civillian_Wasp: DefaultAir {};
		class Exile_Chopper_Hummingbird_Civillian_Wave: DefaultAir {};
		class Exile_Chopper_Huron_Black: DefaultAir {};
		class Exile_Chopper_Huron_Green: DefaultAir {};
		class Exile_Chopper_Mohawk_FIA: DefaultAir {};
		class Exile_Chopper_Orca_CSAT: DefaultAir {};
		class Exile_Chopper_Orca_Black: DefaultAir {};
		class Exile_Chopper_Orca_BlackCustom: DefaultAir {};
		class Exile_Chopper_Taru_Transport_CSAT: DefaultAir {};
		class Exile_Chopper_Taru_Transport_Black: DefaultAir {};
		class Exile_Chopper_Taru_CSAT: DefaultAir {};
		class Exile_Chopper_Taru_Black: DefaultAir {};
		class Exile_Chopper_Taru_Covered_CSAT: DefaultAir {};
		class Exile_Chopper_Taru_Covered_Black: DefaultAir {};
		class Exile_Plane_Cessna: DefaultAir {};
		class Exile_Car_Hatchback_Beige: DefaultFar {};
		class Exile_Car_Hatchback_Green: DefaultFar {};
		class Exile_Car_Hatchback_Blue: DefaultFar {};
		class Exile_Car_Hatchback_BlueCustom: DefaultFar {};
		class Exile_Car_Hatchback_BeigeCustom: DefaultFar {};
		class Exile_Car_Hatchback_Yellow: DefaultFar {};
		class Exile_Car_Hatchback_Grey: DefaultFar {};
		class Exile_Car_Hatchback_Black: DefaultFar {};
		class Exile_Car_Hatchback_Dark: DefaultFar {};
		class Exile_Car_Hatchback_Rusty1: DefaultFar {};
		class Exile_Car_Hatchback_Rusty2: DefaultFar {};
		class Exile_Car_Hatchback_Rusty3: DefaultFar {};
		class Exile_Car_Ikarus_Red: DefaultFar {};
		class Exile_Car_Ikarus_Party: DefaultFar {};
		class Exile_Car_Ural_Open_Blue: DefaultFar {};
		class Exile_Car_Ural_Open_Yellow: DefaultFar {};
		class Exile_Car_Ural_Open_Worker: DefaultFar {};
		class Exile_Car_Ural_Open_Military: DefaultFar {};
		class Exile_Car_Ural_Covered_Blue: DefaultFar {};
		class Exile_Car_Ural_Covered_Yellow: DefaultFar {};
		class Exile_Car_Ural_Covered_Worker: DefaultFar {};
		class Exile_Car_Ural_Covered_Military: DefaultFar {};
		class Exile_Car_SUVXL_Black: DefaultFar {};
		class Exile_Car_Tractor_Red: DefaultFar {};
		class Exile_Car_OldTractor_Red: DefaultFar {};
		class Exile_Car_TowTractor_White: DefaultFar {};
		class Exile_Car_Octavius_White: DefaultFar {};
		class Exile_Car_Octavius_Black: DefaultFar {};
		class Exile_Car_UAZ_Green: DefaultFar {};
		class Exile_Car_UAZ_Open_Green: DefaultFar {};
		class Exile_Car_LandRover_Red: DefaultFar {};
		class Exile_Car_LandRover_Urban: DefaultFar {};
		class Exile_Car_LandRover_Green: DefaultFar {};
		class Exile_Car_LandRover_Sand: DefaultFar {};
		class Exile_Car_LandRover_Desert: DefaultFar {};
		class Exile_Car_LandRover_Ambulance_Green: DefaultFar {};
		class Exile_Car_LandRover_Ambulance_Desert: DefaultFar {};
		class Exile_Car_LandRover_Ambulance_Sand: DefaultFar {};
		class Exile_Car_Lada_Green: DefaultFar {};
		class Exile_Car_Lada_Taxi: DefaultFar {};
		class Exile_Car_Lada_Red: DefaultFar {};
		class Exile_Car_Lada_White: DefaultFar {};
		class Exile_Car_Lada_Hipster: DefaultFar {};
		class Exile_Car_Volha_Blue: DefaultFar {};
		class Exile_Car_Volha_White: DefaultFar {};
		class Exile_Car_Volha_Black: DefaultFar {};
		class Exile_Car_Hatchback_Sport_Red: DefaultFar {};
		class Exile_Car_Hatchback_Sport_Blue: DefaultFar {};
		class Exile_Car_Hatchback_Sport_Orange: DefaultFar {};
		class Exile_Car_Hatchback_Sport_White: DefaultFar {};
		class Exile_Car_Hatchback_Sport_Beige: DefaultFar {};
		class Exile_Car_Hatchback_Sport_Green: DefaultFar {};
		class Exile_Car_HEMMT: DefaultFar {};
		class Exile_Car_Hunter: DefaultFar {};
		class Exile_Car_Ifrit: DefaultFar {};
		class Exile_Car_Offroad_Red: DefaultFar {};
		class Exile_Car_Offroad_Beige: DefaultFar {};
		class Exile_Car_Offroad_White: DefaultFar {};
		class Exile_Car_Offroad_Blue: DefaultFar {};
		class Exile_Car_Offroad_DarkRed: DefaultFar {};
		class Exile_Car_Offroad_BlueCustom: DefaultFar {};
		class Exile_Car_Offroad_Guerilla01: DefaultFar {};
		class Exile_Car_Offroad_Guerilla02: DefaultFar {};
		class Exile_Car_Offroad_Guerilla03: DefaultFar {};
		class Exile_Car_Offroad_Guerilla04: DefaultFar {};
		class Exile_Car_Offroad_Guerilla05: DefaultFar {};
		class Exile_Car_Offroad_Guerilla06: DefaultFar {};
		class Exile_Car_Offroad_Guerilla07: DefaultFar {};
		class Exile_Car_Offroad_Guerilla08: DefaultFar {};
		class Exile_Car_Offroad_Guerilla09: DefaultFar {};
		class Exile_Car_Offroad_Guerilla10: DefaultFar {};
		class Exile_Car_Offroad_Guerilla11: DefaultFar {};
		class Exile_Car_Offroad_Guerilla12: DefaultFar {};
		class Exile_Car_Offroad_Rusty1: DefaultFar {};
		class Exile_Car_Offroad_Rusty2: DefaultFar {};
		class Exile_Car_Offroad_Rusty3: DefaultFar {};
		class Exile_Car_Offroad_Armed_Guerilla01: DefaultFar {};
		class Exile_Car_Offroad_Armed_Guerilla02: DefaultFar {};
		class Exile_Car_Offroad_Armed_Guerilla03: DefaultFar {};
		class Exile_Car_Offroad_Armed_Guerilla04: DefaultFar {};
		class Exile_Car_Offroad_Armed_Guerilla05: DefaultFar {};
		class Exile_Car_Offroad_Armed_Guerilla06: DefaultFar {};
		class Exile_Car_Offroad_Armed_Guerilla07: DefaultFar {};
		class Exile_Car_Offroad_Armed_Guerilla08: DefaultFar {};
		class Exile_Car_Offroad_Armed_Guerilla09: DefaultFar {};
		class Exile_Car_Offroad_Armed_Guerilla10: DefaultFar {};
		class Exile_Car_Offroad_Armed_Guerilla11: DefaultFar {};
		class Exile_Car_Offroad_Armed_Guerilla12: DefaultFar {};
		class Exile_Car_Offroad_Repair_Civillian: DefaultFar {};
		class Exile_Car_Offroad_Repair_Red: DefaultFar {};
		class Exile_Car_Offroad_Repair_Beige: DefaultFar {};
		class Exile_Car_Offroad_Repair_White: DefaultFar {};
		class Exile_Car_Offroad_Repair_Blue: DefaultFar {};
		class Exile_Car_Offroad_Repair_DarkRed: DefaultFar {};
		class Exile_Car_Offroad_Repair_BlueCustom: DefaultFar {};
		class Exile_Car_Offroad_Repair_Guerilla01: DefaultFar {};
		class Exile_Car_Offroad_Repair_Guerilla02: DefaultFar {};
		class Exile_Car_Offroad_Repair_Guerilla03: DefaultFar {};
		class Exile_Car_Offroad_Repair_Guerilla04: DefaultFar {};
		class Exile_Car_Offroad_Repair_Guerilla05: DefaultFar {};
		class Exile_Car_Offroad_Repair_Guerilla06: DefaultFar {};
		class Exile_Car_Offroad_Repair_Guerilla07: DefaultFar {};
		class Exile_Car_Offroad_Repair_Guerilla08: DefaultFar {};
		class Exile_Car_Offroad_Repair_Guerilla09: DefaultFar {};
		class Exile_Car_Offroad_Repair_Guerilla10: DefaultFar {};
		class Exile_Car_Offroad_Repair_Guerilla11: DefaultFar {};
		class Exile_Car_Offroad_Repair_Guerilla12: DefaultFar {};
		class Exile_Car_Strider: DefaultFar {};
		class Exile_Car_SUV_Red: DefaultFar {};
		class Exile_Car_SUV_Black: DefaultFar {};
		class Exile_Car_SUV_Grey: DefaultFar {};
		class Exile_Car_SUV_Orange: DefaultFar {};
		class Exile_Car_Tempest: DefaultFar {};
		class Exile_Car_Van_Black: DefaultFar {};
		class Exile_Car_Van_White: DefaultFar {};
		class Exile_Car_Van_Red: DefaultFar {};
		class Exile_Car_Van_Guerilla01: DefaultFar {};
		class Exile_Car_Van_Guerilla02: DefaultFar {};
		class Exile_Car_Van_Guerilla03: DefaultFar {};
		class Exile_Car_Van_Guerilla04: DefaultFar {};
		class Exile_Car_Van_Guerilla05: DefaultFar {};
		class Exile_Car_Van_Guerilla06: DefaultFar {};
		class Exile_Car_Van_Guerilla07: DefaultFar {};
		class Exile_Car_Van_Guerilla08: DefaultFar {};
		class Exile_Car_Van_Box_Black: DefaultFar {};
		class Exile_Car_Van_Box_White: DefaultFar {};
		class Exile_Car_Van_Box_Red: DefaultFar {};
		class Exile_Car_Van_Box_Guerilla01: DefaultFar {};
		class Exile_Car_Van_Box_Guerilla02: DefaultFar {};
		class Exile_Car_Van_Box_Guerilla03: DefaultFar {};
		class Exile_Car_Van_Box_Guerilla04: DefaultFar {};
		class Exile_Car_Van_Box_Guerilla05: DefaultFar {};
		class Exile_Car_Van_Box_Guerilla06: DefaultFar {};
		class Exile_Car_Van_Box_Guerilla07: DefaultFar {};
		class Exile_Car_Van_Box_Guerilla08: DefaultFar {};
		class Exile_Car_Van_Fuel_Black: DefaultFar {};
		class Exile_Car_Van_Fuel_White: DefaultFar {};
		class Exile_Car_Van_Fuel_Red: DefaultFar {};
		class Exile_Car_Van_Fuel_Guerilla01: DefaultFar {};
		class Exile_Car_Van_Fuel_Guerilla02: DefaultFar {};
		class Exile_Car_Van_Fuel_Guerilla03: DefaultFar {};
		class Exile_Car_Zamak: DefaultFar {};
	};
};
