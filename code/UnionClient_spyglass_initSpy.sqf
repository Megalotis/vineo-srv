/*

	Filename: 	UnionClient_spyglass_initSpy.sqf
	Project: 	Union Altis Life RPG
	Author:		Merrick & Affect
	Steam:		76561198006439083 & 76561198053094990
	Web:		http://vineo.life/

*/
#include "..\script_macros.hpp"
if(isServer && !hasInterface) exitWith {}; //Server doesn't need to know.

SVAR_UINS["RscDisplayRemoteMissions",displayNull]; //For Spy-Glass..
SVAR_UINS["RscDisplayMultiplayer",displayNull];

//Check for copy-pasters of Dev-Con styled execution.
//Because I am nice, add these to the following below to allow CBA; "CBA_CREDITS_CONT_C","CBA_CREDITS_M_P
private["_children","_allowedChildren"];
_children = [configFile >> "RscDisplayMPInterrupt" >> "controls",0] call BIS_fnc_returnChildren;
_allowedChildren = ["Title","MissionTitle","PlayersName","ButtonCancel","ButtonSAVE","ButtonSkip","ButtonRespawn","ButtonOptions",
"ButtonVideo","ButtonAudio","ButtonControls","ButtonGame","ButtonTutorialHints","ButtonAbort","DebugConsole",
"Version","TraffLight","Feedback","MessageBox","CBA_Credits_Cont_C","CBA_CREDITS_M_P","cba_help_credits"];

{
	if(!((configName _x) in _allowedChildren)) exitWith {
		[steamid,0,"Modified MPInterrupt",format["Modified MPInterrupt: %1",configName _x]] remoteExecCall ["TON_fnc_rcon",RSERV];
	};
} foreach _children;

/* Forgot to include this but this is also also a popular method for "unreleased" stuff */
if(getText(configFile >> "CfgFunctions" >> "init") != "A3\functions_f\initFunctions.sqf") then {
	[steamid,0,"Modified Functions Init","Modified Functions Init"] remoteExecCall ["TON_fnc_rcon",RSERV];
};