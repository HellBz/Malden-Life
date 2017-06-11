/*
	Filename: fn_variableDealer.sqf
	Author: Kellojo
	Description: Randomizes the position of the dug dealers
*/

_pos = ["Drugdealer_Pos1","Drugdealer_Pos2","Drugdealer_Pos3","Drugdealer_Pos4","Drugdealer_Pos5","Drugdealer_Pos6","Drugdealer_Pos7"];
_dealers = [[Dealer_1,"Dealer_1"],[Dealer_2,"Dealer_2"],[Dealer_3,"Dealer_3"]];
_dealerCntr = 3;
_d = [];

{
	if (round random 100 < 93 && _dealerCntr > 1) then {
		_d pushback _x;
	} else {
		deletevehicle (_x select 0);
		deleteMarker (_x select 1);
		_dealerCntr = _dealerCntr - 1;
	};
} forEach _dealers;

{
	_position = _pos call BIS_fnc_selectRandom;
	(_x select 1) setMarkerPos (getMarkerPos _position);
	(_x select 0) setPos _pos;
	(_x select 0) setDir (round (random 360));
	
	//_markerstr = createMarker [(str (random 145)) + "Drogendealer",_pos];
	//_markerstr setMarkerShape "ICON";
	//_markerstr setMarkerType "mil_dot";
	//_markerstr setMarkerText "Drogendealer";
	//_markerstr setMarkerColor "ColorOrange";
} forEach _d;
