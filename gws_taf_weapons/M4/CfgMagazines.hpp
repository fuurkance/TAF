////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 3.52
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////


class CfgMagazines {
	class Default;	// External class reference
	class CA_Magazine;
	class BulletBase;
	class 20Rnd_556x45_UW_mag;
	class CA_LauncherMagazine;
	
	class gws_magazine_m4 : CA_Magazine {
		scope = 1;
		value = 1;
		displayName = "";
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		picture = "";
		modelSpecial = "";
		useAction = 0;
		useActionTitle = "";
		reloadAction = "";
		ammo = "";
		count = 10;
		type = 256;
		initSpeed = 900;
		selectionFireAnim = "zasleh";
		nameSound = "magazine";
		maxLeadSpeed = 23;
		weaponpoolavailable = 1;
		mass = 7;
	};

	class gws_30rnd_m4_556: gws_magazine_m4 {
		scope = 2;
		displayName = "M4 Mag";
		model = "\gws_taf_weapons\m4\gws_m4_Mag.p3d";
		ammo = "B_556x45_Ball";
		picture = "\gws_taf_weapons\m4\data\UI\gear_M4_M_ca.paa";
		lastRoundsTracer = 4;
		count = 30;
		initSpeed = 800;
	};

	class gws_30rnd_m4_556_T: gws_magazine_m4 {
		scope = 2;
		displayName = "M4 Mag Tracer";
		model = "\gws_taf_weapons\m4\gws_m4_Mag.p3d";
		ammo = "B_556x45_Ball";
		picture = "\gws_taf_weapons\m4\data\UI\gear_M4T_M_CA.paa";
		lastRoundsTracer = 10;
		count = 30;
		initSpeed = 800;
	};


};

