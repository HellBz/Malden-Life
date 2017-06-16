
/* #Duheju
$[
	1.063,
	["licenseEditor",[[0,0,1,1],0.025,0.04,"GUI_GRID"],0,0,0],
	[2200,"back_main",[1,"",["0.409173 * safezoneW + safezoneX","0.346 * safezoneH + safezoneY","0.16147 * safezoneW","0.429 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[2100,"cb_AddOrRemove",[1,"",["0.414219 * safezoneW + safezoneX","0.709 * safezoneH + safezoneY","0.151378 * safezoneW","0.022 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1500,"lb_licenses",[1,"",["0.414219 * safezoneW + safezoneX","0.39 * safezoneH + safezoneY","0.151378 * safezoneW","0.308 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[2600,"btn_perform",[1,"",["0.414219 * safezoneW + safezoneX","0.742 * safezoneH + safezoneY","0.151378 * safezoneW","0.022 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1000,"title",[1,"Lizenzen hinzufÃ¼gen oder entfernen",["0.414219 * safezoneW + safezoneX","0.357 * safezoneH + safezoneY","0.151378 * safezoneW","0.022 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]]
]
*/

class life_license_editor {
    idd = 2900;
    name= "life_license_editor";
    movingEnable = 0;
    enableSimulation = 1;
    onLoad = "";

    class controlsBackground {
        class MainBackground: Life_RscText {
            idc = -1;
            colorBackground[] = {0,0,0,0.7};
			x = 0.409173 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.16147 * safezoneW;
			h = 0.429 * safezoneH;
        };

        class Life_RscTitleBackground: Life_RscText {
            idc = -1;
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
            text = "Lizenzen hinzufügen oder entfernen";
			x = 0.414219 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.151378 * safezoneW;
			h = 0.022 * safezoneH;
        };
    };

    class controls {
		class cb_AddOrRemove: Life_RscCombo
		{
			idc = 2100;
			x = 0.414219 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.151378 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class lb_licenses: Life_RscListbox
		{
			idc = 2101;
			sizeEx = 0.035;
			x = 0.414219 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.151378 * safezoneW;
			h = 0.308 * safezoneH;
		};
		class btn_perform: Life_RscButtonMenu
		{
			idc = -1;
			text = "Änderungen vornehmen";
			onButtonClick = "[1] spawn life_fnc_licenseEditor;";
			x = 0.414219 * safezoneW + safezoneX;
			y = 0.742 * safezoneH + safezoneY;
			w = 0.151378 * safezoneW;
			h = 0.022 * safezoneH;
		};
    };
};
