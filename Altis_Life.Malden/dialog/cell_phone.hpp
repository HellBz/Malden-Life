/*
class Life_cell_phone {
    idd = 3000;
    name= "life_cell_phone";
    movingEnable = 0;
    enableSimulation = 1;
    onLoad = "[] spawn life_fnc_cellphone";

    class controlsBackground {
        class Life_RscTitleBackground: Life_RscText {
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
            idc = -1;
            x = 0.1;
            y = 0.2;
            w = 0.64;
            h = (1 / 25);
        };

        class MainBackground: Life_RscText {
            colorBackground[] = {0, 0, 0, 0.7};
            idc = -1;
            x = 0.1;
            y = 0.2 + (11 / 250);
            w = 0.64;
            h = 0.3 - (5 / 250);
        };
    };

    class controls {
        class Title: Life_RscTitle {
            colorBackground[] = {0, 0, 0, 0};
            idc = 3001;
            text = "$STR_CELL_Title";
            x = 0.1;
            y = 0.2;
            w = 0.6;
            h = (1 / 25);
        };

        class TextToSend: Life_RscTitle {
            colorBackground[] = {0, 0, 0, 0};
            idc = 3002;
            text = "$STR_CELL_TextToSend";
            x = 0.1;
            y = 0.25;
            w = 0.6;
            h = (1 / 25);
        };

        class textEdit: Life_RscEdit {
            idc = 3003;
            text = "";
            sizeEx = 0.030;
            x = 0.11;
            y = 0.3;
            w = 0.62;
            h = 0.03;
        };

        class TextMsgButton: Life_RscButtonMenu {
            idc = 3015;
            text = "$STR_CELL_TextMSGBtn";
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
            onButtonClick = "[] call TON_fnc_cell_textmsg";
            x = 0.11;
            y = 0.35;
            w = 0.2;
            h = (1 / 25);
        };

        class PlayerList: Life_RscCombo {
            idc = 3004;
            x = 0.11;
            y = 0.4;
            w = 0.2;
            h = (1 / 25);
        };

        class TextCopButton: Life_RscButtonMenu {
            idc = 3016;
            text = "$STR_CELL_TextPolice";
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
            onButtonClick = "[] call TON_fnc_cell_textcop";
            x = 0.32;
            y = 0.35;
            w = 0.2;
            h = (1 / 25);
        };

        class TextAdminButton: Life_RscButtonMenu {
            idc = 3017;
            text = "$STR_CELL_TextAdmins";
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
            onButtonClick = "[] call TON_fnc_cell_textadmin";
            x = 0.53;
            y = 0.35;
            w = 0.2;
            h = (1 / 25);
        };

        class AdminMsgButton: Life_RscButtonMenu {
            idc = 3020;
            text = "$STR_CELL_AdminMsg";
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
            onButtonClick = "[] call TON_fnc_cell_adminmsg";
            x = 0.32;
            y = 0.4;
            w = 0.2;
            h = (1 / 25);
        };

        class AdminMsgAllButton: Life_RscButtonMenu {
            idc = 3021;
            text = "$STR_CELL_AdminMSGAll";
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
            onButtonClick = "[] call TON_fnc_cell_adminmsgall";
            x = 0.53;
            y = 0.4;
            w = 0.2;
            h = (1 / 25);
        };

        class EMSRequest: Life_RscButtonMenu {
            idc = 3022;
            text = "$STR_CELL_EMSRequest";
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
            onButtonClick = "[] call TON_fnc_cell_emsrequest";
            x = 0.11;
            y = 0.45;
            w = 0.2;
            h = (1 / 25);
        };

        class CloseButtonKey: Life_RscButtonMenu {
            idc = -1;
            text = "$STR_Global_Close";
            onButtonClick = "closeDialog 0;";
            x = -0.06 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
            y = 0.51 + (1 / 50);
            w = (6.25 / 40);
            h = (1 / 25);
        };
    };
};
*/




class Life_cell_phone {
	idd = 3000;
	name= "life_cell_phone";
	movingEnable = false;
	enableSimulation = true;
	onLoad = "[0] spawn life_fnc_phone";
	
	class controlsBackground {
		class back_main: Life_RscText
		{
			idc = -1;
			colorBackground[] = {0, 0, 0, 0.7};
			x = 0.324687 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.350625 * safezoneW;
			h = 0.495 * safezoneH;
		};
		class txt_head: Life_RscText
		{
			idc = -1;
			text = "Nokia XC 450";
			colorBackground[] = {"(profilenamespace getvariable ['GUI_ETG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_ETG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_ETG_RGB_B',0.8862])", 0.8};
			x = 0.324687 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.350625 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class txt_kontakte: Life_RscText
		{
			idc = 1001;
			text = "Kontakte:";
			colorBackground[] = {"(profilenamespace getvariable ['GUI_ETG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_ETG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_ETG_RGB_B',0.8862])", 0.8};
			x = 0.329844 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.165 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class txt_sendPos: Life_RscText
		{
			idc = -1;
			text = "Position senden:";
			colorBackground[] = {"(profilenamespace getvariable ['GUI_ETG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_ETG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_ETG_RGB_B',0.8862])", 0.8};
			x = 0.329844 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.319688 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class txt_Nachrichten: Life_RscText
		{
			idc = -1;
			text = "Erhaltene Nachrichten:";
			colorBackground[] = {"(profilenamespace getvariable ['GUI_ETG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_ETG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_ETG_RGB_B',0.8862])", 0.8};
			x = 0.505156 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.165 * safezoneW;
			h = 0.022 * safezoneH;
		};
	};
	
	class controls {
		class lb_kontakte: Life_RscListbox
		{
			idc = 3001;
			sizeEx = 0.030;
			x = 0.329844 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.165 * safezoneW;
			h = 0.308 * safezoneH;
		};
		class cb_pos: Life_Checkbox
		{
			idc = 3002;
			x = 0.654688 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.0103125 * safezoneW;
			h = 0.022 * safezoneH;
			tooltip = "Position mitsenden?";
		};
		class edit_message: Life_RscEdit
		{
			idc = 3003;
			text = "";
			x = 0.329844 * safezoneW + safezoneX;
			y = 0.676 * safezoneH + safezoneY;
			w = 0.340312 * safezoneW;
			h = 0.022 * safezoneH;
			tooltip = "Gib deine Nachricht hier ein";
		};
		class btn_close: Life_RscButtonMenu
		{
			idc = -1;
			text = "$STR_Global_Close";
			onButtonClick = "closeDialog 0;";
			x = 0.329844 * safezoneW + safezoneX;
			y = 0.775 * safezoneH + safezoneY;
			w = 0.340312 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class btn_send: Life_RscButtonMenu
		{
			idc = -1;
			text = "Senden";
			onButtonClick = "[1] call life_fnc_phone;";
			x = 0.329844 * safezoneW + safezoneX;
			y = 0.742 * safezoneH + safezoneY;
			w = 0.340312 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class lb_recMessages: Life_RscListbox
		{
			idc = 3004;
			sizeEx = 0.030;
			onLBSelChanged = "[2] call life_fnc_phone;";
			x = 0.505156 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.165 * safezoneW;
			h = 0.308 * safezoneH;
		};
		class txt_charge: Life_RscText
		{
			idc = 3005;
			text = "---/---";
			x = 0.628906 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.0380937 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class txt_charge_head: Life_RscText
		{
			idc = -1;
			text = "Akkustand:";
			x = 0.577344 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.022 * safezoneH;
		};
	};
};

