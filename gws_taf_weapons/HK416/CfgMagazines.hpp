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
	
	class gws_magazine_hk416 : CA_Magazine {
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

	class gws_5x56_30_HK416: gws_magazine_hk416 {
		scope = 2;
		displayName = "5x56mm 30Rnd HK416";
		model = "\gws_taf_weapons\HK416\gws_m4_Mag.p3d";
		ammo = "B_556x45_Ball";
		picture = "\gws_taf_weapons\HK416\data\UI\m_30stanag_ca.paa";
		lastRoundsTracer = 4;
		count = 30;
		initSpeed = 800;
	};

	class gws_5x56_30_HK416_Red: gws_magazine_hk416 {
		scope = 2;
		displayName = "5x56mm 30Rnd HK416 Tracer Red";
		model = "\gws_taf_weapons\HK416\gws_m4_Mag.p3d";
		ammo = "B_556x45_Ball_Tracer_Red";
		picture = "\gws_taf_weapons\HK416\data\UI\m_30stanagred_ca.paa";
		lastRoundsTracer = 10;
		count = 30;
		initSpeed = 800;
	};

	class gws_5x56_30_HK416_Green: gws_magazine_hk416 {
		scope = 2;
		displayName = "5x56mm 30Rnd HK416 Tracer Green";
		model = "\gws_taf_weapons\HK416\gws_m4_Mag.p3d";
		ammo = "B_556x45_Ball_Tracer_Green";
		picture = "\gws_taf_weapons\HK416\data\UI\m_30stanaggreen_ca.paa";
		lastRoundsTracer = 10;
		count = 30;
		initSpeed = 800;
	};

	class gws_5x56_30_HK416_Yellow: gws_magazine_hk416 {
		scope = 2;
		displayName = "5x56mm 30Rnd HK416 Tracer Yellow";
		model = "\gws_taf_weapons\HK416\gws_m4_Mag.p3d";
		ammo = "B_556x45_Ball_Tracer_Yellow";
		picture = "\gws_taf_weapons\HK416\data\UI\m_30stanagyellow_ca.paa";
		lastRoundsTracer = 10;
		count = 30;
		initSpeed = 800;
	};


};

