/**
 * ExileClient_object_item_consume
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 * DP UP TO DATE FILE 3.6.2016
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_ppInfected","_itemClassName","_consumingConfig","_configEffects","_feedbackString","_effectAttributeId","_effectValue","_effectDuration","_effectUnit","_effect","_addPlusCharacter","_bloodAlcohol","_bloodAlcoholComment","_animations","_animationIndex","_stopBleeding","_configSounds","_numberOfConfigSounds","_returnItemClass","_rzantivirus","_items","_availMeds"];
_itemClassName = _this select 0;
////////DonkeyPunch Custom Code for Zombie Infection/////////////////
_rzantivirus = ["rzinfection_antivirus_pills","rzinfection_antivirus_injector"];
_items = magazines player;
_availMeds = _items arrayIntersect _rzantivirus;
if (count _availMeds >= 1) then 
{
	switch (_itemClassName) do 
	{
		case "rzinfection_antivirus_injector": 
		{
			playsound3d ["ryanzombies\sounds\antivirus_inject.ogg", player]; 
			player spawn 
			{
				sleep 0.75;
				_feedbackString = "";
				if ((player getvariable ["ryanzombiesinfected",0]) > 0) then 
				{
					_feedbackString = "Your infection was cured.";
					_ppInfInjYes = ppEffectCreate ["ChromAberration", 1000];
					_ppInfInjYes ppEffectEnable true;
					_ppInfInjYes ppEffectAdjust [0.005, 0.005, false];
					_ppInfInjYes ppEffectCommit 3;
					_ppInfInjYes;
				}
				else
				{
					_feedbackString = "You were not infected, you might feel sick.";
					_ppInfInjNo = ppEffectCreate ["ChromAberration", 1000];
					_ppInfInjNo ppEffectEnable true;
					_ppInfInjNo ppEffectAdjust [0.018, 0.018, false];
					_ppInfInjNo ppEffectCommit 5;
					_ppInfInjNo;
					sleep 5;
					_ppInfInjNo2 = ppEffectCreate ["ChromAberration", 1000];
					_ppInfInjNo2 ppEffectEnable true;
					_ppInfInjNo2 ppEffectAdjust [0.005, 0.005, false];
					_ppInfInjNo2 ppEffectCommit 5;
					_ppInfInjNo2;
					sleep 5;
					_ppInfInjNo3 = ppEffectCreate ["ChromAberration", 1000];
					_ppInfInjNo3 ppEffectEnable true;
					_ppInfInjNo3 ppEffectAdjust [0.1, 0.018, false];
					_ppInfInjNo3 ppEffectCommit 5;
					_ppInfInjNo3;
					sleep 5;
					_ppInfInjNo4 = ppEffectCreate ["ChromAberration", 1000];
					_ppInfInjNo4 ppEffectEnable true;
					_ppInfInjNo4 ppEffectAdjust [0.005, 0.005, false];
					_ppInfInjNo4 ppEffectCommit 5;
					_ppInfInjNo4;
					sleep 5;
					_ppInfInjNo5 = ppEffectCreate ["ChromAberration", 1000];
					_ppInfInjNo5 ppEffectEnable true;
					_ppInfInjNo5 ppEffectAdjust [0.018, 0.1, false];
					_ppInfInjNo5 ppEffectCommit 5;
					_ppInfInjNo5;
					sleep 5;
					_ppInfInjNo6 = ppEffectCreate ["ChromAberration", 1000];
					_ppInfInjNo6 ppEffectEnable true;
					_ppInfInjNo6 ppEffectAdjust [0.005, 0.005, false];
					_ppInfInjNo6 ppEffectCommit 5;
					_ppInfInjNo6;
				};
				["ItemConsumedInformation", [_feedbackString]] call ExileClient_gui_notification_event_addNotification;
				player setVariable ["ryanzombiesinfected",0,true];
				sleep 30;
				_ppInfInjEnd ppEffectAdjust [0, 0, false];
				_ppInfInjEnd ppEffectCommit 2;
				[_ppInfInjYes,_ppInfInjNo,_ppInfInjEnd,_ppInfInjNo2,_ppInfInjNo3,_ppInfInjNo4,_ppInfInjNo5,_ppInfInjNo6] ppEffectEnable false;
				ppEffectDestroy [_ppInfInjYes,_ppInfInjNo,_ppInfInjEnd,_ppInfInjNo2,_ppInfInjNo3,_ppInfInjNo4,_ppInfInjNo5,_ppInfInjNo6];
			};
		};	
		case "rzinfection_antivirus_pills": 
		{
			playsound3d ["ryanzombies\sounds\antivirus_pills.ogg", player];
			player spawn
			{
				sleep 0.75;
				_feedbackString = format["You are now immune for %1 minutes.",round(ryanzombiesantivirusduration/60)];
				["ItemConsumedInformation", [_feedbackString]] call ExileClient_gui_notification_event_addNotification;
				waituntil {!(player getvariable ["ryanzombiesimmunity",false])};
				player setVariable ["ryanzombiesimmunity",true,true];
				if (player getvariable ["ryanzombiesinfected",0] > 0) then 
				{
					_ppInfPillYes = ppEffectCreate ["ChromAberration", 1000];
					_ppInfPillYes ppEffectEnable true;
					_ppInfPillYes ppEffectAdjust [0.003, 0.003, false];
					_ppInfPillYes ppEffectCommit 3;
					_ppInfPillYes;
				}
				else
				{
					_ppInfPillNo = ppEffectCreate ["ChromAberration", 1000];
					_ppInfPillNo ppEffectEnable true;
					_ppInfPillNo ppEffectAdjust [0.008, 0.008, false];
					_ppInfPillNo ppEffectCommit 3;
					_ppInfPillNo;
					sleep 10;
					_feedbackString = format["I dont feel so good.",round(ryanzombiesantivirusduration/60)];
					["ItemConsumedInformation", [_feedbackString]] call ExileClient_gui_notification_event_addNotification;
					sleep 1;
					_ppInfPillNo2 = ppEffectCreate ["ChromAberration", 1000];
					_ppInfPillNo2 ppEffectEnable true;
					_ppInfPillNo2 ppEffectAdjust [0.1, 0.018, false];
					_ppInfPillNo2 ppEffectCommit 5;
					_ppInfPillNo2;
					sleep 3;
					_ppInfPillNo3 = ppEffectCreate ["ChromAberration", 1000];
					_ppInfPillNo3 ppEffectEnable true;
					_ppInfPillNo3 ppEffectAdjust [0.018, 0.1, false];
					_ppInfPillNo3 ppEffectCommit 5;
					_ppInfPillNo3;
					sleep 3;
					_ppInfPillNo4 = ppEffectCreate ["ChromAberration", 1000];
					_ppInfPillNo4 ppEffectEnable true;
					_ppInfPillNo4 ppEffectAdjust [0.005, 0.005, false];
					_ppInfPillNo4 ppEffectCommit 5;
					_ppInfPillNo4;
				};
				_ppInfPillEnd ppEffectAdjust [0, 0, false];
				_ppInfPillEnd ppEffectCommit 2;
				[_ppInfPillYes,_ppInfPillNo,_ppInfPillEnd,_ppInfPillNo2,_ppInfPillNo3,_ppInfPillNo4] ppEffectEnable false;
				ppEffectDestroy [_ppInfPillYes,_ppInfPillNo,_ppInfPillEnd,_ppInfPillNo2,_ppInfPillNo3,_ppInfPillNo4];
				sleep ryanzombiesantivirusduration;
				player setVariable ["ryanzombiesimmunity",false,true];
			};
		};
	};
};
if( isClass(configFile >> "CfgMagazines" >> _itemClassName >> "Interactions" >> "Consuming") ) then
{
	_consumingConfig = configFile >> "CfgMagazines" >> _itemClassName >> "Interactions" >> "Consuming";
	_configEffects = getArray (_consumingConfig >> "effects");
	_feedbackString = "";
	{
		_effectAttributeId = _x select 0;
		_effectValue = _x select 1;
		_effectDuration = _x select 2;
		_effectUnit = if (_effectAttributeId isEqualTo 4) then {"‰"} else {"%"};
		_effect = 
		[
			_effectAttributeId,
			_effectValue, 
			_effectDuration, 
			time, 
			_effectValue 
		];
		_addPlusCharacter = if (_effectValue > 0) then { "+" } else { "" };
		if( _effectDuration == 0 ) then 
		{
			_feedbackString = _feedbackString + format["%1: %2%3%4<br/>", (ExileClientPlayerEffectNames select _effectAttributeId), _addPlusCharacter, _effectValue, _effectUnit];
		}
		else 
		{
			_feedbackString = _feedbackString + format["%1: %2%3%4/%5s<br/>", (ExileClientPlayerEffectNames select _effectAttributeId), _addPlusCharacter, _effectValue, _effectUnit, _effectDuration];
		};
		if (_effectAttributeId isEqualTo 4) then
		{
			_bloodAlcohol = (ExileClientPlayerAttributes select 4);
			_bloodAlcohol = (_bloodAlcohol + _effectValue) max 0;
			ExileClientPlayerAttributes set [4, _bloodAlcohol];
			if (_bloodAlcohol > 0) then 
			{
				_bloodAlcoholComment = "You feel tipsy.";
				if (_bloodAlcohol >= 3) then
				{
					_bloodAlcoholComment = "You are drunk as a skunk.";
				}
				else 
				{
					if (_bloodAlcohol >= 2) then
					{
						_bloodAlcoholComment = "You are boozed-up.";
					}
					else 
					{
						if (_bloodAlcohol >= 1) then
						{
							_bloodAlcoholComment = "You are drunk.";
						};
					};
				};
				systemChat format["Your blood alcohol level is now %1%2. %3", _bloodAlcohol, "‰", _bloodAlcoholComment];
			};
			if (ExileClientDeliriumThread isEqualTo -1) then
			{
				call ExileClient_object_player_thread_delirium;
				ExileClientDeliriumThread = [20, ExileClient_object_player_thread_delirium, [], true] call ExileClient_system_thread_addtask;
			};
		}
		else 
		{
			ExileClientPlayerEffects pushBack _effect;
		};	
	} 
	foreach _configEffects;
	_animations = getArray (_consumingConfig >> "animations");
	if !(_animations isEqualTo []) then
	{
		_animationIndex = call ExileClient_util_animation_getMatrixIndex;
		player playMove (_animations select _animationIndex);
	};
	_stopBleeding = getNumber (_consumingConfig >> "stopBleeding");
	if (_stopBleeding isEqualTo 1) then
	{
		player setBleedingRemaining 0;
	};
	_configSounds = getArray (_consumingConfig >> "sounds");
	_numberOfConfigSounds = count _configSounds;
	if( _numberOfConfigSounds > 0 ) then
	{
		playSound (_configSounds select (floor (random _numberOfConfigSounds)));
	};
	player removeItem _itemClassName;
	_returnItemClass = getText (_consumingConfig >> "returnedItem");
	if( _returnItemClass != "" ) then
	{
		player addItem _returnItemClass;
	};
	if( _feedbackString != "") then
	{
		["ItemConsumedInformation", [_feedbackString]] call ExileClient_gui_notification_event_addNotification;
	};
};
true