class RscTitles
{	
    class CutsceneDisplay
    {	
		 idd = 80000;
		 movingEnable = false;
		 name = "";
		 fadein = 0;
		 fadeout = 0;
		 duration = 99999;
		 controls[] = {"Background"};
		
		 class Background: RscPicture
		 {	
			text = "background_VR.jpg";
			x = 0 * safezoneW + safezoneX;
			y = 0 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		 };	
   };
};
	
