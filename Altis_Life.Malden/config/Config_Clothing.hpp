/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        3: STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*/
class Clothing {
    class bruce {
        title = "STR_Shops_C_Bruce";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_C_Poloshirt_stripped", "", 34, "" },
            { "U_C_Poloshirt_redwhite", "", 34, "" },
            { "U_C_Poloshirt_salmon", "", 34, "" },
            { "U_C_Poloshirt_blue", "", 60, "" },
            { "U_C_Poloshirt_burgundy", "", 60, "" },
            { "U_C_Poloshirt_tricolour", "", 25, "" },
            { "U_C_Poor_2", "", 10, "" },
            { "U_IG_Guerilla2_2", "", 25, "" },
            { "U_IG_Guerilla3_1", "", 25, "" },
            { "U_OrestesBody", "", 60, "" },
            { "U_IG_Guerilla2_3", "", 60, "" },
            { "U_C_HunterBody_grn", "", 60, "" },
            { "U_C_WorkerCoveralls", "", 60, "" },
            { "U_NikosBody", "", 60, "" },
            { "U_NikosAgedBody", $STR_C_Civ_Niko, 120, "" },
            { "U_C_Man_casual_1_F", "", 120, "" }, //Apex DLC
            { "U_C_Man_casual_2_F", "", 120, "" }, //Apex DLC
            { "U_C_Man_casual_3_F", "", 120, "" }, //Apex DLC
            { "U_C_Man_casual_4_F", "", 120, "" }, //Apex DLC
            { "U_C_Man_casual_5_F", "", 120, "" }, //Apex DLC
            { "U_C_Man_casual_6_F", "", 120, "" }, //Apex DLC
            { "U_C_man_sport_1_F", "", 120, "" }, //Apex DLC
            { "U_C_man_sport_2_F", "", 120, "" }, //Apex DLC
            { "U_C_man_sport_3_F", "", 120, "" } //Apex DLC
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Bandanna_camo", "", 120, "" },
            { "H_Bandanna_surfer", "", 130, "" },
            { "H_Bandanna_khk", "", 145, "" },
            { "H_Cap_blu", "", 60, "" },
            { "H_Cap_grn", "", 60, "" },
            { "H_Cap_grn_BI", "", 60, "" },
            { "H_Cap_oli", "", 60, "" },
            { "H_Cap_red", "", 60, "" },
            { "H_Cap_tan", "", 60, "" },
            { "H_Helmet_Skate", "", 60, "" }, //Apex DLC
            { "H_Bandanna_gry", "", 60, "" },
            { "H_Bandanna_sgg", "", 40, "" },
            { "H_Bandanna_cbr", "", 40, "" },
            { "H_StrawHat", "", 25, "" },
            { "H_Hat_tan", "", 25, "" },
            { "H_Hat_brown", "", 25, "" },
            { "H_Hat_grey", "", 25, "" },
            { "H_BandMask_blk", $STR_C_Civ_BandMask, 25, "" },
            { "H_Hat_blue", "", 50, "" },
            { "H_Hat_checker", "", 60, "" },
            { "H_Booniehat_tan", "", 50, "" },
            { "H_Booniehat_grn", "", 50, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Black", "", 20, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Shades_Green", "", 20, "" },
            { "G_Shades_Red", "", 20, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Greenblack", "", 25, "" },
            { "G_Sport_Red", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Squares", "", 50, "" },
            { "G_Aviator", "", 55, "" },
            { "G_Combat", "", 55, "" },
            { "G_Lady_Mirror", "", 55, "" },
            { "G_Lady_Dark", "", 55, "" },
            { "G_Lady_Blue", "", 55, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_OutdoorPack_blk", "", 50, "" },
            { "B_AssaultPack_khk", "", 200, "" },
            { "B_AssaultPack_dgtl", "", 200, "" },
            { "B_AssaultPack_rgr", "", 200, "" },
            { "B_AssaultPack_sgg", "", 200, "" },
            { "B_AssaultPack_blk", "", 200, "" },
            { "B_AssaultPack_cbr", "", 200, "" },
            { "B_AssaultPack_mcamo", "", 200, "" },
            { "B_AssaultPack_tna_f", "", 200, "" }, //Apex DLC
            { "B_TacticalPack_oli", "", 250, "" },
            { "B_Kitbag_mcamo", "", 350, "" },
            { "B_Kitbag_sgg", "", 350, "" },
            { "B_Kitbag_cbr", "", 350, "" },
            { "B_FieldPack_blk", "", 500, "" },
            { "B_FieldPack_ocamo", "", 500, "" },
            { "B_FieldPack_oucamo", "", 500, "" },
            { "B_FieldPack_ghex_f", "", 500, "" }, //Apex DLC
            { "B_Bergen_sgg", "", 600, "" },
            { "B_Bergen_mcamo", "", 600, "" },
            { "B_Bergen_rgr", "", 600, "" },
            { "B_Bergen_blk", "", 600, "" },
            { "B_Carryall_ocamo", "", 700, "" },
            { "B_Carryall_oucamo", "", 700, "" },
            { "B_Carryall_mcamo", "", 700, "" },
            { "B_Carryall_oli", "", 700, "" },
            { "B_Carryall_khk", "", 700, "" },
            { "B_Carryall_cbr", "", 700, "" },
            { "B_Carryall_ghex_f", "", 700, "" }, //Apex DLC
            { "B_Bergen_dgtl_f", "", 900, "" }, //Apex DLC
            { "B_Bergen_tna_f", "", 900, "" } //Apex DLC
        };
    };

	class hunting_clothing {
        title = "STR_Shops_C_Hunting";
        conditions = "license_civ_gun && license_civ_hunting";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_IG_Guerilla3_2", "", 60, "" },
            { "U_IG_Guerilla3_1", "", 60, "" },
            { "U_BG_Guerilla3_1", "", 60, "" },
            { "U_OG_Guerilla1_1", "", 60, "" },
            { "U_C_HunterBody_grn", "", 60, "" },
            { "U_I_G_Story_Protagonist_F", "", 60, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Booniehat_khk", "", 120, "" },
            { "H_Booniehat_indp", "", 130, "" },
            { "H_Booniehat_mcamo", "", 145, "" },
            { "H_Booniehat_grn", "", 60, "" },
            { "H_Booniehat_tan", "", 60, "" },
            { "H_Booniehat_dirty", "", 60, "" },
            { "H_Booniehat_dgtl", "", 60, "" },
            { "H_Booniehat_khk_hs", "", 60, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Black", "", 20, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Shades_Green", "", 20, "" },
            { "G_Shades_Red", "", 20, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Greenblack", "", 25, "" },
            { "G_Sport_Red", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Squares", "", 50, "" },
            { "G_Aviator", "", 55, "" },
            { "G_Combat", "", 55, "" },
            { "G_Lady_Mirror", "", 55, "" },
            { "G_Lady_Dark", "", 55, "" },
            { "G_Lady_Blue", "", 55, "" }
        };
        vests[] = {};
        backpacks[] = {};
    };
	
    class cop {
        title = "STR_Shops_C_Police";
        conditions = "";
        side = "cop";
		uniforms[] = {
			{ "NONE", $STR_C_Remove_uniforms, 0, "" },
			{ "U_Rangemaster", "Polizeiuniform I", 10, "call life_coplevel >= 1" },
			{ "U_B_GEN_Soldier_F", "Polizeiuniform II", 10, "call life_coplevel >= 4" },
			{ "U_B_CombatUniform_mcam_vest", "Polizeiuniform III", "call life_coplevel >= 5" },
			{ "U_B_GEN_Commander_F", "Polizeiuniform IV", "call life_coplevel >= 6" }
		};

		headgear[] = {
			{ "NONE", $STR_C_Remove_headgear, 0, "" },
			{ "H_Cap_police", "", 10, "call life_coplevel >= 1" },
			{ "H_MilCap_blue", "", 10, "call life_coplevel >= 2" },
			{ "H_Beret_blk", "", 10,, "call life_coplevel >= 4" },
			{ "H_Beret_blk_POLICE", "", 10, "call life_coplevel >= 5" },
			{ "H_Beret_red", "", 10, "call life_coplevel >= 6" },
			{ "H_Beret_grn", "", 10, "call life_coplevel >= 6" },
			{ "H_Beret_grn_SF", "", 10, "call life_coplevel >= 7" },
			{ "H_Watchcap_blk", "", 10, "call life_coplevel >= 7" },
			{ "H_Beret_Colonel", "", 10, "call life_coplevel >= 8" },
			{ "H_Beret_02", "", 10, "call life_coplevel >= 8" }
			
		};

		goggles[] = {
			{ "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Squares", "", 5, "" },
            { "G_Shades_Blue", "", 5, "" },
            { "G_Sport_Blackred", "", 5, "" },
            { "G_Sport_Checkered", "", 5, "" },
            { "G_Sport_Blackyellow", "", 5, "" },
            { "G_Sport_BlackWhite", "", 5, "" },
            { "G_Shades_Black", "", 5, "" },
            { "G_Lowprofile", "", 5, "" },
            { "G_Combat", "", 5, "" },
            { "G_Aviator", "", 5, "" },
            { "G_Lady_Mirror", "", 5, "" },
            { "G_Lady_Dark", "", 5, "" },
            { "G_Lady_Blue", "", 5, "" }
		};

		vests[] = {
			{ "NONE", "Weste ablegen", 0, "" },
			{ "V_Rangemaster_belt", "", 50, "call life_coplevel >= 1" },
			{ "V_TacVest_blk_POLICE", "", 50, "call life_coplevel >= 2" },
			{ "V_TacVest_gen_F", "", 50, "call life_coplevel >= 2" },
			{ "V_PlateCarrier2_blk", "", 50, "call life_coplevel >= 3" }
		};

		backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_FieldPack_cbr", "", 20, "" },
            { "B_AssaultPack_cbr", "", 20, "" },
            { "B_Kitbag_cbr", "", 20, "" },
            { "B_Bergen_sgg", "", 20, "" },
            { "B_Carryall_cbr", "", 20, "" }
		};
    };

    class dive {
        title = "STR_Shops_C_Diving";
        conditions = "license_civ_dive";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_B_Wetsuit", "", 250, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Diving", "", 20, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_RebreatherB", "", 500, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        conditions = "license_civ_gun";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Rangemaster_belt", "", 140, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class gang_clothing {
        title = "STR_Shops_C_Gang";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Rangemaster_belt", "", 180, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        conditions = "";
        side = "med";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_Rangemaster", $STR_C_EMS_uniforms, 140, "" },
			{ "U_B_GEN_Commander_F", $STR_C_EMS_uniforms, 140, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Cap_blu", "", 10, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Blue", "", 10, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_FieldPack_oli", $STR_C_EMS_backpacks, 25, "" }
        };
    };

    class reb {
        title = "STR_Shops_C_Rebel";
        conditions = "license_civ_rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_IG_Guerilla1_1", "", 250, "" },
            { "U_I_G_Story_Protagonist_F", "", 250, "" },
            { "U_I_G_resistanceLeader_F", "", 250, "" },
            { "U_IG_leader", "", 1534, "" },
            { "U_O_PilotCoveralls", "", 1561, "" },
            { "U_O_SpecopsUniform_ocamo", "", 1750, "" },
            { "U_O_GhillieSuit", "", 500, "" },
            { "U_B_T_Soldier_F", "", 500, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_1_F", "", 500, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_2_F", "", 510, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_3_F", "", 532, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_4_F", "", 520, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_5_F", "", 520, "" }, //Apex DLC
            { "U_I_C_Soldier_Camo_F", "", 500, "" } //Apex DLC
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Bandanna_camo", "", 65, "" },
            { "H_ShemagOpen_khk", "", 80, "" },
            { "H_ShemagOpen_tan", "", 85, "" },
            { "H_Shemag_olive", "", 85, "" },
            { "H_HelmetO_ocamo", "", 250, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Black", "", 20, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Squares", "", 50, "" },
            { "G_Combat", "", 125, "" },
            { "G_Balaclava_blk", "", 150, "" },
            { "G_Balaclava_combat", "", 150, "" },
            { "G_Balaclava_lowprofile", "", 150, "" },
            { "G_Balaclava_oli", "", 150, "" },
            { "G_Bandanna_aviator", "", 150, "" },
            { "G_Bandanna_beast", "", 150, "" },
            { "G_Bandanna_blk", "", 150, "" },
            { "G_Bandanna_khk", "", 150, "" },
            { "G_Bandanna_oli", "", 150, "" },
            { "G_Bandanna_shades", "", 150, "" },
            { "G_Bandanna_sport", "", 150, "" },
            { "G_Bandanna_tan", "", 150, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_BandollierB_cbr", "", 9000, "" },
            { "V_HarnessO_brn", "", 1000, "" },
            { "V_TacVest_khk", "", 1200, "" },
            { "V_TacChestrig_grn_F", "", 170, "" } //Apex DLC
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_OutdoorPack_blk", "", 50, "" },
            { "B_AssaultPack_khk", "", 200, "" },
            { "B_AssaultPack_dgtl", "", 200, "" },
            { "B_AssaultPack_rgr", "", 200, "" },
            { "B_AssaultPack_sgg", "", 200, "" },
            { "B_AssaultPack_blk", "", 200, "" },
            { "B_AssaultPack_cbr", "", 200, "" },
            { "B_AssaultPack_mcamo", "", 200, "" },
            { "B_AssaultPack_tna_f", "", 200, "" }, //Apex DLC
            { "B_TacticalPack_oli", "", 250, "" },
            { "B_Kitbag_mcamo", "", 350, "" },
            { "B_Kitbag_sgg", "", 350, "" },
            { "B_Kitbag_cbr", "", 350, "" },
            { "B_FieldPack_blk", "", 500, "" },
            { "B_FieldPack_ocamo", "", 500, "" },
            { "B_FieldPack_oucamo", "", 500, "" },
            { "B_FieldPack_ghex_f", "", 500, "" }, //Apex DLC
            { "B_Bergen_sgg", "", 600, "" },
            { "B_Bergen_mcamo", "", 600, "" },
            { "B_Bergen_rgr", "", 600, "" },
            { "B_Bergen_blk", "", 600, "" },
            { "B_Carryall_ocamo", "", 700, "" },
            { "B_Carryall_oucamo", "", 700, "" },
            { "B_Carryall_mcamo", "", 700, "" },
            { "B_Carryall_oli", "", 700, "" },
            { "B_Carryall_khk", "", 700, "" },
            { "B_Carryall_cbr", "", 700, "" },
            { "B_Carryall_ghex_f", "", 700, "" }, //Apex DLC
            { "B_Bergen_dgtl_f", "", 900, "" }, //Apex DLC
            { "B_Bergen_tna_f", "", 900, "" } //Apex DLC
        };
    };

    class kart {
        title = "STR_Shops_C_Kart";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_C_Driver_1_black", "", 150, "" },
            { "U_C_Driver_1_blue", "", 150, "" },
            { "U_C_Driver_1_red", "", 150, "" },
            { "U_C_Driver_1_orange", "", 150, "" },
            { "U_C_Driver_1_green", "", 150, "" },
            { "U_C_Driver_1_white", "", 150, "" },
            { "U_C_Driver_1_yellow", "", 150, "" },
            { "U_C_Driver_2", "", 350, "" },
            { "U_C_Driver_1", "", 360, "" },
            { "U_C_Driver_3", "", 370, "" },
            { "U_C_Driver_4", "", 370, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_RacingHelmet_1_black_F", "", 20, "" },
            { "H_RacingHelmet_1_red_F", "", 20, "" },
            { "H_RacingHelmet_1_white_F", "", 20, "" },
            { "H_RacingHelmet_1_blue_F", "", 20, "" },
            { "H_RacingHelmet_1_yellow_F", "", 20, "" },
            { "H_RacingHelmet_1_green_F", "", 20, "" },
            { "H_RacingHelmet_1_F", "", 25, "" },
            { "H_RacingHelmet_2_F", "", 25, "" },
            { "H_RacingHelmet_3_F", "", 25, "" },
            { "H_RacingHelmet_4_F", "", 25, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };
};
