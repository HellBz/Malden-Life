#include "..\..\script_macros.hpp"
/*
    File: fn_medicSiren.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Starts the medic siren sound for other players.
*/
private["_vehicle","_mode"];
_vehicle = param [0,objNull,[objNull]];
_mode = _this select 1;

if(isNull _vehicle) exitWith {};
if(isNil {_vehicle getVariable "siren"}) exitWith {};

if (_mode == 0) then {
while {true} do {
    if(!(_vehicle getVariable "siren")) exitWith {};
    if(EQUAL(count crew _vehicle,0)) then {_vehicle setVariable ["siren",false,true]};
    if(!alive _vehicle) exitWith {};
    if(isNull _vehicle) exitWith {};
    _vehicle say3D "SirenLand_med";
    sleep 4.3;
    if(!(_vehicle getVariable "siren")) exitWith {};
};
}else{
while {true} do {
    if(!(_vehicle getVariable "siren")) exitWith {};
    if(EQUAL(count crew _vehicle,0)) then {_vehicle setVariable ["siren",false,true]};
    if(!alive _vehicle) exitWith {};
    if(isNull _vehicle) exitWith {};
    _vehicle say3D "SirenCity_med";
    sleep 1.62;
    if(!(_vehicle getVariable "siren")) exitWith {};
};
};