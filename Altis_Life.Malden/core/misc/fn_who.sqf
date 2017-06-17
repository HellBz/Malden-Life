/*
	Filename: fn_who.sqf
	Author: Kellojo
	Description: returns how many players are online on given side
*/

_side = _this select 0;
if (isNil "_side" or !(_side in [independent,civilian,west,east])) exitWith {};
_ret = _side countSide allPlayers;
_ret;