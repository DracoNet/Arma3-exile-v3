/*
	DMS_fnc_selectMission
	Influenced by WAI
	Created by eraser1

	Selects/Spawns missions. Takes no arguments, returns nothing.
*/

private _time = diag_tickTime;
private _playerCount = count allPlayers;

if (DMS_RunningBMissionCount >= DMS_MaxBanditMissions) then
{
	DMS_BMissionLastStart = _time;
};

if ((count DMS_RunningStaticMissions) >= DMS_MaxStaticMissions) then
{
	DMS_StaticMissionLastStart = _time;
};



if (diag_fps >= DMS_MinServerFPS && {_playerCount >= DMS_MinPlayerCount}) then
{
	if (DMS_DynamicMission && {_time - DMS_BMissionLastStart > DMS_BMissionDelay}) then
	{
		private _mission = selectRandom DMS_BanditMissionTypesArray;

		if (DMS_DEBUG) then
		{
			(format ["SelectMission :: Selected bandit mission: %1",_mission]) call DMS_fnc_DebugLog;
		};

		[_mission] call DMS_fnc_SpawnBanditMission;

		if (DMS_DEBUG) then
		{
			(format ["SelectMission :: Spawning of bandit mission ""%1"" complete!",_mission]) call DMS_fnc_DebugLog;
		};
	};


	if (DMS_StaticMission && {_time - DMS_StaticMissionLastStart > DMS_StaticMissionDelay}) then
	{
		private _availableMissions = (DMS_StaticMissionTypesArray - DMS_RunningStaticMissions);

		if (_availableMissions isEqualTo []) exitWith
		{
			DMS_StaticMissionLastStart = _time;
			if (DMS_DEBUG) then
			{
				(format ["SelectMission :: No available missions! Running missions: %1", DMS_RunningStaticMissions]) call DMS_fnc_DebugLog;
			};
		};

		private _mission = selectRandom _availableMissions;

		if (DMS_DEBUG) then
		{
			(format ["SelectMission :: Selected static mission: %1", _mission]) call DMS_fnc_DebugLog;
		};

		[_mission] call DMS_fnc_SpawnStaticMission;

		if (DMS_DEBUG) then
		{
			(format ["SelectMission :: Spawning of static mission ""%1"" complete!", _mission]) call DMS_fnc_DebugLog;
		};
	};
};
