/**
 * Created with Exile Mod 3DEN Plugin
 * www.exilemod.com
 */

if (!hasInterface || isServer) exitWith {};

// 18 NPCs
private _npcs = [
["Exile_Guard_01", ["InBaseMoves_patrolling1","InBaseMoves_patrolling2"], "", "GreekHead_A3_05", [["arifle_AK12_GL_F","muzzle_snds_B","acc_flashlight","optic_MRCO",["30Rnd_762x39_Mag_F",30],[],""],[],["hgun_ACPC2_F","","","",["9Rnd_45ACP_Mag",9],[],""],["U_O_OfficerUniform_ocamo",[["30Rnd_762x39_Mag_F",30,2],["9Rnd_45ACP_Mag",9,2]]],["V_PlateCarrier1_blk",[["30Rnd_762x39_Mag_F",30,1],["9Rnd_45ACP_Mag",9,1]]],[],"H_MilCap_ocamo","G_Bandanna_sport",[],["","","","","",""]], [6672.87, 3554.64, 247.686], [-0.172239, -0.985055, 0], [0, 0, 1]],
["Exile_Guard_01", ["InBaseMoves_patrolling1","InBaseMoves_patrolling2"], "", "WhiteHead_05", [["arifle_AK12_GL_F","muzzle_snds_B","acc_flashlight","optic_MRCO",["30Rnd_762x39_Mag_F",30],[],""],[],["hgun_ACPC2_F","","","",["9Rnd_45ACP_Mag",9],[],""],["U_O_OfficerUniform_ocamo",[["30Rnd_762x39_Mag_F",30,2],["9Rnd_45ACP_Mag",9,2]]],["V_PlateCarrier1_blk",[["30Rnd_762x39_Mag_F",30,1],["9Rnd_45ACP_Mag",9,1]]],[],"H_MilCap_ocamo","G_Bandanna_sport",[],["","","","","",""]], [6726.9, 3864.74, 250.33], [0.54578, -0.837928, 0], [0, 0, 1]],
["Exile_Guard_01", ["InBaseMoves_patrolling1","InBaseMoves_patrolling2"], "", "WhiteHead_19", [["srifle_LRR_F","","","optic_LRPS",["7Rnd_408_Mag",7],[],""],[],["hgun_ACPC2_F","","","",["9Rnd_45ACP_Mag",9],[],""],["U_O_OfficerUniform_ocamo",[["9Rnd_45ACP_Mag",9,2],["7Rnd_408_Mag",7,1]]],["V_PlateCarrier1_blk",[["9Rnd_45ACP_Mag",9,1],["7Rnd_408_Mag",7,2]]],[],"H_MilCap_ocamo","G_Bandanna_sport",[],["","","","","",""]], [6749.09, 3876.87, 278.728], [0.95743, 0.288665, 0], [0, 0, 1]],
["Exile_Guard_01", ["InBaseMoves_patrolling1","InBaseMoves_patrolling2"], "", "WhiteHead_01", [["srifle_LRR_F","","","optic_LRPS",["7Rnd_408_Mag",7],[],""],[],["hgun_ACPC2_F","","","",["9Rnd_45ACP_Mag",9],[],""],["U_O_OfficerUniform_ocamo",[["9Rnd_45ACP_Mag",9,2],["7Rnd_408_Mag",7,1]]],["V_PlateCarrier1_blk",[["9Rnd_45ACP_Mag",9,1],["7Rnd_408_Mag",7,2]]],[],"H_MilCap_ocamo","G_Bandanna_sport",[],["","","","","",""]], [6593.83, 3855.38, 278.85], [0.0733726, -0.997305, 0], [0, 0, 1]],
["Exile_Trader_Office", ["InBaseMoves_SittingRifle1","InBaseMoves_SittingRifle2"], "Exile_Trader_Office", "WhiteHead_02", [["SMG_02_F","muzzle_snds_L","acc_flashlight","optic_MRCO",["30Rnd_9x21_Mag_SMG_02",30],[],""],[],["hgun_ACPC2_F","","","",["9Rnd_45ACP_Mag",9],[],""],["U_BG_Guerilla2_1",[["9Rnd_45ACP_Mag",9,3]]],[],[],"H_MilCap_gry","G_Spectacles_Tinted",[],["","","","","",""]], [6715.28, 3877.72, 252.745], [-0.89424, 0.447587, 0], [0, 0, 1]],
["Exile_Trader_WasteDump", ["InBaseMoves_SittingRifle1","InBaseMoves_SittingRifle2"], "Exile_Trader_WasteDump", "WhiteHead_04", [["arifle_MX_Black_F","","acc_pointer_IR","optic_Arco_blk_F",["30Rnd_65x39_caseless_mag",30],[],""],[],[],["U_I_G_Story_Protagonist_F",[["30Rnd_65x39_caseless_mag",30,3]]],["V_Rangemaster_belt",[]],[],"H_MilCap_gry","G_Combat",[],["","","","","",""]], [6639, 3910.85, 259.236], [0.309318, -0.950959, 0], [0, 0, 1]],
["Exile_Trader_Vehicle", ["Acts_carFixingWheel"], "Exile_Trader_Vehicle", "WhiteHead_05", [[],[],[],["U_Competitor",[]],[],[],"H_Bandanna_gry","",[],["","","","","",""]], [6728.31, 3909.23, 252.868], [-0.604727, 0.796433, 0], [0, 0, 1]],
["Exile_Trader_VehicleCustoms", ["HubSittingHighB_idle1","HubSittingHighB_idle2","HubSittingHighB_idle3"], "Exile_Trader_VehicleCustoms", "WhiteHead_01", [[],[],[],["U_C_WorkerCoveralls",[]],[],[],"","G_Aviator",[],["","","","","",""]], [6730.11, 3920.99, 253.22], [0.780704, -0.624901, 0], [0, 0, 1]],
["Exile_Trader_Food", ["InBaseMoves_table1"], "Exile_Trader_Food", "WhiteHead_08", [[],[],[],["U_B_CombatUniform_mcam_tshirt",[]],[],[],"H_Cap_tan","G_Bandanna_tan",[],["","","","","",""]], [6674.77, 3922.01, 267.056], [0.995851, -0.0909976, 0], [0, 0, 1]],
["Exile_Trader_Aircraft", ["LHD_krajPaluby"], "Exile_Trader_Aircraft", "WhiteHead_05", [[],[],[],["U_O_PilotCoveralls",[]],[],[],"H_HelmetO_ghex_F","G_Combat",[],["","","","","",""]], [6571.96, 3905.52, 256.968], [0, 1, 0], [0, 0, 1]],
["Exile_Trader_AircraftCustoms", ["HubBriefing_loop","HubBriefing_scratch","HubBriefing_stretch","HubBriefing_think"], "Exile_Trader_AircraftCustoms", "AfricanHead_03", [[],[],[],["U_B_PilotCoveralls",[]],["V_RebreatherB",[]],[],"H_PilotHelmetFighter_B","G_Combat",[],["","","","","",""]], [6576.71, 3932.84, 252.955], [0.0213961, -0.999771, 0], [0, 0, 1]],
["Exile_Trader_Equipment", ["HubSittingChairUA_idle1","HubSittingChairUA_idle2","HubSittingChairUA_idle3","HubSittingChairUA_move1"], "Exile_Trader_Equipment", "GreekHead_A3_08", [["arifle_MX_GL_Black_F","","","",[],[],""],[],[],["U_BG_Guerrilla_6_1",[]],["V_I_G_resistanceLeader_F",[]],[],"H_Watchcap_khk","G_Combat",[],["","","","","",""]], [6624.48, 3856.93, 242.408], [0.462322, -0.886712, 0], [0, 0, 1]],
["Exile_Trader_Boat", ["HubSittingChairUB_idle1","HubSittingChairUB_idle2","HubSittingChairUB_idle3","HubSittingChairUB_move1"], "Exile_Trader_Boat", "WhiteHead_04", [[],[],[],["U_OrestesBody",[]],[],[],"H_Cap_surfer","G_Combat",[],["","","","","",""]], [5730.45, 5436.79, 0.770761], [0.718758, -0.695261, 0], [0, 0, 1]],
["Exile_Trader_Diving", ["HubSittingChairUB_idle1","HubSittingChairUB_idle2","HubSittingChairUB_idle3","HubSittingChairUB_move1"], "Exile_Trader_Diving", "WhiteHead_14", [["arifle_SDAR_F","","","",[],[],""],[],[],["U_I_Wetsuit",[]],["V_RebreatherIA",[]],[],"","G_I_Diving",[],["","","","","",""]], [5761.41, 5456.22, 0.828379], [0.298183, -0.954509, 0], [0, 0, 1]],
["Exile_Trader_SpecialOperations", ["AmovPercMstpSnonWnonDnon_exercisePushup","AmovPercMstpSnonWnonDnon_exercisePushup","AmovPercMstpSnonWnonDnon_exercisekneeBendA","AmovPercMstpSnonWnonDnon_exercisekneeBendA","AmovPercMstpSnonWnonDnon_exercisekneeBendB"], "Exile_Trader_SpecialOperations", "AfricanHead_01", [["arifle_MX_Black_F","","","",[],[],""],[],[],["U_B_CTRG_1",[]],["V_PlateCarrierGL_blk",[]],["B_Parachute",[]],"H_HelmetB_light_black","G_Balaclava_lowprofile",[],["","","","","","NVGoggles_OPFOR"]], [6812.27, 5188.82, 175.101], [-0.410548, -0.911839, 0], [0, 0, 1]],
["Exile_Trader_Hardware", ["HubStandingUC_idle1","HubStandingUC_idle2","HubStandingUC_idle3","HubStandingUC_move1","HubStandingUC_move2"], "Exile_Trader_Hardware", "AfricanHead_02", [[],[],[],["U_C_WorkerCoveralls",[]],["V_BandollierB_rgr",[]],["B_UAV_01_backpack_F",[]],"H_Booniehat_khk_hs","G_Combat",[],["","","","","",""]], [6636.17, 3839.96, 242.393], [0, 1, 0], [0, 0, 1]],
["Exile_Trader_Armory", ["InBaseMoves_HandsBehindBack1","InBaseMoves_HandsBehindBack2"], "Exile_Trader_Armory", "WhiteHead_07", [[],[],[],["U_Rangemaster",[]],["V_Rangemaster_belt",[]],[],"H_Cap_headphones","G_Shades_Black",[],["","","","","",""]], [6640.5, 3863.26, 246.764], [0.781277, -0.624184, 0], [0, 0, 1]],
["Exile_Trader_RussianRoulette", ["InBaseMoves_HandsBehindBack1","InBaseMoves_HandsBehindBack2"], "Exile_Trader_RussianRoulette", "WhiteHead_04", [[],[],["hgun_Pistol_Signal_F","","","",[],[],""],["U_Marshal",[]],["V_Rangemaster_belt",[]],[],"H_Cap_marshal","G_Sport_Blackyellow",[],["","","","","",""]], [6691.79, 3875.51, 252.863], [0.999387, -0.0350128, 0], [0, 0, 1]]
];

{
    private _logic = "Logic" createVehicleLocal [0, 0, 0];
    private _trader = (_x select 0) createVehicleLocal [0, 0, 0];
    private _animations = _x select 1;
    
    _logic setPosWorld (_x select 5);
    _logic setVectorDirAndUp [_x select 6, _x select 7];
    
    _trader setVariable ["BIS_enableRandomization", false];
    _trader setVariable ["BIS_fnc_animalBehaviour_disable", true];
    _trader setVariable ["ExileAnimations", _animations];
    _trader setVariable ["ExileTraderType", _x select 2];
    _trader disableAI "ANIM";
    _trader disableAI "MOVE";
    _trader disableAI "FSM";
    _trader disableAI "AUTOTARGET";
    _trader disableAI "TARGET";
    _trader disableAI "CHECKVISIBLE";
    _trader allowDamage false;
    _trader setFace (_x select 3);
    _trader setUnitLoadOut (_x select 4);
    _trader setPosWorld (_x select 5);
    _trader setVectorDirAndUp [_x select 6, _x select 7];
    _trader reveal _logic;
    _trader attachTo [_logic, [0, 0, 0]];
    _trader switchMove (_animations select 0);
    _trader addEventHandler ["AnimDone", {_this call ExileClient_object_trader_event_onAnimationDone}];
}
forEach _npcs;