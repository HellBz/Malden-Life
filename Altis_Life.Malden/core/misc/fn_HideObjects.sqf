/*
	Filename: fn_HideObjects.sqf
	Author: Kellojo
	Description: Removes some map objects
*/

_objs = nearestObjects [getMarkerPos "remove_1", ["Land_MetalShelter_02_F","Land_MetalShelter_01_F"], 20];
{_x hideObjectGlobal true} foreach _objs;


