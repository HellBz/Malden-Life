_mode = _this select 0;
if (isNil "_mode") exitWith {};


//add smoke
if (_mode == 0) exitWith {
	life_smokeTrail = true;
	{
		private _colour = ["SmokeShellRed", "SmokeShellBlue", "SmokeShellGreen","SmokeShellYellow","SmokeShellPurple","SmokeShellOrange"] call Bis_fnc_selectRandom;
		for "_i" from 0 to 5 do {
			private _veh = objectParent player;
			private _smoke = _colour createVehicle [random(50),random(50),random(50)];
			_smoke attachTo [_veh, _x];
			life_Vehiclesmokes pushBack _smoke;
		};
	} forEach [[-5,0.855469,-0.6],[5,0.855469,-0.6]];
};

//remove smoke
if (_mode == 1) exitWith {
	life_smokeTrail = false;
	{
		deleteVehicle _x;
	} forEach life_Vehiclesmokes;
};

//setup vars
if (_mode == 2) exitWith {
	life_smokeTrail = false;
	life_Vehiclesmokes = [];
	life_actions = []; 
};
