#include "..\..\script_macros.hpp"
/*
	File: fn_stuned.sqf
	Author: Bryan "Tonic" Boardwine edited by [ETG]Spikey
	Description:
	Starts the Stuned animation and broadcasts out what it needs to.
*/
private["_unit","_shooter","_curWep","_curMags","_attach","_damage"];
_unit = [_this,0,Objnull,[Objnull]] call BIS_fnc_param;
_shooter = [_this,1,Objnull,[Objnull]] call BIS_fnc_param;
_damage = damage player;
if(isNull _unit OR isNull _shooter) exitWith {player allowDamage true; life_isstuned = false;};

if(_shooter isKindOf "Man" && alive player) then {
	if(!life_isstuned) then {
		life_isstuned = true;
		
		_msg = format ["#Stuned - (%1|%2) - (%3|%4)",name player,getPlayerUID player,name _shooter,getPlayerUID _shooter];
		[_msg] remoteExecCall ["life_fnc_log", 2, false];
		
		_curWep = currentWeapon player;
		/*_curMags = magazines player;
		_attach = if(!(EQUAL(RIFLE,""))) then {RIFLE_ITEMS} else {[]};
		{player removeMagazine _x} foreach _curMags;*/
		//player removeWeapon _curWep;
		
		/*if(!(EQUAL(count _attach,0)) && !(EQUAL(RIFLE,""))) then {
			{
				_unit addPrimaryWeaponItem _x;
			} foreach _attach;
		};
		
		if(!(EQUAL(count _curMags,0))) then {
			{player addMagazine _x;} foreach _curMags;
		};*/
		
		//[[_unit],"life_fnc_tazeSound",true,false] call life_fnc_MP;
		_obj = "Land_ClutterCutter_small_F" createVehicle ASLTOATL(visiblePositionASL player); //Again why in the fuck was this being created globally? I could of sworn I made it local back in ARMA 3 Beta...
		_obj setPosATL ASLTOATL(visiblePositionASL player);
		titleText ["", "BLACK OUT", 0.5];
		[player,"ApanPercMstpSnonWnonDnon_ApanPpneMstpSnonWnonDnon"] remoteExec ["life_fnc_animSync",true];
		//[[0,"STR_NOTF_Tazed",true,[profileName, _shooter GVAR ["realname",name _shooter]]],"life_fnc_broadcast",true,false] call life_fnc_MP;
		_unit attachTo [_obj,[0,0,0]];
		disableUserInput true;
		player setDamage (_damage + 0.05 );
		uiSleep 2;
		titleText ["", "BLACK IN", 2];
		uiSleep 11;
		//player addWeapon _curWep;
		[player,"amovppnemstpsraswrfldnon"] remoteExec ["life_fnc_animSync",true]
		if(!(player GVAR ["Escorting",false])) then {
			detach player;
		};
		life_isstuned = false;
		player allowDamage true;
		disableUserInput false;
	};
} else {
	_unit allowDamage true;
	life_isstuned = false;
};
