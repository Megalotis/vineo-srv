#define true 1
#define false 0

class LifeCfgSettings {
	life_useFuelTrucks = true; //нефтепродукты только в нефтевозах
	life_fuelStuff[] = {"oilu","oilp","uraniumu","uraniump","uraniumc","petrol","gasu","gasp"};
	life_fuelTrucks[] = {"B_Truck_01_fuel_F","B_Truck_01_fuel_CIV_F","O_Truck_02_fuel_F","O_Truck_03_fuel_F","O_Heli_Transport_04_fuel_F","I_mas_cars_Ural_fuel","ext_Jonzie_Tanker_Truck","d3s_actros_14_giga_cistern","d3s_actros_14_big_cistern","d3s_actros_14_cistern","d3s_nemises_next_bocha","d3s_kamaz_5350_bocha","d3s_kamaz_bocha_MAW_1","d3s_kamaz_bocha","Zil157_fuel_tank","d3s_nemises_zil_131_4","d3s_zil_130_05"}; //техника для перевозки нефтепродуктов
	life_cantStoreItems[] =  {"O_Truck_03_device_F"}; //контейнеры где ничего нельзя хранить
	life_gatherTools[] = {"Extremo_Tool_Axe","Extremo_Tool_Shovel","Extremo_Tool_PickAxe","Extremo_Tool_Hoe"}; //предметы для добычи ресурсов
	life_exitTimer = 20; //сколько секунд до выхода с сервера (20 дефолт)
	life_pvpTimer = 3; //таймер пвп-режима в минутах (10 дефолт)

	life_respawn_timer = 5; //таймер возрождения в минутах (10 дефолт)
	life_revive_cops = true; //могут ли ресать копы
	life_revive_fee = 500; //Сколько платит за рес игрок. Воскресивший получает x10

	life_houseLimit = 2; //максимум домов для одного игрока
	life_houseLimitDonat = 4; //максимум домов для одного игрока с випкой
	life_houseCreditPrice = 75000; //сумма выдаваемого кредита за дом
	life_houseSpawnCondition = "life_firstTime OR life_newLife"; //условие для отображения домов в списке спауна

	life_virtualMax = 1050; //вместивость виртуального хранилища
	life_inventoryMax = 150; //вместивость контейнера для реальных предметов
	
	save_vehicle_fuel = true;

	life_gangPrice = 50000; //цена создание группировки
	life_gangUpgradeBase = 1000; //базовая стоимость апгрейда базы
	life_gangUpgradeMultipler = 2.5;
	life_gangSlotLimit = 10; //макс кол-во членов обычной банды
	life_gangSlotLimitPrem = 15; //макс кол-во членов премиум банды
	life_gangCopCanLeaveCondition = "life_coplevel in [19,22]"; //условие для копов, чтобы можно было выходить из базовой группы

	life_enableFatigue = false; //усталость у игроков?

	life_paycheck = 750; //пособие по безработице unclient.fsm
	life_paycheckGov = 4000;  //пособие для гос служащих unclient.fsm
	life_paycheckCondition = "license_civ_taxi or life_gov or license_civ_sen or license_civ_led or life_coplevel > 2 or life_medicLevel > 2"; //кто получает пособие для гос служащих unclient.fsm
	life_paycheck_period = 5; //выплачивать пособие каждые Х минут	unclient.fsm

	life_impound_car = 500; //вознаграждение за конфискацию машины
	life_impound_boat = 600; //вознаграждение за конфискацию лодки
	life_impound_air = 700; //вознаграждение за конфискацию авиа

	life_cop_min = 3; //минимум копов на сервере
	life_cop_min_illegal = 2; //минимум копов на сервере для нелегала
	life_med_min = 1; //минимум медиков на сервере

	life_vShop_rentalOnly[] = {}; //техника которую можно брать только в аренду
	life_vShop_rentalCondition = "life_coplevel > 14"; //исключение по арендуемой технике

	life_trunkClass = "Metal_Locker_F"; //объект, используемый для хранилища группировки
	life_trunkVirtualWeight = 1000; //базовая вместимость для виртуальных предметов
	life_trunkInventoryWeight = 200; //базовая вместимость для виртуальных предметов

	life_removeLicByJail = true; //анулировать лицензии после посадки в тюрьму?
	life_removeLicByJailList[] = {"mafia","slavery"}; //классы лицензий

	life_removeLicByVeh = false; //анулировать лицензии при нарушении правил вождения?
	life_removeLicByVehList[] = {"civdriver","rebdriver","civtruck","rebtruck"}; //классы лицензий

	life_vaultBoxClass = "Land_CargoBox_V1_F";
	life_vaultBoxVirtualWeight = 5000;

	life_girlsClothes[] = {"U_BasicBodyFemale","U_Camo_uniform","U_CamoBlue_uniform","U_CamoBrn_uniform","U_CamoRed_uniform","U_GirlSet1_uniform","U_GirlSet2_uniform","U_GirlSet3_uniform","U_GirlSet4_uniform"};
	life_onlyVipItems[] = {"arifle_Mk20C_plain_F", "arifle_TRG20_F", "srifle_mas_m110", "LMG_mas_M249_F_d", "LMG_mas_M249_F_v", "LMG_mas_Mk200_F", "launch_RPG7V", "RPG7_PG7V", "MiniGrenade", "arifle_MX_SW_Black_F", "pmc_earpiece", "arifle_MX_SW_F", "arifle_AK12_F", "LMG_mas_pech_F"};
	life_cheatItems[] = {"launch_NLAW_F","Laserdesignator","optic_Nightstalker","optic_DMS","optic_LRPS"};

	life_vehiclesWithLights[] = {"d3s_tahoe_EMS","GM_TAURUS_EMS","GM_SAVANA_EMS","GM_EXPLORER_EMS","GM_CHARGER_EMS","Ark_Ambulance","O_MRAP_02_F","I_MRAP_03_F","B_Heli_Light_01_F","EMS_helo","IVORY_BELL512_RESCUE","d3s_crown_98_PD_blue","d3s_nemises_savana_PSV","d3s_nemises_taurus_FPI_10","d3s_tahoe_PPV_2","d3s_charger_15_CPP","d3s_nemises_FPIU_13","d3s_durango_18_DDPI","d3s_srthellcat_15_CPST","d3s_charger_15_CPST","d3s_srthellcat_15_UNM","d3s_nemises_taurus_UNM_10","d3s_charger_15_CPU","d3s_tahoe_UNM","d3s_durango_18_UNM","d3s_nemises_explorer_UNM_13","np_cherokee_p","B_MRAP_01_F","d3s_giulia_q4_16_FSB","d3s_nemises_f90_18_FSB","d3s_nemises_C450_15_FSB","d3s_e400_16_FSB","d3s_nemises_gls63amg_17_FSB","d3s_nemises_vklasse_17_FSB","d3s_lx570_16_KaCkaD","d3s_nemises_urus_FSB_12","d3s_levante_FSB_17","d3s_f86_15_UNM","av_APC_Wheeled_ch_F","shounka_a3_brinks_bleufonce","d3s_g850_17_UNM","d3s_boss_15_COP","d3s_boss_15_UNM","d3s_ctsv_16_unm","d3s_tahoe_SHERIFF","d3s_g850_17_COP","d3s_amazing_f10_12_COP","d3s_300_12_UNM"}; //техника со спецсигналом "d3s_crown_98_PD_blue","C_Offroad_01_F","EXT_W_Offroad_01_F","B_MRAP_01_F","C_SUV_01_F","C_Hatchback_01_sport_F","B_Heli_Light_01_F","B_Heli_Transport_01_F","I_Heli_light_03_unarmed_F","I_MRAP_03_hmg_F","I_MRAP_03_F","B_APC_Wheeled_01_cannon_F","B_MRAP_01_hmg_F","O_MRAP_02_F", "Mrshounka_ducati_police_p" ,"Mrshounka_308pol" ,"Mrshounka_a3_308_gend" ,"shounka_a3_508gend" ,"Mrshounka_rs_2015_g", "shounka_a3_audiq7_v2_gendarmerie", "Mrshounka_rs4_gend_p_blanc", "Mrshounka_bmw_gend", "Mrshounka_a3_rs_gend", "shounka_a3_suburbangign", "shounka_a3_gendsprinter", "shounka_a3_brinks_bleufonce", "shounka_a3_brinks_noir", "EC635_Unarmed", "O_Heli_Light_02_unarmed_F", "B_Heli_Transport_03_unarmed_F", "dezkit_b206_rescue", "dezkit_b206_ems", "shounka_a3_pompier_sprinter", "C_Offroad_01_repair_F","B_mas_UH60M_SF", "O_mas_BTR60", "B_mas_UH1Y_UNA_F", "Mrshounka_Volkswagen_Touareg_mcs", "Jeffery_a3_508gend","jeffery_a3_audiq7_v2_gendarmerie","Mrjeffery_bmw_gend","Mrshounka_evox_gend","ext_ivory_rs4_police","ext_ivory_m3_police","ext_ivory_evox_police","ext_ivory_isf_police","ext_ivory_wrx_police"

	life_benchesForCivHumm = "license_civ_vl OR license_civ_led OR license_civ_ira OR license_civ_fb OR license_civ_ccp OR license_civ_ics OR license_civ_bst"; //условие чтобы не убирались скамейки на хэминге при спауне
	life_weaponSearchException = "license_civ_vl OR license_civ_led OR license_civ_ira OR license_civ_fb OR license_civ_taxi"; //условие чтобы не делать обыск игрока

	life_dhl_office = "dhl_office"; //маркер офиса DHL, где спаун тачек делаем
	life_dhl_car = "C_Van_01_box_F_EXT_DHL"; //класс фургона, который даем на задание
	life_dhl_box = "plp_cts_CanisterWhite"; //класс коробки, которую надо возить
	life_dhl_price = 10; //сколько платим за метр

	//world settings
	class Altis {
		life_sz[] = {
			{ "s_z_kavala", 750 },
			{ "s_z_atira", 250 },
			{ "s_z_pirgos", 250 },
			{ "s_z_sofia", 250 },
			{ "s_z_aero", 250 },
			{ "s_z_aero_med", 100 },
			{ "reb_city_gzone", 100 },
			{ "gov_gzone", 25 },
			{ "players_spawn_zone", 100 },
			{ "paintball_zone1", 260 }
		};
		life_dp_points[] = {"dp_1","dp_2","dp_3","dp_4","dp_5","dp_6","dp_7","dp_8","dp_9","dp_10","dp_11","dp_12","dp_13","dp_14","dp_15","dp_16","dp_17","dp_18","dp_19","dp_20","dp_21","dp_22","dp_23","dp_24","dp_25"};
		life_posWhite[] = {{"cargo_spawn",500},{"jail_marker",250},{"paintball_zone1",280},{"cotton_1",50},{"jail_release_civ",50},{"reb_city_spawn_1",50},{"sky_dive",50}};
		life_gangResources = "[mari_processor,coke_processor,heroin_processor,meth_processor,uran_processor,uran_processor_clean]";
		life_platformZlevel = 193;

	};
	class Tanoa {
		life_sz[] = {
			{ "players_spawn_zone", 100 }
		};
		life_dp_points[] = {};
		life_posWhite[] = {};
		life_gangResources = "[]";
		life_platformZlevel = 69;
	};
};

#include "Config_RemoteExec.hpp"
#include "Config_Spyglass.hpp"
#include "Config_Licenses.hpp"
#include "Config_Clothing.hpp"
#include "Config_VirtualItems.hpp"
#include "Config_VirtShops.hpp"
#include "Config_Passports.hpp"
#include "Config_Housing.hpp"
#include "Config_Crafting.hpp"
#include "Config_Tags.hpp"
#include "Config_Skins.hpp"
#include "Config_Trunks.hpp"
#include "Config_Spawn.hpp"
#include "Config_Vehicles.hpp"
#include "Config_VehColors.hpp"
#include "Config_VehShops.hpp"
#include "Config_Adac.hpp"
#include "Config_Garages.hpp"
#include "Config_Items.hpp"
#include "Config_Weapons.hpp"
#include "Config_Crimes.hpp"
#include "Config_Titles.hpp"
#include "Config_Gather.hpp"
#include "Config_Markers.hpp"
#include "Config_BattleVehicle.hpp"
#include "Config_Themes.hpp"
#include "Config_Archeology.hpp"
#include "Config_WarZones.hpp"