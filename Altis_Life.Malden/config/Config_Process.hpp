/*
*   class:
*       MaterialsReq (Needed to process) = Array - Format -> {{"ITEM CLASS",HOWMANY}}
*       MaterialsGive (Returned items) = Array - Format -> {{"ITEM CLASS",HOWMANY}}
*       Text (Progess Bar Text) = Localised String
*       NoLicenseCost (Cost to process w/o license) = Scalar
*
*   Example for multiprocess:
*
*   class Example {
*       MaterialsReq[] = {{"cocaine_processed",1},{"heroin_processed",1}};
*       MaterialsGive[] = {{"diamond_cut",1}};
*       Text = "STR_Process_Example";
*       //ScrollText = "Process Example";
*       NoLicenseCost = 4000;
*   };
*/

class ProcessAction {
    class oil {
        MaterialsReq[] = {{"oil_unprocessed",1}};
        MaterialsGive[] = {{"oil_processed",1}};
        Text = "STR_Process_Oil";
        //ScrollText = "Process Oil";
        NoLicenseCost = 350;
    };

    class copper {
        MaterialsReq[] = {{"copper_unrefined",1}};
        MaterialsGive[] = {{"copper_refined",1}};
        Text = "STR_Process_Copper";
        //ScrollText = "Refine Copper";
        NoLicenseCost = 350;
    };

    class iron {
        MaterialsReq[] = {{"iron_unrefined",1}};
        MaterialsGive[] = {{"iron_refined",1}};
        Text = "STR_Process_Iron";
        //ScrollText = "Refine Iron";
        NoLicenseCost = 350;
    };
	
	class silver {
        MaterialsReq[] = {{"silver_unrefined",1}};
        MaterialsGive[] = {{"silver_refined",1}};
        Text = "STR_Process_Silver";
        //ScrollText = "Refine Iron";
        NoLicenseCost = 350;
    };
	
	class beer {
        MaterialsReq[] = {{"hopfen",2}};
        MaterialsGive[] = {{"beer",1}};
        Text = "STR_Process_Beer";
        //ScrollText = "Refine Iron";
        NoLicenseCost = 350;
    };
	
	class avangenBeer {
        MaterialsReq[] = {{"hopfen",1}};
        MaterialsGive[] = {{"agavenBeer",1}};
        Text = "STR_Process_AvangenBeer";
        //ScrollText = "Refine Iron";
        NoLicenseCost = 350;
    };
	
	class pearl {
        MaterialsReq[] = {{"shell",1}};
        MaterialsGive[] = {{"pearl",1}};
        Text = "STR_Process_Pearl";
        //ScrollText = "Refine Iron";
        NoLicenseCost = 350;
    };
	
	class gold {
        MaterialsReq[] = {{"gold_unrefined",2}};
        MaterialsGive[] = {{"gold_refined",1}};
        Text = "STR_Process_Gold";
        //ScrollText = "Refine Iron";
        NoLicenseCost = 750;
    };

    class cement {
        MaterialsReq[] = {{"rock",1}};
        MaterialsGive[] = {{"cement",1}};
        Text = "STR_Process_Cement";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 350;
    };
	
	class ololiqui {
        MaterialsReq[] = {{"ololiquiSeed",1}, {"agavenBeer",1}};
        MaterialsGive[] = {{"ololiqui",1}};
        Text = "STR_Process_Ololiqui";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 350;
    };
	
	class peyote {
        MaterialsReq[] = {{"peyoteBlossom",1}};
        MaterialsGive[] = {{"peyote",1}};
        Text = "STR_Process_Peyote";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 350;
    };
	
	class Kratom {
        MaterialsReq[] = {{"KratomUnrefined",1}};
        MaterialsGive[] = {{"kratomRefined",1}};
        Text = "STR_Process_Kratom";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 350;
    };
};

