//create static background via dialogue RscPicture
cutRsc ["CutsceneDisplay", "PLAIN",0];
//disable environment sounds and animals
enableEnvironment false;
//start initial music
playMusic "LeadTrack01_F_Curator";;
//replay music as soon as first track ends
addMusicEventHandler ["MusicStop",{playMusic "LeadTrack01_F_Curator";}];
//disable simulation of player unit in order to get rid of footstep sounds
player enableSimulation false;