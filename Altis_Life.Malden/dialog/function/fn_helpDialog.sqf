/*
	File: fn_helpDialog.sqf
	Author: Kellojo
	Description: handles the help dialog
*/

_mode = _this select 0;
_entrys = [
	["Server Informationen","0"],
	["Team","1"],
	["Tastenbelegung","2"],
	["",""],//Spacer
	["Features",""],
	["Lizenspreise","3"],
	["Fahrzeugpreise","4"],
	["Unternehmen","6"],
	["Fahrzeug Reperatur","5"],
	["Feuerwerk","7"],
	["",""],//Spacer
	["Vorhandene Unternehmen","100"]
];

//Setup
if (_mode == 0) exitWith {
	{
		_index = lbAdd [10101, _x select 0];
		lbSetData [10101, _index, _x select 1];
		if ((_x select 0) in ["Features","Server Informationen","Vorhandene Unternehmen"]) then {
			lbSetColor [10101, _index, [0.58, 0.97, 0.12, 1]];
		};
	} forEach _entrys;
	lbSetCurSel [10101, 0];
};

//lbsel changed
if (_mode == 1) exitWith {
	//listbox & text
	disableSerialization;
	_disp = findDisplay 10100;
	_lb = _disp displayCtrl 10101;
	_strucText = _disp displayCtrl 10102;
	
	//Get current selection and check for bad data...
	_cond = lbData [10101, (lbCurSel _lb)];
	if (_cond == "") exitWith {};
	
	//Get new text
	_text = switch (_cond) do {
		case "0": {["Server Informationen","<t color='#00F030'>Servername:</t> ETG Malden Life<br/><t color='#00F030'>Serveradresse:</t> xx.xx.xx.xx<br/><t color='#00F030'>Forum:</t> <a href=''>Forum besuchen</a><br/><t color='#00F030'>Teamspeak:</t> xx.xx.xx.xx<br/><br/><t color='#00F030'>Regeln:</t> <a href=''>Serverregeln ansehen</a><br/><br/><t color='#00F030'>Restarts: </t> 6:00/12:00/18:00/0:00"]};
		case "1": {["Team","<t color='#00F030'>Administratoren:</t><br/>- Spikey<br/>- Kellojo"]};
		case "2": {["Tastenbelegung",'<t color="#00F030">Zivilisten:</t><br/>- Sammeln: "Aktionstaste 10 / Windows"<br/>- Spitzhacke: "Aktionstaste 10 / Windows"<br/>- Ohrstöpsel: "Shift + Bild Up"<br/>- Springen: "Shift + Leer"<br/>- Holster: "Shift + H"<br/>- Holster: "Strg + H"<br/>- Ausrauben: "Shift + G"<br/>- Ergeben: "Shift + B"<br/>- Fahrzeuginventar: "T"<br/>- Spielerinventar: "Z"<br/>- Fahrzeug auf-/abschließen: "U"<br/>- Gesten: "5-9"<br/><br/><t color="#00F030">Polizei:</t><br/>- Blaulicht: "Shift + L"<br/>- Sirene: "F"<br/>- Festnehmen: "Shift + R"<br/><br/><t color="#00F030">Sanitäter:</t><br/>- Blaulicht: "Shift + L"<br/>- Sirene: "F"<br/>- Wiederbeleben: "Aktionstaste 10 / Windows"<br/>']};
		case "3": {["Lizenspreise",[2] call life_fnc_helpDialog]};
		case "4": {["Fahrzeugpreise",[3] call life_fnc_helpDialog]};
		case "5": {["Fahrzeug Reperatur", "Dein Auto besteht aus vielen verschiedenen Einzelteilen, welche du ab- und montieren kannst. Diese können weiterverkauft oder in andere Fahrzeuge eingebaut werden."]};
		case "6": {["Unternehmen","Unternehmen können von Bürgern bei der Unternehmensanmeldung beantragt werden.<br/>Hierbei kann ein Unternehmen ein eigenes Gelände, Fahrzeuge, Verkaufsstände etc. erhalten und verwalten.<br/> Des weiteren können Mitarbeiter andere Bürger einlernen und im Unternehmen anstellen."]};
		case "7": {["Feuerwerk","Bei den Galaxy Feuerwerks Waren kannst du verschiedenste Arten von Feuerwerk erwerben, welche du dann überall zünden kannst. Jedoch solltest du aufpassen, Batterien sind in Städten ohne Genehmigung illegal."]};
		
		//jobs
		case "100": {["Vorhandene Unternehmen", "Im folgenden werden alle aktive Unternehmen aufgelistet und genauer vorgestellt."]};
		default {["",""]};
	};
	
	//Set new text
	_title = _text select 0;
	ctrlSetText [10103, _title];

	_strucText ctrlSetStructuredText parseText (_text select 1);
	//Set text height
	_h = ctrlTextHeight _strucText; 
	_strucText ctrlSetPosition [0, 0, 0.45, _h]; 
	_strucText ctrlCommit 0;
};

//Get license text
if (_mode == 2) exitWith {
	_mainS = "";
	
	_civL = "getText(_x >> 'side') isEqualTo 'civ'" configClasses (missionConfigFile >> "Licenses");
	{
		_dName = localize getText(_x >> "displayName");
		_Price = getNumber(_x >> "price");
		_illN = getNumber(_x >> "illegal");
		_col = if (_illN == 0) then {"#FFFFFF"} else {"#FF3B44"};
		if (_Price != 1) then {
			_mainS = _mainS + format ["- <t color='%3'>%1</t> (%2$)<br/>",_dName,[_Price] call life_fnc_NumberText,_col];
		};
	} forEach _civL;
	_mainS;
};

//Get vehicle text
if (_mode == 3) exitWith {
	_mainS = "";
	_vehs = "true" configClasses (missionConfigFile >> "LifeCfgVehicles");
	
	_mainS = _mainS + "<t color='#00F030'>PKWs:</t><br/>";
	{
		_dispName = getText(configfile >> "CfgVehicles" >> (configName _x) >> "displayName");
		_price = getNumber(_x >> "price");
		_trunk = getNumber(_x >> "vItemSpace");
		_mainS = _mainS + format ["- %1 (%2 $|%3 Platz)<br/>",_dispName,[_price] call life_fnc_NumberText,_trunk];
	} forEach _vehs;
	
	_mainS;
};