/*
class Life_atm_management {
    idd = 2700;
    name= "life_atm_menu";
    movingEnable = 0;
    enableSimulation = 1;

    class controlsBackground {
        class Life_RscTitleBackground: Life_RscText {
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
            idc = -1;
            x = 0.35;
            y = 0.2;
            w = 0.3;
            h = (1 / 25);
        };

        class MainBackground: Life_RscText {
            colorBackground[] = {0, 0, 0, 0.7};
            idc = -1;
            x = 0.35;
            y = 0.2 + (11 / 250);
            w = 0.3;
            h = 0.652 - (22 / 250);
        };
    };

    class controls {
        class CashTitle: Life_RscStructuredText {
            idc = 2701;
            text = "";
            x = 0.39;
            y = 0.26;
            w = 0.3;
            h = .14;
        };

        class Title: Life_RscTitle {
            colorBackground[] = {0, 0, 0, 0};
            idc = -1;
            text = "$STR_ATM_Title";
            x = 0.35;
            y = 0.2;
            w = 0.6;
            h = (1 / 25);
        };

        class WithdrawButton: Life_RscButtonMenu {
            idc = -1;
            text = "$STR_ATM_Withdraw";
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
            onButtonClick = "[] call life_fnc_bankWithdraw";
            x = 0.425;
            y = 0.46;
            w = (6 / 40);
            h = (1 / 25);
        };

        class DepositButton: Life_RscButtonMenu {
            idc = -1;
            text = "$STR_ATM_Deposit";
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
            onButtonClick = "[] call life_fnc_bankDeposit";
            x = 0.425;
            y = 0.512;
            w = (6 / 40);
            h = (1 / 25);
        };

        class moneyEdit: Life_RscEdit {
            idc = 2702;
            text = "1";
            sizeEx = 0.030;
            x = 0.4;
            y = 0.41;
            w = 0.2;
            h = 0.03;
        };

        class PlayerList: Life_RscCombo {
            idc = 2703;
            x = 0.4;
            y = 0.58;
            w = 0.2;
            h = 0.03;
        };

        class TransferButton: Life_RscButtonMenu {
            idc = -1;
            text = "$STR_ATM_Transfer";
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
            onButtonClick = "[] call life_fnc_bankTransfer";
            x = 0.425;
            y = 0.63;
            w = (6 / 40);
            h = (1 / 25);
        };

        class GangWithdraw : TransferButton {
            idc = 2705;
            text = "$STR_ATM_WithdrawGang";
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
            onButtonClick = "[] call life_fnc_gangWithdraw";
            x = 0.365;
            y = 0.7;
            w = 0.275;
        };

        class GangDeposit : TransferButton {
            idc = 2706;
            text = "$STR_ATM_DepositGang";
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
            onButtonClick = "[] call life_fnc_gangDeposit";
            x = 0.365;
            y = 0.752;
            w = 0.275;
        };

        class CloseButtonKey: Life_RscButtonMenu {
            idc = -1;
            text = "$STR_Global_Close";
            onButtonClick = "closeDialog 0;";
            x = 0.35;
            y = 0.812;
            w = (6.25 / 40);
            h = (1 / 25);
        };
    };
};
*/


class Life_atm_management {
	idd = 2700;
	name= "life_atm_menu";
	movingEnable = false;
	enableSimulation = true;
	
	class controlsBackground {
		class back_main: Life_RscText
		{
			idc = -1;
			colorBackground[] = {0, 0, 0, 0.7};
			x = 0.365937 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.268125 * safezoneW;
			h = 0.44 * safezoneH;
		};
		class txt_head: Life_RscText
		{
			idc = -1;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			text = "$STR_ATM_Title";
			x = 0.365937 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.268125 * safezoneW;
			h = 0.022 * safezoneH;
		};
	};
	
	class controls {
		class btn_gang_deposit: Life_RscButtonMenu
		{
			idc = 2706;
            text = "$STR_ATM_DepositGang";
			onButtonClick = "[] call life_fnc_gangDeposit";
			x = 0.371094 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class btn_gang_withdraw: Life_RscButtonMenu
		{
			idc = 2705;
            text = "$STR_ATM_WithdrawGang";
            onButtonClick = "[] call life_fnc_gangWithdraw";
			x = 0.371094 * safezoneW + safezoneX;
			y = 0.676 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class btn_deposit: Life_RscButtonMenu
		{
			idc = -1;
            text = "$STR_ATM_Deposit";
            onButtonClick = "[] call life_fnc_bankDeposit";
			x = 0.371094 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class btn_withdraw: Life_RscButtonMenu
		{
			idc = -1;
            text = "$STR_ATM_Withdraw";
            onButtonClick = "[] call life_fnc_bankWithdraw";
			x = 0.371094 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class edit_value: Life_RscEdit
		{
			idc = 2702;
            text = "1";
            sizeEx = 0.030;
			x = 0.371094 * safezoneW + safezoneX;
			y = 0.456 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class txt_info_1: Life_RscText
		{
			idc = -1;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			text = "Kontoinformationen:"; //--- ToDo: Localize;
			x = 0.371094 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class txt_info_2: Life_RscText
		{
			idc = -1;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			text = "Gang Informationen:";
			x = 0.371094 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class txt_info_3: Life_RscText
		{
			idc = -1;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			text = "Transaktionspartner:"; //--- ToDo: Localize;
			x = 0.505156 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class btn_transfer: Life_RscButtonMenu
		{
			idc = -1;
            text = "$STR_ATM_Transfer";
            onButtonClick = "[] call life_fnc_bankTransfer";
			x = 0.371094 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class stxt_bankaccount: Life_RscStructuredText
		{
			idc = 2701;
            text = "";
			x = 0.372031 * safezoneW + safezoneX;
			y = 0.376 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.066 * safezoneH;
		};
		class stxt_gangbank: Life_RscStructuredText
		{
			idc = 2707;
			x = 0.371094 * safezoneW + safezoneX;
			y = 0.632 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class playerlist: Life_RscListbox
		{
			idc = 2703;
			sizeEx = 0.030;
			x = 0.505156 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.385 * safezoneH;
		};
		class btn_close: Life_RscButtonMenu
		{
			idc = -1;
			text = "$STR_Global_Close";
			onButtonClick = "closeDialog 0;";
			x = 0.371094 * safezoneW + safezoneX;
			y = 0.742 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.022 * safezoneH;
		};
	};
};

