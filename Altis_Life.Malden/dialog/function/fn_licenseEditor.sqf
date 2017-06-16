#include "..\..\script_macros.hpp"
/*
	Filename: fn_licenseEditor.sqf
	Author: Kellojo
	Description: Handles the license editor dialog.
*/

_mode = _this select 0;
if (isNil "_mode") exitWith {};

//setup dialog
if (_mode == 0) exitWith {
	_curTarget = param [1,objNull,[objNull]];
	_curLicenses = param [2,[],[[]]];
	if (isNil "_curTarget" || isNil "_curLicenses") exitWith {};
	if (!alive _curTarget || _curTarget == objNull || player distance _curTarget > 8 && side _curTarget isEqualTo civilian) exitWith {};
	life_pInact_curTarget = _curTarget;
	
	if (!dialog) then {createDialog "life_license_editor"};
	
	
	//fill listbox
	_licenses = "true" configClasses (missionConfigFile >> "Licenses");
	{
		_y = _x;
		_editable = getNumber(_y >> "editable");
		_editableBy = getText(_y >> "editableBy");
		_condition = [] call compile getText(_y >> "editableCondition");
		if (_editable == 1 && ([] call compile _editableBy) == side player && _condition) then {
			_var =  getText(_y >> "variable");
			_i = lbAdd [2101, localize getText(_y >> "displayName")];
			lbSetData [2101, _i, _var];
			
			{
				if ((_x select 0) == _var && (_x select 1)) then {
					lbSetColor [2101, _i, [0, 1, 0, 0.5]];
				};
			} forEach _curLicenses;
		};
		
	} forEach _licenses;
	
	//fill combobox
	_i = lbAdd [2100, localize "STR_Global_Remove"];
	lbSetData [2100, _i, "remove"];
	_i = lbAdd [2100, localize "STR_Wanted_Add"];
	lbSetData [2100, _i, "add"];
};

//edit licenses
if (_mode == 1) exitWith {
	_selectedLicense = lbCurSel 2101;
	_selectedBehaviour = lbCurSel 2100;
	if (isNil "_selectedLicense" || isNil "_selectedBehaviour") exitWith {};
	
	//get dialog data and send license change of
	_license = lbData [2101, _selectedLicense];
	_behaviour = lbData [2100, _selectedBehaviour];
	if (isNil "_license" || isNil "_behaviour") exitWith {};
	[(_behaviour != "remove"), _license, life_pInact_curTarget] remoteExecCall ["life_fnc_setLicense", life_pInact_curTarget, false];
	
	//change lb entry color
	if ((_behaviour != "remove")) then {
		lbSetColor [2101, _selectedLicense, [0, 1, 0, 0.5]];
	} else {
		lbSetColor [2101, _selectedLicense, [1, 1, 1, 0.5]];
	};
};

//get licenses from another player
if (_mode == 2) exitWith {
	_dialogOwner = _this select 1;
	if (isNil "_dialogOwner") exitWith {};
	if (!alive _dialogOwner || _dialogOwner == objNull || !alive player) exitWith {};
	
	_curLicenses = [];
	_licenses = "true" configClasses (missionConfigFile >> "Licenses");
	{
		_editable = getNumber(_x >> "editable");
		_side = getText(_x >> "side");
		_canOwnlicense = switch(true) do {
			case (_side == "cop" && side player isEqualTo blufor): {true};
			case (_side == "med" && side player isEqualTo independent): {true};
			case (_side == "civ" && side player isEqualTo civilian): {true};
			default {false};
		};
		
		if (_editable == 1 && _canOwnlicense) then {
			_var = getText(_x >> "variable");
			_curLicenses pushBack [_var, [] call compile format["license_civ_%1",_var]];
		};
	} forEach _licenses;
	
	[0, player, _curLicenses] remoteExecCall ["life_fnc_licenseEditor", _dialogOwner, false];
};

