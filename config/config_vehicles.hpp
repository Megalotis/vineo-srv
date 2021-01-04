/*

	class {
		vItemSpace = вместительность багажника для виртуальных предметов (0 = нету)
		conditions = условия в формате "true" (пока что не используется)
		price = базовая цена
		textures[] = {
			{"класс из LifeCfgVehTextures", {"флаг маназина техники"}, "conditions для использования этого цвета" }
		};
		materials[] = {классы из LifeCfgVehMaterials};
	};


*/

class LifeCfgVehicles {
	class vet_GAZ_2975_Tiger_special_version {
		vItemSpace = 0;
		conditions = "";
		price = 5000000;
		textures[] = {
			{"shnk_b", {"swat"}, "" }
		};
		materials[] = {"glossy","matte"};
	};
	class I_UGV_01_F {
		vItemSpace = 0;
		conditions = "";
		price = 50000;
		textures[] = {};
		materials[] = {};
	};
	class B_UGV_01_F: I_UGV_01_F {};
	class B_UAV_02_F: I_UGV_01_F {};

	class dbo_CIV_ol_bike {
		vItemSpace = 0;
		conditions = "";
		price = 250;
		textures[] = {};
		materials[] = {};
	};

	class dbo_CIV_new_bike {
		vItemSpace = 0;
		conditions = "";
		price = 300;
		textures[] = {};
		materials[] = {};
	};
	class dbo_CIV_new_bike_R: dbo_CIV_new_bike {};
	class dbo_CIV_new_bike_B: dbo_CIV_new_bike {};

	class C_Kart_01_Blu_F {
		vItemSpace = 0;
		conditions = "";
		price = 2000;
		textures[] = {};
		materials[] = {};
	};
	class C_Kart_01_Fuel_F: C_Kart_01_Blu_F {};
	class C_Kart_01_Red_F: C_Kart_01_Blu_F {};
	class C_Kart_01_Vrana_F: C_Kart_01_Blu_F {};

	class C_Offroad_01_F {
		vItemSpace = 65;
		conditions = "";
		price = 3000;
		textures[] = {
			{"ffrd_r", {"civ","cia"}, "" },
			{"ffrd_y", {"civ","cia"}, "" },
			{"ffrd_w", {"civ","cia"}, "" },
			{"ffrd_b", {"civ","cia"}, "" },
			{"ffrd_br", {"civ","cia"}, "" },
			{"ffrd_bw", {"civ","cia"}, "" },
			{"ffrd_sb", {"civ","reb","cia"}, "(call life_donator) > 0" },
			{"ffrd_cop", {"cop"}, "" },
			{"rgb_cy", {"civ","cia"}, "" },
			{"ffrd_med", {"med"}, "" },
			{"ffrd_v1", {"civ","reb","cia"}, "(call life_donator) > 0" },
			{"ffrd_7n", {"press"}, "" },
			{"ffrd_ro", {"civ","reb","cia"}, "(call life_donator) > 0" },
			{"ffrd_bear", {"civ","reb","cia"}, "(call life_donator) > 0" },
			{"ffrd_2l", {"civ","reb","cia"}, "(call life_donator) > 0" },
			{"ffrd_gv", {"civ","reb","cia"}, "(call life_donator) > 0" }
		};
		materials[] = {"glossy","matte","metallic","chrome"};
	};
	class EXT_W_Offroad_01_F {
		vItemSpace = 65;
		conditions = "";
		price = 3000;
		textures[] = {};
		materials[] = {};
	};
	class C_Offroad_01_repair_F {
		vItemSpace = 65;
		conditions = "";
		price = 15000;
		textures[] = {
			{"ffrd_r_m1", {"med"}, ""},
			{"ffrd_r_m2", {"med"}, "" }
		};
		materials[] = {};
	};
	class B_G_Offroad_01_F {
		vItemSpace = 65;
		conditions = "";
		price = 4000;
		textures[] = {
			{"ffrd_bg_r", {"reb"}, "" },
			{"ffrd_bg_rv", {"reb"}, "(call life_donator) > 0" }
		};
		materials[] = {};
	};
	class B_mas_cars_Hilux_Unarmed {
		vItemSpace = 65;
		conditions = "";
		price = 7000;
		textures[] = {};
		materials[] = {};
	};
	class B_Quadbike_01_F {
		vItemSpace = 25;
		conditions = "";
		price = 500;
		textures[] = {
			{"qdbk_cop", {"cop"}, "" },
			{"qdbk_reb", {"reb"}, "" },
			{"qdbk_b", {"civ"}, "" },
			{"qdbk_bl", {"civ"}, "" },
			{"qdbk_r", {"civ"}, "" },
			{"qdbk_w", {"civ"}, "" },
			{"qdbk_g", {"civ"}, "" },
			{"qdbk_cm", {"reb"}, "" }
		};
		materials[] = {};
	};
	class gac_jsdf_klx {
		vItemSpace = 25;
		conditions = "";
		price = 1000;
		textures[] = {};
		materials[] = {};
	};
	class I_Truck_02_covered_F {
		vItemSpace = 250;
		conditions = "";
		price = 10000;
		textures[] = {
			{"itc_cm", {"reb"}, "" },
			{"itc_cia", {"cia"}, "" }
		};
		materials[] = {};
	};
	class O_Truck_02_covered_F {
		vItemSpace = 250;
		conditions = "";
		price = 10000;
		textures[] = {};
		materials[] = {};
	};
	class I_Truck_02_covered_CIV_F {
		vItemSpace = 250;
		conditions = "";
		price = 10000;
		textures[] = {
			{"itcc_or", {"civ"}, "" },
			{"itcc_r", {"civ"}, "(call life_donator) > 0" },
			{"itcc_s", {"civ"}, "(call life_donator) > 0" },
			{"itcc_w", {"civ"}, "(call life_donator) > 0" },
			{"itcc_y", {"civ"}, "(call life_donator) > 0" }
		};
		materials[] = {};
	};
	class O_Truck_02_fuel_F {
		vItemSpace = 250;
		conditions = "";
		price = 10000;
		textures[] = {};
		materials[] = {};
	};
	class I_Truck_02_transport_F {
		vItemSpace = 200;
		conditions = "";
		price = 7500;
		textures[] = {
			{"itcc_or", {"civ","cia"}, "" },
			{"itc_cia", {"cop"}, "" },
			{"itc_cm", {"reb"}, "" }
		};
		materials[] = {};
	};
	class C_Hatchback_01_F {
		vItemSpace = 40;
		conditions = "";
		price = 2000;
		textures[] = {
			{"htchb_bs", {"civ","cia"}, "" },
			{"htchb_g", {"civ"}, "" },
			{"htchb_bl", {"civ"}, "" },
			{"htchb_bbl", {"civ","cia"}, "" },
			{"htchb_y", {"civ"}, "" },
			{"htchb_w", {"civ"}, "" },
			{"htchb_gr", {"civ","cia"}, "" },
			{"htchb_b", {"civ"}, "" }
		};
		materials[] = {"glossy","matte","metallic"};
	};
	class max_bike {
		vItemSpace = 30;
		conditions = "";
		price = 2500;
		textures[] = {};
		materials[] = {};
	};
	class max_bike_b: max_bike {};
	class max_bike_db: max_bike {};
	class max_bike_dg: max_bike {};
	class max_bike_dr: max_bike {};
	class max_bike_w: max_bike {};

	class nomads_bike {
		vItemSpace = 30;
		conditions = "";
		price = 2500;
		textures[] = {};
		materials[] = {};
	};
	class shounka_harley_a3 {
		vItemSpace = 65;
		conditions = "";
		price = 2500;
		textures[] = {};
		materials[] = {};
	};
	class shounka_harley_a3_bleu: shounka_harley_a3 {};
	class shounka_harley_a3_lolz: shounka_harley_a3 {};
	class shounka_harley_a3_noir: shounka_harley_a3 {};
	class shounka_harley_a3_rouge: shounka_harley_a3 {};
	class xarley: shounka_harley_a3 {};

	class RDS_Lada_Civ_01 {
		vItemSpace = 45;
		conditions = "";
		price = 12500;
		textures[] = {};
		materials[] = {};
	};
	class RDS_Lada_Civ_02: RDS_Lada_Civ_01 {};
	class RDS_Lada_Civ_03: RDS_Lada_Civ_01 {};
	class RDS_Lada_Civ_04: RDS_Lada_Civ_01 {};
	class RDS_Lada_Civ_05: RDS_Lada_Civ_01 {};
	class RDS_Lada_Civ_06: RDS_Lada_Civ_01 {};
	class RDS_Lada_Civ_07: RDS_Lada_Civ_01 {};

	class RDS_Gaz24_Civ_01 {
		vItemSpace = 45;
		conditions = "";
		price = 8000;
		textures[] = {};
		materials[] = {};
	};
	class RDS_Gaz24_Civ_02: RDS_Gaz24_Civ_01 {};
	class RDS_Gaz24_Civ_03: RDS_Gaz24_Civ_01 {};

	class RDS_Golf4_Civ_01 {
		vItemSpace = 45;
		conditions = "";
		price = 6900;
		textures[] = {};
		materials[] = {};
	};
	class RDS_Golf4_Civ_02: RDS_Golf4_Civ_01 {};
	class RDS_Golf4_Civ_03: RDS_Golf4_Civ_01 {};
	class RDS_Golf4_Civ_04: RDS_Golf4_Civ_01 {};
	class RDS_Golf4_Civ_05: RDS_Golf4_Civ_01 {};
	class RDS_Golf4_Civ_06: RDS_Golf4_Civ_01 {};

	class RDS_S1203_Civ_01 {
		vItemSpace = 45;
		conditions = "";
		price = 900;
		textures[] = {};
		materials[] = {};
	};
	class RDS_S1203_Civ_04: RDS_S1203_Civ_01 {};
	class RDS_S1203_Civ_05: RDS_S1203_Civ_01 {};
	class RDS_S1203_Civ_06: RDS_S1203_Civ_01 {};
	class RDS_S1203_Civ_07: RDS_S1203_Civ_01 {};
	class RDS_S1203_Civ_08: RDS_S1203_Civ_01 {};


	class C_Hatchback_01_sport_F {
		vItemSpace = 45;
		conditions = "";
		price = 15000;
		textures[] = {
			{"htchbs_r", {"civ","reb"}, "" },
			{"htchbs_br", {"civ","reb","cia"}, "" },
			{"htchbs_o", {"civ","reb"}, "" },
			{"htchbs_bw", {"civ","reb"}, "" },
			{"htchbs_t", {"civ","reb","cia"}, "" },
			{"htchbs_g", {"civ","reb"}, "" },
			{"htchbs_cop", {"cop"}, "" },
			{"htchbs_va", {"civ","reb","cia"}, "" },
			{"htchbs_vme", {"civ","reb","cia"}, "" },
			{"htchbs_h", {"civ","reb"}, "" },
			{"htchbs_s", {"civ","reb"}, "" }
		};
		materials[] = {"glossy","matte","metallic"};
	};
	class C_Hatchback_01_sport_Taxi {
		vItemSpace = 45;
		conditions = "";
		price = 15000;
		textures[] = {};
		materials[] = {};
	};
	class C_SUV_01_F {
		vItemSpace = 50;
		conditions = "";
		price = 10000;
		textures[] = {
			{"suv_br", {"civ","cia"}, "" },
			{"suv_b", {"civ","cia"}, "" },
			{"suv_s", {"civ"}, "" },
			{"suv_o", {"civ"}, "" },
			{"suv_cop", {"cop"}, "" },
			{"suv_vx6", {"civ","reb","cia"}, "(call life_donator) > 0" },
			{"suv_vd", {"civ","reb","cia"}, "(call life_donator) > 0" },
			{"suv_vnc", {"civ","reb","cia"}, "(call life_donator) > 0" },
			{"suv_vo", {"civ","reb"}, "(call life_donator) > 0" },
			{"suv_vs", {"civ","reb"}, "(call life_donator) > 0" },
			{"suv_vpm", {"civ","reb"}, "(call life_donator) > 0" },
			{"suv_vme", {"civ","reb"}, "(call life_donator) > 0" },
			{"suv_vgr", {"civ","reb"}, "(call life_donator) > 0" },
			{"suv_vsw", {"civ","reb"}, "(call life_donator) > 0" },
			{"suv_vcx", {"civ","reb"}, "(call life_donator) > 0" },
			{"suv_vfs", {"civ","reb"}, "(call life_donator) > 0" },
			{"suv_vme2", {"civ","reb"}, "(call life_donator) > 0" }
		};
		materials[] = {"glossy","matte","metallic"};
	};
	class C_Van_01_transport_F {
		vItemSpace = 100;
		conditions = "";
		price = 5000;
		textures[] = {
			{"vtt_w", {"civ","cia"}, "" },
			{"vtt_r", {"civ","cia"}, "" }
		};
		materials[] = {};
	};
	class C_Van_01_fuel_F {
		vItemSpace = 100;
		conditions = "";
		price = 5000;
		textures[] = {};
		materials[] = {};
	};
	class I_G_Van_01_transport_F {
		vItemSpace = 100;
		conditions = "";
		price = 5000;
		textures[] = {};
		materials[] = {};
	};
	class C_Van_01_box_F {
		vItemSpace = 150;
		conditions = "";
		price = 6000;
		textures[] = {
			{"vtt_w", {"civ"}, "" },
			{"vtt_r", {"civ"}, "" }
		};
		materials[] = {};
	};
	class C_Boat_Civil_01_F {
		vItemSpace = 85;
		conditions = "";
		price = 5000;
		textures[] = {};
		materials[] = {};
	};
	class B_SDV_01_F {
		vItemSpace = 85;
		conditions = "";
		price = 50000;
		textures[] = {};
		materials[] = {};
	};
	class I_SDV_01_F: B_SDV_01_F{};

	class C_Boat_Civil_01_police_F {
		vItemSpace = 85;
		conditions = "";
		price = 16000;
		textures[] = {};
		materials[] = {};
	};
	class C_Boat_Civil_01_rescue_F {
		vItemSpace = 85;
		conditions = "";
		price = 16000;
		textures[] = {};
		materials[] = {};
	};
	class Burnes_MK10_1 {
		vItemSpace = 100;
		conditions = "";
		price = 50000;
		textures[] = {};
		materials[] = {};
	};
	class extremo_lcm {
		vItemSpace = 100;
		conditions = "";
		price = 50000;
		textures[] = {};
		materials[] = {};
	};
	class GeK_Ferry {
		vItemSpace = 1000;
		conditions = "";
		price = 2000000;
		textures[] = {};
		materials[] = {};
	};
	class C_Fishing_Boat_Apex {
		vItemSpace = 800;
		conditions = "";
		price = 50000;
		textures[] = {};
		materials[] = {};
	};
	class Shalllop {
		vItemSpace = 400;
		conditions = "";
		price = 20000;
		textures[] = {};
		materials[] = {};
	};
	class C_Fishing_Boat {
		vItemSpace = 800;
		conditions = "";
		price = 50000;
		textures[] = {};
		materials[] = {};
	};
	class B_Truck_01_box_F {
		vItemSpace = 1200;
		conditions = "";
		price = 200000;
		textures[] = {};
		materials[] = {};
	};
	class B_Truck_01_box_CIV_F {
		vItemSpace = 1200;
		conditions = "";
		price = 200000;
		textures[] = {
			{"hmt_def", {"civ"}, "" },
			{"hmt_bl", {"civ"}, "(call life_donator) > 0" },
			{"hmt_gs", {"civ"}, "(call life_donator) > 0" },
			{"hmt_mh", {"civ"}, "(call life_donator) > 0" },
			{"hmt_or", {"civ"}, "(call life_donator) > 0" },
			{"hmt_pr", {"civ"}, "(call life_donator) > 0" },
			{"hmt_r", {"civ"}, "(call life_donator) > 0" },
			{"hmt_y", {"civ"}, "(call life_donator) > 0" }
		};
		materials[] = {};
	};
	class B_Truck_01_fuel_F {
		vItemSpace = 1200;
		conditions = "";
		price = 200000;
		textures[] = {};
		materials[] = {};
	};
	class B_Truck_01_fuel_CIV_F {
		vItemSpace = 1200;
		conditions = "";
		price = 200000;
		textures[] = {
			{"tfc_def", {"civ"}, "" },
			{"tfc_bl", {"civ"}, "(call life_donator) > 0" },
			{"tfc_gs", {"civ"}, "(call life_donator) > 0" },
			{"tfc_mh", {"civ"}, "(call life_donator) > 0" },
			{"tfc_or", {"civ"}, "(call life_donator) > 0" },
			{"tfc_pr", {"civ"}, "(call life_donator) > 0" },
			{"tfc_r", {"civ"}, "(call life_donator) > 0" },
			{"tfc_y", {"civ"}, "(call life_donator) > 0" }
		};
		materials[] = {};
	};
	class B_Truck_01_mover_F {
		vItemSpace = 400;
		conditions = "";
		price = 50000;
		textures[] = {
			{"hmt_def", {"civ"}, "" },
			{"hmt_bl", {"civ"}, "(call life_donator) > 0" },
			{"hmt_gs", {"civ"}, "(call life_donator) > 0" },
			{"hmt_mh", {"civ"}, "(call life_donator) > 0" },
			{"hmt_or", {"civ"}, "(call life_donator) > 0" },
			{"hmt_pr", {"civ"}, "(call life_donator) > 0" },
			{"hmt_r", {"civ"}, "(call life_donator) > 0" },
			{"hmt_y", {"civ"}, "(call life_donator) > 0" }
		};
		materials[] = {};
	};
	class B_Truck_01_transport_F {
		vItemSpace = 600;
		conditions = "";
		price = 75000;
		textures[] = {};
		materials[] = {};
	};
	class B_Truck_01_covered_F {
		vItemSpace = 600;
		conditions = "";
		price = 75000;
		textures[] = {};
		materials[] = {};
	};
	class I_mas_cars_Ural_fuel {
		vItemSpace = 600;
		conditions = "";
		price = 70000;
		textures[] = {};
		materials[] = {};
	};
	class I_mas_cars_Ural {
		vItemSpace = 400;
		conditions = "";
		price = 30000;
		textures[] = {};
		materials[] = {};
	};
	class I_mas_cars_Ural_open {
		vItemSpace = 400;
		conditions = "";
		price = 25000;
		textures[] = {};
		materials[] = {};
	};
	class B_MRAP_01_F {
		vItemSpace = 65;
		conditions = "";
		price = 60000;
		textures[] = {
			{"bmrp_cia", {"cia"}, "" },
			{"bmrp_ds", {"civ"}, "" }
		};
		materials[] = {};
	};
	class O_MRAP_02_F {
		vItemSpace = 60;
		conditions = "";
		price = 80000;
		textures[] = {
			{"mrp_g", {"reb","rebgang"}, "" },
			{"mrp_med", {"med"}, "" },
			{"mrp_cg", {"civgang"}, "" },
			{"mrp_ur", {"civ","reb"}, "(call life_donator) > 0" },
			{"mrp_amc", {"amcold"}, "" },
			{"mrp_sdr", {"sdr"}, "" },
			{"mrp_aff", {"aff"}, "" },
			{"mrp_arg", {"arg"}, "" },
			{"mrp_fb", {"fb"}, "" },
			{"mrp_swat", {"swat"}, "" },
			{"mrp_dea", {"dea"}, "" },
			{"mrp_7n", {"press"}, "" },
			{"mrp_vl", {"vl"}, "" },
			{"mrp_mc", {"mc"}, "" },
			{"mrp_rfa", {"rfa"}, "" },
			{"mrp_muj", {"muj"}, "" },
			{"mrp_nsb", {"nsb"}, "" },
			{"mrp_7th", {"mfo"}, "" },
			{"mrp_ira", {"ira"}, "" },
			{"mrp_ccp", {"ccp"}, "" },
			{"mrp_ics", {"ics"}, "" },
			{"mrp_la", {"la"}, "" },
			{"mrp_bst", {"bst"}, "" },
			{"mrp_fsg", {"fsg"}, "" }
		};
		materials[] = {};
	};
	class I_MRAP_03_F {
		vItemSpace = 58;
		conditions = "";
		price = 100000;
		textures[] = {
			{"strd_cop", {"cop"}, "" },
			{"strd_aff", {"aff"}, "" },
			{"strd_reb", {"rebgang"}, "" },
			{"strd_wd", {"sdr"}, "" },
			{"strd_rst", {"rst"}, "" },
			{"strd_swt", {"swat"}, "" },
			{"strd_med", {"med"}, "" },
			{"strd_dea", {"dea"}, "" },
			{"strd_nsb", {"nsb"}, "" }
		};
		materials[] = {};
	};

	class B_mas_HMMWV_UNA {
		vItemSpace = 58;
		conditions = "";
		price = 100000;
		textures[] = {
			{ "hmmv_reb", {"rebgang"}, "" },
			{ "hmmv_fed", {"cop","cia"}, "" }
		};
		materials[] = {};
	};
	class B_mas_HMMWV_sdr: B_mas_HMMWV_UNA {textures[] = {};};
	class B_mas_HMMWV_SWAT: B_mas_HMMWV_UNA {textures[] = {};};
	class B_mas_HMMWV_ISF: B_mas_HMMWV_UNA {textures[] = {};};
	class B_mas_HMMWV_noa: B_mas_HMMWV_UNA {textures[] = {};};

	class B_mas_HMMWV_TOW {
		vItemSpace = 58;
		conditions = "";
		price = 200000;
		textures[] = {
			{ "hmmv_reb", {"rebgang"}, "" },
			{ "hmmv_fed", {"cop","cia"}, "" }
		};
		materials[] = {};
	};

	class B_mas_HMMWV_M2 {
		vItemSpace = 58;
		conditions = "";
		price = 200000;
		textures[] = {
			{ "hmmv_reb", {"rebgang","civgang","mfo","vl","g13","arg","la","ccp"}, "" },
			{ "hmmv_fed", {"cop","cia","swat"}, "" },
			{ "hmmv_sdr", {"sdr"}, "" },
			{ "hmmv_fb", {"fb"}, "" },
			{ "hmmv_mc", {"mc"}, "" },
			{ "hmmv_nsb", {"nsb"}, "" }
		};
		materials[] = {};
	};
	class B_mas_HMMWV_ISF_M2: B_mas_HMMWV_M2 {textures[] = {};};
	class B_mas_HMMWV_CCP_M2: B_mas_HMMWV_ISF_M2 {price = 100000;};
	class B_mas_HMMWV_W_M2: B_mas_HMMWV_ISF_M2 {};
	class B_mas_HMMWV_LA_M2: B_mas_HMMWV_ISF_M2 {};
	class B_mas_HMMWV_sdr_M2: B_mas_HMMWV_ISF_M2 {};
	class B_mas_HMMWV_ira_M2: B_mas_HMMWV_ISF_M2 {};
	class B_mas_HMMWV_kra_M2: B_mas_HMMWV_ISF_M2 {};
	class B_mas_HMMWV_VRS_M2: B_mas_HMMWV_ISF_M2 {};
	class B_mas_HMMWV_MUJH_M2: B_mas_HMMWV_ISF_M2 {};
	class B_mas_HMMWV_SWAT_M2: B_mas_HMMWV_ISF_M2 {};
	class B_mas_HMMWV_noa_M2: B_mas_HMMWV_ISF_M2 {};
	class B_mas_HMMWV_RFA_M2: B_mas_HMMWV_ISF_M2 {};
	class B_mas_HMMWV_ICS_M2: B_mas_HMMWV_ISF_M2 {};
	class B_mas_HMMWV_DEA_M2: B_mas_HMMWV_ISF_M2 {};
	class B_mas_HMMWV_FSG_M2: B_mas_HMMWV_ISF_M2 {};
	class B_mas_HMMWV_ARG_M2: B_mas_HMMWV_ISF_M2 {};

	class B_mas_HMMWV_SWAT_TOW: B_mas_HMMWV_ISF_M2 {};
	class B_mas_HMMWV_DEA_TOW: B_mas_HMMWV_ISF_M2 {};

	class UAZ_Rebels {
		vItemSpace = 80;
		conditions = "";
		price = 30000;
		textures[] = {};
		materials[] = {};
	};
	class UAZ_Unarmed: UAZ_Rebels {};
	class UAZ_green: UAZ_Rebels {};
	class UAZ_Hunter_s: UAZ_Rebels {};
	class UAZ_Hunter_g: UAZ_Rebels {};


	class B_mas_cars_LR_Unarmed {
		vItemSpace = 80;
		conditions = "";
		price = 30000;
		textures[] = {};
		materials[] = {};
	};
	class B_Heli_Light_01_F {
		vItemSpace = 90;
		conditions = "";
		price = 200000;
		textures[] = {
			{"humm_cop", {"cop"}, "" },
			{"humm_cia", {"cia"}, "" },
			{"humm_bl", {"civ"}, "" },
			{"humm_r", {"civ"}, "" },
			{"humm_vme", {"civ","reb","cia"}, "(call life_donator) > 0" },
			{"humm_bln", {"civ"}, "" },
			{"humm_llp", {"civ"}, "" },
			{"humm_fr", {"civ"}, "" },
			{"humm_bj", {"civ"}, "" },
			{"humm_rl", {"civ"}, "" },
			{"humm_sn", {"civ"}, "" },
			{"humm_vrn", {"civ"}, "" },
			{"humm_wv", {"civ"}, "" },
			{"humm_reb", {"reb"}, "" },
			{"humm_med", {"med"}, "" },
			{"humm_rg", {"rebgang"}, "" },
			{"humm_sdr", {"sdr"}, "" },
			{"humm_swt", {"swat"}, "" },
			{"humm_rfa", {"rfa"}, "" },
			{"humm_nsb", {"nsb"}, "" },
			{"humm_ics", {"ics"}, "" },
			{"humm_led", {"led"}, "" },
			{"humm_dea", {"dea"}, "" },
			{"humm_fsg", {"fsg"}, "" },
			{"humm_arg", {"arg"}, "" }
		};
		materials[] = {};
	};
	class EC635_Unarmed {
		vItemSpace = 90;
		conditions = "";
		price = 240000;
		textures[] = {};
		materials[] = {};
	};
	class O_Heli_Transport_04_bench_F {
		vItemSpace = 90;
		conditions = "";
		price = 200000;
		textures[] = {
			{"htb_cia", {"cia"}, "" }
		};
		materials[] = {};
	};
	class B_mas_UH1Y_UNA_F {
		vItemSpace = 90;
		conditions = "";
		price = 200000;
		textures[] = {
			{ "uh1y_fed", {"cop","cia"}, "" },
			{ "uh1y_reb", {"vl","rebgang","bst"}, "" },
			{ "uh1y_aff", {"aff"}, "" },
			{ "uh1y_fb", {"fb"}, "" },
			{ "uh1y_rfa", {"rfa"}, "" },
			{ "uh1y_muj", {"muj"}, "" },
			{ "uh1y_nsb", {"nsb"}, "" },
			{ "uh1y_ira", {"ira"}, "" },
			{ "uh1y_ics", {"ics"}, "" },
			{ "uh1y_sdr", {"sdr"}, "" },
			{ "uh1y_mc", {"mc"}, "" },
			{ "uh1y_dea", {"dea"}, "" },
			{ "uh1y_la", {"la"}, "" },
			{ "uh1y_arg", {"arg"}, "" },
			{ "uh1y_7th", {"mfo"}, "" },
			{ "uh1y_fsg", {"fsg"}, "" }
		};
		materials[] = {};
	};
	class B_mas_UH60M_SF {
		vItemSpace = 90;
		conditions = "";
		price = 200000;
		textures[] = {};
		materials[] = {};
	};
	class B_mas_UH60M_kra {
		vItemSpace = 90;
		conditions = "";
		price = 200000;
		textures[] = {};
		materials[] = {};
	};
	class B_mas_UH60M_VRS {
		vItemSpace = 90;
		conditions = "";
		price = 200000;
		textures[] = {};
		materials[] = {};
	};
	class ext_Jonzie_Forklift {
		vItemSpace = 0;
		conditions = "";
		price = 10000;
		textures[] = {};
		materials[] = {};
	};
	class I_Heli_light_03_unarmed_F {
		vItemSpace = 90;
		conditions = "";
		price = 200000;
		textures[] = {
			{"hllc_cia", {"cia"}, "" },
			{"hllc_med", {"med"}, "" },
			{"hllc_g", {"civ"}, "" },
			{"hllc_7n", {"press"}, "" },
			{"hllc_rg", {"rebgang"}, "" },
			{"hllc_cop", {"cop"}, "" },
			{"hllc_sdr", {"sdr"}, "" },
			{"hllc_gra", {"mc"}, "" },
			{"hllc_13", {"g13"}, "" },
			{"hllc_arg", {"arg"}, "" },
			{"hllc_swt", {"swat"}, "" },
			{"hllc_nsb", {"nsb"}, "" },
			{"hllc_muj", {"muj"}, "" },
			{"hllc_ics", {"ics"}, "" },
			{"hllc_ccp", {"ccp"}, "" },
			{"hllc_dea", {"dea"}, "" }
		};
		materials[] = {};
	};
	class BOPE_Hunter_NATO {
		vItemSpace = 20;
		conditions = "";
		price = 70000;
		textures[] = {};
		materials[] = {};
	};
	class I_Heli_light_03_VIKA {
		vItemSpace = 90;
		conditions = "";
		price = 200000;
		textures[] = {};
		materials[] = {};
	};
	class C_Heli_Light_01_civil_F {
		vItemSpace = 90;
		conditions = "";
		price = 160000;
		textures[] = {
			{"humm_bln", {"civ"}, "" },
			{"humm_reb", {"reb"}, "" },
			{"humm_llp", {"civ"}, "" },
			{"humm_fr", {"civ"}, "" },
			{"humm_gra", {"civ"}, "" },
			{"humm_bj", {"civ"}, "" },
			{"humm_lg", {"civ"}, "" },
			{"humm_shd", {"civ"}, "" },
			{"humm_shr", {"civ"}, "" },
			{"humm_rl", {"civ","reb"}, "(call life_donator) > 0" },
			{"humm_sn", {"civ","reb"}, "(call life_donator) > 0" },
			{"humm_vrn", {"civ"}, "" },
			{"humm_wsp", {"civ","reb"}, "(call life_donator) > 0" },
			{"humm_wv", {"civ"}, "" },
			{"humm_tx", {"taxi"}, "" }
		};
		materials[] = {};
	};
	class C_Heli_Light_01_civil_Taxi {
		vItemSpace = 90;
		conditions = "";
		price = 2500;
		textures[] = {};
		materials[] = {};
	};
	class O_Heli_Light_02_unarmed_F {
		vItemSpace = 210;
		conditions = "";
		price = 400000;
		textures[] = {
			{"orc_cia", {"cia"}, "" },
			{"orc_wb", {"civ"}, "" },
			{"orc_cm", {"civ","reb"}, "(call life_donator) > 0" },
			{"orc_reb", {"reb"}, "" },
			{"orc_cop", {"cop"}, "" },
			{"orc_med", {"med"}, "" }
		};
		materials[] = {};
	};
	class B_Heli_Transport_03_unarmed_F {
		vItemSpace = 800;
		conditions = "";
		price = 2000000;
		textures[] = {
			{"hrn_fed", {"cop","cia","swat"}, "" },
			{"hrn_med", {"med"}, "" }
		};
		materials[] = {};
	};
	class I_Heli_Transport_02_F {
		vItemSpace = 375;
		conditions = "";
		price = 700000;
		textures[] = {
			{ "hltt_bw", {"civ"}, "" },
			{ "hltt_gw", {"reb"}, "" },
			{ "hltt_cia", {"cop"}, "" }
		};
		materials[] = {};
	};
	class O_Heli_Transport_04_covered_F {
		vItemSpace = 375;
		conditions = "";
		price = 800000;
		textures[] = {};
		materials[] = {};
	};
	class O_Heli_Transport_04_box_F {
		vItemSpace = 650;
		conditions = "";
		price = 800000;
		textures[] = {};
		materials[] = {};
	};
	class O_Heli_Transport_04_fuel_F {
		vItemSpace = 650;
		conditions = "";
		price = 800000;
		textures[] = {};
		materials[] = {};
	};
	class I_Plane_Fighter_03_AA_F {
		vItemSpace = 650;
		conditions = "";
		price = 500000;
		textures[] = {};
		materials[] = {};
	};
	class Sab_af_An2 {
		vItemSpace = 650;
		conditions = "";
		price = 250000;
		textures[] = {};
		materials[] = {};
	};
	class Sab_tk_An2: Sab_af_An2 {};
	class sab_ca_An2: Sab_af_An2 {};
	class Sab_ana_An2: Sab_af_An2 {};
	class Sab_yel_An2: Sab_af_An2 {};
	class Sab_fd_An2: Sab_af_An2 {};
	class Sab_cz_An2: Sab_af_An2 {};

	class C_Plane_Civil_01_F {
		vItemSpace = 300;
		conditions = "";
		price = 1000000;
		textures[] = {
			{"cpc_wbl", {"civ","reb"}, "(call life_donator) > 0" },
			{"cpc_bly", {"civ","reb"}, "(call life_donator) > 0" },
			{"cpc_gw", {"civ","reb"}, "(call life_donator) > 0" },
			{"cpc_r", {"civ","reb"}, "(call life_donator) > 0" }
		};
		materials[] = {};
	};
	class C_Rubberboat {
		vItemSpace = 45;
		conditions = "";
		price = 1000;
		textures[] = {};
		materials[] = {};
	};
	class ext_sab_boat {
		vItemSpace = 100;
		conditions = "";
		price = 2000;
		textures[] = {
			{"xsb_s", {"civ","reb"}, "" },
			{"xsb_f", {"civ","reb"}, "" },
			{"xsb_v", {"civ","reb"}, "" },
			{"xsb_r", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	class I_Boat_Transport_01_F {
		vItemSpace = 65;
		conditions = "";
		price = 1000;
		textures[] = {};
		materials[] = {};
	};
	class O_Boat_Armed_01_hmg_F {
		vItemSpace = 175;
		conditions = "";
		price = 60000;
		textures[] = {};
		materials[] = {};
	};
	class B_Boat_Armed_01_minigun_F {
		vItemSpace = 175;
		conditions = "";
		price = 60000;
		textures[] = {};
		materials[] = {};
	};
	class I_Boat_Armed_01_minigun_F {
		vItemSpace = 175;
		conditions = "";
		price = 60000;
		textures[] = {};
		materials[] = {};
	};
	class B_G_Boat_Transport_01_F {
		vItemSpace = 45;
		conditions = "";
		price = 60000;
		textures[] = {};
		materials[] = {};
	};
	class B_Boat_Transport_01_F {
		vItemSpace = 45;
		conditions = "";
		price = 2400;
		textures[] = {};
		materials[] = {};
	};
	class O_Truck_03_transport_F {
		vItemSpace = 400;
		conditions = "";
		price = 20000;
		textures[] = {};
		materials[] = {};
	};
	class O_Truck_03_fuel_F {
		vItemSpace = 600;
		conditions = "";
		price = 80000;
		textures[] = {};
		materials[] = {};
	};
	class O_Truck_03_covered_F {
		vItemSpace = 600;
		conditions = "";
		price = 80000;
		textures[] = {};
		materials[] = {};
	};
	class O_Truck_03_device_F {
		vItemSpace = 700;
		conditions = "";
		price = 200000;
		textures[] = {};
		materials[] = {};
	};
	class shounka_a3_spr_civ {
		vItemSpace = 110;
		conditions = "";
		price = 6500;
		textures[] = {
			{"shnk_w", {"civ","reb","cia"}, "" },
			{"shnk_r", {"civ","reb","cia"}, "" },
			{"shnk_bbl", {"civ","reb"}, "" },
			{"shnk_gr", {"civ","reb"}, "" },
			{"shnk_y", {"civ","reb"}, "" },
			{"shnk_bbr", {"civ","reb","cia"}, "" },
			{"shnk_o", {"civ","reb"}, "" },
			{"shnk_rs", {"civ","reb","cia"}, "" },
			{"shnk_vi", {"civ","reb"}, "" },
			{"shnk_bl", {"civ","reb"}, "" },
			{"shnk_blr", {"civ","reb"}, "" },
			{"shnk_g", {"civ","reb"}, "" },
			{"shnk_blg", {"civ","reb"}, "" },
			{"shnk_b", {"civ","reb","cop","cia"}, "" }
		};
		materials[] = {"glossy","matte","metallic","chrome"};
	};
	class Mrshounka_a3_smart_civ {
		vItemSpace = 50;
		conditions = "";
		price = 20000;
		textures[] = {
			{"shnk_w", {"civ","reb","cia"}, "" },
			{"shnk_r", {"civ","reb","cia"}, "" },
			{"shnk_bbl", {"civ","reb"}, "" },
			{"shnk_gr", {"civ","reb"}, "" },
			{"shnk_y", {"civ","reb"}, "" },
			{"shnk_bbr", {"civ","reb","cia"}, "" },
			{"shnk_o", {"civ","reb"}, "" },
			{"shnk_rs", {"civ","reb","cia"}, "" },
			{"shnk_vi", {"civ","reb"}, "" },
			{"shnk_bl", {"civ","reb"}, "" },
			{"shnk_blr", {"civ","reb"}, "" },
			{"shnk_g", {"civ","reb"}, "" },
			{"shnk_blg", {"civ","reb"}, "" },
			{"shnk_b", {"civ","reb","cop","cia"}, "" },
			{"cxc_1", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_2", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_3", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_4", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_5", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_6", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_7", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_8", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_9", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_10", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_11", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_12", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_13", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_14", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_15", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_16", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_17", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_18", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_19", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_20", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_21", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_22", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_23", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_24", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_25", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_26", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_27", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_28", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_29", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_30", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_31", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_32", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_33", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_34", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_35", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_36", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_37", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_38", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_39", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_40", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_41", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_42", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_43", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_44", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_45", {"civ","reb"}, "(call life_donator) > 0" }
		};
		materials[] = {"glossy","matte","metallic","chrome"};
	};
	class Mrshounka_r5_civ: Mrshounka_a3_smart_civ {
		price = 123350;
	};
	class Mrshounka_twingo_p: Mrshounka_a3_smart_civ {
		price = 26000;
	};
	class shounka_a3_cliors_civ: Mrshounka_a3_smart_civ {
		price = 26000;
	};
	class Mrshounka_a3_ds3_civ: Mrshounka_a3_smart_civ {
		price = 30000;
	};
	class shounka_a3_ds4_civ: Mrshounka_a3_smart_civ {
		price = 32000;
	};
	class Mrshounka_c4_p_civ: Mrshounka_a3_smart_civ {
		price = 115364;
	};
	class Mrshounka_207_civ: Mrshounka_a3_smart_civ {
		price = 24667;
	};
	class GeK_UAZ_3303: Mrshounka_a3_smart_civ {
        vItemSpace = 100;
        price = 14600;
    };
	class GeK_Zil_bleu: Mrshounka_a3_smart_civ {
        vItemSpace = 300;
        price = 27000;
    };
	class Mrshounka_a3_308_civ: Mrshounka_a3_smart_civ {
		price = 32000;
	};
	class Mrshounka_a3_308_rcz: Mrshounka_a3_smart_civ {
		price = 36665;
	};
	class shounka_a3_peugeot508_civ: Mrshounka_a3_smart_civ {
		price = 46620;
	};
	class Mrshounka_a3_gtr_civ: Mrshounka_a3_smart_civ {
		price = 439956;
	};
	class Mrshounka_cayenne_p_civ: Mrshounka_a3_smart_civ {
		price = 266640;
	};
	class Mrshounka_rs4_civ: Mrshounka_a3_smart_civ {
		price = 286638;
	};
	class shounka_rs6: Mrshounka_a3_smart_civ {
		price = 386638;
	};
	class Mrshounka_a3_dodge15_civ: Mrshounka_a3_smart_civ {
		price = 326634;
	};
	class shounka_avalanche: Mrshounka_a3_smart_civ {
		price = 413300;
	};
	class Mrshounka_ducati_p: Mrshounka_a3_smart_civ {
		price = 106656;
	};
	class Mrshounka_evox_civ: Mrshounka_a3_smart_civ {
		price = 360662;
	};
	class mrshounka_92_civ: Mrshounka_a3_smart_civ {
		price = 179982;
	};
	class Mrshounka_mustang_civ: Mrshounka_a3_smart_civ {
		price = 393294;
	};
	class AMG_Charger_12: Mrshounka_a3_smart_civ {
		price = 343294;
	};
	class Mrshounka_jeep_blinde_noir: Mrshounka_a3_smart_civ {
		price = 133300;
	};
	class AMG_Tahoe: Mrshounka_a3_smart_civ {
		price = 150000;
	};
	class AMG_Suburban2015: Mrshounka_a3_smart_civ {
		price = 175000;
	};
	class Faisal_Youkun2015: Mrshounka_a3_smart_civ {
		price = 200000;
	};
	class AMG_Caprice1993: Mrshounka_a3_smart_civ {
		price = 134000;
	};
	class shounka_gt: Mrshounka_a3_smart_civ {
		price = 300000;
	};
	class AMG__MercedesBenz6x6: Mrshounka_a3_smart_civ {
		price = 500000;
	};
	class Mrshounka_cherokee_noir: Mrshounka_a3_smart_civ {
		price = 466620;
		textures[] = {
			{"shnk_w", {"civ","reb","cia"}, "" },
			{"shnk_r", {"civ","reb","cia"}, "" },
			{"shnk_bbl", {"civ","reb"}, "" },
			{"shnk_gr", {"civ","reb"}, "" },
			{"shnk_y", {"civ","reb"}, "" },
			{"shnk_bbr", {"civ","reb","cia"}, "" },
			{"shnk_o", {"civ","reb"}, "" },
			{"shnk_rs", {"civ","reb","cia"}, "" },
			{"shnk_vi", {"civ","reb"}, "" },
			{"shnk_bl", {"civ","reb"}, "" },
			{"shnk_blr", {"civ","reb"}, "" },
			{"shnk_g", {"civ","reb"}, "" },
			{"shnk_blg", {"civ","reb"}, "" },
			{"shnk_b", {"civ","reb","cop","cia"}, "" },
			{"shnk_led", {"led"}, "" },
			{"cxc_1", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_2", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_3", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_4", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_5", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_6", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_7", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_8", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_9", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_10", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_11", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_12", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_13", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_14", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_15", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_16", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_17", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_18", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_19", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_20", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_21", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_22", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_23", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_24", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_25", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_26", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_27", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_28", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_29", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_30", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_31", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_32", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_33", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_34", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_35", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_36", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_37", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_38", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_39", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_40", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_41", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_42", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_43", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_44", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_45", {"civ","reb"}, "(call life_donator) > 0" }
		};
	};
	class mrshounka_huracan_c: Mrshounka_a3_smart_civ {
		price = 1000000;
	};
	class Mrshounka_veneno_c: Mrshounka_a3_smart_civ {
		price = 1466520;
	};
	class shounka_f430_spider: Mrshounka_a3_smart_civ {
		price = 1466520;
	};
	class Mrshounka_Alfa_Romeo_civ: Mrshounka_a3_smart_civ {
		price = 38665;
	};
	class Mrshounka_bmwm1_civ: Mrshounka_a3_smart_civ {
		price = 198000;
	};
	class Mrshounka_mercedes_190_p_civ: Mrshounka_a3_smart_civ {
		price = 198000;
	};
	class Mrshounka_bmwm6_civ: Mrshounka_a3_smart_civ {
		price = 316000;
	};
	class shounka_clk: Mrshounka_a3_smart_civ {
		price = 250000;
	};
	class Mrshounka_c63_2015_civ: Mrshounka_a3_smart_civ {
		price = 450000;
	};
	class shounka_porsche911: Mrshounka_a3_smart_civ {
		price = 200000;
	};
	class Mrshounka_Bowler_c: Mrshounka_a3_smart_civ {
		price = 54000;
	};
	class Mrshounka_golfvi_civ: Mrshounka_a3_smart_civ {
		price = 153000;
	};
	class Mrshounka_Vandura_civ: Mrshounka_a3_smart_civ {
		price = 10000;
	};
	class Mrshounka_Volkswagen_Touareg_civ: Mrshounka_a3_smart_civ {
		price = 250000;
	};
	class Mrshounka_yamaha_p: Mrshounka_a3_smart_civ {
		price = 106656;
	};
	class shounka_a3_rs5_civ: Mrshounka_a3_smart_civ {
		price = 316000;
	};
	class Mrshounka_agera_p: Mrshounka_a3_smart_civ {
		price = 1500000;
	};
	class Mrshounka_hummer_civ: Mrshounka_a3_smart_civ {
		price = 380000;
	};
	class shounka_h2: Mrshounka_a3_smart_civ {
		price = 480000;
	};
	class Mrshounka_lincoln_civ: Mrshounka_a3_smart_civ {
		price = 180000;
	};
	class Mrshounka_lykan_c: Mrshounka_a3_smart_civ {
		price = 1550000;
	};
	class Faisal_MaybachLaundet57: Mrshounka_a3_smart_civ {
		price = 685900;
	};
	class Mrshounka_megane_rs_2015_noir {
		vItemSpace = 50;
		conditions = "";
		price = 64670;
		textures[] = {
			{"shnk_w", {"civ","reb","cia"}, "" },
			{"shnk_r", {"civ","reb","cia"}, "" },
			{"shnk_bbl", {"civ","reb"}, "" },
			{"shnk_gr", {"civ","reb"}, "" },
			{"shnk_y", {"civ","reb"}, "" },
			{"shnk_bbr", {"civ","reb","cia"}, "" },
			{"shnk_o", {"civ","reb"}, "" },
			{"shnk_rs", {"civ","reb","cia"}, "" },
			{"shnk_vi", {"civ","reb"}, "" },
			{"shnk_bl", {"civ","reb"}, "" },
			{"shnk_blr", {"civ","reb"}, "" },
			{"shnk_g", {"civ","reb"}, "" },
			{"shnk_blg", {"civ","reb"}, "" },
			{"shnk_b", {"civ","reb","cop","cia"}, "" },
			{"shnk_vr", {"civ","reb"}, "(call life_donator) > 0" },
			{"shnk_vg", {"civ","reb"}, "(call life_donator) > 0" },
			{"shnk_vbl", {"civ","reb"}, "(call life_donator) > 0" }
		};
		materials[] = {"glossy","matte","metallic","chrome"};
	};
	class Mrshounka_raptor2_civ {
		vItemSpace = 50;
		conditions = "";
		price = 413300;
		textures[] = {
			{"shnk_w", {"civ","reb","cia"}, "" },
			{"shnk_r", {"civ","reb","cia"}, "" },
			{"shnk_bbl", {"civ","reb"}, "" },
			{"shnk_gr", {"civ","reb"}, "" },
			{"shnk_y", {"civ","reb"}, "" },
			{"shnk_bbr", {"civ","reb","cia"}, "" },
			{"shnk_o", {"civ","reb"}, "" },
			{"shnk_rs", {"civ","reb","cia"}, "" },
			{"shnk_vi", {"civ","reb"}, "" },
			{"shnk_bl", {"civ","reb"}, "" },
			{"shnk_blr", {"civ","reb"}, "" },
			{"shnk_g", {"civ","reb"}, "" },
			{"shnk_blg", {"civ","reb"}, "" },
			{"shnk_b", {"civ","reb","cop","cia"}, "" },
			{"shnk_vfc", {"civ","reb"}, "(call life_donator) > 0" },
			{"shnk_vuc", {"civ","reb"}, "(call life_donator) > 0" },
			{"shnk_vdc", {"civ","reb"}, "(call life_donator) > 0" }
		};
		materials[] = {"glossy","matte","metallic","chrome"};
	};

	class quiet_audi_r8_plus_spawn_couleur_blanche_ingame_f {
		vItemSpace = 50;
		conditions = "";
		price = 1600000;
		textures[] = {};
		materials[] = {};
	};
	class shounka_limo_civ {
		vItemSpace = 50;
		conditions = "";
		price = 2500;
		textures[] = {
			{"shnk_w", {"taxi"}, "" },
			{"shnk_b", {"taxi"}, "" }
		};
		materials[] = {"glossy","matte","metallic","chrome"};
	};
	class shounka_a3_mantgs_2_in {
		vItemSpace = 700;
		conditions = "";
		price = 100000;
		textures[] = {
			{"shnk_w", {"civ","reb","cia"}, "" },
			{"shnk_r", {"civ","reb","cia"}, "" },
			{"shnk_bbl", {"civ","reb"}, "" },
			{"shnk_gr", {"civ","reb"}, "" },
			{"shnk_y", {"civ","reb"}, "" },
			{"shnk_bbr", {"civ","reb","cia"}, "" },
			{"shnk_o", {"civ","reb"}, "" },
			{"shnk_rs", {"civ","reb","cia"}, "" },
			{"shnk_vi", {"civ","reb"}, "" },
			{"shnk_bl", {"civ","reb"}, "" },
			{"shnk_blr", {"civ","reb"}, "" },
			{"shnk_g", {"civ","reb"}, "" },
			{"shnk_blg", {"civ","reb"}, "" },
			{"shnk_b", {"civ","reb","cop","cia"}, "" }
		};
		materials[] = {"glossy","matte","metallic","chrome"};
	};
	class shounka_a3_renaultmagnum_f {
		vItemSpace = 1300;
		conditions = "";
		price = 220000;
		textures[] = {
			{"shnk_w", {"civ","reb","cia"}, "" },
			{"shnk_r", {"civ","reb","cia"}, "" },
			{"shnk_bbl", {"civ","reb"}, "" },
			{"shnk_gr", {"civ","reb"}, "" },
			{"shnk_y", {"civ","reb"}, "" },
			{"shnk_bbr", {"civ","reb","cia"}, "" },
			{"shnk_o", {"civ","reb"}, "" },
			{"shnk_rs", {"civ","reb","cia"}, "" },
			{"shnk_vi", {"civ","reb"}, "" },
			{"shnk_bl", {"civ","reb"}, "" },
			{"shnk_blr", {"civ","reb"}, "" },
			{"shnk_g", {"civ","reb"}, "" },
			{"shnk_blg", {"civ","reb"}, "" },
			{"shnk_b", {"civ","reb","cop","cia"}, "" }
		};
		materials[] = {"glossy","matte","metallic","chrome"};
	};
	class ext_Jonzie_Tanker_Truck {
		vItemSpace = 1200;
		conditions = "";
		price = 710000;
		textures[] = {
			{"shnk_w", {"civ","reb","cia"}, "" },
			{"shnk_r", {"civ","reb","cia"}, "" },
			{"shnk_bbl", {"civ","reb"}, "" },
			{"shnk_gr", {"civ","reb"}, "" },
			{"shnk_y", {"civ","reb"}, "" },
			{"shnk_bbr", {"civ","reb","cia"}, "" },
			{"shnk_o", {"civ","reb"}, "" },
			{"shnk_rs", {"civ","reb","cia"}, "" },
			{"shnk_vi", {"civ","reb"}, "" },
			{"shnk_bl", {"civ","reb"}, "" },
			{"shnk_blr", {"civ","reb"}, "" },
			{"shnk_g", {"civ","reb"}, "" },
			{"shnk_blg", {"civ","reb"}, "" },
			{"shnk_b", {"civ","reb","cop","cia"}, "" }
		};
		materials[] = {"glossy","matte","metallic","chrome"};
	};
	class RDS_Ikarus_Civ_01 {
		vItemSpace = 100;
		conditions = "";
		price = 2500;
		textures[] = {};
		materials[] = {};
	};
	class ext_Jonzie_Box_Truck {
		vItemSpace = 1200;
		conditions = "";
		price = 760000;
		textures[] = {
			{"shnk_w", {"civ","reb","cia"}, "" },
			{"shnk_r", {"civ","reb","cia"}, "" },
			{"shnk_bbl", {"civ","reb"}, "" },
			{"shnk_gr", {"civ","reb"}, "" },
			{"shnk_y", {"civ","reb"}, "" },
			{"shnk_bbr", {"civ","reb","cia"}, "" },
			{"shnk_o", {"civ","reb"}, "" },
			{"shnk_rs", {"civ","reb","cia"}, "" },
			{"shnk_vi", {"civ","reb"}, "" },
			{"shnk_bl", {"civ","reb"}, "" },
			{"shnk_blr", {"civ","reb"}, "" },
			{"shnk_g", {"civ","reb"}, "" },
			{"shnk_blg", {"civ","reb"}, "" },
			{"shnk_b", {"civ","reb","cop","cia"}, "" }
		};
		materials[] = {"glossy","matte","metallic","chrome"};
	};
	class Mrshounka_Vandura_civ_7ch {
		vItemSpace = 50;
		conditions = "";
		price = 10000;
		textures[] = {};
		materials[] = {};
	};
	class quiet_sub2015_noir_f {
		vItemSpace = 50;
		conditions = "";
		price = 200000;
		textures[] = {};
		materials[] = {};
	};
	class Mrshounka_rs4_gend_p_blanc {
		vItemSpace = 50;
		conditions = "";
		price = 65000;
		textures[] = {
			{"shnk_bbr", {"cia"}, "" },
			{"shnk_b", {"cia"}, "" }
		};
		materials[] = {};
	};
	class Mrshounka_agera_gend_p {
		vItemSpace = 50;
		conditions = "";
		price = 100000;
		textures[] = {};
		materials[] = {};
	};
	class atm_C130_J {
		vItemSpace = 50;
		conditions = "";
		price = 300000;
		textures[] = {};
		materials[] = {};
	};
	class shounka_a3_pompier_sprinter {
		vItemSpace = 50;
		conditions = "";
		price = 30000;
		textures[] = {};
		materials[] = {};
	};
	class Mrshounka_Volkswagen_Touareg_mcs {
		vItemSpace = 50;
		conditions = "";
		price = 45000;
		textures[] = {};
		materials[] = {};
	};
	class RDS_S1203_Civ_02 {
		vItemSpace = 50;
		conditions = "";
		price = 50000;
		textures[] = {};
		materials[] = {};
	};
	class O_Truck_02_medical_F {
		vItemSpace = 50;
		conditions = "";
		price = 50000;
		textures[] = {};
		materials[] = {};
	};
	class mercedes_atego_pompier_ingame {
		vItemSpace = 50;
		conditions = "";
		price = 45000;
		textures[] = {};
		materials[] = {};
	};
	class dezkit_b206_ems {
		vItemSpace = 50;
		conditions = "";
		price = 200000;
		textures[] = {
			{"dems_med", {"med"}, "" },
			{"dems_7n", {"press"}, "" }
		};
		materials[] = {};
	};
	class dezkit_b206_news {
		vItemSpace = 50;
		conditions = "";
		price = 60000;
		textures[] = {};
		materials[] = {};
	};
	class dezkit_b206_rescue {
		vItemSpace = 50;
		conditions = "";
		price = 200000;
		textures[] = {};
		materials[] = {};
	};
	class O_Heli_Transport_04_medevac_F {
		vItemSpace = 50;
		conditions = "";
		price = 300000;
		textures[] = {};
		materials[] = {};
	};
	class Mrshounka_a3_308_gend {
		vItemSpace = 50;
		conditions = "";
		price = 16000;
		textures[] = {};
		materials[] = {};
	};
	class Mrshounka_a3_rs_gend {
		vItemSpace = 50;
		conditions = "";
		price = 16000;
		textures[] = {};
		materials[] = {};
	};
	class ivory_wrx_pd_m3 {
		vItemSpace = 50;
		conditions = "";
		price = 18000;
		textures[] = {};
		materials[] = {};
	};
	class ivory_wrx_pd_m2 {
		vItemSpace = 50;
		conditions = "";
		price = 18000;
		textures[] = {};
		materials[] = {};
	};
	class ivory_wrx_pd_m1 {
		vItemSpace = 50;
		conditions = "";
		price = 18000;
		textures[] = {};
		materials[] = {};
	};
	class ivory_m3_pd_M {
		vItemSpace = 50;
		conditions = "";
		price = 18000;
		textures[] = {};
		materials[] = {};
	};
	class ivory_isf_pd_m {
		vItemSpace = 50;
		conditions = "";
		price = 18000;
		textures[] = {};
		materials[] = {};
	};
	class shounka_a3_508gend {
		vItemSpace = 50;
		conditions = "";
		price = 24000;
		textures[] = {};
		materials[] = {};
	};
	class shounka_a3_gendsprinter {
		vItemSpace = 50;
		conditions = "";
		price = 24000;
		textures[] = {};
		materials[] = {};
	};
	class B_mas_HMMWV_M134_des {
		vItemSpace = 15;
		conditions = "";
		price = 400000;
		textures[] = {};
		materials[] = {};
	};
	class Mrshounka_rs_2015_g {
		vItemSpace = 50;
		conditions = "";
		price = 16000;
		textures[] = {};
		materials[] = {};
	};
	class Mrshounka_ducati_police_p {
		vItemSpace = 50;
		conditions = "";
		price = 30000;
		textures[] = {};
		materials[] = {};
	};
	class Mrshounka_bmw_gend {
		vItemSpace = 50;
		conditions = "";
		price = 24000;
		textures[] = {};
		materials[] = {};
	};
	class Mrshounka_evox_gend {
		vItemSpace = 50;
		conditions = "";
		price = 240000;
		textures[] = {};
		materials[] = {};
	};
	class shounka_a3_audiq7_v2_gendarmerie {
		vItemSpace = 50;
		conditions = "";
		price = 24000;
		textures[] = {};
		materials[] = {};
	};
	class shounka_a3_suburbangign {
		vItemSpace = 50;
		conditions = "";
		price = 24000;
		textures[] = {};
		materials[] = {};
	};
	class shounka_a3_brinks_bleufonce {
		vItemSpace = 50;
		conditions = "";
		price = 65000;
		textures[] = {};
		materials[] = {};
	};
	class B_G_Offroad_01_armed_F {
		vItemSpace = 50;
		conditions = "";
		price = 100000;
		textures[] = {
			{"ffrd_bg_r", {"reb","rebgang","aff","sdr"}, "" },
			{"ffrd_cop", {"cop"}, "" }
		};
		materials[] = {};
	};
	class B_mas_cars_Hilux_M2 {
		vItemSpace = 50;
		conditions = "";
		price = 100000;
		textures[] = {};
		materials[] = {};
	};
	class I_mas_cars_UAZ_M2 {
		vItemSpace = 50;
		conditions = "";
		price = 100000;
		textures[] = {};
		materials[] = {};
	};
	class B_mas_cars_LR_M2 {
		vItemSpace = 50;
		conditions = "";
		price = 100000;
		textures[] = {};
		materials[] = {};
	};
	class shounka_a3_brinks_noir {
		vItemSpace = 50;
		conditions = "";
		price = 65000;
		textures[] = {};
		materials[] = {};
	};
	class PMC_Offroad_Transport {
		vItemSpace = 50;
		conditions = "";
		price = 12000;
		textures[] = {};
		materials[] = {};
	};
	class PMC_Offroad_Armed {
		vItemSpace = 50;
		conditions = "";
		price = 100000;
		textures[] = {};
		materials[] = {};
	};
	class SIG_SuperBee {
		vItemSpace = 50;
		conditions = "";
		price = 100000;
		textures[] = {};
		materials[] = {};
	};
	class SIG_SuperBeeY: SIG_SuperBee {};
	class SIG_SuperBeeB: SIG_SuperBee {};
	class SIG_SuperBeeL: SIG_SuperBee {};
	class SIG_SuperBeeM: SIG_SuperBee {};
	class SIG_SuperBeeG: SIG_SuperBee {};
	class SIG_Roadrunner: SIG_SuperBee {};
	class SIG_Hubcaps: SIG_SuperBee {};
	class SIG_Magnums: SIG_SuperBee {};
	class SIG_Hcode: SIG_SuperBee {};


	class jeffery_a3_audiq7_v2_gendarmerie {
		vItemSpace = 50;
		conditions = "";
		price = 16000;
		textures[] = {};
		materials[] = {};
	};
	class Mrjeffery_bmw_gend {
		vItemSpace = 50;
		conditions = "";
		price = 16000;
		textures[] = {};
		materials[] = {};
	};
	class Jeffery_a3_508gend {
		vItemSpace = 50;
		conditions = "";
		price = 16000;
		textures[] = {};
		materials[] = {};
	};
	class C_Offroad_02_unarmed_F {
		vItemSpace = 50;
		conditions = "";
		price = 356800;
		textures[] = {
			{"codu_w", {"civ"}, "" },
			{"codu_r", {"civ"}, "" },
			{"codu_o", {"civ"}, "" },
			{"codu_bl", {"civ"}, "" }
		};
		materials[] = {"glossy","matte","metallic","chrome"};
	};
	class ext_Jonzie_Mini_Cooper {
		vItemSpace = 50;
		conditions = "";
		price = 230680;
		textures[] = {
			{"shnk_w", {"civ","reb","cia"}, "" },
			{"shnk_r", {"civ","reb","cia"}, "" },
			{"shnk_bbl", {"civ","reb"}, "" },
			{"shnk_gr", {"civ","reb"}, "" },
			{"shnk_y", {"civ","reb"}, "" },
			{"shnk_bbr", {"civ","reb","cia"}, "" },
			{"shnk_o", {"civ","reb"}, "" },
			{"shnk_rs", {"civ","reb","cia"}, "" },
			{"shnk_vi", {"civ","reb"}, "" },
			{"shnk_bl", {"civ","reb"}, "" },
			{"shnk_blr", {"civ","reb"}, "" },
			{"shnk_g", {"civ","reb"}, "" },
			{"shnk_blg", {"civ","reb"}, "" },
			{"shnk_b", {"civ","reb","cop","cia"}, "" }
		};
		materials[] = {"glossy","matte","metallic","chrome"};
	};
	class ext_Jonzie_Mini_Cooper_R_spec: ext_Jonzie_Mini_Cooper {
		price = 35000;
	};
	class ext_Jonzie_STI: ext_Jonzie_Mini_Cooper {
		price = 60000;
	};
	class ext_Jonzie_30CSL: ext_Jonzie_Mini_Cooper {
		price = 133000;
	};
	class ext_Jonzie_Datsun_Z432: ext_Jonzie_Mini_Cooper {
		price = 30000;
	};
	class ext_Jonzie_XB: ext_Jonzie_Mini_Cooper {
		price = 60000;
	};

	class ext_Jonzie_Tow_Truck {
		vItemSpace = 0;
		conditions = "";
		price = 80000;
		textures[] = {
			{"shnk_w", {"civ","reb","cia"}, "" },
			{"shnk_r", {"civ","reb","cia"}, "" },
			{"shnk_bbl", {"civ","reb"}, "" },
			{"shnk_gr", {"civ","reb"}, "" },
			{"shnk_y", {"civ","reb"}, "" },
			{"shnk_bbr", {"civ","reb","cia"}, "" },
			{"shnk_o", {"civ","reb"}, "" },
			{"shnk_rs", {"civ","reb","cia"}, "" },
			{"shnk_vi", {"civ","reb"}, "" },
			{"shnk_bl", {"civ","reb"}, "" },
			{"shnk_blr", {"civ","reb"}, "" },
			{"shnk_g", {"civ","reb"}, "" },
			{"shnk_blg", {"civ","reb"}, "" },
			{"shnk_b", {"civ","reb","cop","cia"}, "" }
		};
		materials[] = {"glossy","matte","metallic","chrome"};
	};
	class ext_Jonzie_Flat_Bed: ext_Jonzie_Tow_Truck {};
	class ext_Jonzie_Log_Truck: ext_Jonzie_Tow_Truck {};

	class ext_ivory_rs4 {
		vItemSpace = 50;
		conditions = "";
		price = 286638;
		textures[] = {
			{"shnk_w", {"civ","reb","cia"}, "" },
			{"shnk_r", {"civ","reb","cia"}, "" },
			{"shnk_bbl", {"civ","reb"}, "" },
			{"shnk_gr", {"civ","reb"}, "" },
			{"shnk_y", {"civ","reb"}, "" },
			{"shnk_bbr", {"civ","reb","cia"}, "" },
			{"shnk_o", {"civ","reb"}, "" },
			{"shnk_rs", {"civ","reb","cia"}, "" },
			{"shnk_vi", {"civ","reb"}, "" },
			{"shnk_bl", {"civ","reb"}, "" },
			{"shnk_blr", {"civ","reb"}, "" },
			{"shnk_g", {"civ","reb"}, "" },
			{"shnk_blg", {"civ","reb"}, "" },
			{"shnk_b", {"civ","reb","cop","cia"}, "" },
			{"shnk_bT", {"civ","reb"}, "(call life_donator) > 3" },
			{"cxc_1", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_2", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_3", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_4", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_5", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_6", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_7", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_8", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_9", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_10", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_11", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_12", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_13", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_14", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_15", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_16", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_17", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_18", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_19", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_20", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_21", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_22", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_23", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_24", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_25", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_26", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_27", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_28", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_29", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_30", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_31", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_32", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_33", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_34", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_35", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_36", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_37", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_38", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_39", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_40", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_41", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_42", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_43", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_44", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_45", {"civ","reb"}, "(call life_donator) > 0" }
		};
		materials[] = {"glossy","matte","metallic","chrome"};
	};
	class ext_ivory_c: ext_ivory_rs4 {
		price = 1466520;
	};
	class ext_ivory_veyron: ext_ivory_rs4 {
		price = 2050000;
	};
	class ext_ivory_e36: ext_ivory_rs4 {
		price = 160000;
	};
	class ext_ivory_m3: ext_ivory_rs4 {
		price = 270000;
	};
	class ext_ivory_isf: ext_ivory_rs4 {
		price = 270000;
	};
	class ext_ivory_lfa: ext_ivory_rs4 {
		price = 439950;
	};
	class ext_ivory_elise: ext_ivory_rs4 {
		price = 80000;
	};
	class ext_ivory_f1: ext_ivory_rs4 {
		price = 540000;
	};
	class ext_ivory_mp4: ext_ivory_rs4 {
		price = 440000;
	};
	class ext_ivory_190e: ext_ivory_rs4 {
		price = 32000;
	};
	class ext_ivory_evox: ext_ivory_rs4 {
		price = 56662;
	};
	class ext_ivory_r34: ext_ivory_rs4 {
		price = 425000;
	};
	class ext_ivory_gt500: ext_ivory_rs4 {
		price = 393294;
		textures[] = {
			{"shnk_w", {"civ","reb","cia"}, "" },
			{"shnk_r", {"civ","reb","cia"}, "" },
			{"shnk_bbl", {"civ","reb"}, "" },
			{"shnk_gr", {"civ","reb"}, "" },
			{"shnk_y", {"civ","reb"}, "" },
			{"shnk_bbr", {"civ","reb","cia"}, "" },
			{"shnk_o", {"civ","reb"}, "" },
			{"shnk_rs", {"civ","reb","cia"}, "" },
			{"shnk_vi", {"civ","reb"}, "" },
			{"shnk_bl", {"civ","reb"}, "" },
			{"shnk_blr", {"civ","reb"}, "" },
			{"shnk_g", {"civ","reb"}, "" },
			{"shnk_blg", {"civ","reb"}, "" },
			{"shnk_b", {"civ","reb","cop","cia"}, "" },
			{"shnk_bT", {"civ","reb"}, "(call life_donator) > 3" },
			{"ivgt_rw", {"civ","reb"}, "(call life_donator) > 0" },
			{"ivgt_bg", {"civ","reb"}, "(call life_donator) > 0" },
			{"ivgt_gb", {"civ","reb"}, "(call life_donator) > 0" },
			{"ivgt_wb", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_1", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_2", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_3", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_4", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_5", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_6", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_7", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_8", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_9", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_10", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_11", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_12", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_13", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_14", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_15", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_16", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_17", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_18", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_19", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_20", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_21", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_22", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_23", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_24", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_25", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_26", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_27", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_28", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_29", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_30", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_31", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_32", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_33", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_34", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_35", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_36", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_37", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_38", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_39", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_40", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_41", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_42", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_43", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_44", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_45", {"civ","reb"}, "(call life_donator) > 0" }
		};
	};
	class ext_ivory_wrx: ext_ivory_rs4 {
		price = 60000;
		textures[] = {
			{"shnk_w", {"civ","reb","cia"}, "" },
			{"shnk_r", {"civ","reb","cia"}, "" },
			{"shnk_bbl", {"civ","reb"}, "" },
			{"shnk_gr", {"civ","reb"}, "" },
			{"shnk_y", {"civ","reb"}, "" },
			{"shnk_bbr", {"civ","reb","cia"}, "" },
			{"shnk_o", {"civ","reb"}, "" },
			{"shnk_rs", {"civ","reb","cia"}, "" },
			{"shnk_vi", {"civ","reb"}, "" },
			{"shnk_bl", {"civ","reb"}, "" },
			{"shnk_blr", {"civ","reb"}, "" },
			{"shnk_g", {"civ","reb"}, "" },
			{"shnk_blg", {"civ","reb"}, "" },
			{"shnk_b", {"civ","reb","cop","cia"}, "" },
			{"shnk_bT", {"civ","reb"}, "(call life_donator) > 3" },
			{"cxc_1", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_2", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_3", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_4", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_5", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_6", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_7", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_8", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_9", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_10", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_11", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_12", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_13", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_14", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_15", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_16", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_17", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_18", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_19", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_20", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_21", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_22", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_23", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_24", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_25", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_26", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_27", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_28", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_29", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_30", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_31", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_32", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_33", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_34", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_35", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_36", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_37", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_38", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_39", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_40", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_41", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_42", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_43", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_44", {"civ","reb"}, "(call life_donator) > 0" },
			{"cxc_45", {"civ","reb"}, "(call life_donator) > 0" },
			{"wrx_ira", {"ira"}, "" }
		};
	};
	class ext_ivory_supra: ext_ivory_rs4 {
		price = 400000;
	};
	class ext_ivory_rs4_taxi {
		vItemSpace = 50;
		conditions = "";
		price = 2500;
		textures[] = {};
		materials[] = {};
	};
	class TM_Porsche_911_Black {
		vItemSpace = 50;
		conditions = "";
		price = 60000;
		textures[] = {};
		materials[] = {"glossy","matte","metallic","chrome"};
	};
	class Quiet_c65amg_noir_f {
		vItemSpace = 50;
		conditions = "";
		price = 45000;
		textures[] = {};
		materials[] = {"glossy","matte","metallic","chrome"};
	};
	class ext_ivory_190e_taxi {
		vItemSpace = 50;
		conditions = "";
		price = 2500;
		textures[] = {};
		materials[] = {};
	};
	class O_mas_BTR60 {
		vItemSpace = 0;
		conditions = "";
		price = 100000;
		textures[] = {};
		materials[] = {};
	};
	class B_APC_Wheeled_01_cannon_F {
		vItemSpace = 0;
		conditions = "";
		price = 0;
		textures[] = {
			{"apcw_fed", {"cop","cia","dea"}, "" },
			{"apcw_civ", {"civ"}, "" }
		};
		materials[] = {};
	};
	class O_MRAP_02_hmg_F {
		vItemSpace = 0;
		conditions = "";
		price = 0;
		textures[] = {
			{"mrp_g", {"reb"}, "" },
			{"mrp_cg", {"civ"}, "" }
		};
		materials[] = {};
	};

	//LED
	class Altmerion_bmw_prok {
		vItemSpace = 50;
		conditions = "";
		price = 24000;
		textures[] = {};
		materials[] = {};
	};

	class Mrshounka_corbillard_c_bleufonce {
		vItemSpace = 50;
		conditions = "";
		price = 75000;
		textures[] = {};
		materials[] = {};
	};

	class ext_ivory_rs4_police {
		vItemSpace = 50;
		conditions = "";
		price = 25000;
		textures[] = {};
		materials[] = {"glossy","matte","metallic","chrome"};
	};
	class ext_ivory_isf_police: ext_ivory_rs4_police {
		price = 25000;
	};
	class ext_ivory_m3_police: ext_ivory_rs4_police {
		price = 25000;
	};
	class ext_ivory_evox_police: ext_ivory_rs4_police {
		price = 23000;
	};
	class ext_ivory_wrx_police: ext_ivory_rs4_police {
		price = 23000;
	};
	class Faisal_Youkun2015_PD: ext_ivory_rs4_police {
		price = 23000;
	};
	class FaisalAlYahya_CVPI_police: ext_ivory_rs4_police {
		price = 23000;
	};
	class AMG_TahoePolice: ext_ivory_rs4_police {
		price = 23000;
	};
	class C_Van_01_box_F_EXT_DHL {
		vItemSpace = 0;
		conditions = "";
		price = 0;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_giulia_quad_16 {
		vItemSpace = 60;
		conditions = "";
		price = 900000;
		textures[] = {
			{"giulia_16_w", {"civ","reb"}, "" },
			{"giulia_16_k", {"civ","reb"}, "" },
			{"giulia_16_mb", {"civ","reb"}, "" },
			{"giulia_16_qmb", {"civ","reb"}, "" },
			{"giulia_16_ra", {"civ","reb"}, "" },
			{"giulia_16_rc", {"civ","reb"}, "" },
			{"giulia_16_sg", {"civ","reb"}, "" },
			{"giulia_16_vg", {"civ","reb"}, "" },
			{"giulia_16_vb", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_giulia_16_SE {
		vItemSpace = 60;
		conditions = "";
		price = 200000;
		textures[] = {
			{"giulia_16_ti_w", {"civ","reb"}, "" },
			{"giulia_16_ti_k", {"civ","reb"}, "" },
			{"giulia_16_ti_qmb", {"civ","reb"}, "" },
			{"giulia_16_ti_rc", {"civ","reb"}, "" },
			{"giulia_16_ti_sg", {"civ","reb"}, "" },
			{"giulia_16_ti_vg", {"civ","reb"}, "" },
			{"giulia_16_ti_vb", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class AlessioR8 {
		vItemSpace = 50;
		conditions = "";
		price = 1100000;
		textures[] = {};
		materials[] = {};
	};
	
	class IVORY_R8SPYDER {
		vItemSpace = 50;
		conditions = "";
		price = 1150000;
		textures[] = {};
		materials[] = {};
	};
	
	class Quiet_v2_r8plus_blanche_f {
		vItemSpace = 50;
		conditions = "";
		price = 1150000;
		textures[] = {};
		materials[] = {};
	};
	
	class AlessioRS4 {
		vItemSpace = 80;
		conditions = "";
		price = 570000;
		textures[] = {};
		materials[] = {};
	};
	
	class ivory_c {
		vItemSpace = 80;
		conditions = "";
		price = 2000000;
		textures[] = {};
		materials[] = {};
	};
	
	class Jonzie_30CSL {
		vItemSpace = 50;
		conditions = "";
		price = 60000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_nemises_f87_17 {
		vItemSpace = 50;
		conditions = "";
		price = 610000;
		textures[] = {
			{"f87_17_ao", {"civ","reb"}, "" },
			{"f87_17_ac", {"civ","reb"}, "" },
			{"f87_17_bu", {"civ","reb"}, "" },
			{"f87_17_b", {"civ","reb"}, "" },
			{"f87_17_cs", {"civ","reb"}, "" },
			{"f87_17_gs", {"civ","reb"}, "" },
			{"f87_17_ib", {"civ","reb"}, "" },
			{"f87_17_j", {"civ","reb"}, "" },
			{"f87_17_mb", {"civ","reb"}, "" },
			{"f87_17_sg", {"civ","reb"}, "" },
			{"f87_17_adf8", {"civ","reb"}, "" },
			{"f87_17_awf8", {"civ","reb"}, "" },
			{"f87_17_aof8", {"civ","reb"}, "" },
			{"f87_17_azf8", {"civ","reb"}, "" },
			{"f87_17_cqf8", {"civ","reb"}, "" },
			{"f87_17_dgf8", {"civ","reb"}, "" },
			{"f87_17_mbf8", {"civ","reb"}, "" },
			{"f87_17_rsf8", {"civ","reb"}, "" },
			{"f87_17_sbf8", {"civ","reb"}, "" },
			{"f87_17_sgf8", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_nemises_f87_17_ACH {
		vItemSpace = 50;
		conditions = "";
		price = 770000;
		textures[] = {
			{"f87_17_ao", {"civ","reb"}, "" },
			{"f87_17_ac", {"civ","reb"}, "" },
			{"f87_17_bu", {"civ","reb"}, "" },
			{"f87_17_b", {"civ","reb"}, "" },
			{"f87_17_cs", {"civ","reb"}, "" },
			{"f87_17_gs", {"civ","reb"}, "" },
			{"f87_17_ib", {"civ","reb"}, "" },
			{"f87_17_j", {"civ","reb"}, "" },
			{"f87_17_mb", {"civ","reb"}, "" },
			{"f87_17_sg", {"civ","reb"}, "" },
			{"f87_17_adf8", {"civ","reb"}, "" },
			{"f87_17_awf8", {"civ","reb"}, "" },
			{"f87_17_aof8", {"civ","reb"}, "" },
			{"f87_17_azf8", {"civ","reb"}, "" },
			{"f87_17_cqf8", {"civ","reb"}, "" },
			{"f87_17_dgf8", {"civ","reb"}, "" },
			{"f87_17_mbf8", {"civ","reb"}, "" },
			{"f87_17_rsf8", {"civ","reb"}, "" },
			{"f87_17_sbf8", {"civ","reb"}, "" },
			{"f87_17_sgf8", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_amazing_ACS8_17 {
		vItemSpace = 50;
		conditions = "";
		price = 3550000;
		textures[] = {
			{"ACS8_17_m", {"civ","reb"}, "" },
			{"ACS8_17_y", {"civ","reb"}, "" },
			{"ACS8_17_bs", {"civ","reb"}, "" },
			{"ACS8_17_fdr", {"civ","reb"}, "" },
			{"ACS8_17_gp", {"civ","reb"}, "" },
			{"ACS8_17_mg", {"civ","reb"}, "" },
			{"ACS8_17_or", {"civ","reb"}, "" },
			{"ACS8_17_s", {"civ","reb"}, "" },
			{"ACS8_17_srb", {"civ","reb"}, "" },
			{"ACS8_17_ymb", {"civ","reb"}, "" },
			{"ACS8_17_iaw", {"civ","reb"}, "" },
			{"ACS8_17_iay", {"civ","reb"}, "" },
			{"ACS8_17_ibs", {"civ","reb"}, "" },
			{"ACS8_17_ifdr", {"civ","reb"}, "" },
			{"ACS8_17_igp", {"civ","reb"}, "" },
			{"ACS8_17_ing", {"civ","reb"}, "" },
			{"ACS8_17_rust", {"civ","reb"}, "" },
			{"ACS8_17_iso", {"civ","reb"}, "" },
			{"ACS8_17_is", {"civ","reb"}, "" },
			{"ACS8_17_isrb", {"civ","reb"}, "" },
			{"ACS8_17_iymb", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_nemises_f87_17_m {
		vItemSpace = 50;
		conditions = "";
		price = 790000;
		textures[] = {
			{"f87_17_ao", {"civ","reb"}, "" },
			{"f87_17_ac", {"civ","reb"}, "" },
			{"f87_17_bu", {"civ","reb"}, "" },
			{"f87_17_b", {"civ","reb"}, "" },
			{"f87_17_cs", {"civ","reb"}, "" },
			{"f87_17_gs", {"civ","reb"}, "" },
			{"f87_17_ib", {"civ","reb"}, "" },
			{"f87_17_j", {"civ","reb"}, "" },
			{"f87_17_mb", {"civ","reb"}, "" },
			{"f87_17_sg", {"civ","reb"}, "" },
			{"f87_17_adf8", {"civ","reb"}, "" },
			{"f87_17_awf8", {"civ","reb"}, "" },
			{"f87_17_aof8", {"civ","reb"}, "" },
			{"f87_17_azf8", {"civ","reb"}, "" },
			{"f87_17_cqf8", {"civ","reb"}, "" },
			{"f87_17_dgf8", {"civ","reb"}, "" },
			{"f87_17_mbf8", {"civ","reb"}, "" },
			{"f87_17_rsf8", {"civ","reb"}, "" },
			{"f87_17_sbf8", {"civ","reb"}, "" },
			{"f87_17_sgf8", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_f87_18_m {
		vItemSpace = 50;
		conditions = "";
		price = 800000;
		textures[] = {
			{"f87_17_ao", {"civ","reb"}, "" },
			{"f87_17_ac", {"civ","reb"}, "" },
			{"f87_17_bu", {"civ","reb"}, "" },
			{"f87_17_b", {"civ","reb"}, "" },
			{"f87_17_cs", {"civ","reb"}, "" },
			{"f87_17_gs", {"civ","reb"}, "" },
			{"f87_17_ib", {"civ","reb"}, "" },
			{"f87_17_j", {"civ","reb"}, "" },
			{"f87_17_mb", {"civ","reb"}, "" },
			{"f87_17_sg", {"civ","reb"}, "" },
			{"f87_17_adf8", {"civ","reb"}, "" },
			{"f87_17_awf8", {"civ","reb"}, "" },
			{"f87_17_aof8", {"civ","reb"}, "" },
			{"f87_17_azf8", {"civ","reb"}, "" },
			{"f87_17_cqf8", {"civ","reb"}, "" },
			{"f87_17_dgf8", {"civ","reb"}, "" },
			{"f87_17_mbf8", {"civ","reb"}, "" },
			{"f87_17_rsf8", {"civ","reb"}, "" },
			{"f87_17_sbf8", {"civ","reb"}, "" },
			{"f87_17_sgf8", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_nemises_f80_14 {
		vItemSpace = 50;
		conditions = "";
		price = 780000;
		textures[] = {
			{"f80_14_al", {"civ","reb"}, "" },
			{"f80_14_ay", {"civ","reb"}, "" },
			{"f80_14_bs", {"civ","reb"}, "" },
			{"f80_14_ac", {"civ","reb"}, "" },
			{"f80_14_bu", {"civ","reb"}, "" },
			{"f80_14_st", {"civ","reb"}, "" },
			{"f80_14_cs", {"civ","reb"}, "" },
			{"f80_14_gs", {"civ","reb"}, "" },
			{"f80_14_ib", {"civ","reb"}, "" },
			{"f80_14_j", {"civ","reb"}, "" },
			{"f80_14_mb", {"civ","reb"}, "" },
			{"f80_14_dg", {"civ","reb"}, "" },
			{"f80_14_mg", {"civ","reb"}, "" },
			{"f80_14_so", {"civ","reb"}, "" },
			{"f80_14_ss", {"civ","reb"}, "" },
			{"f80_14_m", {"civ","reb"}, "" },
			{"f80_14_mp", {"civ","reb"}, "" },
			{"f80_14_da", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_nemises_f80_14_SE {
		vItemSpace = 50;
		conditions = "";
		price = 850000;
		textures[] = {
			{"f80_14_al", {"civ","reb"}, "" },
			{"f80_14_ay", {"civ","reb"}, "" },
			{"f80_14_bs", {"civ","reb"}, "" },
			{"f80_14_ac", {"civ","reb"}, "" },
			{"f80_14_bu", {"civ","reb"}, "" },
			{"f80_14_st", {"civ","reb"}, "" },
			{"f80_14_cs", {"civ","reb"}, "" },
			{"f80_14_gs", {"civ","reb"}, "" },
			{"f80_14_ib", {"civ","reb"}, "" },
			{"f80_14_j", {"civ","reb"}, "" },
			{"f80_14_mb", {"civ","reb"}, "" },
			{"f80_14_dg", {"civ","reb"}, "" },
			{"f80_14_mg", {"civ","reb"}, "" },
			{"f80_14_so", {"civ","reb"}, "" },
			{"f80_14_ss", {"civ","reb"}, "" },
			{"f80_14_m", {"civ","reb"}, "" },
			{"f80_14_mp", {"civ","reb"}, "" },
			{"f80_14_da", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class AlessioBM4 {
		vItemSpace = 50;
		conditions = "";
		price = 500000;
		textures[] = {};
		materials[] = {};
	};
	
	class AlessioM5 {
		vItemSpace = 50;
		conditions = "";
		price = 580600;
		textures[] = {};
		materials[] = {};
	};
	
	
	class d3s_nemises_f82_14_EX {
		vItemSpace = 50;
		conditions = "";
		price = 900000;
		textures[] = {
			{"f82_14_w", {"civ","reb"}, "" },
			{"f82_14_c", {"civ","reb"}, "" },
			{"f82_14_b", {"civ","reb"}, "" },
			{"f82_14_g", {"civ","reb"}, "" },
			{"f82_14_s", {"civ","reb"}, "" },
			{"f82_14_gs", {"civ","reb"}, "" },
			{"f82_14_bl", {"civ","reb"}, "" },
			{"f82_14_j", {"civ","reb"}, "" },
			{"f82_14_mb", {"civ","reb"}, "" },
			{"f82_14_sg", {"civ","reb"}, "" },
			{"f82_14_pw", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_amazing_f82_16 {
		vItemSpace = 50;
		conditions = "";
		price = 920000;
		textures[] = {
			{"f82_16_m", {"civ","reb"}, "" },
			{"f82_16_y", {"civ","reb"}, "" },
			{"f82_16_bs", {"civ","reb"}, "" },
			{"f82_16_fdr", {"civ","reb"}, "" },
			{"f82_16_gp", {"civ","reb"}, "" },
			{"f82_16_or", {"civ","reb"}, "" },
			{"f82_16_s", {"civ","reb"}, "" },
			{"f82_16_srb", {"civ","reb"}, "" },
			{"f82_16_ymb", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_nemises_f82_14_gts {
		vItemSpace = 50;
		conditions = "";
		price = 1450000;
		textures[] = {
			{"f82_14_w", {"civ","reb"}, "" },
			{"f82_14_c", {"civ","reb"}, "" },
			{"f82_14_b", {"civ","reb"}, "" },
			{"f82_14_g", {"civ","reb"}, "" },
			{"f82_14_s", {"civ","reb"}, "" },
			{"f82_14_gs", {"civ","reb"}, "" },
			{"f82_14_bl", {"civ","reb"}, "" },
			{"f82_14_j", {"civ","reb"}, "" },
			{"f82_14_mb", {"civ","reb"}, "" },
			{"f82_14_sg", {"civ","reb"}, "" },
			{"f82_14_pw", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_f90_18 {
		vItemSpace = 50;
		conditions = "";
		price = 750000;
		textures[] = {
			{"f90_18_w", {"civ","reb"}, "" },
			{"f90_18_c", {"civ","reb"}, "" },
			{"f90_18_b", {"civ","reb"}, "" },
			{"f90_18_g", {"civ","reb"}, "" },
			{"f90_18_s", {"civ","reb"}, "" },
			{"f90_18_gs", {"civ","reb"}, "" },
			{"f90_18_b1", {"civ","reb"}, "" },
			{"f90_18_j", {"civ","reb"}, "" },
			{"f90_18_mb", {"civ","reb"}, "" },
			{"f90_18_sg", {"civ","reb"}, "" },
			{"f90_18_pw", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_nemises_f90_18_FE {
		vItemSpace = 50;
		conditions = "";
		price = 1400000;
		textures[] = {
			{"f90_18_w", {"civ","reb"}, "" },
			{"f90_18_c", {"civ","reb"}, "" },
			{"f90_18_b", {"civ","reb"}, "" },
			{"f90_18_g", {"civ","reb"}, "" },
			{"f90_18_s", {"civ","reb"}, "" },
			{"f90_18_gs", {"civ","reb"}, "" },
			{"f90_18_b1", {"civ","reb"}, "" },
			{"f90_18_j", {"civ","reb"}, "" },
			{"f90_18_mb", {"civ","reb"}, "" },
			{"f90_18_sg", {"civ","reb"}, "" },
			{"f90_18_pw", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_amazing_f10_12_FEMID {
		vItemSpace = 50;
		conditions = "";
		price = 1450000;
		textures[] = {
			{"f10_12_w", {"civ","reb"}, "" },
			{"f10_12_c", {"civ","reb"}, "" },
			{"f10_12_y", {"civ","reb"}, "" },
			{"f10_12_b", {"civ","reb"}, "" },
			{"f10_12_s", {"civ","reb"}, "" },
			{"f10_12_r", {"civ","reb"}, "" },
			{"f10_12_gr", {"civ","reb"}, "" },
			{"f10_12_ib", {"civ","reb"}, "" },
			{"f10_12_j", {"civ","reb"}, "" },
			{"f10_12_mb", {"civ","reb"}, "" },
			{"f10_12_mg", {"civ","reb"}, "" },
			{"f10_12_so", {"civ","reb"}, "" },
			{"f10_12_ss", {"civ","reb"}, "" },
			{"f10_12_srb", {"civ","reb"}, "" },
			{"f10_12_sg", {"civ","reb"}, "" },
			{"f10_12_ynb", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_amazing_f10_12_EX {
		vItemSpace = 50;
		conditions = "";
		price = 900000;
		textures[] = {
			{"f10_12_w", {"civ","reb"}, "" },
			{"f10_12_c", {"civ","reb"}, "" },
			{"f10_12_y", {"civ","reb"}, "" },
			{"f10_12_b", {"civ","reb"}, "" },
			{"f10_12_s", {"civ","reb"}, "" },
			{"f10_12_r", {"civ","reb"}, "" },
			{"f10_12_gr", {"civ","reb"}, "" },
			{"f10_12_ib", {"civ","reb"}, "" },
			{"f10_12_j", {"civ","reb"}, "" },
			{"f10_12_mb", {"civ","reb"}, "" },
			{"f10_12_mg", {"civ","reb"}, "" },
			{"f10_12_so", {"civ","reb"}, "" },
			{"f10_12_ss", {"civ","reb"}, "" },
			{"f10_12_srb", {"civ","reb"}, "" },
			{"f10_12_sg", {"civ","reb"}, "" },
			{"f10_12_ynb", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_f85_15_m {
		vItemSpace = 80;
		conditions = "";
		price = 700000;
		textures[] = {
			{"f85_15_w", {"civ","reb"}, "" },
			{"f85_15_y", {"civ","reb"}, "" },
			{"f85_15_b", {"civ","reb"}, "" },
			{"f85_15_q", {"civ","reb"}, "" },
			{"f85_15_dr", {"civ","reb"}, "" },
			{"f85_15_g", {"civ","reb"}, "" },
			{"f85_15_m", {"civ","reb"}, "" },
			{"f85_15_r", {"civ","reb"}, "" },
			{"f85_15_mg", {"civ","reb"}, "" },
			{"f85_15_o", {"civ","reb"}, "" },
			{"f85_15_s", {"civ","reb"}, "" },
			{"f85_15_db", {"civ","reb"}, "" },
			{"f85_15_mm", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_g850_17 {
		vItemSpace = 80;
		conditions = "";
		price = 1555555;
		textures[] = {
			{"q56_13_b", {"civ","reb"}, "" },
			{"q56_13_bl", {"civ","reb"}, "" },
			{"q56_13_br", {"civ","reb"}, "" },
			{"q56_13_bw", {"civ","reb"}, "" },
			{"q56_13_g", {"civ","reb"}, "" },
			{"q56_13_s", {"civ","reb"}, "" },
			{"q56_13_w", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class quiet_Bugatti_blanche_f {
		vItemSpace = 50;
		conditions = "";
		price = 2100000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_ctsv_16 {
		vItemSpace = 60;
		conditions = "";
		price = 1220000;
		textures[] = {
			{"q56_13_b", {"civ","reb"}, "" },
			{"q56_13_bl", {"civ","reb"}, "" },
			{"q56_13_br", {"civ","reb"}, "" },
			{"q56_13_bw", {"civ","reb"}, "" },
			{"q56_13_g", {"civ","reb"}, "" },
			{"q56_13_s", {"civ","reb"}, "" },
			{"q56_13_w", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_escalade_16 {
		vItemSpace = 80;
		conditions = "";
		price = 3500000;
		textures[] = {
			{"q56_13_b", {"civ","reb"}, "" },
			{"q56_13_bl", {"civ","reb"}, "" },
			{"q56_13_br", {"civ","reb"}, "" },
			{"q56_13_bw", {"civ","reb"}, "" },
			{"q56_13_g", {"civ","reb"}, "" },
			{"q56_13_s", {"civ","reb"}, "" },
			{"q56_13_w", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_escalade_16_pt {
		vItemSpace = 80;
		conditions = "";
		price = 3820000;
		textures[] = {
			{"q56_13_b", {"civ","reb"}, "" },
			{"q56_13_bl", {"civ","reb"}, "" },
			{"q56_13_br", {"civ","reb"}, "" },
			{"q56_13_bw", {"civ","reb"}, "" },
			{"q56_13_g", {"civ","reb"}, "" },
			{"q56_13_s", {"civ","reb"}, "" },
			{"q56_13_w", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_tahoe_payday {
		vItemSpace = 80;
		conditions = "";
		price = 1955000;
		textures[] = {
			{"tahoe_08_vip", {"civ","reb"}, "" },
			{"tahoe_08_vip2", {"civ","reb"}, "" },
			{"tahoe_08_vip3", {"civ","reb"}, "" },
			{"tahoe_08_vip4", {"civ","reb"}, "" },
			{"tahoe_08_b", {"civ","reb"}, "" },
			{"tahoe_08_bg", {"civ","reb"}, "" },
			{"tahoe_08_r", {"civ","reb"}, "" },
			{"tahoe_08_g", {"civ","reb"}, "" },
			{"tahoe_08_s", {"civ","reb"}, "" },
			{"tahoe_08_si", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_tahoe_ltz_08 {
		vItemSpace = 80;
		conditions = "";
		price = 1545000;
		textures[] = {
			{"tahoe_08_b", {"civ","reb"}, "" },
			{"tahoe_08_bg", {"civ","reb"}, "" },
			{"tahoe_08_r", {"civ","reb"}, "" },
			{"tahoe_08_g", {"civ","reb"}, "" },
			{"tahoe_08_s", {"civ","reb"}, "" },
			{"tahoe_08_si", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_tahoe_vortec_08 {
		vItemSpace = 80;
		conditions = "";
		price = 1230000;
		textures[] = {
			{"tahoe_08_b", {"civ","reb"}, "" },
			{"tahoe_08_bg", {"civ","reb"}, "" },
			{"tahoe_08_r", {"civ","reb"}, "" },
			{"tahoe_08_g", {"civ","reb"}, "" },
			{"tahoe_08_s", {"civ","reb"}, "" },
			{"tahoe_08_si", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_charger_15 {
		vItemSpace = 50;
		conditions = "";
		price = 1425000;
		textures[] = {
			{"charger_15_w", {"civ","reb"}, "" },
			{"charger_15_b", {"civ","reb"}, "" },
			{"charger_15_g", {"civ","reb"}, "" },
			{"charger_15_dg", {"civ","reb"}, "" },
			{"charger_15_dw", {"civ","reb"}, "" },
			{"charger_15_db", {"civ","reb"}, "" },
			{"charger_15_pb", {"civ","reb"}, "" },
			{"charger_15_pb1", {"civ","reb"}, "" },
			{"charger_15_rd", {"civ","reb"}, "" },
			{"charger_15_r", {"civ","reb"}, "" },
			{"charger_15_cr", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_srthellcat_15 {
		vItemSpace = 50;
		conditions = "";
		price = 1650000;
		textures[] = {
			{"cat_15_do", {"civ","reb"}, "" },
			{"cat_15_dr", {"civ","reb"}, "" },
			{"cat_15_dy", {"civ","reb"}, "" },
			{"cat_15_deb", {"civ","reb"}, "" },
			{"cat_15_debl", {"civ","reb"}, "" },
			{"cat_15_der", {"civ","reb"}, "" },
			{"cat_15_dev", {"civ","reb"}, "" },
			{"cat_15_dew", {"civ","reb"}, "" },
			{"cat_15_dey", {"civ","reb"}, "" },
			{"cat_15_mob", {"civ","reb"}, "" },
			{"cat_15_mobl", {"civ","reb"}, "" },
			{"cat_15_mor", {"civ","reb"}, "" },
			{"cat_15_mord", {"civ","reb"}, "" },
			{"cat_15_mos", {"civ","reb"}, "" },
			{"cat_15_shb", {"civ","reb"}, "" },
			{"cat_15_shi", {"civ","reb"}, "" },
			{"cat_15_shr", {"civ","reb"}, "" },
			{"cat_15_shrr", {"civ","reb"}, "" },
			{"cat_15_shw", {"civ","reb"}, "" },
			{"cat_15_srta", {"civ","reb"}, "" },
			{"cat_15_srtb5", {"civ","reb"}, "" },
			{"cat_15_srtbs", {"civ","reb"}, "" },
			{"cat_15_srttr", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_durango_18 {
		vItemSpace = 80;
		conditions = "";
		price = 1540000;
		textures[] = {
			{"durango_18_w", {"civ","reb"}, "" },
			{"durango_18_s", {"civ","reb"}, "" },
			{"durango_18_b", {"civ","reb"}, "" },
			{"durango_18_dr", {"civ","reb"}, "" },
			{"durango_18_g", {"civ","reb"}, "" },
			{"durango_18_v", {"civ","reb"}, "" },
			{"durango_18_r", {"civ","reb"}, "" },
			{"durango_18_p", {"civ","reb"}, "" },
			{"durango_18_snake", {"civ","reb"}, "(call life_donator) > 3" }
		};
		materials[] = {};
	};
	
	class d3s_durango_18_SRT {
		vItemSpace = 80;
		conditions = "";
		price = 1680000;
		textures[] = {
			{"durango_18_ssrt", {"civ","reb"}, "" },
			{"durango_18_bsrt", {"civ","reb"}, "" },
			{"durango_18_wsrt", {"civ","reb"}, "" },
			{"durango_18_drsrt", {"civ","reb"}, "" },
			{"durango_18_gsrt", {"civ","reb"}, "" },
			{"durango_18_grsrt", {"civ","reb"}, "" },
			{"durango_18_rsrt", {"civ","reb"}, "" },
			{"durango_18_snake", {"civ","reb"}, "(call life_donator) > 3" }
		};
		materials[] = {};
	};
	
	class d3s_crown_98 {
		vItemSpace = 50;
		conditions = "";
		price = 58098;
		textures[] = {
			{"crown_98_w", {"civ","reb"}, "" },
			{"crown_98_g", {"civ","reb"}, "" },
			{"crown_98_gr", {"civ","reb"}, "" },
			{"crown_98_dg", {"civ","reb"}, "" },
			{"crown_98_r", {"civ","reb"}, "" },
			{"crown_98_s", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_nemises_explorer_se_13 {
		vItemSpace = 80;
		conditions = "";
		price = 2790000;
		textures[] = {
			{"explorer_13_ex", {"civ","reb"}, "" },
			{"explorer_13_ao", {"civ","reb"}, "" },
			{"explorer_13_ab", {"civ","reb"}, "" },
			{"explorer_13_db", {"civ","reb"}, "" },
			{"explorer_13_ga", {"civ","reb"}, "" },
			{"explorer_13_gd", {"civ","reb"}, "" },
			{"explorer_13_is", {"civ","reb"}, "" },
			{"explorer_13_kb", {"civ","reb"}, "" },
			{"explorer_13_ow", {"civ","reb"}, "" },
			{"explorer_13_rr", {"civ","reb"}, "" },
			{"explorer_13_sg", {"civ","reb"}, "" },
			{"explorer_13_tb", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_nemises_explorer_sport_13 {
		vItemSpace = 80;
		conditions = "";
		price = 2670000;
		textures[] = {
			{"explorer_13_ex", {"civ","reb"}, "" },
			{"explorer_13_ao", {"civ","reb"}, "" },
			{"explorer_13_ab", {"civ","reb"}, "" },
			{"explorer_13_db", {"civ","reb"}, "" },
			{"explorer_13_ga", {"civ","reb"}, "" },
			{"explorer_13_gd", {"civ","reb"}, "" },
			{"explorer_13_is", {"civ","reb"}, "" },
			{"explorer_13_kb", {"civ","reb"}, "" },
			{"explorer_13_ow", {"civ","reb"}, "" },
			{"explorer_13_rr", {"civ","reb"}, "" },
			{"explorer_13_sg", {"civ","reb"}, "" },
			{"explorer_13_tb", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_nemises_model_a {
		vItemSpace = 50;
		conditions = "";
		price = 3990000;
		textures[] = {
			{"q56_13_b", {"civ","reb"}, "" },
			{"q56_13_bl", {"civ","reb"}, "" },
			{"q56_13_br", {"civ","reb"}, "" },
			{"q56_13_bw", {"civ","reb"}, "" },
			{"q56_13_g", {"civ","reb"}, "" },
			{"q56_13_s", {"civ","reb"}, "" },
			{"q56_13_w", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class AlessioMustang {
		vItemSpace = 50;
		conditions = "";
		price = 750000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_boss_15 {
		vItemSpace = 50;
		conditions = "";
		price = 5000000;
		textures[] = {
			{"boss_15_1", {"civ","reb"}, "" },
			{"boss_15_2", {"civ","reb"}, "" },
			{"boss_15_3", {"civ","reb"}, "" },
			{"boss_15_4", {"civ","reb"}, "" },
			{"boss_15_5", {"civ","reb"}, "" },
			{"boss_15_6", {"civ","reb"}, "" },
			{"boss_15_7", {"civ","reb"}, "" },
			{"boss_15_8", {"civ","reb"}, "" },
			{"boss_15_9", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_nemises_taurus_eco_10 {
		vItemSpace = 50;
		conditions = "";
		price = 100000;
		textures[] = {
			{"taurus_10_b", {"civ","reb"}, "" },
			{"taurus_10_ga", {"civ","reb"}, "" },
			{"taurus_10_gg", {"civ","reb"}, "" },
			{"taurus_10_is", {"civ","reb"}, "" },
			{"taurus_10_kb", {"civ","reb"}, "" },
			{"taurus_10_w", {"civ","reb"}, "" },
			{"taurus_10_rr", {"civ","reb"}, "" },
			{"taurus_10_sg", {"civ","reb"}, "" },
			{"taurus_10_td", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_nemises_taurus_10_ex {
		vItemSpace = 50;
		conditions = "";
		price = 340000;
		textures[] = {
			{"taurus_10_b", {"civ","reb"}, "" },
			{"taurus_10_ga", {"civ","reb"}, "" },
			{"taurus_10_gg", {"civ","reb"}, "" },
			{"taurus_10_is", {"civ","reb"}, "" },
			{"taurus_10_kb", {"civ","reb"}, "" },
			{"taurus_10_w", {"civ","reb"}, "" },
			{"taurus_10_rr", {"civ","reb"}, "" },
			{"taurus_10_sg", {"civ","reb"}, "" },
			{"taurus_10_td", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_nemises_savana_05 {
		vItemSpace = 110;
		conditions = "";
		price = 31000;
		textures[] = {
			{"savana_05_db", {"civ","reb"}, "" },
			{"savana_05_fe", {"civ","reb"}, "" },
			{"savana_05_r", {"civ","reb"}, "" },
			{"savana_05_pg", {"civ","reb"}, "" },
			{"savana_05_ob", {"civ","reb"}, "" },
			{"savana_05_g", {"civ","reb"}, "" },
			{"savana_05_ps", {"civ","reb"}, "" },
			{"savana_05_sd", {"civ","reb"}, "" },
			{"savana_05_wy", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_nemises_savana_05_3 {
		vItemSpace = 110;
		conditions = "";
		price = 25000;
		textures[] = {
			{"savana_05_db", {"civ","reb"}, "" },
			{"savana_05_fe", {"civ","reb"}, "" },
			{"savana_05_r", {"civ","reb"}, "" },
			{"savana_05_pg", {"civ","reb"}, "" },
			{"savana_05_ob", {"civ","reb"}, "" },
			{"savana_05_g", {"civ","reb"}, "" },
			{"savana_05_ps", {"civ","reb"}, "" },
			{"savana_05_sd", {"civ","reb"}, "" },
			{"savana_05_wy", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_nemises_q50_14 {
		vItemSpace = 50;
		conditions = "";
		price = 715000;
		textures[] = {
			{"q50_14_bo", {"civ","reb"}, "" },
			{"q50_14_cb", {"civ","reb"}, "" },
			{"q50_14_re", {"civ","reb"}, "" },
			{"q50_14_gs", {"civ","reb"}, "" },
			{"q50_14_hb", {"civ","reb"}, "" },
			{"q50_14_ib", {"civ","reb"}, "" },
			{"q50_14_ip", {"civ","reb"}, "" },
			{"q50_14_l", {"civ","reb"}, "" },
			{"q50_14_mb", {"civ","reb"}, "" },
			{"q50_14_m", {"civ","reb"}, "" },
			{"q50_14_ao", {"civ","reb"}, "" },
			{"q50_14_y", {"civ","reb"}, "" },
			{"q50_14_ru", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_nemises_q50_ER_14 {
		vItemSpace = 50;
		conditions = "";
		price = 975000;
		textures[] = {
			{"q50_14_bo", {"civ","reb"}, "" },
			{"q50_14_cb", {"civ","reb"}, "" },
			{"q50_14_re", {"civ","reb"}, "" },
			{"q50_14_gs", {"civ","reb"}, "" },
			{"q50_14_hb", {"civ","reb"}, "" },
			{"q50_14_ib", {"civ","reb"}, "" },
			{"q50_14_ip", {"civ","reb"}, "" },
			{"q50_14_l", {"civ","reb"}, "" },
			{"q50_14_mb", {"civ","reb"}, "" },
			{"q50_14_m", {"civ","reb"}, "" },
			{"q50_14_ao", {"civ","reb"}, "" },
			{"q50_14_y", {"civ","reb"}, "" },
			{"q50_14_ru", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_qx56_13 {
		vItemSpace = 70;
		conditions = "";
		price = 1860000;
		textures[] = {
			{"q56_13_b", {"civ","reb"}, "" },
			{"q56_13_bl", {"civ","reb"}, "" },
			{"q56_13_br", {"civ","reb"}, "" },
			{"q56_13_bw", {"civ","reb"}, "" },
			{"q56_13_g", {"civ","reb"}, "" },
			{"q56_13_s", {"civ","reb"}, "" },
			{"q56_13_w", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_qx56_13_SE {
		vItemSpace = 90;
		conditions = "";
		price = 1910000;
		textures[] = {
			{"q56_13_b", {"civ","reb"}, "" },
			{"q56_13_bl", {"civ","reb"}, "" },
			{"q56_13_br", {"civ","reb"}, "" },
			{"q56_13_bw", {"civ","reb"}, "" },
			{"q56_13_g", {"civ","reb"}, "" },
			{"q56_13_s", {"civ","reb"}, "" },
			{"q56_13_w", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_nemises_QX60_16 {
		vItemSpace = 80;
		conditions = "";
		price = 1320000;
		textures[] = {
			{"qx60_16_bo", {"civ","reb"}, "" },
			{"qx60_16_cb", {"civ","reb"}, "" },
			{"qx60_16_r", {"civ","reb"}, "" },
			{"qx60_16_gs", {"civ","reb"}, "" },
			{"qx60_16_hb", {"civ","reb"}, "" },
			{"qx60_16_lp", {"civ","reb"}, "" },
			{"qx60_16_lu", {"civ","reb"}, "" },
			{"qx60_16_ao", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_nemises_QX60_16_S {
		vItemSpace = 80;
		conditions = "";
		price = 1420000;
		textures[] = {
			{"qx60_16_bo", {"civ","reb"}, "" },
			{"qx60_16_cb", {"civ","reb"}, "" },
			{"qx60_16_r", {"civ","reb"}, "" },
			{"qx60_16_gs", {"civ","reb"}, "" },
			{"qx60_16_hb", {"civ","reb"}, "" },
			{"qx60_16_lp", {"civ","reb"}, "" },
			{"qx60_16_lu", {"civ","reb"}, "" },
			{"qx60_16_ao", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_fpace_17 {
		vItemSpace = 80;
		conditions = "";
		price = 3425600;
		textures[] = {
			{"fpace_17_w", {"civ","reb"}, "" },
			{"fpace_17_bc", {"civ","reb"}, "" },
			{"fpace_17_b", {"civ","reb"}, "" },
			{"fpace_17_dg", {"civ","reb"}, "" },
			{"fpace_17_db", {"civ","reb"}, "" },
			{"fpace_17_i", {"civ","reb"}, "" },
			{"fpace_17_r", {"civ","reb"}, "" },
			{"fpace_17_bl", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_fpace_17_s {
		vItemSpace = 80;
		conditions = "";
		price = 3650000;
		textures[] = {
			{"fpace_17_w", {"civ","reb"}, "" },
			{"fpace_17_bc", {"civ","reb"}, "" },
			{"fpace_17_b", {"civ","reb"}, "" },
			{"fpace_17_dg", {"civ","reb"}, "" },
			{"fpace_17_db", {"civ","reb"}, "" },
			{"fpace_17_i", {"civ","reb"}, "" },
			{"fpace_17_r", {"civ","reb"}, "" },
			{"fpace_17_bl", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_nemises_xe_15 {
		vItemSpace = 50;
		conditions = "";
		price = 2280400;
		textures[] = {
			{"xes_15_g", {"civ","reb"}, "" },
			{"xes_15_bc", {"civ","reb"}, "" },
			{"xes_15_b", {"civ","reb"}, "" },
			{"xes_15_brg", {"civ","reb"}, "" },
			{"xes_15_cb", {"civ","reb"}, "" },
			{"xes_15_ds", {"civ","reb"}, "" },
			{"xes_15_r", {"civ","reb"}, "" },
			{"xes_15_sg", {"civ","reb"}, "" },
			{"xes_15_ub", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_nemises_xes_15 {
		vItemSpace = 50;
		conditions = "";
		price = 2580500;
		textures[] = {
			{"xes_15_g", {"civ","reb"}, "" },
			{"xes_15_bc", {"civ","reb"}, "" },
			{"xes_15_b", {"civ","reb"}, "" },
			{"xes_15_brg", {"civ","reb"}, "" },
			{"xes_15_cb", {"civ","reb"}, "" },
			{"xes_15_ds", {"civ","reb"}, "" },
			{"xes_15_r", {"civ","reb"}, "" },
			{"xes_15_sg", {"civ","reb"}, "" },
			{"xes_15_ub", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class np_cherokee {
		vItemSpace = 80;
		conditions = "";
		price = 1520600;
		textures[] = {
			{"cherokee_18_w", {"civ","reb"}, "" },
			{"cherokee_18_dw", {"civ","reb"}, "" },
			{"cherokee_18_b", {"civ","reb"}, "" },
			{"cherokee_18_dr", {"civ","reb"}, "" },
			{"cherokee_18_g", {"civ","reb"}, "" },
			{"cherokee_18_v", {"civ","reb"}, "" },
			{"cherokee_18_r", {"civ","reb"}, "" },
			{"cherokee_18_p", {"civ","reb"}, "" },
			{"cherokee_18_m", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_nemises_vesta_15 {
		vItemSpace = 50;
		conditions = "";
		price = 180800;
		textures[] = {
			{"vesta_15_195", {"civ","reb"}, "" },
			{"vesta_15_221", {"civ","reb"}, "" },
			{"vesta_15_246", {"civ","reb"}, "" },
			{"vesta_15_366", {"civ","reb"}, "" },
			{"vesta_15_372", {"civ","reb"}, "" },
			{"vesta_15_492", {"civ","reb"}, "" },
			{"vesta_15_496", {"civ","reb"}, "" },
			{"vesta_15_608", {"civ","reb"}, "" },
			{"vesta_15_676", {"civ","reb"}, "" },
			{"vesta_15_691", {"civ","reb"}, "" },
			{"vesta_15_tu", {"civ","reb"}, "" },
			{"vesta_15_btu", {"civ","reb"}, "" },
			{"vesta_15_litu", {"civ","reb"}, "" },
			{"vesta_15_ortu", {"civ","reb"}, "" },
			{"vesta_15_grtu", {"civ","reb"}, "" }
		};
		materials[] = {};
	};

	class AlessioAventador {
		vItemSpace = 50;
		conditions = "";
		price = 4000000;
		textures[] = {};
		materials[] = {};
	};
	
	class AlessioGallardo {
		vItemSpace = 50;
		conditions = "";
		price = 4250000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_nemises_urus_12 {
		vItemSpace = 80;
		conditions = "";
		price = 3189300;
		textures[] = {
			{"urus_12_o", {"civ","reb"}, "" },
			{"urus_12_g", {"civ","reb"}, "" },
			{"urus_12_a", {"civ","reb"}, "" },
			{"urus_12_bc", {"civ","reb"}, "" },
			{"urus_12_y", {"civ","reb"}, "" },
			{"urus_12_y2", {"civ","reb"}, "" },
			{"urus_12_gl", {"civ","reb"}, "" },
			{"urus_12_t", {"civ","reb"}, "" },
			{"urus_12_ma", {"civ","reb"}, "" },
			{"urus_12_vm", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_nemises_lm002_90 {
		vItemSpace = 80;
		conditions = "";
		price = 3200000;
		textures[] = {
			{"lm002_90_ab", {"civ","reb"}, "" },
			{"lm002_90_bc", {"civ","reb"}, "" },
			{"lm002_90_bi", {"civ","reb"}, "" },
			{"lm002_90_ba", {"civ","reb"}, "" },
			{"lm002_90_ba", {"civ","reb"}, "" },
			{"lm002_90_ba1", {"civ","reb"}, "" },
			{"lm002_90_gm", {"civ","reb"}, "" },
			{"lm002_90_gt", {"civ","reb"}, "" },
			{"lm002_90_ao", {"civ","reb"}, "" },
			{"lm002_90_ma", {"civ","reb"}, "" },
			{"lm002_90_map", {"civ","reb"}, "" },
			{"lm002_90_g", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_nemises_is_16 {
		vItemSpace = 50;
		conditions = "";
		price = 380250;
		textures[] = {
			{"is_16_b", {"civ","reb"}, "" },
			{"is_16_ap", {"civ","reb"}, "" },
			{"is_16_g", {"civ","reb"}, "" },
			{"is_16_bl", {"civ","reb"}, "" },
			{"is_16_r", {"civ","reb"}, "" },
			{"is_16_ss", {"civ","reb"}, "" },
			{"is_16_st", {"civ","reb"}, "" },
			{"is_16_sb", {"civ","reb"}, "" },
			{"is_16_wp", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_lx570_16_1 {
		vItemSpace = 80;
		conditions = "";
		price = 2830600;
		textures[] = {
			{"lx570_16_b", {"civ","reb"}, "" },
			{"lx570_16_bk", {"civ","reb"}, "" },
			{"lx570_16_bo", {"civ","reb"}, "" },
			{"lx570_16_db", {"civ","reb"}, "" },
			{"lx570_16_g", {"civ","reb"}, "" },
			{"lx570_16_lg", {"civ","reb"}, "" },
			{"lx570_16_lu", {"civ","reb"}, "" },
			{"lx570_16_w", {"civ","reb"}, "" },
			{"lx570_16_mr", {"civ","reb"}, "" },
			{"lx570_16_ng", {"civ","reb"}, "" },
			{"lx570_16_vip1", {"civ","reb"}, "" },
			{"lx570_16_vip2", {"civ","reb"}, "" },
			{"lx570_16_vip3", {"civ","reb"}, "" },
			{"lx570_16_vip4", {"civ","reb"}, "" },
			{"lx570_16_vip5", {"civ","reb"}, "" },
			{"lx570_16_vip6", {"civ","reb"}, "" },
			{"lx570_16_vip7", {"civ","reb"}, "" },
			{"lx570_16_vip8", {"civ","reb"}, "" },
			{"lx570_16_vip9", {"civ","reb"}, "" },
			{"lx570_16_vip10", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_lx570_16_WALD {
		vItemSpace = 80;
		conditions = "";
		price = 3840000;
		textures[] = {
			{"lx570_16bw_w", {"civ","reb"}, "" },
			{"lx570_16_b", {"civ","reb"}, "" },
			{"lx570_16_bk", {"civ","reb"}, "" },
			{"lx570_16_bo", {"civ","reb"}, "" },
			{"lx570_16_db", {"civ","reb"}, "" },
			{"lx570_16_g", {"civ","reb"}, "" },
			{"lx570_16_lg", {"civ","reb"}, "" },
			{"lx570_16_lu", {"civ","reb"}, "" },
			{"lx570_16_w", {"civ","reb"}, "" },
			{"lx570_16_mr", {"civ","reb"}, "" },
			{"lx570_16_ng", {"civ","reb"}, "" },
			{"lx570_16_vip2", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_g65amg_Mansory {
		vItemSpace = 80;
		conditions = "";
		price = 4350100;
		textures[] = {
			{"g65amg_16_cb", {"civ","reb"}, "" },
			{"g65amg_16_eg", {"civ","reb"}, "" },
			{"g65amg_16_hr", {"civ","reb"}, "" },
			{"g65amg_16_ob", {"civ","reb"}, "" },
			{"g65amg_16_pg", {"civ","reb"}, "" },
			{"g65amg_16_pw", {"civ","reb"}, "" },
			{"g65amg_16_tb", {"civ","reb"}, "" },
			{"g65amg_16_tg", {"civ","reb"}, "" },
			{"g65amg_16_w", {"civ","reb"}, "" },
			{"g65amg_16_cb1", {"civ","reb"}, "" },
			{"g65amg_16_hr2", {"civ","reb"}, "" },
			{"g65amg_16_pw4", {"civ","reb"}, "" },
			{"g65amg_16_tb5", {"civ","reb"}, "" },
			{"g65amg_16_tg6", {"civ","reb"}, "" },
			{"g65amg_16_wg350", {"civ","reb"}, "" },
			{"g65amg_16_cb350", {"civ","reb"}, "" },
			{"g65amg_16_ds350", {"civ","reb"}, "" },
			{"g65amg_16_dsg350", {"civ","reb"}, "" },
			{"g65amg_16_eg350", {"civ","reb"}, "" },
			{"g65amg_16_hr350", {"civ","reb"}, "" },
			{"g65amg_16_ob350", {"civ","reb"}, "" },
			{"g65amg_16_pg350", {"civ","reb"}, "" },
			{"g65amg_16_tb350", {"civ","reb"}, "" },
			{"g65amg_16_tg350", {"civ","reb"}, "" },
			{"g65amg_16_tr350", {"civ","reb"}, "" },
			{"g65amg_16_cb500", {"civ","reb"}, "" },
			{"g65amg_16_cj500", {"civ","reb"}, "" },
			{"g65amg_16_ds500", {"civ","reb"}, "" },
			{"g65amg_16_dsg500", {"civ","reb"}, "" },
			{"g65amg_16_eg500", {"civ","reb"}, "" },
			{"g65amg_16_hr500", {"civ","reb"}, "" },
			{"g65amg_16_ob500", {"civ","reb"}, "" },
			{"g65amg_16_pg500", {"civ","reb"}, "" },
			{"g65amg_16_tb500", {"civ","reb"}, "" },
			{"g65amg_16_tg500", {"civ","reb"}, "" },
			{"g65amg_16_tr500", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_ghibli_14 {
		vItemSpace = 50;
		conditions = "";
		price = 1441000;
		textures[] = {
			{"ghibli_14_ba", {"civ","reb"}, "" },
			{"ghibli_14_be", {"civ","reb"}, "" },
			{"ghibli_14_bp", {"civ","reb"}, "" },
			{"ghibli_14_ac", {"civ","reb"}, "" },
			{"ghibli_14_w", {"civ","reb"}, "" },
			{"ghibli_14_ae", {"civ","reb"}, "" },
			{"ghibli_14_aeo", {"civ","reb"}, "" },
			{"ghibli_14_rr", {"civ","reb"}, "" },
			{"ghibli_14_b", {"civ","reb"}, "" },
			{"ghibli_14_b1", {"civ","reb"}, "" },
			{"ghibli_14_bz", {"civ","reb"}, "" },
			{"ghibli_14_g", {"civ","reb"}, "" },
			{"ghibli_14_r", {"civ","reb"}, "" },
			{"ghibli_14_y", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_amazing_a45_16 {
		vItemSpace = 50;
		conditions = "";
		price = 436000;
		textures[] = {
			{"a45_16_m", {"civ","reb"}, "" },
			{"a45_16_b", {"civ","reb"}, "" },
			{"a45_16_b1", {"civ","reb"}, "" },
			{"a45_16_br", {"civ","reb"}, "" },
			{"a45_16_r", {"civ","reb"}, "" },
			{"a45_16_w", {"civ","reb"}, "" },
			{"a45_16_jr", {"civ","reb"}, "" },
			{"a45_16_ob", {"civ","reb"}, "" },
			{"a45_16_orb", {"civ","reb"}, "" },
			{"a45_16_pw", {"civ","reb"}, "" },
			{"a45_16_g", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_amazing_a45_16_EX {
		vItemSpace = 50;
		conditions = "";
		price = 580000;
		textures[] = {
			{"a45_16_m", {"civ","reb"}, "" },
			{"a45_16_b", {"civ","reb"}, "" },
			{"a45_16_b1", {"civ","reb"}, "" },
			{"a45_16_br", {"civ","reb"}, "" },
			{"a45_16_r", {"civ","reb"}, "" },
			{"a45_16_w", {"civ","reb"}, "" },
			{"a45_16_jr", {"civ","reb"}, "" },
			{"a45_16_ob", {"civ","reb"}, "" },
			{"a45_16_orb", {"civ","reb"}, "" },
			{"a45_16_pw", {"civ","reb"}, "" },
			{"a45_16_g", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_nemises_C63_14 {
		vItemSpace = 50;
		conditions = "";
		price = 1700000;
		textures[] = {
			{"w205_14_13", {"civ","reb"}, "" },
			{"w205_14_ao3", {"civ","reb"}, "" },
			{"w205_14_b3", {"civ","reb"}, "" },
			{"w205_14_bl3", {"civ","reb"}, "" },
			{"w205_14_bz3", {"civ","reb"}, "" },
			{"w205_14_g3", {"civ","reb"}, "" },
			{"w205_14_or3", {"civ","reb"}, "" },
			{"w205_14_rd3", {"civ","reb"}, "" },
			{"w205_14_y3", {"civ","reb"}, "" },
			{"w205_14_ao5", {"civ","reb"}, "" },
			{"w205_14_bb5", {"civ","reb"}, "" },
			{"w205_14_cb5", {"civ","reb"}, "" },
			{"w205_14_bc5", {"civ","reb"}, "" },
			{"w205_14_hr5", {"civ","reb"}, "" },
			{"w205_14_ob5", {"civ","reb"}, "" },
			{"w205_14_sg5", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_nemises_gls63amg_17 {
		vItemSpace = 80;
		conditions = "";
		price = 2170000;
		textures[] = {
			{"gls63amg_17_b", {"civ","reb"}, "" },
			{"gls63amg_17_bl", {"civ","reb"}, "" },
			{"gls63amg_17_br", {"civ","reb"}, "" },
			{"gls63amg_17_dw", {"civ","reb"}, "" },
			{"gls63amg_17_bc", {"civ","reb"}, "" },
			{"gls63amg_17_wb", {"civ","reb"}, "" },
			{"gls63amg_17_bw", {"civ","reb"}, "" },
			{"gls63amg_17_ao", {"civ","reb"}, "" },
			{"gls63amg_17_r", {"civ","reb"}, "" },
			{"gls63amg_17_is", {"civ","reb"}, "" },
			{"gls63amg_17_l", {"civ","reb"}, "" },
			{"gls63amg_17_ob", {"civ","reb"}, "" },
			{"gls63amg_17_ps", {"civ","reb"}, "" },
			{"gls63amg_17_pw", {"civ","reb"}, "" },
			{"gls63amg_17_syn", {"civ","reb"}, "" },
			{"gls63amg_17_tg", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_nemises_gls63amg_17_SE {
		vItemSpace = 80;
		conditions = "";
		price = 2165000;
		textures[] = {
			{"gls63amg_17_b", {"civ","reb"}, "" },
			{"gls63amg_17_bl", {"civ","reb"}, "" },
			{"gls63amg_17_br", {"civ","reb"}, "" },
			{"gls63amg_17_dw", {"civ","reb"}, "" },
			{"gls63amg_17_bc", {"civ","reb"}, "" },
			{"gls63amg_17_wb", {"civ","reb"}, "" },
			{"gls63amg_17_bw", {"civ","reb"}, "" },
			{"gls63amg_17_ao", {"civ","reb"}, "" },
			{"gls63amg_17_r", {"civ","reb"}, "" },
			{"gls63amg_17_is", {"civ","reb"}, "" },
			{"gls63amg_17_l", {"civ","reb"}, "" },
			{"gls63amg_17_ob", {"civ","reb"}, "" },
			{"gls63amg_17_ps", {"civ","reb"}, "" },
			{"gls63amg_17_pw", {"civ","reb"}, "" },
			{"gls63amg_17_syn", {"civ","reb"}, "" },
			{"gls63amg_17_tg", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_nemises_vklasse_250amg_17 {
		vItemSpace = 100;
		conditions = "";
		price = 280000;
		textures[] = {
			{"vklasse_17_aw", {"civ","reb"}, "" },
			{"vklasse_17_bs", {"civ","reb"}, "" },
			{"vklasse_17_cb", {"civ","reb"}, "" },
			{"vklasse_17_db", {"civ","reb"}, "" },
			{"vklasse_17_fg", {"civ","reb"}, "" },
			{"vklasse_17_gg", {"civ","reb"}, "" },
			{"vklasse_17_jr", {"civ","reb"}, "" },
			{"vklasse_17_nb", {"civ","reb"}, "" },
			{"vklasse_17_ob", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_C250_14 {
		vItemSpace = 50;
		conditions = "";
		price = 2780000;
		textures[] = {
			{"w205_14_13", {"civ","reb"}, "" },
			{"w205_14_ao3", {"civ","reb"}, "" },
			{"w205_14_b3", {"civ","reb"}, "" },
			{"w205_14_bl3", {"civ","reb"}, "" },
			{"w205_14_bz3", {"civ","reb"}, "" },
			{"w205_14_g3", {"civ","reb"}, "" },
			{"w205_14_or3", {"civ","reb"}, "" },
			{"w205_14_rd3", {"civ","reb"}, "" },
			{"w205_14_y3", {"civ","reb"}, "" },
			{"w205_14_ao5", {"civ","reb"}, "" },
			{"w205_14_bb5", {"civ","reb"}, "" },
			{"w205_14_cb5", {"civ","reb"}, "" },
			{"w205_14_bc5", {"civ","reb"}, "" },
			{"w205_14_hr5", {"civ","reb"}, "" },
			{"w205_14_ob5", {"civ","reb"}, "" },
			{"w205_14_sg5", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class AlessioC63 {
		vItemSpace = 50;
		conditions = "";
		price = 690000;
		textures[] = {};
		materials[] = {};
	};
	
	class AlessioC63N {
		vItemSpace = 50;
		conditions = "";
		price = 750500;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_nemises_cla_14 {
		vItemSpace = 50;
		conditions = "";
		price = 600000;
		textures[] = {
			{"cla_14_ao", {"civ","reb"}, "" },
			{"cla_14_bb", {"civ","reb"}, "" },
			{"cla_14_cb", {"civ","reb"}, "" },
			{"cla_14_ds", {"civ","reb"}, "" },
			{"cla_14_dw", {"civ","reb"}, "" },
			{"cla_14_hr", {"civ","reb"}, "" },
			{"cla_14_is", {"civ","reb"}, "" },
			{"cla_14_jr", {"civ","reb"}, "" },
			{"cla_14_ob", {"civ","reb"}, "" },
			{"cla_14_obr", {"civ","reb"}, "" },
			{"cla_14_pw", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_nemises_cla_250_15 {
		vItemSpace = 70;
		conditions = "";
		price = 550400;
		textures[] = {
			{"colr_1", {"civ","reb"}, "" },
			{"colr_2", {"civ","reb"}, "" },
			{"colr_3", {"civ","reb"}, "" },
			{"colr_4", {"civ","reb"}, "" },
			{"colr_5", {"civ","reb"}, "" },
			{"colr_6", {"civ","reb"}, "" },
			{"colr_7", {"civ","reb"}, "" },
			{"colr_8", {"civ","reb"}, "" },
			{"colr_9", {"civ","reb"}, "" },
			{"colr_10", {"civ","reb"}, "" },
			{"colr_11", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_nemises_cla_45amg_14 {
		vItemSpace = 50;
		conditions = "";
		price = 865000;
		textures[] = {
			{"q56_13_b", {"civ","reb"}, "" },
			{"q56_13_bl", {"civ","reb"}, "" },
			{"q56_13_br", {"civ","reb"}, "" },
			{"q56_13_bw", {"civ","reb"}, "" },
			{"q56_13_g", {"civ","reb"}, "" },
			{"q56_13_s", {"civ","reb"}, "" },
			{"q56_13_w", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_nemises_cla_45amg_15 {
		vItemSpace = 70;
		conditions = "";
		price = 590500;
		textures[] = {
			{"colr_1", {"civ","reb"}, "" },
			{"colr_2", {"civ","reb"}, "" },
			{"colr_3", {"civ","reb"}, "" },
			{"colr_4", {"civ","reb"}, "" },
			{"colr_5", {"civ","reb"}, "" },
			{"colr_6", {"civ","reb"}, "" },
			{"colr_7", {"civ","reb"}, "" },
			{"colr_8", {"civ","reb"}, "" },
			{"colr_9", {"civ","reb"}, "" },
			{"colr_10", {"civ","reb"}, "" },
			{"colr_11", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_e220_16 {
		vItemSpace = 50;
		conditions = "";
		price = 1820500;
		textures[] = {
			{"w213_16_b", {"civ","reb"}, "" },
			{"w213_16_bl", {"civ","reb"}, "" },
			{"w213_16_br", {"civ","reb"}, "" },
			{"w213_16_g", {"civ","reb"}, "" },
			{"w213_16_o", {"civ","reb"}, "" },
			{"w213_16_r", {"civ","reb"}, "" },
			{"w213_16_s", {"civ","reb"}, "" },
			{"w213_16_w", {"civ","reb"}, "" },
			{"w213_16_bbb", {"civ","reb"}, "" },
			{"w213_16_cbr", {"civ","reb"}, "" },
			{"w213_16_hrr", {"civ","reb"}, "" },
			{"w213_16_yvr", {"civ","reb"}, "" },
			{"w213_16_ssg", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_e350_16 {
		vItemSpace = 50;
		conditions = "";
		price = 1930500;
		textures[] = {
			{"w213_16_b", {"civ","reb"}, "" },
			{"w213_16_bl", {"civ","reb"}, "" },
			{"w213_16_br", {"civ","reb"}, "" },
			{"w213_16_g", {"civ","reb"}, "" },
			{"w213_16_o", {"civ","reb"}, "" },
			{"w213_16_r", {"civ","reb"}, "" },
			{"w213_16_s", {"civ","reb"}, "" },
			{"w213_16_w", {"civ","reb"}, "" },
			{"w213_16_bbb", {"civ","reb"}, "" },
			{"w213_16_cbr", {"civ","reb"}, "" },
			{"w213_16_hrr", {"civ","reb"}, "" },
			{"w213_16_yvr", {"civ","reb"}, "" },
			{"w213_16_ssg", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_s350_13 {
		vItemSpace = 50;
		conditions = "";
		price = 2179950;
		textures[] = {
			{"v222_13_g", {"civ","reb"}, "" },
			{"v222_13_b", {"civ","reb"}, "" },
			{"v222_13_ao", {"civ","reb"}, "" },
			{"v222_13_cw", {"civ","reb"}, "" },
			{"v222_13_cb", {"civ","reb"}, "" },
			{"v222_13_ds", {"civ","reb"}, "" },
			{"v222_13_dw", {"civ","reb"}, "" },
			{"v222_13_eg", {"civ","reb"}, "" },
			{"v222_13_ms", {"civ","reb"}, "" },
			{"v222_13_rb", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_s500_13 {
		vItemSpace = 50;
		conditions = "";
		price = 2225520;
		textures[] = {
			{"v222_13_g", {"civ","reb"}, "" },
			{"v222_13_b", {"civ","reb"}, "" },
			{"v222_13_ao", {"civ","reb"}, "" },
			{"v222_13_cw", {"civ","reb"}, "" },
			{"v222_13_cb", {"civ","reb"}, "" },
			{"v222_13_ds", {"civ","reb"}, "" },
			{"v222_13_dw", {"civ","reb"}, "" },
			{"v222_13_eg", {"civ","reb"}, "" },
			{"v222_13_ms", {"civ","reb"}, "" },
			{"v222_13_rb", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_s65amg_14 {
		vItemSpace = 50;
		conditions = "";
		price = 2530600;
		textures[] = {
			{"q56_13_b", {"civ","reb"}, "" },
			{"q56_13_bl", {"civ","reb"}, "" },
			{"q56_13_br", {"civ","reb"}, "" },
			{"q56_13_bw", {"civ","reb"}, "" },
			{"q56_13_g", {"civ","reb"}, "" },
			{"q56_13_s", {"civ","reb"}, "" },
			{"q56_13_w", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class CarlosMini {
		vItemSpace = 50;
		conditions = "";
		price = 160700;
		textures[] = {};
		materials[] = {};
	};
	
	class CarlosMiniTuned {
		vItemSpace = 50;
		conditions = "";
		price = 250400;
		textures[] = {};
		materials[] = {};
	};
	
	class AlessioIXMR {
		vItemSpace = 50;
		conditions = "";
		price = 500500;
		textures[] = {};
		materials[] = {};
	};
	
	class AlessioGTR {
		vItemSpace = 50;
		conditions = "";
		price = 3725000;
		textures[] = {};
		materials[] = {};
	};
	
	class TM_Porsche_911 {
		vItemSpace = 50;
		conditions = "";
		price = 2920000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_nemises_evoque_td4_16 {
		vItemSpace = 80;
		conditions = "";
		price = 2489500;
		textures[] = {
			{"evoque_16_g", {"civ","reb"}, "" },
			{"evoque_16_w", {"civ","reb"}, "" },
			{"evoque_16_bi", {"civ","reb"}, "" },
			{"evoque_16_cg", {"civ","reb"}, "" },
			{"evoque_16_fr", {"civ","reb"}, "" },
			{"evoque_16_is", {"civ","reb"}, "" },
			{"evoque_16_ks", {"civ","reb"}, "" },
			{"evoque_16_lb", {"civ","reb"}, "" },
			{"evoque_16_sb", {"civ","reb"}, "" },
			{"evoque_16_sg", {"civ","reb"}, "" },
			{"evoque_16_wg", {"civ","reb"}, "" },
			{"evoque_16_yw", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	
	class d3s_nemises_kodiaq_17 {
		vItemSpace = 70;
		conditions = "";
		price = 326200;
		textures[] = {
			{"kodiaq_17_bm", {"civ","reb"}, "" },
			{"kodiaq_17_bs", {"civ","reb"}, "" },
			{"kodiaq_17_bg", {"civ","reb"}, "" },
			{"kodiaq_17_cb", {"civ","reb"}, "" },
			{"kodiaq_17_cr", {"civ","reb"}, "" },
			{"kodiaq_17_jg", {"civ","reb"}, "" },
			{"kodiaq_17_lw", {"civ","reb"}, "" },
			{"kodiaq_17_lb", {"civ","reb"}, "" },
			{"kodiaq_17_mb", {"civ","reb"}, "" },
			{"kodiaq_17_ma", {"civ","reb"}, "" },
			{"kodiaq_17_mw", {"civ","reb"}, "" },
			{"kodiaq_17_pb", {"civ","reb"}, "" },
			{"kodiaq_17_qg", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_nemises_kodiaq_act_17 {
		vItemSpace = 70;
		conditions = "";
		price = 429600;
		textures[] = {
			{"kodiaq_17_bm", {"civ","reb"}, "" },
			{"kodiaq_17_bs", {"civ","reb"}, "" },
			{"kodiaq_17_bg", {"civ","reb"}, "" },
			{"kodiaq_17_cb", {"civ","reb"}, "" },
			{"kodiaq_17_cr", {"civ","reb"}, "" },
			{"kodiaq_17_jg", {"civ","reb"}, "" },
			{"kodiaq_17_lw", {"civ","reb"}, "" },
			{"kodiaq_17_lb", {"civ","reb"}, "" },
			{"kodiaq_17_mb", {"civ","reb"}, "" },
			{"kodiaq_17_ma", {"civ","reb"}, "" },
			{"kodiaq_17_mw", {"civ","reb"}, "" },
			{"kodiaq_17_pb", {"civ","reb"}, "" },
			{"kodiaq_17_qg", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_nemises_kodiaq_sport_17 {
		vItemSpace = 70;
		conditions = "";
		price = 435800;
		textures[] = {
			{"kodiaq_17_bm", {"civ","reb"}, "" },
			{"kodiaq_17_bs", {"civ","reb"}, "" },
			{"kodiaq_17_bg", {"civ","reb"}, "" },
			{"kodiaq_17_cb", {"civ","reb"}, "" },
			{"kodiaq_17_cr", {"civ","reb"}, "" },
			{"kodiaq_17_jg", {"civ","reb"}, "" },
			{"kodiaq_17_lw", {"civ","reb"}, "" },
			{"kodiaq_17_lb", {"civ","reb"}, "" },
			{"kodiaq_17_mb", {"civ","reb"}, "" },
			{"kodiaq_17_ma", {"civ","reb"}, "" },
			{"kodiaq_17_mw", {"civ","reb"}, "" },
			{"kodiaq_17_pb", {"civ","reb"}, "" },
			{"kodiaq_17_qg", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_nemises_wrx_17 {
		vItemSpace = 50;
		conditions = "";
		price = 322100;
		textures[] = {
			{"wrx_17_cb", {"civ","reb"}, "" },
			{"wrx_17_cw", {"civ","reb"}, "" },
			{"wrx_17_dg", {"civ","reb"}, "" },
			{"wrx_17_b", {"civ","reb"}, "" },
			{"wrx_17_is", {"civ","reb"}, "" },
			{"wrx_17_r", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_nemises_wrx_sti_17 {
		vItemSpace = 50;
		conditions = "";
		price = 423000;
		textures[] = {
			{"wrx_17_stcb", {"civ","reb"}, "" },
			{"wrx_17_stcw", {"civ","reb"}, "" },
			{"wrx_17_stdg", {"civ","reb"}, "" },
			{"wrx_17_stis", {"civ","reb"}, "" },
			{"wrx_17_stdg", {"civ","reb"}, "" },
			{"wrx_17_stblu", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_nemises_oka {
		vItemSpace = 50;
		conditions = "";
		price = 11000;
		textures[] = {
			{"oka_y", {"civ","reb"}, "" },
			{"oka_s", {"civ","reb"}, "" },
			{"oka_r", {"civ","reb"}, "" },
			{"oka_g", {"civ","reb"}, "" },
			{"oka_b", {"civ","reb"}, "" },
			{"oka_p", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_nemises_niva_2329 {
		vItemSpace = 80;
		conditions = "";
		price = 55000;
		textures[] = {
			{"q56_13_b", {"civ","reb"}, "" },
			{"q56_13_bl", {"civ","reb"}, "" },
			{"q56_13_br", {"civ","reb"}, "" },
			{"q56_13_bw", {"civ","reb"}, "" },
			{"q56_13_g", {"civ","reb"}, "" },
			{"q56_13_s", {"civ","reb"}, "" },
			{"q56_13_w", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_nemises_3159 {
		vItemSpace = 80;
		conditions = "";
		price = 170300;
		textures[] = {
			{"u3159_b", {"civ","reb"}, "" },
			{"u3159_bl", {"civ","reb"}, "" },
			{"u3159_bd", {"civ","reb"}, "" },
			{"u3159_bd2", {"civ","reb"}, "" },
			{"u3159_bd3", {"civ","reb"}, "" },
			{"u3159_br", {"civ","reb"}, "" },
			{"u3159_brw", {"civ","reb"}, "" },
			{"u3159_g", {"civ","reb"}, "" },
			{"u3159_h", {"civ","reb"}, "" },
			{"u3159_or", {"civ","reb"}, "" },
			{"u3159_r", {"civ","reb"}, "" },
			{"u3159_y", {"civ","reb"}, "" },
			{"u3159_vip", {"civ","reb"}, "call life_donator) > 3" },
			{"u3159_vip2", {"civ","reb"}, "call life_donator) > 3" },
			{"u3159_vip3", {"civ","reb"}, "call life_donator) > 3" },
			{"u3159_vip4", {"civ","reb"}, "call life_donator) > 3" }
		};
		materials[] = {};
	};
	
	class d3s_nemises_3159_AMG {
		vItemSpace = 80;
		conditions = "";
		price = 3400500;
		textures[] = {
			{"u3159_b", {"civ","reb"}, "" },
			{"u3159_bl", {"civ","reb"}, "" },
			{"u3159_bd", {"civ","reb"}, "" },
			{"u3159_bd2", {"civ","reb"}, "" },
			{"u3159_bd3", {"civ","reb"}, "" },
			{"u3159_br", {"civ","reb"}, "" },
			{"u3159_brw", {"civ","reb"}, "" },
			{"u3159_g", {"civ","reb"}, "" },
			{"u3159_h", {"civ","reb"}, "" },
			{"u3159_or", {"civ","reb"}, "" },
			{"u3159_r", {"civ","reb"}, "" },
			{"u3159_y", {"civ","reb"}, "" },
			{"u3159_vip", {"civ","reb"}, "call life_donator) > 3" },
			{"u3159_vip2", {"civ","reb"}, "call life_donator) > 3" },
			{"u3159_vip3", {"civ","reb"}, "call life_donator) > 3" },
			{"u3159_vip4", {"civ","reb"}, "call life_donator) > 3" }
		};
		materials[] = {};
	};
	
	class d3s_patriot {
		vItemSpace = 80;
		conditions = "";
		price = 189300;
		textures[] = {
			{"q56_13_b", {"civ","reb"}, "" },
			{"q56_13_bl", {"civ","reb"}, "" },
			{"q56_13_br", {"civ","reb"}, "" },
			{"q56_13_bw", {"civ","reb"}, "" },
			{"q56_13_g", {"civ","reb"}, "" },
			{"q56_13_s", {"civ","reb"}, "" },
			{"q56_13_w", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_levante_17 {
		vItemSpace = 80;
		conditions = "";
		price = 1198150;
		textures[] = {
			{"levante_17_b", {"civ","reb"}, "" },
			{"levante_17_r", {"civ","reb"}, "" },
			{"levante_17_w", {"civ","reb"}, "" },
			{"levante_17_y", {"civ","reb"}, "" },
			{"levante_17_ba", {"civ","reb"}, "" },
			{"levante_17_be", {"civ","reb"}, "" },
			{"levante_17_bp", {"civ","reb"}, "" },
			{"levante_17_ch", {"civ","reb"}, "" },
			{"levante_17_ao", {"civ","reb"}, "" },
			{"levante_17_e", {"civ","reb"}, "" },
			{"levante_17_eo", {"civ","reb"}, "" },
			{"levante_17_m", {"civ","reb"}, "" },
			{"levante_17_mk", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_levante_s_17_mat {
		vItemSpace = 80;
		conditions = "";
		price = 1925400;
		textures[] = {
			{"levante_17_b", {"civ","reb"}, "" },
			{"levante_17_r", {"civ","reb"}, "" },
			{"levante_17_w", {"civ","reb"}, "" },
			{"levante_17_y", {"civ","reb"}, "" },
			{"levante_17_ba", {"civ","reb"}, "" },
			{"levante_17_be", {"civ","reb"}, "" },
			{"levante_17_bp", {"civ","reb"}, "" },
			{"levante_17_ch", {"civ","reb"}, "" },
			{"levante_17_ao", {"civ","reb"}, "" },
			{"levante_17_e", {"civ","reb"}, "" },
			{"levante_17_eo", {"civ","reb"}, "" },
			{"levante_17_m", {"civ","reb"}, "" },
			{"levante_17_mk", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class Ark_Isettared {
		vItemSpace = 50;
		conditions = "";
		price = 698499;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_nemises_vklasse_220_17 {
		vItemSpace = 150;
		conditions = "";
		price = 28000;
		textures[] = {
			{"vklasse_17_aw", {"civ","reb"}, "" },
			{"vklasse_17_bs", {"civ","reb"}, "" },
			{"vklasse_17_cb", {"civ","reb"}, "" },
			{"vklasse_17_db", {"civ","reb"}, "" },
			{"vklasse_17_fg", {"civ","reb"}, "" },
			{"vklasse_17_gg", {"civ","reb"}, "" },
			{"vklasse_17_jr", {"civ","reb"}, "" },
			{"vklasse_17_nb", {"civ","reb"}, "" },
			{"vklasse_17_ob", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class pop_volvo_camion {
		vItemSpace = 900;
		conditions = "";
		price = 950000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_zil_130_05 {
		vItemSpace = 200;
		conditions = "";
		price = 10000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_zil_130_02 {
		vItemSpace = 300;
		conditions = "";
		price = 21000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_zil_130_03 {
		vItemSpace = 250;
		conditions = "";
		price = 15600;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_zil_130_06 {
		vItemSpace = 300;
		conditions = "";
		price = 30000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_nemises_zil_131 {
		vItemSpace = 350;
		conditions = "";
		price = 52000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_nemises_zil_131_4 {
		vItemSpace = 400;
		conditions = "";
		price = 72000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_nemises_zil_131_3 {
		vItemSpace = 450;
		conditions = "";
		price = 84000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_nemises_zil_131_5 {
		vItemSpace = 500;
		conditions = "";
		price = 90000;
		textures[] = {};
		materials[] = {};
	};
	
	class zil157_BORT {
		vItemSpace = 180;
		conditions = "";
		price = 8000;
		textures[] = {};
		materials[] = {};
	};
	
	class Zil157_fuel_tank {
		vItemSpace = 200;
		conditions = "";
		price = 10000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_kamaz_2 {
		vItemSpace = 750;
		conditions = "";
		price = 125000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_kamaz_MAW_1 {
		vItemSpace = 650;
		conditions = "";
		price = 165000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_kamaz_bocha {
		vItemSpace = 600;
		conditions = "";
		price = 155000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_kamaz_bocha_MAW_1 {
		vItemSpace = 500;
		conditions = "";
		price = 180000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_kamaz_tent_2 {
		vItemSpace = 800;
		conditions = "";
		price = 200000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_kamaz_4310_med {
		vItemSpace = 700;
		conditions = "";
		price = 210000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_kamaz {
		vItemSpace = 850;
		conditions = "";
		price = 220000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_kamaz_4350 {
		vItemSpace = 900;
		conditions = "";
		price = 250000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_kamaz_5350_bocha {
		vItemSpace = 850;
		conditions = "";
		price = 290000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_kamaz_6350 {
		vItemSpace = 1100;
		conditions = "";
		price = 550000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_kraz_6315 {
		vItemSpace = 1200;
		conditions = "";
		price = 650800;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_kraz_6316 {
		vItemSpace = 1300;
		conditions = "";
		price = 750000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_nemises_kraz_6316 {
		vItemSpace = 1100;
		conditions = "";
		price = 820800;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_maz_7429 {
		vItemSpace = 1400;
		conditions = "";
		price = 852300;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_nemises_ural {
		vItemSpace = 400;
		conditions = "";
		price = 150000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_nemises_next {
		vItemSpace = 1500;
		conditions = "";
		price = 1000000;
		textures[] = {
			{"next_w", {"civ","reb"}, "" },
			{"next_b", {"civ","reb"}, "" },
			{"next_g", {"civ","reb"}, "" },
			{"next_h", {"civ","reb"}, "" },
			{"next_o", {"civ","reb"}, "" },
			{"next_r", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_nemises_next_bocha {
		vItemSpace = 1300;
		conditions = "";
		price = 1100000;
		textures[] = {
			{"next_w", {"civ","reb"}, "" },
			{"next_b", {"civ","reb"}, "" },
			{"next_g", {"civ","reb"}, "" },
			{"next_h", {"civ","reb"}, "" },
			{"next_o", {"civ","reb"}, "" },
			{"next_r", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_next_tent {
		vItemSpace = 1600;
		conditions = "";
		price = 1200000;
		textures[] = {
			{"next_w", {"civ","reb"}, "" },
			{"next_b", {"civ","reb"}, "" },
			{"next_g", {"civ","reb"}, "" },
			{"next_h", {"civ","reb"}, "" },
			{"next_o", {"civ","reb"}, "" },
			{"next_r", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_tahoe_EMS {
		vItemSpace = 100;
		conditions = "";
		price = 25000;
		textures[] = {};
		materials[] = {};
	};
	
	class Ark_Ambulance {
		vItemSpace = 100;
		conditions = "";
		price = 50000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_crown_98_PD_blue {
		vItemSpace = 60;
		conditions = "";
		price = 20000;
		textures[] = {};
		materials[] = {};
	};
	
	class MELB_H6M {
		vItemSpace = 60;
		conditions = "";
		price = 30000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_nemises_savana_PSV {
		vItemSpace = 60;
		conditions = "";
		price = 10000;
		textures[] = {};
		materials[] = {};
	};
	
	class ARMSCor_A109LUH_B {
		vItemSpace = 60;
		conditions = "";
		price = 30000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_nemises_taurus_FPI_10 {
		vItemSpace = 60;
		conditions = "";
		price = 20000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_tahoe_PPV_2 {
		vItemSpace = 60;
		conditions = "";
		price = 30000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_charger_15_CPP {
		vItemSpace = 60;
		conditions = "";
		price = 20000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_nemises_FPIU_13 {
		vItemSpace = 60;
		conditions = "";
		price = 30000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_durango_18_DDPI {
		vItemSpace = 60;
		conditions = "";
		price = 30000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_srthellcat_15_CPST {
		vItemSpace = 60;
		conditions = "";
		price = 20000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_charger_15_CPST {
		vItemSpace = 60;
		conditions = "";
		price = 20000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_srthellcat_15_UNM {
		vItemSpace = 60;
		conditions = "";
		price = 20000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_nemises_taurus_UNM_10 {
		vItemSpace = 60;
		conditions = "";
		price = 20000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_charger_15_CPU {
		vItemSpace = 60;
		conditions = "";
		price = 20000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_tahoe_UNM {
		vItemSpace = 80;
		conditions = "";
		price = 30000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_durango_18_UNM {
		vItemSpace = 80;
		conditions = "";
		price = 30000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_nemises_explorer_UNM_13 {
		vItemSpace = 80;
		conditions = "";
		price = 30000;
		textures[] = {};
		materials[] = {};
	};
	
	class np_cherokee_p {
		vItemSpace = 80;
		conditions = "";
		price = 30000;
		textures[] = {};
		materials[] = {};
	};
	
	class MELB_MH6M {
		vItemSpace = 60;
		conditions = "";
		price = 30000;
		textures[] = {};
		materials[] = {};
	};
	
	class IVORY_UH1Y_UNARMED {
		vItemSpace = 60;
		conditions = "";
		price = 50000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_giulia_q4_16_FSB {
		vItemSpace = 60;
		conditions = "";
		price = 100000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_nemises_f90_18_FSB {
		vItemSpace = 60;
		conditions = "";
		price = 100000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_nemises_C450_15_FSB {
		vItemSpace = 60;
		conditions = "";
		price = 100000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_e400_16_FSB {
		vItemSpace = 60;
		conditions = "";
		price = 100000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_nemises_gls63amg_17_FSB {
		vItemSpace = 60;
		conditions = "";
		price = 100000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_nemises_vklasse_17_FSB {
		vItemSpace = 60;
		conditions = "";
		price = 50000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_lx570_16_KaCkaD {
		vItemSpace = 60;
		conditions = "";
		price = 100000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_nemises_urus_FSB_12 {
		vItemSpace = 60;
		conditions = "";
		price = 100000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_levante_FSB_17 {
		vItemSpace = 60;
		conditions = "";
		price = 100000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_f86_15_UNM {
		vItemSpace = 60;
		conditions = "";
		price = 100000;
		textures[] = {};
		materials[] = {};
	};
	
	class av_APC_Wheeled_ch_F {
		vItemSpace = 60;
		conditions = "";
		price = 200000;
		textures[] = {};
		materials[] = {};
	};
	
	class GR_UH60_1 {
		vItemSpace = 60;
		conditions = "";
		price = 300000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_AS_565 {
		vItemSpace = 60;
		conditions = "";
		price = 200000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_g850_17_UNM {
		vItemSpace = 60;
		conditions = "";
		price = 50000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_boss_15_COP {
		vItemSpace = 60;
		conditions = "";
		price = 50000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_boss_15_UNM {
		vItemSpace = 60;
		conditions = "";
		price = 50000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_ctsv_16_unm {
		vItemSpace = 60;
		conditions = "";
		price = 50000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_tahoe_SHERIFF {
		vItemSpace = 60;
		conditions = "";
		price = 30000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_g850_17_COP {
		vItemSpace = 60;
		conditions = "";
		price = 50000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_amazing_f10_12_COP {
		vItemSpace = 60;
		conditions = "";
		price = 50000;
		textures[] = {};
		materials[] = {};
	};
	
	class B_Heli_Transport_01_F {
		vItemSpace = 60;
		conditions = "";
		price = 300000;
		textures[] = {};
		materials[] = {};
	};
	
	
	class GM_TAURUS_EMS {
		vItemSpace = 60;
		conditions = "";
		price = 20000;
		textures[] = {};
		materials[] = {};
	};
	
	class GM_SAVANA_EMS {
		vItemSpace = 60;
		conditions = "";
		price = 10000;
		textures[] = {};
		materials[] = {};
	};
	
	class EMS_helo {
		vItemSpace = 60;
		conditions = "";
		price = 20000;
		textures[] = {};
		materials[] = {};
	};
	
	class GM_EXPLORER_EMS {
		vItemSpace = 60;
		conditions = "";
		price = 30000;
		textures[] = {};
		materials[] = {};
	};
	
	class REGA_EC635 {
		vItemSpace = 60;
		conditions = "";
		price = 30000;
		textures[] = {};
		materials[] = {};
	};
	
	class GM_CHARGER_EMS {
		vItemSpace = 60;
		conditions = "";
		price = 40000;
		textures[] = {};
		materials[] = {};
	};
	
	class IVORY_BELL512_RESCUE {
		vItemSpace = 60;
		conditions = "";
		price = 50000;
		textures[] = {};
		materials[] = {};
	};
	
	class GM_VAN_EMS {
		vItemSpace = 60;
		conditions = "";
		price = 30000;
		textures[] = {};
		materials[] = {};
	};
	
	class GM_MUSTANG_EMS {
		vItemSpace = 60;
		conditions = "";
		price = 50000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_crown_98_T1 {
		vItemSpace = 50;
		conditions = "";
		price = 10000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_crown_98_T2 {
		vItemSpace = 50;
		conditions = "";
		price = 10000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_crown_98_T3 {
		vItemSpace = 50;
		conditions = "";
		price = 15000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_crown_98_T4 {
		vItemSpace = 50;
		conditions = "";
		price = 15000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_300_12_UNM {
		vItemSpace = 50;
		conditions = "";
		price = 200000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_civic_17_S {
		vItemSpace = 50;
		conditions = "";
		price = 100000;
		textures[] = {
			{"q56_13_b", {"civ","reb"}, "" },
			{"q56_13_bl", {"civ","reb"}, "" },
			{"q56_13_br", {"civ","reb"}, "" },
			{"q56_13_bw", {"civ","reb"}, "" },
			{"q56_13_g", {"civ","reb"}, "" },
			{"q56_13_s", {"civ","reb"}, "" },
			{"q56_13_w", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_civic_17 {
		vItemSpace = 50;
		conditions = "";
		price = 200000;
		textures[] = {
			{"q56_13_b", {"civ","reb"}, "" },
			{"q56_13_bl", {"civ","reb"}, "" },
			{"q56_13_br", {"civ","reb"}, "" },
			{"q56_13_bw", {"civ","reb"}, "" },
			{"q56_13_g", {"civ","reb"}, "" },
			{"q56_13_s", {"civ","reb"}, "" },
			{"q56_13_w", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_civic_17_R {
		vItemSpace = 50;
		conditions = "";
		price = 300000;
		textures[] = {
			{"q56_13_b", {"civ","reb"}, "" },
			{"q56_13_bl", {"civ","reb"}, "" },
			{"q56_13_br", {"civ","reb"}, "" },
			{"q56_13_bw", {"civ","reb"}, "" },
			{"q56_13_g", {"civ","reb"}, "" },
			{"q56_13_s", {"civ","reb"}, "" },
			{"q56_13_w", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_300SRT_12 {
		vItemSpace = 50;
		conditions = "";
		price = 5030000;
		textures[] = {
			{"q56_13_b", {"civ","reb"}, "" },
			{"q56_13_bl", {"civ","reb"}, "" },
			{"q56_13_br", {"civ","reb"}, "" },
			{"q56_13_bw", {"civ","reb"}, "" },
			{"q56_13_g", {"civ","reb"}, "" },
			{"q56_13_s", {"civ","reb"}, "" },
			{"q56_13_w", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_300C_12 {
		vItemSpace = 50;
		conditions = "";
		price = 3000000;
		textures[] = {
			{"q56_13_b", {"civ","reb"}, "" },
			{"q56_13_bl", {"civ","reb"}, "" },
			{"q56_13_br", {"civ","reb"}, "" },
			{"q56_13_bw", {"civ","reb"}, "" },
			{"q56_13_g", {"civ","reb"}, "" },
			{"q56_13_s", {"civ","reb"}, "" },
			{"q56_13_w", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_300S_12 {
		vItemSpace = 50;
		conditions = "";
		price = 3700000;
		textures[] = {
			{"q56_13_b", {"civ","reb"}, "" },
			{"q56_13_bl", {"civ","reb"}, "" },
			{"q56_13_br", {"civ","reb"}, "" },
			{"q56_13_bw", {"civ","reb"}, "" },
			{"q56_13_g", {"civ","reb"}, "" },
			{"q56_13_s", {"civ","reb"}, "" },
			{"q56_13_w", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_e38_98L {
		vItemSpace = 50;
		conditions = "";
		price = 190098;
		textures[] = {
			{"e38_98_ao", {"civ","reb"}, "" },
			{"e38_98_b", {"civ","reb"}, "" },
			{"e38_98_g", {"civ","reb"}, "" },
			{"e38_98_gr", {"civ","reb"}, "" },
			{"e38_98_r", {"civ","reb"}, "" },
			{"e38_98_s", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_e38_98 {
		vItemSpace = 50;
		conditions = "";
		price = 150000;
		textures[] = {
			{"e38_98_ao", {"civ","reb"}, "" },
			{"e38_98_b", {"civ","reb"}, "" },
			{"e38_98_g", {"civ","reb"}, "" },
			{"e38_98_gr", {"civ","reb"}, "" },
			{"e38_98_r", {"civ","reb"}, "" },
			{"e38_98_s", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_actros_14 {
		vItemSpace = 1600;
		conditions = "";
		price = 1450000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_actros_14_cistern {
		vItemSpace = 1500;
		conditions = "";
		price = 1600000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_actros_14_big {
		vItemSpace = 1800;
		conditions = "";
		price = 1700000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_actros_14_big_cistern {
		vItemSpace = 1600;
		conditions = "";
		price = 1750000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_actros_14_giga {
		vItemSpace = 2000;
		conditions = "";
		price = 2000000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_actros_14_giga_cistern {
		vItemSpace = 1800;
		conditions = "";
		price = 2150000;
		textures[] = {};
		materials[] = {};
	};

	class d3s_uaz_469P {
		vItemSpace = 50;
		conditions = "";
		price = 50000;
		textures[] = {
			{"uaz_469_ao", {"civ","reb"}, "" },
			{"uaz_469_b", {"civ","reb"}, "" },
			{"uaz_469_bl", {"civ","reb"}, "" },
			{"uaz_469_ex", {"civ","reb"}, "call life_donator) > 1" },
			{"uaz_469_g", {"civ","reb"}, "" },
			{"uaz_469_m", {"civ","reb"}, "" },
			{"uaz_469_mi", {"civ","reb"}, "" },
			{"uaz_469_r", {"civ","reb"}, "" },
			{"uaz_469_vip1", {"civ","reb"}, "call life_donator) > 3" },
			{"uaz_469_vip2", {"civ","reb"}, "call life_donator) > 3" },
			{"uaz_469_vip3", {"civ","reb"}, "call life_donator) > 3" },
			{"uaz_469_vip4", {"civ","reb"}, "call life_donator) > 3" },
			{"uaz_469_vip5", {"civ","reb"}, "call life_donator) > 3" },
			{"uaz_469_vip6", {"civ","reb"}, "call life_donator) > 3" }
		};
		materials[] = {};
	};
	
	class d3s_uaz_469P_EXP {
		vItemSpace = 90;
		conditions = "";
		price = 300000;
		textures[] = {
			{"uaz_469_ao", {"civ","reb"}, "" },
			{"uaz_469_b", {"civ","reb"}, "" },
			{"uaz_469_bl", {"civ","reb"}, "" },
			{"uaz_469_g", {"civ","reb"}, "" },
			{"uaz_469_m", {"civ","reb"}, "" },
			{"uaz_469_mi", {"civ","reb"}, "" },
			{"uaz_469_r", {"civ","reb"}, "" },
			{"uaz_469_vip1", {"civ","reb"}, "call life_donator) > 3" },
			{"uaz_469_vip2", {"civ","reb"}, "call life_donator) > 3" },
			{"uaz_469_vip3", {"civ","reb"}, "call life_donator) > 3" },
			{"uaz_469_vip4", {"civ","reb"}, "call life_donator) > 3" },
			{"uaz_469_vip5", {"civ","reb"}, "call life_donator) > 3" },
			{"uaz_469_vip6", {"civ","reb"}, "call life_donator) > 3" }
		};
		materials[] = {};
	};
	
	class d3s_uaz_3162 {
		vItemSpace = 70;
		conditions = "";
		price = 180000;
		textures[] = {
			{"uaz_3162_b", {"civ","reb"}, "" },
			{"uaz_3162_bl", {"civ","reb"}, "" },
			{"uaz_3162_bb", {"civ","reb"}, "" },
			{"uaz_3162_ao", {"civ","reb"}, "" },
			{"uaz_3162_g", {"civ","reb"}, "" },
			{"uaz_3162_gr", {"civ","reb"}, "" },
			{"uaz_3162_o", {"civ","reb"}, "" },
			{"uaz_3162_r", {"civ","reb"}, "" },
			{"uaz_3162_y", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_raptor_17 {
		vItemSpace = 70;
		conditions = "";
		price = 2580000;
		textures[] = {
			{"raptor_17_w", {"civ","reb"}, "" },
			{"raptor_17_b", {"civ","reb"}, "" },
			{"raptor_17_bg", {"civ","reb"}, "" },
			{"raptor_17_bl", {"civ","reb"}, "" },
			{"raptor_17_br", {"civ","reb"}, "" },
			{"raptor_17_r", {"civ","reb"}, "" },
			{"raptor_17_gm", {"civ","reb"}, "" },
			{"raptor_17_g", {"civ","reb"}, "" },
			{"raptor_17_gr", {"civ","reb"}, "" },
			{"raptor_17_lm", {"civ","reb"}, "" },
			{"raptor_17_or", {"civ","reb"}, "" },
			{"raptor_17_SCR", {"civ","reb"}, "" },
			{"raptor_17_vip1", {"civ","reb"}, "call life_donator) > 3" },
			{"raptor_17_vip2", {"civ","reb"}, "call life_donator) > 3" },
			{"raptor_17_vip3", {"civ","reb"}, "call life_donator) > 3" },
			{"raptor_17_vip4", {"civ","reb"}, "call life_donator) > 3" },
			{"raptor_17_vip5", {"civ","reb"}, "call life_donator) > 3" },
			{"raptor_17_vip6", {"civ","reb"}, "call life_donator) > 3" }
		};
		materials[] = {};
	};
	
	class d3s_raptor_SCR_17 {
		vItemSpace = 70;
		conditions = "";
		price = 2780000;
		textures[] = {
			{"raptor_17_w", {"civ","reb"}, "" },
			{"raptor_17_b", {"civ","reb"}, "" },
			{"raptor_17_bg", {"civ","reb"}, "" },
			{"raptor_17_bl", {"civ","reb"}, "" },
			{"raptor_17_br", {"civ","reb"}, "" },
			{"raptor_17_r", {"civ","reb"}, "" },
			{"raptor_17_gm", {"civ","reb"}, "" },
			{"raptor_17_g", {"civ","reb"}, "" },
			{"raptor_17_gr", {"civ","reb"}, "" },
			{"raptor_17_lm", {"civ","reb"}, "" },
			{"raptor_17_or", {"civ","reb"}, "" },
			{"raptor_17_SCR", {"civ","reb"}, "" },
			{"raptor_17_vip1", {"civ","reb"}, "call life_donator) > 3" },
			{"raptor_17_vip2", {"civ","reb"}, "call life_donator) > 3" },
			{"raptor_17_vip3", {"civ","reb"}, "call life_donator) > 3" },
			{"raptor_17_vip4", {"civ","reb"}, "call life_donator) > 3" },
			{"raptor_17_vip5", {"civ","reb"}, "call life_donator) > 3" },
			{"raptor_17_vip6", {"civ","reb"}, "call life_donator) > 3" }
		};
		materials[] = {};
	};
	
	class d3s_f86_15_OFF {
		vItemSpace = 70;
		conditions = "";
		price = 1780000;
		textures[] = {
			{"f86_15_offay", {"civ","reb"}, "" },
			{"f86_15_offbs", {"civ","reb"}, "" },
			{"f86_15_offcq", {"civ","reb"}, "" },
			{"f86_15_offfr", {"civ","reb"}, "" },
			{"f86_15_offgp", {"civ","reb"}, "" },
			{"f86_15_offmr", {"civ","reb"}, "" },
			{"f86_15_offr", {"civ","reb"}, "" },
			{"f86_15_offor", {"civ","reb"}, "" },
			{"f86_15_offsp", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_f86_15_m {
		vItemSpace = 70;
		conditions = "";
		price = 1680000;
		textures[] = {
			{"f86_15_AO", {"civ","reb"}, "" },
			{"f86_15_ay", {"civ","reb"}, "" },
			{"f86_15_bs", {"civ","reb"}, "" },
			{"f86_15_ch", {"civ","reb"}, "" },
			{"f86_15_fdr", {"civ","reb"}, "" },
			{"f86_15_gr", {"civ","reb"}, "" },
			{"f86_15_mb", {"civ","reb"}, "" },
			{"f86_15_mr", {"civ","reb"}, "" },
			{"f86_15_mg", {"civ","reb"}, "" },
			{"f86_15_or", {"civ","reb"}, "" },
			{"f86_15_sr", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_e89_12 {
		vItemSpace = 50;
		conditions = "";
		price = 3680000;
		textures[] = {
			{"q56_13_b", {"civ","reb"}, "" },
			{"q56_13_bl", {"civ","reb"}, "" },
			{"q56_13_br", {"civ","reb"}, "" },
			{"q56_13_bw", {"civ","reb"}, "" },
			{"q56_13_g", {"civ","reb"}, "" },
			{"q56_13_s", {"civ","reb"}, "" },
			{"q56_13_w", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_g63amg_16 {
		vItemSpace = 50;
		conditions = "";
		price = 2680000;
		textures[] = {
			{"g65amg_16_cb", {"civ","reb"}, "" },
			{"g65amg_16_eg", {"civ","reb"}, "" },
			{"g65amg_16_hr", {"civ","reb"}, "" },
			{"g65amg_16_ob", {"civ","reb"}, "" },
			{"g65amg_16_pg", {"civ","reb"}, "" },
			{"g65amg_16_pw", {"civ","reb"}, "" },
			{"g65amg_16_tb", {"civ","reb"}, "" },
			{"g65amg_16_tg", {"civ","reb"}, "" },
			{"g65amg_16_w", {"civ","reb"}, "" },
			{"g65amg_16_cb1", {"civ","reb"}, "" },
			{"g65amg_16_hr2", {"civ","reb"}, "" },
			{"g65amg_16_pw4", {"civ","reb"}, "" },
			{"g65amg_16_tb5", {"civ","reb"}, "" },
			{"g65amg_16_tg6", {"civ","reb"}, "" },
			{"g65amg_16_wg350", {"civ","reb"}, "" },
			{"g65amg_16_cb350", {"civ","reb"}, "" },
			{"g65amg_16_ds350", {"civ","reb"}, "" },
			{"g65amg_16_dsg350", {"civ","reb"}, "" },
			{"g65amg_16_eg350", {"civ","reb"}, "" },
			{"g65amg_16_hr350", {"civ","reb"}, "" },
			{"g65amg_16_ob350", {"civ","reb"}, "" },
			{"g65amg_16_pg350", {"civ","reb"}, "" },
			{"g65amg_16_tb350", {"civ","reb"}, "" },
			{"g65amg_16_tg350", {"civ","reb"}, "" },
			{"g65amg_16_tr350", {"civ","reb"}, "" },
			{"g65amg_16_cb500", {"civ","reb"}, "" },
			{"g65amg_16_cj500", {"civ","reb"}, "" },
			{"g65amg_16_ds500", {"civ","reb"}, "" },
			{"g65amg_16_dsg500", {"civ","reb"}, "" },
			{"g65amg_16_eg500", {"civ","reb"}, "" },
			{"g65amg_16_hr500", {"civ","reb"}, "" },
			{"g65amg_16_ob500", {"civ","reb"}, "" },
			{"g65amg_16_pg500", {"civ","reb"}, "" },
			{"g65amg_16_tb500", {"civ","reb"}, "" },
			{"g65amg_16_tg500", {"civ","reb"}, "" },
			{"g65amg_16_tr500", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_g65amg_16 {
		vItemSpace = 50;
		conditions = "";
		price = 3680000;
		textures[] = {
			{"g65amg_16_cb", {"civ","reb"}, "" },
			{"g65amg_16_eg", {"civ","reb"}, "" },
			{"g65amg_16_hr", {"civ","reb"}, "" },
			{"g65amg_16_ob", {"civ","reb"}, "" },
			{"g65amg_16_pg", {"civ","reb"}, "" },
			{"g65amg_16_pw", {"civ","reb"}, "" },
			{"g65amg_16_tb", {"civ","reb"}, "" },
			{"g65amg_16_tg", {"civ","reb"}, "" },
			{"g65amg_16_w", {"civ","reb"}, "" },
			{"g65amg_16_cb1", {"civ","reb"}, "" },
			{"g65amg_16_hr2", {"civ","reb"}, "" },
			{"g65amg_16_pw4", {"civ","reb"}, "" },
			{"g65amg_16_tb5", {"civ","reb"}, "" },
			{"g65amg_16_tg6", {"civ","reb"}, "" },
			{"g65amg_16_wg350", {"civ","reb"}, "" },
			{"g65amg_16_cb350", {"civ","reb"}, "" },
			{"g65amg_16_ds350", {"civ","reb"}, "" },
			{"g65amg_16_dsg350", {"civ","reb"}, "" },
			{"g65amg_16_eg350", {"civ","reb"}, "" },
			{"g65amg_16_hr350", {"civ","reb"}, "" },
			{"g65amg_16_ob350", {"civ","reb"}, "" },
			{"g65amg_16_pg350", {"civ","reb"}, "" },
			{"g65amg_16_tb350", {"civ","reb"}, "" },
			{"g65amg_16_tg350", {"civ","reb"}, "" },
			{"g65amg_16_tr350", {"civ","reb"}, "" },
			{"g65amg_16_cb500", {"civ","reb"}, "" },
			{"g65amg_16_cj500", {"civ","reb"}, "" },
			{"g65amg_16_ds500", {"civ","reb"}, "" },
			{"g65amg_16_dsg500", {"civ","reb"}, "" },
			{"g65amg_16_eg500", {"civ","reb"}, "" },
			{"g65amg_16_hr500", {"civ","reb"}, "" },
			{"g65amg_16_ob500", {"civ","reb"}, "" },
			{"g65amg_16_pg500", {"civ","reb"}, "" },
			{"g65amg_16_tb500", {"civ","reb"}, "" },
			{"g65amg_16_tg500", {"civ","reb"}, "" },
			{"g65amg_16_tr500", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_gle43amg_15 {
		vItemSpace = 50;
		conditions = "";
		price = 1680000;
		textures[] = {
			{"q56_13_b", {"civ","reb"}, "" },
			{"q56_13_bl", {"civ","reb"}, "" },
			{"q56_13_br", {"civ","reb"}, "" },
			{"q56_13_bw", {"civ","reb"}, "" },
			{"q56_13_g", {"civ","reb"}, "" },
			{"q56_13_s", {"civ","reb"}, "" },
			{"q56_13_w", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_gle63amgS_15 {
		vItemSpace = 50;
		conditions = "";
		price = 1980000;
		textures[] = {
			{"q56_13_b", {"civ","reb"}, "" },
			{"q56_13_bl", {"civ","reb"}, "" },
			{"q56_13_br", {"civ","reb"}, "" },
			{"q56_13_bw", {"civ","reb"}, "" },
			{"q56_13_g", {"civ","reb"}, "" },
			{"q56_13_s", {"civ","reb"}, "" },
			{"q56_13_w", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_g350d_15 {
		vItemSpace = 50;
		conditions = "";
		price = 2980000;
		textures[] = {
			{"q56_13_b", {"civ","reb"}, "" },
			{"q56_13_bl", {"civ","reb"}, "" },
			{"q56_13_br", {"civ","reb"}, "" },
			{"q56_13_bw", {"civ","reb"}, "" },
			{"q56_13_g", {"civ","reb"}, "" },
			{"q56_13_s", {"civ","reb"}, "" },
			{"q56_13_w", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_focus_14_ST {
		vItemSpace = 50;
		conditions = "";
		price = 310000;
		textures[] = {
			{"q56_13_b", {"civ","reb"}, "" },
			{"q56_13_bl", {"civ","reb"}, "" },
			{"q56_13_br", {"civ","reb"}, "" },
			{"q56_13_bw", {"civ","reb"}, "" },
			{"q56_13_g", {"civ","reb"}, "" },
			{"q56_13_s", {"civ","reb"}, "" },
			{"q56_13_w", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_fiesta_16 {
		vItemSpace = 50;
		conditions = "";
		price = 380000;
		textures[] = {
			{"q56_13_b", {"civ","reb"}, "" },
			{"q56_13_bl", {"civ","reb"}, "" },
			{"q56_13_br", {"civ","reb"}, "" },
			{"q56_13_bw", {"civ","reb"}, "" },
			{"q56_13_g", {"civ","reb"}, "" },
			{"q56_13_s", {"civ","reb"}, "" },
			{"q56_13_w", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_ghost_18_EWB {
		vItemSpace = 50;
		conditions = "";
		price = 4880000;
		textures[] = {
			{"gh_18_1", {"civ","reb"}, "" },
			{"gh_18_2", {"civ","reb"}, "" },
			{"gh_18_3", {"civ","reb"}, "" },
			{"gh_18_4", {"civ","reb"}, "" },
			{"gh_18_5", {"civ","reb"}, "" },
			{"gh_18_6", {"civ","reb"}, "" },
			{"gh_18_7", {"civ","reb"}, "" },
			{"gh_18_8", {"civ","reb"}, "" },
			{"gh_18_9", {"civ","reb"}, "" },
			{"gh_18_10", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_giulietta_16 {
		vItemSpace = 50;
		conditions = "";
		price = 150000;
		textures[] = {
			{"gi_16_ao", {"civ","reb"}, "" },
			{"gi_16_i", {"civ","reb"}, "" },
			{"gi_16_b", {"civ","reb"}, "" },
			{"gi_16_bl", {"civ","reb"}, "" },
			{"gi_16_r", {"civ","reb"}, "" },
			{"gi_16_dr", {"civ","reb"}, "" },
			{"gi_16_sg", {"civ","reb"}, "" },
			{"gi_16_vg", {"civ","reb"}, "" },
			{"gi_16_vb", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_f13_13 {
		vItemSpace = 50;
		conditions = "";
		price = 1680000;
		textures[] = {
			{"f13_al", {"civ","reb"}, "" },
			{"f13_ao", {"civ","reb"}, "" },
			{"f13_y", {"civ","reb"}, "" },
			{"f13_bs", {"civ","reb"}, "" },
			{"f13_g", {"civ","reb"}, "" },
			{"f13_s", {"civ","reb"}, "" },
			{"f13_gs", {"civ","reb"}, "" },
			{"f13_gr", {"civ","reb"}, "" },
			{"f13_ip", {"civ","reb"}, "" },
			{"f13_bb", {"civ","reb"}, "" },
			{"f13_r", {"civ","reb"}, "" },
			{"f13_or", {"civ","reb"}, "" },
			{"f13_sg", {"civ","reb"}, "" },
			{"f13_ys", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_camaro_16 {
		vItemSpace = 50;
		conditions = "";
		price = 3650000;
		textures[] = {
			{"ss_16_ao", {"civ","reb"}, "" },
			{"ss_16_b", {"civ","reb"}, "" },
			{"ss_16_y", {"civ","reb"}, "" },
			{"ss_16_r", {"civ","reb"}, "" },
			{"ss_16_bl", {"civ","reb"}, "" },
			{"ss_16_db", {"civ","reb"}, "" },
			{"ss_16_g", {"civ","reb"}, "" },
			{"ss_16_rh", {"civ","reb"}, "" },
			{"ss_16_si", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_camaro_zl1_17 {
		vItemSpace = 50;
		conditions = "";
		price = 3800000;
		textures[] = {
			{"Z_16_ao", {"civ","reb"}, "" },
			{"Z_16_b", {"civ","reb"}, "" },
			{"Z_16_y", {"civ","reb"}, "" },
			{"Z_16_r", {"civ","reb"}, "" },
			{"Z_16_bl", {"civ","reb"}, "" },
			{"Z_16_db", {"civ","reb"}, "" },
			{"Z_16_g", {"civ","reb"}, "" },
			{"Z_16_rh", {"civ","reb"}, "" },
			{"Z_16_si", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_camaro_zl1_1le_18 {
		vItemSpace = 50;
		conditions = "";
		price = 4000000;
		textures[] = {
			{"Z_16_ao", {"civ","reb"}, "" },
			{"Z_16_b", {"civ","reb"}, "" },
			{"Z_16_y", {"civ","reb"}, "" },
			{"Z_16_r", {"civ","reb"}, "" },
			{"Z_16_bl", {"civ","reb"}, "" },
			{"Z_16_db", {"civ","reb"}, "" },
			{"Z_16_g", {"civ","reb"}, "" },
			{"Z_16_rh", {"civ","reb"}, "" },
			{"Z_16_si", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_focus_17 {
		vItemSpace = 50;
		conditions = "";
		price = 450000;
		textures[] = {
			{"f_17_ao", {"civ","reb"}, "" },
			{"f_17_bb", {"civ","reb"}, "" },
			{"f_17_bw", {"civ","reb"}, "" },
			{"f_17_c", {"civ","reb"}, "" },
			{"f_17_db", {"civ","reb"}, "" },
			{"f_17_ib", {"civ","reb"}, "" },
			{"f_17_mg", {"civ","reb"}, "" },
			{"f_17_r", {"civ","reb"}, "" },
			{"f_17_p", {"civ","reb"}, "" },
			{"f_17_sb", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_focus_17_LB {
		vItemSpace = 50;
		conditions = "";
		price = 600000;
		textures[] = {
			{"lb_17_w", {"civ","reb"}, "" },
			{"lb_17_r", {"civ","reb"}, "" },
			{"lb_17_y", {"civ","reb"}, "" },
			{"lb_17_g", {"civ","reb"}, "" },
			{"lb_17_b", {"civ","reb"}, "" },
			{"lb_17_p", {"civ","reb"}, "" },
			{"lb_17_bk", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_uaz_3165M {
		vItemSpace = 80;
		conditions = "";
		price = 50000;
		textures[] = {
			{"simba_ao", {"civ","reb"}, "" },
			{"simba_b", {"civ","reb"}, "" },
			{"simba_bl", {"civ","reb"}, "" },
			{"simba_g", {"civ","reb"}, "" },
			{"simba_m", {"civ","reb"}, "" },
			{"simba_mm", {"civ","reb"}, "" },
			{"simba_r", {"civ","reb"}, "" },
			{"simba_s", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_pajero_07_1 {
		vItemSpace = 70;
		conditions = "";
		price = 550000;
		textures[] = {
			{"p_07_ao", {"civ","reb"}, "" },
			{"p_07_bo", {"civ","reb"}, "" },
			{"p_07_cq", {"civ","reb"}, "" },
			{"p_07_gs", {"civ","reb"}, "" },
			{"p_07_b", {"civ","reb"}, "" },
			{"p_07_p", {"civ","reb"}, "" },
			{"p_07_mb", {"civ","reb"}, "" },
			{"p_07_ma", {"civ","reb"}, "" },
			{"p_07_sq", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_pajero_07_38_VIP1 {
		vItemSpace = 70;
		conditions = "";
		price = 850000;
		textures[] = {
			{"p_07_ao", {"civ","reb"}, "" },
			{"p_07_bo", {"civ","reb"}, "" },
			{"p_07_cq", {"civ","reb"}, "" },
			{"p_07_gs", {"civ","reb"}, "" },
			{"p_07_b", {"civ","reb"}, "" },
			{"p_07_p", {"civ","reb"}, "" },
			{"p_07_mb", {"civ","reb"}, "" },
			{"p_07_ma", {"civ","reb"}, "" },
			{"p_07_sq", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_pajero_07_PE {
		vItemSpace = 70;
		conditions = "";
		price = 1150000;
		textures[] = {
			{"p_07_ao", {"civ","reb"}, "" },
			{"p_07_bo", {"civ","reb"}, "" },
			{"p_07_cq", {"civ","reb"}, "" },
			{"p_07_gs", {"civ","reb"}, "" },
			{"p_07_b", {"civ","reb"}, "" },
			{"p_07_p", {"civ","reb"}, "" },
			{"p_07_mb", {"civ","reb"}, "" },
			{"p_07_ma", {"civ","reb"}, "" },
			{"p_07_sq", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_fiesta_16_230 {
		vItemSpace = 50;
		conditions = "";
		price = 135000;
		textures[] = {
			{"reb_camo", {"reb"}, "" },
			{"reb_camo10", {"reb"}, "call life_donator) > 0" },
			{"reb_camo3", {"reb"}, "" },
			{"reb_camo4", {"reb"}, "" },
			{"reb_camo5", {"reb"}, "call life_donator) > 0" },
			{"reb_camo6", {"reb"}, "call life_donator) > 0" },
			{"reb_camo7", {"reb"}, "call life_donator) > 0" },
			{"reb_camo9", {"reb"}, "call life_donator) > 2" },
			{"reb_c_vip", {"reb"}, "call life_donator) > 1" },
			{"reb_wint", {"reb"}, "call life_donator) > 0" },
			{"reb_wint_v", {"reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_focus_14_H_13 {
		vItemSpace = 50;
		conditions = "";
		price = 100000;
		textures[] = {
			{"reb_camo", {"reb"}, "" },
			{"reb_camo10", {"reb"}, "call life_donator) > 0" },
			{"reb_camo3", {"reb"}, "" },
			{"reb_camo4", {"reb"}, "" },
			{"reb_camo5", {"reb"}, "call life_donator) > 0" },
			{"reb_camo6", {"reb"}, "call life_donator) > 0" },
			{"reb_camo7", {"reb"}, "call life_donator) > 0" },
			{"reb_camo9", {"reb"}, "call life_donator) > 2" },
			{"reb_c_vip", {"reb"}, "call life_donator) > 1" },
			{"reb_wint", {"reb"}, "call life_donator) > 0" },
			{"reb_wint_v", {"reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_nemises_taurus_dur_10 {
		vItemSpace = 50;
		conditions = "";
		price = 190000;
		textures[] = {
			{"reb_camo", {"reb"}, "" },
			{"reb_camo10", {"reb"}, "call life_donator) > 0" },
			{"reb_camo3", {"reb"}, "" },
			{"reb_camo4", {"reb"}, "" },
			{"reb_camo5", {"reb"}, "call life_donator) > 0" },
			{"reb_camo6", {"reb"}, "call life_donator) > 0" },
			{"reb_camo7", {"reb"}, "call life_donator) > 0" },
			{"reb_camo9", {"reb"}, "call life_donator) > 2" },
			{"reb_c_vip", {"reb"}, "call life_donator) > 1" },
			{"reb_wint", {"reb"}, "call life_donator) > 0" },
			{"reb_wint_v", {"reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_clubman_T {
		vItemSpace = 50;
		conditions = "";
		price = 190000;
		textures[] = {
			{"reb_camo", {"reb"}, "" },
			{"reb_camo10", {"reb"}, "call life_donator) > 0" },
			{"reb_camo3", {"reb"}, "" },
			{"reb_camo4", {"reb"}, "" },
			{"reb_camo5", {"reb"}, "call life_donator) > 0" },
			{"reb_camo6", {"reb"}, "call life_donator) > 0" },
			{"reb_camo7", {"reb"}, "call life_donator) > 0" },
			{"reb_camo9", {"reb"}, "call life_donator) > 2" },
			{"reb_c_vip", {"reb"}, "call life_donator) > 1" },
			{"reb_wint", {"reb"}, "call life_donator) > 0" },
			{"reb_wint_v", {"reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_nemises_willys {
		vItemSpace = 50;
		conditions = "";
		price = 30000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_nemises_kodiaq_amb_17 {
		vItemSpace = 60;
		conditions = "";
		price = 620000;
		textures[] = {
			{"reb_camo", {"reb"}, "" },
			{"reb_camo10", {"reb"}, "call life_donator) > 0" },
			{"reb_camo3", {"reb"}, "" },
			{"reb_camo4", {"reb"}, "" },
			{"reb_camo5", {"reb"}, "call life_donator) > 0" },
			{"reb_camo6", {"reb"}, "call life_donator) > 0" },
			{"reb_camo7", {"reb"}, "call life_donator) > 0" },
			{"reb_camo9", {"reb"}, "call life_donator) > 2" },
			{"reb_c_vip", {"reb"}, "call life_donator) > 1" },
			{"reb_wint", {"reb"}, "call life_donator) > 0" },
			{"reb_wint_v", {"reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_pajero_07_5 {
		vItemSpace = 60;
		conditions = "";
		price = 380000;
		textures[] = {
			{"reb_camo", {"reb"}, "" },
			{"reb_camo10", {"reb"}, "call life_donator) > 0" },
			{"reb_camo3", {"reb"}, "" },
			{"reb_camo4", {"reb"}, "" },
			{"reb_camo5", {"reb"}, "call life_donator) > 0" },
			{"reb_camo6", {"reb"}, "call life_donator) > 0" },
			{"reb_camo7", {"reb"}, "call life_donator) > 0" },
			{"reb_camo9", {"reb"}, "call life_donator) > 2" },
			{"reb_c_vip", {"reb"}, "call life_donator) > 1" },
			{"reb_wint", {"reb"}, "call life_donator) > 0" },
			{"reb_wint_v", {"reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_tahoe_08 {
		vItemSpace = 60;
		conditions = "";
		price = 1265000;
		textures[] = {
			{"reb_camo", {"reb"}, "" },
			{"reb_camo10", {"reb"}, "call life_donator) > 0" },
			{"reb_camo3", {"reb"}, "" },
			{"reb_camo4", {"reb"}, "" },
			{"reb_camo5", {"reb"}, "call life_donator) > 0" },
			{"reb_camo6", {"reb"}, "call life_donator) > 0" },
			{"reb_camo7", {"reb"}, "call life_donator) > 0" },
			{"reb_camo9", {"reb"}, "call life_donator) > 2" },
			{"reb_c_vip", {"reb"}, "call life_donator) > 1" },
			{"reb_wint", {"reb"}, "call life_donator) > 0" },
			{"reb_wint_v", {"reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_durango_18_MAW2 {
		vItemSpace = 60;
		conditions = "";
		price = 1300000;
		textures[] = {
			{"reb_camo", {"reb"}, "" },
			{"reb_camo10", {"reb"}, "call life_donator) > 0" },
			{"reb_camo3", {"reb"}, "" },
			{"reb_camo4", {"reb"}, "" },
			{"reb_camo5", {"reb"}, "call life_donator) > 0" },
			{"reb_camo6", {"reb"}, "call life_donator) > 0" },
			{"reb_camo7", {"reb"}, "call life_donator) > 0" },
			{"reb_camo9", {"reb"}, "call life_donator) > 2" },
			{"reb_c_vip", {"reb"}, "call life_donator) > 1" },
			{"reb_wint", {"reb"}, "call life_donator) > 0" },
			{"reb_wint_v", {"reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_nemises_lm002_MAW {
		vItemSpace = 60;
		conditions = "";
		price = 2340000;
		textures[] = {
			{"reb_camo", {"reb"}, "" },
			{"reb_camo10", {"reb"}, "call life_donator) > 0" },
			{"reb_camo3", {"reb"}, "" },
			{"reb_camo4", {"reb"}, "" },
			{"reb_camo5", {"reb"}, "call life_donator) > 0" },
			{"reb_camo6", {"reb"}, "call life_donator) > 0" },
			{"reb_camo7", {"reb"}, "call life_donator) > 0" },
			{"reb_camo9", {"reb"}, "call life_donator) > 2" },
			{"reb_c_vip", {"reb"}, "call life_donator) > 1" },
			{"reb_wint", {"reb"}, "call life_donator) > 0" },
			{"reb_wint_v", {"reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_qx56_ht_13 {
		vItemSpace = 70;
		conditions = "";
		price = 1360000;
		textures[] = {
			{"reb_camo", {"reb"}, "" },
			{"reb_camo10", {"reb"}, "call life_donator) > 0" },
			{"reb_camo3", {"reb"}, "" },
			{"reb_camo4", {"reb"}, "" },
			{"reb_camo5", {"reb"}, "call life_donator) > 0" },
			{"reb_camo6", {"reb"}, "call life_donator) > 0" },
			{"reb_camo7", {"reb"}, "call life_donator) > 0" },
			{"reb_camo9", {"reb"}, "call life_donator) > 2" },
			{"reb_c_vip", {"reb"}, "call life_donator) > 1" },
			{"reb_wint", {"reb"}, "call life_donator) > 0" },
			{"reb_wint_v", {"reb"}, "" }
		};
		materials[] = {};
	};
	
	
	class vet_ShipS_01_Boat {
		vItemSpace = 1000;
		conditions = "";
		price = 190000;
		textures[] = {};
		materials[] = {};
	};
	
	class C_Fishing_Trawler {
		vItemSpace = 1600;
		conditions = "";
		price = 300000;
		textures[] = {};
		materials[] = {};
	};
	
	class vet_shallop_02 {
		vItemSpace = 600;
		conditions = "";
		price = 80000;
		textures[] = {};
		materials[] = {};
	};
	
	class vet_shallop_01 {
		vItemSpace = 300;
		conditions = "";
		price = 40000;
		textures[] = {};
		materials[] = {};
	};
	
	class NH90Marine {
		vItemSpace = 1000;
		conditions = "";
		price = 3500000;
		textures[] = {};
		materials[] = {};
	};
	
	class ARMSCor_A109_Civ {
		vItemSpace = 200;
		conditions = "";
		price = 1500000;
		textures[] = {};
		materials[] = {};
	};
	
	class IVORY_BELL512 {
		vItemSpace = 400;
		conditions = "";
		price = 2000000;
		textures[] = {};
		materials[] = {};
	};
	
	class C_Plane_Civil_01_racing_F {
		vItemSpace = 400;
		conditions = "";
		price = 1300000;
		textures[] = {};
		materials[] = {};
	};
	
	class d3s_AS_365 {
		vItemSpace = 400;
		conditions = "";
		price = 3000000;
		textures[] = {};
		materials[] = {};
	};
	
	class ivory_yak42d_1 {
		vItemSpace = 3000;
		conditions = "";
		price = 10000000;
		textures[] = {};
		materials[] = {};
	};
	
	class IVORY_ERJ135_1 {
		vItemSpace = 3000;
		conditions = "";
		price = 15000000;
		textures[] = {};
		materials[] = {};
	};
	
	class M_AS350_CIV {
		vItemSpace = 400;
		conditions = "";
		price = 2500000;
		textures[] = {};
		materials[] = {};
	};
	
	class M_AS350_EMS {
		vItemSpace = 200;
		conditions = "";
		price = 50000;
		textures[] = {};
		materials[] = {};
	};
	
	class M_AS350_SHERIFF {
		vItemSpace = 400;
		conditions = "";
		price = 50000;
		textures[] = {};
		materials[] = {};
	};
	
	class Skry_Lamborghini_Huracan {
		vItemSpace = 50;
		conditions = "";
		price = 3800000;
		textures[] = {
			{"colr_1", {"civ","reb"}, "" },
			{"colr_2", {"civ","reb"}, "" },
			{"colr_3", {"civ","reb"}, "" },
			{"colr_4", {"civ","reb"}, "" },
			{"colr_5", {"civ","reb"}, "" },
			{"colr_6", {"civ","reb"}, "" },
			{"colr_7", {"civ","reb"}, "" },
			{"colr_8", {"civ","reb"}, "" },
			{"colr_9", {"civ","reb"}, "" },
			{"colr_10", {"civ","reb"}, "" },
			{"colr_11", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class AlessioTouareg {
		vItemSpace = 50;
		conditions = "";
		price = 1500000;
		textures[] = {
			{"colr_1", {"civ","reb"}, "" },
			{"colr_2", {"civ","reb"}, "" },
			{"colr_3", {"civ","reb"}, "" },
			{"colr_4", {"civ","reb"}, "" },
			{"colr_5", {"civ","reb"}, "" },
			{"colr_6", {"civ","reb"}, "" },
			{"colr_7", {"civ","reb"}, "" },
			{"colr_8", {"civ","reb"}, "" },
			{"colr_9", {"civ","reb"}, "" },
			{"colr_10", {"civ","reb"}, "" },
			{"colr_11", {"civ","reb"}, "" }
		};
		materials[] = {};
	};
	
	class d3s_nemises_wrx_sti_17_maw {
		vItemSpace = 70;
		conditions = "";
		price = 100000;
		textures[] = {};
		materials[] = {};
	};
	
	class pop_volvo_camion_sin {
		vItemSpace = 50;
		conditions = "";
		price = 550000;
		textures[] = {};
		materials[] = {};
	};
	
};