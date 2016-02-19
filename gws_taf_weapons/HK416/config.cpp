#define _ARMA_

//ndefs=13
enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	stabilizedinaxisx = 1,
	stabilizedinaxesxyz = 4,
	stabilizedinaxisy = 2,
	stabilizedinaxesboth = 3,
	destructno = 0,
	stabilizedinaxesnone = 0,
	destructman = 5,
	destructbuilding = 1
};

class CfgPatches
{
	class GWS_Weapons_HK416
	{
		units[] = {};
		weapons[] = {"GWS_HK416"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F","A3_Weapons_F_Acc","A3_Anims_F"};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class UnderBarrelSlot;
class asdg_OpticRail1913;
class asdg_FrontSideRail;

#include "CfgMagazines.hpp"

class CfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class ItemInfo: InventoryMuzzleItem_Base_F{};
	class muzzle_snds_H;
	class muzzle_snds_L;
	
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class UGL_F;
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
	};
	class Launcher;


	
	
	class GWS_HK416_BASE: Rifle_Base_F
	{
		scope = 1;
		magazines[] = {"gws_5x56_30_HK416","gws_5x56_30_HK416_Red","gws_5x56_30_HK416_Green","gws_5x56_30_HK416_Yellow"};

		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"muzzle_snds_B"};
				
			};
			class asdg_FrontSideRail_TS_HK416: asdg_FrontSideRail{};
			class asdg_OpticRail_TS_HK416: asdg_OpticRail1913{};
		};
		
		class Library
		{
			libTextDesc = "HK416";
		};
		reloadAction = "GestureReloadmx";

		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "CaselessAmmoCloud";
			};
		};
		
		
		opticsZoomMin = 0.375;
		opticsZoomMax = 1.1;
		opticsZoomInit = 0.75;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		modes[] = {	"Single","Burst","single_close_optics1","single_medium_optics1","single_far_optics1",};
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.63095737,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.63095737,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.63095737,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.63095737,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.63095737,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.63095737,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.63095737,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.63095737,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.63095737,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.63095737,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.63095737,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.63095737,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_dry",0.25118864,1,20};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_reload",1.0,1,10};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_firemode",0.31622776,1,5};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_closure_01",0.39810717,1.2,30};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_closure_02",0.39810717,1,30};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\gws_taf_weapons\HK416\Sound\hk.wav",1,1,1200};
				begin2[] = {"\gws_taf_weapons\HK416\Sound\hk.wav",1,1,1200};
				begin3[] = {"\gws_taf_weapons\HK416\Sound\hk.wav",1,1,1200};
				soundBegin[] = {"begin1",0.34,"begin2",0.33,"begin3",0.33};
				class SoundTails
				{
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_forest",1.0,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_houses",1.0,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_interior",1.9952624,1,2000};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_meadows",1.0,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_trees",1.0,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_short_01",1.0,1,600};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_short_02",1.0,1,600};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_short_03",1.0,1,600};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin1",0.34};
				class SoundTails
				{
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_forest",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_houses",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_interior",1.0,1,600};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_meadows",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_trees",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
			reloadTime = 0.086;
			dispersion = 0.00058;
			recoil = "recoil_single_dmr";
			recoilProne = "recoil_single_prone_dmr";
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.05;
		};
		class Burst: Mode_Burst 
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_closure_01",0.39810717,1.2,30};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_closure_02",0.39810717,1,30};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\gws_taf_weapons\HK416\Sound\hk.wav",1,1,1200};
				begin2[] = {"\gws_taf_weapons\HK416\Sound\hk.wav",1,1,1200};
				begin3[] = {"\gws_taf_weapons\HK416\Sound\hk.wav",1,1,1200};
				soundBegin[] = {"begin1",0.34,"begin2",0.33,"begin3",0.33};
				class SoundTails
				{
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_forest",1.0,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_houses",1.0,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_interior",1.0,1,2000};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_meadows",1.0,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_trees",1.0,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_short_01",1.0,1,600};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_short_02",1.0,1,600};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_short_03",1.0,1,600};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin1",0.34};
				class SoundTails
				{
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_forest",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_houses",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_interior",1.0,1,600};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_meadows",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_trees",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
			reloadTime = 0.086;
			dispersion = 0.00058;
			recoil = "recoil_auto_dmr";
			recoilProne = "recoil_auto_prone_dmr";
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-006;
		};
		class single_close_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.05;
			midRange = 300;
			midRangeProbab = 0.8;
			maxRange = 500;
			maxRangeProbab = 0.01;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
		};
		class single_medium_optics1: single_close_optics1
		{
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.7;
			maxRange = 700;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class single_far_optics1: single_medium_optics1
		{
			requiredOpticType = 2;
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 700;
			midRangeProbab = 0.5;
			maxRange = 1000;
			maxRangeProbab = 0.05;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
		};
		
		
		aiDispersionCoefY = 6.0;
		aiDispersionCoefX = 4.0;
	};
	
	class GWS_HK416:  GWS_HK416_BASE
	{
		scope = 2;
		displayName = "HK416";
		model = "\gws_taf_weapons\HK416\gws_hk416.p3d";
		picture = "\gws_taf_weapons\HK416\data\UI\gear_HK416_x_ca.paa";
		UiPicture = "\A3\weapons_f\data\HK416\icon_regular_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton","\gws_taf_weapons\HK416\data\Anim\m4.rtm"};

		
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot {
				access = 0;
			};
			class PointerSlot {
				access = 0;
			};
		};
		class ItemInfo
		{
			priority = 1;
			RMBhint = "HK416";
			onHoverText = "TODO HK416 DSS";
		};
	};
	
};