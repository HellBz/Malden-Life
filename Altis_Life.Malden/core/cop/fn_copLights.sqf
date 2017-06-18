/*
    File: fn_copLights.sqf
    Author: mindstorm, modified by Adanteh, edited by [ETG]Spikey
    Link: http://forums.bistudio.com/showthread.php?157474-Offroad-Police-sirens-lights-and-underglow
    
    Description:
    Adds the light effect to cop vehicles, specifically the offroad.
*/
Private ["_vehicle","_lightRed","_lightBlue","_lightWhite","_lightYellow","_lightleft","_lightright","_leftRed","_leftheadlight","_brightness","_lightFleft","_lightFright"];
_vehicle = param [0,objNull,[objNull]];
    
if(isNil "_vehicle" OR isNull _vehicle OR !(_vehicle getVariable "lights")) exitWith {};
_lightRed = [0.1, 0.1, 20];
_lightBlue = [0.1, 0.1, 20];
_lightWhite = [255,255,255];
_lightYellow = [255,247,0.1];

_lightleft = "#lightpoint" createVehicle getpos _vehicle;   
sleep 0.3;
_lightleft setLightColor _lightRed; 
_lightleft setLightBrightness 0.2;  
_lightleft setLightAmbient [0.1,0.1,1];
///////////FrontBlitzer/////////////////////#Spikey
If((typeOf _vehicle) in ["C_Offroad_01_F"]) then {
_lightFleft = "#lightpoint" createVehicle getpos _vehicle; 
 _lightFright = "#lightpoint" createVehicle getpos _vehicle; 
 sleep 0.3;
_lightFleft setLightColor _lightRed; 
_lightFleft setLightBrightness 0.2;  
_lightFleft setLightAmbient [0.1,0.1,1];
_lightFleft setLightAttenuation [0.181, 0, 1000, 130]; 
_lightFleft setLightIntensity 10;
_lightFleft setLightFlareSize 0.25;
_lightFleft setLightFlareMaxDistance 170;
_lightFleft setLightUseFlare true;
_lightFleft setLightDayLight true;

_lightFright setLightColor _lightBlue; 
_lightFright setLightBrightness 0.2;  
_lightFright setLightAmbient [0.1,0.1,1];
_lightFright setLightAttenuation [0.181, 0, 1000, 130]; 
_lightFright setLightIntensity 10;
_lightFright setLightFlareSize 0.25;
_lightFright setLightFlareMaxDistance 170;
_lightFright setLightUseFlare true;
_lightFright setLightDayLight true;
};

///////////SCHEINWERFER/////////////////////#Spikey
/*_leftheadlight = createVehicle ["#lightpoint", getPos _vehicle, [], 0, "CAN_COLLIDE"];
sleep 0.2;
_leftheadlight setLightColor _lightWhite;
_leftheadlight setLightBrightness 0.1; 
_leftheadlight setLightAmbient [0.1,0.1,1];
_leftheadlight setLightAttenuation [0.01, 0, 2000, 130]; 
_leftheadlight setLightIntensity 0.01;
_leftheadlight setLightFlareSize 0.4;
_leftheadlight setLightFlareMaxDistance 150;
_leftheadlight setLightUseFlare true;
_leftheadlight setLightDayLight true;


_rightheadlight = createVehicle ["#lightpoint", getPos _vehicle, [], 0, "CAN_COLLIDE"];
sleep 0.2;
_rightheadlight setLightColor _lightWhite;
_rightheadlight setLightBrightness 0.1; 
_rightheadlight setLightAmbient [0.1,0.1,1];
_rightheadlight setLightAttenuation [0.01, 0, 2000, 130]; 
_rightheadlight setLightIntensity 0.01;
_rightheadlight setLightFlareSize 0.4;
_rightheadlight setLightFlareMaxDistance 150;
_rightheadlight setLightUseFlare true;
_rightheadlight setLightDayLight true;
*/
switch (typeOf _vehicle) do
{

    case "C_Hatchback_01_F": { 
        _lightleft lightAttachObject [_vehicle, [-0.6, 2, -0.95]]; 
        //_leftheadlight lightAttachObject [_vehicle ,[0.62, 1.87, -0.52]];
    };
    case "C_Hatchback_01_sport_F": { 
        _lightleft lightAttachObject [_vehicle, [-0.6, 2, -0.95]];
        //_leftheadlight lightAttachObject [_vehicle ,[0.62, 1.87, -0.52]];
    };
    case "C_Offroad_01_F": { 
        _lightleft lightAttachObject [_vehicle, [-0.37, 0.0, 0.56]]; 
        //_leftheadlight lightAttachObject [_vehicle ,[-0.68, 2.3, -0.37]];
        _lightFleft lightAttachObject [_vehicle, [0.22, 2.5, -0.53]];
    };

    case "C_SUV_01_F": { 
        _lightleft lightAttachObject [_vehicle, [-0.4, 2.3, -0.55]];
        //_leftheadlight lightAttachObject [_vehicle ,[-0.66,2.13,-0.48]];
    };
    case "B_Heli_Light_01_F": { 
        _lightleft lightAttachObject [_vehicle, [-0.37, 0.0, 0.56]]; 
    };
    case "B_Heli_Transport_01_F": { 
        _lightleft lightAttachObject [_vehicle, [-0.5, 0.0, 0.96]]; 
    };
    case "I_Heli_light_03_unarmed_F": { 
        _lightleft lightAttachObject [_vehicle, [-0.37, 0.0, 0.56]];
    };
    case "I_MRAP_03_hmg_F": { 
        _lightleft lightAttachObject [_vehicle, [-0.37, 0.0, 0.56]];
    };
    case "I_MRAP_03_F": { 
        _lightleft lightAttachObject [_vehicle, [-0.37, 0.0, 0.56]]; 
    };
    case "B_APC_Wheeled_01_cannon_F": { 
        _lightleft lightAttachObject [_vehicle, [-1, -2.8, 0.55]]; 
    };
    case "B_MRAP_01_hmg_F": { 
        _lightleft lightAttachObject [_vehicle, [-1, -2.8, 0.55]];
    };
    case "B_MRAP_01_F": { 
        _lightleft lightAttachObject [_vehicle, [-1, -2.8, 0.55]];
    }; 
    case "C_Offroad_01_repair_F" : {
        _lightleft lightAttachObject [_vehicle, [-0.37, 0.0, 0.56]];
        _lightleft setLightColor _lightYellow;
        _lightleft setLightAmbient [1,0.8,0.1];
    };
    case "C_Offroad_02_unarmed_F" : {
        _lightleft lightAttachObject [_vehicle,[-0.55,2.0,-0.6]];
    };
    
};

_lightleft setLightAttenuation [0.181, 0, 1000, 130]; 
_lightleft setLightIntensity 10;
_lightleft setLightFlareSize 0.8;
_lightleft setLightFlareMaxDistance 180;
_lightleft setLightUseFlare true;

_lightright = "#lightpoint" createVehicle getpos _vehicle;   
sleep 0.3;
_lightright setLightColor _lightBlue; 
_lightright setLightBrightness 0.2;  
_lightright setLightAmbient [0.1,0.1,1]; 

switch (typeOf _vehicle) do
{
    case "C_Hatchback_01_F": { 
        _lightright lightAttachObject [_vehicle,[0.6, 2, -0.95]];
        //_rightheadlight lightAttachObject [_vehicle, [-0.62, 1.87, -0.52]];       
    };
    case "C_Hatchback_01_sport_F": { 
        _lightright lightAttachObject [_vehicle,[0.6, 2, -0.95]];
        //_rightheadlight lightAttachObject [_vehicle, [-0.62, 1.87, -0.52]];       
    };
    case "C_Offroad_01_F": { 
        _lightright lightAttachObject [_vehicle,[0.37, 0.0, 0.56]]; 
        //_rightheadlight lightAttachObject [_vehicle, [0.62, 2.3, -0.37]];
        _lightFright lightAttachObject [_vehicle, [-0.22, 2.5, -0.53]];
    };
    case "C_SUV_01_F": { 
        _lightright lightAttachObject [_vehicle,[0.4, 2.3, -0.52]]; 
        //_rightheadlight lightAttachObject [_vehicle, [0.63,2.1,-0.48]];
    };
    case "B_Heli_Light_01_F": { 
        _lightright lightAttachObject [_vehicle,[0.37, 0.0, 0.56]]; 
    };
    case "B_Heli_Transport_01_F": { 
        _lightright lightAttachObject [_vehicle,[0.5, 0.0, 0.96]]; 
    };
    case "I_Heli_light_03_unarmed_F": { 
        _lightright lightAttachObject [_vehicle,[0.37, 0.0, 0.56]]; 
    };
    case "I_MRAP_03_hmg_F": { 
        _lightright lightAttachObject [_vehicle,[0.37, 0.0, 0.56]]; 
    };
    case "I_MRAP_03_F": { 
        _lightright lightAttachObject [_vehicle,[0.37, 0.0, 0.56]]; 
    };
    case "B_APC_Wheeled_01_cannon_F": { 
        _lightright lightAttachObject [_vehicle,[1, -2.8, 0.55]]; 
    };
    case "B_MRAP_01_hmg_F": { 
        _lightright lightAttachObject [_vehicle,[1, -2.8, 0.55]]; 
    };
    case "B_MRAP_01_F": { 
        _lightright lightAttachObject [_vehicle,[1, -2.8, 0.55]]; 
    }; 
    case "C_Offroad_01_repair_F" : {
        _lightright lightAttachObject [_vehicle,[0.37, 0.0, 0.56]];
        _lightright setLightColor _lightYellow;
        _lightright setLightAmbient [1,0.8,0.1];
    };
    case "C_Offroad_02_unarmed_F" : {
        _lightright lightAttachObject [_vehicle,[0.48,2.0,-0.6]];
    };

};
  
_lightright setLightAttenuation [0.181, 0, 1000, 130]; 
_lightright setLightIntensity 10;
_lightright setLightFlareSize 0.38;
_lightright setLightFlareMaxDistance 180;
_lightright setLightUseFlare true;

//ARE YOU ALL HAPPY?!?!?!?!?!?!?!?!?%#?@WGD?TGD?BN?ZDHBFD?GA
_lightleft setLightDayLight true;
_lightright setLightDayLight true;



//Daytime Nighttime Lights///#Spikey
if (typeOf _vehicle == "C_Offroad_01_repair_F") then {
    _brightness = Switch(true) do {
        case (daytime >=7 && daytime <=8) : {3};
        case (daytime >=8 && daytime <=10) : {7};
        case (daytime >=10 && daytime <=14) : {13};
        case (daytime >=14 && daytime <=16) : {11};
        case (daytime >=16 && daytime <=18) : {9};
        case (daytime >=18 && daytime <=20) : {1};
        case (daytime >=20 && daytime <=21) : {0.95};
        case (daytime >=21 && daytime <=22) : {0.75};
        case (daytime >=22 && daytime <=24) : {0.7};
        case (daytime >=0 && daytime <=6) : {0.95};
        case (daytime >=6 && daytime <=7) : {1};
        Default {10};
    };
}else{
    _brightness = Switch(true) do {
        case (daytime >=7 && daytime <=8) : {10};
        case (daytime >=8 && daytime <=10) : {18};
        case (daytime >=10 && daytime <=16) : {52};
        case (daytime >=16 && daytime <=17) : {25};
        case (daytime >=17 && daytime <=18) : {20};
        case (daytime >=18 && daytime <=20) : {3};
        case (daytime >=20 && daytime <=21) : {2.85};
        case (daytime >=21 && daytime <=24) : {2.75};
        case (daytime >=0 && daytime <=6) : {3};
        case (daytime >=6 && daytime <=7) : {4};
        Default {10};
    };
};

_leftRed = true;  
while{ (alive _vehicle)} do  {  
    if(!(_vehicle getVariable "lights")) exitWith {};
    if (round diag_fps < 10) exitWith {};
    if(_leftRed) then  
    {  
        _leftRed = false; 
        switch (typeOf _vehicle) do
            {
                Case "C_Offroad_01_F" : {
                    if(isNil "_lightFleft" || isNil "_lightFright") then {
                        _lightright setLightBrightness 0;
                        _lightleft setLightBrightness _brightness;
                        uiSleep 0.4;
                        _lightleft setLightBrightness 0;
                    }else{
                        _lightFright setLightBrightness 0;
                        _lightFleft setLightBrightness _brightness;
                        _lightright setLightBrightness 0;
                        _lightleft setLightBrightness _brightness;
                        uiSleep 0.4;
                        _lightFleft setLightBrightness 0;
                        _lightleft setLightBrightness 0;
                    };
                };
                Default {
                    _lightright setLightBrightness 0;
                    _lightleft setLightBrightness _brightness;
                    uiSleep 0.4;
                    _lightleft setLightBrightness 0;
                };
            };
            //_leftheadlight setLightBrightness 0.05;
            //_rightheadlight setLightBrightness 0.0;
            uiSleep (_this select 1);
    }  
    else  
    {  
        _leftRed = true; 
        switch (typeOf _vehicle) do
            {
                Case "C_Offroad_01_F" : {
                    if(isNil "_lightFleft" || isNil "_lightFright") then {
                        _lightleft setLightBrightness 0;
                        _lightright setLightBrightness _brightness;
                        uiSleep 0.4;
                        _lightright setLightBrightness 0;
                    }else{
                        _lightFleft setLightBrightness 0;
                        _lightFright setLightBrightness _brightness;
                        _lightleft setLightBrightness 0;
                        _lightright setLightBrightness _brightness;
                        uiSleep 0.4;
                        _lightFright setLightBrightness 0;
                        _lightright setLightBrightness 0;
                    };
                };
                Default {
                    _lightleft setLightBrightness 0;
                    _lightright setLightBrightness _brightness;
                    uiSleep 0.4;
                    _lightright setLightBrightness 0;
                };
            };
            //_leftheadlight setLightBrightness 0.0;
            //_rightheadlight setLightBrightness 0.05;
            uiSleep (_this select 1); 
            
    };  
    uiSleep (_this select 1);
};  

switch (typeOf _vehicle) do
    {
        Case "C_Offroad_01_F" : {deleteVehicle _lightFright;deleteVehicle _lightFleft;deleteVehicle _lightleft;deleteVehicle _lightright;};
        Default {deleteVehicle _lightleft;deleteVehicle _lightright;};
    };

//deleteVehicle _leftHeadlight;
//deleteVehicle _rightHeadLight;

