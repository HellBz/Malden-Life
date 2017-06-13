class CfgGather {
    class Resources {
        class apple {
            amount = 2;
            zones[] = { "field_apple_1" };
            item = "";
            zoneSize = 20;
        };
		
		class traube {
            amount = 3;
            zones[] = { "field_traube_1", "field_traube_2" };
            item = "";
            zoneSize = 20;
        };
		
		class pearl {
            amount = 1;
            zones[] = { "field_pearl" };
            item = "";
            zoneSize = 20;
        };
		
		class ololiquiSeed {
            amount = 1;
            zones[] = { "field_Ololiqui" };
            item = "";
            zoneSize = 30;
        };
		
		class hopfen {
            amount = 2;
            zones[] = { "field_hop" };
            item = "";
            zoneSize = 30;
        };
		
		class KratomUnrefined {
            amount = 1;
            zones[] = { "field_kratom" };
            item = "";
            zoneSize = 30;
        };
    };

/*
This block can be set using percent,if you want players to mine only one resource ,just leave it as it is.
Example:
        class copper_unrefined
    {
            amount = 2;
        zones[] = { "copper_mine" };
        item = "pickaxe";
        mined[] = { "copper_unrefined" };
This will make players mine only copper_unrefined
Now let's go deeper
Example 2:
        class copper_unrefined
    {
            amount = 2;
        zones[] = { "copper_mine" };
        item = "pickaxe";
        mined[] = { {"copper_unrefined",0,25},{"iron_unrefined",25,95},{"diamond_uncut",95,100} };
    };
    This will give :
    25(±1)% to copper_unrefined;
    70(±1)% to iron_unrefined;
    5%(±1)% to diamond_uncut;

                                                         ! Watch Out !
 If percents are used,you MUST put more than 1 resource in the mined parameter
 mined[] = { {"copper_unrefined",0,25} }; NOT OK (But the script will work)
 mined[] = { {"copper_unrefined",0,45 },{"iron_unrefined",45} };  NOT OK (The script won't work )
 mined[] = { {"copper_unrefined",0,45},{"copper_unrefined",80,100} }; NOT OK
 mined[] = { "copper_unrefined" }; OK
 mined[] = { {"copper_unrefined",0,35} , { "iron_unrefined" ,35,100 } }; OK
*/

    class Minerals {
        class copper_unrefined {
            amount = 2;
            zones[] = { "field_copper" };
            item = "pickaxe";
            mined[] = {"copper_unrefined"};
            zoneSize = 30;
        };

        class iron_unrefined {
            amount = 1;
            zones[] = { "field_iron" };
            item = "pickaxe";
            mined[] = { "iron_unrefined" };
            zoneSize = 30;
        };
		
		class gold_unrefined {
            amount = 1;
            zones[] = { "field_gold" };
            item = "pickaxe";
            mined[] = { "gold_unrefined" };
            zoneSize = 30;
        };
		
		class silver_unrefined {
            amount = 1;
            zones[] = { "field_silver" };
            item = "pickaxe";
            mined[] = { "silver_unrefined" };
            zoneSize = 30;
        };

        class rock {
            amount = 2;
            zones[] = { "field_stone" };
            item = "pickaxe";
            mined[] = { "rock" };
            zoneSize = 30;
        };

        class oil_unprocessed {
            amount = 2;
            zones[] = { "field_oil" };
            item = "pump";
            mined[] = { "oil_unprocessed" };
            zoneSize = 30;
        };
    };
};