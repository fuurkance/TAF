class CfgPatches {
	class gws_taf_headgear {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};

class CfgWeapons {
	class ItemCore;	// External class reference
	class InventoryItem_Base_F;	// External class reference
	class HeadgearItem;
	
	class gws_taf_m88_helmet: ItemCore {
		scope = 2;
		author = "Grey Wolf Studio";
		weaponPoolAvailable = 1;
		displayName = "[TAF] M88 Helmet";
		picture = "\A3\characters_F_Beta\Data\UI\icon_H_I_Helmet_canvas_ca.paa";
		model = "\gws_taf_units\HeadGear\headgear_helmet_ts";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"gws_taf_units\HeadGear\data\headgear_helmet_ts_co.paa"};
		class ItemInfo: HeadgearItem {
			mass = 100;
			allowedSlots[] = {901,605};
			uniformModel = "\gws_taf_units\HeadGear\gws_taf_m88_helmet.p3d";
			modelSides[] = {2,3};
			armor = "3*0.4";
			passThrough = 0.85;
			hiddenSelections[] = {"camo"};
		};
	};
 
	class gws_taf_cap: ItemCore {
		scope = 2;
		author = "Grey Wolf Studio";
		weaponPoolAvailable = 1;
		displayName = "[TAF] Cap (Astb)";
		picture = "\A3\characters_F_Beta\Data\UI\icon_H_I_Helmet_canvas_ca.paa";
		model = "\gws_taf_units\HeadGear\gws_taf_cap";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"gws_taf_units\HeadGear\data\gws_taf_cap_astb_co.paa"};
		class ItemInfo: HeadgearItem {
			mass = 100;
			allowedSlots[] = {901,605};
			uniformModel = "\gws_taf_units\HeadGear\gws_taf_cap.p3d";
			modelSides[] = {2,3};
			armor = "3*0.4";
			passThrough = 0.85;
			hiddenSelections[] = {"camo"};
		};
	};
	class gws_taf_cap_sby: ItemCore {
		scope = 2;
		author = "Grey Wolf Studio";
		weaponPoolAvailable = 1;
		displayName = "[TAF] Cap (Sby)";
		picture = "\A3\characters_F_Beta\Data\UI\icon_H_I_Helmet_canvas_ca.paa";
		model = "\gws_taf_units\HeadGear\gws_taf_cap";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"gws_taf_units\HeadGear\data\gws_taf_cap_sby_co.paa"};
		class ItemInfo: HeadgearItem {
			mass = 100;
			allowedSlots[] = {901,605};
			uniformModel = "\gws_taf_units\HeadGear\gws_taf_cap.p3d";
			modelSides[] = {2,3};
			armor = "3*0.4";
			passThrough = 0.85;
			hiddenSelections[] = {"camo"};
		};
	};

	class gws_taf_maroon_beret_sby : ItemCore {
        author = "Grey Wolf Studio"; 
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "[TAF] Maroon Beret (Sby)";
        picture = "\gws_taf_units\HeadGear\data\ui\gws_taf_maroonberet_ca.paa";
        model = "\A3\Characters_F\Common\headgear_beret01";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\gws_taf_units\HeadGear\data\gws_maroonberet_sby.paa"};
        
        class ItemInfo : HeadgearItem {
            mass = 30;
            uniformModel = "\A3\Characters_F\Common\headgear_beret01";
            modelSides[] = {3, 1};
            armor = 14;
            passThrough = 0.2;
            hiddenSelections[] = {"camo"};
        };
    };

    class gws_taf_maroon_beret_astb : ItemCore {
        author = "Grey Wolf Studio"; 
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "[TAF] Maroon Beret (Astb)";
        picture = "\gws_taf_units\HeadGear\data\ui\gws_taf_maroonberet_ca.paa";
        model = "\A3\Characters_F\Common\headgear_beret01";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\gws_taf_units\HeadGear\data\gws_maroonberet_astb.paa"};
        
        class ItemInfo : HeadgearItem {
            mass = 30;
            uniformModel = "\A3\Characters_F\Common\headgear_beret01";
            modelSides[] = {3, 1};
            armor = 14;
            passThrough = 0.2;
            hiddenSelections[] = {"camo"};
        };
    };

	class gws_taf_ops_core: ItemCore {
		scope = 2;
		author = "Grey Wolf Studio";
		weaponPoolAvailable = 1;
		displayName = "[TAF] Ops Core";
		picture = "\A3\characters_F_Beta\Data\UI\icon_H_I_Helmet_canvas_ca.paa";
		model = "\gws_taf_units\HeadGear\gws_taf_ops_core";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"gws_taf_units\HeadGear\data\gws_ops_core_co.paa"};
		class ItemInfo: HeadgearItem {
			mass = 100;
			allowedSlots[] = {901,605};
			uniformModel = "\gws_taf_units\HeadGear\gws_taf_ops_core.p3d";
			modelSides[] = {2,3};
			armor = "9";
			passThrough = 0.85;
			hiddenSelections[] = {"camo"};
		};
	};
};