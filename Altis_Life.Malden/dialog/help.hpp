/*
	Filename: help.hpp
	Author: Kellojo
	Description: Gentlemens Life Help Dialog with useful hints..
*/
/* #Sujivy
$[
	1.063,
	["Help_Dialog",[[0,0,1,1],0.025,0.04,"GUI_GRID"],0,0,0],
	[2200,"back",[1,"",["0.298907 * safezoneW + safezoneX","0.247 * safezoneH + safezoneY","0.402187 * safezoneW","0.484 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1000,"title",[1,"",["0.298906 * safezoneW + safezoneX","0.225 * safezoneH + safezoneY","0.402187 * safezoneW","0.022 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1500,"listbox",[1,"",["0.304062 * safezoneW + safezoneX","0.258 * safezoneH + safezoneY","0.118594 * safezoneW","0.462 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1100,"",[1,"",["0.427813 * safezoneW + safezoneX","0.291 * safezoneH + safezoneY","0.268125 * safezoneW","0.396 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1001,"title_info",[1,"",["0.427812 * safezoneW + safezoneX","0.269 * safezoneH + safezoneY","0.268125 * safezoneW","0.022 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[2400,"close",[1,"",["0.427813 * safezoneW + safezoneX","0.698 * safezoneH + safezoneY","0.268125 * safezoneW","0.022 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]]
]
*/


class Life_help_dialog
{
	idd = 10100;
	name="life_help_dialog";
	movingEnabled = 0;
	enableSimulation = 1;
	onLoad = "[0] spawn life_fnc_helpDialog;";
	
	class controlsBackground
	{
		class back_main: Life_RscTitle
		{
			idc = -1;
			colorBackground[] = {0, 0, 0, 0.7};
			x = 0.298907 * safezoneW + safezoneX;
			y = 0.247 * safezoneH + safezoneY;
			w = 0.402187 * safezoneW;
			h = 0.484 * safezoneH;
		};
		class title: Life_RscTitle
		{
			idc = -1;
			text = "$STR_PM_ModMenu_head";
			colorBackground[] = {"(profilenamespace getvariable ['GUI_ETG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_ETG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_ETG_RGB_B',0.8862])", 0.8};
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.402187 * safezoneW;
			h = 0.022 * safezoneH;
		};
	};
	
	class controls
	{
		class Selection_Listbox: Life_RscListBox
		{
			idc = 10101;
			sizeEx = 0.030;
			onLBSelChanged = "[1] spawn life_fnc_helpDialog;";
			x = 0.304062 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.118594 * safezoneW;
			h = 0.462 * safezoneH;
		};
		
		

		class StructuredText_Scrollable: Life_RscControlsGroup {
			idc = -1;
			x = 0.427813 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.268125 * safezoneW;
			h = 0.396 * safezoneH;
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			class Controls
			{
				class StructuredText: Life_RscStructuredText
				{
					idc = 10102;
					x = 0;//0.65;
					y = 0;//0.2;
					w = 0.268125 * safezoneW;
					h = 1;
					//sizeEx = 0.030;
					sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
					colorBackground[] = {1,0.4,0.2,0};
				};
			};
		};

		class Title_infobox: Life_RscText
		{
			idc = 10103;
			text = "";
			colorBackground[] = {"(profilenamespace getvariable ['GUI_ETG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_ETG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_ETG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
			x = 0.427812 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.268125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class btn_close: Life_RscButtonMenu
		{
			idc = -1;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_ETG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_ETG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_ETG_RGB_B',0.8862])", 0.5};
			text = "$STR_Global_Close";
			onButtonClick = "closeDialog 0;";
			x = 0.427813 * safezoneW + safezoneX;
			y = 0.698 * safezoneH + safezoneY;
			w = 0.268125 * safezoneW;
			h = 0.022 * safezoneH;
		};
	};
};

