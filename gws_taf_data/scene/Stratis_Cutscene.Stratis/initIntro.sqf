//create static background via dialogue RscPicture
cutRsc ["CutsceneDisplay", "PLAIN",0];
//start initial music
playMusic "AmbientTrack01_F"; 
//disable environment sounds and animals
enableEnvironment false;
//replay music as soon as first track ends
addMusicEventHandler ["MusicStop",{playMusic "AmbientTrack01_F"}];
//disable environment sounds and animals
enableEnvironment false;
//disable simulation of player unit in order to get rid of footstep sounds
player enableSimulation false;

