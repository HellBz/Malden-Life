/*
	Filename: fn_yelp.sqf
	Author: Kellojo
	Description: Plays a yelp sound locally
*/
_mode = _this select 0;
_tar = _this select 1;
if (isNil "_mode" || isNil "_tar") exitWith {};

//cop
if (_mode == 0) then {
	vehicle _tar say3D "policeYelb";
};

//medic
if (_mode == 1) then {
	vehicle _tar say3D "medicYelb";
};