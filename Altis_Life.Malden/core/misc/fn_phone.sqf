/*
	Filename: fn_cellphone.sqf
	Author: Kellojo
	Description: completely replaces the altis life cellphone functionality (hopefully reduces traffic between server and client)
*/
_mode = _this select 0;
if (isNil "_mode") exitWith {};

//setup dialog

if (_mode == 0) then {
	if ((call life_adminlevel) > 0) then {
		_i = lbAdd [3001, "Alle Spieler (Admin Nachricht)"];
		lbSetData [3001, _i, "Alle Spieler (Admin Nachricht)"];
	};
	
	_i = lbAdd [3001, "Admins"];
	lbSetData [3001, _i, "Admins"];
	lbSetColor [3001, _i, [1, 0.22, 0.22, 1]];
	
	_i = lbAdd [3001, "Polizei"];
	lbSetData [3001, _i, "Polizei"];
	lbSetColor [3001, _i, [0, 0.651, 1, 1]];
	
	_i = lbAdd [3001, "Sanitäter/ADAC"];
	lbSetData [3001, _i, "Sanitäter/ADAC"];
	lbSetColor [3001, _i, [1, 0.451, 0, 1]];
	
	_i = lbAdd [3001, "=============="];
	lbSetData [3001, _i, "=============="];
	
	_cop = [west] call life_fnc_who;
	_med = [independent] call life_fnc_who;
	_civ = [civilian] call life_fnc_who;
	
	if (_cop > 0) then {
		{
			if (side _x == west) then {
				_i = lbAdd [3001, name _x];
				lbSetData [3001, _i, str _x];
				lbSetColor [3001, _i, [0, 0.651, 1, 1]];
			};
		} forEach allPlayers;
	};
	
	if (_med > 0) then {
		{
			if (side _x == independent) then {
				_i = lbAdd [3001, name _x];
				lbSetData [3001, _i, str _x];
				lbSetColor [3001, _i, [1, 0.451, 0, 1]];
			};
		} forEach allPlayers;
	};
	
	if (_civ > 0) then {
		{
			if (side _x == civilian) then {
				_i = lbAdd [3001, name _x];
				lbSetData [3001, _i, str _x];
			};
		} forEach allPlayers;
	};
	
	{
		_i = lbAdd [3004, _x select 0];
		lbSetData [3004, _i, _x select 1];
		switch (_x select 0) do {
			case "Notruf (ADAC/Sanitäter)": {lbSetColor [3004, _i, [1, 0.451, 0, 1]];};
			case "Adminnachricht": {lbSetColor [3004, _i, [1, 0.22, 0.22, 1]];};
			case "Adminanfrage": {lbSetColor [3004, _i, [1, 0.22, 0.22, 1]];};
			case "Polizeinotruf": {lbSetColor [3004, _i, [0, 0.651, 1, 1]];};
		};
	} forEach life_rec_messages;
	ctrlSetText [3005,format ["%1/100",life_pCharge]];
};

//send message
if (_mode == 1) then {
	_cb = (findDisplay 3000) displayCtrl 3002;
	_tarStr = lbData [3001, lbCurSel 3001];
	_msg = ctrlText 3003;
	_isPos = cbChecked _cb;
	_tar = call compile format["%1",_tarStr];

	if (_msg == "") exitWith {hint "Du musst eine Nachricht eingeben."};
	if (isNil "_tarStr" || _tarStr == "") exitWith {hint "Du musst einen Empfänger auswählen."};
	if (life_pCharge <= 0 && _tarStr != "Admins") exitWith {hint "Dein Telefon hat keinen Strom mehr."};
	
	switch (_tarStr) do {
		case "Alle Spieler (Admin Nachricht)": {
			[3,_msg,name player,4,player,_isPos] remoteExecCall ["life_fnc_phone", 0,false];
			hint format["Admin Nachricht an alle gesendet: %1",_msg];
		};
		case "Admins": {
			[3,_msg,name player,2,player,_isPos] remoteExecCall ["life_fnc_phone", 0,false];
			hint format["Du hast %1 eine Nachricht gesendet: %2","den Admins",_msg];
		};
		case "Polizei": {
			[3,_msg,name player,1,player,_isPos] remoteExecCall ["life_fnc_phone", 0,false];
			hint format["Du hast %1 eine Nachricht gesendet: %2","der Polizei",_msg];
			life_pCharge = life_pCharge - 3;
		};
		case "Sanitäter/ADAC": {
			[3,_msg,name player,5,player,_isPos] remoteExec ["life_fnc_phone", 0,false];
			hint format["Du hast einen Notruf an %1 gesendet.","die Sanitäter/den ADAC",_msg];
			life_pCharge = life_pCharge - 3;
		};
		case "==============": {};
		default {
			if(_tar in playableunits)then{
				[3,_msg,name player,0,player,_isPos] remoteExecCall ["life_fnc_phone", _tar, false];
				hint format["Du hast %1 eine Nachricht gesendet: %2",name _tar,_msg];
				life_pCharge = life_pCharge - 5;
			};
		};
	};
	ctrlSetText [3005,format ["%1/100",life_pCharge]];
	[] call life_fnc_hudUpdate;
};

//view old message
if (_mode == 2) then {
	if !(life_pCharge > 0) exitWith {hint "Dein Telefon hat keinen Strom mehr."};
	_msg = lbData [3004, lbCurSel 3004];
	life_pCharge = life_pCharge - 1;
	ctrlSetText [3005,format ["%1/100",life_pCharge]];
	hint parseText _msg;
};

//display message
if (_mode == 3) then {
	if(isServer) exitWith {};
	private["_msg","_from", "_type"];
	_msg = _this select 1;
	_from = _this select 2;
	_type = _this select 3;
	_sender = _this select 4;
	_isPos = _this select 5;
	_pos = format ['%1|%2',floor ((position player select 0) /100),floor ((position player select 1) /100)];
	if(_from == "") exitWith {};
	switch (_type) do
	{
		case 0 :
		{
			private["_message"];
			_message = format[">>>Nachricht von %1: %2",_from,_msg];
			if (_isPos) then {
				_msgForm = format ["<t color='#FFCC00'><t size='2'><t align='center'>Neue Nachricht<br/><br/><t color='#33CC33'><t align='left'><t size='1'>Zu: <t color='#ffffff'>Dir<br/><t color='#33CC33'>Von: <t color='#ffffff'>%1<br/><t color='#33CC33'>Position: <t color='#ffffff'>%3<br/><br/><t color='#33CC33'>Nachricht:<br/><t color='#ffffff'>%2",_from,_msg,_pos];
				hint parseText _msgForm;
				life_rec_messages pushback ['Private Nachricht',_msgForm];
			} else {
				_msgForm = format ["<t color='#FFCC00'><t size='2'><t align='center'>Neue Nachricht<br/><br/><t color='#33CC33'><t align='left'><t size='1'>Zu: <t color='#ffffff'>Dir<br/><t color='#33CC33'>Von: <t color='#ffffff'>%1<br/><br/><t color='#33CC33'>Nachricht:<br/><t color='#ffffff'>%2",_from,_msg];
				hint parseText _msgForm;
				life_rec_messages pushback ['Private Nachricht',_msgForm];
			};
			
			life_pCharge = life_pCharge - 2;
			["TextMessage",[format["Du hast eine neue private Nachricht von %1",_from]]] call bis_fnc_showNotification;
			systemChat _message;
		};
		
		case 1 :
		{
			if(side player != west) exitWith {};
			private["_message"];
			_message = format["---110 Notruf %1: %2",_from,_msg];
			if (_isPos) then {
				_msgForm = format ["<t color='#316dff'><t size='2'><t align='center'>Neuer Notruf<br/><br/><t color='#33CC33'><t align='left'><t size='1'>Zu: <t color='#ffffff'>Allen Polizisten<br/><t color='#33CC33'>Von: <t color='#ffffff'>%1<br/><t color='#33CC33'>Position: <t color='#ffffff'>%3<br/><br/><t color='#33CC33'>Nachricht:<br/><t color='#ffffff'>%2",_from,_msg,_pos];
				hint parseText _msgForm;
				life_rec_messages pushback ['Polizeinotruf',_msgForm];
			} else {
				_msgForm = format ["<t color='#316dff'><t size='2'><t align='center'>Neuer Notruf<br/><br/><t color='#33CC33'><t align='left'><t size='1'>Zu: <t color='#ffffff'>Allen Polizisten<br/><t color='#33CC33'>Von: <t color='#ffffff'>%1<br/><br/><t color='#33CC33'>Nachricht:<br/><t color='#ffffff'>%2",_from,_msg];
				hint parseText _msgForm;
				life_rec_messages pushback ['Polizeinotruf',_msgForm];
			};
			
			life_pCharge = life_pCharge - 2;
			["PoliceDispatch",[format["Neuer Notruf von: %1",_from]]] call bis_fnc_showNotification;
			systemChat _message;
		};
		
		case 2 :
		{
			if((call life_adminlevel) < 1) exitWith {};
			private["_message"];
			_message = format["???Admin Nachfrage von %1: %2",_from,_msg];
			_msgForm = format ["<t color='#ffcefe'><t size='2'><t align='center'>Admin Notruf<br/><br/><t color='#33CC33'><t align='left'><t size='1'>Zu: <t color='#ffffff'> Den Admins<br/><t color='#33CC33'>Von: <t color='#ffffff'>%1<br/><br/><t color='#33CC33'>Nachricht:<br/><t color='#ffffff'>%2",_from,_msg];
			hint parseText _msgForm;
			
			life_rec_messages pushback ['Adminanfrage',_msgForm];
			["AdminDispatch",[format["%1 Hat einen Admin angefordert!",_from]]] call bis_fnc_showNotification;
			systemChat _message;
		};

		case 4 :
		{
			private["_message","_admin"];
			_message = format["!!!Admin Nachricht: %1",_msg];
			_admin = format["Sent by admin: %1", _from];
			_msgForm = format ["<t color='#FF0000'><t size='2'><t align='center'>Admin Nachricht<br/><br/><t color='#33CC33'><t align='left'><t size='1'>Zu: <t color='#ffffff'>Allen Spielern<br/><t color='#33CC33'>Von: <t color='#ffffff'>Die Admins<br/><br/><t color='#33CC33'>Nachricht:<br/><t color='#ffffff'>%1",_msg];
			hint parseText _msgForm;
			
			life_rec_messages pushback ['Adminnachricht',_msgForm];
			["AdminMessage",["Du hast eine Nachricht von einem Admin erhalten!"]] call bis_fnc_showNotification;
			systemChat _message;
			if((call life_adminlevel) > 0) then {systemChat _admin;};
		};

		case 5: {
			if (side player != independent) exitWith {};
			private["_message"];
			_message = format["!!!Notruf: %1",_msg];

			if (_isPos) then {
				_msgForm = format ["<t color='#FFCC00'><t size='2'><t align='center'>Notruf<br/><br/><t color='#33CC33'><t align='left'><t size='1'>Zu: <t color='#ffffff'>Dir<br/><t color='#33CC33'>Von: <t color='#ffffff'>%1<br/><t color='#33CC33'>Position: <t color='#ffffff'>%3<br/><br/><t color='#33CC33'>Nachricht:<br/><t color='#ffffff'>%2",_from,_msg,_pos];
				hint parseText _msgForm;
				life_rec_messages pushback ['Notruf (ADAC/Sanitäter)',_msgForm];
			} else {
				_msgForm = format ["<t color='#FFCC00'><t size='2'><t align='center'>Notruf<br/><br/><t color='#33CC33'><t align='left'><t size='1'>Zu: <t color='#ffffff'>Dir<br/><t color='#33CC33'>Von: <t color='#ffffff'>%1<br/><br/><t color='#33CC33'>Nachricht:<br/><t color='#ffffff'>%2",_from,_msg];
				hint parseText _msgForm;
				life_rec_messages pushback ['Notruf (ADAC/Sanitäter)',_msgForm];
			};

			["TextMessage",[format["Notruf von %1",_from]]] call bis_fnc_showNotification;

			[_sender] spawn {
				_requester = _this select 0;
				{
					if (_x == str name _requester) then {
						_marker = str name _requester;
						_marker setMarkerPosLocal position _requester;
					}
				} foreach allMapMarkers;
				_marker = createMarkerLocal [str name player, position _requester];
				_marker setMarkerTypeLocal 'mil_warning';
				_marker setMarkerColorLocal 'ColorYellow';
				_marker setMarkerTextLocal format ['Notruf von %1',name _requester];
				
				sleep 300;
				deleteMarkerLocal _marker;
			};
		};
	};
};
