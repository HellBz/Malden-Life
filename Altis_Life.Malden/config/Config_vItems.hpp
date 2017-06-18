/*
*    FORMAT:
*        STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*/
class VirtualShops {
    //Virtual Shops
    class market {
        name = "STR_Shops_Market";
        side = "civ";
        conditions = "";
        items[] = { "waterBottle", "rabbit", "apple", "traube", "redgull", "tbacon", "pickaxe", "toolkit", "battery", "fuelFull", "wheel", "peach", "storagesmall", "storagebig", "rabbit_raw", "hen_raw", "rooster_raw", "sheep_raw", "goat_raw", "beer", "agavenBeer" };
    };
	
	class huntingMarket {
        name = "STR_Shops_Market";
        side = "civ";
        conditions = "";
        items[] = { "huntingKnife", "waterBottle", "rabbit", "toolkit", "battery", "fuelFull", "wheel", "rabbit_raw", "hen_raw", "rooster_raw", "sheep_raw", "goat_raw"};
    };

    class med_market {
        name = "STR_Shops_Market";
        side = "med";
        conditions = "";
        items[] = { "waterBottle", "rabbit", "apple", "redgull", "tbacon", "toolkit", "battery", "fuelFull", "peach", "defibrillator" };
    };

    class rebel {
        name = "STR_Shops_Rebel";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = { "waterBottle", "rabbit", "apple", "redgull", "tbacon", "lockpick", "pickaxe", "toolkit", "battery", "fuelFull", "peach", "boltcutter", "blastingcharge" };
    };

    class gang {
        name = "STR_Shops_Gang";
        side = "civ";
        conditions = "";
        items[] = { "waterBottle", "rabbit", "apple", "redgull", "tbacon", "lockpick", "pickaxe", "toolkit", "battery", "fuelFull", "peach", "boltcutter", "blastingcharge" };
    };

    class coffee {
        name = "STR_Shops_Coffee";
        side = "civ";
        conditions = "";
        items[] = { "coffee", "donuts" };
    };

    class f_station_coffee {
        name = "STR_Shop_Station_Coffee";
        side = "";
        conditions = "";
        items[] = { "coffee", "donuts", "redgull", "toolkit", "fuelFull"};
    };

    class drugdealer {
        name = "STR_Shops_DrugDealer";
        side = "civ";
        conditions = "";
        items[] = { "marijuana", "ololiqui", "peyote" , "kratomRefined"};
    };
	
	class beerTrader {
        name = "STR_Shops_BeerTrader";
        side = "civ";
        conditions = "";
        items[] = { "beer", "agavenBeer" };
    };

    class oil {
        name = "STR_Shops_Oil";
        side = "civ";
        conditions = "";
        items[] = { "oil_processed", "pickaxe", "fuelFull" };
    };

    class fishmarket {
        name = "STR_Shops_FishMarket";
        side = "civ";
        conditions = "";
        items[] = { "salema_raw", "salema", "ornate_raw", "ornate", "mackerel_raw", "mackerel", "tuna_raw", "tuna", "mullet_raw", "mullet", "catshark_raw", "catshark", "turtle_soup", "turtle_raw", "shell" };
    };

    class industriegebiet  {
        name = "STR_Shops_Industriegebiet";
        side = "civ";
        conditions = "";
        items[] = { "iron_refined", "copper_refined", "silver_refined", "cement" };
    };
	
	class peralDealer  {
        name = "STR_Shops_PearlDealer";
        side = "civ";
        conditions = "";
        items[] = { "pearl" };
    };

    class gold {
        name = "STR_Shops_Gold";
        side = "civ";
        conditions = "";
        items[] = { "goldbar", "gold_refined" };
    };

    class cop {
        name = "STR_Shops_Cop";
        side = "cop";
        conditions = "";
        items[] = { "donuts", "coffee", "spikeStrip", "waterBottle", "rabbit", "apple", "redgull", "toolkit", "battery", "fuelFull", "defusekit", "defibrillator" };
    };
};

/*
*    CLASS:
*        variable = Variable Name
*        displayName = Item Name
*        weight = Item Weight
*        buyPrice = Item Buy Price
*        sellPrice = Item Sell Price
*        illegal = Illegal Item
*        edible = Item Edible (-1 = Disabled)
*        icon = Item Icon
*        processedItem = Processed Item
*/
class VirtualItems {
    //Virtual Items

    //Misc
    class pickaxe {
        variable = "pickaxe";
        displayName = "STR_Item_Pickaxe";
        weight = 2;
        buyPrice = 25;
        sellPrice = 5;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_pickaxe.paa";
    };
	
	class pump {
        variable = "pump";
        displayName = "STR_Item_Pump";
        weight = 10;
        buyPrice = 900;
        sellPrice = 450;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_pump.paa";
    };
	
	class huntingKnife {
        variable = "huntingKnife";
        displayName = "STR_Item_huntingKnife";
        weight = 10;
        buyPrice = 900;
        sellPrice = 450;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_huntingKnife.paa";
    };
	
	class wheel {
        variable = "wheel";
        displayName = "STR_Item_wheel";
        weight = 10;
        buyPrice = 500;
        sellPrice = 100;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_wheel.paa";
    };

    class defibrillator {
        variable = "defibrillator";
        displayName = "STR_Item_Defibrillator";
        weight = 4;
        buyPrice = 500;
        sellPrice = 100;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_defibrillator.paa";
    };

    class toolkit {
        variable = "toolkit";
        displayName = "STR_Item_Toolkit";
        weight = 4;
        buyPrice = 250;
        sellPrice = 10;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "\a3\weapons_f\items\data\UI\gear_toolkit_ca.paa";
    };

    class fuelEmpty {
        variable = "fuelEmpty";
        displayName = "STR_Item_FuelE";
        weight = 2;
        buyPrice = -1;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_fuelEmpty.paa";
    };

    class fuelFull {
        variable = "fuelFull";
        displayName = "STR_Item_FuelF";
        weight = 5;
        buyPrice = 25;
        sellPrice = 5;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_fuel.paa";
    };

    class spikeStrip {
        variable = "spikeStrip";
        displayName = "STR_Item_SpikeStrip";
        weight = 15;
        buyPrice = 150;
        sellPrice = 50;
        illegal = true;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_spikeStrip.paa";
    };

    class lockpick {
        variable = "lockpick";
        displayName = "STR_Item_Lockpick";
        weight = 1;
        buyPrice = 15;
        sellPrice = 5;
        illegal = true;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_lockpick.paa";
    };
	
	class battery {
        variable = "battery";
        displayName = "STR_Item_Battery";
        weight = 2;
        buyPrice = 25;
        sellPrice = 5;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_battery.paa";
    };

    class goldbar {
        variable = "goldBar";
        displayName = "STR_Item_GoldBar";
        weight = 60;
        buyPrice = -1;
        sellPrice = 32000;
        illegal = true;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_goldBar.paa";
    };

    class blastingcharge {
        variable = "blastingCharge";
        displayName = "STR_Item_BCharge";
        weight = 15;
        buyPrice = 2500;
        sellPrice = 1000;
        illegal = true;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_blastingCharge.paa";
    };

    class boltcutter {
        variable = "boltCutter";
        displayName = "STR_Item_BCutter";
        weight = 5;
        buyPrice = 750;
        sellPrice = 100;
        illegal = true;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_boltCutter.paa";
    };

    class defusekit {
        variable = "defuseKit";
        displayName = "STR_Item_DefuseKit";
        weight = 2;
        buyPrice = 250;
        sellPrice = 100;
        illegal = true;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_defuseKit.paa";
    };

    class storagesmall {
        variable = "storageSmall";
        displayName = "STR_Item_StorageBS";
        weight = 5;
        buyPrice = 15000;
        sellPrice = 12500;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_storageSmall.paa";
    };

    class storagebig {
        variable = "storageBig";
        displayName = "STR_Item_StorageBL";
        weight = 10;
        buyPrice = 25000;
        sellPrice = 22500;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_storageBig.paa";
    };

    //Mined Items
    class oil_unprocessed {
        variable = "oilUnprocessed";
        displayName = "STR_Item_OilU";
        weight = 9;
        buyPrice = 10;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_oilUnprocessed.paa";
    };

    class oil_processed {
        variable = "oilProcessed";
        displayName = "STR_Item_OilP";
        weight = 6;
        buyPrice = -1;
        sellPrice = 60;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_oilProcessed.paa";
    };
	
    class hopfen {
        variable = "hopfen";
        displayName = "STR_Item_Hopfen";
        weight = 3;
        buyPrice = -1;
        sellPrice = 5;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_hopfen.paa";
    };
	
	class agavenBeer {
        variable = "agavenBeer";
        displayName = "STR_Item_AgavenBeer";
        weight = 2;
        buyPrice = -1;
        sellPrice = 15;
        illegal = false;
        edible = 10;
		drinkable = 15;
        icon = "icons\ico_beer.paa";
    };
	
	class shell {
        variable = "shell";
        displayName = "STR_Item_Shell";
        weight = 4;
        buyPrice = -1;
        sellPrice = 7;
        illegal = false;
        edible = 15;
		drinkable = -1;
        icon = "icons\ico_shell.paa";
    };
	
    class pearl {
        variable = "pearl";
        displayName = "STR_Item_Pearl";
        weight = 1;
        buyPrice = -1;
        sellPrice = 250;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_pearl.paa";
    };
	
    class traube {
        variable = "traube";
        displayName = "STR_Item_Traube";
        weight = 1;
        buyPrice = -1;
        sellPrice = 1;
        illegal = false;
        edible = 10;
		drinkable = 2;
        icon = "icons\ico_traube.paa";
    };
	
    class beer {
        variable = "beer";
        displayName = "STR_Item_Beer";
        weight = 2;
        buyPrice = -1;
        sellPrice = 20;
        illegal = false;
        edible = -1;
		drinkable = 15;
        icon = "icons\ico_beer.paa";
    };

    class copper_unrefined {
        variable = "copperUnrefined";
        displayName = "STR_Item_CopperOre";
        weight = 10;
        buyPrice = -1;
        sellPrice = 3;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_copperOre.paa";
    };

    class copper_refined {
        variable = "copperRefined";
        displayName = "STR_Item_CopperIngot";
        weight = 2;
        buyPrice = -1;
        sellPrice = 7;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_copper.paa";
    };

    class iron_unrefined {
        variable = "ironUnrefined";
        displayName = "STR_Item_IronOre";
        weight = 10;
        buyPrice = -1;
        sellPrice = 3;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_ironOre.paa";
    };

    class iron_refined {
        variable = "ironRefined";
        displayName = "STR_Item_IronIngot";
        weight = 3;
        buyPrice = -1;
        sellPrice = 12;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_iron.paa";
    };
	
    class silver_unrefined {
        variable = "silverUnrefined";
        displayName = "STR_Item_SilverOre";
        weight = 5;
        buyPrice = -1;
        sellPrice = 5;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_ironOre.paa";
    };

    class silver_refined {
        variable = "silverRefined";
        displayName = "STR_Item_SilverIngot";
        weight = 3;
        buyPrice = -1;
        sellPrice = 18;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_iron.paa";
    };
	
    class gold_unrefined {
        variable = "goldUnrefined";
        displayName = "STR_Item_GoldOre";
        weight = 20;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_goldOre.paa";
    };

    class gold_refined {
        variable = "goldRefined";
        displayName = "STR_Item_GoldIngot";
        weight = 3;
        buyPrice = -1;
        sellPrice = 1100;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_gold.paa";
    };

    class rock {
        variable = "rock";
        displayName = "STR_Item_Rock";
        weight = 6;
        buyPrice = -1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_rock.paa";
    };

    class cement {
        variable = "cement";
        displayName = "STR_Item_CementBag";
        weight = 5;
        buyPrice = -1;
        sellPrice = 9;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_cement.paa";
    };

    //Drugs

    class ololiquiSeed {
        variable = "ololiquiSeed";
        displayName = "STR_Item_OloliquiSeed";
        weight = 2;
        buyPrice = -1;
        sellPrice = 2;
        illegal = true;
        edible = 1;
		drinkable = -1;
        icon = "icons\ico_ololiquiSeed.paa";
    };
	
	class ololiqui {
        variable = "ololiqui";
        displayName = "STR_Item_Ololiqui";
        weight = 4;
        buyPrice = -1;
        sellPrice = 450;
        illegal = true;
        edible = 5;
		drinkable = -1;
        icon = "icons\ico_ololiqui.paa";
    };
	
	class peyoteBlossom {
        variable = "peyoteBlossom";
        displayName = "STR_Item_PeyoteBlossom";
        weight = 7;
        buyPrice = -1;
        sellPrice = 3;
        illegal = true;
        edible = 5;
		drinkable = -1;
        icon = "icons\ico_peyoteBlossom.paa";
    };
	
    class peyote {
        variable = "peyote";
        displayName = "STR_Item_Peyote";
        weight = 3;
        buyPrice = -1;
        sellPrice = 250;
        illegal = true;
        edible = 5;
		drinkable = -1;
        icon = "icons\ico_peyote.paa";
    };
	
    class kratomRefined {
        variable = "kratom";
        displayName = "STR_Item_KratomRefined";
        weight = 13;
        buyPrice = -1;
        sellPrice = 3;
        illegal = true;
        edible = 5;
		drinkable = -1;
        icon = "icons\ico_KratomRefined.paa";
    };
	
    class KratomUnrefined {
        variable = "KratomUnrefined";
        displayName = "STR_Item_KratomUnrefined";
        weight = 3;
        buyPrice = -1;
        sellPrice = 150;
        illegal = true;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_KratomUnrefined.paa";
    };

    class marijuana {
        variable = "marijuana";
        displayName = "STR_Item_Marijuana";
        weight = 3;
        buyPrice = 10;
        sellPrice = 7;
        illegal = true;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_marijuana.paa";
    };

    //Drink
    class redgull {
        variable = "redgull";
        displayName = "STR_Item_RedGull";
        weight = 1;
        buyPrice = 6;
        sellPrice = 1;
        illegal = false;
        edible = -1;
		drinkable = 100;
        icon = "icons\ico_redgull.paa";
    };

    class coffee {
        variable = "coffee";
        displayName = "STR_Item_Coffee";
        weight = 1;
        buyPrice = 2;
        sellPrice = 1;
        illegal = false;
        edible = -1;
		drinkable = 100;
        icon = "icons\ico_coffee.paa";
    };

    class waterBottle {
        variable = "waterBottle";
        displayName = "STR_Item_WaterBottle";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
		drinkable = 100;
        icon = "icons\ico_waterBottle.paa";
    };

    //Food
    class apple {
        variable = "apple";
        displayName = "STR_Item_Apple";
        weight = 1;
        buyPrice = 2;
        sellPrice = 1;
        illegal = false;
        edible = 10;
		drinkable = 5;
        icon = "icons\ico_apple.paa";
    };

    class peach {
        variable = "peach";
        displayName = "STR_Item_Peach";
        weight = 1;
        buyPrice = 2;
        sellPrice = 1;
        illegal = false;
        edible = 10;
		drinkable = 5;
        icon = "icons\ico_peach.paa";
    };

    class tbacon {
        variable = "tbacon";
        displayName = "STR_Item_TBacon";
        weight = 1;
        buyPrice = 3;
        sellPrice = 1;
        illegal = false;
        edible = 40;
		drinkable = -1;
        icon = "icons\ico_tBacon.paa";
    };

    class donuts {
        variable = "donuts";
        displayName = "STR_Item_Donuts";
        weight = 1;
        buyPrice = 2;
        sellPrice = 1;
        illegal = false;
        edible = 30;
		drinkable = -1;
        icon = "icons\ico_donuts.paa";
    };

    class rabbit_raw {
        variable = "rabbitRaw";
        displayName = "STR_Item_RabbitRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_rabbitRaw.paa";
    };

    class rabbit {
        variable = "rabbit";
        displayName = "STR_Item_Rabbit";
        weight = 1;
        buyPrice = 3;
        sellPrice = 1;
        illegal = false;
        edible = 20;
		drinkable = -1;
        icon = "icons\ico_rabbit.paa";
    };

    class salema_raw {
        variable = "salemaRaw";
        displayName = "STR_Item_SalemaRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 3;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_salemaRaw.paa";
    };

    class salema {
        variable = "salema";
        displayName = "STR_Item_Salema";
        weight = 1;
        buyPrice = 5;
        sellPrice = 4;
        illegal = false;
        edible = 30;
		drinkable = -1;
        icon = "icons\ico_cookedFish.paa";
    };

    class ornate_raw {
        variable = "ornateRaw";
        displayName = "STR_Item_OrnateRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 3;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_ornateRaw.paa";
    };

    class ornate {
        variable = "ornate";
        displayName = "STR_Item_Ornate";
        weight = 1;
        buyPrice = 2;
        sellPrice = 4;
        illegal = false;
        edible = 25;
		drinkable = -1;
        icon = "icons\ico_cookedFish.paa";
    };

    class mackerel_raw {
        variable = "mackerelRaw";
        displayName = "STR_Item_MackerelRaw";
        weight = 4;
        buyPrice = -1;
        sellPrice = 6;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_mackerelRaw.paa";
    };

    class mackerel {
        variable = "mackerel";
        displayName = "STR_Item_Mackerel";
        weight = 2;
        buyPrice = 8;
        sellPrice = 5;
        illegal = false;
        edible = 30;
		drinkable = -1;
        icon = "icons\ico_cookedFish.paa";
    };

    class tuna_raw {
        variable = "tunaRaw";
        displayName = "STR_Item_TunaRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 5;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_tunaRaw.paa";
    };

    class tuna {
        variable = "tuna";
        displayName = "STR_Item_Tuna";
        weight = 3;
        buyPrice = 6;
        sellPrice = 3;
        illegal = false;
        edible = 100;
		drinkable = -1;
        icon = "icons\ico_cookedFish.paa";
    };

    class mullet_raw {
        variable = "mulletRaw";
        displayName = "STR_Item_MulletRaw";
        weight = 4;
        buyPrice = -1;
        sellPrice = 7;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_mulletRaw.paa";
    };

    class mullet {
        variable = "mullet";
        displayName = "STR_Item_Mullet";
        weight = 2;
        buyPrice = 7;
        sellPrice = 3;
        illegal = false;
        edible = 80;
		drinkable = -1;
        icon = "icons\ico_cookedFish.paa";
    };

    class catshark_raw {
        variable = "catsharkRaw";
        displayName = "STR_Item_CatSharkRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 10;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_catsharkRaw.paa";
    };

    class catshark {
        variable = "catshark";
        displayName = "STR_Item_CatShark";
        weight = 3;
        buyPrice = 12;
        sellPrice = 3;
        illegal = false;
        edible = 100;
		drinkable = -1;
        icon = "icons\ico_cookedFish.paa";
    };

    class turtle_raw {
        variable = "turtleRaw";
        displayName = "STR_Item_TurtleRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 25;
        illegal = true;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_turtleRaw.paa";
    };

    class turtle_soup {
        variable = "turtleSoup";
        displayName = "STR_Item_TurtleSoup";
        weight = 2;
        buyPrice = 5;
        sellPrice = 1;
        illegal = false;
        edible = 100;
		drinkable = -1;
        icon = "icons\ico_turtleSoup.paa";
    };

    class hen_raw {
        variable = "henRaw";
        displayName = "STR_Item_HenRaw";
        weight = 1;
        buyPrice = -1;
        sellPrice = 5;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_wholeChickenRaw.paa";
    };

    class hen {
        variable = "hen";
        displayName = "STR_Item_Hen";
        weight = 1;
        buyPrice = 4;
        sellPrice = 3;
        illegal = false;
        edible = 65;
		drinkable = -1;
        icon = "icons\ico_wholeChicken.paa";
    };

    class rooster_raw {
        variable = "roosterRaw";
        displayName = "STR_Item_RoosterRaw";
        weight = 1;
        buyPrice = -1;
        sellPrice = 5;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_chickenDrumstickRaw.paa";
    };

    class rooster {
        variable = "rooster";
        displayName = "STR_Item_Rooster";
        weight = 115;
        buyPrice = 4;
        sellPrice = 1;
        illegal = false;
        edible = 45;
		drinkable = -1;
        icon = "icons\ico_chickenDrumstick.paa";
    };

    class sheep_raw {
        variable = "sheepRaw";
        displayName = "STR_Item_SheepRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 25;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_lambChopRaw.paa";
    };

    class sheep {
        variable = "sheep";
        displayName = "STR_Item_Sheep";
        weight = 2;
        buyPrice = 10;
        sellPrice = 5;
        illegal = false;
        edible = 100;
		drinkable = -1;
        icon = "icons\ico_lambChop.paa";
    };

    class goat_raw {
        variable = "goatRaw";
        displayName = "STR_Item_GoatRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 25;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_muttonLegRaw.paa";
    };

    class goat {
        variable = "goat";
        displayName = "STR_Item_Goat";
        weight = 2;
        buyPrice = 5;
        sellPrice = 10;
        illegal = false;
        edible = 100;
		drinkable = -1;
        icon = "icons\ico_muttonLeg.paa";
    };
};
