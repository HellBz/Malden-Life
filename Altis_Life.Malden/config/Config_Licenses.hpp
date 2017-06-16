/*
*    class:
*        variable = Variable Name
*        displayName = License Name
*        price = License Price
*        illegal = Illegal License
*        side = side indicator
*/
class Licenses {
    //Civilian Licenses
    class driver {
        variable = "driver";
        displayName = "STR_License_Driver";
        price = 1250;
        illegal = false;
        side = "civ";
		editable = true;
		editableBy = "blufor";
		editableCondition = "[] call life_coplevel > 0";
    };

    class boat {
        variable = "boat";
        displayName = "STR_License_Boat";
        price = 670;
        illegal = false;
        side = "civ";
		editable = true;
		editableBy = "blufor";
		editableCondition = "[] call life_coplevel > 0";
    };

    class pilot {
        variable = "pilot";
        displayName = "STR_License_Pilot";
        price = 28100;
        illegal = false;
        side = "civ";
		editable = true;
		editableBy = "blufor";
		editableCondition = "[] call life_coplevel > 0";
    };

    class trucking {
        variable = "trucking";
        displayName = "STR_License_Truck";
        price = 2400;
        illegal = false;
        side = "civ";
		editable = true;
		editableBy = "blufor";
		editableCondition = "[] call life_coplevel > 0";
    };

    class gun {
        variable = "gun";
        displayName = "STR_License_Firearm";
        price = 2500;
        illegal = false;
        side = "civ";
		editable = true;
		editableBy = "blufor";
		editableCondition = "[] call life_coplevel > 0";
    };
	
	class hunting {
        variable = "hunting";
        displayName = "STR_License_Hunting";
        price = 2500;
        illegal = false;
        side = "civ";
		editable = true;
		editableBy = "blufor";
		editableCondition = "[] call life_coplevel > 0";
    };

    class dive {
        variable = "dive";
        displayName = "STR_License_Diving";
        price = 350;
        illegal = false;
        side = "civ";
		editable = false;
    };

    class home {
        variable = "home";
        displayName = "STR_License_Home";
        price = 1200;
        illegal = false;
        side = "civ";
		editable = false;
    };

    //Processing Licenses
    class Avangenbeer {
        variable = "Avangenbeer";
        displayName = "STR_License_Avangenbeer";
        price = 9000;
        illegal = false;
        side = "civ";
		editable = false;
    };
	
	class pearl {
        variable = "pearl";
        displayName = "STR_License_Pearl";
        price = 11000;
        illegal = false;
        side = "civ";
		editable = false;
    };
	
	class beer {
        variable = "beer";
        displayName = "STR_License_Beer";
        price = 2500;
        illegal = false;
        side = "civ";
		editable = false;
    };
	
	class oil {
        variable = "oil";
        displayName = "STR_License_Oil";
        price = 14500;
        illegal = false;
        side = "civ";
		editable = false;
    };

    class iron {
        variable = "iron";
        displayName = "STR_License_Iron";
        price = 1500;
        illegal = false;
        side = "civ";
		editable = false;
    };

    class copper {
        variable = "copper";
        displayName = "STR_License_Copper";
        price = 250;
        illegal = false;
        side = "civ";
		editable = false;
    };
	
	class gold {
        variable = "gold";
        displayName = "STR_License_Gold";
        price = 19800;
        illegal = false;
        side = "civ";
		editable = false;
    };
	
	class silver {
        variable = "silver";
        displayName = "STR_License_Silver";
        price = 15400;
        illegal = false;
        side = "civ";
		editable = false;
    };
	
	class freight {
        variable = "freight";
        displayName = "STR_License_Freight";
        price = 18300;
        illegal = false;
        side = "civ";
		editable = false;
    };

    class cement {
        variable = "cement";
        displayName = "STR_License_Cement";
        price = 150;
        illegal = false;
        side = "civ";
		editable = false;
    };

    //Illegal Licenses
    class kratom {
        variable = "kratom";
        displayName = "STR_License_Kratom";
        price = 23500;
        illegal = true;
        side = "civ";
		editable = false;
    };
	
	class peyote {
        variable = "peyote";
        displayName = "STR_License_Peyote";
        price = 23500;
        illegal = true;
        side = "civ";
		editable = false;
    };
	
	class ololiqui {
        variable = "ololiqui";
        displayName = "STR_License_Ololiqui";
        price = 23500;
        illegal = true;
        side = "civ";
		editable = false;
    };

    class rebel {
        variable = "rebel";
        displayName = "STR_License_Rebel";
        price = 12500;
        illegal = true;
        side = "civ";
		editable = false;
    };

    //Cop Licenses
    class cAir {
        variable = "cAir";
        displayName = "STR_License_Pilot";
        price = 350;
        illegal = false;
        side = "cop";
		editable = false;
    };

    class cg {
        variable = "cg";
        displayName = "STR_License_CG";
        price = 350;
        illegal = false;
        side = "cop";
		editable = false;
    };

    //Medic Licenses
    class mAir {
        variable = "mAir";
        displayName = "STR_License_Pilot";
        price = 350;
        illegal = false;
        side = "med";
		editable = false;
    };
};
