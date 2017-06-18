#include "..\..\script_macros.hpp"
/*
    File: fn_useItem.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Main function for item effects and functionality through the player menu.
*/
private "_item";
disableSerialization;
if ((lbCurSel 2005) isEqualTo -1) exitWith {hint localize "STR_ISTR_SelectItemFirst";};
_item = CONTROL_DATA(2005);

switch (true) do {
    case (_item in ["waterBottle","coffee","redgull"]): {
        if ([false,_item,1] call life_fnc_handleInv) then {
            life_thirst = 100;
            if (LIFE_SETTINGS(getNumber,"enable_fatigue") isEqualTo 1) then {player setFatigue 0;};
            if (_item isEqualTo "redgull" && {LIFE_SETTINGS(getNumber,"enable_fatigue") isEqualTo 1}) then {
                [] spawn {
                    life_redgull_effect = time;
                    titleText[localize "STR_ISTR_RedGullEffect","PLAIN"];
                    player enableFatigue false;
                    waitUntil {!alive player || ((time - life_redgull_effect) > (3 * 60))};
                    player enableFatigue true;
                };
            };
        };
    };

    case (_item isEqualTo "boltcutter"): {
        [cursorObject] spawn life_fnc_boltcutter;
        closeDialog 0;
    };

    case (_item isEqualTo "blastingcharge"): {
        player reveal fed_bank;
        (group player) reveal fed_bank;
        [cursorObject] spawn life_fnc_blastingCharge;
        closeDialog 0;
    };

    case (_item isEqualTo "defusekit"): {
        [cursorObject] spawn life_fnc_defuseKit;
        closeDialog 0;
    };

    case (_item isEqualTo "storagesmall"): {
        [false] call life_fnc_storageBox;
    };

    case (_item isEqualTo "storagebig"): {
        [true] call life_fnc_storageBox;
    };

    case (_item isEqualTo "spikeStrip"): {
        if (!isNull life_spikestrip) exitWith {hint localize "STR_ISTR_SpikesDeployment"; closeDialog 0};
        if ([false,_item,1] call life_fnc_handleInv) then {
            [] spawn life_fnc_spikeStrip;
            closeDialog 0;
        };
    };

    case (_item isEqualTo "fuelFull"): {
        if !(isNull objectParent player) exitWith {hint localize "STR_ISTR_RefuelInVehicle"};
        [] spawn life_fnc_jerryRefuel;
        closeDialog 0;
    };

    case (_item isEqualTo "fuelEmpty"): {
        [] spawn life_fnc_jerryCanRefuel;
        closeDialog 0;
    };

    case (_item isEqualTo "lockpick"): {
        [] spawn life_fnc_lockpick;
        closeDialog 0;
    };
	
	case (_item isEqualTo "battery"): {
        if ([false,_item,1] call life_fnc_handleInv) then {
            life_pCharge = 100;
            closeDialog 0;
        };
    };

    case (!(M_CONFIG(getNumber,"VirtualItems",_item,"edible") isEqualTo -1) || !(M_CONFIG(getNumber,"VirtualItems",_item,"drinkable") isEqualTo -1)): {
        [] call life_fnc_eat;
    };
	
	
	//Rocketsience ^^
	case (EQUAL(_item,"rocket_n_r")): {
		if(([false,_item,1] call life_fnc_handleInv)) then {
			[0,position player, "normal","red",true] call life_fnc_fireworks;
		};
	};
	case (EQUAL(_item,"rocket_n_g")): {
		if(([false,_item,1] call life_fnc_handleInv)) then {
			[0,position player, "normal","green",true] call life_fnc_fireworks;
		};
	};
	case (EQUAL(_item,"rocket_n_b")): {
		if(([false,_item,1] call life_fnc_handleInv)) then {
			[0,position player, "normal","blue",true] call life_fnc_fireworks;
		};
	};
	case (EQUAL(_item,"rocket_n_ran")): {
		if(([false,_item,1] call life_fnc_handleInv)) then {
			[0,position player, "normal","random",true] call life_fnc_fireworks;
		};
	};

	case (EQUAL(_item,"rocket_f_r")): {
		if(([false,_item,1] call life_fnc_handleInv)) then {
			[0,position player, "fizzer","red",true] call life_fnc_fireworks;
		};
	};
	case (EQUAL(_item,"rocket_f_g")): {
		if(([false,_item,1] call life_fnc_handleInv)) then {
			[0,position player, "fizzer","green",true] call life_fnc_fireworks;
		};
	};
	case (EQUAL(_item,"rocket_f_b")): {
		if(([false,_item,1] call life_fnc_handleInv)) then {
			[0,position player, "fizzer","blue",true] call life_fnc_fireworks;
		};
	};
	case (EQUAL(_item,"rocket_f_ran")): {
		if(([false,_item,1] call life_fnc_handleInv)) then {
			[0,position player, "fizzer","random",true] call life_fnc_fireworks;
		};
	};
	
	case (EQUAL(_item,"rocket_r_r")): {
		if(([false,_item,1] call life_fnc_handleInv)) then {
			[0,position player, "rain","red",true] call life_fnc_fireworks;
		};
	};
	case (EQUAL(_item,"rocket_r_g")): {
		if(([false,_item,1] call life_fnc_handleInv)) then {
			[0,position player, "rain","green",true] call life_fnc_fireworks;
		};
	};
	case (EQUAL(_item,"rocket_r_b")): {
		if(([false,_item,1] call life_fnc_handleInv)) then {
			[0,position player, "rain","blue",true] call life_fnc_fireworks;
		};
	};
	case (EQUAL(_item,"rocket_r_ran")): {
		if(([false,_item,1] call life_fnc_handleInv)) then {
			[0,position player, "rain","random",true] call life_fnc_fireworks;
		};
	};
	case (EQUAL(_item,"rocket_rr")): {
		if(([false,_item,1] call life_fnc_handleInv)) then {
			[0,position player, "random","random",true] call life_fnc_fireworks;
		};
	};
	
	case (EQUAL(_item,"battery_s")): {
		if (life_firework_batteries == 0 && vehicle player == player) then {
			if(([false,_item,1] call life_fnc_handleInv)) then {
				[0] spawn life_fnc_fireworksBattery;
			};
		} else {
			hint "So viel Geld sollte ich nicht aufeinmal wegwerfen...";
		};
	};
	case (EQUAL(_item,"battery_m")): {
		if (life_firework_batteries == 0 && vehicle player == player) then {
			if(([false,_item,1] call life_fnc_handleInv)) then {
				[1] spawn life_fnc_fireworksBattery;
			};
		} else {
			hint "So viel Geld sollte ich nicht aufeinmal wegwerfen...";
		};
	};
	case (EQUAL(_item,"battery_l")): {
		if (life_firework_batteries == 0 && vehicle player == player) then {
			if(([false,_item,1] call life_fnc_handleInv)) then {
				[2] spawn life_fnc_fireworksBattery;
			};
		} else {
			hint "So viel Geld sollte ich nicht aufeinmal wegwerfen...";
		};
	};
	
    default {
        hint localize "STR_ISTR_NotUsable";
    };
};

[] call life_fnc_p_updateMenu;
[] call life_fnc_hudUpdate;