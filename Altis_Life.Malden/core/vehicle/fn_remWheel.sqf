#include "..\..\script_macros.hpp"
/*
	File: fn_remWheel.sqf
	Author: Kellojo
	Description: removes and adds a wheel from a car
*/

_mode = _this select 0;
_veh = _this select 1;
if (damage _veh == 1 or vehicle player != player or life_action_inUse or isNil "_veh" or isNil "_mode") exitWith {};
_whls = ["wheel_1_1_steering","wheel_1_2_steering","wheel_2_1_steering","wheel_2_2_steering"];
closeDialog 0;

//remove wheel
if (_mode == 0) then {
	{
		if ((_veh getHit _x) == 0 && vehicle player == player && !life_action_inUse) exitWith {
			[_veh,_x] spawn {
				_veh = _this select 0;
				_whl = _this select 1;
				life_action_inUse = true;
				player playMove "Acts_carFixingWheel";
				[_veh,"reparatur"] remoteExec ["life_fnc_say3D",RANY];
				sleep 20;
				_veh setHit [_whl,1];
				[true,"wheel",1] call life_fnc_handleInv;
				life_action_inUse = false;
			};
		};
	} forEach _whls;
};

//add wheel
if (_mode == 1) then {
		{
		if ((_veh getHit _x) == 1 && vehicle player == player && !life_action_inUse) exitWith {
			[_veh,_x] spawn {
				_veh = _this select 0;
				_whl = _this select 1;
				life_action_inUse = true;
				player playMove "Acts_carFixingWheel";
				[_veh,"reparatur"] remoteExec ["life_fnc_say3D",RANY];
				sleep 20;
				_veh setHit [_whl,0];
				[false,"wheel",1] call life_fnc_handleInv;
				life_action_inUse = false;
			};
		};
	} forEach _whls;
};
