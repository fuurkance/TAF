#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class gws_taf_scene
	{
		units[]= {};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[] = {"A3_Map_Altis","A3_Map_Stratis","A3_Map_Stratis_Scenes", "A3_Map_Altis_Scenes"};

	};
};

class CfgMissions 
{
	class Cutscenes 
	{
		class Stratis_intro1 //keep the BIS name to make it work
		{
			directory = "gws_taf_data\scene\Stratis_Cutscene.Stratis";
		};
		class Altis_intro1   //keep the BIS name to make it work
		{
			directory = "gws_taf_data\scene\Altis_Cutscene.Altis";
		};		
		class Map_VR_anim01  //keep the BIS name to make it work
		{
			directory = "gws_taf_data\scene\VR_Cutscene.VR";
		};
	};
};
