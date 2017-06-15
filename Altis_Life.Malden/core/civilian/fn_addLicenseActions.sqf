/*
    File: fn_addLicenseActions.sqf
    Author: Kellojo

    Description:
    Adds actions to the license npcs.
*/

if (side player != civilian) exitWith {};
_licenseDealers = [license_shop_1, license_shop_2];
{
	_x allowDamage false;
	_x enableSimulation false;
	_x setVariable ["realname",localize "STR_MISC_LicenseShop"];
	_x addAction[format ["<t color='#B1FF5E'>" + "%1 ($%2)",localize (getText(missionConfigFile >> "Licenses" >> "driver" >> "displayName")), [(getNumber(missionConfigFile >> "Licenses" >> "driver" >> "price"))] call life_fnc_numberText],life_fnc_buyLicense,"driver",0,false,false,"",' !license_civ_driver && playerSide isEqualTo civilian ']; 
	_x addAction[format ["<t color='#B1FF5E'>" + "%1 ($%2)",localize (getText(missionConfigFile >> "Licenses" >> "boat" >> "displayName")), [(getNumber(missionConfigFile >> "Licenses" >> "boat" >> "price"))] call life_fnc_numberText],life_fnc_buyLicense,"boat",0,false,false,"",' !license_civ_boat && playerSide isEqualTo civilian ']; 
	_x addAction[format ["<t color='#B1FF5E'>" + "%1 ($%2)",localize (getText(missionConfigFile >> "Licenses" >> "pilot" >> "displayName")), [(getNumber(missionConfigFile >> "Licenses" >> "pilot" >> "price"))] call life_fnc_numberText],life_fnc_buyLicense,"pilot",0,false,false,"",' !license_civ_pilot && playerSide isEqualTo civilian ']; 
	_x addAction[format ["<t color='#B1FF5E'>" + "%1 ($%2)",localize (getText(missionConfigFile >> "Licenses" >> "trucking" >> "displayName")), [(getNumber(missionConfigFile >> "Licenses" >> "trucking" >> "price"))] call life_fnc_numberText],life_fnc_buyLicense,"trucking",0,false,false,"",' !license_civ_trucking && playerSide isEqualTo civilian ']; 
	_x addAction[format ["<t color='#B1FF5E'>" + "%1 ($%2)",localize (getText(missionConfigFile >> "Licenses" >> "home" >> "displayName")), [(getNumber(missionConfigFile >> "Licenses" >> "home" >> "price"))] call life_fnc_numberText],life_fnc_buyLicense,"home",0,false,false,"",' !license_civ_home && playerSide isEqualTo civilian ']; 

	_x addAction[format ["<t color='#FF5900'>" + "%1 ($%2)",localize (getText(missionConfigFile >> "Licenses" >> "avangenBeer" >> "displayName")), [(getNumber(missionConfigFile >> "Licenses" >> "avangenBeer" >> "price"))] call life_fnc_numberText],life_fnc_buyLicense,"avangenBeer",0,false,false,"",' !license_civ_avangenBeer && playerSide isEqualTo civilian '];
	_x addAction[format ["<t color='#FF5900'>" + "%1 ($%2)",localize (getText(missionConfigFile >> "Licenses" >> "beer" >> "displayName")), [(getNumber(missionConfigFile >> "Licenses" >> "beer" >> "price"))] call life_fnc_numberText],life_fnc_buyLicense,"beer",0,false,false,"",' !license_civ_beer && playerSide isEqualTo civilian '];
	_x addAction[format ["<t color='#FF5900'>" + "%1 ($%2)",localize (getText(missionConfigFile >> "Licenses" >> "oil" >> "displayName")), [(getNumber(missionConfigFile >> "Licenses" >> "oil" >> "price"))] call life_fnc_numberText],life_fnc_buyLicense,"oil",0,false,false,"",' !license_civ_oil && playerSide isEqualTo civilian '];
	_x addAction[format ["<t color='#FF5900'>" + "%1 ($%2)",localize (getText(missionConfigFile >> "Licenses" >> "iron" >> "displayName")), [(getNumber(missionConfigFile >> "Licenses" >> "iron" >> "price"))] call life_fnc_numberText],life_fnc_buyLicense,"iron",0,false,false,"",' !license_civ_iron && playerSide isEqualTo civilian '];
	_x addAction[format ["<t color='#FF5900'>" + "%1 ($%2)",localize (getText(missionConfigFile >> "Licenses" >> "copper" >> "displayName")), [(getNumber(missionConfigFile >> "Licenses" >> "copper" >> "price"))] call life_fnc_numberText],life_fnc_buyLicense,"copper",0,false,false,"",' !license_civ_copper && playerSide isEqualTo civilian '];
	_x addAction[format ["<t color='#FF5900'>" + "%1 ($%2)",localize (getText(missionConfigFile >> "Licenses" >> "silver" >> "displayName")), [(getNumber(missionConfigFile >> "Licenses" >> "silver" >> "price"))] call life_fnc_numberText],life_fnc_buyLicense,"silver",0,false,false,"",' !license_civ_silver && playerSide isEqualTo civilian '];
	_x addAction[format ["<t color='#FF5900'>" + "%1 ($%2)",localize (getText(missionConfigFile >> "Licenses" >> "gold" >> "displayName")), [(getNumber(missionConfigFile >> "Licenses" >> "gold" >> "price"))] call life_fnc_numberText],life_fnc_buyLicense,"gold",0,false,false,"",' !license_civ_gold && playerSide isEqualTo civilian '];
	_x addAction[format ["<t color='#FF5900'>" + "%1 ($%2)",localize (getText(missionConfigFile >> "Licenses" >> "cement" >> "displayName")), [(getNumber(missionConfigFile >> "Licenses" >> "cement" >> "price"))] call life_fnc_numberText],life_fnc_buyLicense,"cement",0,false,false,"",' !license_civ_cement && playerSide isEqualTo civilian '];
} forEach _licenseDealers;
