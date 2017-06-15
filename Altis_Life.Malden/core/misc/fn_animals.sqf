#include "..\..\script_macros.hpp"
/*
	Filename: fn_animals.sqf
	Author: Kellojo
	Description: Spawns a set ammount of animals on the map for hunting purposes
*/

_life_animal_count = LIFE_SETTINGS(getNumber,"animal_max");
_life_max_animals = 0;
_animals = LIFE_SETTINGS(getArray,"animaltypes_hunting");
while {true} do {
	if (_life_max_animals < _life_animal_count) then {
		_pos = [getMarkerPos "map_center", 1, 4500, 30, 0, 20, 0] call BIS_fnc_findSafePos;
		_grp = createGroup Civilian;
		_grp deleteGroupWhenEmpty true;
		_ammount = round (random 5);
		
		_animal = _animals call Bis_fnc_selectRandom;
		while {_ammount >= 1} do {
			_unit = _grp createAgent [_animal, _pos,[],0,"NONE"];
			_life_animal_count = _life_animal_count + 1;
			_ammount = _ammount - 1;
			
			test = _unit;
			publicVariable "test";
		};
	};
	
	sleep 60;
};