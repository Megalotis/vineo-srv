/*
	Filename: 	initHC.sqf
	Project: 	Union Altis Life RPG
	Author:		Merrick & Affect
	Steam:		76561198006439083 & 76561198053094990
	Web:		http://vineo.life/
*/
HC_UID = nil;

// JIP integration of an hc
"life_HC_server_isReady" addPublicVariableEventHandler {
    if (_this select 1) then {
        HC_UID = getPlayerUID hc_1;
        HC_Life = owner hc_1;
        cleanupFSM setFSMVariable ["stopfsm",true];
        terminate cleanup;
        terminate aiSpawn;
        [true] call TON_fnc_transferOwnership;
        HC_Life publicVariableClient "animals";
        HC_Life publicVariableClient "serv_sv_use";
        life_HC_isActive = true;
        publicVariable "life_HC_isActive";
        diag_log "Headless client is connected and ready to work!";
    };
};

HC_DC = ["HC_Disconnected","onPlayerDisconnected",
    {
        if (!isNil "HC_UID" && {_uid == HC_UID}) then {
            life_HC_isActive = false;
            publicVariable "life_HC_isActive";
            HC_Life = false;
            publicVariable "HC_Life";
            cleanup = [] spawn TON_fnc_cleanup;
            cleanupFSM = [] execFSM "\UnionServer\FSM\cleanup.fsm";
            [false] call TON_fnc_transferOwnership;
            aiSpawn = ["hunting_zone",30] spawn TON_fnc_huntingZone;
            diag_log "Headless client disconnected! Broadcasted the vars!";
            diag_log "Ready for receiving queries on the server machine.";
        };
    }
] call BIS_fnc_addStackedEventHandler;
