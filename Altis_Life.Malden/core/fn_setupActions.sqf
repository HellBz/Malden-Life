/*
    File: fn_setupActions.sqf
    Author:

    Description:
    Master addAction file handler for all client-based actions.
*/

switch (playerSide) do {
    case civilian: {
        //Drop fishing net
        life_actions = [player addAction[localize "STR_pAct_DropFishingNet",life_fnc_dropFishingNet,"",0,false,false,"",'
        (surfaceisWater (getPos vehicle player)) && (vehicle player isKindOf "Ship") && life_carryWeight < life_maxWeight && speed (vehicle player) < 2 && speed (vehicle player) > -1 && !life_net_dropped ']];
        //Rob person
        life_actions = life_actions + [player addAction[localize "STR_pAct_RobPerson",life_fnc_robAction,"",0,false,false,"",'
        !isNull cursorObject && player distance cursorObject < 3.5 && isPlayer cursorObject && animationState cursorObject == "Incapacitated" && !(cursorObject getVariable ["robbed",false]) ']];
		
		
		//smoke trails for the cessna
		life_actions pushBack (player addAction["<t color='#98FA05'>" + "Rauch aktivieren",{[0] call life_fnc_smokeTrail;},"",0,false,false,"",'!life_smokeTrail && {!isNull objectParent player} && {objectParent player isKindOf "Plane"} && (position player select 2) > 15']);
		life_actions pushBack (player addAction["<t color='#98FA05'>" + "Rauch deaktivieren",{[1] call life_fnc_smokeTrail;},"",0,false,false,"",'life_smokeTrail']);
		
		//Passport
		life_actions pushBack (player addAction["<t color='#98FA05'>" + "Ausweis zeigen",{[0, cursorTarget] call life_fnc_passport;},"",0,false,false,"","!isNull cursorTarget && cursorTarget isKindOf 'Man' && vehicle player == player"]);
    };
	
	case blufor: {
		//Passport
		life_actions pushBack (player addAction["<t color='#98FA05'>" + "Dienstausweis zeigen",{[0, cursorTarget] call life_fnc_passport;},"",0,false,false,"","!isNull cursorTarget && cursorTarget isKindOf 'Man' && vehicle player == player"]);
	};
	
	case independent: {
		//Passport
		life_actions pushBack (player addAction["<t color='#98FA05'>" + "Dienstausweis zeigen",{[0, cursorTarget] call life_fnc_passport;},"",0,false,false,"","!isNull cursorTarget && cursorTarget isKindOf 'Man' && vehicle player == player"]);
	};
};
