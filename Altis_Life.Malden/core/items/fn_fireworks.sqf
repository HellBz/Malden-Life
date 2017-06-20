/*

FIREWORKS SCRIPT by nomisum for Gruppe Adler
http://www.gruppe-adler.de

Input Array constists of:

POSITION (x,y,(z) - always zero above ground)

TYPE OF ROCKET - random, fizzer, normal, rain

COLOR OF ROCKET - random, green, red, blue, white

isRocket (bool)

CREDITS go to j1987, MrAuralization, soundscalpel.com and Quistard of freesound.org


[0,position player, "normal","red",false] call life_fnc_fireworks;
*/
private ["_firing_position","_type","_initial_velocity","_explosion_power","_glitter_count","_color","_explosion_fragments_array","_explosion_subfragments_array","_randomSleep","_randomSleepLong","_randomLaunch","_launchSound","_whistlingSound","_bangSound","_singleFizz","_groupFizz","_randomSleepShort","_isrocket","_mode"];
_mode = _this select 0;
if (isNil "_mode") exitWith {};

if (_mode == 0) then {
	_firing_position = _this select 1; // [x,y,z]
	_type = _this select 2;
	_color = _this select 3; // random, green, red, blue, white
	_isrocket = _this select 4;


	_explosion_power = (round (random 15)) + 30; // 30-70 seems reasonable
	_glitter_count = (round (random 15)) + 30; // 30 is poor, 50 is ok, 100 might be overkill
	_initial_velocity = [(random 10) - random[5,7,11],(random 10)- random[5,7,11], 300]; // firing not perfect but in a slight angle

	_colorArray = [[0.42,0.81,0.1],[0.8,0.1,0.35],[0.2,0.73,0.85],[1,1,1]];


	_explosion_fragments_array = [];
	_explosion_subfragments_array = [];


	_randomLaunch = (random 4.5) - 2.3;

	_randomSleep = (random 0.5) - 0.25;
	_randomSleepLong = (random 8) - 4;
	_randomSleepShort = (random 0.1) - 0.05;

	// take color parameter and convert into color code
	switch (_color) do {
	case "random": 	{_color = [random 1,random 1,random 1]};
	case "green": 	{_color = [0.42,0.81,0.1]};
	case "red": 	{_color = [0.8,0.1,0.35]};
	case "blue": 	{_color = [0.2,0.73,0.85]};
	case "white": 	{_color = [1,1,1]};
	default 		{_color = [1,1,1]};
	}; 

	//launch sounds
	_launchSound = [
	"launch1",
	"launch2",
	"launch3",
	"launch4",
	"launch5",
	"launch6",
	"launch7"
	] call BIS_fnc_selectRandom;

	//whistling
	_whistlingSound = [
	"whistling1",
	"whistling2",
	"whistling3",
	"whistling4"
	] call BIS_fnc_selectRandom;

	//bangs
	_bangSound = [
	"bang01",
	"bang02",
	"bang03",
	"bang04",
	"bang05",
	"bang06",
	"bang07",
	"bang08",
	"bang10",
	"bang11"
	] call BIS_fnc_selectRandom;

	//fizzes
	_singleFizz = [
		"fizz_single_type1_1",
		"fizz_single_type1_2",
		"fizz_single_type1_3",
		"fizz_single_type1_4",
		"fizz_single_type2_1",
		"fizz_single_type2_2",
		"fizz_single_type2_3",
		"fizz_single_type2_4"
	];

	//group fizzes
	_groupFizz = [
		"fizz_group1",
		"fizz_group2",
		"fizz_group3",
		"fizz_group4"
	];

	switch (_type) do {
		case "random": 	{
			_type = ["fizzer","normal","rain"] call BIS_fnc_selectRandom;
		};
		case "normal": 	{
			_type = "normal";
		};
		case "fizzer": 	{
			_type = "fizzer";
		};
		case "rain": 	{
			_type = "rain";
		};
		default {
			_type = ["fizzer","normal","rain"] call BIS_fnc_selectRandom;
		};
	}; 

	if (_type == "normal") then {
		_glitter_count = _glitter_count*2;
		_explosion_power = _explosion_power/2;
		
	};

	// prepare random explosion values for fragments
	for [{_i=0},{_i < _glitter_count},{_i=_i+1}] do { 
		_rand_expl_power1 = ((random _explosion_power)*2) - _explosion_power;
		_rand_expl_power2 = ((random _explosion_power)*2) - _explosion_power;
		_rand_expl_power3 = ((random _explosion_power)*2) - _explosion_power;
		_explosion_fragments_array = _explosion_fragments_array + 
		[[(_rand_expl_power1) -_rand_expl_power1/2,(_rand_expl_power2) -_rand_expl_power2/2, (_rand_expl_power3) -_rand_expl_power3/2]];

		if (_i < _glitter_count/3) then {
		_rand_subexpl_power1 = ((random _explosion_power)/2) - _explosion_power/2;
		_rand_subexpl_power2 = ((random _explosion_power)/2) - _explosion_power/2;
		_rand_subexpl_power3 = ((random _explosion_power)/2) - _explosion_power/2;
		_explosion_subfragments_array = _explosion_subfragments_array + 
		[[(_rand_subexpl_power1/4) -_rand_subexpl_power1/8,(_rand_subexpl_power2/4) -_rand_subexpl_power2/8, (_rand_subexpl_power3/4) -_rand_subexpl_power3/8]];
		};
	};


	if (_type == "rain") then {
		//_color = [1,0.9,0.6];

			for [{_i=0},{_i < _glitter_count},{_i=_i+1}] do { 
			_rand_expl_power1 = ((random _explosion_power)*2) - _explosion_power;
			_rand_expl_power2 = ((random _explosion_power)*2) - _explosion_power;
			_rand_expl_power3 = ((random _explosion_power)*2);
			_explosion_fragments_array = _explosion_fragments_array + 
			[[(_rand_expl_power1) -_rand_expl_power1/2,(_rand_expl_power2) -_rand_expl_power2/2, (_rand_expl_power3) -_rand_expl_power3/2]];

			if (_i < _glitter_count/3) then {
				_rand_subexpl_power1 = ((random _explosion_power)/2) - _explosion_power/2;
				_rand_subexpl_power2 = ((random _explosion_power)/2) - _explosion_power/2;
				_rand_subexpl_power3 = ((random _explosion_power)/2);
				_explosion_subfragments_array = _explosion_subfragments_array + 
				[[(_rand_subexpl_power1/4) -_rand_subexpl_power1/8,(_rand_subexpl_power2/4) -_rand_subexpl_power2/8, (_rand_subexpl_power3/4) -_rand_subexpl_power3/8]];
				};
			};

	};


	// send all precalculated stuff to clients
	[
		1,
		_firing_position,
		_type,
		_initial_velocity,
		_explosion_power,
		_glitter_count,
		_color,
		_explosion_fragments_array,
		_explosion_subfragments_array,
		_randomSleep,
		_randomSleepLong,
		_randomLaunch,
		_launchSound,
		_whistlingSound,
		_bangSound,
		_singleFizz,
		_groupFizz,
		_randomSleepShort,
		_isrocket
	] remoteexec ["life_fnc_fireworks",-2,false];
};

if (_mode == 1) then {
	if (isDedicated) exitWith {};
	if (!alive player || player distance (_this select 1) > 1500) exitWith {};

	_firing_position = _this select 1; // where rocket starts
	_type1 = _this select 2;
	_initial_velocity = _this select 3; // rocket initial speed
	_explosion_power = _this select 4; // how big the explosion radius/force
	_glitter_count = _this select 5; // how many fragments 
	//_color = [1,1,1];
	_color = _this select 6; // color
	_explosion_fragments_array = (_this select 7);
	_explosion_subfragments_array = (_this select 8);

	_randomSleep = _this select 9;
	_randomSleepLong = _this select 10;
	_randomLaunch = _this select 11;
	_launchSound = _this select 12;
	_whistlingSound = _this select 13;
	_bangSound = _this select 14;
	_singleFizz = _this select 15;
	_groupFizz = _this select 16;
	_randomSleepShort = _this select 17;
	_isrocket = _this select 18;

	if (_isrocket) then {
		_body = "Land_ButaneCanister_F" createVehicleLocal [0,0,0];
		_pole = "Metal_Pole_F" createVehicleLocal [0,0,0];
		_body allowDammage false;
		_pole allowDammage false;
		
		_body attachTo [_pole, [0, 0.96,0.9]];
		_pole setPos [_firing_position select 0,(_firing_position select 1) + 3,_firing_position select 2];
		_firing_position = _pole modelToWorld [0, 0.96,0.9];
		sleep (random 5);
		deletevehicle _body;
		deletevehicle _pole;
	};

	_nul1 ="CMflare_Chaff_Ammo" createVehicleLocal [_firing_position select 0,_firing_position select 1, 0]; 
	_nul1 setVelocity _initial_velocity; 


	_light1 = "#lightpoint" createVehicleLocal [0,0,0];
	_light1 setLightBrightness 0.1;
	_light1 setLightColor [1,0.3,0];
	_light1 setLightUseFlare true;
	_light1 setLightFlareMaxDistance 1000;
	_light1 setLightFlareSize 5;


	_light2 = "#lightpoint" createVehicleLocal [0,0,0];
	_light2 setLightBrightness 0.08;
	_light2 setLightColor [1,0.8,0];
	_light2 setLightUseFlare true;
	_light2 setLightFlareMaxDistance 1000;
	_light2 setLightFlareSize 4;
	sleep 0.01;
	_light1 lightAttachObject  [_nul1,[0,0,0]];
	_light2 lightAttachObject  [_nul1,[0,0,0]];


	_nul1 say3D _launchsound;
	sleep 1;

	if (_type1 == "fizzer") then {
		_nul1 say3D _whistlingSound;
	};

	sleep (2 + _randomSleepShort);

	deleteVehicle _light1;
	deleteVehicle _light2;

	_nul2 ="FxExploArmor3" createVehicleLocal (getPos _nul1);
	//hideObject _nul2;
	sleep 0.10;
	_nul2 say3D _bangSound;



	for [{_i=0},{_i < count _explosion_fragments_array},{_i=_i+1}] do 
	{

		[_nul1,_type1,_explosion_fragments_array,_explosion_subfragments_array,_color,_glitter_count,_i,_randomSleep,_randomSleepLong,_singleFizz,_groupFizz,_bangSound] spawn {
			_rocket = _this select 0;
			_type2 = _this select 1;
			_fragments = _this select 2;
			_subfragments = _this select 3;
			_color2 = _this select 4;
			_glitter_count2 = _this select 5;
			_selector = _this select 6;
			_randomSleep2 = _this select 7;
			_randomSleepLong2 = _this select 8;
			_singleFizz1 = _this select 9;
			_groupFizz1 = _this select 10;
			_bangSound1 = _this select 11;


			_nul2 ="CMflare_Chaff_Ammo" createVehicleLocal (getPos _rocket); 
			_smoke ="SmokeLauncherAmmo" createVehicleLocal (getPos _rocket);	
			
			_nul2 setVelocity (_fragments select _selector);

			_light2 = "#lightpoint" createVehicleLocal [0,0,0];
			_light2 setLightBrightness 1.0;
			if (_type2 == "normal" || _type2 == "fizzer") then {
				_light2 setLightAmbient [1,0.9,0.6];
			} else {
				_light2 setLightAmbient _color2;
			};
			
			_light2 setLightColor _color2;
			_light2 lightAttachObject  [_nul2,[0,0,0]];

			_light2 setLightUseFlare true;
			_light2 setLightFlareMaxDistance 1000;
			_light2 setLightFlareSize 3;
			
			//_light2 attachTo  [_nul2,[0,0,0]];

			if (_type2 == "normal") then {
				sleep (3 + (random 1));
				deleteVehicle _light2;
			};
			
			if (_type2 == "fizzer")  then {
				sleep 1.0;
				deleteVehicle _light2;
				
				_nul2 say3D _bangSound1;
			
				for [{_j=0},{_j < (count _subfragments)},{_j=_j+1}] do 
				{
				
					[_nul2,_type2,_subfragments,_color2,_j,_randomSleep2,_randomSleepLong2,_singleFizz1,_groupFizz1,_bangSound1] spawn {
						_rocket2 = _this select 0;
						_type3 = _this select 1;
						_subfragments2 = _this select 2;
						_color3 = _this select 3;
						_selector2 = _this select 4;
						_randomSleep3 = _this select 5;
						_randomSleepLong3 = _this select 6;
						_singleFizz2 = _this select 7;
						_groupFizz2 = _this select 8;
						_bangSound2 = _this select 9;

						
						_posx = (getPos _rocket2) select 0;
						_posy = (getPos _rocket2) select 1;
						_posz = (getPos _rocket2) select 2;

						
						deleteVehicle _rocket2;
						
						

						
						_nul3 ="F_20mm_White" createVehicleLocal [_posx + ((random 20)-10),_posy+ ((random 20)-10),_posz+ ((random 20)-10)];


						_nul3 setVelocity (_subfragments2 select _selector2);



						_light3 = "#lightpoint" createVehicleLocal [0,0,0];
						_light3 setLightBrightness 2;
							if (_type3 == "normal" || _type3 == "fizzer") then {
							_light3 setLightAmbient [1,0.9,0.6];
							} else {
							_light3 setLightAmbient _color3;
						};
						_light3 setLightColor _color3;
						_light3 lightAttachObject  [_nul3,[0,0,0]];

						_light3 setLightUseFlare true;
						_light3 setLightFlareMaxDistance 1000;
						_light3 setLightFlareSize 1;

						sleep (random 1);
						_nul3 say3D _singleFizz2;

						sleep (2 - (random 1.5));
						

						

						deleteVehicle _light3;
						deleteVehicle _nul3;
						
					
					};
				};
			};

			if (_type2 == "rain")  then {
				sleep 1.0;
				
				
				_nul2 say3D _bangSound1;
			
				[_nul2,_type2,_fragments,_color2,_selector,_randomSleep2,_randomSleepLong2,_singleFizz1,_groupFizz1,_bangSound1] spawn {
						_rocket2 = _this select 0;
						_type2 = _this select 1;
						_subfragments2 = _this select 2;
						_color3 = _this select 3;
						_selector2 = _this select 4;
						_randomSleep3 = _this select 5;
						_randomSleepLong3 = _this select 6;
						_singleFizz2 = _this select 7;
						_groupFizz2 = _this select 8;
						_bangSound2 = _this select 9;

						
						_posx = (getPos _rocket2) select 0;
						_posy = (getPos _rocket2) select 1;
						_posz = (getPos _rocket2) select 2;

						
						deleteVehicle _rocket2;
						
						

						_nul3 ="FxWindPollen1" createVehicleLocal [getPos _rocket2 select 0,getPos _rocket2 select 1,getPos _rocket2 select 2];
						
						_nul3 setVelocity (_subfragments2 select _selector2);



						_light3 = "#lightpoint" createVehicleLocal [0,0,0];
						_light3 setLightBrightness 2;
						if (_type2 == "normal" || _type2 == "fizzer") then {
							_light3 setLightAmbient [1,0.9,0.6];
							} else {
							_light3 setLightAmbient _color3;
						};
						_light3 setLightColor _color3;
						_light3 lightAttachObject  [_nul3,[0,0,0]];

						_light3 setLightUseFlare true;
						_light3 setLightFlareMaxDistance 1000;
						_light3 setLightFlareSize 1;

						sleep (random 1);
						_nul3 say3D _singleFizz2;

						sleep (2 - (random 1.5));
						

						

						deleteVehicle _light3;
						deleteVehicle _nul3;
						
					
					};
					sleep 1;
					deleteVehicle _light2;
				
			};



		};
	};

	sleep 1;
	_nul2 say3D _groupFizz;
	sleep 2;
	deleteVehicle _nul2;
};