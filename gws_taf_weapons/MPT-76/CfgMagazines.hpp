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
	
	class GWS_Magazine : CA_Magazine {
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
		count = 20;
		type = 256;
		initSpeed = 900;
		selectionFireAnim = "zasleh";
		nameSound = "magazine";
		maxLeadSpeed = 23;
		weaponpoolavailable = 1;
		mass = 7;
	};

	
	class GWS_20rnd_MPT_76_762: GWS_Magazine {
		scope = 2;
		author = "Grey Wolf Studio";
		displayName = "MPT-76 Mag";
		model = "\gws_taf_weapons\MPT-76\GWS_MPT_Mag.p3d";
		ammo = "B_762x51_Ball";
		picture = "\gws_taf_weapons\MPT-76\data\UI\m_mpt_ca.paa";
		lastRoundsTracer = 4;
		count = 20;
		initSpeed = 800;
	};
	class GWS_20rnd_MPT_76_762_T: GWS_Magazine {
		scope = 2;
		author = "Grey Wolf Studio";
		displayName = "MPT-76 Mag Tracer";
		model = "\gws_taf_weapons\MPT-76\GWS_MPT_Mag.p3d";
		ammo = "B_762x51_Tracer_Green";
		picture = "\gws_taf_weapons\MPT-76\data\UI\m_mpt_ca_g.paa";
		lastRoundsTracer = 20;
		count = 20;
		initSpeed = 800;
	};
	
};

