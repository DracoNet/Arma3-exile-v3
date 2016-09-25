/**
 * config
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
class CfgPatches
{
	class exile_server_config
	{
		requiredVersion = 0.1;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
	};
};


class CfgBuildings
{
	#include "CfgBuildings_Esseker.h"
};
class CfgLootTables
{
	/**
	  Result of 100 rounds:

	  U_C_Man_casual_3_F
	  ItemWatch
	  FlareWhite_F
	  Exile_Item_Can_Empty
	  FlareGreen_F
	  H_StrawHat
	  FlareWhite_F
	  Exile_Item_GloriousKnakworst
	  hgun_P07_khk_F
	  Chemlight_blue
	  Exile_Item_Cheathas
	  V_TacVest_blk_POLICE
	  V_Rangemaster_belt
	  Chemlight_green
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_SeedAstics
	  U_C_Poloshirt_salmon
	  hgun_Pistol_Signal_F
	  FlareRed_F
	  Exile_Weapon_TaurusGold
	  FlareWhite_F
	  U_C_Man_casual_3_F
	  B_OutdoorPack_blu
	  Exile_Weapon_M1014
	  Exile_Weapon_M1014
	  H_Cap_blk_Raven
	  FlareWhite_F
	  B_AssaultPack_tna_F
	  H_Bandanna_surfer
	  FlareGreen_F
	  hgun_Pistol_01_F
	  H_Hat_blue
	  Exile_Item_ToiletPaper
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Noodles
	  U_C_Man_casual_2_F
	  30Rnd_9x21_Mag_SMG_02
	  SMG_02_F
	  30Rnd_45ACP_Mag_SMG_01_Tracer_Green
	  Exile_Item_Surstromming
	  Exile_Item_CockONut
	  ItemMap
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_EMRE
	  Exile_Weapon_Makarov
	  Exile_Weapon_M1014
	  Exile_Item_Can_Empty
	  Exile_Item_ToiletPaper
	  U_I_C_Soldier_Bandit_5_F
	  Exile_Item_Magazine04
	  FlareGreen_F
	  Chemlight_yellow
	  FlareYellow_F
	  FlareYellow_F
	  30Rnd_45ACP_Mag_SMG_01
	  Exile_Item_Can_Empty
	  muzzle_snds_acp
	  Exile_Weapon_M1014
	  U_C_Man_casual_5_F
	  Exile_Item_Noodles
	  ItemMap
	  Exile_Item_Surstromming
	  hgun_Pistol_Signal_F
	  Exile_Item_ZipTie
	  Exile_Item_Magazine04
	  Exile_Item_EMRE
	  Exile_Item_Cheathas
	  Exile_Weapon_M1014
	  hgun_P07_F
	  Chemlight_red
	  Exile_Item_ChristmasTinner
	  Exile_Item_ToiletPaper
	  B_Kitbag_cbr
	  Exile_Item_ZipTie
	  Exile_Item_Cheathas
	  11Rnd_45ACP_Mag
	  U_C_Poloshirt_burgundy
	  U_C_man_sport_3_F
	  V_Rangemaster_belt
	  Exile_Item_Can_Empty
	  H_Bandanna_surfer
	  Chemlight_green
	  B_Kitbag_mcamo
	  Exile_Item_Magazine03
	  Exile_Item_Can_Empty
	  H_Cap_blu
	  Exile_Item_PlasticBottleDirtyWater
	  hgun_ACPC2_F
	  Exile_Magazine_8Rnd_74Slug
	  Exile_Item_SausageGravy
	  FlareWhite_F
	  U_I_C_Soldier_Bandit_2_F
	  U_C_man_sport_3_F
	  Exile_Item_BBQSandwich
	  Exile_Item_PlasticBottleEmpty
	  30Rnd_9x21_Mag_SMG_02_Tracer_Red
	  Exile_Item_MountainDupe
	  Exile_Item_Magazine01
	  H_Hat_tan
	  optic_Aco_smg
	*/
	class CivillianLowerClass
	{
		count = 161;
		half = 7481.25369930428;
		halfIndex = 80;
		sum = 10000;
		items[] = 
		{
			{398.936170212766, "Exile_Item_Can_Empty"}, // 3.99%
			{797.872340425532, "Exile_Item_ToiletPaper"}, // 3.99%
			{1196.8085106383, "Exile_Item_PlasticBottleEmpty"}, // 3.99%
			{1409.57446808511, "Exile_Weapon_M1014"}, // 2.13%
			{1569.14893617021, "Exile_Magazine_8Rnd_74Slug"}, // 1.60%
			{1702.12765957447, "FlareRed_F"}, // 1.33%
			{1835.10638297872, "FlareGreen_F"}, // 1.33%
			{1968.08510638298, "Chemlight_yellow"}, // 1.33%
			{2101.06382978723, "Chemlight_red"}, // 1.33%
			{2234.04255319149, "Chemlight_green"}, // 1.33%
			{2367.02127659574, "Chemlight_blue"}, // 1.33%
			{2500, "V_Rangemaster_belt"}, // 1.33%
			{2632.97872340425, "FlareWhite_F"}, // 1.33%
			{2765.95744680851, "FlareYellow_F"}, // 1.33%
			{2893.61702127659, "Exile_Item_PlasticBottleDirtyWater"}, // 1.28%
			{3011.82033096927, "Exile_Item_Heatpack"}, // 1.18%
			{3125.59101654846, "Exile_Item_InstantCoffee"}, // 1.14%
			{3231.97399527187, "Exile_Item_ChocolateMilk"}, // 1.06%
			{3335.40189125295, "ItemMap"}, // 1.03%
			{3435.13593380615, "Exile_Item_Magazine04"}, // 1.00%
			{3534.86997635934, "Exile_Item_Magazine03"}, // 1.00%
			{3634.60401891253, "Exile_Item_Magazine02"}, // 1.00%
			{3734.33806146572, "Exile_Item_Magazine01"}, // 1.00%
			{3827.4231678487, "Exile_Item_Raisins"}, // 0.93%
			{3920.50827423168, "Exile_Item_Moobar"}, // 0.93%
			{4009.16075650118, "ItemRadio"}, // 0.89%
			{4097.81323877069, "ItemWatch"}, // 0.89%
			{4182.91962174941, "Exile_Item_MountainDupe"}, // 0.85%
			{4265.66193853428, "Exile_Item_CockONut"}, // 0.83%
			{4348.40425531915, "Exile_Item_SeedAstics"}, // 0.83%
			{4420.80378250591, "Exile_Item_Surstromming"}, // 0.72%
			{4493.20330969267, "Exile_Item_ChristmasTinner"}, // 0.72%
			{4565.60283687943, "Exile_Item_SausageGravy"}, // 0.72%
			{4638.0023640662, "Exile_Item_Noodles"}, // 0.72%
			{4710.40189125296, "Exile_Item_DsNuts"}, // 0.72%
			{4782.80141843972, "Exile_Item_Cheathas"}, // 0.72%
			{4855.20094562648, "Exile_Item_BeefParts"}, // 0.72%
			{4927.60047281324, "Exile_Item_Dogfood"}, // 0.72%
			{5000, "Exile_Item_CatFood"}, // 0.72%
			{5072.39952718677, "Exile_Item_BBQSandwich"}, // 0.72%
			{5144.79905437353, "Exile_Item_MacasCheese"}, // 0.72%
			{5217.13947990544, "Exile_Item_EnergyDrink"}, // 0.72%
			{5283.62884160757, "V_Press_F"}, // 0.66%
			{5350.1182033097, "V_TacVest_blk_POLICE"}, // 0.66%
			{5413.94799054374, "H_Cap_press"}, // 0.64%
			{5477.77777777778, "H_Cap_red"}, // 0.64%
			{5541.60756501183, "H_Cap_tan"}, // 0.64%
			{5605.43735224587, "H_Hat_blue"}, // 0.64%
			{5669.26713947991, "H_StrawHat_dark"}, // 0.64%
			{5733.09692671395, "H_Hat_checker"}, // 0.64%
			{5796.926713948, "H_Hat_grey"}, // 0.64%
			{5860.75650118204, "H_Hat_tan"}, // 0.64%
			{5924.58628841608, "H_StrawHat"}, // 0.64%
			{5988.41607565012, "H_Hat_brown"}, // 0.64%
			{6050.47281323878, "Exile_Item_GloriousKnakworst"}, // 0.62%
			{6110.04728132388, "Exile_Item_Beer"}, // 0.60%
			{6169.14893617022, "Binocular"}, // 0.59%
			{6228.25059101655, "ItemGPS"}, // 0.59%
			{6285.69739952719, "muzzle_snds_L"}, // 0.57%
			{6343.14420803783, "muzzle_snds_acp"}, // 0.57%
			{6399.1352494712, "U_C_Journalist"}, // 0.56%
			{6455.12629090457, "U_Rangemaster"}, // 0.56%
			{6511.11733233794, "U_C_HunterBody_grn"}, // 0.56%
			{6567.10837377131, "U_C_Poor_shorts_1"}, // 0.56%
			{6623.09941520469, "U_C_Scientist"}, // 0.56%
			{6679.09045663806, "U_C_Poor_2"}, // 0.56%
			{6735.08149807143, "U_C_Poor_1"}, // 0.56%
			{6789.76433760215, "B_OutdoorPack_blk"}, // 0.55%
			{6844.15563499457, "SMG_01_F"}, // 0.54%
			{6897.34712435627, "H_Bandanna_surfer"}, // 0.53%
			{6950.53861371797, "H_Beret_blk_POLICE"}, // 0.53%
			{7003.73010307967, "H_Cap_blk"}, // 0.53%
			{7056.92159244137, "H_Cap_blu"}, // 0.53%
			{7110.11308180308, "H_Cap_grn"}, // 0.53%
			{7163.30457116478, "H_Cap_headphones"}, // 0.53%
			{7216.49606052648, "H_Cap_blk_Raven"}, // 0.53%
			{7269.68754988818, "Exile_Item_ZipTie"}, // 0.53%
			{7322.87903924989, "H_Cap_oli"}, // 0.53%
			{7375.67059260135, "SMG_02_F"}, // 0.53%
			{7428.46214595281, "SMG_05_F"}, // 0.53%
			{7481.25369930428, "hgun_PDW2000_F"}, // 0.53%
			{7532.96764729482, "Exile_Item_CanOpener"}, // 0.52%
			{7584.68159528536, "Exile_Item_Matches"}, // 0.52%
			{7635.7454250726, "Exile_Item_PlasticBottleFreshWater"}, // 0.51%
			{7685.9486285151, "hgun_P07_F"}, // 0.50%
			{7735.16318409275, "B_OutdoorPack_tan"}, // 0.49%
			{7784.3777396704, "B_OutdoorPack_blu"}, // 0.49%
			{7832.19031437755, "hgun_Rook40_F"}, // 0.48%
			{7880.0028890847, "hgun_ACPC2_F"}, // 0.48%
			{7923.74916070928, "B_HuntingBackpack"}, // 0.44%
			{7967.29774849079, "U_C_Poloshirt_burgundy"}, // 0.44%
			{8010.8463362723, "U_C_Poloshirt_blue"}, // 0.44%
			{8054.39492405381, "U_C_Poloshirt_salmon"}, // 0.44%
			{8097.94351183532, "U_C_Poloshirt_tricolour"}, // 0.44%
			{8141.49209961683, "U_C_Poloshirt_stripped"}, // 0.44%
			{8179.77008728833, "B_AssaultPack_tna_F"}, // 0.38%
			{8218.04807495984, "B_AssaultPack_mcamo"}, // 0.38%
			{8256.32606263134, "B_AssaultPack_cbr"}, // 0.38%
			{8294.60405030285, "B_AssaultPack_blk"}, // 0.38%
			{8332.88203797435, "B_AssaultPack_sgg"}, // 0.38%
			{8371.16002564586, "B_AssaultPack_rgr"}, // 0.38%
			{8409.43801331736, "B_AssaultPack_dgtl"}, // 0.38%
			{8447.71600098887, "B_AssaultPack_khk"}, // 0.38%
			{8478.82213511852, "U_C_Man_casual_1_F"}, // 0.31%
			{8509.92826924817, "U_I_C_Soldier_Bandit_1_F"}, // 0.31%
			{8541.03440337782, "U_I_C_Soldier_Bandit_2_F"}, // 0.31%
			{8572.14053750747, "U_C_man_sport_3_F"}, // 0.31%
			{8603.24667163712, "U_I_C_Soldier_Bandit_4_F"}, // 0.31%
			{8634.35280576677, "U_I_C_Soldier_Bandit_5_F"}, // 0.31%
			{8665.45893989642, "U_C_man_sport_1_F"}, // 0.31%
			{8696.56507402607, "U_C_man_sport_2_F"}, // 0.31%
			{8727.67120815572, "U_I_C_Soldier_Bandit_3_F"}, // 0.31%
			{8758.77734228537, "U_C_Man_casual_6_F"}, // 0.31%
			{8789.88347641502, "U_C_Man_casual_5_F"}, // 0.31%
			{8820.98961054467, "U_C_Man_casual_4_F"}, // 0.31%
			{8852.09574467432, "U_C_Man_casual_3_F"}, // 0.31%
			{8883.20187880397, "U_C_Man_casual_2_F"}, // 0.31%
			{8914.28005236361, "Exile_Weapon_Makarov"}, // 0.31%
			{8945.35822592326, "hgun_Pistol_01_F"}, // 0.31%
			{8976.43639948291, "Exile_Weapon_TaurusGold"}, // 0.31%
			{9007.51457304255, "Exile_Weapon_Taurus"}, // 0.31%
			{9038.5927466022, "Exile_Weapon_Colt1911"}, // 0.31%
			{9069.67092016185, "hgun_P07_khk_F"}, // 0.31%
			{9100.74909372149, "hgun_Pistol_heavy_01_F"}, // 0.31%
			{9131.82726728114, "hgun_Pistol_heavy_02_F"}, // 0.31%
			{9162.90544084079, "hgun_Pistol_Signal_F"}, // 0.31%
			{9193.93380963511, "Exile_Item_CookingPot"}, // 0.31%
			{9224.96217842944, "Exile_Item_EMRE"}, // 0.31%
			{9254.74941247199, "Exile_Item_PowerDrink"}, // 0.30%
			{9284.30023989516, "11Rnd_45ACP_Mag"}, // 0.30%
			{9313.85106731833, "30Rnd_9x21_Mag"}, // 0.30%
			{9343.40189474149, "Exile_Magazine_7Rnd_45ACP"}, // 0.30%
			{9372.95272216466, "Exile_Magazine_8Rnd_9x18"}, // 0.30%
			{9402.50354958783, "10Rnd_9x21_Mag"}, // 0.30%
			{9432.05437701099, "Exile_Magazine_6Rnd_45ACP"}, // 0.30%
			{9461.60520443416, "9Rnd_45ACP_Mag"}, // 0.30%
			{9488.94662419952, "B_Kitbag_sgg"}, // 0.27%
			{9516.28804396488, "B_Kitbag_cbr"}, // 0.27%
			{9543.62946373024, "B_Kitbag_mcamo"}, // 0.27%
			{9570.22520841109, "optic_ACO_grn_smg"}, // 0.27%
			{9596.82095309194, "optic_Aco"}, // 0.27%
			{9623.4166977728, "30Rnd_45ACP_Mag_SMG_01"}, // 0.27%
			{9650.01244245365, "30Rnd_45ACP_Mag_SMG_01_Tracer_Green"}, // 0.27%
			{9676.6081871345, "optic_Holosight_smg"}, // 0.27%
			{9703.20393181535, "optic_Aco_smg"}, // 0.27%
			{9729.7996764962, "optic_Holosight_smg_blk_F"}, // 0.27%
			{9756.39542117705, "optic_ACO_grn"}, // 0.27%
			{9782.99116585791, "30Rnd_9x21_Mag_SMG_02_Tracer_Green"}, // 0.27%
			{9809.58691053876, "30Rnd_9x21_Mag_SMG_02"}, // 0.27%
			{9836.18265521961, "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow"}, // 0.27%
			{9862.77839990046, "30Rnd_9x21_Mag_SMG_02_Tracer_Red"}, // 0.27%
			{9886.41906183899, "6Rnd_45ACP_Cylinder"}, // 0.24%
			{9908.75948737091, "optic_MRD"}, // 0.22%
			{9931.09991290282, "optic_Yorris"}, // 0.22%
			{9945.87532661441, "16Rnd_9x21_Mag"}, // 0.15%
			{9960.65074032599, "Exile_Item_MobilePhone"}, // 0.15%
			{9970.9935299241, "6Rnd_RedSignal_F"}, // 0.10%
			{9981.33631952221, "6Rnd_GreenSignal_F"}, // 0.10%
			{9987.55754634814, "U_OrestesBody"}, // 0.06%
			{9993.77877317407, "U_NikosBody"}, // 0.06%
			{10000, "U_NikosAgedBody"} // 0.06%
		};
	};

	/**
	  Result of 100 rounds:

	  Exile_Item_ToiletPaper
	  optic_Holosight_smg_blk_F
	  hgun_P07_F
	  Chemlight_yellow
	  V_Rangemaster_belt
	  Exile_Item_Can_Empty
	  Exile_Item_SausageGravy
	  hgun_ACPC2_F
	  B_AssaultPack_cbr
	  hgun_P07_khk_F
	  Exile_Item_Surstromming
	  Exile_Weapon_M1014
	  Exile_Item_Can_Empty
	  Exile_Item_PlasticBottleEmpty
	  Chemlight_red
	  Exile_Item_BBQSandwich
	  hgun_Pistol_01_F
	  B_AssaultPack_rgr
	  Exile_Item_GloriousKnakworst
	  ItemMap
	  Chemlight_yellow
	  Chemlight_green
	  muzzle_snds_65_TI_ghex_F
	  V_Rangemaster_belt
	  U_C_Scientist
	  hgun_P07_F
	  Exile_Item_Can_Empty
	  9Rnd_45ACP_Mag
	  U_Rangemaster
	  V_Press_F
	  Chemlight_red
	  Exile_Item_ToiletPaper
	  U_I_C_Soldier_Bandit_2_F
	  Exile_Item_Noodles
	  Exile_Item_ChocolateMilk
	  ItemWatch
	  Binocular
	  H_Hat_brown
	  Exile_Item_Moobar
	  Exile_Magazine_8Rnd_74Slug
	  FlareWhite_F
	  muzzle_snds_L
	  Exile_Item_Dogfood
	  B_OutdoorPack_tan
	  Exile_Item_BBQSandwich
	  FlareRed_F
	  hgun_P07_F
	  Exile_Item_ToiletPaper
	  H_Hat_grey
	  hgun_Rook40_F
	  Exile_Item_CatFood
	  H_Cap_red
	  H_Cap_blk_Raven
	  Exile_Item_Magazine04
	  V_TacVest_blk_POLICE
	  Exile_Weapon_TaurusGold
	  muzzle_snds_65_TI_blk_F
	  H_StrawHat
	  Exile_Item_Beer
	  Exile_Item_SausageGravy
	  Exile_Magazine_20Rnd_762x51_DMR_Red
	  H_Hat_tan
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_InstantCoffee
	  H_Cap_grn
	  Exile_Item_Moobar
	  Exile_Item_Magazine03
	  H_Hat_checker
	  B_AssaultPack_blk
	  U_I_C_Soldier_Bandit_3_F
	  U_C_Man_casual_4_F
	  ItemMap
	  Exile_Item_CockONut
	  Exile_Item_SausageGravy
	  Exile_Item_ToiletPaper
	  U_C_HunterBody_grn
	  SMG_02_F
	  FlareYellow_F
	  Exile_Item_CanOpener
	  Exile_Item_Moobar
	  Exile_Item_Can_Empty
	  U_OrestesBody
	  Exile_Item_Magazine04
	  Exile_Magazine_6Rnd_45ACP
	  Exile_Item_ToiletPaper
	  H_Beret_blk_POLICE
	  Exile_Item_MountainDupe
	  Exile_Item_DsNuts
	  muzzle_snds_58_blk_F
	  Exile_Item_MacasCheese
	  Exile_Item_Surstromming
	  Exile_Item_Can_Empty
	  Exile_Magazine_20Rnd_9x39
	  optic_Yorris
	  V_Rangemaster_belt
	  SMG_05_F
	  Exile_Item_Noodles
	  Chemlight_red
	  Exile_Item_ToiletPaper
	  Exile_Item_ToiletPaper
	*/
	class CivillianUpperClass
	{
		count = 295;
		half = 9336.05248315373;
		halfIndex = 147;
		sum = 9999.99999999997;
		items[] = 
		{
			{380.710659898477, "Exile_Item_Can_Empty"}, // 3.81%
			{761.421319796954, "Exile_Item_ToiletPaper"}, // 3.81%
			{1142.13197969543, "Exile_Item_PlasticBottleEmpty"}, // 3.81%
			{1345.17766497462, "Exile_Weapon_M1014"}, // 2.03%
			{1497.46192893401, "Exile_Magazine_8Rnd_74Slug"}, // 1.52%
			{1624.3654822335, "V_Rangemaster_belt"}, // 1.27%
			{1751.269035533, "Chemlight_blue"}, // 1.27%
			{1878.17258883249, "Chemlight_green"}, // 1.27%
			{2005.07614213198, "Chemlight_red"}, // 1.27%
			{2131.97969543147, "Chemlight_yellow"}, // 1.27%
			{2258.88324873096, "FlareYellow_F"}, // 1.27%
			{2385.78680203046, "FlareGreen_F"}, // 1.27%
			{2512.69035532995, "FlareWhite_F"}, // 1.27%
			{2639.59390862944, "FlareRed_F"}, // 1.27%
			{2761.42131979695, "Exile_Item_PlasticBottleDirtyWater"}, // 1.22%
			{2874.22447828539, "Exile_Item_Heatpack"}, // 1.13%
			{2982.79751833051, "Exile_Item_InstantCoffee"}, // 1.09%
			{3084.32036097011, "Exile_Item_ChocolateMilk"}, // 1.02%
			{3183.02312464749, "ItemMap"}, // 0.99%
			{3278.20078962211, "Exile_Item_Magazine03"}, // 0.95%
			{3373.37845459673, "Exile_Item_Magazine04"}, // 0.95%
			{3468.55611957135, "Exile_Item_Magazine02"}, // 0.95%
			{3563.73378454597, "Exile_Item_Magazine01"}, // 0.95%
			{3652.56627185561, "Exile_Item_Raisins"}, // 0.89%
			{3741.39875916526, "Exile_Item_Moobar"}, // 0.89%
			{3826.00112803158, "ItemWatch"}, // 0.85%
			{3910.60349689791, "ItemRadio"}, // 0.85%
			{3991.82177100959, "Exile_Item_MountainDupe"}, // 0.81%
			{4070.78398195149, "Exile_Item_CockONut"}, // 0.79%
			{4149.7461928934, "Exile_Item_SeedAstics"}, // 0.79%
			{4218.83812746757, "Exile_Item_Surstromming"}, // 0.69%
			{4287.93006204174, "Exile_Item_SausageGravy"}, // 0.69%
			{4357.0219966159, "Exile_Item_MacasCheese"}, // 0.69%
			{4426.11393119007, "Exile_Item_BBQSandwich"}, // 0.69%
			{4495.20586576424, "Exile_Item_CatFood"}, // 0.69%
			{4564.29780033841, "Exile_Item_ChristmasTinner"}, // 0.69%
			{4633.38973491257, "Exile_Item_BeefParts"}, // 0.69%
			{4702.48166948674, "Exile_Item_Cheathas"}, // 0.69%
			{4771.57360406091, "Exile_Item_DsNuts"}, // 0.69%
			{4840.66553863508, "Exile_Item_Noodles"}, // 0.69%
			{4909.75747320925, "Exile_Item_Dogfood"}, // 0.69%
			{4978.79300620417, "Exile_Item_EnergyDrink"}, // 0.69%
			{5042.24478285392, "V_Press_F"}, // 0.63%
			{5105.69655950366, "V_TacVest_blk_POLICE"}, // 0.63%
			{5166.61026508742, "H_Cap_press"}, // 0.61%
			{5227.52397067117, "H_Cap_red"}, // 0.61%
			{5288.43767625493, "H_Cap_tan"}, // 0.61%
			{5349.35138183869, "H_Hat_blue"}, // 0.61%
			{5410.26508742244, "H_Hat_tan"}, // 0.61%
			{5471.1787930062, "H_Hat_checker"}, // 0.61%
			{5532.09249858996, "H_Hat_grey"}, // 0.61%
			{5593.00620417371, "H_StrawHat_dark"}, // 0.61%
			{5653.91990975747, "H_Hat_brown"}, // 0.61%
			{5714.83361534123, "H_StrawHat"}, // 0.61%
			{5774.05527354766, "Exile_Item_GloriousKnakworst"}, // 0.59%
			{5830.90806542583, "Exile_Item_Beer"}, // 0.57%
			{5887.30964467005, "ItemGPS"}, // 0.56%
			{5943.71122391427, "Binocular"}, // 0.56%
			{5998.53355893965, "muzzle_snds_L"}, // 0.55%
			{6053.35589396503, "muzzle_snds_acp"}, // 0.55%
			{6106.7889690385, "U_C_Poor_2"}, // 0.53%
			{6160.22204411197, "U_C_Poor_shorts_1"}, // 0.53%
			{6213.65511918544, "U_C_HunterBody_grn"}, // 0.53%
			{6267.08819425891, "U_C_Journalist"}, // 0.53%
			{6320.52126933238, "U_C_Scientist"}, // 0.53%
			{6373.95434440585, "U_C_Poor_1"}, // 0.53%
			{6427.38741947932, "U_Rangemaster"}, // 0.53%
			{6479.5720582193, "B_OutdoorPack_blk"}, // 0.52%
			{6531.47847400496, "SMG_01_F"}, // 0.52%
			{6582.23989532476, "H_Cap_blk_Raven"}, // 0.51%
			{6633.00131664455, "H_Cap_grn"}, // 0.51%
			{6683.76273796435, "H_Cap_oli"}, // 0.51%
			{6734.52415928415, "H_Cap_headphones"}, // 0.51%
			{6785.28558060394, "H_Bandanna_surfer"}, // 0.51%
			{6836.04700192374, "H_Beret_blk_POLICE"}, // 0.51%
			{6886.80842324354, "H_Cap_blk"}, // 0.51%
			{6937.56984456333, "H_Cap_blu"}, // 0.51%
			{6988.33126588313, "Exile_Item_ZipTie"}, // 0.51%
			{7038.71102238097, "SMG_02_F"}, // 0.50%
			{7089.09077887882, "SMG_05_F"}, // 0.50%
			{7139.47053537666, "hgun_PDW2000_F"}, // 0.50%
			{7188.82191721535, "Exile_Item_CanOpener"}, // 0.49%
			{7238.17329905404, "Exile_Item_Matches"}, // 0.49%
			{7286.90426352105, "Exile_Item_PlasticBottleFreshWater"}, // 0.49%
			{7334.81391959816, "hgun_P07_F"}, // 0.48%
			{7381.78009446414, "B_OutdoorPack_tan"}, // 0.47%
			{7428.74626933012, "B_OutdoorPack_blu"}, // 0.47%
			{7474.37451321309, "hgun_Rook40_F"}, // 0.46%
			{7520.00275709605, "hgun_ACPC2_F"}, // 0.46%
			{7561.75046808803, "B_HuntingBackpack"}, // 0.42%
			{7603.30952647851, "U_C_Poloshirt_tricolour"}, // 0.42%
			{7644.86858486899, "U_C_Poloshirt_blue"}, // 0.42%
			{7686.42764325946, "U_C_Poloshirt_burgundy"}, // 0.42%
			{7727.98670164994, "U_C_Poloshirt_stripped"}, // 0.42%
			{7769.54576004042, "U_C_Poloshirt_salmon"}, // 0.42%
			{7806.0750071584, "B_AssaultPack_rgr"}, // 0.37%
			{7842.60425427639, "B_AssaultPack_sgg"}, // 0.37%
			{7879.13350139437, "B_AssaultPack_blk"}, // 0.37%
			{7915.66274851235, "B_AssaultPack_cbr"}, // 0.37%
			{7952.19199563034, "B_AssaultPack_tna_F"}, // 0.37%
			{7988.72124274832, "B_AssaultPack_khk"}, // 0.37%
			{8025.25048986631, "B_AssaultPack_dgtl"}, // 0.37%
			{8061.77973698429, "B_AssaultPack_mcamo"}, // 0.37%
			{8091.46477869178, "U_I_C_Soldier_Bandit_5_F"}, // 0.30%
			{8121.14982039926, "U_I_C_Soldier_Bandit_2_F"}, // 0.30%
			{8150.83486210674, "U_I_C_Soldier_Bandit_3_F"}, // 0.30%
			{8180.51990381423, "U_I_C_Soldier_Bandit_4_F"}, // 0.30%
			{8210.20494552171, "U_I_C_Soldier_Bandit_1_F"}, // 0.30%
			{8239.8899872292, "U_C_man_sport_1_F"}, // 0.30%
			{8269.57502893668, "U_C_Man_casual_5_F"}, // 0.30%
			{8299.26007064416, "U_C_Man_casual_6_F"}, // 0.30%
			{8328.94511235165, "U_C_Man_casual_3_F"}, // 0.30%
			{8358.63015405913, "U_C_Man_casual_2_F"}, // 0.30%
			{8388.31519576661, "U_C_Man_casual_1_F"}, // 0.30%
			{8418.0002374741, "U_C_man_sport_3_F"}, // 0.30%
			{8447.68527918158, "U_C_man_sport_2_F"}, // 0.30%
			{8477.37032088907, "U_C_Man_casual_4_F"}, // 0.30%
			{8507.02867941299, "hgun_Pistol_heavy_01_F"}, // 0.30%
			{8536.68703793692, "hgun_Pistol_heavy_02_F"}, // 0.30%
			{8566.34539646084, "Exile_Weapon_Colt1911"}, // 0.30%
			{8596.00375498477, "hgun_Pistol_Signal_F"}, // 0.30%
			{8625.6621135087, "hgun_P07_khk_F"}, // 0.30%
			{8655.32047203262, "Exile_Weapon_Taurus"}, // 0.30%
			{8684.97883055655, "Exile_Weapon_TaurusGold"}, // 0.30%
			{8714.63718908047, "hgun_Pistol_01_F"}, // 0.30%
			{8744.2955476044, "Exile_Weapon_Makarov"}, // 0.30%
			{8773.90637670761, "Exile_Item_EMRE"}, // 0.30%
			{8803.51720581083, "Exile_Item_CookingPot"}, // 0.30%
			{8831.94360174991, "Exile_Item_PowerDrink"}, // 0.28%
			{8860.14439137202, "9Rnd_45ACP_Mag"}, // 0.28%
			{8888.34518099413, "Exile_Magazine_7Rnd_45ACP"}, // 0.28%
			{8916.54597061624, "Exile_Magazine_8Rnd_9x18"}, // 0.28%
			{8944.74676023835, "Exile_Magazine_6Rnd_45ACP"}, // 0.28%
			{8972.94754986046, "30Rnd_9x21_Mag"}, // 0.28%
			{9001.14833948257, "11Rnd_45ACP_Mag"}, // 0.28%
			{9029.34912910468, "10Rnd_9x21_Mag"}, // 0.28%
			{9055.44144847467, "B_Kitbag_cbr"}, // 0.26%
			{9081.53376784466, "B_Kitbag_sgg"}, // 0.26%
			{9107.62608721465, "B_Kitbag_mcamo"}, // 0.26%
			{9133.00679787454, "30Rnd_9x21_Mag_SMG_02"}, // 0.25%
			{9158.38750853444, "optic_Holosight_smg"}, // 0.25%
			{9183.76821919434, "optic_Holosight_smg_blk_F"}, // 0.25%
			{9209.14892985424, "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow"}, // 0.25%
			{9234.52964051414, "30Rnd_45ACP_Mag_SMG_01_Tracer_Green"}, // 0.25%
			{9259.91035117403, "30Rnd_9x21_Mag_SMG_02_Tracer_Green"}, // 0.25%
			{9285.29106183393, "30Rnd_9x21_Mag_SMG_02_Tracer_Red"}, // 0.25%
			{9310.67177249383, "optic_ACO_grn_smg"}, // 0.25%
			{9336.05248315373, "optic_ACO_grn"}, // 0.25%
			{9361.43319381363, "30Rnd_45ACP_Mag_SMG_01"}, // 0.25%
			{9386.81390447352, "optic_Aco"}, // 0.25%
			{9412.19461513342, "optic_Aco_smg"}, // 0.25%
			{9434.75524683111, "6Rnd_45ACP_Cylinder"}, // 0.23%
			{9456.07504378542, "optic_MRD"}, // 0.21%
			{9477.39484073974, "optic_Yorris"}, // 0.21%
			{9491.49523555079, "16Rnd_9x21_Mag"}, // 0.14%
			{9505.59563036185, "Exile_Item_MobilePhone"}, // 0.14%
			{9515.46590672959, "6Rnd_RedSignal_F"}, // 0.10%
			{9525.33618309732, "6Rnd_GreenSignal_F"}, // 0.10%
			{9532.46654997168, "acc_flashlight"}, // 0.07%
			{9538.40355831317, "U_NikosBody"}, // 0.06%
			{9544.34056665467, "U_NikosAgedBody"}, // 0.06%
			{9550.27757499617, "U_OrestesBody"}, // 0.06%
			{9555.75542621773, "30Rnd_65x39_caseless_green"}, // 0.05%
			{9561.23327743929, "30Rnd_556x45_Stanag_red"}, // 0.05%
			{9566.71112866085, "30Rnd_556x45_Stanag_green"}, // 0.05%
			{9572.18897988241, "30Rnd_556x45_Stanag"}, // 0.05%
			{9577.28209907838, "muzzle_snds_H_khk_F"}, // 0.05%
			{9582.37521827434, "muzzle_snds_65_TI_blk_F"}, // 0.05%
			{9587.46833747031, "muzzle_snds_65_TI_hex_F"}, // 0.05%
			{9592.56145666628, "muzzle_snds_65_TI_ghex_F"}, // 0.05%
			{9597.65457586224, "muzzle_snds_H_MG_blk_F"}, // 0.05%
			{9602.74769505821, "muzzle_snds_H_MG_khk_F"}, // 0.05%
			{9607.84081425418, "optic_Arco"}, // 0.05%
			{9612.93393345014, "optic_Arco_blk_F"}, // 0.05%
			{9618.02705264611, "optic_Arco_ghex_F"}, // 0.05%
			{9623.12017184207, "optic_Hamr"}, // 0.05%
			{9628.21329103804, "optic_Hamr_khk_F"}, // 0.05%
			{9633.30641023401, "optic_Holosight"}, // 0.05%
			{9638.39952942997, "optic_Holosight_blk_F"}, // 0.05%
			{9643.49264862594, "optic_Holosight_khk_F"}, // 0.05%
			{9648.58576782191, "acc_pointer_IR"}, // 0.05%
			{9653.67888701787, "optic_MRCO"}, // 0.05%
			{9658.77200621384, "optic_DMS"}, // 0.05%
			{9663.8651254098, "optic_DMS_ghex_F"}, // 0.05%
			{9668.95824460577, "optic_ERCO_blk_F"}, // 0.05%
			{9674.05136380174, "optic_ERCO_khk_F"}, // 0.05%
			{9679.1444829977, "optic_ERCO_snd_F"}, // 0.05%
			{9684.23760219367, "muzzle_snds_58_wdm_F"}, // 0.05%
			{9689.33072138964, "muzzle_snds_m_khk_F"}, // 0.05%
			{9694.4238405856, "muzzle_snds_m_snd_F"}, // 0.05%
			{9699.51695978157, "muzzle_snds_H_snd_F"}, // 0.05%
			{9704.61007897753, "muzzle_snds_H"}, // 0.05%
			{9709.7031981735, "muzzle_snds_M"}, // 0.05%
			{9714.79631736947, "muzzle_snds_58_blk_F"}, // 0.05%
			{9718.8250016012, "Exile_Weapon_LeeEnfield"}, // 0.04%
			{9722.85368583292, "Exile_Weapon_AK74"}, // 0.04%
			{9726.88237006465, "Exile_Weapon_AK47"}, // 0.04%
			{9730.91105429638, "Exile_Weapon_AKS_Gold"}, // 0.04%
			{9734.93973852811, "Exile_Weapon_AK107"}, // 0.04%
			{9738.96842275984, "Exile_Weapon_DMR"}, // 0.04%
			{9742.99710699157, "Exile_Weapon_CZ550"}, // 0.04%
			{9747.0257912233, "Exile_Weapon_SVDCamo"}, // 0.04%
			{9751.05447545503, "Exile_Weapon_AK74_GL"}, // 0.04%
			{9755.08315968676, "Exile_Weapon_VSSVintorez"}, // 0.04%
			{9759.11184391849, "arifle_Katiba_F"}, // 0.04%
			{9763.14052815022, "Exile_Weapon_SVD"}, // 0.04%
			{9767.16921238194, "Exile_Weapon_AK107_GL"}, // 0.04%
			{9771.18630327776, "20Rnd_556x45_UW_mag"}, // 0.04%
			{9774.47301401069, "30Rnd_65x39_caseless_mag_Tracer"}, // 0.03%
			{9777.75972474363, "Exile_Magazine_30Rnd_762x39_AK"}, // 0.03%
			{9781.04643547657, "Exile_Magazine_30Rnd_545x39_AK"}, // 0.03%
			{9784.3331462095, "Exile_Magazine_30Rnd_545x39_AK_Green"}, // 0.03%
			{9787.61985694244, "Exile_Magazine_20Rnd_762x51_DMR_White"}, // 0.03%
			{9790.90656767538, "30Rnd_556x45_Stanag_Tracer_Red"}, // 0.03%
			{9794.19327840831, "30Rnd_556x45_Stanag_Tracer_Yellow"}, // 0.03%
			{9797.47998914125, "30Rnd_65x39_caseless_green_mag_Tracer"}, // 0.03%
			{9800.76669987419, "30Rnd_65x39_caseless_mag"}, // 0.03%
			{9804.05341060712, "Exile_Magazine_30Rnd_545x39_AK_Red"}, // 0.03%
			{9807.34012134006, "30Rnd_556x45_Stanag_Tracer_Green"}, // 0.03%
			{9810.626832073, "Exile_Magazine_30Rnd_545x39_AK_Yellow"}, // 0.03%
			{9813.91354280593, "Exile_Magazine_10Rnd_762x54"}, // 0.03%
			{9817.20025353887, "Exile_Magazine_10Rnd_9x39"}, // 0.03%
			{9820.48696427181, "Exile_Magazine_20Rnd_9x39"}, // 0.03%
			{9823.77367500474, "30Rnd_762x39_Mag_F"}, // 0.03%
			{9827.06038573768, "30Rnd_762x39_Mag_Green_F"}, // 0.03%
			{9830.34709647062, "30Rnd_762x39_Mag_Tracer_F"}, // 0.03%
			{9833.63380720355, "30Rnd_762x39_Mag_Tracer_Green_F"}, // 0.03%
			{9836.92051793649, "30Rnd_762x39_AK47_M"}, // 0.03%
			{9840.20722866943, "30Rnd_545x39_Mag_F"}, // 0.03%
			{9843.49393940236, "30Rnd_545x39_Mag_Green_F"}, // 0.03%
			{9846.7806501353, "30Rnd_545x39_Mag_Tracer_F"}, // 0.03%
			{9850.06736086824, "30Rnd_545x39_Mag_Tracer_Green_F"}, // 0.03%
			{9853.35407160117, "Exile_Magazine_30Rnd_545x39_AK_White"}, // 0.03%
			{9856.64078233411, "Exile_Magazine_5Rnd_22LR"}, // 0.03%
			{9859.92749306705, "150Rnd_556x45_Drum_Mag_Tracer_F"}, // 0.03%
			{9863.21420379998, "Exile_Magazine_20Rnd_762x51_DMR"}, // 0.03%
			{9866.50091453292, "Exile_Magazine_20Rnd_762x51_DMR_Green"}, // 0.03%
			{9869.78762526586, "Exile_Magazine_20Rnd_762x51_DMR_Red"}, // 0.03%
			{9873.07433599879, "150Rnd_556x45_Drum_Mag_F"}, // 0.03%
			{9876.36104673173, "30Rnd_580x42_Mag_F"}, // 0.03%
			{9879.64775746467, "30Rnd_580x42_Mag_Tracer_F"}, // 0.03%
			{9882.9344681976, "20Rnd_762x51_Mag"}, // 0.03%
			{9886.22117893054, "100Rnd_580x42_Mag_F"}, // 0.03%
			{9889.50788966348, "100Rnd_580x42_Mag_Tracer_F"}, // 0.03%
			{9892.79460039641, "Exile_Magazine_20Rnd_762x51_DMR_Yellow"}, // 0.03%
			{9896.0175477818, "arifle_MX_khk_F"}, // 0.03%
			{9899.24049516718, "arifle_TRG20_F"}, // 0.03%
			{9902.46344255256, "arifle_MX_F"}, // 0.03%
			{9905.68638993795, "arifle_MXC_F"}, // 0.03%
			{9908.90933732333, "arifle_Katiba_GL_F"}, // 0.03%
			{9912.13228470872, "arifle_TRG21_F"}, // 0.03%
			{9915.3552320941, "arifle_MXC_khk_F"}, // 0.03%
			{9918.2767527456, "Exile_Magazine_10Rnd_303"}, // 0.03%
			{9921.09683170781, "arifle_Mk20C_F"}, // 0.03%
			{9923.91691067002, "arifle_Mk20_F"}, // 0.03%
			{9926.46347026801, "optic_NVS"}, // 0.03%
			{9928.88068080704, "arifle_SDAR_F"}, // 0.02%
			{9931.29789134608, "arifle_MXM_F"}, // 0.02%
			{9933.31223346194, "arifle_SPAR_03_snd_F"}, // 0.02%
			{9935.32657557781, "arifle_SPAR_03_khk_F"}, // 0.02%
			{9937.34091769367, "arifle_AKM_FL_F"}, // 0.02%
			{9939.35525980954, "arifle_AK12_F"}, // 0.02%
			{9941.3696019254, "arifle_SPAR_01_GL_khk_F"}, // 0.02%
			{9943.38394404127, "arifle_SPAR_01_khk_F"}, // 0.02%
			{9945.39828615713, "arifle_SPAR_01_blk_F"}, // 0.02%
			{9947.412628273, "arifle_SPAR_01_GL_snd_F"}, // 0.02%
			{9949.42697038886, "arifle_SPAR_02_blk_F"}, // 0.02%
			{9951.44131250472, "arifle_SPAR_02_khk_F"}, // 0.02%
			{9953.45565462059, "arifle_SPAR_02_snd_F"}, // 0.02%
			{9955.46999673645, "arifle_CTARS_hex_F"}, // 0.02%
			{9957.48433885232, "arifle_CTARS_ghex_F"}, // 0.02%
			{9959.49868096818, "arifle_CTARS_blk_F"}, // 0.02%
			{9961.51302308405, "arifle_CTAR_GL_blk_F"}, // 0.02%
			{9963.52736519991, "arifle_CTAR_ghex_F"}, // 0.02%
			{9965.54170731578, "arifle_CTAR_hex_F"}, // 0.02%
			{9967.55604943164, "arifle_CTAR_blk_F"}, // 0.02%
			{9969.57039154751, "arifle_ARX_hex_F"}, // 0.02%
			{9971.58473366337, "arifle_ARX_ghex_F"}, // 0.02%
			{9973.59907577924, "arifle_ARX_blk_F"}, // 0.02%
			{9975.6134178951, "arifle_AKS_F"}, // 0.02%
			{9977.62776001096, "arifle_AKM_F"}, // 0.02%
			{9979.64210212683, "arifle_AK12_GL_F"}, // 0.02%
			{9981.65644424269, "arifle_SPAR_03_blk_F"}, // 0.02%
			{9983.67078635856, "arifle_SPAR_01_snd_F"}, // 0.02%
			{9985.68512847442, "arifle_SPAR_01_GL_blk_F"}, // 0.02%
			{9987.51107888161, "10Rnd_50BW_Mag_F"}, // 0.02%
			{9989.1225525743, "arifle_Mk20_GL_F"}, // 0.02%
			{9990.73402626699, "arifle_MX_GL_F"}, // 0.02%
			{9992.34549995969, "arifle_MX_GL_khk_F"}, // 0.02%
			{9993.95697365238, "arifle_TRG21_GL_F"}, // 0.02%
			{9995.1655789219, "arifle_MXM_Black_F"}, // 0.01%
			{9996.37418419142, "arifle_MXC_Black_F"}, // 0.01%
			{9997.58278946094, "arifle_MXM_khk_F"}, // 0.01%
			{9998.79139473046, "arifle_MX_GL_Black_F"}, // 0.01%
			{9999.99999999997, "arifle_MX_Black_F"} // 0.01%
		};
	};

	/**
	  Result of 100 rounds:

	  Exile_Item_Can_Empty
	  10Rnd_9x21_Mag
	  Exile_Weapon_Taurus
	  Exile_Weapon_M1014
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Can_Empty
	  ItemMap
	  Exile_Item_BeefParts
	  Exile_Item_Surstromming
	  B_OutdoorPack_tan
	  Exile_Item_PlasticBottleFreshWater
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Can_Empty
	  Exile_Item_ToiletPaper
	  Exile_Weapon_M1014
	  SMG_01_F
	  muzzle_snds_L
	  Exile_Item_ChristmasTinner
	  ItemRadio
	  Exile_Item_EnergyDrink
	  Exile_Weapon_M1014
	  Exile_Weapon_M1014
	  30Rnd_9x21_Mag_SMG_02
	  Exile_Item_PlasticBottleEmpty
	  Exile_Magazine_8Rnd_74Slug
	  Exile_Weapon_Taurus
	  Exile_Item_Can_Empty
	  B_AssaultPack_rgr
	  Exile_Item_Moobar
	  Chemlight_green
	  Exile_Weapon_M1014
	  Exile_Item_Can_Empty
	  SmokeShellYellow
	  FlareRed_F
	  Exile_Item_MountainDupe
	  Exile_Item_Magazine04
	  hgun_Rook40_F
	  hgun_P07_F
	  Exile_Item_Magazine04
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ZipTie
	  hgun_Rook40_F
	  FlareGreen_F
	  Exile_Item_DsNuts
	  SMG_01_F
	  Exile_Item_ZipTie
	  Exile_Weapon_Taurus
	  Exile_Item_ToiletPaper
	  SMG_02_F
	  Exile_Item_BeefParts
	  Chemlight_blue
	  Chemlight_red
	  Exile_Item_CockONut
	  Exile_Item_Magazine01
	  Chemlight_yellow
	  B_HuntingBackpack
	  optic_ACO_grn
	  ItemWatch
	  ItemRadio
	  ItemMap
	  Exile_Item_Sand
	  hgun_PDW2000_F
	  Exile_Item_ToiletPaper
	  Exile_Item_MountainDupe
	  Exile_Item_SeedAstics
	  Exile_Item_Magazine04
	  Exile_Item_EnergyDrink
	  hgun_PDW2000_F
	  Exile_Item_Surstromming
	  SmokeShellPurple
	  Exile_Item_Matches
	  Exile_Item_EnergyDrink
	  Exile_Item_Heatpack
	  ItemMap
	  Exile_Item_ToiletPaper
	  Exile_Item_Heatpack
	  hgun_Pistol_heavy_02_F
	  Exile_Item_PlasticBottleDirtyWater
	  Exile_Weapon_Makarov
	  Exile_Item_Magazine03
	  Exile_Item_Can_Empty
	  30Rnd_9x21_Mag_SMG_02_Tracer_Green
	  Exile_Item_Magazine01
	  B_AssaultPack_sgg
	  Exile_Item_Can_Empty
	  Binocular
	  Exile_Item_Beer
	  FlareRed_F
	  Exile_Item_ExtensionCord
	  SMG_01_F
	  Exile_Item_PlasticBottleFreshWater
	  Exile_Item_Can_Empty
	  optic_MRD
	  H_Cap_red
	  Exile_Item_PlasticBottleEmpty
	  hgun_Pistol_Signal_F
	  FlareGreen_F
	  Exile_Weapon_M1014
	  Exile_Item_ToiletPaper
	  Exile_Item_ToiletPaper
	*/
	class Shop
	{
		count = 193;
		half = 9064.5076897852;
		halfIndex = 96;
		sum = 10000;
		items[] = 
		{
			{600, "Exile_Item_Can_Empty"}, // 6.00%
			{1200, "Exile_Item_ToiletPaper"}, // 6.00%
			{1800, "Exile_Item_PlasticBottleEmpty"}, // 6.00%
			{2120, "Exile_Weapon_M1014"}, // 3.20%
			{2408, "Exile_Item_PlasticBottleDirtyWater"}, // 2.88%
			{2648, "Exile_Item_ZipTie"}, // 2.40%
			{2888, "Exile_Item_ChocolateMilk"}, // 2.40%
			{3080, "Exile_Item_MountainDupe"}, // 1.92%
			{3243.2, "Exile_Item_EnergyDrink"}, // 1.63%
			{3393.2, "Exile_Item_Magazine01"}, // 1.50%
			{3543.2, "Exile_Item_Magazine02"}, // 1.50%
			{3693.2, "Exile_Item_Magazine03"}, // 1.50%
			{3843.2, "Exile_Item_Magazine04"}, // 1.50%
			{3977.6, "Exile_Item_Beer"}, // 1.34%
			{4102.04444444444, "Exile_Item_Heatpack"}, // 1.24%
			{4217.24444444444, "Exile_Item_PlasticBottleFreshWater"}, // 1.15%
			{4326.13333333333, "ItemMap"}, // 1.09%
			{4428.38897243108, "SMG_01_F"}, // 1.02%
			{4528.38897243108, "Chemlight_blue"}, // 1.00%
			{4628.38897243108, "FlareYellow_F"}, // 1.00%
			{4728.38897243108, "FlareWhite_F"}, // 1.00%
			{4828.38897243108, "FlareRed_F"}, // 1.00%
			{4928.38897243108, "FlareGreen_F"}, // 1.00%
			{5028.38897243108, "Chemlight_green"}, // 1.00%
			{5128.38897243108, "Chemlight_yellow"}, // 1.00%
			{5228.38897243108, "Chemlight_red"}, // 1.00%
			{5327.63709273183, "SMG_05_F"}, // 0.99%
			{5426.88521303258, "hgun_PDW2000_F"}, // 0.99%
			{5526.13333333333, "SMG_02_F"}, // 0.99%
			{5620.51535580524, "hgun_P07_F"}, // 0.94%
			{5713.84868913858, "ItemWatch"}, // 0.93%
			{5807.18202247191, "ItemRadio"}, // 0.93%
			{5898.84868913858, "Exile_Item_InstantCoffee"}, // 0.92%
			{5988.73632958802, "hgun_Rook40_F"}, // 0.90%
			{6078.62397003745, "hgun_ACPC2_F"}, // 0.90%
			{6167.51285892634, "Exile_Item_Vishpirin"}, // 0.89%
			{6256.40174781523, "Exile_Item_Heatpack"}, // 0.89%
			{6336.40174781523, "Exile_Magazine_8Rnd_74Slug"}, // 0.80%
			{6411.40174781523, "Exile_Item_Moobar"}, // 0.75%
			{6486.40174781523, "Exile_Item_Raisins"}, // 0.75%
			{6553.60174781523, "Exile_Item_PowerDrink"}, // 0.67%
			{6620.2684144819, "Exile_Item_CockONut"}, // 0.67%
			{6686.93508114856, "Exile_Item_SeedAstics"}, // 0.67%
			{6749.15730337079, "ItemGPS"}, // 0.62%
			{6811.37952559301, "Binocular"}, // 0.62%
			{6869.80649188515, "hgun_Pistol_01_F"}, // 0.58%
			{6928.23345817728, "hgun_P07_khk_F"}, // 0.58%
			{6986.66042446942, "hgun_Pistol_heavy_01_F"}, // 0.58%
			{7045.08739076155, "hgun_Pistol_heavy_02_F"}, // 0.58%
			{7103.51435705369, "hgun_Pistol_Signal_F"}, // 0.58%
			{7161.94132334582, "Exile_Weapon_Colt1911"}, // 0.58%
			{7220.36828963796, "Exile_Weapon_Makarov"}, // 0.58%
			{7278.79525593009, "Exile_Weapon_TaurusGold"}, // 0.58%
			{7337.22222222223, "Exile_Weapon_Taurus"}, // 0.58%
			{7395.55555555556, "Exile_Item_DsNuts"}, // 0.58%
			{7453.88888888889, "Exile_Item_Noodles"}, // 0.58%
			{7512.22222222223, "Exile_Item_BeefParts"}, // 0.58%
			{7570.55555555556, "Exile_Item_Cheathas"}, // 0.58%
			{7628.88888888889, "Exile_Item_CatFood"}, // 0.58%
			{7687.22222222222, "Exile_Item_BBQSandwich"}, // 0.58%
			{7745.55555555556, "Exile_Item_MacasCheese"}, // 0.58%
			{7803.88888888889, "Exile_Item_ChristmasTinner"}, // 0.58%
			{7862.22222222222, "Exile_Item_SausageGravy"}, // 0.58%
			{7920.55555555556, "Exile_Item_Surstromming"}, // 0.58%
			{7978.88888888889, "Exile_Item_Dogfood"}, // 0.58%
			{8028.88888888889, "Exile_Item_GloriousKnakworst"}, // 0.50%
			{8074.60317460317, "SmokeShell"}, // 0.46%
			{8120.31746031746, "SmokeShellYellow"}, // 0.46%
			{8166.03174603175, "SmokeShellPurple"}, // 0.46%
			{8211.74603174603, "SmokeShellBlue"}, // 0.46%
			{8257.46031746032, "SmokeShellOrange"}, // 0.46%
			{8303.1746031746, "SmokeShellGreen"}, // 0.46%
			{8348.88888888889, "SmokeShellRed"}, // 0.46%
			{8393.33333333334, "Exile_Item_Bandage"}, // 0.44%
			{8435, "Exile_Item_CanOpener"}, // 0.42%
			{8476.66666666667, "Exile_Item_Matches"}, // 0.42%
			{8516.66666666667, "V_Rangemaster_belt"}, // 0.40%
			{8554.04984423676, "B_OutdoorPack_blk"}, // 0.37%
			{8588.78668634202, "Exile_Melee_Axe"}, // 0.35%
			{8622.43154615511, "B_OutdoorPack_tan"}, // 0.34%
			{8656.07640596819, "B_OutdoorPack_blu"}, // 0.34%
			{8685.98294802427, "B_HuntingBackpack"}, // 0.30%
			{8714.78294802427, "muzzle_snds_L"}, // 0.29%
			{8743.58294802427, "muzzle_snds_acp"}, // 0.29%
			{8769.75117232333, "B_AssaultPack_tna_F"}, // 0.26%
			{8795.9193966224, "B_AssaultPack_mcamo"}, // 0.26%
			{8822.08762092146, "B_AssaultPack_blk"}, // 0.26%
			{8848.25584522052, "B_AssaultPack_cbr"}, // 0.26%
			{8874.42406951959, "B_AssaultPack_rgr"}, // 0.26%
			{8900.59229381865, "B_AssaultPack_dgtl"}, // 0.26%
			{8926.76051811772, "B_AssaultPack_khk"}, // 0.26%
			{8952.92874241678, "B_AssaultPack_sgg"}, // 0.26%
			{8977.92874241678, "Exile_Item_CookingPot"}, // 0.25%
			{9002.92874241678, "Exile_Item_EMRE"}, // 0.25%
			{9023.45505820626, "Exile_Item_Handsaw"}, // 0.21%
			{9043.98137399573, "Exile_Item_Pliers"}, // 0.21%
			{9064.5076897852, "Exile_Item_ScrewDriver"}, // 0.21%
			{9084.5076897852, "V_Press_F"}, // 0.20%
			{9104.5076897852, "V_TacVest_blk_POLICE"}, // 0.20%
			{9123.19927857025, "B_Kitbag_cbr"}, // 0.19%
			{9141.8908673553, "B_Kitbag_sgg"}, // 0.19%
			{9160.58245614034, "B_Kitbag_mcamo"}, // 0.19%
			{9178.36023391812, "10Rnd_9x21_Mag"}, // 0.18%
			{9196.1380116959, "Exile_Magazine_8Rnd_9x18"}, // 0.18%
			{9213.91578947367, "Exile_Magazine_6Rnd_45ACP"}, // 0.18%
			{9231.69356725145, "Exile_Magazine_7Rnd_45ACP"}, // 0.18%
			{9249.47134502923, "9Rnd_45ACP_Mag"}, // 0.18%
			{9267.24912280701, "11Rnd_45ACP_Mag"}, // 0.18%
			{9285.02690058478, "Exile_Item_InstaDoc"}, // 0.18%
			{9302.80467836256, "30Rnd_9x21_Mag"}, // 0.18%
			{9320.17309941519, "Exile_Item_JunkMetal"}, // 0.17%
			{9335.9625730994, "Exile_Item_WaterCanisterEmpty"}, // 0.16%
			{9351.75204678361, "Exile_Melee_Shovel"}, // 0.16%
			{9367.30760233917, "Exile_Item_MobilePhone"}, // 0.16%
			{9381.70760233917, "H_Cap_tan"}, // 0.14%
			{9396.10760233917, "H_Hat_blue"}, // 0.14%
			{9410.50760233917, "H_Hat_brown"}, // 0.14%
			{9424.90760233917, "H_Hat_checker"}, // 0.14%
			{9439.30760233917, "H_Hat_tan"}, // 0.14%
			{9453.70760233917, "H_StrawHat"}, // 0.14%
			{9468.10760233917, "H_StrawHat_dark"}, // 0.14%
			{9482.50760233916, "H_Cap_red"}, // 0.14%
			{9496.90760233916, "H_Hat_grey"}, // 0.14%
			{9511.30760233916, "H_Cap_press"}, // 0.14%
			{9525.52982456139, "6Rnd_45ACP_Cylinder"}, // 0.14%
			{9539.74035087718, "Exile_Item_LightBulb"}, // 0.14%
			{9553.07368421051, "30Rnd_9x21_Mag_SMG_02_Tracer_Green"}, // 0.13%
			{9566.40701754384, "optic_Holosight_smg_blk_F"}, // 0.13%
			{9579.74035087718, "optic_ACO_grn"}, // 0.13%
			{9593.07368421051, "30Rnd_9x21_Mag_SMG_02"}, // 0.13%
			{9606.40701754385, "optic_Aco_smg"}, // 0.13%
			{9619.74035087718, "30Rnd_45ACP_Mag_SMG_01_Tracer_Green"}, // 0.13%
			{9633.07368421051, "optic_ACO_grn_smg"}, // 0.13%
			{9646.40701754385, "30Rnd_9x21_Mag_SMG_02_Tracer_Red"}, // 0.13%
			{9659.74035087718, "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow"}, // 0.13%
			{9673.07368421052, "optic_Holosight_smg"}, // 0.13%
			{9686.40701754385, "optic_Aco"}, // 0.13%
			{9699.74035087718, "30Rnd_45ACP_Mag_SMG_01"}, // 0.13%
			{9712.37192982455, "Exile_Item_ExtensionCord"}, // 0.13%
			{9724.37192982455, "H_Bandanna_surfer"}, // 0.12%
			{9736.37192982455, "H_Beret_blk_POLICE"}, // 0.12%
			{9748.37192982455, "H_Cap_oli"}, // 0.12%
			{9760.37192982455, "H_Cap_headphones"}, // 0.12%
			{9772.37192982455, "H_Cap_blk"}, // 0.12%
			{9784.37192982455, "H_Cap_grn"}, // 0.12%
			{9796.37192982455, "H_Cap_blu"}, // 0.12%
			{9808.37192982455, "H_Cap_blk_Raven"}, // 0.12%
			{9819.57192982455, "optic_MRD"}, // 0.11%
			{9830.77192982455, "optic_Yorris"}, // 0.11%
			{9839.66081871344, "16Rnd_9x21_Mag"}, // 0.09%
			{9847.55555555555, "Exile_Item_Grinder"}, // 0.08%
			{9855.45029239765, "Exile_Item_MetalScrews"}, // 0.08%
			{9863.34502923976, "Exile_Melee_SledgeHammer"}, // 0.08%
			{9869.66081871344, "Exile_Item_Sand"}, // 0.06%
			{9875.97660818713, "Exile_Item_Foolbox"}, // 0.06%
			{9882.29239766081, "Exile_Item_MetalBoard"}, // 0.06%
			{9888.6081871345, "Exile_Item_CamoTentKit"}, // 0.06%
			{9894.83040935672, "6Rnd_RedSignal_F"}, // 0.06%
			{9901.05263157894, "6Rnd_GreenSignal_F"}, // 0.06%
			{9905.78947368421, "Exile_Item_PortableGeneratorKit"}, // 0.05%
			{9910.52631578947, "Exile_Item_Cement"}, // 0.05%
			{9915.26315789473, "Exile_Item_FloodLightKit"}, // 0.05%
			{9919.47368421052, "U_C_Poor_2"}, // 0.04%
			{9923.68421052631, "U_C_Poor_1"}, // 0.04%
			{9927.8947368421, "U_C_Poor_shorts_1"}, // 0.04%
			{9932.10526315789, "U_C_HunterBody_grn"}, // 0.04%
			{9936.31578947368, "U_C_Journalist"}, // 0.04%
			{9940.52631578947, "U_C_Scientist"}, // 0.04%
			{9944.73684210526, "U_Rangemaster"}, // 0.04%
			{9948.01169590643, "U_C_Poloshirt_salmon"}, // 0.03%
			{9951.2865497076, "U_C_Poloshirt_tricolour"}, // 0.03%
			{9954.56140350877, "U_C_Poloshirt_stripped"}, // 0.03%
			{9957.83625730994, "U_C_Poloshirt_burgundy"}, // 0.03%
			{9961.11111111111, "U_C_Poloshirt_blue"}, // 0.03%
			{9964.26900584795, "Exile_Item_Knife"}, // 0.03%
			{9966.6081871345, "U_C_Man_casual_5_F"}, // 0.02%
			{9968.94736842105, "U_C_Man_casual_6_F"}, // 0.02%
			{9971.2865497076, "U_I_C_Soldier_Bandit_5_F"}, // 0.02%
			{9973.62573099415, "U_I_C_Soldier_Bandit_2_F"}, // 0.02%
			{9975.9649122807, "U_I_C_Soldier_Bandit_3_F"}, // 0.02%
			{9978.30409356725, "U_I_C_Soldier_Bandit_4_F"}, // 0.02%
			{9980.6432748538, "U_C_man_sport_1_F"}, // 0.02%
			{9982.98245614035, "U_C_man_sport_2_F"}, // 0.02%
			{9985.3216374269, "U_C_man_sport_3_F"}, // 0.02%
			{9987.66081871345, "U_C_Man_casual_1_F"}, // 0.02%
			{9990, "U_C_Man_casual_2_F"}, // 0.02%
			{9992.33918128655, "U_C_Man_casual_3_F"}, // 0.02%
			{9994.6783625731, "U_C_Man_casual_4_F"}, // 0.02%
			{9997.01754385965, "U_I_C_Soldier_Bandit_1_F"}, // 0.02%
			{9998.59649122808, "Exile_Item_ThermalScannerPro"}, // 0.02%
			{9999.06432748539, "U_NikosBody"}, // 0.00%
			{9999.5321637427, "U_OrestesBody"}, // 0.00%
			{10000, "U_NikosAgedBody"} // 0.00%
		};
	};

	/**
	  Result of 100 rounds:

	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_Grinder
	  Exile_Item_JunkMetal
	  Exile_Item_Can_Empty
	  Exile_Item_FuelCanisterFull
	  Exile_Item_FuelCanisterEmpty
	  Exile_Melee_Axe
	  Exile_Melee_Shovel
	  Exile_Item_DuctTape
	  Exile_Item_Magazine01
	  Exile_Melee_Axe
	  Exile_Item_FuelCanisterFull
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_FuelCanisterFull
	  Exile_Melee_Axe
	  Exile_Item_Magazine01
	  Exile_Item_DuctTape
	  FlareGreen_F
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  Exile_Item_FuelCanisterFull
	  Exile_Item_MetalBoard
	  Exile_Item_FuelCanisterFull
	  Exile_Item_ScrewDriver
	  Exile_Melee_Shovel
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_Magazine03
	  Exile_Item_ScrewDriver
	  FlareWhite_F
	  Exile_Item_Can_Empty
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_LightBulb
	  Exile_Item_ZipTie
	  Exile_Item_ToiletPaper
	  Exile_Item_PlasticBottleEmpty
	  FlareYellow_F
	  FlareGreen_F
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_FuelCanisterFull
	  Exile_Item_Can_Empty
	  FlareYellow_F
	  FlareWhite_F
	  Exile_Melee_Shovel
	  Exile_Item_ZipTie
	  Exile_Item_ToiletPaper
	  Exile_Melee_Shovel
	  Exile_Item_FuelCanisterEmpty
	  FlareRed_F
	  Exile_Melee_Shovel
	  Exile_Item_ZipTie
	  FlareRed_F
	  Exile_Item_Handsaw
	  Exile_Item_PlasticBottleEmpty
	  FlareWhite_F
	  Exile_Item_Magazine01
	  Exile_Item_MetalBoard
	  FlareGreen_F
	  FlareGreen_F
	  Exile_Melee_Axe
	  Exile_Item_Cement
	  FlareRed_F
	  Exile_Item_FuelCanisterFull
	  Exile_Item_ToiletPaper
	  Exile_Item_Handsaw
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ToiletPaper
	  FlareRed_F
	  Exile_Item_DuctTape
	  Exile_Item_LightBulb
	  Exile_Item_Magazine02
	  Exile_Item_ToiletPaper
	  Exile_Melee_Axe
	  Exile_Melee_Axe
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_ScrewDriver
	  Exile_Item_Pliers
	  Exile_Item_Can_Empty
	  Exile_Item_JunkMetal
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_MetalBoard
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Magazine03
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_Pliers
	  Exile_Melee_Axe
	  Exile_Item_ZipTie
	  Exile_Item_CamoTentKit
	  Exile_Melee_Axe
	  Exile_Melee_Axe
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_FloodLightKit
	  Exile_Item_Foolbox
	  Exile_Item_FuelCanisterFull
	  Exile_Item_JunkMetal
	  Exile_Item_ZipTie
	  Exile_Item_FuelCanisterFull
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_FuelCanisterEmpty
	*/
	class Industrial
	{
		count = 36;
		half = 8180.77803203661;
		halfIndex = 18;
		sum = 10000;
		items[] = 
		{
			{1086.95652173913, "Exile_Item_FuelCanisterEmpty"}, // 10.87%
			{1956.52173913043, "Exile_Item_FuelCanisterFull"}, // 8.70%
			{2608.69565217391, "Exile_Item_Can_Empty"}, // 6.52%
			{3260.86956521739, "Exile_Item_ToiletPaper"}, // 6.52%
			{3913.04347826087, "Exile_Item_PlasticBottleEmpty"}, // 6.52%
			{4416.47597254005, "Exile_Melee_Axe"}, // 5.03%
			{4851.2585812357, "Exile_Item_ZipTie"}, // 4.35%
			{5177.34553775744, "FlareWhite_F"}, // 3.26%
			{5503.43249427918, "FlareRed_F"}, // 3.26%
			{5829.51945080091, "FlareGreen_F"}, // 3.26%
			{6155.60640732265, "FlareYellow_F"}, // 3.26%
			{6453.08924485126, "Exile_Item_ScrewDriver"}, // 2.97%
			{6750.57208237986, "Exile_Item_Handsaw"}, // 2.97%
			{7048.05491990847, "Exile_Item_Pliers"}, // 2.97%
			{7299.77116704805, "Exile_Item_JunkMetal"}, // 2.52%
			{7528.60411899313, "Exile_Melee_Shovel"}, // 2.29%
			{7757.43707093821, "Exile_Item_WaterCanisterEmpty"}, // 2.29%
			{7974.82837528604, "Exile_Item_DuctTape"}, // 2.17%
			{8180.77803203661, "Exile_Item_LightBulb"}, // 2.06%
			{8363.84439359268, "Exile_Item_ExtensionCord"}, // 1.83%
			{8526.88787185355, "Exile_Item_Magazine02"}, // 1.63%
			{8689.93135011442, "Exile_Item_Magazine01"}, // 1.63%
			{8852.97482837529, "Exile_Item_Magazine04"}, // 1.63%
			{9016.01830663616, "Exile_Item_Magazine03"}, // 1.63%
			{9130.4347826087, "Exile_Item_MetalScrews"}, // 1.14%
			{9244.85125858124, "Exile_Item_Grinder"}, // 1.14%
			{9359.26773455378, "Exile_Melee_SledgeHammer"}, // 1.14%
			{9450.80091533181, "Exile_Item_Sand"}, // 0.92%
			{9542.33409610984, "Exile_Item_Foolbox"}, // 0.92%
			{9633.86727688787, "Exile_Item_MetalBoard"}, // 0.92%
			{9725.4004576659, "Exile_Item_CamoTentKit"}, // 0.92%
			{9794.05034324943, "Exile_Item_PortableGeneratorKit"}, // 0.69%
			{9862.70022883295, "Exile_Item_FloodLightKit"}, // 0.69%
			{9931.35011441647, "Exile_Item_Cement"}, // 0.69%
			{9977.11670480549, "Exile_Item_Knife"}, // 0.46%
			{10000, "Exile_Item_ThermalScannerPro"} // 0.23%
		};
	};

	/**
	  Result of 100 rounds:

	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Sand
	  Exile_Item_LightBulb
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_BaseCameraKit
	  Exile_Item_ExtensionCord
	  Exile_Item_Magazine02
	  Exile_Item_Grinder
	  Exile_Item_Laptop
	  Exile_Item_Can_Empty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Can_Empty
	  Exile_Item_BaseCameraKit
	  Exile_Item_Grinder
	  Exile_Item_Magazine01
	  Exile_Item_ScrewDriver
	  Exile_Melee_Axe
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  Exile_Item_CamoTentKit
	  Exile_Item_Can_Empty
	  Exile_Item_JunkMetal
	  Exile_Item_ExtensionCord
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_MetalScrews
	  Exile_Melee_Shovel
	  Exile_Item_Pliers
	  Exile_Item_Can_Empty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Magazine03
	  Exile_Item_Pliers
	  Exile_Melee_Axe
	  Exile_Item_Laptop
	  Exile_Item_ScrewDriver
	  Exile_Item_ScrewDriver
	  Exile_Melee_Axe
	  Exile_Item_Can_Empty
	  Exile_Item_ToiletPaper
	  Exile_Item_ScrewDriver
	  Exile_Item_Pliers
	  Exile_Item_ExtensionCord
	  Exile_Item_BaseCameraKit
	  Exile_Item_ToiletPaper
	  Exile_Item_LightBulb
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Handsaw
	  Exile_Item_ExtensionCord
	  Exile_Item_BaseCameraKit
	  Exile_Item_Handsaw
	  Exile_Melee_Shovel
	  Exile_Melee_Axe
	  Exile_Item_Pliers
	  Exile_Item_Grinder
	  Exile_Item_CamoTentKit
	  Exile_Item_ScrewDriver
	  Exile_Item_ScrewDriver
	  Exile_Item_BaseCameraKit
	  Exile_Item_Cement
	  Exile_Item_Handsaw
	  Exile_Item_Can_Empty
	  Exile_Item_ToiletPaper
	  Exile_Melee_Shovel
	  Exile_Item_Laptop
	  Exile_Melee_Axe
	  Exile_Item_Handsaw
	  Exile_Item_Magazine02
	  Exile_Item_Magazine03
	  Exile_Item_Magazine04
	  Exile_Melee_Axe
	  Exile_Item_Laptop
	  Exile_Item_BaseCameraKit
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_JunkMetal
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_ToiletPaper
	  Exile_Item_LightBulb
	  Exile_Melee_Axe
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_CamoTentKit
	  Exile_Melee_Axe
	  Exile_Melee_SledgeHammer
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_Laptop
	  Exile_Item_Pliers
	  Exile_Item_FloodLightKit
	  Exile_Item_BaseCameraKit
	  Exile_Item_Laptop
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Cement
	  Exile_Item_Foolbox
	  Exile_Item_Can_Empty
	  Exile_Item_LightBulb
	  Exile_Item_Pliers
	  Exile_Item_Can_Empty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_PlasticBottleEmpty
	*/
	class Factories
	{
		count = 30;
		half = 8085.52631578947;
		halfIndex = 15;
		sum = 10000;
		items[] = 
		{
			{1000, "Exile_Item_PlasticBottleEmpty"}, // 10.00%
			{2000, "Exile_Item_Can_Empty"}, // 10.00%
			{3000, "Exile_Item_ToiletPaper"}, // 10.00%
			{3723.68421052632, "Exile_Melee_Axe"}, // 7.24%
			{4223.68421052632, "Exile_Item_Laptop"}, // 5.00%
			{4723.68421052632, "Exile_Item_BaseCameraKit"}, // 5.00%
			{5151.31578947368, "Exile_Item_Pliers"}, // 4.28%
			{5578.94736842105, "Exile_Item_Handsaw"}, // 4.28%
			{6006.57894736842, "Exile_Item_ScrewDriver"}, // 4.28%
			{6368.42105263158, "Exile_Item_JunkMetal"}, // 3.62%
			{6697.36842105263, "Exile_Melee_Shovel"}, // 3.29%
			{7026.31578947368, "Exile_Item_WaterCanisterEmpty"}, // 3.29%
			{7322.36842105263, "Exile_Item_LightBulb"}, // 2.96%
			{7585.52631578947, "Exile_Item_ExtensionCord"}, // 2.63%
			{7835.52631578947, "Exile_Item_Magazine01"}, // 2.50%
			{8085.52631578947, "Exile_Item_Magazine02"}, // 2.50%
			{8335.52631578947, "Exile_Item_Magazine03"}, // 2.50%
			{8585.52631578947, "Exile_Item_Magazine04"}, // 2.50%
			{8750, "Exile_Item_Grinder"}, // 1.64%
			{8914.47368421053, "Exile_Item_MetalScrews"}, // 1.64%
			{9078.94736842105, "Exile_Melee_SledgeHammer"}, // 1.64%
			{9210.52631578948, "Exile_Item_Sand"}, // 1.32%
			{9342.1052631579, "Exile_Item_MetalBoard"}, // 1.32%
			{9473.68421052632, "Exile_Item_Foolbox"}, // 1.32%
			{9605.26315789474, "Exile_Item_CamoTentKit"}, // 1.32%
			{9703.94736842106, "Exile_Item_PortableGeneratorKit"}, // 0.99%
			{9802.63157894737, "Exile_Item_FloodLightKit"}, // 0.99%
			{9901.31578947369, "Exile_Item_Cement"}, // 0.99%
			{9967.1052631579, "Exile_Item_Knife"}, // 0.66%
			{10000, "Exile_Item_ThermalScannerPro"} // 0.33%
		};
	};

	/**
	  Result of 100 rounds:

	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_LightBulb
	  Exile_Melee_Axe
	  Exile_Item_FuelCanisterFull
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_ToiletPaper
	  Exile_Item_ScrewDriver
	  Exile_Item_Handsaw
	  Exile_Item_Magazine03
	  Exile_Item_ToiletPaper
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_FuelCanisterFull
	  Exile_Item_ToiletPaper
	  Exile_Item_Magazine03
	  Exile_Item_Pliers
	  Exile_Item_DuctTape
	  Exile_Item_FuelCanisterFull
	  Exile_Item_FuelCanisterFull
	  Exile_Item_FuelCanisterFull
	  Exile_Item_MetalScrews
	  Exile_Item_FuelCanisterEmpty
	  FlareRed_F
	  Exile_Melee_Axe
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_JunkMetal
	  FlareRed_F
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_FuelCanisterFull
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_Magazine04
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_FuelCanisterFull
	  Exile_Item_Can_Empty
	  FlareWhite_F
	  Exile_Item_DuctTape
	  Exile_Item_Can_Empty
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_FuelCanisterFull
	  FlareWhite_F
	  Exile_Item_PlasticBottleEmpty
	  Exile_Melee_Axe
	  Exile_Item_ToiletPaper
	  Exile_Item_FuelCanisterFull
	  Exile_Melee_Axe
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_ZipTie
	  Exile_Melee_Axe
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ZipTie
	  FlareGreen_F
	  Exile_Item_Can_Empty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Magazine03
	  Exile_Item_MetalScrews
	  Exile_Item_DuctTape
	  Exile_Item_DuctTape
	  Exile_Item_ToiletPaper
	  Exile_Item_PortableGeneratorKit
	  Exile_Item_ZipTie
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_FuelCanisterFull
	  FlareGreen_F
	  Exile_Item_Can_Empty
	  Exile_Item_Can_Empty
	  Exile_Item_ZipTie
	  Exile_Item_Handsaw
	  Exile_Item_Magazine04
	  Exile_Item_Magazine02
	  Exile_Item_FuelCanisterFull
	  Exile_Item_ToiletPaper
	  Exile_Item_ToiletPaper
	  Exile_Item_FuelCanisterEmpty
	  FlareWhite_F
	  FlareYellow_F
	  Exile_Item_FuelCanisterFull
	  Exile_Melee_Axe
	  Exile_Item_Can_Empty
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_MetalScrews
	  Exile_Item_Can_Empty
	  Exile_Melee_Shovel
	  Exile_Item_FuelCanisterEmpty
	  FlareGreen_F
	  Exile_Item_ToiletPaper
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Foolbox
	  Exile_Item_ToiletPaper
	  Exile_Item_ToiletPaper
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_CamoTentKit
	  Exile_Item_Grinder
	  Exile_Item_FuelCanisterEmpty
	  FlareYellow_F
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_FuelCanisterFull
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_FuelCanisterEmpty
	*/
	class VehicleService
	{
		count = 36;
		half = 8698.51258581236;
		halfIndex = 18;
		sum = 10000;
		items[] = 
		{
			{1739.13043478261, "Exile_Item_FuelCanisterEmpty"}, // 17.39%
			{3130.4347826087, "Exile_Item_FuelCanisterFull"}, // 13.91%
			{3782.60869565217, "Exile_Item_Can_Empty"}, // 6.52%
			{4434.78260869565, "Exile_Item_ToiletPaper"}, // 6.52%
			{5086.95652173913, "Exile_Item_PlasticBottleEmpty"}, // 6.52%
			{5521.73913043478, "Exile_Item_ZipTie"}, // 4.35%
			{5869.5652173913, "Exile_Item_DuctTape"}, // 3.48%
			{6195.65217391304, "FlareWhite_F"}, // 3.26%
			{6521.73913043478, "FlareRed_F"}, // 3.26%
			{6847.82608695652, "FlareGreen_F"}, // 3.26%
			{7173.91304347826, "FlareYellow_F"}, // 3.26%
			{7488.55835240275, "Exile_Melee_Axe"}, // 3.15%
			{7674.48512585812, "Exile_Item_ScrewDriver"}, // 1.86%
			{7860.4118993135, "Exile_Item_Pliers"}, // 1.86%
			{8046.33867276888, "Exile_Item_Handsaw"}, // 1.86%
			{8209.38215102975, "Exile_Item_Magazine04"}, // 1.63%
			{8372.42562929062, "Exile_Item_Magazine01"}, // 1.63%
			{8535.46910755149, "Exile_Item_Magazine02"}, // 1.63%
			{8698.51258581236, "Exile_Item_Magazine03"}, // 1.63%
			{8855.8352402746, "Exile_Item_JunkMetal"}, // 1.57%
			{8998.85583524028, "Exile_Melee_Shovel"}, // 1.43%
			{9141.87643020595, "Exile_Item_WaterCanisterEmpty"}, // 1.43%
			{9270.59496567506, "Exile_Item_LightBulb"}, // 1.29%
			{9385.0114416476, "Exile_Item_ExtensionCord"}, // 1.14%
			{9456.52173913044, "Exile_Melee_SledgeHammer"}, // 0.72%
			{9528.03203661327, "Exile_Item_Grinder"}, // 0.72%
			{9599.54233409611, "Exile_Item_MetalScrews"}, // 0.72%
			{9656.75057208238, "Exile_Item_Sand"}, // 0.57%
			{9713.95881006865, "Exile_Item_Foolbox"}, // 0.57%
			{9771.16704805492, "Exile_Item_MetalBoard"}, // 0.57%
			{9828.37528604119, "Exile_Item_CamoTentKit"}, // 0.57%
			{9871.28146453089, "Exile_Item_PortableGeneratorKit"}, // 0.43%
			{9914.18764302059, "Exile_Item_FloodLightKit"}, // 0.43%
			{9957.0938215103, "Exile_Item_Cement"}, // 0.43%
			{9985.69794050343, "Exile_Item_Knife"}, // 0.29%
			{10000, "Exile_Item_ThermalScannerPro"} // 0.14%
		};
	};

	/**
	  Result of 100 rounds:

	  Exile_Item_Can_Empty
	  200Rnd_556x45_Box_F
	  1Rnd_SmokePurple_Grenade_shell
	  Exile_Item_ToiletPaper
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  Exile_Item_Magazine02
	  V_PlateCarrier2_rgr
	  3Rnd_UGL_FlareGreen_F
	  U_IG_leader
	  Exile_Item_Magazine02
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  Exile_Item_Can_Empty
	  Exile_Item_ToiletPaper
	  Exile_Item_Magazine03
	  U_O_T_FullGhillie_tna_F
	  NVGoggles_tna_F
	  Exile_Item_Heatpack
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ToiletPaper
	  Exile_Item_ToiletPaper
	  arifle_SPAR_01_khk_F
	  Exile_Item_ToiletPaper
	  arifle_MX_SW_Black_F
	  1Rnd_Smoke_Grenade_shell
	  Exile_Item_Can_Empty
	  100Rnd_65x39_caseless_mag
	  Exile_Weapon_RPK
	  1Rnd_HE_Grenade_shell
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  V_BandollierB_rgr
	  Exile_Item_Magazine04
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Magazine01
	  U_IG_Guerilla2_1
	  Exile_Item_Heatpack
	  Exile_Item_Magazine01
	  Exile_Item_ToiletPaper
	  Exile_Item_ToiletPaper
	  U_IG_Guerilla1_1
	  Exile_Item_Magazine04
	  1Rnd_SmokeRed_Grenade_shell
	  Exile_Item_Magazine03
	  Exile_Item_PlasticBottleEmpty
	  1Rnd_SmokeYellow_Grenade_shell
	  Exile_Item_Can_Empty
	  APERSMine_Range_Mag
	  V_PlateCarrierIA1_dgtl
	  Exile_Item_Magazine03
	  ItemCompass
	  10Rnd_762x54_Mag
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ZipTie
	  U_O_T_Sniper_F
	  H_HelmetIA
	  ItemMap
	  Exile_Item_Vishpirin
	  Exile_Item_Magazine02
	  H_Shemag_olive
	  APERSTripMine_Wire_Mag
	  Exile_Item_Can_Empty
	  Exile_Item_PlasticBottleEmpty
	  SmokeShellOrange
	  Exile_Item_Magazine01
	  Exile_Item_PlasticBottleEmpty
	  APERSTripMine_Wire_Mag
	  optic_SOS
	  V_HarnessO_brn
	  U_B_CombatUniform_mcam
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Magazine02
	  Exile_Item_Magazine02
	  Exile_Item_Can_Empty
	  10Rnd_338_Mag
	  muzzle_snds_93mmg_tan
	  Exile_Item_ToiletPaper
	  srifle_LRR_F
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Can_Empty
	  H_HelmetB
	  Exile_Item_PlasticBottleEmpty
	  Exile_Weapon_AK107_GL
	  Exile_Item_Can_Empty
	  srifle_DMR_01_F
	  Exile_Item_Magazine01
	  Exile_Item_Magazine04
	  Exile_Magazine_30Rnd_762x39_AK
	  Exile_Item_Magazine03
	  Exile_Item_Magazine02
	  Exile_Item_Can_Empty
	  30Rnd_545x39_Mag_Tracer_F
	  arifle_Mk20C_F
	  Exile_Item_ToiletPaper
	  U_B_GhillieSuit
	  Exile_Item_Magazine04
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  Exile_Item_Can_Empty
	*/
	class Military
	{
		count = 548;
		half = 9069.52059671204;
		halfIndex = 274;
		sum = 10000.0000000001;
		items[] = 
		{
			{1237.62376237624, "Exile_Item_Can_Empty"}, // 12.38%
			{2475.24752475248, "Exile_Item_ToiletPaper"}, // 12.38%
			{3712.87128712871, "Exile_Item_PlasticBottleEmpty"}, // 12.38%
			{4022.27722772277, "Exile_Item_Magazine01"}, // 3.09%
			{4331.68316831683, "Exile_Item_Magazine02"}, // 3.09%
			{4641.08910891089, "Exile_Item_Magazine03"}, // 3.09%
			{4950.49504950495, "Exile_Item_Magazine04"}, // 3.09%
			{5050, "1Rnd_HE_Grenade_shell"}, // 1.00%
			{5149.0099009901, "Exile_Item_ZipTie"}, // 0.99%
			{5235.10546706845, "ItemCompass"}, // 0.86%
			{5309.36289281102, "MiniGrenade"}, // 0.74%
			{5383.62031855359, "HandGrenade"}, // 0.74%
			{5433.12526904864, "APERSTripMine_Wire_Mag"}, // 0.50%
			{5482.63021954369, "APERSBoundingMine_Range_Mag"}, // 0.50%
			{5532.13517003874, "APERSMine_Range_Mag"}, // 0.50%
			{5581.14507102884, "3Rnd_HE_Grenade_shell"}, // 0.49%
			{5625.14947146889, "Exile_Item_Heatpack"}, // 0.44%
			{5668.19725450806, "Rangefinder"}, // 0.43%
			{5706.7011048931, "ItemMap"}, // 0.39%
			{5743.37143859313, "Exile_Item_Heatpack"}, // 0.37%
			{5780.04177229317, "Exile_Item_Vishpirin"}, // 0.37%
			{5813.0450726232, "ItemRadio"}, // 0.33%
			{5846.04837295324, "ItemWatch"}, // 0.33%
			{5876.51295787327, "U_IG_Guerilla2_2"}, // 0.30%
			{5906.9775427933, "U_IG_Guerilla2_3"}, // 0.30%
			{5937.44212771333, "U_IG_Guerilla2_1"}, // 0.30%
			{5967.90671263336, "U_IG_Guerilla1_1"}, // 0.30%
			{5997.60968293039, "DemoCharge_Remote_Mag"}, // 0.30%
			{6027.31265322742, "IEDUrbanSmall_Remote_Mag"}, // 0.30%
			{6057.01562352445, "IEDLandSmall_Remote_Mag"}, // 0.30%
			{6086.71859382148, "150Rnd_93x64_Mag"}, // 0.30%
			{6115.279142184, "U_IG_Guerilla3_1"}, // 0.29%
			{6143.83969054653, "U_IG_Guerilla3_2"}, // 0.29%
			{6171.63194345603, "10Rnd_338_Mag"}, // 0.28%
			{6199.42419636554, "10Rnd_93x64_DMR_05_Mag"}, // 0.28%
			{6224.67172111801, "UGL_FlareYellow_F"}, // 0.25%
			{6249.91924587049, "UGL_FlareWhite_F"}, // 0.25%
			{6275.16677062296, "UGL_FlareRed_F"}, // 0.25%
			{6300.41429537544, "UGL_FlareGreen_F"}, // 0.25%
			{6325.16677062296, "arifle_MX_SW_Black_F"}, // 0.25%
			{6349.91924587049, "LMG_Mk200_F"}, // 0.25%
			{6374.67172111801, "LMG_Zafir_F"}, // 0.25%
			{6399.42419636554, "Exile_Weapon_RPK"}, // 0.25%
			{6424.17667161306, "Exile_Weapon_PK"}, // 0.25%
			{6448.92914686059, "Exile_Weapon_PKP"}, // 0.25%
			{6473.68162210811, "LMG_03_F"}, // 0.25%
			{6498.43409735563, "arifle_MX_SW_F"}, // 0.25%
			{6522.75231865145, "10Rnd_127x54_Mag"}, // 0.24%
			{6545.85462888247, "20Rnd_762x51_Mag"}, // 0.23%
			{6568.95693911349, "10Rnd_762x54_Mag"}, // 0.23%
			{6590.95913933352, "Binocular"}, // 0.22%
			{6612.96133955354, "ItemGPS"}, // 0.22%
			{6634.17774690856, "SmokeShellOrange"}, // 0.21%
			{6655.39415426358, "SmokeShellPurple"}, // 0.21%
			{6676.6105616186, "SmokeShellBlue"}, // 0.21%
			{6697.82696897362, "SmokeShellYellow"}, // 0.21%
			{6719.04337632864, "SmokeShellGreen"}, // 0.21%
			{6740.25978368366, "SmokeShellRed"}, // 0.21%
			{6761.47619103869, "SmokeShell"}, // 0.21%
			{6781.27817123671, "srifle_EBR_F"}, // 0.20%
			{6801.08015143473, "srifle_DMR_01_F"}, // 0.20%
			{6820.18732531001, "20Rnd_762x51_Mag"}, // 0.19%
			{6839.12546073429, "B_Carryall_cbr"}, // 0.19%
			{6858.06359615857, "B_Carryall_ghex_F"}, // 0.19%
			{6876.39876300859, "Exile_Item_Bandage"}, // 0.18%
			{6894.34015446317, "B_Carryall_oli"}, // 0.18%
			{6912.28154591775, "B_Carryall_khk"}, // 0.18%
			{6928.78319608277, "V_RebreatherIA"}, // 0.17%
			{6945.28484624778, "V_RebreatherIR"}, // 0.17%
			{6961.7864964128, "V_RebreatherB"}, // 0.17%
			{6978.28814657782, "muzzle_snds_338_black"}, // 0.17%
			{6994.78979674283, "muzzle_snds_338_green"}, // 0.17%
			{7011.29144690785, "muzzle_snds_338_sand"}, // 0.17%
			{7027.79309707286, "muzzle_snds_93mmg_tan"}, // 0.17%
			{7044.29474723788, "U_I_GhillieSuit"}, // 0.17%
			{7060.7963974029, "U_O_GhillieSuit"}, // 0.17%
			{7077.29804756791, "20Rnd_650x39_Cased_Mag_F"}, // 0.17%
			{7093.79969773293, "U_B_GhillieSuit"}, // 0.17%
			{7110.30134789795, "muzzle_snds_93mmg"}, // 0.17%
			{7126.80299806296, "muzzle_snds_B"}, // 0.17%
			{7142.85865768298, "srifle_DMR_05_blk_F"}, // 0.16%
			{7158.91431730299, "srifle_DMR_05_hex_F"}, // 0.16%
			{7174.96997692301, "srifle_DMR_05_tan_F"}, // 0.16%
			{7190.52867565002, "srifle_LRR_F"}, // 0.16%
			{7206.08737437704, "srifle_LRR_tna_F"}, // 0.16%
			{7221.64607310406, "srifle_GM6_ghex_F"}, // 0.16%
			{7237.20477183107, "srifle_DMR_07_blk_F"}, // 0.16%
			{7252.76347055809, "srifle_GM6_F"}, // 0.16%
			{7268.3221692851, "srifle_DMR_07_hex_F"}, // 0.16%
			{7283.88086801212, "srifle_DMR_07_ghex_F"}, // 0.16%
			{7299.03544469427, "1Rnd_SmokePurple_Grenade_shell"}, // 0.15%
			{7314.19002137643, "1Rnd_SmokeYellow_Grenade_shell"}, // 0.15%
			{7329.34459805859, "1Rnd_Smoke_Grenade_shell"}, // 0.15%
			{7344.49917474075, "1Rnd_SmokeOrange_Grenade_shell"}, // 0.15%
			{7359.65375142291, "1Rnd_SmokeGreen_Grenade_shell"}, // 0.15%
			{7374.80832810507, "1Rnd_SmokeRed_Grenade_shell"}, // 0.15%
			{7389.96290478722, "1Rnd_SmokeBlue_Grenade_shell"}, // 0.15%
			{7404.91406433271, "B_Carryall_ocamo"}, // 0.15%
			{7419.86522387819, "B_Carryall_oucamo"}, // 0.15%
			{7434.81638342368, "B_Carryall_mcamo"}, // 0.15%
			{7449.66786857219, "V_PlateCarrierGL_rgr"}, // 0.15%
			{7464.51935372071, "V_PlateCarrierIA1_dgtl"}, // 0.15%
			{7479.37083886922, "V_PlateCarrierIA2_dgtl"}, // 0.15%
			{7494.22232401774, "V_PlateCarrier3_rgr"}, // 0.15%
			{7509.07380916626, "V_PlateCarrier2_rgr"}, // 0.15%
			{7523.92529431477, "V_PlateCarrierIAGL_dgtl"}, // 0.15%
			{7538.77677946329, "V_PlateCarrierSpec_rgr"}, // 0.15%
			{7553.6282646118, "V_PlateCarrier1_blk"}, // 0.15%
			{7568.47974976032, "V_PlateCarrier1_rgr"}, // 0.15%
			{7582.62402133033, "optic_AMS_snd"}, // 0.14%
			{7596.76829290034, "optic_KHS_tan"}, // 0.14%
			{7610.91256447036, "optic_KHS_old"}, // 0.14%
			{7625.05683604037, "optic_KHS_hex"}, // 0.14%
			{7639.20110761039, "optic_KHS_blk"}, // 0.14%
			{7653.3453791804, "optic_AMS_khk"}, // 0.14%
			{7667.48965075041, "optic_AMS"}, // 0.14%
			{7681.53835291793, "srifle_DMR_04_Tan_F"}, // 0.14%
			{7695.58705508544, "srifle_DMR_04_F"}, // 0.14%
			{7709.61345772571, "5Rnd_127x108_Mag"}, // 0.14%
			{7723.63986036597, "7Rnd_408_Mag"}, // 0.14%
			{7737.41515093851, "O_NVGoggles_ghex_F"}, // 0.14%
			{7751.19044151104, "NVGoggles"}, // 0.14%
			{7764.96573208358, "O_NVGoggles_hex_F"}, // 0.14%
			{7778.74102265611, "O_NVGoggles_urb_F"}, // 0.14%
			{7792.51631322865, "NVGoggles_tna_F"}, // 0.14%
			{7806.15543224259, "optic_DMS"}, // 0.14%
			{7819.28939870046, "optic_LRPS_ghex_F"}, // 0.13%
			{7832.42336515833, "optic_LRPS_tna_F"}, // 0.13%
			{7845.5573316162, "optic_LRPS"}, // 0.13%
			{7858.69129807407, "optic_SOS_khk_F"}, // 0.13%
			{7871.82526453194, "optic_SOS"}, // 0.13%
			{7883.86700924695, "srifle_DMR_02_F"}, // 0.12%
			{7895.90875396197, "srifle_DMR_02_sniper_F"}, // 0.12%
			{7907.95049867698, "srifle_DMR_02_camo_F"}, // 0.12%
			{7919.83168679579, "3Rnd_UGL_FlareGreen_F"}, // 0.12%
			{7931.7128749146, "3Rnd_UGL_FlareRed_F"}, // 0.12%
			{7943.59406303341, "3Rnd_UGL_FlareWhite_F"}, // 0.12%
			{7955.47525115223, "3Rnd_UGL_FlareYellow_F"}, // 0.12%
			{7966.88379941446, "B_FieldPack_cbr"}, // 0.11%
			{7978.29234767669, "B_FieldPack_oucamo"}, // 0.11%
			{7989.70089593893, "B_FieldPack_ocamo"}, // 0.11%
			{8001.10944420116, "B_FieldPack_blk"}, // 0.11%
			{8012.2562542464, "bipod_01_F_blk"}, // 0.11%
			{8023.40306429165, "bipod_01_F_khk"}, // 0.11%
			{8034.54987433689, "bipod_01_F_snd"}, // 0.11%
			{8045.69668438213, "bipod_02_F_blk"}, // 0.11%
			{8056.84349442738, "bipod_02_F_tan"}, // 0.11%
			{8067.99030447262, "bipod_03_F_blk"}, // 0.11%
			{8079.13711451786, "bipod_03_F_oli"}, // 0.11%
			{8089.62822985456, "bipod_02_F_hex"}, // 0.10%
			{8100.11934519126, "bipod_01_F_mtp"}, // 0.10%
			{8110.51538479522, "V_BandollierB_blk"}, // 0.10%
			{8120.91142439918, "V_BandollierB_rgr"}, // 0.10%
			{8131.30746400314, "V_BandollierB_cbr"}, // 0.10%
			{8141.7035036071, "V_BandollierB_khk"}, // 0.10%
			{8152.09954321106, "V_HarnessO_brn"}, // 0.10%
			{8162.49558281502, "V_HarnessOGL_brn"}, // 0.10%
			{8172.89162241898, "V_HarnessO_gry"}, // 0.10%
			{8183.28766202294, "V_HarnessOGL_gry"}, // 0.10%
			{8193.6837016269, "V_HarnessOSpec_brn"}, // 0.10%
			{8204.07974123086, "V_HarnessOSpec_gry"}, // 0.10%
			{8214.47578083482, "V_BandollierB_oli"}, // 0.10%
			{8224.37677093383, "SatchelCharge_Remote_Mag"}, // 0.10%
			{8233.9746694992, "muzzle_snds_B"}, // 0.10%
			{8243.49485228671, "U_I_C_Soldier_Camo_F"}, // 0.10%
			{8253.01503507422, "U_I_C_Soldier_Para_1_F"}, // 0.10%
			{8262.53521786173, "U_I_C_Soldier_Para_5_F"}, // 0.10%
			{8272.05540064924, "U_I_C_Soldier_Para_4_F"}, // 0.10%
			{8281.57558343675, "U_I_C_Soldier_Para_3_F"}, // 0.10%
			{8291.09576622426, "U_I_C_Soldier_Para_2_F"}, // 0.10%
			{8300.05962557316, "B_Bergen_rgr"}, // 0.09%
			{8309.02348492206, "B_Bergen_sgg"}, // 0.09%
			{8317.98734427095, "B_Bergen_mcamo"}, // 0.09%
			{8326.95120361985, "B_Bergen_blk"}, // 0.09%
			{8335.91506296875, "B_ViperLightHarness_khk_F"}, // 0.09%
			{8344.87892231765, "B_ViperLightHarness_oli_F"}, // 0.09%
			{8353.84278166655, "B_ViperHarness_base_F"}, // 0.09%
			{8362.80664101544, "B_ViperHarness_blk_F"}, // 0.09%
			{8371.77050036434, "B_ViperHarness_ghex_F"}, // 0.09%
			{8380.73435971324, "B_ViperHarness_hex_F"}, // 0.09%
			{8389.69821906214, "B_ViperHarness_khk_F"}, // 0.09%
			{8398.66207841104, "B_ViperHarness_oli_F"}, // 0.09%
			{8407.62593775993, "B_ViperLightHarness_base_F"}, // 0.09%
			{8416.58979710883, "B_ViperLightHarness_hex_F"}, // 0.09%
			{8425.55365645773, "B_ViperLightHarness_ghex_F"}, // 0.09%
			{8434.51751580663, "B_ViperLightHarness_blk_F"}, // 0.09%
			{8443.48137515553, "B_FieldPack_ghex_F"}, // 0.09%
			{8451.73220023804, "5Rnd_127x108_APDS_Mag"}, // 0.08%
			{8459.87446183262, "U_B_CombatUniform_mcam_tshirt"}, // 0.08%
			{8468.0167234272, "U_B_CombatUniform_mcam"}, // 0.08%
			{8476.15898502178, "U_B_T_Soldier_AR_F"}, // 0.08%
			{8484.30124661636, "U_B_CTRG_2"}, // 0.08%
			{8492.44350821094, "U_B_CTRG_1"}, // 0.08%
			{8500.58576980552, "U_B_CTRG_3"}, // 0.08%
			{8508.7280314001, "U_B_CombatUniform_mcam_vest"}, // 0.08%
			{8516.87029299468, "U_B_CTRG_Soldier_urb_3_F"}, // 0.08%
			{8525.01255458927, "U_B_T_Soldier_SL_F"}, // 0.08%
			{8533.15481618385, "U_B_CTRG_Soldier_F"}, // 0.08%
			{8541.29707777843, "U_B_CTRG_Soldier_2_F"}, // 0.08%
			{8549.43933937301, "U_B_CTRG_Soldier_3_F"}, // 0.08%
			{8557.58160096759, "U_B_CTRG_Soldier_urb_1_F"}, // 0.08%
			{8565.72386256217, "U_B_CTRG_Soldier_urb_2_F"}, // 0.08%
			{8573.86612415675, "U_B_GEN_Soldier_F"}, // 0.08%
			{8582.00838575133, "U_B_GEN_Commander_F"}, // 0.08%
			{8590.15064734592, "U_O_T_Soldier_F"}, // 0.08%
			{8598.2929089405, "U_O_T_Officer_F"}, // 0.08%
			{8606.43517053508, "U_B_CombatUniform_mcam_worn"}, // 0.08%
			{8614.05131676509, "U_IG_leader"}, // 0.08%
			{8621.47705933934, "V_Chestrig_oli"}, // 0.07%
			{8628.9028019136, "V_Chestrig_khk"}, // 0.07%
			{8636.32854448786, "V_Chestrig_rgr"}, // 0.07%
			{8643.75428706212, "V_Chestrig_blk"}, // 0.07%
			{8651.18002963638, "V_PlateCarrierL_CTRG"}, // 0.07%
			{8658.60577221063, "V_PlateCarrierH_CTRG"}, // 0.07%
			{8665.93983895064, "Exile_Item_InstaDoc"}, // 0.07%
			{8673.21997872933, "U_B_T_FullGhillie_tna_F"}, // 0.07%
			{8680.50011850801, "U_O_T_Sniper_F"}, // 0.07%
			{8687.7802582867, "U_O_T_FullGhillie_tna_F"}, // 0.07%
			{8695.06039806538, "U_B_T_Soldier_F"}, // 0.07%
			{8702.34053784406, "U_B_T_Sniper_F"}, // 0.07%
			{8709.41267362907, "V_PlateCarrier1_rgr_noflag_F"}, // 0.07%
			{8716.48480941408, "V_TacChestrig_grn_F"}, // 0.07%
			{8723.55694519909, "V_TacChestrig_oli_F"}, // 0.07%
			{8730.62908098409, "V_TacChestrig_cbr_F"}, // 0.07%
			{8737.7012167691, "V_PlateCarrier1_tna_F"}, // 0.07%
			{8744.77335255411, "V_PlateCarrier2_tna_F"}, // 0.07%
			{8751.84548833911, "V_PlateCarrierSpec_tna_F"}, // 0.07%
			{8758.91762412412, "V_HarnessO_ghex_F"}, // 0.07%
			{8765.98975990913, "V_HarnessOGL_ghex_F"}, // 0.07%
			{8773.06189569413, "V_PlateCarrierGL_blk"}, // 0.07%
			{8780.13403147914, "V_PlateCarrierGL_mtp"}, // 0.07%
			{8787.20616726415, "V_PlateCarrierGL_rgr"}, // 0.07%
			{8794.27830304916, "V_PlateCarrierSpec_rgr"}, // 0.07%
			{8801.35043883416, "V_PlateCarrierIAGL_dgtl"}, // 0.07%
			{8808.42257461917, "V_BandollierB_ghex_F"}, // 0.07%
			{8815.49471040418, "V_PlateCarrierIAGL_oli"}, // 0.07%
			{8822.56684618918, "V_PlateCarrierSpec_blk"}, // 0.07%
			{8829.63898197419, "V_PlateCarrier2_rgr_noflag_F"}, // 0.07%
			{8836.7111177592, "V_TacVest_gen_F"}, // 0.07%
			{8843.7832535442, "V_PlateCarrierGL_tna_F"}, // 0.07%
			{8850.85538932921, "V_PlateCarrierSpec_mtp"}, // 0.07%
			{8857.84432351675, "100Rnd_65x39_caseless_mag"}, // 0.07%
			{8864.83325770429, "150Rnd_762x54_Box"}, // 0.07%
			{8871.78713034908, "acc_flashlight"}, // 0.07%
			{8878.33540422408, "Exile_Weapon_LeeEnfield"}, // 0.07%
			{8884.88367809909, "Exile_Weapon_CZ550"}, // 0.07%
			{8891.4319519741, "Exile_Weapon_SVD"}, // 0.07%
			{8897.9802258491, "Exile_Weapon_SVDCamo"}, // 0.07%
			{8904.52849972411, "Exile_Weapon_DMR"}, // 0.07%
			{8911.07677359912, "Exile_Weapon_AKS_Gold"}, // 0.07%
			{8917.62504747412, "Exile_Weapon_AK74"}, // 0.07%
			{8924.17332134913, "Exile_Weapon_AK74_GL"}, // 0.07%
			{8930.72159522414, "Exile_Weapon_AK107_GL"}, // 0.07%
			{8937.26986909915, "Exile_Weapon_AK107"}, // 0.07%
			{8943.81814297415, "arifle_Katiba_F"}, // 0.07%
			{8950.36641684916, "Exile_Weapon_VSSVintorez"}, // 0.07%
			{8956.91469072417, "Exile_Weapon_AK47"}, // 0.07%
			{8963.42849999983, "U_B_PilotCoveralls"}, // 0.07%
			{8969.9423092755, "U_I_HeliPilotCoveralls"}, // 0.07%
			{8976.45611855116, "U_O_PilotCoveralls"}, // 0.07%
			{8982.96992782682, "U_I_pilotCoveralls"}, // 0.07%
			{8989.48373710249, "U_I_CombatUniform"}, // 0.07%
			{8995.99754637815, "U_I_CombatUniform_shortsleeve"}, // 0.07%
			{9002.51135565382, "U_I_CombatUniform_tshirt"}, // 0.07%
			{9009.02516492948, "U_B_HeliPilotCoveralls"}, // 0.07%
			{9015.08699560234, "3Rnd_Smoke_Grenade_shell"}, // 0.06%
			{9021.14882627521, "3Rnd_SmokeBlue_Grenade_shell"}, // 0.06%
			{9027.21065694807, "3Rnd_SmokeGreen_Grenade_shell"}, // 0.06%
			{9033.27248762093, "3Rnd_SmokeOrange_Grenade_shell"}, // 0.06%
			{9039.3343182938, "3Rnd_SmokePurple_Grenade_shell"}, // 0.06%
			{9045.39614896666, "3Rnd_SmokeRed_Grenade_shell"}, // 0.06%
			{9051.45797963952, "3Rnd_SmokeYellow_Grenade_shell"}, // 0.06%
			{9057.47885199703, "srifle_DMR_06_olive_F"}, // 0.06%
			{9063.49972435453, "srifle_DMR_03_khaki_F"}, // 0.06%
			{9069.52059671204, "srifle_DMR_06_camo_F"}, // 0.06%
			{9075.54146906954, "srifle_DMR_03_woodland_F"}, // 0.06%
			{9081.56234142705, "srifle_DMR_03_tan_F"}, // 0.06%
			{9087.58321378455, "srifle_DMR_03_F"}, // 0.06%
			{9093.56367760275, "B_Bergen_hex_F"}, // 0.06%
			{9099.54414142094, "B_Bergen_tna_F"}, // 0.06%
			{9105.52460523913, "B_Bergen_mcamo_F"}, // 0.06%
			{9111.50506905733, "B_Bergen_Base_F"}, // 0.06%
			{9117.48553287552, "B_Bergen_dgtl_F"}, // 0.06%
			{9123.30964469847, "Exile_Magazine_100Rnd_762x54_PK_Green"}, // 0.06%
			{9129.13375652142, "200Rnd_556x45_Box_Tracer_Red_F"}, // 0.06%
			{9134.95786834436, "100Rnd_65x39_caseless_mag_Tracer"}, // 0.06%
			{9140.78198016731, "Exile_Magazine_45Rnd_545x39_RPK_Green"}, // 0.06%
			{9146.60609199026, "150Rnd_762x54_Box_Tracer"}, // 0.06%
			{9152.4302038132, "Exile_Magazine_75Rnd_545x39_RPK_Green"}, // 0.06%
			{9158.25431563615, "200Rnd_556x45_Box_Red_F"}, // 0.06%
			{9164.0784274591, "200Rnd_556x45_Box_Tracer_F"}, // 0.06%
			{9169.90253928205, "200Rnd_556x45_Box_F"}, // 0.06%
			{9175.40308933705, "Exile_Item_MobilePhone"}, // 0.06%
			{9180.74535018184, "30Rnd_65x39_caseless_green"}, // 0.05%
			{9186.08761102663, "30Rnd_556x45_Stanag_red"}, // 0.05%
			{9191.42987187142, "30Rnd_556x45_Stanag_green"}, // 0.05%
			{9196.77213271621, "30Rnd_556x45_Stanag"}, // 0.05%
			{9202.01075181621, "arifle_Katiba_GL_F"}, // 0.05%
			{9207.24937091622, "arifle_MX_khk_F"}, // 0.05%
			{9212.48799001623, "arifle_MXC_khk_F"}, // 0.05%
			{9217.72660911623, "arifle_MX_F"}, // 0.05%
			{9222.96522821624, "arifle_MXC_F"}, // 0.05%
			{9228.20384731624, "arifle_TRG21_F"}, // 0.05%
			{9233.44246641625, "arifle_TRG20_F"}, // 0.05%
			{9238.49399197697, "muzzle_snds_B_snd_F"}, // 0.05%
			{9243.54551753769, "muzzle_snds_B_khk_F"}, // 0.05%
			{9248.51256942682, "optic_ERCO_snd_F"}, // 0.05%
			{9253.47962131596, "optic_ERCO_khk_F"}, // 0.05%
			{9258.4466732051, "muzzle_snds_m_snd_F"}, // 0.05%
			{9263.41372509423, "optic_Holosight_khk_F"}, // 0.05%
			{9268.38077698337, "optic_MRCO"}, // 0.05%
			{9273.3478288725, "optic_ERCO_blk_F"}, // 0.05%
			{9278.31488076164, "muzzle_snds_65_TI_hex_F"}, // 0.05%
			{9283.28193265078, "muzzle_snds_65_TI_blk_F"}, // 0.05%
			{9288.24898453991, "muzzle_snds_58_wdm_F"}, // 0.05%
			{9293.21603642905, "acc_pointer_IR"}, // 0.05%
			{9298.18308831818, "muzzle_snds_m_khk_F"}, // 0.05%
			{9303.15014020732, "optic_DMS_ghex_F"}, // 0.05%
			{9308.11719209646, "muzzle_snds_H_snd_F"}, // 0.05%
			{9313.08424398559, "optic_Holosight_blk_F"}, // 0.05%
			{9318.05129587473, "optic_Holosight"}, // 0.05%
			{9323.01834776387, "optic_Hamr_khk_F"}, // 0.05%
			{9327.985399653, "optic_Hamr"}, // 0.05%
			{9332.95245154214, "optic_Arco_ghex_F"}, // 0.05%
			{9337.91950343127, "optic_Arco_blk_F"}, // 0.05%
			{9342.88655532041, "muzzle_snds_58_blk_F"}, // 0.05%
			{9347.85360720955, "optic_Arco"}, // 0.05%
			{9352.82065909868, "muzzle_snds_H_MG_blk_F"}, // 0.05%
			{9357.78771098782, "muzzle_snds_65_TI_ghex_F"}, // 0.05%
			{9362.75476287696, "muzzle_snds_M"}, // 0.05%
			{9367.72181476609, "optic_DMS"}, // 0.05%
			{9372.68886665523, "muzzle_snds_H"}, // 0.05%
			{9377.65591854436, "muzzle_snds_H_khk_F"}, // 0.05%
			{9382.6229704335, "muzzle_snds_H_MG_khk_F"}, // 0.05%
			{9387.50832739025, "U_B_SpecopsUniform_sgg"}, // 0.05%
			{9392.3776667832, "Exile_Headgear_GasMask"}, // 0.05%
			{9397.24700617616, "H_Booniehat_indp"}, // 0.05%
			{9402.11634556911, "H_Booniehat_khk_hs"}, // 0.05%
			{9406.98568496207, "H_Booniehat_dgtl"}, // 0.05%
			{9411.85502435503, "H_Booniehat_dirty"}, // 0.05%
			{9416.72436374798, "H_Booniehat_tan"}, // 0.05%
			{9421.59370314094, "H_Booniehat_grn"}, // 0.05%
			{9426.46304253389, "H_Booniehat_mcamo"}, // 0.05%
			{9431.33238192685, "H_Booniehat_khk"}, // 0.05%
			{9436.16213319466, "H_MilCap_dgtl"}, // 0.05%
			{9440.99188446246, "H_MilCap_rucamo"}, // 0.05%
			{9445.82163573027, "H_MilCap_blue"}, // 0.05%
			{9450.65138699808, "Exile_Headgear_GasMask"}, // 0.05%
			{9455.48113826589, "H_MilCap_ocamo"}, // 0.05%
			{9460.3108895337, "H_MilCap_mcamo"}, // 0.05%
			{9465.14064080151, "H_MilCap_oucamo"}, // 0.05%
			{9469.72443251401, "arifle_Mk20_F"}, // 0.05%
			{9474.30822422652, "arifle_Mk20C_F"}, // 0.05%
			{9478.76366977107, "V_I_G_resistanceLeader_F"}, // 0.04%
			{9482.69263409608, "arifle_MXM_F"}, // 0.04%
			{9486.62159842108, "arifle_SDAR_F"}, // 0.04%
			{9490.53925637392, "20Rnd_556x45_UW_mag"}, // 0.04%
			{9494.34732948893, "U_I_G_resistanceLeader_F"}, // 0.04%
			{9497.99933403364, "H_Bandanna_cbr"}, // 0.04%
			{9501.65133857836, "H_Hat_camo"}, // 0.04%
			{9505.30334312308, "H_Cap_brn_SPECOPS"}, // 0.04%
			{9508.95534766779, "H_Cap_tan_specops_US"}, // 0.04%
			{9512.60735221251, "H_Cap_khaki_specops_UK"}, // 0.04%
			{9516.25935675722, "H_Watchcap_blk"}, // 0.04%
			{9519.91136130194, "H_Watchcap_khk"}, // 0.04%
			{9523.56336584666, "H_Bandanna_camo"}, // 0.04%
			{9527.21537039137, "H_Bandanna_gry"}, // 0.04%
			{9530.86737493609, "H_Bandanna_sgg"}, // 0.04%
			{9534.5193794808, "H_BandMask_blk"}, // 0.04%
			{9538.17138402552, "H_Bandanna_khk_hs"}, // 0.04%
			{9541.82338857024, "H_Bandanna_khk"}, // 0.04%
			{9545.47539311495, "H_Bandanna_mcamo"}, // 0.04%
			{9549.09770656581, "H_HelmetB"}, // 0.04%
			{9552.72002001666, "H_HelmetB_paint"}, // 0.04%
			{9556.34233346752, "H_HelmetB_light"}, // 0.04%
			{9559.96464691838, "H_HelmetB_plain_blk"}, // 0.04%
			{9563.58696036923, "H_HelmetSpecB"}, // 0.04%
			{9567.20927382009, "H_HelmetSpecB_paint1"}, // 0.04%
			{9570.83158727095, "H_HelmetSpecB_paint2"}, // 0.04%
			{9574.4539007218, "H_HelmetSpecB_blk"}, // 0.04%
			{9578.07621417266, "H_HelmetIA"}, // 0.04%
			{9581.35035111016, "arifle_AK12_F"}, // 0.03%
			{9584.62448804767, "arifle_SPAR_03_khk_F"}, // 0.03%
			{9587.89862498517, "arifle_SPAR_01_GL_blk_F"}, // 0.03%
			{9591.17276192267, "arifle_SPAR_01_snd_F"}, // 0.03%
			{9594.44689886018, "arifle_SPAR_01_khk_F"}, // 0.03%
			{9597.72103579768, "arifle_SPAR_01_blk_F"}, // 0.03%
			{9600.99517273518, "arifle_CTARS_hex_F"}, // 0.03%
			{9604.26930967269, "arifle_CTARS_ghex_F"}, // 0.03%
			{9607.54344661019, "arifle_CTARS_blk_F"}, // 0.03%
			{9610.81758354769, "arifle_CTAR_ghex_F"}, // 0.03%
			{9614.0917204852, "arifle_SPAR_01_GL_khk_F"}, // 0.03%
			{9617.3658574227, "arifle_CTAR_hex_F"}, // 0.03%
			{9620.6399943602, "arifle_ARX_hex_F"}, // 0.03%
			{9623.91413129771, "arifle_ARX_ghex_F"}, // 0.03%
			{9627.18826823521, "arifle_ARX_blk_F"}, // 0.03%
			{9630.46240517272, "arifle_AKS_F"}, // 0.03%
			{9633.73654211022, "arifle_AKM_FL_F"}, // 0.03%
			{9637.01067904772, "arifle_AKM_F"}, // 0.03%
			{9640.28481598523, "arifle_AK12_GL_F"}, // 0.03%
			{9643.55895292273, "arifle_SPAR_03_snd_F"}, // 0.03%
			{9646.83308986023, "arifle_CTAR_blk_F"}, // 0.03%
			{9650.10722679774, "arifle_SPAR_01_GL_snd_F"}, // 0.03%
			{9653.38136373524, "arifle_CTAR_GL_blk_F"}, // 0.03%
			{9656.65550067274, "arifle_SPAR_02_khk_F"}, // 0.03%
			{9659.92963761025, "arifle_SPAR_02_snd_F"}, // 0.03%
			{9663.20377454775, "arifle_SPAR_03_blk_F"}, // 0.03%
			{9666.47791148525, "arifle_SPAR_02_blk_F"}, // 0.03%
			{9669.73481612309, "U_O_V_Soldier_Viper_F"}, // 0.03%
			{9672.99172076092, "U_I_OfficerUniform"}, // 0.03%
			{9676.24862539875, "U_B_Wetsuit"}, // 0.03%
			{9679.50553003658, "U_O_OfficerUniform_ocamo"}, // 0.03%
			{9682.76243467441, "U_O_V_Soldier_Viper_hex_F"}, // 0.03%
			{9686.01933931225, "U_I_Wetsuit"}, // 0.03%
			{9689.27624395008, "U_O_CombatUniform_ocamo"}, // 0.03%
			{9692.53314858791, "U_O_CombatUniform_oucamo"}, // 0.03%
			{9695.79005322574, "U_O_SpecopsUniform_ocamo"}, // 0.03%
			{9699.04695786357, "U_O_Wetsuit"}, // 0.03%
			{9702.30386250141, "U_O_SpecopsUniform_blk"}, // 0.03%
			{9705.50921900828, "Exile_Magazine_30Rnd_545x39_AK_Green"}, // 0.03%
			{9708.71457551516, "Exile_Magazine_30Rnd_545x39_AK"}, // 0.03%
			{9711.91993202203, "Exile_Magazine_30Rnd_762x39_AK"}, // 0.03%
			{9715.12528852891, "30Rnd_556x45_Stanag_Tracer_Green"}, // 0.03%
			{9718.33064503578, "30Rnd_65x39_caseless_green_mag_Tracer"}, // 0.03%
			{9721.53600154265, "30Rnd_556x45_Stanag_Tracer_Yellow"}, // 0.03%
			{9724.74135804953, "30Rnd_556x45_Stanag_Tracer_Red"}, // 0.03%
			{9727.9467145564, "Exile_Magazine_30Rnd_545x39_AK_Red"}, // 0.03%
			{9731.15207106328, "Exile_Magazine_20Rnd_762x51_DMR_Green"}, // 0.03%
			{9734.35742757015, "30Rnd_65x39_caseless_mag"}, // 0.03%
			{9737.56278407703, "Exile_Magazine_30Rnd_545x39_AK_White"}, // 0.03%
			{9740.7681405839, "30Rnd_65x39_caseless_mag_Tracer"}, // 0.03%
			{9743.97349709078, "Exile_Magazine_20Rnd_762x51_DMR"}, // 0.03%
			{9747.17885359765, "Exile_Magazine_5Rnd_22LR"}, // 0.03%
			{9750.38421010452, "Exile_Magazine_10Rnd_762x54"}, // 0.03%
			{9753.5895666114, "Exile_Magazine_10Rnd_9x39"}, // 0.03%
			{9756.79492311827, "Exile_Magazine_20Rnd_9x39"}, // 0.03%
			{9760.00027962515, "30Rnd_762x39_Mag_F"}, // 0.03%
			{9763.20563613202, "30Rnd_762x39_Mag_Green_F"}, // 0.03%
			{9766.4109926389, "30Rnd_762x39_Mag_Tracer_F"}, // 0.03%
			{9769.61634914577, "Exile_Magazine_30Rnd_545x39_AK_Yellow"}, // 0.03%
			{9772.82170565265, "30Rnd_762x39_Mag_Tracer_Green_F"}, // 0.03%
			{9776.02706215952, "30Rnd_762x39_AK47_M"}, // 0.03%
			{9779.2324186664, "30Rnd_545x39_Mag_F"}, // 0.03%
			{9782.43777517327, "30Rnd_545x39_Mag_Green_F"}, // 0.03%
			{9785.64313168014, "Exile_Magazine_20Rnd_762x51_DMR_White"}, // 0.03%
			{9788.84848818702, "30Rnd_545x39_Mag_Tracer_Green_F"}, // 0.03%
			{9792.05384469389, "30Rnd_580x42_Mag_F"}, // 0.03%
			{9795.25920120077, "Exile_Magazine_20Rnd_762x51_DMR_Yellow"}, // 0.03%
			{9798.46455770764, "30Rnd_580x42_Mag_Tracer_F"}, // 0.03%
			{9801.66991421452, "Exile_Magazine_20Rnd_762x51_DMR_Red"}, // 0.03%
			{9804.87527072139, "100Rnd_580x42_Mag_F"}, // 0.03%
			{9808.08062722827, "20Rnd_762x51_Mag"}, // 0.03%
			{9811.28598373514, "100Rnd_580x42_Mag_Tracer_F"}, // 0.03%
			{9814.49134024202, "150Rnd_556x45_Drum_Mag_Tracer_F"}, // 0.03%
			{9817.69669674889, "150Rnd_556x45_Drum_Mag_F"}, // 0.03%
			{9820.90205325576, "30Rnd_545x39_Mag_Tracer_F"}, // 0.03%
			{9823.81410916724, "130Rnd_338_Mag"}, // 0.03%
			{9826.66331495113, "Exile_Magazine_10Rnd_303"}, // 0.03%
			{9829.28262450113, "arifle_Mk20_GL_F"}, // 0.03%
			{9831.90193405113, "arifle_MX_GL_F"}, // 0.03%
			{9834.52124360113, "arifle_TRG21_GL_F"}, // 0.03%
			{9837.14055315113, "arifle_MX_GL_khk_F"}, // 0.03%
			{9839.6240790957, "optic_NVS"}, // 0.02%
			{9842.05874879218, "H_Booniehat_tna_F"}, // 0.02%
			{9844.49341848866, "H_MilCap_ghex_F"}, // 0.02%
			{9846.92808818514, "H_MilCap_tna_F"}, // 0.02%
			{9849.36275788162, "H_ShemagOpen_tan"}, // 0.02%
			{9851.79742757809, "H_Cap_tan_Syndikat_F"}, // 0.02%
			{9854.23209727457, "H_Cap_blk_Syndikat_F"}, // 0.02%
			{9856.66676697105, "H_Cap_grn_Syndikat_F"}, // 0.02%
			{9859.10143666753, "H_Cap_oli_Syndikat_F"}, // 0.02%
			{9861.53610636401, "H_MilCap_gen_F"}, // 0.02%
			{9863.97077606049, "H_FakeHeadgear_Syndikat_F"}, // 0.02%
			{9866.40544575697, "H_Watchcap_camo"}, // 0.02%
			{9868.84011545344, "H_Shemag_olive_hs"}, // 0.02%
			{9871.27478514992, "H_Shemag_olive"}, // 0.02%
			{9873.7094548464, "H_Shemag_tan"}, // 0.02%
			{9876.14412454288, "H_Shemag_khk"}, // 0.02%
			{9878.57879423936, "H_TurbanO_blk"}, // 0.02%
			{9881.01346393584, "H_Watchcap_sgg"}, // 0.02%
			{9883.44813363232, "H_ShemagOpen_khk"}, // 0.02%
			{9885.86300926622, "H_HelmetB_light_black"}, // 0.02%
			{9888.27788490013, "H_HelmetB_light_sand"}, // 0.02%
			{9890.69276053403, "H_HelmetB_sand"}, // 0.02%
			{9893.10763616794, "H_HelmetB_black"}, // 0.02%
			{9895.52251180184, "H_HelmetB_grass"}, // 0.02%
			{9897.93738743575, "H_HelmetB_snakeskin"}, // 0.02%
			{9900.35226306965, "H_HelmetB_desert"}, // 0.02%
			{9902.76713870356, "H_HelmetIA_camo"}, // 0.02%
			{9905.18201433746, "H_HelmetB_light_desert"}, // 0.02%
			{9907.59688997137, "H_HelmetB_light_grass"}, // 0.02%
			{9910.01176560528, "H_BandMask_khk"}, // 0.02%
			{9912.42664123918, "H_HelmetB_light_snakeskin"}, // 0.02%
			{9914.84151687309, "H_HelmetB_TI_tna_F"}, // 0.02%
			{9917.25639250699, "H_HelmetCrew_O_ghex_F"}, // 0.02%
			{9919.6712681409, "H_HelmetIA_net"}, // 0.02%
			{9922.0861437748, "H_HelmetSpecO_ghex_F"}, // 0.02%
			{9924.50101940871, "H_HelmetB_tna_F"}, // 0.02%
			{9926.91589504261, "H_HelmetLeaderO_ghex_F"}, // 0.02%
			{9929.33077067652, "H_HelmetB_Light_tna_F"}, // 0.02%
			{9931.74564631042, "H_HelmetB_Enh_tna_F"}, // 0.02%
			{9934.16052194433, "H_Helmet_Skate"}, // 0.02%
			{9936.57539757824, "H_BandMask_demon"}, // 0.02%
			{9938.99027321214, "H_BandMask_reaper"}, // 0.02%
			{9941.40514884605, "H_Beret_gen_F"}, // 0.02%
			{9943.36963100855, "arifle_MXM_Black_F"}, // 0.02%
			{9945.33411317105, "arifle_MXC_Black_F"}, // 0.02%
			{9947.29859533355, "arifle_MX_Black_F"}, // 0.02%
			{9949.26307749606, "arifle_MX_GL_Black_F"}, // 0.02%
			{9951.22755965856, "arifle_MXM_khk_F"}, // 0.02%
			{9953.00831327349, "10Rnd_50BW_Mag_F"}, // 0.02%
			{9954.46434122923, "U_B_FullGhillie_ard"}, // 0.01%
			{9955.92036918496, "U_B_FullGhillie_lsh"}, // 0.01%
			{9957.3763971407, "U_O_FullGhillie_ard"}, // 0.01%
			{9958.83242509644, "U_O_FullGhillie_lsh"}, // 0.01%
			{9960.28845305218, "U_O_FullGhillie_sard"}, // 0.01%
			{9961.74448100791, "U_I_FullGhillie_ard"}, // 0.01%
			{9963.20050896365, "U_I_FullGhillie_lsh"}, // 0.01%
			{9964.65653691939, "U_I_FullGhillie_sard"}, // 0.01%
			{9966.11256487512, "U_B_FullGhillie_sard"}, // 0.01%
			{9967.32989972336, "H_Beret_Colonel"}, // 0.01%
			{9968.5472345716, "H_Beret_ocamo"}, // 0.01%
			{9969.76456941984, "H_Beret_brn_SF"}, // 0.01%
			{9970.98190426808, "H_Beret_grn_SF"}, // 0.01%
			{9972.19923911632, "H_Beret_grn"}, // 0.01%
			{9973.41657396456, "H_Beret_red"}, // 0.01%
			{9974.6339088128, "H_Beret_blk"}, // 0.01%
			{9975.85124366104, "H_Beret_02"}, // 0.01%
			{9977.05868147799, "H_HelmetCrew_O"}, // 0.01%
			{9978.26611929494, "H_HelmetO_ghex_F"}, // 0.01%
			{9979.4735571119, "H_HelmetLeaderO_ocamo"}, // 0.01%
			{9980.68099492885, "H_HelmetCrew_I"}, // 0.01%
			{9981.8884327458, "H_PilotHelmetFighter_O"}, // 0.01%
			{9983.09587056275, "H_PilotHelmetFighter_I"}, // 0.01%
			{9984.30330837971, "H_PilotHelmetHeli_B"}, // 0.01%
			{9985.51074619666, "H_PilotHelmetHeli_O"}, // 0.01%
			{9986.71818401361, "H_PilotHelmetHeli_I"}, // 0.01%
			{9987.92562183057, "H_HelmetB_camo"}, // 0.01%
			{9989.13305964752, "H_CrewHelmetHeli_B"}, // 0.01%
			{9990.34049746447, "H_CrewHelmetHeli_O"}, // 0.01%
			{9991.54793528142, "H_CrewHelmetHeli_I"}, // 0.01%
			{9992.75537309838, "H_HelmetO_oucamo"}, // 0.01%
			{9993.96281091533, "H_HelmetLeaderO_oucamo"}, // 0.01%
			{9995.17024873228, "H_HelmetSpecO_ocamo"}, // 0.01%
			{9996.37768654923, "H_HelmetSpecO_blk"}, // 0.01%
			{9997.58512436619, "H_HelmetO_ocamo"}, // 0.01%
			{9998.79256218314, "H_HelmetCrew_B"}, // 0.01%
			{10000.0000000001, "H_PilotHelmetFighter_B"} // 0.01%
		};
	};

	/**
	  Result of 100 rounds:

	  Exile_Item_Vishpirin
	  Exile_Item_InstaDoc
	  Exile_Item_ToiletPaper
	  Exile_Item_Vishpirin
	  Exile_Item_Vishpirin
	  Exile_Item_Vishpirin
	  Exile_Item_Heatpack
	  Exile_Item_ToiletPaper
	  Exile_Item_ToiletPaper
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_Vishpirin
	  Exile_Item_Vishpirin
	  Exile_Item_Vishpirin
	  Exile_Item_Heatpack
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ToiletPaper
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_Vishpirin
	  Exile_Item_Magazine02
	  Exile_Item_Vishpirin
	  Exile_Item_Bandage
	  Exile_Item_ToiletPaper
	  Exile_Item_Vishpirin
	  Exile_Item_InstaDoc
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_Vishpirin
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_Vishpirin
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_ToiletPaper
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_ToiletPaper
	  Exile_Item_Vishpirin
	  Exile_Item_Bandage
	  Exile_Item_ToiletPaper
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_Can_Empty
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Magazine02
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Magazine04
	  Exile_Item_Bandage
	  Exile_Item_Vishpirin
	  Exile_Item_Heatpack
	  Exile_Item_Can_Empty
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_ToiletPaper
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_Bandage
	  Exile_Item_Can_Empty
	  Exile_Item_Vishpirin
	  Exile_Item_Can_Empty
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_Magazine02
	  Exile_Item_Heatpack
	  Exile_Item_InstaDoc
	  Exile_Item_Vishpirin
	  Exile_Item_Can_Empty
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Magazine03
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_Magazine04
	  Exile_Item_Magazine02
	  Exile_Item_Vishpirin
	  Exile_Item_Can_Empty
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_Vishpirin
	  Exile_Item_Vishpirin
	*/
	class Medical
	{
		count = 11;
		half = 8731.48148148148;
		halfIndex = 5;
		sum = 10000;
		items[] = 
		{
			{2592.59259259259, "Exile_Item_Vishpirin"}, // 25.93%
			{5185.18518518519, "Exile_Item_Heatpack"}, // 25.93%
			{6481.48148148148, "Exile_Item_Bandage"}, // 12.96%
			{7231.48148148148, "Exile_Item_Can_Empty"}, // 7.50%
			{7981.48148148148, "Exile_Item_ToiletPaper"}, // 7.50%
			{8731.48148148148, "Exile_Item_PlasticBottleEmpty"}, // 7.50%
			{9250, "Exile_Item_InstaDoc"}, // 5.19%
			{9437.5, "Exile_Item_Magazine01"}, // 1.88%
			{9625, "Exile_Item_Magazine02"}, // 1.88%
			{9812.5, "Exile_Item_Magazine03"}, // 1.88%
			{10000, "Exile_Item_Magazine04"} // 1.88%
		};
	};

	/**
	  Result of 100 rounds:

	  srifle_DMR_01_F
	  H_HelmetSpecB_paint2
	  ItemWatch
	  srifle_DMR_07_blk_F
	  srifle_DMR_05_tan_F
	  Exile_Item_ZipTie
	  U_B_GhillieSuit
	  10Rnd_127x54_Mag
	  B_Bergen_mcamo_F
	  optic_AMS_khk
	  U_B_GhillieSuit
	  srifle_DMR_05_hex_F
	  Exile_Item_ZipTie
	  srifle_EBR_F
	  srifle_DMR_07_hex_F
	  srifle_DMR_02_camo_F
	  optic_KHS_hex
	  ItemGPS
	  B_Carryall_mcamo
	  HandGrenade
	  srifle_DMR_07_blk_F
	  srifle_DMR_07_hex_F
	  H_BandMask_khk
	  srifle_DMR_07_ghex_F
	  srifle_DMR_06_camo_F
	  ItemRadio
	  Exile_Item_ZipTie
	  optic_DMS
	  srifle_DMR_06_olive_F
	  Exile_Item_Vishpirin
	  srifle_DMR_07_hex_F
	  srifle_DMR_01_F
	  muzzle_snds_93mmg_tan
	  srifle_DMR_02_sniper_F
	  srifle_LRR_tna_F
	  srifle_DMR_04_F
	  Exile_Item_Heatpack
	  B_Carryall_oli
	  srifle_DMR_04_F
	  srifle_DMR_05_tan_F
	  srifle_LRR_F
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  ItemRadio
	  srifle_DMR_02_camo_F
	  srifle_GM6_F
	  ItemRadio
	  srifle_EBR_F
	  B_Carryall_oli
	  10Rnd_93x64_DMR_05_Mag
	  srifle_DMR_02_camo_F
	  B_Carryall_ghex_F
	  APERSTripMine_Wire_Mag
	  MiniGrenade
	  Exile_Item_Vishpirin
	  optic_AMS
	  H_BandMask_khk
	  B_Carryall_ocamo
	  B_Carryall_mcamo
	  U_B_GhillieSuit
	  H_HelmetCrew_I
	  B_Carryall_khk
	  srifle_DMR_05_blk_F
	  srifle_LRR_tna_F
	  APERSMine_Range_Mag
	  srifle_DMR_04_F
	  HandGrenade
	  B_Carryall_khk
	  B_Bergen_Base_F
	  20Rnd_650x39_Cased_Mag_F
	  Exile_Headgear_GasMask
	  HandGrenade
	  U_I_GhillieSuit
	  U_B_GhillieSuit
	  srifle_DMR_01_F
	  srifle_DMR_03_F
	  U_B_T_FullGhillie_tna_F
	  srifle_GM6_ghex_F
	  U_O_T_FullGhillie_tna_F
	  srifle_DMR_04_F
	  Exile_Item_ZipTie
	  H_HelmetB_light_black
	  MiniGrenade
	  optic_LRPS_tna_F
	  srifle_DMR_01_F
	  ItemMap
	  U_O_GhillieSuit
	  srifle_DMR_02_sniper_F
	  U_I_FullGhillie_ard
	  srifle_DMR_02_camo_F
	  U_B_GhillieSuit
	  Exile_Item_ZipTie
	  muzzle_snds_B_snd_F
	  H_HelmetSpecO_ghex_F
	  srifle_DMR_05_tan_F
	  U_B_T_FullGhillie_tna_F
	  Exile_Item_Heatpack
	  srifle_DMR_07_hex_F
	  srifle_EBR_F
	  srifle_EBR_F
	*/
	class Tourist
	{
		count = 165;
		half = 8623.41631937328;
		halfIndex = 82;
		sum = 10000;
		items[] = 
		{
			{400, "Exile_Item_ZipTie"}, // 4.00%
			{666.666666666667, "srifle_DMR_01_F"}, // 2.67%
			{933.333333333333, "srifle_EBR_F"}, // 2.67%
			{1149.54954954955, "srifle_DMR_05_blk_F"}, // 2.16%
			{1365.76576576577, "srifle_DMR_05_hex_F"}, // 2.16%
			{1581.98198198198, "srifle_DMR_05_tan_F"}, // 2.16%
			{1791.50579150579, "srifle_DMR_07_ghex_F"}, // 2.10%
			{2001.0296010296, "srifle_DMR_07_hex_F"}, // 2.10%
			{2210.55341055341, "srifle_DMR_07_blk_F"}, // 2.10%
			{2420.07722007722, "srifle_GM6_ghex_F"}, // 2.10%
			{2629.60102960103, "srifle_LRR_F"}, // 2.10%
			{2839.12483912484, "srifle_GM6_F"}, // 2.10%
			{3048.64864864865, "srifle_LRR_tna_F"}, // 2.10%
			{3248.64864864865, "HandGrenade"}, // 2.00%
			{3448.64864864865, "MiniGrenade"}, // 2.00%
			{3637.83783783784, "srifle_DMR_04_Tan_F"}, // 1.89%
			{3827.02702702703, "srifle_DMR_04_F"}, // 1.89%
			{3993.69369369369, "U_O_GhillieSuit"}, // 1.67%
			{4160.36036036036, "U_I_GhillieSuit"}, // 1.67%
			{4327.02702702703, "U_B_GhillieSuit"}, // 1.67%
			{4489.18918918919, "srifle_DMR_02_camo_F"}, // 1.62%
			{4651.35135135135, "srifle_DMR_02_F"}, // 1.62%
			{4813.51351351352, "srifle_DMR_02_sniper_F"}, // 1.62%
			{4961.66166166166, "Exile_Item_Heatpack"}, // 1.48%
			{5109.80980980981, "Exile_Item_Vishpirin"}, // 1.48%
			{5237.3265883333, "B_Carryall_ghex_F"}, // 1.28%
			{5364.84336685679, "B_Carryall_cbr"}, // 1.28%
			{5485.64873598431, "B_Carryall_khk"}, // 1.21%
			{5606.45410511182, "B_Carryall_oli"}, // 1.21%
			{5707.12524605142, "B_Carryall_ocamo"}, // 1.01%
			{5807.79638699102, "B_Carryall_mcamo"}, // 1.01%
			{5908.46752793062, "B_Carryall_oucamo"}, // 1.01%
			{5997.35641681951, "Exile_Item_Heatpack"}, // 0.89%
			{6078.43749790059, "srifle_DMR_03_tan_F"}, // 0.81%
			{6159.51857898167, "srifle_DMR_03_khaki_F"}, // 0.81%
			{6240.59966006275, "srifle_DMR_03_F"}, // 0.81%
			{6321.68074114383, "srifle_DMR_06_camo_F"}, // 0.81%
			{6402.76182222491, "srifle_DMR_06_olive_F"}, // 0.81%
			{6483.84290330599, "srifle_DMR_03_woodland_F"}, // 0.81%
			{6563.84290330599, "APERSTripMine_Wire_Mag"}, // 0.80%
			{6643.84290330599, "APERSMine_Range_Mag"}, // 0.80%
			{6723.84290330599, "APERSBoundingMine_Range_Mag"}, // 0.80%
			{6801.62068108377, "ItemMap"}, // 0.78%
			{6875.69475515784, "Exile_Item_Bandage"}, // 0.74%
			{6949.22416692255, "U_B_T_Sniper_F"}, // 0.74%
			{7022.75357868725, "U_B_T_Soldier_F"}, // 0.74%
			{7096.28299045196, "U_B_T_FullGhillie_tna_F"}, // 0.74%
			{7169.81240221667, "U_O_T_Sniper_F"}, // 0.74%
			{7243.34181398137, "U_O_T_FullGhillie_tna_F"}, // 0.74%
			{7310.00848064804, "ItemWatch"}, // 0.67%
			{7376.67514731471, "ItemRadio"}, // 0.67%
			{7432.8154981919, "10Rnd_338_Mag"}, // 0.56%
			{7488.95584906909, "10Rnd_93x64_DMR_05_Mag"}, // 0.56%
			{7538.07865608664, "10Rnd_127x54_Mag"}, // 0.49%
			{7586.07865608664, "IEDLandSmall_Remote_Mag"}, // 0.48%
			{7634.07865608664, "IEDUrbanSmall_Remote_Mag"}, // 0.48%
			{7682.07865608664, "DemoCharge_Remote_Mag"}, // 0.48%
			{7728.7453227533, "20Rnd_762x51_Mag"}, // 0.47%
			{7775.41198941997, "10Rnd_762x54_Mag"}, // 0.47%
			{7819.85643386441, "ItemGPS"}, // 0.44%
			{7864.30087830886, "Binocular"}, // 0.44%
			{7904.5693346847, "B_Bergen_Base_F"}, // 0.40%
			{7944.83779106054, "B_Bergen_mcamo_F"}, // 0.40%
			{7985.10624743638, "B_Bergen_dgtl_F"}, // 0.40%
			{8025.37470381222, "B_Bergen_tna_F"}, // 0.40%
			{8065.64316018806, "B_Bergen_hex_F"}, // 0.40%
			{8104.23965141613, "20Rnd_762x51_Mag"}, // 0.39%
			{8137.57298474946, "muzzle_snds_93mmg_tan"}, // 0.33%
			{8170.90631808279, "20Rnd_650x39_Cased_Mag_F"}, // 0.33%
			{8204.23965141613, "muzzle_snds_338_black"}, // 0.33%
			{8237.57298474946, "muzzle_snds_338_green"}, // 0.33%
			{8270.90631808279, "muzzle_snds_338_sand"}, // 0.33%
			{8304.23965141613, "muzzle_snds_93mmg"}, // 0.33%
			{8337.57298474946, "muzzle_snds_B"}, // 0.33%
			{8370.09330995271, "H_MilCap_rucamo"}, // 0.33%
			{8402.61363515597, "H_MilCap_blue"}, // 0.33%
			{8435.13396035922, "H_MilCap_oucamo"}, // 0.33%
			{8467.65428556247, "Exile_Headgear_GasMask"}, // 0.33%
			{8500.17461076572, "H_MilCap_ocamo"}, // 0.33%
			{8532.69493596897, "H_MilCap_dgtl"}, // 0.33%
			{8565.21526117222, "H_MilCap_mcamo"}, // 0.33%
			{8594.84489080185, "Exile_Item_InstaDoc"}, // 0.30%
			{8623.41631937328, "optic_AMS_khk"}, // 0.29%
			{8651.98774794471, "optic_AMS_snd"}, // 0.29%
			{8680.55917651614, "optic_AMS"}, // 0.29%
			{8709.13060508757, "optic_KHS_hex"}, // 0.29%
			{8737.702033659, "optic_KHS_old"}, // 0.29%
			{8766.27346223043, "optic_KHS_tan"}, // 0.29%
			{8794.84489080186, "optic_KHS_blk"}, // 0.29%
			{8823.17822413519, "7Rnd_408_Mag"}, // 0.28%
			{8851.51155746853, "5Rnd_127x108_Mag"}, // 0.28%
			{8879.06257787669, "optic_DMS"}, // 0.28%
			{8905.59319012159, "optic_LRPS_ghex_F"}, // 0.27%
			{8932.12380236649, "optic_LRPS_tna_F"}, // 0.27%
			{8958.65441461138, "optic_LRPS"}, // 0.27%
			{8985.18502685628, "optic_SOS_khk_F"}, // 0.27%
			{9011.71563910118, "optic_SOS"}, // 0.27%
			{9036.10588300362, "H_HelmetSpecB_paint1"}, // 0.24%
			{9060.49612690606, "H_HelmetB"}, // 0.24%
			{9084.8863708085, "H_HelmetB_paint"}, // 0.24%
			{9109.27661471094, "H_HelmetB_light"}, // 0.24%
			{9133.66685861337, "H_HelmetB_plain_blk"}, // 0.24%
			{9158.05710251581, "H_HelmetSpecB"}, // 0.24%
			{9182.44734641825, "H_HelmetSpecB_paint2"}, // 0.24%
			{9206.83759032069, "H_HelmetSpecB_blk"}, // 0.24%
			{9231.22783422313, "H_HelmetIA"}, // 0.24%
			{9250.61558932517, "muzzle_snds_B"}, // 0.19%
			{9267.28225599184, "5Rnd_127x108_APDS_Mag"}, // 0.17%
			{9283.54241859346, "H_HelmetB_snakeskin"}, // 0.16%
			{9299.80258119509, "H_HelmetB_grass"}, // 0.16%
			{9316.06274379671, "H_BandMask_reaper"}, // 0.16%
			{9332.32290639834, "H_HelmetIA_net"}, // 0.16%
			{9348.58306899997, "H_HelmetB_desert"}, // 0.16%
			{9364.84323160159, "H_HelmetIA_camo"}, // 0.16%
			{9381.10339420322, "H_HelmetB_black"}, // 0.16%
			{9397.36355680484, "H_HelmetB_sand"}, // 0.16%
			{9413.62371940647, "H_HelmetB_light_grass"}, // 0.16%
			{9429.88388200809, "H_HelmetB_TI_tna_F"}, // 0.16%
			{9446.14404460972, "H_HelmetCrew_O_ghex_F"}, // 0.16%
			{9462.40420721135, "H_HelmetLeaderO_ghex_F"}, // 0.16%
			{9478.66436981297, "H_HelmetSpecO_ghex_F"}, // 0.16%
			{9494.9245324146, "H_HelmetB_tna_F"}, // 0.16%
			{9511.18469501622, "H_Beret_gen_F"}, // 0.16%
			{9527.44485761785, "H_HelmetB_light_snakeskin"}, // 0.16%
			{9543.70502021948, "H_HelmetB_light_desert"}, // 0.16%
			{9559.9651828211, "H_HelmetB_light_black"}, // 0.16%
			{9576.22534542273, "H_HelmetB_light_sand"}, // 0.16%
			{9592.48550802435, "H_BandMask_khk"}, // 0.16%
			{9608.74567062598, "H_HelmetB_Enh_tna_F"}, // 0.16%
			{9625.0058332276, "H_Helmet_Skate"}, // 0.16%
			{9641.26599582923, "H_BandMask_demon"}, // 0.16%
			{9657.52615843086, "H_HelmetB_Light_tna_F"}, // 0.16%
			{9673.52615843086, "SatchelCharge_Remote_Mag"}, // 0.16%
			{9688.2320407838, "U_I_FullGhillie_lsh"}, // 0.15%
			{9702.93792313674, "U_I_FullGhillie_sard"}, // 0.15%
			{9717.64380548968, "U_I_FullGhillie_ard"}, // 0.15%
			{9732.34968784262, "U_O_FullGhillie_sard"}, // 0.15%
			{9747.05557019556, "U_O_FullGhillie_lsh"}, // 0.15%
			{9761.7614525485, "U_O_FullGhillie_ard"}, // 0.15%
			{9776.46733490144, "U_B_FullGhillie_sard"}, // 0.15%
			{9791.17321725438, "U_B_FullGhillie_lsh"}, // 0.15%
			{9805.87909960732, "U_B_FullGhillie_ard"}, // 0.15%
			{9816.99021071843, "Exile_Item_MobilePhone"}, // 0.11%
			{9827.19429235109, "muzzle_snds_B_snd_F"}, // 0.10%
			{9837.39837398374, "muzzle_snds_B_khk_F"}, // 0.10%
			{9845.52845528455, "H_HelmetSpecO_blk"}, // 0.08%
			{9853.65853658536, "H_HelmetCrew_B"}, // 0.08%
			{9861.78861788618, "H_HelmetCrew_O"}, // 0.08%
			{9869.91869918699, "H_HelmetCrew_I"}, // 0.08%
			{9878.0487804878, "H_PilotHelmetFighter_B"}, // 0.08%
			{9886.17886178862, "H_PilotHelmetFighter_O"}, // 0.08%
			{9894.30894308943, "H_PilotHelmetFighter_I"}, // 0.08%
			{9902.43902439024, "H_PilotHelmetHeli_B"}, // 0.08%
			{9910.56910569105, "H_PilotHelmetHeli_O"}, // 0.08%
			{9918.69918699187, "H_PilotHelmetHeli_I"}, // 0.08%
			{9926.82926829268, "H_HelmetB_camo"}, // 0.08%
			{9934.95934959349, "H_CrewHelmetHeli_B"}, // 0.08%
			{9943.08943089431, "H_CrewHelmetHeli_O"}, // 0.08%
			{9951.21951219512, "H_HelmetO_ghex_F"}, // 0.08%
			{9959.34959349593, "H_CrewHelmetHeli_I"}, // 0.08%
			{9967.47967479674, "H_HelmetLeaderO_ocamo"}, // 0.08%
			{9975.60975609756, "H_HelmetLeaderO_oucamo"}, // 0.08%
			{9983.73983739837, "H_HelmetSpecO_ocamo"}, // 0.08%
			{9991.86991869918, "H_HelmetO_ocamo"}, // 0.08%
			{10000, "H_HelmetO_oucamo"} // 0.08%
		};
	};

	/**
	  Result of 100 rounds:

	  srifle_EBR_F
	  optic_LRPS_tna_F
	  B_Carryall_oucamo
	  srifle_GM6_F
	  srifle_DMR_05_blk_F
	  srifle_DMR_01_F
	  srifle_DMR_02_sniper_F
	  MMG_02_camo_F
	  U_B_T_Sniper_F
	  muzzle_snds_B
	  srifle_DMR_02_sniper_F
	  srifle_DMR_05_tan_F
	  srifle_DMR_01_F
	  Exile_Item_ZipTie
	  srifle_LRR_tna_F
	  srifle_DMR_02_camo_F
	  20Rnd_650x39_Cased_Mag_F
	  U_O_T_Sniper_F
	  Exile_Item_Vishpirin
	  srifle_DMR_07_blk_F
	  srifle_GM6_F
	  srifle_LRR_tna_F
	  H_HelmetB_sand
	  srifle_DMR_05_blk_F
	  srifle_DMR_03_woodland_F
	  B_Carryall_oucamo
	  srifle_DMR_01_F
	  H_MilCap_ocamo
	  srifle_DMR_03_tan_F
	  MiniGrenade
	  srifle_GM6_F
	  srifle_EBR_F
	  10Rnd_93x64_DMR_05_Mag
	  APERSBoundingMine_Range_Mag
	  srifle_DMR_07_blk_F
	  srifle_DMR_04_Tan_F
	  Exile_Item_Heatpack
	  U_O_GhillieSuit
	  srifle_DMR_04_Tan_F
	  srifle_DMR_05_tan_F
	  srifle_DMR_07_ghex_F
	  B_Carryall_cbr
	  APERSTripMine_Wire_Mag
	  B_Carryall_ocamo
	  srifle_DMR_02_camo_F
	  srifle_DMR_07_ghex_F
	  B_Carryall_oucamo
	  Exile_Item_ZipTie
	  U_B_GhillieSuit
	  MMG_02_camo_F
	  srifle_DMR_02_camo_F
	  HandGrenade
	  srifle_DMR_03_F
	  srifle_GM6_ghex_F
	  MiniGrenade
	  20Rnd_650x39_Cased_Mag_F
	  H_HelmetB_light_grass
	  Exile_Item_Vishpirin
	  Exile_Item_Vishpirin
	  srifle_DMR_02_sniper_F
	  muzzle_snds_B_khk_F
	  U_I_GhillieSuit
	  srifle_DMR_05_hex_F
	  srifle_DMR_07_hex_F
	  srifle_DMR_06_olive_F
	  srifle_DMR_04_Tan_F
	  srifle_DMR_07_blk_F
	  U_I_GhillieSuit
	  U_O_T_FullGhillie_tna_F
	  10Rnd_338_Mag
	  SatchelCharge_Remote_Mag
	  srifle_DMR_07_blk_F
	  srifle_DMR_02_F
	  srifle_DMR_02_sniper_F
	  Exile_Item_ZipTie
	  srifle_DMR_06_camo_F
	  IEDUrbanSmall_Remote_Mag
	  srifle_GM6_F
	  DemoCharge_Remote_Mag
	  srifle_DMR_04_F
	  srifle_DMR_01_F
	  H_HelmetB_light_desert
	  srifle_GM6_ghex_F
	  optic_KHS_hex
	  srifle_EBR_F
	  B_Carryall_oli
	  srifle_DMR_04_Tan_F
	  APERSBoundingMine_Range_Mag
	  H_HelmetB_Light_tna_F
	  srifle_DMR_02_camo_F
	  srifle_DMR_02_sniper_F
	  srifle_DMR_01_F
	  U_I_FullGhillie_lsh
	  H_BandMask_reaper
	  srifle_DMR_05_blk_F
	  IEDUrbanSmall_Remote_Mag
	  APERSTripMine_Wire_Mag
	  srifle_LRR_tna_F
	  Exile_Item_ZipTie
	  Exile_Item_ZipTie
	*/
	class Radiation
	{
		count = 163;
		half = 8906.3142872325;
		halfIndex = 81;
		sum = 10000;
		items[] = 
		{
			{317.460317460317, "srifle_DMR_01_F"}, // 3.17%
			{634.920634920635, "srifle_EBR_F"}, // 3.17%
			{952.380952380952, "Exile_Item_ZipTie"}, // 3.17%
			{1209.78120978121, "srifle_DMR_05_hex_F"}, // 2.57%
			{1467.18146718147, "srifle_DMR_05_tan_F"}, // 2.57%
			{1724.58172458172, "srifle_DMR_05_blk_F"}, // 2.57%
			{1974.01483115769, "srifle_LRR_tna_F"}, // 2.49%
			{2223.44793773365, "srifle_GM6_F"}, // 2.49%
			{2472.88104430962, "srifle_LRR_F"}, // 2.49%
			{2722.31415088558, "srifle_DMR_07_ghex_F"}, // 2.49%
			{2971.74725746154, "srifle_DMR_07_hex_F"}, // 2.49%
			{3221.18036403751, "srifle_DMR_07_blk_F"}, // 2.49%
			{3470.61347061347, "srifle_GM6_ghex_F"}, // 2.49%
			{3695.8386958387, "srifle_DMR_04_F"}, // 2.25%
			{3921.06392106392, "srifle_DMR_04_Tan_F"}, // 2.25%
			{4114.11411411411, "srifle_DMR_02_F"}, // 1.93%
			{4307.16430716431, "srifle_DMR_02_sniper_F"}, // 1.93%
			{4500.2145002145, "srifle_DMR_02_camo_F"}, // 1.93%
			{4658.94465894466, "APERSMine_Range_Mag"}, // 1.59%
			{4817.67481767482, "APERSBoundingMine_Range_Mag"}, // 1.59%
			{4976.40497640498, "APERSTripMine_Wire_Mag"}, // 1.59%
			{5135.13513513514, "MiniGrenade"}, // 1.59%
			{5293.8652938653, "HandGrenade"}, // 1.59%
			{5426.14042614043, "U_I_GhillieSuit"}, // 1.32%
			{5558.41555841556, "U_B_GhillieSuit"}, // 1.32%
			{5690.69069069069, "U_O_GhillieSuit"}, // 1.32%
			{5808.26858604636, "Exile_Item_Vishpirin"}, // 1.18%
			{5925.84648140204, "Exile_Item_Heatpack"}, // 1.18%
			{6027.050273881, "B_Carryall_cbr"}, // 1.01%
			{6128.25406635996, "B_Carryall_ghex_F"}, // 1.01%
			{6224.77916288505, "srifle_DMR_06_camo_F"}, // 0.97%
			{6321.30425941015, "srifle_DMR_03_woodland_F"}, // 0.97%
			{6417.82935593525, "srifle_DMR_03_tan_F"}, // 0.97%
			{6514.35445246034, "srifle_DMR_03_khaki_F"}, // 0.97%
			{6610.87954898544, "srifle_DMR_03_F"}, // 0.97%
			{6707.40464551053, "srifle_DMR_06_olive_F"}, // 0.97%
			{6803.28192259587, "B_Carryall_oli"}, // 0.96%
			{6899.1591996812, "B_Carryall_khk"}, // 0.96%
			{6994.39729491929, "IEDLandSmall_Remote_Mag"}, // 0.95%
			{7089.63539015739, "IEDUrbanSmall_Remote_Mag"}, // 0.95%
			{7184.87348539548, "DemoCharge_Remote_Mag"}, // 0.95%
			{7264.77121629993, "B_Carryall_mcamo"}, // 0.80%
			{7344.66894720437, "B_Carryall_oucamo"}, // 0.80%
			{7424.56667810881, "B_Carryall_ocamo"}, // 0.80%
			{7497.82675136888, "MMG_02_camo_F"}, // 0.73%
			{7571.08682462896, "MMG_02_black_F"}, // 0.73%
			{7644.34689788903, "MMG_02_sand_F"}, // 0.73%
			{7703.13584556687, "Exile_Item_Bandage"}, // 0.59%
			{7761.4925215706, "U_B_T_Soldier_F"}, // 0.58%
			{7819.84919757433, "U_O_T_Sniper_F"}, // 0.58%
			{7878.20587357807, "U_O_T_FullGhillie_tna_F"}, // 0.58%
			{7936.5625495818, "U_B_T_Sniper_F"}, // 0.58%
			{7994.91922558554, "U_B_T_FullGhillie_tna_F"}, // 0.58%
			{8043.75927442559, "MMG_01_hex_F"}, // 0.49%
			{8092.59932326564, "MMG_01_tan_F"}, // 0.49%
			{8137.15515729515, "10Rnd_93x64_DMR_05_Mag"}, // 0.45%
			{8181.71099132467, "10Rnd_338_Mag"}, // 0.45%
			{8220.6973461005, "10Rnd_127x54_Mag"}, // 0.39%
			{8257.73438313754, "10Rnd_762x54_Mag"}, // 0.37%
			{8294.77142017457, "20Rnd_762x51_Mag"}, // 0.37%
			{8326.73051253635, "B_Bergen_Base_F"}, // 0.32%
			{8358.68960489813, "B_Bergen_mcamo_F"}, // 0.32%
			{8390.6486972599, "B_Bergen_tna_F"}, // 0.32%
			{8422.60778962168, "B_Bergen_hex_F"}, // 0.32%
			{8454.56688198345, "B_Bergen_dgtl_F"}, // 0.32%
			{8486.31291372949, "SatchelCharge_Remote_Mag"}, // 0.32%
			{8516.94504962478, "20Rnd_762x51_Mag"}, // 0.31%
			{8543.40007607981, "muzzle_snds_338_sand"}, // 0.26%
			{8569.85510253483, "muzzle_snds_93mmg"}, // 0.26%
			{8596.31012898986, "muzzle_snds_93mmg_tan"}, // 0.26%
			{8622.76515544489, "muzzle_snds_B"}, // 0.26%
			{8649.22018189991, "muzzle_snds_338_black"}, // 0.26%
			{8675.67520835494, "muzzle_snds_338_green"}, // 0.26%
			{8702.13023480997, "20Rnd_650x39_Cased_Mag_F"}, // 0.26%
			{8727.94001671731, "H_MilCap_blue"}, // 0.26%
			{8753.74979862465, "H_MilCap_rucamo"}, // 0.26%
			{8779.559580532, "H_MilCap_dgtl"}, // 0.26%
			{8805.36936243934, "H_MilCap_oucamo"}, // 0.26%
			{8831.17914434668, "H_MilCap_mcamo"}, // 0.26%
			{8856.98892625403, "H_MilCap_ocamo"}, // 0.26%
			{8882.79870816137, "Exile_Headgear_GasMask"}, // 0.26%
			{8906.3142872325, "Exile_Item_InstaDoc"}, // 0.24%
			{8928.99002419395, "optic_KHS_hex"}, // 0.23%
			{8951.66576115541, "optic_KHS_blk"}, // 0.23%
			{8974.34149811686, "optic_AMS_snd"}, // 0.23%
			{8997.01723507831, "optic_AMS_khk"}, // 0.23%
			{9019.69297203976, "optic_KHS_old"}, // 0.23%
			{9042.36870900121, "optic_AMS"}, // 0.23%
			{9065.04444596266, "optic_KHS_tan"}, // 0.23%
			{9087.53121844944, "7Rnd_408_Mag"}, // 0.22%
			{9110.01799093621, "5Rnd_127x108_Mag"}, // 0.22%
			{9131.88388014904, "optic_DMS"}, // 0.22%
			{9152.93992161324, "optic_LRPS"}, // 0.21%
			{9173.99596307744, "optic_LRPS_tna_F"}, // 0.21%
			{9195.05200454165, "optic_LRPS_ghex_F"}, // 0.21%
			{9216.10804600585, "optic_SOS"}, // 0.21%
			{9237.16408747006, "optic_SOS_khk_F"}, // 0.21%
			{9256.52142390056, "H_HelmetIA"}, // 0.19%
			{9275.87876033107, "H_HelmetSpecB_paint1"}, // 0.19%
			{9295.23609676158, "H_HelmetSpecB"}, // 0.19%
			{9314.59343319208, "H_HelmetB_plain_blk"}, // 0.19%
			{9333.95076962259, "H_HelmetB_light"}, // 0.19%
			{9353.3081060531, "H_HelmetB_paint"}, // 0.19%
			{9372.6654424836, "H_HelmetB"}, // 0.19%
			{9392.02277891411, "H_HelmetSpecB_paint2"}, // 0.19%
			{9411.38011534462, "H_HelmetSpecB_blk"}, // 0.19%
			{9426.76722256846, "muzzle_snds_B"}, // 0.15%
			{9439.99473579597, "5Rnd_127x108_APDS_Mag"}, // 0.13%
			{9452.89962674964, "H_HelmetB_Enh_tna_F"}, // 0.13%
			{9465.80451770332, "H_BandMask_khk"}, // 0.13%
			{9478.70940865699, "H_BandMask_reaper"}, // 0.13%
			{9491.61429961066, "H_BandMask_demon"}, // 0.13%
			{9504.51919056433, "H_HelmetCrew_O_ghex_F"}, // 0.13%
			{9517.42408151801, "H_HelmetLeaderO_ghex_F"}, // 0.13%
			{9530.32897247168, "H_HelmetB_light_sand"}, // 0.13%
			{9543.23386342535, "H_HelmetB_light_black"}, // 0.13%
			{9556.13875437902, "H_HelmetB_light_desert"}, // 0.13%
			{9569.04364533269, "H_HelmetB_light_snakeskin"}, // 0.13%
			{9581.94853628637, "H_HelmetB_light_grass"}, // 0.13%
			{9594.85342724004, "H_HelmetB_sand"}, // 0.13%
			{9607.75831819371, "H_HelmetB_black"}, // 0.13%
			{9620.66320914738, "H_HelmetIA_net"}, // 0.13%
			{9633.56810010106, "H_HelmetIA_camo"}, // 0.13%
			{9646.47299105473, "H_HelmetB_grass"}, // 0.13%
			{9659.3778820084, "H_HelmetB_snakeskin"}, // 0.13%
			{9672.28277296207, "H_HelmetB_desert"}, // 0.13%
			{9685.18766391575, "H_HelmetSpecO_ghex_F"}, // 0.13%
			{9698.09255486942, "H_HelmetB_tna_F"}, // 0.13%
			{9710.99744582309, "H_Beret_gen_F"}, // 0.13%
			{9723.90233677676, "H_HelmetB_Light_tna_F"}, // 0.13%
			{9736.80722773043, "H_Helmet_Skate"}, // 0.13%
			{9749.71211868411, "H_HelmetB_TI_tna_F"}, // 0.13%
			{9761.38345388485, "U_I_FullGhillie_ard"}, // 0.12%
			{9773.0547890856, "U_O_FullGhillie_ard"}, // 0.12%
			{9784.72612428635, "U_B_FullGhillie_ard"}, // 0.12%
			{9796.39745948709, "U_B_FullGhillie_lsh"}, // 0.12%
			{9808.06879468784, "U_I_FullGhillie_sard"}, // 0.12%
			{9819.74012988859, "U_I_FullGhillie_lsh"}, // 0.12%
			{9831.41146508933, "U_B_FullGhillie_sard"}, // 0.12%
			{9843.08280029008, "U_O_FullGhillie_sard"}, // 0.12%
			{9854.75413549082, "U_O_FullGhillie_lsh"}, // 0.12%
			{9862.85261297706, "muzzle_snds_B_snd_F"}, // 0.08%
			{9870.95109046329, "muzzle_snds_B_khk_F"}, // 0.08%
			{9877.40353594012, "H_CrewHelmetHeli_O"}, // 0.06%
			{9883.85598141696, "H_CrewHelmetHeli_B"}, // 0.06%
			{9890.3084268938, "H_HelmetB_camo"}, // 0.06%
			{9896.76087237063, "H_CrewHelmetHeli_I"}, // 0.06%
			{9903.21331784747, "H_PilotHelmetHeli_I"}, // 0.06%
			{9909.6657633243, "H_HelmetO_oucamo"}, // 0.06%
			{9916.11820880114, "H_HelmetLeaderO_oucamo"}, // 0.06%
			{9922.57065427798, "H_HelmetSpecO_ocamo"}, // 0.06%
			{9929.02309975481, "H_HelmetSpecO_blk"}, // 0.06%
			{9935.47554523165, "H_PilotHelmetFighter_O"}, // 0.06%
			{9941.92799070849, "H_HelmetLeaderO_ocamo"}, // 0.06%
			{9948.38043618532, "H_HelmetO_ghex_F"}, // 0.06%
			{9954.83288166216, "H_PilotHelmetFighter_I"}, // 0.06%
			{9961.28532713899, "H_PilotHelmetFighter_B"}, // 0.06%
			{9967.73777261583, "H_HelmetCrew_I"}, // 0.06%
			{9974.19021809267, "H_HelmetCrew_O"}, // 0.06%
			{9980.6426635695, "H_HelmetCrew_B"}, // 0.06%
			{9987.09510904634, "H_PilotHelmetHeli_B"}, // 0.06%
			{9993.54755452317, "H_HelmetO_ocamo"}, // 0.06%
			{10000, "H_PilotHelmetHeli_O"} // 0.06%
		};
	};

};

class CfgSettings
{
	///////////////////////////////////////////////////////////////////////
	// Community Base Addons
	///////////////////////////////////////////////////////////////////////
	class CBA 
	{
		// Set this to 1 if you want to have CBA support
		useStackedEH = 0;

		// If you set this to 1 ...........................................
		iReallyWantToGetHackedAndImRetarded = 0;
	};

	///////////////////////////////////////////////////////////////////////
	// GARBAGE COLLECTOR
	///////////////////////////////////////////////////////////////////////
	class GarbageCollector
	{
		/*
			Remark: 
			In 0.9.35 and below, Exile has checked if a player was nearby and then delayed
			the deletion. This check has been removed to save server performance.

			Do NOT touch these if you are not 10000% sure what you do!	
		*/
		class Ingame 
		{
			// Dropped items without fissix
			class GroundWeaponHolder
			{
				lifeTime = 10;
				interval = 5;
			};

			// Dropped items with fissix
			class WeaponHolderSimulated
			{
				lifeTime = 10;
				interval = 5;
			};

			// Corpses and wrecks
			class AllDead 
			{
				lifeTime = 15;
				interval = 5;
			};

			// Loot spawned inside a building
			class Loot 
			{
				lifeTime = 8;
				interval = 1;
			};

			// Never touch this or you will break your sever!
			class Groups 
			{
				interval = 0.5;
			};
		};

		class Database 
		{
			// Remove all deleted items from the database after X days
			permanentlyDeleteTime = 5;
			
			// Remove all territories (and contructions + containers in it) that were not paid after X days
			territoryLifeTime = 10;

			// Remove all containers outside of territories that have not been used for X days
			// Example: Tents
			containerLifeTime = 10;

			// Remove all constructions outside of territories that are older than X days or not moved for X days 
			// Example: Work Benches
			constructionLifeTime = 2;

			// Remove all vehicles that were not moved/used for X days
			vehicleLifeTime = 5;
			
			// Set safe as abandoned
			abandonedTime = 7;
			
			// Deletes a base X days after the flag is stolen if the ransom money isn't paid
			stolenFlagLifeTime = 5;
			
			// Sets door & safe pins to 0000 and marks safes to abandoned X days after the flag is stolen if the ransom money isn't paid
			unlockLifeTime = 5;
		};
	};

	///////////////////////////////////////////////////////////////////////
	// RESPECT, YO
	///////////////////////////////////////////////////////////////////////
	class Respect
	{
		/**
		* Defines the factor of respect you gain for every pop tab in revenue
		*
		* Default: Get 1 respect for every 10 pop tabs 
		*/
		tradingRespectFactor = 0.1;
		
		/**
		* Defines the the minimum amount of Respect earned/lost for a kill
		*/
		minRespectTransfer = 50;

		/**
		* Defines the amount of respect earned/lost for certain types of frags
		*/
		class Frags
		{
			domination = 80;			// Keeps killing the same guy
			letItRain = 150;			// MG, also vehicle MGs
			humiliation = 300;			// Axe
			passenger = 400;			// Out of car/chopper/boat
			roadKill = 200;				// :)
			bigBird = 600;				// Roadkill, but with chopper/plane
			chuteGreaterChopper = 1000;	// Someone flies into chute and chopper/plane explodes	
		};

		class Percentages 
		{
			unlucky = 1; // Dying for an unknown reason costs you 1% respect
			crash = 1; // Crashing your car costs you 1% respect
			suicide = 2; // Comitting suicide costs you 2% of your respect
			friendyFire = 3; // Friendly fire costs you 3% 
			npc = 4; // Being killed by an NPC costs you 4%
			bambiKill = 5; // Killing a bambi costs you 5%
			frag = 5; // Killing someone will get you 5% and remove 5% from the victim
		};

		class Handcuffs 
		{
			trapping = -50;					// A handcuffs B
			breakingFree = 100; 			// B broke free
			releasedByHero = 100; 			// C releases B
			releasedByHostageTaker = 50; 	// A releases B	
		};

		class Bonus
		{
			// Bonus per full 100m 
			per100mDistance = 10;

			// First blood after server restart
			firstBlood = 100;

			// If you kill someone while you are in your own territory
			homie = 20;

			// If you kill someone who is in his own territory
			raid = 20;

			/*
				Example with killstreak = 50

				Frag  Factor   Bonus
				2    * 50      +100
				3    * 50      +150
				4    * 50      +200
				5    * 50      +250
			*/
			killStreak = 50;

			// Kills within this amount of seconds stack (default: 2 minutes)
			killStreakTimeout = 120;
		};
	};

	///////////////////////////////////////////////////////////////////////
	// KILLFEED MAN!
	///////////////////////////////////////////////////////////////////////

	class KillFeed
	{
		// Shows a kill feed for well kills
		showKillFeed = 1;
	};

	///////////////////////////////////////////////////////////////////////
	// PLAYER SPAWN CONFIGURATION
	///////////////////////////////////////////////////////////////////////
	class BambiSettings
	{
		/**
		 * Loadout of new bambi players
		 *
		 * (They will always spawn with a bambi overall - you cannot 
		 * change the loadout uniform)
		 */
		loadOut[] = 
		{
			"ItemCompass",
			"ItemMap", // Because why not
			"Exile_Item_XM8",
			"ItemRadio",
			"Exile_Item_PlasticBottleFreshWater",
			"Exile_Item_ExtensionCord"
		};

		/**
		 * Enables or disables parachute spawning.
		 *
		 * 1 = On
		 * 0 = Off
		 */
		parachuteSpawning = 1;

		/**
		 * Enables or disables halo jumping. Only applies 
		 * if parachute spawning is enabled.
		 *
		 * Remember that if you enable halo jump, it is adviced
		 * to adjust the parachuteDropHeight to something around
		 * 1km or so.
		 *
		 * 1 = On
		 * 0 = Off
		 */
		haloJump = 1;

		/**
		 * Parachute drop height in meters. 
		 */
		parachuteDropHeight = 1000;

		/**
		 * Number of minutes where a fresh spawned player remains in the
		 * bambi state. It will end the bambi state after this timeout
		 * expired or when they pick up their first weapon. Whatever
		 * happens first.
		 */
		protectionDuration = 5;

		/**
		 * Radius of spawn zones around the center of spawn zone markers.
		 */
		spawnZoneRadius = 250;

		/**
		 * These vehicles spawn on server restart close to spawn zones.
		 * They are non-persistent and will despawn on server restart.
		 * Basically they are just used to get away from the spawn zone
		 * faster.
		 *
		 * {Number of vehicles *per* spawn zone, vehicle class name}
		 */
		spawnZoneVehicles[] =
		{
			{2, "Exile_Bike_QuadBike_White"}
		};
	};

	///////////////////////////////////////////////////////////////////////
	// VEHICLE SPAWN CONFIGURATION
	///////////////////////////////////////////////////////////////////////

	class VehicleSpawn
	{
		/**
		* Grid Size for vehicle spawning,
		* smaller the number more vehicles,
		* you get the point
		*/
		vehiclesGridSize = 2200;

		/**
		* Vehicle ammount per grid
		* kinda self explanitory
		*/
		vehiclesGridAmount = 2;

		/**
		* Creates global markers for vehicle spawn tweeking,
		* after you are satisfied with vehicle ammount and spread set this to 0.
		*/
		vehiclesDebugMarkers = 0;

		/**
		* The server will apply random damage up to this value when spawning a vehicle.
		*/
		damageChance = 20; // 20% chance for a vehicle HITPOINT to be damaged
		maximumDamage = 0.9;
		
		/**
		 * If "randmizeFuel" is set to 1, vehicles will spawn with randomized
		 * fuel. In this case, "fuel" controls the percentage of fuel that
		 * can be in the vehicle at a maximum. For example, if you set this to
		 * 0.5, then vehicles will spawn with something random between 0% and 50%.
		 *
		 * If "randomizeFuel" is set to 0, all vehicles will spawn exactly the 
		 * fuel percentage defined in "fuel". For example, setting this to 0.5
		 * will spawn all vehicles with 50% fuel. Setting it to 0 would spawn
		 * all vehicles without fuel.
		 */
		randomizeFuel = 1;
		fuel = 1;

		/**
		 * Works exactly the same as the fuel setting ^
		 */
		randomizeAmmo = 1;
		ammo = 1;

		// Stuff to spawn on water
		water[] = 
		{
			"Exile_Boat_MotorBoat_Police",
			"Exile_Boat_MotorBoat_Orange",
			"Exile_Boat_MotorBoat_White",
			"Exile_Boat_RubberDuck_CSAT",
			"Exile_Boat_RubberDuck_Digital",
			"Exile_Boat_RubberDuck_Orange",
			"Exile_Boat_RubberDuck_Blue",
			"Exile_Boat_RubberDuck_Black",
			"Exile_Boat_SDV_CSAT",
			"Exile_Boat_SDV_Digital",
			"Exile_Boat_SDV_Grey"
		};

		// Stuff to spawn on roads
		ground[] = 
		{
			"Exile_Bike_QuadBike_Blue",
			"Exile_Bike_QuadBike_Red",
			"Exile_Bike_QuadBike_Nato",
			"Exile_Bike_QuadBike_Csat",
			"Exile_Bike_QuadBike_Guerilla01",
			"Exile_Bike_QuadBike_Guerilla02",
			"Exile_Car_Volha_Blue",
			"Exile_Car_Volha_White",
			"Exile_Car_Lada_Green",
			"Exile_Car_Lada_Taxi",
			"Exile_Car_UAZ_Open_Green",
			"Exile_Car_UAZ_Green",
			"Exile_Car_LandRover_Ambulance_Desert",
			"Exile_Car_Octavius_White",
			"Exile_Car_Golf_Red",
			"Exile_Car_Ikarus_Red"
		};

		/**
		 * Enables or disables nightvision optics on ALL vehicles
		 *
		 * 0 = off
		 * 1 = on
		 */
		nightVision = 1;

		/**
		 * Enables or disables thermal optics on ALL vehicles
		 *
		 * 0 = off
		 * 1 = on
		 */
		thermalVision = 0;

		/**
		 * Set this to 1 to unlock vehicles on server boot if they are in safe zones
		 *
		 * 0 = off
		 * 1 = on
		 */
		unlockInSafeZonesAfterRestart = 1;	
	};

	class Weather
	{
		/*
			You can define multiple "keyframes" for the weather to change. The server will pick
			a keyframe randomly to simulate the weather. It will change the weather-keyframes
			based on the following interval
		*/
		interval = 30;

		/*
			Add the keyframes here. The server will pick one random, so if you want one 
			weather type of be more dominant compared to others, add it multiple times
		*/
		//keyframes[] = {"Sunny", "Cloudy", "Thunderstorm"}; 
		keyframes[] = {"Sunny"}; 

		/*
			This is a keyframe. Look up the BIKI to get more details about the parameters

			Be sure to design the fog settings at a view distance of 1,600m as this is the
			limit in multiplayer by default

			https://community.bistudio.com/wiki/fogParams
			https://community.bistudio.com/wiki/overcast
			https://community.bistudio.com/wiki/setWaves
			https://community.bistudio.com/wiki/setWindStr
			https://community.bistudio.com/wiki/setGusts
			https://community.bistudio.com/wiki/setRain
			https://community.bistudio.com/wiki/setLightnings
			https://community.bistudio.com/wiki/setRainbow
		*/
		class Sunny
		{
			fogValue = 0.1;
			fogDecay = 0.2;
			fogBase = 5;
			overcast = 0.2;
			waves = 0.2;
			wind = 0.25;
			gusts = 0.1;
			rain = 0;
			lightnings = 0;
			rainbows = 0;
		};

		class Cloudy
		{
			fogValue = 0.2;
			fogDecay = 0.1;
			fogBase = 5;
			overcast = 0.4;
			waves = 0.4;
			wind = 0.25;
			gusts = 0.5;
			rain = 0.1;
			lightnings = 0.1;
			rainbows = 1;
		};

		class Thunderstorm
		{
			fogValue = 0.7;
			fogDecay = 0.2;
			fogBase = 5;
			overcast = 1;
			waves = 1;
			wind = 0.25;
			gusts = 0.5;
			rain = 1;
			lightnings = 1;
			rainbows = 0.5;
		};
	};

	class Time
	{
		// Uses Dedicated Server time as ingame Time
		useRealTime = 0;

		// Will overide RealTime
		useStaticTime = 1;

		// time in ARMA FORMAT << CONFIG
		// https://community.bistudio.com/wiki/setDate

		staticTime[] = {2039,10,24,15,30};
	};


	class RCON
	{
		/*
			Note that for this to work you need to have serverCommandPassowrd defined in config.cfg and BE enabled
		*/

		// This needs to match config.cfg serverCommandPassword
		serverPassword = "";

		// Autolocks server until its ready to accept players
		useAutoLock = 0;

		// Server will autoLock at that time before restart (minutes)
		restartAutoLock = 3;

		/*
			Number of hours and minutes of your restart period.

			Examples:

			{4, 0} = Every 4 hours
			{1, 30} = Every one and a half hour (who the hell would do this?)
		*/
		restartTimer[] = {4, 0};

		/*
			Kicks players before restart to prevent gear loss.
			We strongely recommend to use this!

			0 = off
			1 = on
		*/
		useAutoKick = 1;

		/*
			Number of minutes before the server kicks players that did
			not disconnect before the restart. Should at least be two
			minutes!
		*/
		kickTime = 2;

		/*
			Self-explanatory

			0 = off
			1 = on
		*/
		useRestartMessages = 0;

		/*
			Number of minutes before the restart to inform your players.

			Only use full minutes here. Value like 5.5 have not been tested.
		*/
		restartWarningTime[] = {15, 10, 5, 3}; 

		/* 
			If set to 1 server will execute '#shutdown',
			to try to shutdown the server
		*/

		useShutdown = 0;
	};

	class ServerSettings
	{
		/*
			Support for custom server FSM if wanted
		*/
		serverFSM = "exile_server\fsm\main.fsm";

		/*
			If this is enabled, Exile developers will spawn with a ton of pop tabs.
			We will have a hard time debugging things if you disable this.
		*/
		devFriendyMode = 1;

		devs[] = 
		{
			{"76561197985241690","[EXILE|DEV] Eichi"},
			{"76561198022879703","[EXILE|DEV] Grim"},
			{"76561198075905447","[EXILE|DEV] Vishpala"},
			{"76561197968613061","[EXILE|DEV] Niuva"}
		};
	};

	class Events 
	{
		/*
			A list of events that are active
		*/
		enabledEvents[] = {"SupplyBox", "AbandonedSafe", "AmbientFlyOver", "EarthQuake"}; 

		class EarthQuake 
		{
			type = "spawn";
			function = "ExileServer_system_event_earthQuake_start";
			minTime = 90;
			maxTime = 180;
			minimumPlayersOnline = 2;
		};

		class SupplyBox 
		{
			/*
				Drops a supply box on a parachute next to a random airport on the map.
				The box may contain items. The box can be transported to a territory
				and installed to become a normal storage container.
			*/
			type = "spawn";
			function = "ExileServer_system_event_supplyBox_start";
			minTime = 60; // minutes
			maxTime = 180; // minutes
			minimumPlayersOnline = 10;
			dropRadius = 500; // 500m around an airport (including the main airport on Altis!)
			dropAltitude = 100; // altitude of the drop
			markerTime = 10; // minutes

			/*
				These are different types of boxes can be dropped.
				You can specify the cargo a box should contain.
				The type of box is chosen randomly from the following list.
				Add a type multiple times to increase the chance of being used.
			*/
			types[] = {"Beer", "Beer", "Tools", "Food", "Food", "RepairParts"};

			class BoxTypes
			{
				class Beer 
				{
					items[] = 
					{
						{"Exile_Item_Beer", 24}
					};
				};

				class Food 
				{
					items[] = 
					{
						{"Exile_Item_BBQSandwich", 5},
						{"Exile_Item_Catfood", 5},
						{"Exile_Item_ChristmasTinner", 5},
						{"Exile_Item_GloriousKnakworst", 5},
						{"Exile_Item_SausageGravy", 5},
						{"Exile_Item_Surstromming", 5},
						{"Exile_Item_CanOpener", 1},
						{"Exile_Item_CookingPot", 1},
						{"Exile_Item_Matches", 1}
					};
				};

				class Tools 
				{
					items[] = 
					{
						{"Exile_Item_Wrench", 1},
						{"Exile_Item_Shovel", 1},
						{"Exile_Item_Screwdriver", 1},
						{"Exile_Item_Pliers", 1},
						{"Exile_Item_Handsaw", 1},
						{"Exile_Item_FireExtinguisher", 1},
						{"Exile_Item_DuctTape", 1}
					};
				};

				class RepairParts 
				{
					items[] = 
					{
						{"Exile_Item_CarWheel", 8},
						{"Exile_Item_FuelCanisterFull", 4},
						{"Exile_Item_OilCanister", 1},
						{"Exile_Item_Grinder", 1},
						{"Exile_Item_CordlessScrewdriver", 1}
					};
				};
			};
		};

		class AbandonedSafe
		{
			type = "spawn";
			function = "ExileServer_system_event_abandonedSafe_start";
			minTime = 60; // minutes
			maxTime = 120; // minutes
			minimumPlayersOnline = 2;
			markerTime = 15; // minutes
		};

		class AmbientFlyOver
		{
			type = "call";
			function = "ExileServer_system_event_ambientFlyOver_start";
			minTime = 30; // minutes
			maxTime = 90; // minutes
			minimumPlayersOnline = 1;
		};
	};
	
	class Logging
	{
		/*
			If logging is enabled separate logs will be made in the sql logs folder for each type
		*/
		traderLogging = 1;
		deathLogging = 1;
		territoryLogging = 1;
	};
};