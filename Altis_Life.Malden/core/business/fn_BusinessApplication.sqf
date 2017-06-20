/*
	Filename: fn_businessApplication.sqf
	Author: Kellojo
	Description: Adds a business application to the database
*/

_mode = _this select 0;
if (isNil "_mode") exitWith {};


//send off request
if (_mode == 0) exitWith {
	_name = ctrlText 1402;
	_application = ctrlText 1401;
	_size = parseNumber (ctrlText 1400);
	
	
	
	if (_name == "") exitWith {hint "Du musst einen Unternehmensnamen angeben.";};
	if (_application == "") exitWith {hint "Du musst ein Bewerbungsschreiben einreichen.";};
	if (isNil "_size") exitWith {hint "Du musst eine ungefähre Größe deines Unternehmens angeben.";};
	if (_size < 1) exitWith {hint "Dein Unternehmen muss mindestens einen Angestellten haben.";};
	
	
	[player , _name, _application, _size] remoteExec ["life_fnc_businessApplicationAdd", 2, false];
};

//hint
if (_mode == 1) exitWith {
	hint parseText " <t color='#F5D716' size='1.5'>Unternehmen angemeldet</t><br/>Dein Unternehmen wurde erfolgreich angemeldet.<br/> Du wirst in kurzer Zeit eine Antwort darauf erhalten.";
	closeDialog 0;
};

//setup dialog (name)
if (_mode == 2) exitWith {
	ctrlSetText [1004, name player];
};