#include "..\..\script_macros.hpp"
/*
    File: fn_sirenLights.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Lets play a game! Can you guess what it does? I have faith in you, if you can't
    then you have failed me and therefor I lose all faith in humanity.. No pressure.
*/
private ["_vehicle","_mode"];
_mode == _this select 1;
_vehicle = param [0,objNull,[objNull]];
if (isNull _vehicle) exitWith {}; //Bad entry!
if (!(typeOf _vehicle in ["C_Offroad_02_unarmed_F","B_Quadbike_01_F","B_MRAP_01_hmg_F","I_MRAP_03_F","B_APC_Wheeled_01_cannon_F","I_MRAP_03_hmg_F","C_Offroad_01_F","B_MRAP_01_F","B_MRAP_01_hmg_F","C_SUV_01_F","C_Hatchback_01_sport_F","B_Heli_Light_01_F","B_Heli_Transport_01_F","I_Heli_light_03_unarmed_F"])) exitWith {}; //Last chance check to prevent something from defying humanity and creating a monster.

systemChat ">> fn_sirenLights.sqf";
systemChat format [">> mode = %1",_mode];

_trueorfalse = _vehicle getVariable ["lights",false];

if (_trueorfalse) then {
    _vehicle setVariable ["lights",false,true];
    systemChat ">> toggled Lights off";
} else {
    _vehicle setVariable ["lights",true,true];
    systemChat ">> toggled Lights on";
    if(_mode == 0) then {
		[_vehicle,0.038] remoteExec ["life_fnc_copLights",RCLIENT];		//0.22
        systemChat "call life_fnc_copLights  [0.038]";
    }else{
		[_vehicle,0.15] remoteExec ["life_fnc_copLights",RCLIENT];
        systemChat "call life_fnc_copLights  [0.15]";
    };
};