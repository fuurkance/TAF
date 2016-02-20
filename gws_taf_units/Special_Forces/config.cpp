class CfgPatches {
    class gws_taf_special_forces {
        units[] = {"GWS_TAF_LF_Rifleman_Light"};
        weapons[] = {
        	"GWS_TAF_Uniform_2014",
        	"GWS_TAF_Uniform_2014_2",
        	"GWS_TAF_ia_vest_01",
        	"GWS_TAF_ia_vest_02"
        };
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_Characters_F"};
    };
};

class CfgFactionClasses {
    access = "ReadAndCreate";
    
    class TAF_Faction_SP {
        displayName = "TAF - Special Forces";
        priority = 2;
        side = 1;
        icon = "\gws_taf_units\Special_Forces\data\gws_turkey_flag_icon.paa";
    };
};


class CfgVehicleClasses {
    class TAF_special_forces {
        displayName = "Men";
    };
};

class CfgVehicles {
    class I_Soldier_base_F;
    class I_Soldier_LAT_F;
    class I_Soldier_AR_F;
    class I_Soldier_sniper_base_F;
    class I_medic_F;
    class I_soldier_M_F;
    class I_Soldier_exp_F;
    class I_Soldier_SL_F;
    class I_engineer_F;
    class I_officer_F;
    class I_crew_F;
    class I_helipilot_F;
    class I_pilot_F;

    class B_Kitbag_cbr;

    class GWS_TAF_Kitbag_cbr: B_Kitbag_cbr {
        scope=2;
        displayname="[TAF] Assault Pack Nano";
        author="Grey Wolf Studio";
        picture="-";
        hiddenSelections[]= {"camo"};
        hiddenselectionstextures[]= {"\gws_taf_units\Special_Forces\data\GWS_TAF_Kitbag_cbr.paa"};
    };

	class GWS_TAF_SF_Rifleman_Light : I_Soldier_base_F {
		_generalMacro = "GWS_TAF_SF_Rifleman_Light";
		author = "Grey Wolf Studio";
		
		scope = 2; 
		side = 1;
	
		faction = "TAF_Faction_SP";
		vehicleClass = "TAF_special_forces";
		
		displayName = "Rifleman Beret";
		
		uniformClass = "GWS_TAF_Uniform_Combat";
		
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\gws_taf_units\Uniform\data\uniform_co.paa"};
		
		identityTypes[] =  {"NoGlasses"};
		faceType = "Man_A3";
		genericNames="TAF_Names";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"GWS_MPT_76", "Throw", "Put"};
		respawnWeapons[] = {"GWS_MPT_76", "Throw", "Put"};
		
		magazines[] = {"GWS_20rnd_MPT_76_762", "GWS_20rnd_MPT_76_762","GWS_20rnd_MPT_76_762","GWS_20rnd_MPT_76_762","GWS_20rnd_MPT_76_762","GWS_20rnd_MPT_76_762","GWS_20rnd_MPT_76_762","GWS_20rnd_MPT_76_762","HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"GWS_20rnd_MPT_76_762", "GWS_20rnd_MPT_76_762","GWS_20rnd_MPT_76_762","GWS_20rnd_MPT_76_762","GWS_20rnd_MPT_76_762","GWS_20rnd_MPT_76_762","GWS_20rnd_MPT_76_762","GWS_20rnd_MPT_76_762","HandGrenade", "HandGrenade"};
	
		linkedItems[] = {"gws_taf_carrier_vest3", "gws_taf_maroon_beret_sby", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"gws_taf_carrier_vest3", "gws_taf_maroon_beret_sby", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "";
	};

	class GWS_TAF_SF_Rifleman : I_Soldier_base_F {
		_generalMacro = "GWS_TAF_SF_Rifleman_Light";
		author = "Grey Wolf Studio";
		
		scope = 2; 
		side = 1;
	
		faction = "TAF_Faction_SP";
		vehicleClass = "TAF_special_forces";
		
		displayName = "Rifleman MPT76";
		
		uniformClass = "GWS_TAF_Uniform1_Combat";
		
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\gws_taf_units\Uniform\data\uniform1_co.paa"};
		
		identityTypes[] =  {"NoGlasses"};
		faceType = "Man_A3";
		genericNames="TAF_Names";
		
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		
		weapons[] = {"GWS_MPT_76", "Throw", "Put"};
		respawnWeapons[] = {"GWS_MPT_76", "Throw", "Put"};
		
		magazines[] = {"GWS_20rnd_MPT_76_762", "GWS_20rnd_MPT_76_762","GWS_20rnd_MPT_76_762","GWS_20rnd_MPT_76_762","GWS_20rnd_MPT_76_762","GWS_20rnd_MPT_76_762","GWS_20rnd_MPT_76_762","GWS_20rnd_MPT_76_762","HandGrenade", "HandGrenade"};
		respawnMagazines[] = {"GWS_20rnd_MPT_76_762", "GWS_20rnd_MPT_76_762","GWS_20rnd_MPT_76_762","GWS_20rnd_MPT_76_762","GWS_20rnd_MPT_76_762","GWS_20rnd_MPT_76_762","GWS_20rnd_MPT_76_762","GWS_20rnd_MPT_76_762","HandGrenade", "HandGrenade"};
	
		linkedItems[] = {"gws_taf_carrier_vest3", "gws_taf_ops_core", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"gws_taf_carrier_vest3", "gws_taf_ops_core", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		backpack = "GWS_TAF_Kitbag_cbr";
	};
};
class CfgWeapons  { 
    class ItemCore; 

    class VestItem; 
    class Vest_Camo_Base: ItemCore  { 
        class ItemInfo; 
    }; 
     
    class gws_taf_carrier_vest: Vest_Camo_Base  { 
        scope = 2; 
        author = "Grey Wolf Studio";
        displayName = "Custom Platecarrier"; 
        picture = "-"; 
        model = "A3\Characters_F\BLUFOR\equip_b_Vest01"; 
        hiddenSelections[] = {"Camo"}; 
        hiddenSelectionsTextures[] = {"\gws_taf_units\Special_Forces\data\gws_taf_carrier_vest.paa"}; 
        class ItemInfo: VestItem  { 
            uniformModel = "A3\Characters_F\BLUFOR\equip_b_Vest01.p3d"; 
            containerClass = "Supply120"; 
            mass = 80; 
            armor = "5"; 
            passThrough = 0.3; 
            hiddenSelections[] = {"camo"}; 
        }; 
    };
    class gws_taf_carrier_vest2: Vest_Camo_Base  { 
        scope = 2;
        author = "Grey Wolf Studio";
        displayName = "Custom Platecarrier Lite"; 
        picture = "-"; 
        model = "A3\Characters_F\BLUFOR\equip_b_Vest02"; 
        hiddenSelections[] = {"Camo"}; 
        hiddenSelectionsTextures[] ={"\gws_taf_units\Special_Forces\data\gws_taf_carrier_vest.paa"};  
        class ItemInfo: VestItem  { 
            uniformModel = "A3\Characters_F\BLUFOR\equip_b_Vest02.p3d"; 
            containerClass = "Supply120"; 
            mass = 80; 
            armor = "5"; 
            passThrough = 0.3; 
            hiddenSelections[] = {"camo"}; 
        }; 
    };

     class gws_taf_carrier_vest3: Vest_Camo_Base  { 
        scope = 2;
        author = "Grey Wolf Studio";
        displayName = "Custom Platecarrier Lite"; 
        picture = "-"; 
        model = "A3\Charactrs_F_EPA\BLUFOR\equip_b_vest_kerry";  
        hiddenSelections[] = {"Camo"}; 
        hiddenSelectionsTextures[] ={"\gws_taf_units\Special_Forces\data\gws_taf_carrier_vest.paa"};  
        class ItemInfo: VestItem  { 
            uniformModel = "A3\Charactrs_F_EPA\BLUFOR\equip_b_vest_kerry"; 
            containerClass = "Supply120"; 
            mass = 80; 
            armor = "5"; 
            passThrough = 0.3; 
            hiddenSelections[] = {"camo"}; 
        }; 
    };
};   