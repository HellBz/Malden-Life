#include "..\..\script_macros.hpp"
/*
    File: fn_copSiren.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Starts the cop siren sound for other players.
*/
private["_vehicle","_mode"];
_vehicle = param [0,objNull,[objNull]];
_mode = param[1,0];

if(isNull _vehicle) exitWith {};
if(isNil {_vehicle getVariable "siren"}) exitWith {};

if (_mode == 0) then {
    [_vehicle]spawn{
        _vehicle = param[0,objNull];
        while {true} do {
            if(!(_vehicle getVariable "siren")) exitWith {};
            If(!isEngineOn _vehicle)exitWith{};
            if(EQUAL(count crew _vehicle,0)) then {_vehicle setVariable ["siren",false,true]};
            if(!alive _vehicle) exitWith {};
            if(isNull _vehicle) exitWith {};
            _vehicle say3D "SirenLand";
            uiSleep 1.4;
            if(!(_vehicle getVariable "siren")) exitWith {};
        };
    };
}else{
    [_vehicle]spawn{
        _vehicle = param[0,objNull];
        while {true} do {
            if(!(_vehicle getVariable "siren")) exitWith {};
            If(!isEngineOn _vehicle)exitWith{};
            if(EQUAL(count crew _vehicle,0)) then {_vehicle setVariable ["siren",false,true]};
            if(!alive _vehicle) exitWith {};
            if(isNull _vehicle) exitWith {};
            _vehicle say3D "SirenCity";
            uiSleep 1.48;
            if(!(_vehicle getVariable "siren")) exitWith {};
        };
    };
};