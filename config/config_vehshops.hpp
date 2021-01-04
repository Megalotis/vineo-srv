class LifeCfgVehShops {
	class kart_shop {
		side = "civ";
		conditions = "license_civ_driver";
		conditionsMessage = "Необходима лицензия водителя";
		multiplier = 1;
		vehicles[] = {
			{ "C_Kart_01_Blu_F", "" },
			{ "C_Kart_01_Fuel_F", "" },
			{ "C_Kart_01_Red_F", "" },
			{ "C_Kart_01_Vrana_F", "" }
		};
	};

	class med_shop {
		side = "med";
		conditions = "";
		conditionsMessage = "";
		multiplier = 0.06;
		vehicles[] = {
			{ "d3s_tahoe_EMS", "life_medicLevel > 0" },
			{ "GM_TAURUS_EMS", "life_medicLevel > 0" },
			{ "GM_SAVANA_EMS", "life_medicLevel > 0" },
			{ "GM_EXPLORER_EMS", "life_medicLevel > 1" },
			{ "GM_CHARGER_EMS", "life_medicLevel > 2" },
			{ "Ark_Ambulance", "life_medicLevel > 2" },
			{ "O_MRAP_02_F", "life_medicLevel > 3" },
			{ "I_MRAP_03_F", "life_medicLevel > 4" }
		};
	};

	class med_air_hs {
		side = "med";
		conditions = "";
		conditionsMessage = "";
		multiplier = 0.06;
		vehicles[] = {
			{ "B_Heli_Light_01_F", "" },
			{ "EMS_helo", "life_medicLevel > 0" },
			{ "REGA_EC635", "life_medicLevel > 1" },
			{ "IVORY_BELL512_RESCUE", "life_medicLevel > 2" },
			{ "M_AS350_EMS", "life_medicLevel > 2" },
			{ "O_Heli_Light_02_unarmed_F", "life_medicLevel > 3" },
			{ "B_Heli_Transport_03_unarmed_F", "life_medicLevel > 4" }
		};
	};

	class civ_car {
		side = "civ";
		conditions = "license_civ_driver";
		conditionsMessage = "Необходима лицензия водителя";
		multiplier = 1;
		vehicles[] = {
			{ "gac_jsdf_klx", "" },
			{ "d3s_giulia_quad_16", "" }
		};
	};

	class reb_car {
		side = "reb";
		conditions = "license_reb_driver";
		conditionsMessage = "Необходима лицензия водителя";
		multiplier = 1;
		vehicles[] = {
			{ "gac_jsdf_klx", "" },
			{ "d3s_fiesta_16_230", "" },
			{ "d3s_focus_14_H_13", "" },
			{ "d3s_nemises_taurus_dur_10", "" },
			{ "d3s_clubman_T", "" },
			{ "d3s_nemises_willys", "" },
			{ "d3s_nemises_kodiaq_amb_17", "" },
			{ "d3s_pajero_07_5", "" },
			{ "d3s_tahoe_08", "" },
			{ "d3s_durango_18_MAW2", "" },
			{ "d3s_nemises_lm002_MAW", "" },
			{ "d3s_qx56_ht_13", "" },
			
			{ "B_mas_cars_Hilux_Unarmed", "(call life_donator) > 0" },
			{ "B_mas_cars_Hilux_M2", "(call life_donator) > 0" },
			{ "B_mas_cars_LR_Unarmed", "(call life_donator) > 0" },
			{ "O_MRAP_02_F", "(call life_donator) > 2" }
		};
	};
	
	class europ_car {
		side = "civ";
		conditions = "license_civ_driver";
		conditionsMessage = "Необходима лицензия водителя";
		multiplier = 1;
		vehicles[] = {
			{ "d3s_giulia_quad_16", "" },
			{ "d3s_giulia_16_SE", "" },
			{ "d3s_giulietta_16", "" },
			{ "quiet_Bugatti_blanche_f", "" },
			{ "d3s_fpace_17", "" },
			{ "d3s_nemises_xe_15", "" },
			{ "AlessioAventador", "" },
			{ "Skry_Lamborghini_Huracan", "" },
			{ "AlessioGallardo", "" },
			{ "d3s_ghibli_14", "" },
			{ "CarlosMini", "" },
			{ "CarlosMiniTuned", "" },
			{ "TM_Porsche_911", "" },
			{ "d3s_nemises_kodiaq_17", "" },
			{ "AlessioTouareg", "" },
			{ "d3s_levante_17", "" },
			{ "Ark_Isettared", "" },
			
			{ "d3s_fpace_17_s", "(call life_donator) > 0" },
			{ "d3s_nemises_xes_15", "(call life_donator) > 0" },
			{ "d3s_nemises_lm002_90", "(call life_donator) > 0" },
			{ "d3s_nemises_evoque_td4_16", "(call life_donator) > 1" },
			{ "d3s_nemises_kodiaq_act_17", "(call life_donator) > 0" },
			{ "d3s_nemises_kodiaq_sport_17", "(call life_donator) > 1" },
			{ "d3s_nemises_urus_12", "(call life_donator) > 2" },
			{ "d3s_levante_s_17_mat", "(call life_donator) > 3" },
			{ "d3s_ghost_18_EWB", "(call life_donator) > 3" }
		};
	};
	
	class ger_car {
		side = "civ";
		conditions = "license_civ_driver";
		conditionsMessage = "Необходима лицензия водителя";
		multiplier = 1;
		vehicles[] = {
			{ "AlessioR8", "" },
			{ "IVORY_R8SPYDER", "" },
			{ "Quiet_v2_r8plus_blanche_f", "" },
			{ "AlessioRS4", "" },
			{ "Jonzie_30CSL", "" },
			{ "d3s_nemises_f87_17", "" },
			{ "d3s_nemises_f87_17_m", "" },
			{ "d3s_nemises_f80_14", "" },
			{ "AlessioBM4", "" },
			{ "d3s_f90_18", "" },
			{ "d3s_f85_15_m", "" },
			{ "d3s_f13_13", "" },
			{ "d3s_amazing_a45_16", "" },
			{ "d3s_nemises_gls63amg_17", "" },
			{ "d3s_nemises_vklasse_250amg_17", "" },
			{ "AlessioC63", "" },
			{ "AlessioC63N", "" },
			{ "d3s_nemises_cla_14", "" },
			{ "d3s_nemises_cla_250_15", "" },
			{ "d3s_e220_16", "" },
			{ "d3s_gl63amg_12", "" },
			{ "d3s_s350_13", "" },
			{ "AlessioM5", "" },
			{ "d3s_g63amg_16", "" },
			{ "d3s_gle43amg_15", "" },
			
			{ "d3s_nemises_f87_17_ACH", "(call life_donator) > 1" },
			{ "d3s_amazing_ACS8_17", "(call life_donator) > 0" },
			{ "d3s_nemises_f80_14_SE", "(call life_donator) > 0" },
			{ "d3s_nemises_f82_14_EX", "(call life_donator) > 0" },
			{ "d3s_amazing_f82_16", "(call life_donator) > 0" },
			{ "d3s_nemises_f82_14_gts", "(call life_donator) > 3" },
			{ "d3s_nemises_f90_18_FE", "(call life_donator) > 2" },
			{ "d3s_amazing_f10_12_FEMID", "(call life_donator) > 3" },
			{ "d3s_amazing_f10_12_EX", "(call life_donator) > 1" },
			{ "d3s_g65amg_Mansory", "(call life_donator) > 2" },
			{ "d3s_amazing_a45_16_EX", "(call life_donator) > 0" },
			{ "d3s_nemises_gls63amg_17_SE", "(call life_donator) > 3" },
			{ "d3s_nemises_cla_45amg_14", "(call life_donator) > 0" },
			{ "d3s_nemises_cla_45amg_15", "(call life_donator) > 0" },
			{ "d3s_e350_16", "(call life_donator) > 1" },
			{ "d3s_gl63amg_12_SE", "(call life_donator) > 3" },
			{ "d3s_s500_13", "(call life_donator) > 1" },
			{ "d3s_s65amg_14", "(call life_donator) > 2" },
			{ "d3s_e38_98L", "(call life_donator) > 0" },
			{ "d3s_e38_98", "(call life_donator) > 0" },
			{ "d3s_f86_15_OFF", "(call life_donator) > 3" },
			{ "d3s_f86_15_m", "(call life_donator) > 2" },
			{ "d3s_e89_12", "(call life_donator) > 1" },
			{ "d3s_g65amg_16", "(call life_donator) > 2" },
			{ "d3s_gle63amgS_15", "(call life_donator) > 3" },
			{ "d3s_g350d_15", "(call life_donator) > 3" }
		};
	};
	
	class usa_car {
		side = "civ";
		conditions = "license_civ_driver";
		conditionsMessage = "Необходима лицензия водителя";
		multiplier = 1;
		vehicles[] = {
			{ "d3s_ctsv_16", "" },
			{ "d3s_tahoe_vortec_08", "" },
			{ "d3s_charger_15", "" },
			{ "d3s_camaro_16", "" },
			{ "d3s_durango_18", "" },
			{ "d3s_crown_98", "" },
			{ "AlessioMustang", "" },
			{ "d3s_nemises_taurus_eco_10", "" },
			{ "d3s_nemises_savana_05", "" },
			{ "d3s_focus_14_ST", "" },
			{ "d3s_fiesta_16", "" },
			{ "d3s_focus_17", "" },
			
			{ "d3s_focus_17_LB", "(call life_donator) > 2" },
            { "d3s_escalade_16", "(call life_donator) > 1" },
			{ "d3s_tahoe_payday", "(call life_donator) > 2" },
			{ "d3s_tahoe_ltz_08", "(call life_donator) > 2" },
			{ "d3s_srthellcat_15", "(call life_donator) > 1" },
			{ "d3s_camaro_zl1_17", "(call life_donator) > 3" },
			{ "d3s_camaro_zl1_1le_18", "(call life_donator) > 3" },
			{ "d3s_durango_18_SRT", "(call life_donator) > 1" },
			{ "d3s_nemises_explorer_se_13", "(call life_donator) > 2" },
			{ "d3s_nemises_explorer_sport_13", "(call life_donator) > 1" },
			{ "d3s_nemises_model_a", "(call life_donator) > 3" },
			{ "d3s_boss_15", "(call life_donator) > 2" },
			{ "d3s_nemises_taurus_10_ex", "(call life_donator) > 2" },
			{ "d3s_nemises_savana_05_3", "(call life_donator) > 0" },
			{ "d3s_300C_12", "(call life_donator) > 1" },
			{ "d3s_300SRT_12", "(call life_donator) > 1" },
			{ "d3s_300S_12", "(call life_donator) > 1" },
			{ "d3s_raptor_17", "(call life_donator) > 1" },
			{ "d3s_raptor_SCR_17", "(call life_donator) > 2" }
		};
	};
	
	class japan_car {
		side = "civ";
		conditions = "license_civ_driver";
		conditionsMessage = "Необходима лицензия водителя";
		multiplier = 1;
		vehicles[] = {
			{ "d3s_nemises_q50_14", "" },
			{ "d3s_qx56_13", "" },	
			{ "d3s_nemises_QX60_16", "" },
			{ "AlessioIXMR", "" },
			{ "AlessioGTR", "" },	
			{ "d3s_nemises_wrx_17", "" },
			{ "d3s_nemises_is_16", "" },
			{ "d3s_civic_17", "" },
			{ "d3s_civic_17_R", "" },
			{ "d3s_pajero_07_1", "" },
			
			{ "d3s_nemises_q50_ER_14", "(call life_donator) > 1" },
			{ "d3s_qx56_13_SE", "(call life_donator) > 3" },
			{ "d3s_nemises_QX60_16_S", "(call life_donator) > 2" },
			{ "d3s_lx570_16_1", "(call life_donator) > 1" },
			{ "d3s_lx570_16_WALD", "(call life_donator) > 1" },
			{ "d3s_nemises_wrx_sti_17", "(call life_donator) > 0" },
			{ "d3s_civic_17_S", "(call life_donator) > 0" },
			{ "d3s_pajero_07_38_VIP1", "(call life_donator) > 1" },
			{ "d3s_pajero_07_PE", "(call life_donator) > 3" }
		};
	};
	
	class rus_car {
		side = "civ";
		conditions = "license_civ_driver";
		conditionsMessage = "Необходима лицензия водителя";
		multiplier = 1;
		vehicles[] = {
			{ "d3s_nemises_oka", "" },
			{ "d3s_nemises_vesta_15", "" },
			{ "d3s_nemises_niva_2329", "" },
			{ "d3s_nemises_3159", "" },
			{ "d3s_nemises_3303", "" },
			{ "d3s_patriot", "" },
			{ "d3s_uaz_469P", "" },
			{ "d3s_uaz_3162", "" },
			{ "d3s_uaz_3165M", "" },
			
			{ "d3s_nemises_3159_AMG", "(call life_donator) > 1" },
			{ "d3s_uaz_469P_EXP", "(call life_donator) > 1" }
		};
	};
	
	class civ_truck {
		side = "civ";
		conditions = "license_civ_truck";
		conditionsMessage = "Необходима лицензия водителя грузовика";
		multiplier = 1;
		vehicles[] = {
			// "C_Van_01_box_F", "" },
			{ "GeK_UAZ_3303", "" },
			{ "GeK_Zil_bleu", "" },
			//{ "shounka_a3_mantgs_2_in", "" },
			{ "ext_Jonzie_Tanker_Truck", "" },
			{ "ext_Jonzie_Box_Truck", "" },
			{ "d3s_nemises_vklasse_220_17", "" },
			{ "pop_volvo_camion", "" },
			{ "pop_volvo_camion_sin", "" },
			{ "d3s_zil_130_05", "" },
			{ "d3s_zil_130_02", "" },
			{ "d3s_zil_130_03", "" },
			{ "d3s_nemises_zil_131", "" },
			{ "d3s_nemises_zil_131_4", "" },
			{ "d3s_nemises_zil_131_3", "" },
			{ "d3s_nemises_zil_131_5", "" },
			{ "zil157_BORT", "" },
			{ "Zil157_fuel_tank", "" },
			{ "d3s_kamaz_2", "" },
			{ "d3s_kamaz_bocha", "" },
			{ "d3s_kamaz_tent_2", "" },
			{ "d3s_kamaz", "" },
			{ "d3s_kamaz_4350", "" },
			{ "d3s_kamaz_5350_bocha", "" },
			{ "d3s_kamaz_6350", "" },
			{ "d3s_kraz_6315", "" },
			{ "d3s_kraz_6316", "" },
			{ "d3s_maz_7429", "" },
			{ "d3s_nemises_next", "" },
			{ "d3s_nemises_next_bocha", "" },
			{ "d3s_next_tent", "" },
			
			{ "d3s_actros_14", "(call life_donator) > 1" },
			{ "d3s_actros_14_cistern", "(call life_donator) > 1" },
			{ "d3s_actros_14_big", "(call life_donator) > 2" },
			{ "d3s_actros_14_big_cistern", "(call life_donator) > 2" },
			{ "d3s_actros_14_giga", "(call life_donator) > 3" },
			{ "d3s_actros_14_giga_cistern", "(call life_donator) > 3" },
			{ "I_mas_cars_Ural", "(call life_donator) > 0" },
			{ "I_mas_cars_Ural_open", "(call life_donator) > 0" },
			{ "I_mas_cars_Ural_fuel", "(call life_donator) > 0" }
		};
	};

	class reb_truck {
		side = "reb";
		conditions = "license_reb_truck";
		conditionsMessage = "Необходима лицензия водителя грузовика";
		multiplier = 1;
		vehicles[] = {
			{ "I_Truck_02_transport_F", "" },
			{ "GeK_UAZ_3303", "" },
			{ "I_Truck_02_covered_F", "" },
			{ "O_Truck_02_fuel_F", "" },
			{ "B_Truck_01_transport_F", "" },
			{ "B_Truck_01_covered_F", "" },
			{ "O_Truck_03_transport_F", "" },
			{ "O_Truck_03_covered_F", "" },
			{ "O_Truck_03_fuel_F", "" },
			{ "B_Truck_01_box_F", "" },
			{ "B_Truck_01_fuel_F", "" },
			//{ "O_Truck_03_device_F", "" },
			//{ "shounka_a3_mantgs_2_in", "" },
			{ "shounka_a3_renaultmagnum_f", "" },
			{ "d3s_kamaz_MAW_1", "" },
			{ "d3s_kamaz_bocha_MAW_1", "" },
			{ "d3s_kamaz_4310_med", "" },
			{ "d3s_nemises_kraz_6316", "" },
			{ "d3s_nemises_ural", "" },
			{ "Zil157_fuel_tank", "" },
			
			{ "I_mas_cars_Ural", "(call life_donator) > 0" },
			{ "I_mas_cars_Ural_open", "(call life_donator) > 0" },
			{ "I_mas_cars_Ural_fuel", "(call life_donator) > 0" }
		};
	};

	class civ_air {
		side = "civ";
		conditions = "license_civ_air";
		conditionsMessage = "Необходима лицензия пилота";
		multiplier = 1;
		vehicles[] = {
			{ "C_Heli_Light_01_civil_F", "" },
			{ "B_Heli_Light_01_F", "" },
			{ "O_Heli_Light_02_unarmed_F", "" },
			{ "I_Heli_Transport_02_F", "" },
			{ "O_Heli_Transport_04_covered_F", "" },
			{ "O_Heli_Transport_04_box_F", "" },
			{ "O_Heli_Transport_04_fuel_F", "" },
			{ "ARMSCor_A109_Civ", "" },
			{ "IVORY_BELL512", "" },
			{ "d3s_AS_365", "" },
			
			{ "M_AS350_CIV", "(call life_donator) > 1" },
			{ "NH90Marine", "(call life_donator) > 2" },
			{ "B_Heli_Transport_03_unarmed_F", "(call life_donator) > 1" }
		};
	};

	class reb_air: civ_air {
		side = "reb";
		conditions = "license_reb_air";
	};

	class vip_civcar {
		side = "civ";
		conditions = "(call life_donator) > 0";
		conditionsMessage = "Необходимо членство в вип-клубе";
		multiplier = 1;
		vehicles[] = {
			{ "d3s_nemises_3159_AMG", "" }

		};
	};

	class vip_rebcar: vip_civcar {
		side = "reb";
	};

	class civ_ship {
		side = "civ";
		conditions = "license_civ_boat";
		conditionsMessage = "Лицензия моряка";
		multiplier = 1;
		vehicles[] = {
			{ "ext_sab_boat", "" },
			{ "C_Rubberboat", "" },
			{ "vet_shallop_01", "" },
			{ "vet_shallop_02", "" },
			{ "C_Boat_Civil_01_F", "" },
			{ "GeK_Ferry", "" },
			{ "Shalllop", "" },
			{ "C_Fishing_Boat", "" },
			{ "vet_ShipS_01_Boat", "" },
			//{ "C_Fishing_Trawler", "" },
			{ "B_SDV_01_F", "(call life_donator) > 1" },
			{ "extremo_lcm", "(call life_donator) > 1" }
		};
	};

	class reb_ship {
		side = "reb";
		conditions = "license_reb_boat";
		conditionsMessage = "Лицензия моряка";
		multiplier = 1;
		vehicles[] = {
			{ "ext_sab_boat", "" },
			{ "I_Boat_Transport_01_F", "" },
			{ "C_Boat_Civil_01_F", "" },
			{ "vet_shallop_01", "" },
			{ "vet_shallop_02", "" },
			{ "Shalllop", "" },
			{ "C_Fishing_Boat", "" },
			{ "vet_ShipS_01_Boat", "" },
			{ "C_Fishing_Trawler", "" },
			{ "I_SDV_01_F", "(call life_donator) > 0" },
			{ "extremo_lcm", "(call life_donator) > 0" }
		};
	};

	class cop_car {
		side = "cop";
		conditions = "!(life_coplevel in [19,20,21,22,23])";
		conditionsMessage = "Только для сотрудников полиции";
		multiplier = 0.25;
		vehicles[] = {
			{ "d3s_crown_98_PD_blue", "life_coplevel > 0" },
			{ "d3s_nemises_savana_PSV", "life_coplevel > 1" },
			{ "d3s_nemises_taurus_FPI_10", "life_coplevel > 2" },
			{ "d3s_tahoe_PPV_2", "life_coplevel > 3"},
			{ "d3s_charger_15_CPP", "life_coplevel > 4" },
			{ "d3s_nemises_FPIU_13", "life_coplevel > 5" },
			{ "d3s_durango_18_DDPI", "life_coplevel > 6" },
			{ "d3s_srthellcat_15_CPST", "life_coplevel > 7" },
			{ "d3s_charger_15_CPST", "life_coplevel > 7" },
			{ "d3s_srthellcat_15_UNM", "life_coplevel > 8" },
			{ "d3s_nemises_taurus_UNM_10", "life_coplevel > 8" },
			{ "d3s_charger_15_CPU", "life_coplevel > 8" },
			{ "d3s_tahoe_UNM", "life_coplevel > 8" },
			{ "d3s_durango_18_UNM", "life_coplevel > 8" },
			{ "d3s_nemises_explorer_UNM_13", "life_coplevel > 8" },
			{ "np_cherokee_p", "life_coplevel > 8" },
			{ "B_MRAP_01_F", "life_coplevel > 9" },
			{ "d3s_giulia_q4_16_FSB", "life_coplevel > 10" },
			{ "d3s_nemises_f90_18_FSB", "life_coplevel > 10" },
			{ "d3s_nemises_C450_15_FSB", "life_coplevel > 10" },
			{ "d3s_e400_16_FSB", "life_coplevel > 10" },
			{ "d3s_nemises_gls63amg_17_FSB", "life_coplevel > 10" },
			{ "d3s_nemises_vklasse_17_FSB", "life_coplevel > 10" },
			{ "d3s_lx570_16_KaCkaD", "life_coplevel > 10" },
			{ "d3s_nemises_urus_FSB_12", "life_coplevel > 10" },
			{ "d3s_levante_FSB_17", "life_coplevel > 10" },
			{ "d3s_f86_15_UNM", "life_coplevel > 10" },
			{ "d3s_boss_15_COP", "life_coplevel > 11" },
			{ "d3s_boss_15_UNM", "life_coplevel > 11" },
			{ "d3s_ctsv_16_unm", "life_coplevel > 11" },
			{ "d3s_tahoe_SHERIFF", "life_coplevel > 11" },
			{ "d3s_amazing_f10_12_COP", "life_coplevel > 11" },
			{ "d3s_300_12_UNM", "life_coplevel > 13" }
		};
	};

	class swat_car {
		side = "cop";
		conditions = "life_coplevel == 23";
		conditionsMessage = "Только для сотрудников S.W.A.T";
		multiplier = 0.25;
		vehicles[] = {
			{ "vet_GAZ_2975_Tiger_special_version", ""},
			{ "PMC_Offroad_Transport", "" },
			{ "Mrshounka_a3_dodge15_civ", "" },
			{ "Mrshounka_a3_rs_gend", "" },
			{ "shounka_a3_gendsprinter", "" },
			{ "Mrshounka_rs_2015_g", "" },
			{ "shounka_a3_suburbangign", "" },
			{ "O_MRAP_02_F", "" },
			{ "I_MRAP_03_F", "" },
			{ "B_mas_HMMWV_M2", "" }
		};
	};

	class dea_car {
		side = "cop";
		conditions = "life_coplevel == 22";
		conditionsMessage = "Только для сотрудников DEA";
		multiplier = 0.25;
		vehicles[] = {
			{ "I_MRAP_03_F", "" },
			{ "O_MRAP_02_F", "" }
		};
	};

	class crimi_car {
		side = "cop";
		conditions = "life_coplevel in [20,21]";
		conditionsMessage = "Только для SHERIFF и DETECTIVE";
		multiplier = 0.25;
		vehicles[] = {
			{ "Mrjeffery_bmw_gend", "life_coplevel == 20" },
			{ "jeffery_a3_audiq7_v2_gendarmerie", "life_coplevel == 20" },
			{ "Jeffery_a3_508gend", "life_coplevel == 20" },
			{ "shounka_a3_rs5_civ", "life_coplevel == 21" },
			{ "Mrshounka_rs4_civ", "life_coplevel == 21" },
			{ "Mrshounka_evox_civ", "life_coplevel == 21" },
			{ "Mrshounka_a3_308_civ", "life_coplevel == 21" },
			{ "shounka_a3_peugeot508_civ", "life_coplevel == 21" },
			{ "SIG_SuperBeeB", "life_coplevel == 21 && (call life_donator) > 0" },
			{ "Mrshounka_a3_dodge15_civ", "life_coplevel == 21" }
		};
	};

	class dea_air {
		side = "cop";
		conditions = "life_coplevel == 22";
		conditionsMessage = "Только для сотрудников DEA";
		multiplier = 0.25;
		vehicles[] = {
			{ "B_Heli_Light_01_F", "" },
			{ "B_mas_UH1Y_UNA_F", "" }
		};
	};

	class cop_air {
		side = "cop";
		conditions = "";
		conditionsMessage = "";
		multiplier = 0.25;
		vehicles[] = {
			{ "MELB_H6M", "life_coplevel > 0" },
			{ "ARMSCor_A109LUH_B", "life_coplevel > 1" },
			{ "O_Heli_Light_02_unarmed_F", "life_coplevel > 4" },
			{ "EC635_Unarmed", "life_coplevel > 7" },
			{ "MELB_MH6M", "life_coplevel > 9" },
			{ "IVORY_UH1Y_UNARMED", "life_coplevel > 9" },
			{ "d3s_AS_565", "life_coplevel > 10" },
			{ "M_AS350_SHERIFF", "life_coplevel > 11" },
			{ "B_Heli_Transport_01_F", "life_coplevel > 13" }
		};
	};

	class swat_air {
		side = "cop";
		conditions = "life_coplevel == 23";
		conditionsMessage = "Только для сотрудников SWAT";
		multiplier = 0.25;
		vehicles[] = {
			{ "B_Heli_Light_01_F", "" },
			{ "I_Heli_light_03_unarmed_F", "" },
			{ "B_Heli_Transport_03_unarmed_F", "" },
			{ "B_mas_UH1Y_UNA_F", "" }
		};
	};

	class cop_air_hq {
		side = "cop";
		conditions = "";
		conditionsMessage = "";
		multiplier = 0.25;
		vehicles[] = {
			{ "B_Heli_Transport_01_F", "life_coplevel > 13" }
		};
	};

	class cop_ship {
		side = "cop";
		conditions = "";
		conditionsMessage = "";
		multiplier = 0.25;
		vehicles[] = {
			{ "B_Boat_Transport_01_F", "life_coplevel > 1" },
			{ "C_Boat_Civil_01_police_F", "life_coplevel > 1" },
			{ "B_Boat_Armed_01_minigun_F", "life_coplevel > 2" },
			{ "B_SDV_01_F", "life_coplevel > 2" }
		};
	};

	class donat_civair {
		side = "civ";
		conditions = "license_civ_air";
		conditionsMessage = "Необходимо членство в вип-клубе";
		multiplier = 1;
		vehicles[] = {
			{ "C_Plane_Civil_01_F", "(call life_donator) > 1" },
			{ "C_Plane_Civil_01_racing_F", "(call life_donator) > 1" },
			{ "I_Plane_Fighter_03_AA_F", "(call life_donator) > 3" }
			//{ "ivory_yak42d_1", "" },
			//{ "IVORY_ERJ135_1", "" }
		};
	};
	class donat_rebair: donat_civair {
		side = "reb";
	};

	class aff_car {
		side = "reb";
		conditions = "license_reb_aff";
		conditionsMessage = "";
		multiplier = 1;
		vehicles[] = {
			{ "B_G_Offroad_01_armed_F", "life_reblevel > 1" },
			{ "O_MRAP_02_F", "life_reblevel > 1" },
			{ "B_mas_HMMWV_ISF", "life_reblevel > 1" },
			{ "B_mas_HMMWV_ISF_M2", "life_reblevel > 1" },
			{ "B_mas_UH1Y_UNA_F", "life_reblevel > 1" }
		};
	};
	class fb_car {
		side = "civ";
		conditions = "license_civ_fb";
		conditionsMessage = "";
		multiplier = 1;
		vehicles[] = {
			{ "O_MRAP_02_F", "" },
			{ "B_mas_HMMWV_M2", "life_civlevel > 1" },
			{ "Mrshounka_corbillard_c_bleufonce", "life_civlevel > 1" },
			{ "B_mas_UH1Y_UNA_F", "life_civlevel > 1" }
		};
	};
	class vl_car {
		side = "civ";
		conditions = "license_civ_vl";
		conditionsMessage = "";
		multiplier = 1;
		vehicles[] = {
			{ "O_MRAP_02_F", "" },
			{ "B_mas_HMMWV_M2", "life_civlevel > 1" },
			{ "B_mas_UH1Y_UNA_F", "life_civlevel > 1" }
		};
	};

	class ira_car {
		side = "civ";
		conditions = "license_civ_ira";
		conditionsMessage = "";
		multiplier = 1;
		vehicles[] = {
			//{ "ext_ivory_wrx", "" },
			{ "O_MRAP_02_F", "" },
			{ "B_mas_HMMWV_ira_M2", "life_civlevel > 1" },
			{ "B_mas_UH1Y_UNA_F", "life_civlevel > 1" }
		};
	};

	class mc_car {
		side = "reb";
		conditions = "license_reb_mc";
		conditionsMessage = "";
		multiplier = 1;
		vehicles[] = {
			//{ "O_MRAP_02_F", "life_reblevel > 1" },
			//{ "B_mas_HMMWV_W_M2", "life_reblevel > 1" },
			//{ "B_mas_UH1Y_UNA_F", "life_reblevel > 1" }
			{ "ext_ivory_wrx", ""}
		};
	};

	class rfa_car {
		side = "reb";
		conditions = "license_reb_rfa";
		conditionsMessage = "";
		multiplier = 1;
		vehicles[] = {
			{ "d3s_nemises_wrx_sti_17_maw", "" }
		};
	};

	class led_car {
		side = "civ";
		conditions = "license_civ_led";
		conditionsMessage = "";
		multiplier = 0.25;
		vehicles[] = {
			{ "Altmerion_bmw_prok", "" },
			{ "Mrshounka_cherokee_noir", "" },
			{ "B_Heli_Light_01_F", "" }
		};
	};

	class arg_car {
		side = "reb";
		conditions = "license_reb_arg";
		conditionsMessage = "";
		multiplier = 1;
		vehicles[] = {
			{ "B_mas_HMMWV_ARG_M2", "life_reblevel > 1" },
			{ "B_mas_cars_LR_M2", "life_reblevel > 1" },
			{ "O_MRAP_02_F", "life_reblevel > 1" },
			{ "B_Heli_Light_01_F", "life_reblevel > 1" },
			{ "I_Heli_light_03_unarmed_F", "life_reblevel > 1" },
			{ "B_mas_UH1Y_UNA_F", "life_reblevel > 2" }
		};
	};

	class sdr_car {
		side = "reb";
		conditions = "license_reb_sdr";
		conditionsMessage = "";
		multiplier = 1;
		vehicles[] = {
			{ "B_mas_cars_LR_Unarmed", "" },
			{ "d3s_nemises_f82_14_LB", "" },
			{ "B_mas_UH1Y_UNA_F", "" }
		};
	};

	class nmd_car {
		side = "reb";
		conditions = "license_reb_nmd";
		conditionsMessage = "";
		multiplier = 1;
		vehicles[] = {
			{ "shounka_harley_a3", "" },
			{ "shounka_harley_a3_bleu", "" },
			{ "shounka_harley_a3_lolz", "" },
			{ "shounka_harley_a3_noir", "" },
			{ "shounka_harley_a3_rouge", "" },
			{ "xarley", "" }
		};
	};

	class press_car {
		side = "civ";
		conditions = "license_civ_press";
		conditionsMessage = "";
		multiplier = 0.25;
		vehicles[] = {
			//{ "C_Offroad_01_F", "" },
			{ "Mrshounka_Vandura_civ_7ch", "" },
			{ "dezkit_b206_ems", "" },
			{ "O_MRAP_02_F", "" }
		};
	};

	class taxi_car {
		side = "civ";
		conditions = "license_civ_taxi";
		conditionsMessage = "";
		multiplier = 1;
		vehicles[] = {
			{ "d3s_crown_98_T1", "" },
			{ "d3s_crown_98_T2", "" },
			{ "d3s_crown_98_T3", "" },
			{ "d3s_crown_98_T4", "" }
		};
	};

	class mfo_car {
		side = "reb";
		conditions = "license_reb_mfo";
		conditionsMessage = "";
		multiplier = 1;
		vehicles[] = {
			/*{ "O_MRAP_02_F", "" },
			{ "B_mas_HMMWV_M2", "" },
			{ "B_mas_UH1Y_UNA_F", "" }*/
		};
	};

	class nsb_car {
		side = "reb";
		conditions = "license_reb_nsb";
		conditionsMessage = "";
		multiplier = 1;
		vehicles[] = {
			//{ "O_MRAP_02_F", "life_reblevel > 1" },
			{ "I_MRAP_03_F", "life_reblevel > 1" },
			//{ "B_mas_HMMWV_M2", "life_reblevel > 1" },
			{ "B_Heli_Light_01_F", "life_reblevel > 1" },
			{ "B_mas_HMMWV_M134_des", "life_reblevel > 2" }
			//{ "I_Heli_light_03_unarmed_F", "life_reblevel > 2" }
		};
	};

	class la_car {
		side = "reb";
		conditions = "license_reb_la";
		conditionsMessage = "";
		multiplier = 1;
		vehicles[] = {
			{ "O_MRAP_02_F", "life_reblevel > 1" },
			{ "B_mas_HMMWV_LA_M2", "life_reblevel > 2" },
			{ "B_mas_UH1Y_UNA_F", "life_reblevel > 1" }
		};
	};

	class ccp_car {
		side = "civ";
		conditions = "license_civ_ccp";
		conditionsMessage = "";
		multiplier = 1;
		vehicles[] = {
			{ "O_MRAP_02_F", "" },
			{ "B_mas_HMMWV_CCP_M2", "" },
			{ "I_Heli_light_03_unarmed_F", "life_civlevel > 1" }
		};
	};

	class ccp_ship {
		side = "civ";
		conditions = "license_civ_ccp";
		conditionsMessage = "";
		multiplier = 0.85;
		vehicles[] = {
			{ "I_Boat_Armed_01_minigun_F", "life_civlevel > 1" }
		};
	};

	class ics_car {
		side = "civ";
		conditions = "license_civ_ics";
		conditionsMessage = "";
		multiplier = 1;
		vehicles[] = {
			{ "O_MRAP_02_F", "" },
			{ "B_Heli_Light_01_F", "" },
			{ "quiet_sub2015_noir_f", "life_civlevel > 1" },
			{ "B_mas_HMMWV_ICS_M2", "life_civlevel > 1" },
			{ "B_mas_UH1Y_UNA_F", "life_civlevel > 1" },
			{ "I_Heli_light_03_unarmed_F", "life_civlevel > 1" }
		};
	};

	class bst_car {
		side = "civ";
		conditions = "license_civ_bst";
		conditionsMessage = "";
		multiplier = 1;
		vehicles[] = {
			{ "O_MRAP_02_F", "" },
			{ "B_mas_UH1Y_UNA_F", "life_civlevel > 1" }
		};
	};

	class fsg_car {
		side = "reb";
		conditions = "license_reb_fsg";
		conditionsMessage = "";
		multiplier = 1;
		vehicles[] = {
			{ "O_MRAP_02_F", "life_reblevel > 1" },
			{ "B_mas_HMMWV_FSG_M2", "life_reblevel > 1" },
			{ "B_Heli_Light_01_F", "life_reblevel > 1" },
			{ "B_mas_UH1Y_UNA_F", "life_reblevel > 2" }
		};
	};
};