_type = _this select 0;
if (isNil "_type") exitWith {hint "Das wahr wohle eine Fehlzündung.";};
if (life_firework_batteries > 0) exitWith {};

_typename = switch (_type) do {
	case 0: {["Land_Ammobox_rounds_F",5]};
	case 1: {["Land_FoodContainer_01_F",20]};
	case 2: {["Box_East_AmmoOrd_F",40]};
};

_box = (_typename select 0) createvehicle position player;
life_firework_batteries = life_firework_batteries + 1;
if (_type == 2) then {
	clearItemCargoGlobal _box; 
	clearMagazineCargoGlobal _box;
	clearWeaponCargoGlobal _box;
	clearBackpackCargoGlobal _box;	
};
_box setVariable ["ignited",false];
_box addAction ["<t color='#FFA600'>Starten</t>", {(_this select 0) setVariable ["ignited",true];(_this select 0) removeAction (_this select 2);}];
_estimated = _typename select 1;
_fired = 0;


waituntil {_box getVariable ["ignited",false]};
while {_fired < _estimated && alive Player && alive _box} do {
	sleep ((random 5) + (random 5));
	[0,position _box, "random","random",false] call life_fnc_fireworks;
	_fired = _fired + 1;
};

_box setDammage 1;
sleep 3;
deletevehicle _box;
life_firework_batteries = 0;