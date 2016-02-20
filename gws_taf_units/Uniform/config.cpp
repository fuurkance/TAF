class CfgPatches {
	class gws_taf_uniform {
		version="0.1";
		units[]={};
		weapons[]={};
		requiredVersion="0.1";
		requiredAddons[]= {
			"A3_Characters_F"
		};
	};
};
class CfgVehicles {
	class B_Soldier_base_F;
	class GWS_TAF_Uniform_Base: B_Soldier_base_F {
		scope=2;
		model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]= {
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]= {
			"gws_taf_units\Uniform\data\uniform_co.paa"
		};
		hiddenSelectionsMaterials[]= {
			"gws_taf_units\Uniform\data\uniform.rvmat"
		};
	};

	class GWS_TAF_Uniform1_Base: B_Soldier_base_F {
		scope=2;
		model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]= {
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]= {
			"gws_taf_units\Uniform\data\uniform1_co.paa"
		};
		hiddenSelectionsMaterials[]= {
			"gws_taf_units\Uniform\data\uniform1.rvmat"
		};
	};
	
};
class CfgWeapons {
	class ItemInfo;
	class ItemCore;
	class UniformItem;
	class Uniform_Base: ItemCore {
		class ItemInfo;
	};
	class GWS_TAF_Uniform_Combat: Uniform_Base {
		scope=2;
		author = "Grey Wolf Studio"; 
		displayName="[TAF] Combat Uniform";
		picture="\a3\characters_f\data\ui\icon_f_b_combatuniform_ocam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		
		class ItemInfo: UniformItem {
			uniformModel="-";
			uniformClass="GWS_TAF_Uniform_Base";
			containerClass="Supply40";
			mass=40;
		};
	};
	class GWS_TAF_Uniform1_Combat: Uniform_Base {
		scope=2;
		author = "Grey Wolf Studio"; 
		displayName="[TAF] Combat Unif1orm";
		picture="\a3\characters_f\data\ui\icon_f_b_combatuniform_ocam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		
		class ItemInfo: UniformItem {
			uniformModel="-";
			uniformClass="GWS_TAF_Uniform1_Base";
			containerClass="Supply40";
			mass=40;
		};
	};

};