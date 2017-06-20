/* #Diviju
$[
	1.063,
	["businessRegistration",[[0,0,1,1],0.025,0.04,"GUI_GRID"],0,0,0],
	[1000,"txt_head_applicant",[1,"Bewerber:",["0.303209 * safezoneW + safezoneX","0.39 * safezoneH + safezoneY","0.151378 * safezoneW","0.022 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1401,"edit_application",[1,"",["0.464679 * safezoneW + safezoneX","0.489 * safezoneH + safezoneY","0.232112 * safezoneW","0.132 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1002,"",[1,"Bewerbung:",["0.303209 * safezoneW + safezoneX","0.489 * safezoneH + safezoneY","0.151378 * safezoneW","0.022 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1402,"edit_businessname",[1,"",["0.464679 * safezoneW + safezoneX","0.423 * safezoneH + safezoneY","0.232112 * safezoneW","0.022 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1003,"",[1,"Unternehmensname:",["0.303209 * safezoneW + safezoneX","0.423 * safezoneH + safezoneY","0.151378 * safezoneW","0.022 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1001,"",[1,"Größe des Unternehmens (Spieler):",["0.303209 * safezoneW + safezoneX","0.456 * safezoneH + safezoneY","0.151378 * safezoneW","0.022 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1004,"txt_playername",[1,"",["0.464679 * safezoneW + safezoneX","0.39 * safezoneH + safezoneY","0.232112 * safezoneW","0.022 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1400,"edit_size",[1,"",["0.464679 * safezoneW + safezoneX","0.456 * safezoneH + safezoneY","0.232112 * safezoneW","0.022 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[2600,"btn_send",[1,"Abschicken",["0.303209 * safezoneW + safezoneX","0.632 * safezoneH + safezoneY","0.151378 * safezoneW","0.022 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[2601,"btn_abort",[1,"Verwerfen",["0.464679 * safezoneW + safezoneX","0.632 * safezoneH + safezoneY","0.232112 * safezoneW","0.022 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1005,"",[1,"Unternehmen anmelden",["0.298163 * safezoneW + safezoneX","0.357 * safezoneH + safezoneY","0.403674 * safezoneW","0.022 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[2200,"back_main",[1,"",["0.298163 * safezoneW + safezoneX","0.379 * safezoneH + safezoneY","0.403674 * safezoneW","0.286 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]]
]
*/


class Life_business_Application {
    idd = 3000;
    name= "Life_business_Application";
    movingEnable = 0;
    enableSimulation = 1;
    onLoad = "[2] spawn life_fnc_BusinessApplication;";

    class controlsBackground {
        class MainBackground: Life_RscText {
            colorBackground[] = {0, 0, 0, 0.7};
            idc = -1;
            x = 0.298163 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.403674 * safezoneW;
			h = 0.286 * safezoneH;
        };
		class Title: Life_RscText
		{
			idc = -1;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			text = "Unternehmen anmelden"; //--- ToDo: Localize;
			x = 0.298163 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.403674 * safezoneW;
			h = 0.022 * safezoneH;
		};
    };

    class controls {
		class txt_head_applicant: Life_RscText
		{
			idc = 1000;
			text = "Bewerber:"; //--- ToDo: Localize;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			x = 0.303209 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.151378 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class edit_application: Life_RscEdit
		{
			idc = 1401;
			text = "";
			x = 0.464679 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.232112 * safezoneW;
			h = 0.132 * safezoneH;
		};
		class txt_application: Life_RscText
		{
			idc = 1002;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			text = "Bewerbung:"; //--- ToDo: Localize;
			x = 0.303209 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.151378 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class edit_businessname: Life_RscEdit
		{
			idc = 1402;
			text = "";
			x = 0.464679 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.232112 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class txt_businessName: Life_RscText
		{
			idc = 1003;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			text = "Unternehmensname:"; //--- ToDo: Localize;
			x = 0.303209 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.151378 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class txt_size: Life_RscText
		{
			idc = 1001;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			text = "Mitglieder Zahl:"; //--- ToDo: Localize;
			x = 0.303209 * safezoneW + safezoneX;
			y = 0.456 * safezoneH + safezoneY;
			w = 0.151378 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class txt_playername: Life_RscText
		{
			idc = 1004;
			x = 0.464679 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.232112 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class edit_size: Life_RscEdit
		{
			idc = 1400;
			text = "";
			x = 0.464679 * safezoneW + safezoneX;
			y = 0.456 * safezoneH + safezoneY;
			w = 0.232112 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class btn_send: Life_RscButtonMenu
		{
			text = "Abschicken"; //--- ToDo: Localize;
			onButtonClick = "[0] call life_fnc_BusinessApplication";
			x = 0.303209 * safezoneW + safezoneX;
			y = 0.632 * safezoneH + safezoneY;
			w = 0.151378 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class btn_abort: Life_RscButtonMenu
		{
			text = "Verwerfen"; //--- ToDo: Localize;
			onButtonClick = "closeDialog 0;";
			x = 0.464679 * safezoneW + safezoneX;
			y = 0.632 * safezoneH + safezoneY;
			w = 0.232112 * safezoneW;
			h = 0.022 * safezoneH;
		};
    };
};

