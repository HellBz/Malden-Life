#include "..\..\script_macros.hpp"
/*
	Filename: fn_animals.sqf
	Author: Kellojo
	Description: Spawns a set ammount of animals on the map for hunting purposes
*/

_life_animals = [];
_life_max_animals = LIFE_SETTINGS(getNumber,"animal_max");
_animals = LIFE_SETTINGS(getArray,"animaltypes_hunting");
while {true} do {
	if (count _life_animals < _life_max_animals) then {
		_pos = [getMarkerPos "map_center", 1, 4500, 30, 0, 20, 0] call BIS_fnc_findSafePos;
		_ammount = round (random 5);
		
		_animal = _animals call Bis_fnc_selectRandom;
		while {_ammount >= 1} do {
			_unit = createAgent [_animal, _pos,[],0,"NONE"];
			_life_animals pushBack _unit;
			//[_unit] call BIS_fnc_animalBehaviour;
			_ammount = _ammount - 1;
		};
	};
	
	{
		if (_x == objNull) then {
			_life_animals = _life_animals - [_x];
		} else {
			if (!alive _x) then {
				_life_animals = _life_animals - [_x];
			};
		};
	} forEach _life_animals;
	
	sleep 30;
};