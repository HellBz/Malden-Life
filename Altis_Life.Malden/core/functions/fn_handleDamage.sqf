#include "..\..\script_macros.hpp"
/*
    File: fn_handleDamage.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Handles damage, specifically for handling the 'tazer' pistol and nothing else.
*/
params [
    ["_unit",objNull,[objNull]],
    ["_part","",[""]],
    ["_damage",0,[0]],
    ["_source",objNull,[objNull]],
    ["_projectile","",[""]],
    ["_index",0,[0]]
];

//Handle the tazer first (Top-Priority).
if(!isNull _source) then {
    if(_source != _unit) then {
        _curWep = currentWeapon _source;
        if(_projectile in ["B_9x21_Ball_Tracer_Yellow","B_556x45_dual","B_556x45_Ball_Tracer_Yellow"] && _curWep in ["hgun_P07_F","arifle_SDAR_F","arifle_SPAR_01_blk_F"]) then {
            if(side _source == west && playerSide != west) then {
                private["_distance","_isVehicle","_isQuad"];
                _distance = switch(_projectile) do {
                case "B_556x45_dual" : {125};
                case "B_9x21_Ball_Tracer_Yellow" : {50};
                case "B_556x45_Ball_Tracer_Yellow" : {175};
                };
                _isVehicle = if(vehicle player != player) then {true} else {false};
                _isQuad = if(_isVehicle) then {if(typeOf (vehicle player) == "B_Quadbike_01_F") then {true} else {false}} else {false};
                
                _damage = false;
                if(_unit distance _source < _distance) then {
                    if(!life_istazed && !(_unit GVAR ["restrained",false])) then {
                        if(_isVehicle && _isQuad) then {
                            player action ["Eject",vehicle player];
                            [_unit,_source] spawn life_fnc_tazed;
                        } else {
                            [_unit,_source] spawn life_fnc_tazed;
                        };
                    };
                };
            };
            
            //Temp fix for super tasers on cops.
            if(playerSide == west && side _source == west) then {
                _damage = false;
            };
        };
        //Gummigeschoss
        if(_projectile in ["B_556x45_Ball_Tracer_Green","B_9x21_Ball_Tracer_Green"] && _curWep in ["hgun_P07_F","arifle_SPAR_01_blk_F"]) then {
            if(side _source == west && playerSide != west) then {
                private["_distance","_isVehicle","_isQuad"];
                _distance = switch (_projectile) do {
                case "B_556x45_Ball_Tracer_Green" : {275};
                case "B_9x21_Ball_Tracer_Green" : {100};
                };
                _isVehicle = if(vehicle player != player) then {true} else {false};
                _isQuad = if(_isVehicle) then {if(typeOf (vehicle player) == "B_Quadbike_01_F") then {true} else {false}} else {false};
                _damage = false;
                if(_unit distance _source < _distance) then {
                    if(!life_isstuned && !(_unit GVAR ["restrained",false])) then {
                        if(_isVehicle && _isQuad) then {
                            player action ["Eject",vehicle player];
                            [_unit,_source] spawn life_fnc_stuned;
                        } else {
                            [_unit,_source] spawn life_fnc_stuned;
                        };
                    };
                };
            };
            
            //Temp fix for super tasers on cops.
            if(playerSide == west && side _source == west) then {
                _damage = false;
            };
        };
    };
};

[] call life_fnc_hudUpdate;
_damage;