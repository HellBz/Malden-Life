/*
	Filename: fn_getdown.sqf
	Author: [ETG]Spikey
	Description: Plays a getDown Sound for Police
*/
_mode = _this select 0;
_tar = _this select 1;
if (isNil "_mode" || isNil "_tar") exitWith {};

if (_mode == 0) then {
	vehicle _tar say3D "polGetDown";
};