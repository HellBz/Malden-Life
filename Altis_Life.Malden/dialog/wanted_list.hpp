/* #Sygazu
$[
	1.063,
	["wantedlist",[[0,0,1,1],0.025,0.04,"GUI_GRID"],0,0,0],
	[2200,"back_main",[1,"",["0.313301 * safezoneW + safezoneX","0.291 * safezoneH + safezoneY","0.373398 * safezoneW","0.484 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1500,"",[1,"",["0.540367 * safezoneW + safezoneX","0.335 * safezoneH + safezoneY","0.141286 * safezoneW","0.33 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1502,"lb_criminals",[1,"",["0.318347 * safezoneW + safezoneX","0.335 * safezoneH + safezoneY","0.105964 * safezoneW","0.396 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1501,"lb_players",[1,"",["0.429357 * safezoneW + safezoneX","0.335 * safezoneH + safezoneY","0.105964 * safezoneW","0.396 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1000,"txt_head_bounty",[1,"Aktuelle PrÃ¤mie: 0$",["0.540367 * safezoneW + safezoneX","0.302 * safezoneH + safezoneY","0.141286 * safezoneW","0.022 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[2400,"btn_add",[1,"HinzufÃ¼gen",["0.540367 * safezoneW + safezoneX","0.709 * safezoneH + safezoneY","0.141286 * safezoneW","0.022 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[2100,"cb_crimes",[1,"",["0.540367 * safezoneW + safezoneX","0.676 * safezoneH + safezoneY","0.141286 * safezoneW","0.022 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[2401,"btn_pardon",[1,"Erlassen",["0.540367 * safezoneW + safezoneX","0.742 * safezoneH + safezoneY","0.141286 * safezoneW","0.022 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[2402,"btn_close",[1,"SchlieÃŸen",["0.318347 * safezoneW + safezoneX","0.742 * safezoneH + safezoneY","0.216975 * safezoneW","0.022 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1001,"txt_head_back",[1,"",["0.313301 * safezoneW + safezoneX","0.269 * safezoneH + safezoneY","0.373398 * safezoneW","0.022 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1002,"txt_head",[1,"Fahndungsliste",["0.313301 * safezoneW + safezoneX","0.269 * safezoneH + safezoneY","0.222021 * safezoneW","0.022 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1003,"txt_head_status",[1,"Connection established",["0.540367 * safezoneW + safezoneX","0.269 * safezoneH + safezoneY","0.146332 * safezoneW","0.022 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1004,"txt_head_criminals",[1,"Gesuchte Personen",["0.318347 * safezoneW + safezoneX","0.302 * safezoneH + safezoneY","0.105964 * safezoneW","0.022 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1005,"txt_head_players",[1,"BÃ¼rger",["0.429357 * safezoneW + safezoneX","0.302 * safezoneH + safezoneY","0.105964 * safezoneW","0.022 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]]
]
*/

class life_wanted_menu {
    idd = 2400;
    name= "life_wanted_menu";
    movingEnable = false;
    enableSimulation = true;
    //onLoad = "[] spawn life_fnc_wantedadd2;";

    class controlsBackground {
        class Life_RscTitleBackground: Life_RscText {
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
            idc = -1;
            x = 0.313301 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.373398 * safezoneW;
			h = 0.022 * safezoneH;
        };

        class MainBackground: Life_RscText {
            colorBackground[] = {0, 0, 0, 0.7};
            idc = -1;
            x = 0.313301 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.373398 * safezoneW;
			h = 0.484 * safezoneH;
        };
    };

    class controls {
        class Title: Life_RscTitle {
            colorBackground[] = {0, 0, 0, 0};
            idc = -1;
            text = "$STR_Wanted_Title";
            x = 0.313301 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.222021 * safezoneW;
			h = 0.022 * safezoneH;
        };

        class WantedConnection: Title {
            idc = 2404;
            style = 1;
            text = "";
			x = 0.540367 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.146332 * safezoneW;
			h = 0.022 * safezoneH;
        };

        class WantedList: Life_RscListBox {
            idc = 2401;
            text = "";
            sizeEx = 0.035;
            onLBSelChanged = "[] spawn life_fnc_wantedGrab";
            x = 0.318347 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.105964 * safezoneW;
			h = 0.396 * safezoneH;
        };

        class PlayerList: Life_RscListBox {
            idc = 2406;
            text = "";
            sizeEx = 0.035;
            //colorBackground[] = {0,0,0,0};
            onLBSelChanged = "";
            x = 0.429357 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.105964 * safezoneW;
			h = 0.396 * safezoneH;
        };

        class WantedDetails: Life_RscListBox {
            idc = 2402;
            text = "";
            sizeEx = 0.035;
            colorBackground[] = {0, 0, 0, 0};
            x = 0.540367 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.141286 * safezoneW;
			h = 0.33 * safezoneH;
        };

        class BountyPrice: Life_RscText    {
            idc = 2403;
            text = "";
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
            x = 0.540367 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.141286 * safezoneW;
			h = 0.022 * safezoneH;
        };

        class WantedAddL: Life_RscCombo    {
            idc = 2407;
           	x = 0.540367 * safezoneW + safezoneX;
			y = 0.676 * safezoneH + safezoneY;
			w = 0.141286 * safezoneW;
			h = 0.022 * safezoneH;
        };

        class CloseButtonKey: Life_RscButtonMenu {
            idc = -1;
            text = "$STR_Global_Close";
            onButtonClick = "closeDialog 0;";
            x = 0.318347 * safezoneW + safezoneX;
			y = 0.742 * safezoneH + safezoneY;
			w = 0.216975 * safezoneW;
			h = 0.022 * safezoneH;
        };

        class PardonButtonKey: Life_RscButtonMenu {
            idc = 2405;
            text = "$STR_Wanted_Pardon";
            onButtonClick = "[] call life_fnc_pardon; closeDialog 0;";
           	x = 0.540367 * safezoneW + safezoneX;
			y = 0.742 * safezoneH + safezoneY;
			w = 0.141286 * safezoneW;
			h = 0.022 * safezoneH;
        };

        class ButtonWantedAdd: Life_RscButtonMenu {
            idc = 9800;
            //shortcuts[] = {0x00050000 + 2};
            text = "$STR_Wanted_Add";
            onButtonClick = "[] call life_fnc_wantedAddP;";
            x = 0.540367 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.141286 * safezoneW;
			h = 0.022 * safezoneH;
        };

        class wantedText: Life_RscText {
            idc = 1000;
            text = "$STR_Wanted_People";
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
            x = 0.318347 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.105964 * safezoneW;
			h = 0.022 * safezoneH;
        };

        class citizensText: Life_RscText {
            idc = 1001;
            text = "$STR_Wanted_Citizens";
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
            x = 0.429357 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.105964 * safezoneW;
			h = 0.022 * safezoneH;
        };

    };
};

