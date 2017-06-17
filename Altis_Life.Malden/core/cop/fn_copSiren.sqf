#include "..\..\script_macros.hpp"
/*
    File: fn_copSiren.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Starts the cop siren sound for other players.
*/
private["_vehicle","_mode"];
_vehicle = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_mode = _this select 1;

if(isNull _vehicle) exitWith {};
if(isNil {_vehicle GVAR "siren"}) exitWith {};

if (_mode == 0) then {
while {true} do {
    if(!(_vehicle GVAR "siren")) exitWith {};
    if(EQUAL(count crew _vehicle,0)) then {_vehicle SVAR ["siren",false,true]};
    if(!alive _vehicle) exitWith {};
    if(isNull _vehicle) exitWith {};
    _vehicle say3D "SirenLand";
    sleep 1.4;
    if(!(_vehicle GVAR "siren")) exitWith {};
};
}else{
while {true} do {
    if(!(_vehicle GVAR "siren")) exitWith {};
    if(EQUAL(count crew _vehicle,0)) then {_vehicle SVAR ["siren",false,true]};
    if(!alive _vehicle) exitWith {};
    if(isNull _vehicle) exitWith {};
    _vehicle say3D "SirenCity";
    sleep 1.48;
    if(!(_vehicle GVAR "siren")) exitWith {};
};
};