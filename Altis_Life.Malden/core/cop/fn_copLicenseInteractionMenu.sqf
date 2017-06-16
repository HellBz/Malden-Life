#include "..\..\script_macros.hpp"
/*
    File: fn_copLicenseInteractionMenu.sqf
    Author: Bryan "Tonic" Boardwine edited by Kellojo

    Description:
    Replaces the mass addactions for various cop actions towards another player.
*/
#define Btn1 37450
#define Btn2 37451
#define Btn3 37452
#define Btn4 37453
#define Btn5 37454
#define Btn6 37455
#define Btn7 37456
#define Btn8 37457
#define Btn9 37458
#define Btn10 37459
#define Title 37401

private ["_display","_curTarget","_seizeRank","_Btn1","_Btn2","_Btn3","_Btn4","_Btn5","_Btn6","_Btn7","_Btn8","_Btn9","_Btn10"];

disableSerialization;
_curTarget = param [0,objNull,[objNull]];
_seizeRank = LIFE_SETTINGS(getNumber,"seize_minimum_rank");

if (player getVariable ["Escorting", false]) then {
    if (isNull _curTarget) exitWith {closeDialog 0;}; //Bad target
    if (!isPlayer _curTarget && side _curTarget isEqualTo civilian) exitWith {closeDialog 0;}; //Bad side check?
    if (player distance _curTarget > 4 ) exitWith {closeDialog 0;}; // Prevents menu accessing from far distances.
};

if (!dialog) then {
    createDialog "pInteraction_Menu";
};

_display = findDisplay 37400;
_Btn1 = _display displayCtrl Btn1;
_Btn2 = _display displayCtrl Btn2;
_Btn3 = _display displayCtrl Btn3;
_Btn4 = _display displayCtrl Btn4;
_Btn5 = _display displayCtrl Btn5;
_Btn6 = _display displayCtrl Btn6;
_Btn7 = _display displayCtrl Btn7;
_Btn8 = _display displayCtrl Btn8;
_Btn9 = _display displayCtrl Btn9;
_Btn10 = _display displayCtrl Btn10;
life_pInact_curTarget = _curTarget;

if (player getVariable ["isEscorting",false]) then {
    { _x ctrlShow false; } forEach [_Btn1,_Btn2,_Btn3,_Btn5,_Btn6,_Btn7,_Btn8,_Btn9,_Btn10];
};

_Btn1 ctrlSetText "Führerschein abnehmen (PKW)";
_Btn1 buttonSetAction "[false,'driver', life_pInact_curTarget] remoteExecCall ['life_fnc_setLicense', life_pInact_curTarget, false];";

_Btn2 ctrlSetText "Führerschein abnehmen (LKW)";
_Btn2 buttonSetAction "[false,'trucking', life_pInact_curTarget] remoteExecCall ['life_fnc_setLicense', life_pInact_curTarget, false];";

_Btn3 ctrlSetText "Pilotenschein abnehmen";
_Btn3 buttonSetAction "[false,'pilot', life_pInact_curTarget] remoteExecCall ['life_fnc_setLicense', life_pInact_curTarget, false];";

_Btn4 ctrlSetText "Bootsführerschein abnehmen";
_Btn4 buttonSetAction "[false,'boat', life_pInact_curTarget] remoteExecCall ['life_fnc_setLicense', life_pInact_curTarget, false];";

_Btn5 ctrlSetText "Waffenschein abnehmen";
_Btn5 buttonSetAction "[false,'gun', life_pInact_curTarget] remoteExecCall ['life_fnc_setLicense', life_pInact_curTarget, false];";


_Btn6 ctrlSetText "Führerschein vergeben (PKW)";
_Btn6 buttonSetAction "[true,'driver', life_pInact_curTarget] remoteExecCall ['life_fnc_setLicense', life_pInact_curTarget, false];";

_Btn7 ctrlSetText "Führerschein vergeben (LKW)";
_Btn7 buttonSetAction "[true,'trucking', life_pInact_curTarget] remoteExecCall ['life_fnc_setLicense', life_pInact_curTarget, false];";

_Btn8 ctrlSetText "Pilotenschein vergeben";
_Btn8 buttonSetAction "[true,'pilot', life_pInact_curTarget] remoteExecCall ['life_fnc_setLicense', life_pInact_curTarget, false];";

_Btn9 ctrlSetText "Bootsführerschein vergeben";
_Btn9 buttonSetAction "[true,'boat', life_pInact_curTarget] remoteExecCall ['life_fnc_setLicense', life_pInact_curTarget, false];";

_Btn10 ctrlSetText "Waffenschein vergeben";
_Btn10 buttonSetAction "[true,'gun', life_pInact_curTarget] remoteExecCall ['life_fnc_setLicense', life_pInact_curTarget, false];";

