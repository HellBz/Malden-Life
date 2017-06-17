#include "..\..\script_macros.hpp"
/*
    File: fn_copSiren.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Starts the cop siren sound for other players.
*/
private["_vehicle","_mode"];
_vehicle = param [0,objNull,[objNull]];
_mode = _this select 1;

diag_log ">> fn_copSiren.sqf";

if(isNull _vehicle) exitWith {};
if(isNil {_vehicle getVariable "siren"}) exitWith {};

if (_mode == 0) then {
    diag_log ">> Mode 0";
while {true} do {
    if(!(_vehicle getVariable "siren")) exitWith {};
    if(EQUAL(count crew _vehicle,0)) then {_vehicle setVariable ["siren",false,true]};
    if(!alive _vehicle) exitWith {};
    if(isNull _vehicle) exitWith {};
    _vehicle say3D "SirenLand";
    diag_log ">> Say SirenLand";
    sleep 1.4;
    if(!(_vehicle getVariable "siren")) exitWith {};
};
}else{
diag_log ">> Mode 1";
while {true} do {
    if(!(_vehicle getVariable "siren")) exitWith {};
    if(EQUAL(count crew _vehicle,0)) then {_vehicle setVariable ["siren",false,true]};
    if(!alive _vehicle) exitWith {};
    if(isNull _vehicle) exitWith {};
    _vehicle say3D "SirenCity";
    diag_log ">> Say SirenCity";
    sleep 1.48;
    if(!(_vehicle getVariable "siren")) exitWith {};
};
};