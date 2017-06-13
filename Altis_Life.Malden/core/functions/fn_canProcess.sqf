/*
	Filename: fn_canProcess.sqf
	Author: Kellojo
	Description: Checks weather an item can be processed.
	_item is the defined process class in the config_process.hpp
*/

_item = _this select 0;
if (isNil "_item") exitWith {false};
_canProcess = true;
_neededMats = getArray(missionConfigFile >> "ProcessAction" >> _item >> "MaterialsReq");
{
	_varName = getText(missionConfigFile >> "VirtualItems" >> (_x select 0) >> "variable");
	_var = [] call compile format ["life_inv_%1", _varName];
	if (_var < 1) then {
		_canProcess = false;
	};
} forEach _neededMats;
_canProcess = _canProcess && !life_is_processing && !life_action_inUse;
_canProcess