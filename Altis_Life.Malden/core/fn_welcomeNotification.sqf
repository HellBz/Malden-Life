/*
    File: fn_welcomeNotification.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Called upon first spawn selection and welcomes our player.
*/
disableSerialization;
[
	"",
	0,
	0.2,
	10,
	0,
	0,
	8
] spawn BIS_fnc_dynamicText;

createDialog "RscDisplayWelcome";

_display = findDisplay 999999;
_text1 = _display displayCtrl 1100;
_buttonSpoiler = _display displayCtrl 2400;
_textSpoiler = _display displayCtrl 1101;
_text2 = _display displayCtrl 1102;

_message = "";
_message = _message + "<t align='center' size='8' shadow='0'><img image='textures\armalife.jpg' /></t><br /><br />";
_message = _message + "<t align='center' color='#F5CF27' size='2.5'>Wilkommen auf dem ETG Malden Life Server</t><br/>";
_message = _message + "<t align='center' color='#F5CF27' size='2.0'>Wir bieten euch ein intensives Rollenspielerlebnis.</t><br/><br/><br/><br/>";
_message = _message + "<t align='center'>TeamSpeak 3: 62.104.20.78:10060<br/>";
_message = _message + "<t align='center'>Restarts: 0:00 Uhr, 6:00 Uhr, 12:00 Uhr, 18:00 Uhr<br/><br/><br/>";

_message = _message + "<t align='center' color='#F5CF27' size='2.5'>Unternehmen</t><br/>";
_message = _message + "<t align='center'>Unser Server bietet euch die Möglichkeit Unternehmen zu gründen.<br/>";
_message = _message + "Unternehmen können auf ihre eigene Art und Weise Geld verdienen und Produkte verkaufen.";
_message = _message + "Ein Unternehmen kann eine eigenes Grundstück, mit Shops, Spawns, Garagen und Lagerraum erhalten.";
_message = _message + "Des weitern ist es den Spielern erlaubt und ermöglicht Mitspieler als Mitarbeiter einzustellen und ihnen Zugriff auf diese Ressourcen zu geben.<br/>";
_message = _message + "Bei Interesse sucht die Unternehmensanmeldung auf und schreibt dort eine Bewerbung.</t><br/><br/>";


//Fill only the first text
_text1 ctrlSetStructuredText (parseText _message);

//Resize StructuredText component to display the scrollbar if needed
_positionText1 = ctrlPosition _text1;
_yText1 = _positionText1 select 1;
_hText1 = ctrlTextHeight _text1;
_text1 ctrlSetPosition [_positionText1 select 0, _yText1, _positionText1 select 2, _hText1];
_text1 ctrlCommit 0;
//Hide second text, spoiler text and button
_buttonSpoiler ctrlSetFade 1;
_buttonSpoiler ctrlCommit 0;
_buttonSpoiler ctrlEnable false;
_textSpoiler ctrlSetFade 1;
_textSpoiler ctrlCommit 0;
_text2 ctrlSetFade 1;
_text2 ctrlCommit 0;
