/*
	Filename: fn_businessApplicationAdd.sqf
	Author: Kellojo
	Description: Adds a business application to the database
*/

_owner = _this select 0;
_name = _this select 1;
_application = _this select 2;
_size = _this select 3;
_error = false;

if (isNil "_owner" || isNil "_name" || isNil "_application" || isNil "_size") then {_error = true};
if (_owner == objNull || _name == "" || _application  == ""|| _size < 1) then {_error = true};


private _query = format ["INSERT INTO businessapplications (owner, name, application, size) VALUES (%1, '%2', '%3', %4);", getPlayerUID _owner, _name, _application, _size];
private _queryResult = [_query,2,true] call DB_fnc_asyncCall;

[1] remoteExec ["life_fnc_businessApplication", _owner, false];