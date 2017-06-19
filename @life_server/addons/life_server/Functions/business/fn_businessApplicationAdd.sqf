/*
	Filename: fn_busineddApplicationAdd.sqf
	Author: Kellojo
	Description: Adds a business application to the database
*/

_input = _this select 0;
if (isNil "_input" || _input isEqualTo []) exitWith {};

_owner = _this select 0;
_title = _this select 1;
_application = _this select 2;
_size = _this select 3;
_error = false;

if (isNil "_owner" || isNil "_title" || isNil "_application" || isNil "_size") exitWith {_error = true};
if (_owner == "" || _title == "" || _application  == ""|| _size == "") then {_error = true};


private _query = format ["INSERT INTO businessapplications (owner, applicationTitle, application, size) VALUES (owner, applicationTitle, application, size);", getPlayerUID _owner, _title, _application, _size];
private _queryResult = [_query,2,true] call DB_fnc_asyncCall;

[] remoteExec ["", _owner, false];





