/*

	Filename: 	UnionClient_delivery_price.sqf
	Project: 	Union Altis Life RPG
	Author:		Merrick & Affect
	Steam:		76561198006439083 & 76561198053094990
	Web:		http://vineo.life/

*/
#include "..\script_macros.hpp"
params [
	["_from","",[""]],
	["_to","",[""]],
	["_vehicle","",[""]]
];

if (EQUAL(_from,"") OR EQUAL(_to,"") OR EQUAL(_vehicle,"")) exitWith {0};

private _price = switch (_from) do {
	case "depo_kavala": {
		switch (_to) do {
			case "depo_molos": {95000}; //+
			case "depo_mazi": {95000}; //+
			case "depo_tonos": {41875}; //+
		};
	};
	case "depo_molos": {
		switch (_to) do {
			case "depo_kavala": {95000}; //+
			case "depo_mazi": {84500}; //+
			case "depo_tonos": {41875}; //+
		};
	};
	case "depo_mazi": {
		switch (_to) do {
			case "depo_kavala": {95000}; //+
			case "depo_molos": {44500}; //+
			case "depo_tonos": {44500}; //+
		};
	};
	case "depo_tonos": {
		switch (_to) do {
			case "depo_kavala": {41875}; //+
			case "depo_molos": {41875}; //+
			case "depo_mazi": {44500}; //+
		};
	};
};

switch (_vehicle) do {
	case "C_Offroad_01_F": {_price = round (_price / 3)};
	case "C_Van_01_transport_F": {_price = round (_price / 2)};
};

_price;