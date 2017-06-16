/*
	Filename: fn_passport.sqf
	Author: Kellojo
	Description: Passport mechanic...
*/

_mode = _this select 0;
if (isNil "_mode") exitWith {};

//gather passport data and send it of
if (_mode == 0) exitWith {
	_target = _this select 1;
	if (isNil "_target") exitWith {};
	
	_txt = switch(side player) do {
		case civilian: {
			format["<t align='center' size='2.5'>Personalausweis</t><br/><t align='center' size='2'>Republik Malden</t><br/><br/><t size='1.3'>%1</t><br/><t size='1'>Zivilist</t>", name player]
		};
		case independent: {
			format["<t color='#F5512C' align='center' size='2.5'>Dienstausweis</t><br/><t align='center' size='2'>Republik Malden</t><br/><br/><t size='1.3'>%1</t><br/><t size='1'>Notarzt</t><br/>Rang: %2", name player, [] call life_medicLevel]
		};
		case blufor: {
			format["<t color='#2C79F5' align='center' size='2.5'>Dienstausweis</t><br/><t align='center' size='2'>Republik Malden</t><br/><br/><t size='1.3'>%1</t><br/><t size='1'>Polizist</t><br/>Rang: %2", name player, [] call life_coplevel]
		};
		case opfor: {
			format["<t align='center' size='2.5'>Personalausweis</t><br/><t align='center' size='2'>Republik Malden</t><br/><br/><t size='1.3'>%1</t><br/><t size='1'>Zivilist</t>", name player]
		};
	};
	
	[1, _txt] remoteExecCall ["life_fnc_passport", _target, false];
};

//show passport
if (_mode == 1) exitWith {
	hintSilent parseText (_this select 1);
};

