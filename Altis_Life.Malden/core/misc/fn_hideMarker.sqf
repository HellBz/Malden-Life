/*
	Filename: fn_hideMarker.sqf
	Author: Kellojo
	Description: Hides markers for cops and medics
*/


_hiddenMarkers = [
	"field_kratom",
	"field_Ololiqui",
	"field_peyote",
	"field_gold",
	
	"proc_gold",
	"proc_kratom",
	"proc_Ololiuqui",
	"proc_peyote",
	
	"Dealer_1",
	"Dealer_2",
	"Dealer_3",
	
	"base_rebel",
	"gang_area_1",
	"gang_area_2",
	"gang_area_3"
];

{
	_x setMarkerAlphaLocal 0;
} forEach _hiddenMarkers;

