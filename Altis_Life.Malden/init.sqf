/*
    File: init.sqf
    Author: 
    
    Description:
    
*/
StartProgress = false;

if (hasInterface) then {
    [] execVM "briefing.sqf"; //Load Briefing
};
[] execVM "KRON_Strings.sqf";

StartProgress = true;

if (isServer) then {
	[] call life_fnc_variableDealer;
	[] call life_fnc_atmMarkers;
	[] call life_fnc_HideObjects;
	[] spawn life_fnc_animals;
};