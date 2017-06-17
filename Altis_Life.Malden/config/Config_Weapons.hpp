/*
*    FORMAT:
*        STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*            
*
*    ARRAY FORMAT:
*        0: STRING (Classname): Item Classname
*        1: STRING (Nickname): Nickname that will appear purely in the shop dialog
*        2: SCALAR (Buy price)
*        3: SCALAR (Sell price): To disable selling, this should be -1
*        4: STRING (Conditions): Same as above conditions string
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Waffenladen";
        side = "civ";
        conditions = "license_civ_gun";
        items[] = {
            { "hgun_Rook40_F", "", 650, 325, "" },
            { "hgun_Pistol_01_F", "", 700, 350, "" }, //Apex DLC
            { "hgun_Pistol_heavy_02_F", "", 985, 492, "" },
            { "hgun_ACPC2_F", "", 1150, 575, "" },
            { "SMG_05_F", "", 1800, 900, "" }, //Apex DLC
            { "hgun_PDW2000_F", "", 2000, 1000, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 125, 10, "" },
            { "6Rnd_45ACP_Cylinder", "", 150, 10, "" },
            { "9Rnd_45ACP_Mag", "", 20, 10, "" },
            { "30Rnd_9x21_Mag", "", 25, 10, "" },
            { "30Rnd_9x21_Mag_SMG_02", "", 25, 10, "" }, //Apex DLC
            { "10Rnd_9x21_Mag", "", 25, 10, "" } //Apex DLC
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 100, 25, "" }
        };
    };
	
	class hunting {
        name = "Jagdausrüstung";
        side = "civ";
        conditions = "license_civ_gun && license_civ_hunting";
        items[] = {
            { "arifle_SDAR_F", "", 3000, 500, "" },
            { "hgun_Pistol_heavy_02_F", "", 985, 250, "" }
        };
        mags[] = {
            { "20Rnd_556x45_UW_mag", "", 125, 10, "" },
			{ "6Rnd_45ACP_Cylinder", "", 125, 10, "" }
        };
        accs[] = {};
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = {
            { "SMG_01_F", "", 5000 },
			{ "arifle_SDAR_F", "", 1000 },
			{ "arifle_TRG20_F", "", 2000 },
			{ "arifle_AKS_F", "", 2000 },
			{ "arifle_TRG21_F", "", 4000 },
			{ "arifle_AKM_F", "", 6000 },
			{ "arifle_CTAR_blk_F", "", 14000 },
			{ "arifle_Katiba_F", "", 14000 },
			{ "arifle_ARX_blk_F", "", 14000 },
			{ "arifle_AK12_F", "", 25000 },
			{ "srifle_DMR_01_F", "", 28000 },
			{ "srifle_DMR_06_olive_F", "", 28000 },
			{ "srifle_DMR_07_blk_F", "", 28000 },
			{ "LMG_Zafir_F", "", 32000 },
			{ "srifle_DMR_05_tan_f", "", 32000 }
        };
        mags[] = {
			{ "20Rnd_556x45_UW_mag", "", 325 },
			{ "30Rnd_556x45_Stanag", "", 325 },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 350 },
			{ "30Rnd_45ACP_Mag_SMG_01_tracer_green", "", 350 },
			{ "30Rnd_556x45_Stanag", "", 350 },
			{ "30Rnd_556x45_Stanag_Tracer_Red", "", 380 },
			{ "30Rnd_556x45_Stanag_Tracer_Green", "", 380 },
			{ "30Rnd_556x45_Stanag_Tracer_Yellow", "", 380 },
			{ "30Rnd_545x39_Mag_F", "", 725 },
			{ "30Rnd_545x39_Mag_Green_F", "", 725 },
			{ "30Rnd_556x45_Stanag", "", 380 },
			{ "30Rnd_556x45_Stanag_Tracer_Red", "", 380 },
			{ "30Rnd_556x45_Stanag_Tracer_Green", "", 380 },
			{ "30Rnd_556x45_Stanag_Tracer_Yellow", "", 380 },
			{ "30Rnd_762x39_Mag_F", "", 1500 },
			{ "30Rnd_762x39_Mag_Green_F", "", 1500 },
			{ "30Rnd_580x42_Mag_F", "", 700 },
			{ "30Rnd_65x39_caseless_green", "", 500 },
			{ "30Rnd_762x39_Mag_F", "", 1500 },
			{ "30Rnd_762x39_Mag_Green_F", "", 1500 },
			{ "10Rnd_762x54_Mag", "", 2000 },
			{ "20Rnd_762x51_Mag", "", 2200 },
			{ "20Rnd_650x39_Cased_Mag_F", "", 900 },
			{ "150Rnd_762x54_Box", "", 5000 },
			{ "150Rnd_762x54_Box_Tracer", "", 5000 },
			{ "10Rnd_93x64_DMR_05_Mag", "", 2550 },
        };
        accs[] = {
            { "optic_ACO_grn", "", 100 },
			{ "optic_Holosight", "", 250 },
			{ "optic_Holosight_khk_F", "", 250 },
			{ "optic_Arco", "", 1500 },
			{ "optic_Arco_ghex_F", "", 1500 },
			{ "optic_Hamr", "", 1750 },
			{ "optic_Hamr_khk_F", "", 1750 },
			{ "optic_ERCO_khk_F", "", 1800 },
			{ "optic_ERCO_blk_F", "", 1800 },
			{ "optic_DMS", "", 2200 },
			{ "optic_DMS_ghex_F", "", 2200 },
			{ "optic_SOS_khk_F", "", 2200 },
			{ "optic_LRPS", "", 3000 },
			{ "optic_LRPS_tna_F", "", 3000 },
			{ "optic_LRPS_ghex_F", "", 3000 },
			{ "bipod_01_F_blk", "", 750 },
			{ "bipod_01_F_mtp", "", 750 },
			{ "bipod_01_F_snd", "", 750 },
			{ "bipod_01_F_khk", "", 750 },
			{ "acc_flashlight", "", 125 },
			{ "muzzle_snds_L", "", 1500 },
			{ "Binocular", "", 55 },
			{ "ItemGPS", "", 125 },
			{ "ToolKit", "", 250 },
			{ "FirstAidKit", "", 50 },
			{ "ItemRadio", "", 250, 100, "" },
			{ "NVGoggles", "", 850 },
			{ "NVGoggles_tna_F", "", 850}
        };
    };

    class gang {
        name = "Waffenversteck der Gang";
        side = "civ";
        conditions = "";
        items[] = {
            { "hgun_Rook40_F", "", 1500, 750, "" },
            { "hgun_Pistol_heavy_02_F", "", 250, 125, "" },
            { "hgun_ACPC2_F", "", 4500, 225, "" },
            { "hgun_PDW2000_F", "", 9500, 475, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 12, 6, "" },
            { "6Rnd_45ACP_Cylinder", "", 25, 7, "" },
            { "9Rnd_45ACP_Mag", "", 20, 10, "" },
            { "30Rnd_9x21_Mag", "", 25, 12, "" }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 95, 47, "" }
        };
    };

    //Basic Shops
    class genstore {
        name = "Malden Baumarkt";
        side = "civ";
        conditions = "";
        items[] = {
            { "Binocular", "", 150, 7, "" },
            { "ItemGPS", "", 450, 25, "" },
            { "ItemMap", "", 10, 5, "" },
            { "ItemCompass", "", 10, 5, "" },
            { "ItemWatch", "", 50, 5, "" },
            { "FirstAidKit", "", 15, 5, "" },
            { "NVGoggles", "", 250, 100, "" },
			{ "ItemRadio", "", 250, 100, "" },
            { "Chemlight_red", "", 5, 15, "" },
            { "Chemlight_yellow", "", 5, 15, "" },
            { "Chemlight_green", "", 5, 15, "" },
            { "Chemlight_blue", "", 5, 15, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Tankstellen Shop";
        side = "";
        conditions = "";
        items[] = {
            { "Binocular", "", 150, 7, "" },
            { "ItemGPS", "", 450, 25, "" },
            { "ItemMap", "", 10, 5, "" },
            { "ItemCompass", "", 10, 5, "" },
            { "ItemWatch", "", 50, 5, "" },
            { "FirstAidKit", "", 15, 5, "" },
            { "NVGoggles", "", 250, 100, "" },
			{ "ItemRadio", "", 250, 100, "" },
            { "Chemlight_red", "", 5, 15, "" },
            { "Chemlight_yellow", "", 5, 15, "" },
            { "Chemlight_green", "", 5, 15, "" },
            { "Chemlight_blue", "", 5, 15, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "Polizei Waffenkammer";
        side = "cop";
        conditions = "";
        items[] = {
			{ "hgun_P07_snds_F", $STR_W_items_StunPistol, 200, 100, "" },
            { "arifle_SDAR_F", $STR_W_items_TaserRifle, 200, 100, "" },
			{ "SMG_05_F", "", 250, 100, "call life_coplevel >= 1"  },
			{ "SMG_02_ACO_F", "", 300, 150, "call life_coplevel >= 1" },
			{ "arifle_SPAR_01_blk_F", "Multi Use Rifle", 5000, "call life_coplevel >= 2"  },
			{ "arifle_Mk20C_F", "", 350, 350, "call life_coplevel >= 3"  },
			{ "arifle_MXC_F", "", 500, 350, "call life_coplevel >= 3"  },
			{ "arifle_MX_Black_F", "", 500, 350, "call life_coplevel >= 4"  },
			{ "arifle_MXM_Black_F", "", 550, 350, "call life_coplevel >= 4"  },
			{ "srifle_DMR_07_blk_F", "", 3200, 1600, "call life_coplevel >= 4" }, //Apex DLC Sniper
			{ "MineDetector", "", 100, 35, "" },
			{ "HandGrenade_Stone", $STR_W_items_Flashbang, 170, 85, "" },
			{ "Binocular", "", 50, 35, ""  },
			{ "ItemGPS", "", 100, 35, ""  },
			{ "ToolKit", "", 75, 35, ""  },
			{ "FirstAidKit", "", 15, 35, ""  },
			{ "ItemRadio", "", 250, 100, "" },
			{ "NVGoggles", "", 200, 35, ""  }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 125, 60, "" },
            { "20Rnd_556x45_UW_mag", $STR_W_mags_TaserRifle, 125, 60, "" },
            { "11Rnd_45ACP_Mag", "", 130, 65, "" },
            { "30Rnd_65x39_caseless_mag", "", 130, 65, "" },
            { "30Rnd_9x21_Mag", "", 250, 125, "" },
            { "9Rnd_45ACP_Mag", "", 200, 100, "" },
            { "20Rnd_650x39_Cased_Mag_F", "", 200, 100, "" }, //Apex DLC
			{ "16Rnd_9x21_green_Mag", "", 200, ""  },
			{ "16Rnd_9x21_yellow_Mag", "", 250, ""  },
			{ "16Rnd_9x21_red_Mag", "", 300, ""  },			
			{ "30Rnd_9x21_Mag_SMG_02", "", 50, ""  },
			{ "30Rnd_556x45_Stanag_Tracer_Green", "", 300, "" },
			{ "30Rnd_556x45_Stanag_Tracer_Yellow", "", 350, ""  },
			{ "30Rnd_556x45_Stanag_Tracer_Red", "", 400, ""  },
			{ "20Rnd_556x45_UW_mag", "", 25, ""  },
			{ "30Rnd_556x45_Stanag", "", 3500, ""  },
			{ "30Rnd_556x45_Stanag_Tracer_Red", "", 850, ""  },
			{ "30Rnd_65x39_caseless_mag", "", 300, ""  }
        };
        accs[] = {
            { "muzzle_snds_L", "", 650, 325, "" },
            { "optic_MRD", "", 2750, 1375, "call life_coplevel >= 1" },
			{ "optic_Holosight", "", 120, "call life_coplevel >= 1"  },
			{ "optic_Hamr", "", 250, "call life_coplevel >= 2"   },
            { "acc_flashlight", "", 750, 375, "call life_coplevel >= 2" },
            { "optic_Holosight", "", 1200, 600, "call life_coplevel >= 2" },
            { "optic_Arco", "", 2500, 1250, "call life_coplevel >= 2" },
            { "muzzle_snds_H", "", 2750, 1375, "call life_coplevel >= 2" }
        };
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        conditions = "";
        items[] = {
            { "Binocular", "", 150, 7, "" },
            { "ItemGPS", "", 450, 25, "" },
            { "ItemMap", "", 10, 5, "" },
            { "ItemCompass", "", 10, 5, "" },
            { "ItemWatch", "", 50, 5, "" },
            { "FirstAidKit", "", 15, 5, "" },
            { "NVGoggles", "", 250, 100, "" },
			{ "ItemRadio", "", 250, 100, "" },
            { "Chemlight_red", "", 5, 15, "" },
            { "Chemlight_yellow", "", 5, 15, "" },
            { "Chemlight_green", "", 5, 15, "" },
            { "Chemlight_blue", "", 5, 15, "" }
        };
        mags[] = {};
        accs[] = {};
    };
};
