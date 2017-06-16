/*
	File: fn_setLicense.sqf
	Author: Kellojo
	Description: Adds or removes a license.
*/

_mode = _this select 0; //add or remove (boolean - true = add; false = remove)
_license = _this select 1; //license (string)
_target = _this select 2; //unit (target player)

if (isNil "_mode") exitWith {};
if (isNil "_license") exitWith {};
if (isNil "_target") exitWith {};
if (player != _target) exitWith {};


_var = getText (missionConfigFile >> "Licenses" >> _license >> "variable");
if (_mode) then {
	[] call compile format ["license_civ_%1 = true;",_var];
} else {
	[] call compile format ["license_civ_%1 = false;",_var];
};
[] call SOCK_fnc_updateRequest;