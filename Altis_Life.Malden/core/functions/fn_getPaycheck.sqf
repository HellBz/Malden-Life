#include "..\..\script_macros.hpp"
/*
	Filename: fn_getPaycheck.sqf
	Author: Kellojo
	Description: Gets Paychecks for players
*/


_paycheck = 0;

switch (side player) do {
    case civilian: {
		_paycheck = LIFE_SETTINGS(getNumber,"paycheck_civ");
		
		//Business support 
		//gets the configured paycheck from the cfg
		_businesses = "true" configClasses (missionConfigFile >> "Cfg_Businesses");
		
		{
			_varName = getText(_x >> "licenseVar");
			_var = [] call compile format ["license_civ_%1", _varName];
			
			if (_var) then {
				_paycheck = getNumber(_x >> "paycheck");
			};
		} forEach _businesses;
	};
    case blufor: {
		_rank = call life_coplevel;
		_paycheck = LIFE_SETTINGS(getNumber,"paycheck_cop");
		_paycheck = _paycheck * _rank;
	};
	case independent: {
		_rank = call life_mediclevel;
		_paycheck = LIFE_SETTINGS(getNumber,"paycheck_med");
		_paycheck = _paycheck * _rank;
	};
	case opfor: {
		_paycheck = 1; 
	};
};

_paycheck;