class LifeCfgVehMaterials {
	class glossy {
		material = "\ivory_data\data\glossy";
		displayName = "Глянцевый";
		conditions = "";
	};
	class metallic {
		material = "\ivory_data\data\metallic";
		displayName = "Металлик";
		conditions = "";
	};
	class matte {
		material = "\ivory_data\data\matte";
		displayName = "Матовый";
		conditions = "(call life_donator) > 0";
	};
	class chrome {
		material = "\ivory_data\data\chrome";
		displayName = "Хром";
		conditions = "(call life_donator) > 0";
	};
};

class LifeCfgVehTextures {
	//C_Offroad_01_F
	class ffrd_r {
		displayName = "Красный";
		texture[] = {"\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"};
	};
	class ffrd_y {
		displayName = "Желтый";
		texture[] = {"\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"};
	};
	class ffrd_w {
		displayName = "Белый";
		texture[] = {"\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"};
	};
	class ffrd_b {
		displayName = "Синий";
		texture[] = {"\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"};
	};
	class ffrd_br {
		displayName = "Темно-красный";
		texture[] = {"\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"};
	};
	class ffrd_bw {
		displayName = "Сине-белый";
		texture[] = {"\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"};
	};
	class ffrd_sb {
		displayName = "VIP Стикеры";
		texture[] = {"\union_textures\vip1\offroad_blau_sickerbomb.paa"};
	};
	class ffrd_cop {
		displayName = "Полиция";
		texture[] = {"\union_textures\police_offroad.paa"};
	};
	class rgb_cy {
		displayName = "Кислотно-желтый";
		texture[] = {"#(argb,8,8,3)color(0.6,0.3,0.01,1)"};
	};
	class ffrd_med {
		displayName = "Скорая";
		texture[] = {"\union_textures\medic\notarzt_offroad.paa"};
	};
	class ffrd_v1 {
		displayName = "VIP 1";
		texture[] = {"\union_textures\vip\TRG_AMC_offroad1_ex.paa"};
	};
	class ffrd_7n {
		displayName = "7новостей";
		texture[] = {"\union_textures\7news\offroad_01_ext_base02_co.paa"};
	};
	class ffrd_ro {
		displayName = "Ржавчина";
		texture[] = {"\union_textures\vip1\civ_offroad_rost.paa"};
	};
	class ffrd_bear {
		displayName = "Медведь";
		texture[] = {"\union_textures\vip1\bear_offroad.paa"};
	};
	class ffrd_2l {
		displayName = "Две полоски";
		texture[] = {"\union_textures\vip1\CIV_OFF1.paa"};
	};
	class ffrd_gv {
		displayName = "GTA V";
		texture[] = {"\union_textures\vip2\offroad_gta5.paa"};
	};

	//C_Offroad_01_repair_F
	class ffrd_r_m1 {
		displayName = "МЧС - Механик";
		texture[] = {"\a3\soft_f_bootcamp\offroad_01\Data\offroad_01_ext_repair_civ_co.paa"};
	};
	class ffrd_r_m2 {
		displayName = "МЧС - Медик";
		texture[] = {"\union_textures\medic\notarzt_offroad.paa"};
	};

	//B_G_Offroad_01_F
	class ffrd_bg_r {
		displayName = "Повстанческий";
		texture[] = {"\A3\soft_F_gamma\Offroad_01\Data\offroad_01_ext_ig01_co.paa"};
	};
	class ffrd_bg_rv {
		displayName = "VIP Повстанческий";
		texture[] = {"\union_textures\vip1\offroad_reb.paa"};
	};

	//B_Quadbike_01_F
	class qdbk_cop {
		displayName = "Полиция";
		texture[] = {"\union_textures\quad_police_co2.paa"};
	};
	class qdbk_reb {
		displayName = "Зеленый камуфляж";
		texture[] = {"\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"};
	};
	class qdbk_b {
		displayName = "Черный";
		texture[] = {"\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"};
	};
	class qdbk_bl {
		displayName = "Синий";
		texture[] = {"\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"};
	};
	class qdbk_r {
		displayName = "Красный";
		texture[] = {"\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"};
	};
	class qdbk_w {
		displayName = "Белый";
		texture[] = {"\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"};
	};
	class qdbk_g {
		displayName = "Зеленый";
		texture[] = {"\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"};
	};
	class qdbk_cm {
		displayName = "Камуфляж";
		texture[] = {"\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"};
	};

	//C_Hatchback_01_F
	class htchb_bs {
		displayName = "Бежевый";
		texture[] = {"\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"};
	};
	class htchb_g {
		displayName = "Зеленый";
		texture[] = {"\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"};
	};
	class htchb_bl {
		displayName = "Синий";
		texture[] = {"\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"};
	};
	class htchb_bbl {
		displayName = "Темно-синий";
		texture[] = {"\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"};
	};
	class htchb_y {
		displayName = "Желтый";
		texture[] = {"\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"};
	};
	class htchb_w {
		displayName = "Белый";
		texture[] = {"\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"};
	};
	class htchb_gr {
		displayName = "Серый";
		texture[] = {"\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"};
	};
	class htchb_b {
		displayName = "Черный";
		texture[] = {"\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"};
	};

	//C_Hatchback_01_sport_F
	class htchbs_r {
		displayName = "Красный";
		texture[] = {"\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"};
	};
	class htchbs_br {
		displayName = "Темно-красный";
		texture[] = {"\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"};
	};
	class htchbs_o {
		displayName = "Оранжевый";
		texture[] = {"\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"};
	};
	class htchbs_bw {
		displayName = "Черно-белый";
		texture[] = {"\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"};
	};
	class htchbs_t {
		displayName = "Tan";
		texture[] = {"\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"};
	};
	class htchbs_g {
		displayName = "Зеленый";
		texture[] = {"\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"};
	};
	class htchbs_cop {
		displayName = "Полиция";
		texture[] = {"\union_textures\police_hatchback.paa"};
	};
	class htchbs_va {
		displayName = "Vip Art";
		texture[] = {"\union_textures\vip\asiimov_hatchback_textures.paa"};
	};
	class htchbs_vme {
		displayName = "Vip Monster Energy";
		texture[] = {"\union_textures\vip\limousine_sport_monster.paa"};
	};
	class htchbs_h {
		displayName = "Халк";
		texture[] = {"\union_textures\vip2\hatchback_hulk.paa"};
	};
	class htchbs_s {
		displayName = "Симпсоны";
		texture[] = {"\union_textures\vip2\hatchback_simpsons.paa"};
	};

	//C_SUV_01_F
	class suv_br {
		displayName = "Темно-красный";
		texture[] = {"\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"};
	};
	class suv_b {
		displayName = "Черный";
		texture[] = {"\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_02_co.paa"};
	};
	class suv_s {
		displayName = "Серебряный";
		texture[] = {"\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"};
	};
	class suv_o {
		displayName = "Оранжевый";
		texture[] = {"\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"};
	};
	class suv_cop {
		displayName = "Полиция";
		texture[] = {"\union_textures\police_suv.paa"};
	};
	class suv_vx6 {
		displayName = "VIP BMW X6";
		texture[] = {"\union_textures\vip\X6_suv.paa"};
	};
	class suv_vd {
		displayName = "VIP пончики";
		texture[] = {"\union_textures\vip\donut_suv_textures.paa"};
	};
	class suv_vnc {
		displayName = "VIP NyanCat";
		texture[] = {"\union_textures\vip\nyan_suv.paa"};
	};
	class suv_vo {
		displayName = "VIP океан";
		texture[] = {"\union_textures\vip1\suv_1.paa"};
	};
	class suv_vs {
		displayName = "VIP космос";
		texture[] = {"\union_textures\vip1\suv_universe.paa"};
	};
	class suv_vpm {
		displayName = "VIP PacMan";
		texture[] = {"\union_textures\vip1\suvPacMan.paa"};
	};
	class suv_vme {
		displayName = "VIP Monster Energy";
		texture[] = {"\union_textures\vip1\suv_Monster_energy_block.paa"};
	};
	class suv_vgr {
		displayName = "VIP Ghostrider";
		texture[] = {"\union_textures\vip1\suv_Ghostrider.paa"};
	};
	class suv_vsw {
		displayName = "VIP Star Wars";
		texture[] = {"\union_textures\vip1\suv_starwarscar.paa"};
	};
	class suv_vcx {
		displayName = "VIP Comix";
		texture[] = {"\union_textures\vip2\suv_comix.paa"};
	};
	class suv_vfs {
		displayName = "VIP Fire Skull";
		texture[] = {"\union_textures\vip2\suv_fireskull.paa"};
	};
	class suv_vme2 {
		displayName = "VIP Monster Energy 2";
		texture[] = {"\union_textures\vip2\suv_monsterenergy.paa"};
	};

	//C_Van_01_transport_F
	//C_Van_01_box_F
	class vtt_w {
		displayName = "Белый";
		texture[] = {"\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"};
	};
	class vtt_r {
		displayName = "Красный";
		texture[] = {"\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"};
	};

	//O_MRAP_02_F
	//O_MRAP_02_hmg_F
	class mrp_g {
		displayName = "Зеленый";
		texture[] = {"a3\soft_f\MRAP_02\data\mrap_02_ext_01_co.paa","a3\soft_f\MRAP_02\data\mrap_02_ext_02_co.paa"};
	};
	class mrp_med {
		displayName = "Медик";
		texture[] = {"\union_textures\medic\ifrit_medic2_front.paa","\union_textures\medic\ifrit_medic2_hinten.paa"};
	};
	class mrp_cg {
		displayName = "Гражданские банды";
		texture[] = {"\union_textures\ifrit_civ_1.paa","\union_textures\ifrit_civ_2.paa","\union_textures\ifrit_civ_2.paa"};
	};
	class mrp_ur {
		displayName = "Urban";
		texture[] = {"\union_textures\vip1\ifrit_urban_1.paa","\union_textures\vip1\ifrit_urban_2.paa"};
	};
	class mrp_lz {
		displayName = "LosZetas";
		texture[] = {"\union_textures\ifrit_lzc_1.paa","\union_textures\ifrit_lzc_2.paa"};
	};
	class mrp_amc {
		displayName = "AMC";
		texture[] = {"\union_textures\amc\old_amc_ifrit_1.paa","\union_textures\amc\old_amc_ifrit_2.paa"};
	};
	class mrp_sdr {
		displayName = "SDR";
		texture[] = {"\sdr_pack\vehicleTextures\ifrit1.paa","\sdr_pack\vehicleTextures\ifrit2.paa"};
	};
	class mrp_aff {
		displayName = "AFF";
		texture[] = {"\union_textures\isf\ifrit_isf_1.paa","\union_textures\isf\ifrit_isf_2.paa"};
	};
	class mrp_dnd {
		displayName = "EC";
		texture[] = {"\ec_pack\vehicles\ifrit_1.paa","\ec_pack\vehicles\ifrit_2.paa"};
	};
	class mrp_arg {
		displayName = "ARG";
		texture[] = {"\arg_grk_pack\vehs\ifrit_1.paa","\arg_grk_pack\vehs\ifrit_2.paa"};
	};
	class mrp_fb {
		displayName = "FB";
		texture[] = {"\fb_pack\vehicles\ifrit\ifrit_1.paa","\fb_pack\vehicles\ifrit\ifrit_2.paa"};
	};
	class mrp_swat {
		displayName = "SWAT";
		texture[] = {"\union_textures\swat\swat_ifrit_0.paa","\union_textures\swat\swat_ifrit_1.paa"};
	};
	class mrp_dea {
		displayName = "DEA";
		texture[] = {"\union_veh_t\data\dea\dea_ifrit1.paa","\union_veh_t\data\dea\dea_ifrit2.paa"};
	};
	class mrp_7n {
		displayName = "7NEWS";
		texture[] = {"\union_textures\7news\mrap_02_ext_01_co.paa","\union_textures\7news\mrap_02_ext_02_co.paa"};
	};
	class mrp_vl {
		displayName = "VL";
		texture[] = {"\vl_pack\VehTextures\ifrit1.paa","\vl_pack\VehTextures\ifrit2.paa"};
	};
	class mrp_mc {
		displayName = "W";
		texture[] = {"\vet_mc_pack\O_MRAP_02_F\MRAP_02_ext_01_CO.paa","\vet_mc_pack\O_MRAP_02_F\MRAP_02_ext_02_CO.paa"};
	};
	class mrp_vrs {
		displayName = "VRS";
		texture[] = {"\extk_pack\vehicles\extk_ifrit1.paa","\extk_pack\vehicles\extk_ifrit2.paa"};
	};
	class mrp_rfa {
		displayName = "RFA";
		texture[] = {"\rfa_packJW\data\vehicl\RFA_ifrit_before.paa","\rfa_packJW\data\vehicl\RFA_ifrit_back.paa"};
	};
	class mrp_muj {
		displayName = "M";
		texture[] = {"\mujahedi_pack\ifrit\muj_ifrit_01.paa","\mujahedi_pack\ifrit\muj_ifrit_02.paa"};
	};
	class mrp_nsb {
		displayName = "NSB";
		texture[] = {"\nsb_pack\vech\IFRIT_1.paa","\nsb_pack\vech\IFRIT_2.paa"};
	};
	class mrp_7th {
		displayName = "7th";
		texture[] = {"\un_pack\Veh\ifrit_01.paa","\un_pack\Veh\ifrit_02.paa"};
	};
	class mrp_ira {
		displayName = "IRA";
		texture[] = {"\ira_pack\vehicles\ira_ifrit_1.paa","\ira_pack\vehicles\ira_ifrit_2.paa"};
	};
	class mrp_ccp {
		displayName = "FAJ";
		texture[] = {"\cccp_pack\vehicles\ifrit0.paa","\cccp_pack\vehicles\ifrit1.paa"};
	};
	class mrp_ics {
		displayName = "ICS";
		texture[] = {"\ics_pack\veh\ics_ifrit_1.paa","\ics_pack\veh\ics_ifrit_2.paa"};
	};
	class mrp_la {
		displayName = "CDS";
		texture[] = {"\la_pack\veh\la_ifrit_1.paa","\la_pack\veh\la_ifrit_2.paa"};
	};
	class mrp_bst {
		displayName = "BST";
		texture[] = {"\bastion_pack\ifrit\mrap_02_ext_01_co.paa","\bastion_pack\ifrit\mrap_02_ext_02_co.paa"};
	};
	class mrp_fsg {
		displayName = "FSG";
		texture[] = {"\fsg_pack\vehs\ifrit_1.paa","\fsg_pack\vehs\ifrit_2.paa"};
	};

	//B_mas_HMMWV_UNA
	class hmmv_reb {
		displayName = "Повстанческий";
		texture[] = {"\mas_cars\hmmwv\data\hmmwv_body_co.paa"};
	};
	class hmmv_fed {
		displayName = "SWAT/CIA";
		texture[] = {"\union_textures\swat\HMMWV\hmmwv_body_co.paa"};
	};
	class hmmv_sdr {
		displayName = "SDR";
		texture[] = {"\union_textures\sdr\hmmwv\hmmwv_body_co.paa.paa"};
	};
	class hmmv_fb {
		displayName = "FB";
		texture[] = {"\union_textures\amc\hmmwv_body_co.paa"};
	};
	class hmmv_ec {
		displayName = "EC";
		texture[] = {"\ec_pack\vehicles\hmmwv_body_co.paa"};
	};
	class hmmv_mc {
		displayName = "W";
		texture[] = {"\union_textures\mc\hmmwv_body_co.paa"};
	};
	class hmmv_nsb {
		displayName = "NSB";
		texture[] = {"\nsb_pack\vech\hmmwv_body_co.paa"};
	};

	//B_Heli_Light_01_F
	//C_Heli_Light_01_civil_F
	class humm_cop {
		displayName = "Полиция";
		texture[] = {"\union_textures\police_heli.paa"};
	};
	class humm_cia {
		displayName = "CIA";
		texture[] = {"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"};
	};
	class humm_led {
		displayName = "LED";
		texture[] = {"\altmerion_prokuratura\veh\humm.paa"};
	};
	class humm_dea {
		displayName = "DEA";
		texture[] = {"\union_veh_t\data\dea\dea_humming.paa"};
	};
	class humm_bl {
		displayName = "Синий";
		texture[] = {"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"};
	};
	class humm_r {
		displayName = "Красный";
		texture[] = {"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"};
	};
	class humm_vme {
		displayName = "VIP Monster Energy";
		texture[] = {"\union_textures\vip\limousine_sport_monster.paa"};
	};
	class humm_bln {
		displayName = "Синяя линия";
		texture[] = {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"};
	};
	class humm_llp {
		displayName = "Эллиптический";
		texture[] = {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"};
	};
	class humm_fr {
		displayName = "Яростный";
		texture[] = {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"};
	};
	class humm_bj {
		displayName = "Голубые джинсы";
		texture[] = {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"};
	};
	class humm_rl {
		displayName = "Красная лента";
		texture[] = {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"};
	};
	class humm_sn {
		displayName = "Закат";
		texture[] = {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"};
	};
	class humm_vrn {
		displayName = "Ворон";
		texture[] = {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"};
	};
	class humm_wv {
		displayName = "Голубые волны";
		texture[] = {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"};
	};
	class humm_reb {
		displayName = "Повстанческий";
		texture[] = {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"};
	};
	class humm_med {
		displayName = "Скорая";
		texture[] = {"\union_textures\medic\notarzt_hummingbird.paa"};
	};
	class humm_rg {
		displayName = "Повстанческая группировка";
		texture[] = {"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"};
	};
	class humm_sdr {
		displayName = "SDR";
		texture[] = {"\sdr_pack\vehicleTextures\Hemming.paa"};
	};
	class humm_swt {
		displayName = "SWAT";
		texture[] = {"\union_textures\swat\swat_hum.paa"};
	};
	class humm_rfa {
		displayName = "RFA";
		texture[] = {"\rfa_packJW\data\vehicl\RFA_hum.paa"};
	};
	class humm_nsb {
		displayName = "KSK";
		texture[] = {"\ksk\vh\mh-9_ksk.paa"};
	};
	class humm_ec {
		displayName = "EC";
		texture[] = {"\ec_pack\vehicles\mh_9.paa"};
	};
	class humm_ics {
		displayName = "ICS";
		texture[] = {"\ics_pack\veh\ics_humm.paa"};
	};
	class humm_gra {
		displayName = "Серый";
		texture[] = {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_graywatcher_co.paa"};
	};
	class humm_lg {
		displayName = "Светлый";
		texture[] = {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_light_co.paa"};
	};
	class humm_shd {
		displayName = "Тень";
		texture[] = {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_shadow_co.paa"};
	};
	class humm_shr {
		displayName = "Шериф";
		texture[] = {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"};
	};
	class humm_wsp {
		displayName = "Оса";
		texture[] = {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wasp_co.paa"};
	};
	class humm_tx {
		displayName = "Такси";
		texture[] = {"\union_textures\taxi_heli.paa"};
	};
	class humm_fsg {
		displayName = "FSG";
		texture[] = {"\fsg_pack\vehs\hummingbird.paa"};
	};
	class humm_arg {
		displayName = "ARG";
		texture[] = {"\arg_grk_pack\vehs\hummingbird.paa"};
	};

	//B_mas_UH1Y_UNA_F
	class uh1y_fed {
		displayName = "Полиция";
		texture[] = {"#(argb,8,8,3)color(0.05,0.05,0.05,1)","#(argb,8,8,3)color(0.05,0.05,0.05,1)"};
	};
	class uh1y_reb {
		displayName = "Группировки";
		texture[] = {"mas_eli\UH1Y\data\uh1y_ext_co.paa","mas_eli\UH1Y\data\uh1y_int_co.paa"};
	};
	class uh1y_aff {
		displayName = "AFF";
		texture[] = {"\isf_ita_pack\Vech\data\uh1y_ext_ita_cm.paa","\isf_ita_pack\Vech\data\uh1y_int_ita_co.paa"};
	};
	class uh1y_fb {
		displayName = "FB";
		texture[] = {"\fb_pack\vehicles\uh1y\uh1y_1.paa","\fb_pack\vehicles\uh1y\uh1y_2.paa"};
	};
	class uh1y_rfa {
		displayName = "RFA";
		texture[] = {"\rfa_packJW\data\vehicl\RFA_uh1_co.paa","mas_eli\UH1Y\data\uh1y_int_co.paa"};
	};
	class uh1y_muj {
		displayName = "M";
		texture[] = {"\mujahedi_pack\uh1y\uh1ybody_co.paa","mas_eli\UH1Y\data\uh1y_int_co.paa"};
	};
	class uh1y_nsb {
		displayName = "NSB";
		texture[] = {"\nsb_pack\vech\UH1Y_camo.paa","mas_eli\UH1Y\data\uh1y_int_co.paa"};
	};
	class uh1y_ira {
		displayName = "IRA";
		texture[] = {"\ira_pack\vehicles\ira_uh1y.paa","mas_eli\UH1Y\data\uh1y_int_co.paa"};
	};
	class uh1y_ec {
		displayName = "EC";
		texture[] = {"\ec_pack\vehicles\uh1y.paa","mas_eli\UH1Y\data\uh1y_int_co.paa"};
	};
	class uh1y_ics {
		displayName = "ICS";
		texture[] = {"\ics_pack\veh\ics_uh1y.paa","mas_eli\UH1Y\data\uh1y_int_co.paa"};
	};
	class uh1y_sdr {
		displayName = "SDR";
		texture[] = {"\sdr_pack\vehicleTextures\uh1y.paa","mas_eli\UH1Y\data\uh1y_int_co.paa"};
	};
	class uh1y_mc {
		displayName = "W";
		texture[] = {"\vet_mc_pack\B_mas_UH1Y_UNA_F\uh1y_ext_co.paa","\vet_mc_pack\B_mas_UH1Y_UNA_F\uh1y_int_co.paa"};
	};
	class uh1y_dea {
		displayName = "DEA";
		texture[] = {"\union_veh_t\data\dea\dea_uh1y.paa","mas_eli\UH1Y\data\uh1y_int_co.paa"};
	};
	class uh1y_la {
		displayName = "CDS";
		texture[] = {"\la_pack\veh\uh1y.paa","mas_eli\UH1Y\data\uh1y_int_co.paa"};
	};
	class uh1y_arg {
		displayName = "ARG";
		texture[] = {"\arg_grk_pack\vehs\uh1y.paa","mas_eli\UH1Y\data\uh1y_int_co.paa"};
	};
	class uh1y_7th {
		displayName = "7th";
		texture[] = {"\un_pack\Veh\uh1_UN.paa","mas_eli\UH1Y\data\uh1y_int_co.paa"};
	};
	class uh1y_fsg {
		displayName = "FSH";
		texture[] = {"\fsg_pack\vehs\uh.paa","\fsg_pack\vehs\uh2.paa"};
	};

	//I_Heli_light_03_unarmed_F
	class hllc_cia {
		displayName = "CIA";
		texture[] = {"#(argb,8,8,3)color(0.5,0.5,0.5,0.085)"};
	};
	class hllc_med {
		displayName = "МЧС";
		texture[] = {"\union_textures\medic\notarzt_hellcat.paa"};
	};
	class hllc_g {
		displayName = "Зеленый";
		texture[] = {"\a3\air_f_epb\Heli_Light_03\Data\heli_light_03_base_co.paa"};
	};
	class hllc_7n {
		displayName = "7новостей";
		texture[] = {"\union_textures\press_hellcat.paa"};
	};
	class hllc_rg {
		displayName = "Повстанческая группировка";
		texture[] = {"\a3\air_f_epb\Heli_Light_03\Data\heli_light_03_base_indp_co.paa"};
	};
	class hllc_cop {
		displayName = "Полиция";
		texture[] = {"\union_textures\police_hellcat.paa"};
	};
	class hllc_sdr {
		displayName = "SDR";
		texture[] = {"\sdr_pack\vehicleTextures\Hellcat.paa"};
	};
	class hllc_gra {
		displayName = "W";
		texture[] = {"\union_textures\hellcat_grey.paa"};
	};
	class hllc_13 {
		displayName = "13";
		texture[] = {"\13_pack\data\XX_hellcat_13.paa"};
	};
	class hllc_arg {
		displayName = "ARG";
		texture[] = {"\arg_grk_pack\vehs\hellcat.paa"};
	};
	class hllc_swt {
		displayName = "SWAT";
		texture[] = {"\union_textures\swat\swat_hellcat.paa"};
	};
	class hllc_nsb {
		displayName = "NSB";
		texture[] = {"\nsb_pack\vech\nsb_hellcat.paa"};
	};
	class hllc_muj {
		displayName = "M";
		texture[] = {"\mujahedi_pack\hellcat\heli_light_03_base_co.paa"};
	};
	class hllc_ec {
		displayName = "EC";
		texture[] = {"\ec_pack\vehicles\hellcat.paa"};
	};
	class hllc_ics {
		displayName = "ICS";
		texture[] = {"\ics_pack\veh\ics_hellcat.paa"};
	};
	class hllc_ccp {
		displayName = "FAJ";
		texture[] = {"\cccp_pack\vehicles\hellcat.paa"};
	};
	class hllc_dea {
		displayName = "DEA";
		texture[] = {"\union_veh_t\data\dea\dea_hellcat.paa"};
	};

	//B_Heli_Transport_03_unarmed_F
	class hrn_fed {
		displayName = "Полиция/CIA";
		texture[] = {"\a3\air_f_heli\Heli_Transport_03\Data\heli_transport_03_ext01_black_co.paa","\a3\air_f_heli\Heli_Transport_03\Data\heli_transport_03_ext02_black_co.paa"};
	};
	class hrn_med {
		displayName = "МЧС";
		texture[] = {"\union_textures\medic\huron_ext01.paa","\union_textures\medic\huron_ext02.paa"};
	};

	//I_Heli_Transport_02_F
	class hltt_bw {
		displayName = "Черно-белый";
		texture[] = {"\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_ion_co.paa","\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_ion_co.paa","\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_ion_co.paa"};
	};
	class hltt_gw {
		displayName = "Зелено-белый";
		texture[] = {"\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_dahoman_co.paa","\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_dahoman_co.paa","\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_dahoman_co.paa"};
	};
	class hltt_cia {
		displayName = "CIA";
		texture[] = {"#(argb,8,8,3)color(0.05,0.05,0.05,1)","#(argb,8,8,3)color(0.05,0.05,0.05,1)","#(argb,8,8,3)color(0.05,0.05,0.05,1)"};
	};

	//ext_sab_boat
	class xsb_s {
		displayName = "Sailing";
		texture[] = {"\sab_boat\data\texture.paa"};
	};
	class xsb_f {
		displayName = "Fuel";
		texture[] = {"\sab_boat\data\texture2.paa"};
	};
	class xsb_v {
		displayName = "Vrana";
		texture[] = {"\sab_boat\data\texture3.paa"};
	};
	class xsb_r {
		displayName = "Redstone";
		texture[] = {"\sab_boat\data\texture4.paa"};
	};

	//dezkit_b206_ems
	class dems_med {
		displayName = "МЧС";
		texture[] = {"\dezkit_b206\skins\ems1_1.paa","\dezkit_b206\skins\ems1_2.paa"};
	};
	class dems_7n {
		displayName = "Пресса";
		texture[] = {"\dezkit_b206\skins\tv1_1.paa","\dezkit_b206\skins\tv1_2.paa"};
	};

	//B_APC_Wheeled_01_cannon_F
	class apcw_fed {
		displayName = "Полиция";
		texture[] = {"\union_textures\swat\Marshal\m_swat_base.paa","\union_textures\swat\Marshal\m_swat_ads.paa","\union_textures\swat\Marshal\m_swat_tows.paa"};
	};
	class apcw_civ {
		displayName = "Стандарт";
		texture[] = {"\a3\armor_f_beta\APC_Wheeled_01\Data\apc_wheeled_01_base_co.paa"};
	};

	//O_Heli_Light_02_unarmed_F
	class orc_cia {
		displayName = "CIA";
		texture[] = {"\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"};
	};
	class orc_wb {
		displayName = "Бело-синий";
		texture[] = {"\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"};
	};
	class orc_cm {
		displayName = "Камуфляж";
		texture[] = {"\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa"};
	};
	class orc_reb {
		displayName = "Повстанческий";
		texture[] = {"\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"};
	};
	class orc_cop {
		displayName = "Полиция";
		texture[] = {"\union_textures\police_orca.paa"};
	};
	class orc_med {
		displayName = "МЧС";
		texture[] = {"\union_textures\medic\orca_notarzt.paa"};
	};

	//B_MRAP_01_F
	class bmrp_cia {
		displayName = "CIA";
		texture[] = {"\union_textures\cia_front.paa","\union_textures\cia_back.paa"};
	};
	class bmrp_ds {
		displayName = "Пустыный";
		texture[] = {"\a3\soft_f\MRAP_01\Data\mrap_01_base_co.paa"};
	};

	//I_MRAP_03_hmg_F
	class strdh_cop {
		displayName = "Полиция";
		texture[] = {"\union_textures\striders\strider_police.paa","\union_textures\striders\strider_police.paa"};
	};

	//I_MRAP_03_F
	class strd_cop {
		displayName = "Полиция";
		texture[] = {"\union_textures\striders\strider_police.paa"};
	};
	class strd_aff {
		displayName = "AFF";
		texture[] = {"\union_textures\striders\strider_aff.paa"};
	};
	class strd_reb {
		displayName = "Повстанческий";
		texture[] = {"\a3\soft_F_beta\MRAP_03\Data\mrap_03_ext_indp_co.paa"};
	};
	class strd_wd {
		displayName = "Лес";
		texture[] = {"\union_textures\striders\Wald\mrap_03_ext_wd1_co.paa"};
	};
	class strd_rst {
		displayName = "RST";
		texture[] = {"\union_textures\striders\strider_rst.paa"};
	};
	class strd_swt {
		displayName = "SWAT";
		texture[] = {"\union_textures\swat\swat_strider.paa"};
	};
	class strd_med {
		displayName = "МЧС";
		texture[] = {"\union_textures\striders\strider_medic.paa"};
	};
	class strd_dea {
		displayName = "DEA";
		texture[] = {"\union_veh_t\data\dea\dea_strider.paa"};
	};
	class strd_nsb {
		displayName = "KSK";
		texture[] = {"\ksk\vh\strider_ksk.paa"};
	};

	//B_Truck_01_fuel_CIV_F
	class tfc_def {
		displayName = "Стандарт";
		texture[] = {"\a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa","\a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa","\A3\Soft_F_Gamma\Truck_01\Data\truck_01_Fuel_CO.paa"};
	};
	class tfc_bl {
		displayName = "Синий";
		texture[] = {"\union_vehicles\data\hemtt\truck_01_ext_01_blue.paa","\union_vehicles\data\hemtt\truck_01_ext_02_blue.paa","\union_vehicles\data\hemtt\truck_01_ext_03_blue.paa"};
	};
	class tfc_gs {
		displayName = "Газон";
		texture[] = {"\union_vehicles\data\hemtt\truck_01_ext_01_grass.paa","\union_vehicles\data\hemtt\truck_01_ext_02_grass.paa","\union_vehicles\data\hemtt\truck_01_ext_03_grass.paa"};
	};
	class tfc_mh {
		displayName = "Болотный";
		texture[] = {"\union_vehicles\data\hemtt\truck_01_ext_01_marsh.paa","\union_vehicles\data\hemtt\truck_01_ext_02_marsh.paa","\union_vehicles\data\hemtt\truck_01_ext_03_marsh.paa"};
	};
	class tfc_or {
		displayName = "Оранжевый";
		texture[] = {"\union_vehicles\data\hemtt\truck_01_ext_01_orange.paa","\union_vehicles\data\hemtt\truck_01_ext_02_orange.paa","\union_vehicles\data\hemtt\truck_01_ext_03_orange.paa"};
	};
	class tfc_pr {
		displayName = "Фиолетовый";
		texture[] = {"\union_vehicles\data\hemtt\truck_01_ext_01_purple.paa","\union_vehicles\data\hemtt\truck_01_ext_02_purple.paa","\union_vehicles\data\hemtt\truck_01_ext_03_purple.paa"};
	};
	class tfc_r {
		displayName = "Красный";
		texture[] = {"\union_vehicles\data\hemtt\truck_01_ext_01_red.paa","\union_vehicles\data\hemtt\truck_01_ext_02_red.paa","\union_vehicles\data\hemtt\truck_01_ext_03_red.paa"};
	};
	class tfc_y {
		displayName = "Желтый";
		texture[] = {"\union_vehicles\data\hemtt\truck_01_ext_01_yellow.paa","\union_vehicles\data\hemtt\truck_01_ext_02_yellow.paa","\union_vehicles\data\hemtt\truck_01_ext_03_yellow.paa"};
	};

	//B_Truck_01_box_CIV_F
	//B_Truck_01_mover_F
	class hmt_def {
		displayName = "Стандарт";
		texture[] = {"\a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa","\a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa"};
	};
	class hmt_bl {
		displayName = "Синий";
		texture[] = {"\union_vehicles\data\hemtt\truck_01_ext_01_blue.paa","\union_vehicles\data\hemtt\truck_01_ext_02_blue.paa"};
	};
	class hmt_gs {
		displayName = "Газон";
		texture[] = {"\union_vehicles\data\hemtt\truck_01_ext_01_grass.paa","\union_vehicles\data\hemtt\truck_01_ext_02_grass.paa"};
	};
	class hmt_mh {
		displayName = "Болотный";
		texture[] = {"\union_vehicles\data\hemtt\truck_01_ext_01_marsh.paa","\union_vehicles\data\hemtt\truck_01_ext_02_marsh.paa"};
	};
	class hmt_or {
		displayName = "Оранжевый";
		texture[] = {"\union_vehicles\data\hemtt\truck_01_ext_01_orange.paa","\union_vehicles\data\hemtt\truck_01_ext_02_orange.paa"};
	};
	class hmt_pr {
		displayName = "Фиолетовый";
		texture[] = {"\union_vehicles\data\hemtt\truck_01_ext_01_purple.paa","\union_vehicles\data\hemtt\truck_01_ext_02_purple.paa"};
	};
	class hmt_r {
		displayName = "Красный";
		texture[] = {"\union_vehicles\data\hemtt\truck_01_ext_01_red.paa","\union_vehicles\data\hemtt\truck_01_ext_02_red.paa"};
	};
	class hmt_y {
		displayName = "Желтый";
		texture[] = {"\union_vehicles\data\hemtt\truck_01_ext_01_yellow.paa","\union_vehicles\data\hemtt\truck_01_ext_02_yellow.paa"};
	};

	//I_Truck_02_covered_F
	class itc_cm {
		displayName = "Камо";
		texture[] = {"\A3\soft_f_beta\Truck_02\Data\Truck_02_kab_INDP_co.paa","\A3\soft_f_beta\Truck_02\Data\Truck_02_kuz_INDP_co.paa"};
	};
	class itc_cia {
		displayName = "CIA";
		texture[] = {"#(argb,8,8,3)color(0.5,0.5,0.5,0.085)","#(argb,8,8,3)color(0.5,0.5,0.5,0.085)"};
	};

	//I_Truck_02_covered_CIV_F
	class itcc_or {
		displayName = "Оранжевый";
		texture[] = {"\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa","\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"};
	};
	class itcc_r {
		displayName = "Красный";
		texture[] = {"\union_vehicles\data\zamak\zk_red_f.paa","\union_vehicles\data\zamak\zk_red_t.paa"};
	};
	class itcc_s {
		displayName = "Небесный";
		texture[] = {"\union_vehicles\data\zamak\zk_sky_f.paa","\union_vehicles\data\zamak\zk_sky_t.paa"};
	};
	class itcc_w {
		displayName = "Белый";
		texture[] = {"\union_vehicles\data\zamak\zk_white_f.paa","\union_vehicles\data\zamak\zk_white_t.paa"};
	};
	class itcc_y {
		displayName = "Желтый";
		texture[] = {"\union_vehicles\data\zamak\zk_yellow_f.paa","\union_vehicles\data\zamak\zk_yellow_t.paa"};
	};

	//O_Heli_Transport_04_bench_F
	class htb_cia {
		displayName = "CIA";
		texture[] = {"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_bench_black_CO.paa"};
	};

	//shounka
	class shnk_w {
		displayName = "Белый";
		texture[] = {"shounka_a3_base\couleurs\blanc.paa"};
	};
	class shnk_r {
		displayName = "Красный";
		texture[] = {"shounka_a3_base\couleurs\rouge.paa"};
	};
	class shnk_bbl {
		displayName = "Тёмно-синий";
		texture[] = {"shounka_a3_base\couleurs\bleufonce.paa"};
	};
	class shnk_gr {
		displayName = "Серый";
		texture[] = {"shounka_a3_base\couleurs\gris.paa"};
	};
	class shnk_y {
		displayName = "Желтый";
		texture[] = {"shounka_a3_base\couleurs\jaune.paa"};
	};
	class shnk_bbr {
		displayName = "Тёмно-коричневый";
		texture[] = {"shounka_a3_base\couleurs\noir.paa"};
	};
	class shnk_o {
		displayName = "Оранжевый";
		texture[] = {"shounka_a3_base\couleurs\orange.paa"};
	};
	class shnk_rs {
		displayName = "Розовый";
		texture[] = {"shounka_a3_base\couleurs\rose.paa"};
	};
	class shnk_vi {
		displayName = "Фиолетовый";
		texture[] = {"shounka_a3_base\couleurs\violet.paa"};
	};
	class shnk_bl {
		displayName = "Синий";
		texture[] = {"shounka_a3_base\couleurs\bleu.paa"};
	};
	class shnk_blr {
		displayName = "Тёмно-красный";
		texture[] = {"shounka_a3_base\couleurs\rougefonce.paa"};
	};
	class shnk_g {
		displayName = "Зеленый";
		texture[] = {"shounka_a3_base\couleurs\vert.paa"};
	};
	class shnk_blg {
		displayName = "Тёмно-зеленый";
		texture[] = {"shounka_a3_base\couleurs\vertfonce.paa"};
	};
	class shnk_b {
		displayName = "Чёрный";
		texture[] = {"#(argb,8,8,3)color(0.02,0.02,0.02,1.0,co)"};
	};
	class shnk_bT {
		displayName = "Чёрный (Тонировка)";
		texture[] = {"#(argb,8,8,3)color(0.02,0.02,0.02,1.0,co)","","dkp_gelik_sa\mercedes_g65amg_hq\quiet_vitre_rv\quiet_vitre_toned_full.paa"};
	};
	class shnk_vr {
		displayName = "Красный Extremo rally";
		texture[] = {"shounka_a3_base\couleurs\sport_r.paa"};
	};
	class shnk_vg {
		displayName = "Зеленый Extremo rally";
		texture[] = {"shounka_a3_base\couleurs\sport_g.paa"};
	};
	class shnk_vbl {
		displayName = "Синий Extremo rally";
		texture[] = {"shounka_a3_base\couleurs\sport_b.paa"};
	};
	class shnk_vfc {
		displayName = "Extremo forest camo";
		texture[] = {"shounka_a3_base\couleurs\forest_camo.paa"};
	};
	class shnk_vuc {
		displayName = "Extremo urban camo";
		texture[] = {"shounka_a3_base\couleurs\urban_camo.paa"};
	};
	class shnk_vdc {
		displayName = "Extremo desert camo";
		texture[] = {"shounka_a3_base\couleurs\desert_camo.paa"};
	};
	class shnk_led {
		displayName = "LED";
		texture[] = {"\altmerion_prokuratura\veh\cherokee.paa"};
	};

	//C_Offroad_02_unarmed_F
	class codu_w {
		displayName = "Белый";
		texture[] = {"a3\soft_f_exp\offroad_02\data\offroad_02_ext_white_co.paa","a3\soft_f_exp\offroad_02\data\offroad_02_ext_white_co.paa","a3\soft_f_exp\offroad_02\data\offroad_02_int_white_co.paa","a3\soft_f_exp\offroad_02\data\offroad_02_int_white_co.paa"};
	};
	class codu_r {
		displayName = "Красный";
		texture[] = {"a3\soft_f_exp\offroad_02\data\offroad_02_ext_red_co.paa","a3\soft_f_exp\offroad_02\data\offroad_02_ext_red_co.paa","a3\soft_f_exp\offroad_02\data\offroad_02_int_red_co.paa","a3\soft_f_exp\offroad_02\data\offroad_02_int_red_co.paa"};
	};
	class codu_o {
		displayName = "Оранжевый";
		texture[] = {"a3\soft_f_exp\offroad_02\data\offroad_02_ext_orange_co.paa","a3\soft_f_exp\offroad_02\data\offroad_02_ext_orange_co.paa","a3\soft_f_exp\offroad_02\data\offroad_02_int_orange_co.paa","a3\soft_f_exp\offroad_02\data\offroad_02_int_orange_co.paa"};
	};
	class codu_bl {
		displayName = "Синий";
		texture[] = {"a3\soft_f_exp\offroad_02\data\offroad_02_ext_blue_co.paa","a3\soft_f_exp\offroad_02\data\offroad_02_ext_blue_co.paa","a3\soft_f_exp\offroad_02\data\offroad_02_int_blue_co.paa","a3\soft_f_exp\offroad_02\data\offroad_02_int_blue_co.paa"};
	};

	//C_Plane_Civil_01_F
	class cpc_wbl {
		displayName = "Бело-синий";
		texture[] = {"a3\air_f_exp\plane_civil_01\data\btt_ext_01_wave_co.paa","a3\air_f_exp\plane_civil_01\data\btt_ext_02_wave_co.paa","a3\air_f_exp\plane_civil_01\data\btt_int_01_co.paa","a3\air_f_exp\plane_civil_01\data\btt_int_02_co.paa"};
	};
	class cpc_bly {
		displayName = "Сине-желтый";
		texture[] = {"a3\air_f_exp\plane_civil_01\data\btt_ext_01_racer_co.paa","a3\air_f_exp\plane_civil_01\data\btt_ext_02_racer_co.paa","a3\air_f_exp\plane_civil_01\data\btt_int_01_co.paa","a3\air_f_exp\plane_civil_01\data\btt_int_02_co.paa"};
	};
	class cpc_gw {
		displayName = "Зелено-белый";
		texture[] = {"a3\air_f_exp\plane_civil_01\data\btt_ext_01_tribal_co.paa","a3\air_f_exp\plane_civil_01\data\btt_ext_02_tribal_co.paa","a3\air_f_exp\plane_civil_01\data\btt_int_01_co.paa","a3\air_f_exp\plane_civil_01\data\btt_int_02_co.paa"};
	};
	class cpc_r {
		displayName = "Красный";
		texture[] = {"a3\air_f_exp\plane_civil_01\data\btt_ext_01_redline_co.paa","a3\air_f_exp\plane_civil_01\data\btt_ext_02_redline_co.paa","a3\air_f_exp\plane_civil_01\data\btt_int_01_co.paa","a3\air_f_exp\plane_civil_01\data\btt_int_02_co.paa"};
	};

	//custom
	class cxc_1 {
		displayName = "2017 Aliceblue";
		texture[] = {"\union_veh_t\data\colors\aliceblue.paa"};
	};
	class cxc_2 {
		displayName = "2017 Banana";
		texture[] = {"\union_veh_t\data\colors\banana.paa"};
	};
	class cxc_3 {
		displayName = "2017 Blueviolet";
		texture[] = {"\union_veh_t\data\colors\blueviolet.paa"};
	};
	class cxc_4 {
		displayName = "2017 Brick";
		texture[] = {"\union_veh_t\data\colors\brick.paa"};
	};
	class cxc_5 {
		displayName = "2017 Brown";
		texture[] = {"\union_veh_t\data\colors\brown.paa"};
	};
	class cxc_6 {
		displayName = "2017 Burlywood";
		texture[] = {"\union_veh_t\data\colors\burlywood.paa"};
	};
	class cxc_7 {
		displayName = "2017 Cadmiumorange";
		texture[] = {"\union_veh_t\data\colors\cadmiumorange.paa"};
	};
	class cxc_8 {
		displayName = "2017 Cadmiumyellow";
		texture[] = {"\union_veh_t\data\colors\cadmiumyellow.paa"};
	};
	class cxc_9 {
		displayName = "2017 Carrot";
		texture[] = {"\union_veh_t\data\colors\carrot.paa"};
	};
	class cxc_10 {
		displayName = "2017 Chocolate";
		texture[] = {"\union_veh_t\data\colors\chocolate.paa"};
	};
	class cxc_11 {
		displayName = "2017 Cobalt";
		texture[] = {"\union_veh_t\data\colors\cobalt.paa"};
	};
	class cxc_12 {
		displayName = "2017 Coldgrey";
		texture[] = {"\union_veh_t\data\colors\coldgrey.paa"};
	};
	class cxc_13 {
		displayName = "2017 Coral";
		texture[] = {"\union_veh_t\data\colors\coral.paa"};
	};
	class cxc_14 {
		displayName = "2017 Cyan";
		texture[] = {"\union_veh_t\data\colors\cyan.paa"};
	};
	class cxc_15 {
		displayName = "2017 Darkseagreen";
		texture[] = {"\union_veh_t\data\colors\darkseagreen.paa"};
	};
	class cxc_16 {
		displayName = "2017 Darkslateblue";
		texture[] = {"\union_veh_t\data\colors\darkslateblue.paa"};
	};
	class cxc_17 {
		displayName = "2017 Darkturquoise";
		texture[] = {"\union_veh_t\data\colors\darkturquoise.paa"};
	};
	class cxc_18 {
		displayName = "2017 Darkviolet";
		texture[] = {"\union_veh_t\data\colors\darkviolet.paa"};
	};
	class cxc_19 {
		displayName = "2017 Dodgerblue";
		texture[] = {"\union_veh_t\data\colors\dodgerblue.paa"};
	};
	class cxc_20 {
		displayName = "2017 Emeraldgreen";
		texture[] = {"\union_veh_t\data\colors\emeraldgreen.paa"};
	};
	class cxc_21 {
		displayName = "2017 Flesh";
		texture[] = {"\union_veh_t\data\colors\flesh.paa"};
	};
	class cxc_22 {
		displayName = "2017 Ghostwhite";
		texture[] = {"\union_veh_t\data\colors\ghostwhite.paa"};
	};
	class cxc_23 {
		displayName = "2017 Gold";
		texture[] = {"\union_veh_t\data\colors\gold.paa"};
	};
	class cxc_24 {
		displayName = "2017 Goldenrod";
		texture[] = {"\union_veh_t\data\colors\goldenrod.paa"};
	};
	class cxc_25 {
		displayName = "2017 Indigo";
		texture[] = {"\union_veh_t\data\colors\indigo.paa"};
	};
	class cxc_26 {
		displayName = "2017 Khaki";
		texture[] = {"\union_veh_t\data\colors\khaki.paa"};
	};
	class cxc_27 {
		displayName = "2017 Lightskyblue";
		texture[] = {"\union_veh_t\data\colors\lightskyblue.paa"};
	};
	class cxc_28 {
		displayName = "2017 Limegreen";
		texture[] = {"\union_veh_t\data\colors\limegreen.paa"};
	};
	class cxc_29 {
		displayName = "2017 Melon";
		texture[] = {"\union_veh_t\data\colors\melon.paa"};
	};
	class cxc_30 {
		displayName = "2017 Moccasin";
		texture[] = {"\union_veh_t\data\colors\moccasin.paa"};
	};
	class cxc_31 {
		displayName = "2017 Olive";
		texture[] = {"\union_veh_t\data\colors\olive.paa"};
	};
	class cxc_32 {
		displayName = "2017 Olivedrab";
		texture[] = {"\union_veh_t\data\colors\olivedrab.paa"};
	};
	class cxc_33 {
		displayName = "2017 Orange";
		texture[] = {"\union_veh_t\data\colors\orange.paa"};
	};
	class cxc_34 {
		displayName = "2017 Peacock";
		texture[] = {"\union_veh_t\data\colors\peacock.paa"};
	};
	class cxc_35 {
		displayName = "2017 Purple";
		texture[] = {"\union_veh_t\data\colors\purple.paa"};
	};
	class cxc_36 {
		displayName = "2017 Royalblue";
		texture[] = {"\union_veh_t\data\colors\royalblue.paa"};
	};
	class cxc_37 {
		displayName = "2017 Saddlebrown";
		texture[] = {"\union_veh_t\data\colors\saddlebrown.paa"};
	};
	class cxc_38 {
		displayName = "2017 Sepia";
		texture[] = {"\union_veh_t\data\colors\sepia.paa"};
	};
	class cxc_39 {
		displayName = "2017 Slateblue";
		texture[] = {"\union_veh_t\data\colors\slateblue.paa"};
	};
	class cxc_40 {
		displayName = "2017 Slategray";
		texture[] = {"\union_veh_t\data\colors\slategray.paa"};
	};
	class cxc_41 {
		displayName = "2017 Steelblue";
		texture[] = {"\union_veh_t\data\colors\steelblue.paa"};
	};
	class cxc_42 {
		displayName = "2017 Tan";
		texture[] = {"\union_veh_t\data\colors\tan.paa"};
	};
	class cxc_43 {
		displayName = "2017 Teal";
		texture[] = {"\union_veh_t\data\colors\teal.paa"};
	};
	class cxc_44 {
		displayName = "2017 Tomato";
		texture[] = {"\union_veh_t\data\colors\tomato.paa"};
	};
	class cxc_45 {
		displayName = "2017 Turquoiseblue";
		texture[] = {"\union_veh_t\data\colors\turquoiseblue.paa"};
	};

	//ivory gt500 skins
	class ivgt_rw {
		displayName = "White on red";
		texture[] = {"\ivory_textures\data\gt500\bodyRW.paa"};
	};
	class ivgt_bg {
		displayName = "Gray on black";
		texture[] = {"\ivory_textures\data\gt500\bodyBG.paa"};
	};
	class ivgt_gb {
		displayName = "Black on gray";
		texture[] = {"\ivory_textures\data\gt500\bodyGB.paa"};
	};
	class ivgt_wb {
		displayName = "Blue on white";
		texture[] = {"\ivory_textures\data\gt500\bodyWB.paa"};
	};

	class wrx_ira {
		displayName = "IRA";
		texture[] = {"\ira_pack\vehicles\subaru.paa","","#(argb,8,8,3)color(0,0,0,0.99,CA)","#(argb,8,8,3)color(0,0,0,0.01,CA)"};
	};
	
	//d3s_amazing_a45_16
	class a45_16_m {
		displayName = "Металик";
		texture[] = {"\d3s_amazing_a45_16\data\skins\a45_ao_co.paa"};
	};
	
	class a45_16_b {
		displayName = "Синий";
		texture[] = {"\d3s_amazing_a45_16\data\skins\a45_brilliant_blue.paa"};
	};
	
	class a45_16_bl {
		displayName = "Светло-синий";
		texture[] = {"\d3s_amazing_a45_16\data\skins\a45_cavansite_blue.paa"};
	};
	
	class a45_16_br {
		displayName = "Темно-желтый";
		texture[] = {"\d3s_amazing_a45_16\data\skins\a45_citrin_brown.paa"};
	};
	
	class a45_16_r {
		displayName = "Красный";
		texture[] = {"\d3s_amazing_a45_16\data\skins\a45_hyazinth_red.paa"};
	};
	
	class a45_16_w {
		displayName = "Белый";
		texture[] = {"\d3s_amazing_a45_16\data\skins\a45_ivory.paa"};
	};
	
	class a45_16_jr {
		displayName = "Светло-красный";
		texture[] = {"\d3s_amazing_a45_16\data\skins\a45_jupiter_red.paa"};
	};
	
	class a45_16_ob {
		displayName = "Черный-обсидиан";
		texture[] = {"\d3s_amazing_a45_16\data\skins\a45_obsidian_black.paa"};
	};
	
	class a45_16_orb {
		displayName = "Кофейный";
		texture[] = {"\d3s_amazing_a45_16\data\skins\a45_orient_brown.paa"};
	};
	
	class a45_16_pw {
		displayName = "Полярно-белый";
		texture[] = {"\d3s_amazing_a45_16\data\skins\a45_polar_white.paa"};
	};
	
	class a45_16_g {
		displayName = "Серый";
		texture[] = {"\d3s_amazing_a45_16\data\skins\a45_selenit_grey.paa"};
	};
	
	//d3s_amazing_ACS8_17
	class ACS8_17_m {
		displayName = "Металик";
		texture[] = {"\d3s_amazing_ACS8_17\data\skins\i8_ao_co.paa"};
	};
	
	class ACS8_17_y {
		displayName = "Желтый";
		texture[] = {"\d3s_amazing_ACS8_17\data\skins\i8_austin_yellow.paa"};
	};
	
	class ACS8_17_bs {
		displayName = "Черный-сапфир";
		texture[] = {"\d3s_amazing_ACS8_17\data\skins\i8_black_sapphire.paa"};
	};
	
	class ACS8_17_fdr {
		displayName = "Розовый";
		texture[] = {"\d3s_amazing_ACS8_17\data\skins\i8_frozen_dark_red.paa"};
	};
	
	class ACS8_17_gp {
		displayName = "Зеленый";
		texture[] = {"\d3s_amazing_ACS8_17\data\skins\i8_green_pearl.paa"};
	};
	
	class ACS8_17_mg {
		displayName = "Темно-серый";
		texture[] = {"\d3s_amazing_ACS8_17\data\skins\i8_mineral_grey.paa"};
	};
	
	class ACS8_17_or {
		displayName = "Оранжевый";
		texture[] = {"\d3s_amazing_ACS8_17\data\skins\i8_sakhir_orange.paa"};
	};
	
	class ACS8_17_s {
		displayName = "Светло-серый";
		texture[] = {"\d3s_amazing_ACS8_17\data\skins\i8_silverstone.paa"};
	};
	
	class ACS8_17_srb {
		displayName = "Голубой";
		texture[] = {"\d3s_amazing_ACS8_17\data\skins\i8_snapper_rocks_blue.paa"};
	};
	
	class ACS8_17_ymb {
		displayName = "Светло-синий";
		texture[] = {"\d3s_amazing_ACS8_17\data\skins\i8_yas_marina_blue.paa"};
	};
	
	class ACS8_17_iaw {
		displayName = "White";
		texture[] = {"\d3s_amazing_ACS8_17\data\skins\ind\ind_alpine_white.paa"};
	};
	
	class ACS8_17_iay {
		displayName = "Yellow";
		texture[] = {"\d3s_amazing_ACS8_17\data\skins\ind\ind_austin_yellow.paa"};
	};
	
	class ACS8_17_ibs {
		displayName = "Black";
		texture[] = {"\d3s_amazing_ACS8_17\data\skins\ind\ind_black_sapphire.paa"};
	};
	
	class ACS8_17_ifdr {
		displayName = "Frozen-red";
		texture[] = {"\d3s_amazing_ACS8_17\data\skins\ind\ind_frozen_dark_red.paa"};
	};
	
	class ACS8_17_igp {
		displayName = "Green";
		texture[] = {"\d3s_amazing_ACS8_17\data\skins\ind\ind_green_pearl.paa"};
	};
	
	class ACS8_17_ing {
		displayName = "Gray";
		texture[] = {"\d3s_amazing_ACS8_17\data\skins\ind\ind_mineral_grey.paa"};
	};
	
	class ACS8_17_rust {
		displayName = "Rust";
		texture[] = {"\d3s_amazing_ACS8_17\data\skins\ind\ind_rust.paa"};
	};
	
	class ACS8_17_iso {
		displayName = "Orange";
		texture[] = {"\d3s_amazing_ACS8_17\data\skins\ind\ind_sakhir_orange.paa"};
	};
	
	class ACS8_17_is {
		displayName = "Stone";
		texture[] = {"\d3s_amazing_ACS8_17\data\skins\ind\ind_silverstone.paa"};
	};
	
	class ACS8_17_isrb {
		displayName = "Blue";
		texture[] = {"\d3s_amazing_ACS8_17\data\skins\ind\ind_snapper_rocks_blue.paa"};
	};
	
	class ACS8_17_iymb {
		displayName = "Marina";
		texture[] = {"\d3s_amazing_ACS8_17\data\skins\ind\ind_yas_marina_blue.paa"};
	};
	
	//d3s_amazing_f10_12
	class f10_12_w {
		displayName = "White";
		texture[] = {"\d3s_amazing_f10_12\data\skins\m5_alpine_white.paa"};
	};
	
	class f10_12_c {
		displayName = "Cedar";
		texture[] = {"\d3s_amazing_f10_12\data\skins\m5_atlas_cedar.paa"};
	};
	
	class f10_12_y {
		displayName = "Yellow";
		texture[] = {"\d3s_amazing_f10_12\data\skins\m5_austin_yellow.paa"};
	};
	
	class f10_12_b {
		displayName = "Blue";
		texture[] = {"\d3s_amazing_f10_12\data\skins\m5_bluestone.paa"};
	};
	
	class f10_12_s {
		displayName = "Silver";
		texture[] = {"\d3s_amazing_f10_12\data\skins\m5_cashmere_silver.paa"};
	};
	
	class f10_12_r {
		displayName = "Frozen-red";
		texture[] = {"\d3s_amazing_f10_12\data\skins\m5_frozen_dark_red.paa"};
	};
	
	class f10_12_gr {
		displayName = "Glacier-silver";
		texture[] = {"\d3s_amazing_f10_12\data\skins\m5_glacier_silver.paa"};
	};
	
	class f10_12_ib {
		displayName = "Imperia-blue";
		texture[] = {"\d3s_amazing_f10_12\data\skins\m5_imperial_blue.paa"};
	};
	
	class f10_12_j {
		displayName = "Jatoba";
		texture[] = {"\d3s_amazing_f10_12\data\skins\m5_jatoba.paa"};
	};
	
	class f10_12_mb {
		displayName = "Dark-blue";
		texture[] = {"\d3s_amazing_f10_12\data\skins\m5_mediterranean_blue.paa"};
	};
	
	class f10_12_mg {
		displayName = "Dark-gray";
		texture[] = {"\d3s_amazing_f10_12\data\skins\m5_mineral_grey.paa"};
	};
	
	class f10_12_so {
		displayName = "Orange";
		texture[] = {"\d3s_amazing_f10_12\data\skins\m5_sakhir_orange.paa"};
	};
	
	class f10_12_ss {
		displayName = "Dark-gray";
		texture[] = {"\d3s_amazing_f10_12\data\skins\m5_silverstone.paa"};
	};
	
	class f10_12_srb {
		displayName = "Light-blue";
		texture[] = {"\d3s_amazing_f10_12\data\skins\m5_snapper_rocks_blue.paa"};
	};
	
	class f10_12_sg {
		displayName = "Blak-gray";
		texture[] = {"\d3s_amazing_f10_12\data\skins\m5_sophisto_grey.paa"};
	};
	
	class f10_12_ymb {
		displayName = "Marina";
		texture[] = {"\d3s_amazing_f10_12\data\skins\m5_yas_marina_blue.paa"};
	};
	
	//d3s_amazing_f82_16
	class f82_16_m {
		displayName = "Металик";
		texture[] = {"\d3s_amazing_f82_16\data\skins\f82_ao_co.paa"};
	};
	
	class f82_16_y {
		displayName = "Желтый";
		texture[] = {"\d3s_amazing_f82_16\data\skins\f82_austin_yellow.paa"};
	};
	
	class f82_16_bs {
		displayName = "Черный-сапфир";
		texture[] = {"\d3s_amazing_f82_16\data\skins\f82_black_sapphire.paa"};
	};
	
	class f82_16_fdr {
		displayName = "Розовый";
		texture[] = {"\d3s_amazing_f82_16\data\skins\f82_frozen_dark_red.paa"};
	};
	
	class f82_16_gp {
		displayName = "Зеленый";
		texture[] = {"\d3s_amazing_f82_16\data\skins\f82_green_pearl.paa"};
	};
	
	class f82_16_or {
		displayName = "Оранжевый";
		texture[] = {"\d3s_amazing_f82_16\data\skins\f82_sakhir_orange.paa"};
	};
	
	class f82_16_s {
		displayName = "Светло-серый";
		texture[] = {"\d3s_amazing_f82_16\data\skins\f82_silverstone.paa"};
	};
	
	class f82_16_srb {
		displayName = "Голубой";
		texture[] = {"\d3s_amazing_f82_16\data\skins\f82_snapper_rocks_blue.paa"};
	};
	
	class f82_16_ymb {
		displayName = "Светло-синий";
		texture[] = {"\d3s_amazing_f82_16\data\skins\f82_yas_marina_blue.paa"};
	};
		
	//d3s_boss_15
	class boss_15_1 {
		displayName = "White-blue";
		texture[] = {"\d3s_boss_15\data\skins\01.paa"};
	};
	
	class boss_15_2 {
		displayName = "Grey-blue";
		texture[] = {"\d3s_boss_15\data\skins\03.paa"};
	};
	
	class boss_15_3 {
		displayName = "White-black";
		texture[] = {"\d3s_boss_15\data\skins\05.paa"};
	};
	
	class boss_15_4 {
		displayName = "Green-black";
		texture[] = {"\d3s_boss_15\data\skins\09.paa"};
	};
	
	class boss_15_5 {
		displayName = "Yellow-black";
		texture[] = {"\d3s_boss_15\data\skins\10.paa"};
	};
	
	class boss_15_6 {
		displayName = "Red-black";
		texture[] = {"\d3s_boss_15\data\skins\11.paa"};
	};
	
	class boss_15_7 {
		displayName = "Gray";
		texture[] = {"\d3s_boss_15\data\skins\12.paa"};
	};
	
	class boss_15_8 {
		displayName = "Blak-blue";
		texture[] = {"\d3s_boss_15\data\skins\25.paa"};
	};
	
	class boss_15_9 {
		displayName = "gray-green";
		texture[] = {"\d3s_boss_15\data\skins\heist.paa"};
	};
	
	class boss_15_10 {
		displayName = "Gray-black";
		texture[] = {"\d3s_boss_15\data\skins\37.paa"};
	};
	
	//d3s_charger_15
	class charger_15_w {
		displayName = "White";
		texture[] = {"\d3s_charger_15\data\skins\chr_ao_co.paa"};
	};
	
	class charger_15_b {
		displayName = "Blue";
		texture[] = {"\d3s_charger_15\data\skins\chr_b5_blue.paa"};
	};
	
	class charger_15_g {
		displayName = "Gray";
		texture[] = {"\d3s_charger_15\data\skins\chr_billet_silver.paa"};
	};
	
	class charger_15_dg {
		displayName = "Dark-gray";
		texture[] = {"\d3s_charger_15\data\skins\chr_granite_crystal.paa"};
	};
	
	class charger_15_dw {
		displayName = "Dark-white";
		texture[] = {"\d3s_charger_15\data\skins\chr_ivory_white.paa"};
	};
	
	class charger_15_db {
		displayName = "Dark-blue";
		texture[] = {"\d3s_charger_15\data\skins\chr_jazz_blue.paa"};
	};
	
	class charger_15_pb {
		displayName = "Black";
		texture[] = {"\d3s_charger_15\data\skins\chr_phantom_black.paa"};
	};
	
	class charger_15_pb1 {
		displayName = "Black2";
		texture[] = {"\d3s_charger_15\data\skins\chr_pitch_black.paa"};
	};
	
	class charger_15_rd {
		displayName = "Dark-Red";
		texture[] = {"\d3s_charger_15\data\skins\chr_redline.paa"};
	};
	
	class charger_15_r {
		displayName = "red";
		texture[] = {"\d3s_charger_15\data\skins\chr_tor_red.paa"};
	};
	
	class charger_15_cr {
		displayName = "Red-carbon";
		texture[] = {"\d3s_charger_15\data\skins\fnf7_ao_co.paa"};
	};
	
	//d3s_cherokee_18
	class cherokee_18_w {
		displayName = "White";
		texture[] = {"\d3s_cherokee_18\data\skins\CHER_AO_co.paa"};
	};
	
	class cherokee_18_dw {
		displayName = "Dark-white";
		texture[] = {"\d3s_cherokee_18\data\skins\CHER_Billet_Silver.paa"};
	};
	
	class cherokee_18_b {
		displayName = "Black";
		texture[] = {"\d3s_cherokee_18\data\skins\CHER_Brilliant_Black.paa"};
	};
	
	class cherokee_18_dr {
		displayName = "Dark-Red";
		texture[] = {"\d3s_cherokee_18\data\skins\CHER_Deep_Cherry_Red.paa"};
	};
	
	class cherokee_18_g {
		displayName = "Gray";
		texture[] = {"\d3s_cherokee_18\data\skins\CHER_Granite_Crystal.paa"};
	};
	
	class cherokee_18_v {
		displayName = "Violet";
		texture[] = {"\d3s_cherokee_18\data\skins\CHER_Maximum_Steel.paa"};
	};
	
	class cherokee_18_r {
		displayName = "Red";
		texture[] = {"\d3s_cherokee_18\data\skins\CHER_Redline_Red.paa"};
	};
	
	class cherokee_18_p {
		displayName = "Perl";
		texture[] = {"\d3s_cherokee_18\data\skins\CHER_Sandstone_Perl.paa"};
	};
	
	class cherokee_18_m {
		displayName = "Marina";
		texture[] = {"\d3s_cherokee_18\data\skins\CHER_True_Blue.paa"};
	};
	
	//d3s_crown_98
	class crown_98_w {
		displayName = "White";
		texture[] = {"\d3s_crown_98\data\skins\cvpi_ao_co.paa"};
	};
	
	class crown_98_g {
		displayName = "Gold";
		texture[] = {"\d3s_crown_98\data\skins\cvpi_ao_gold_co.paa"};
	};
	
	class crown_98_gr {
		displayName = "Gray";
		texture[] = {"\d3s_crown_98\data\skins\cvpi_ao_gray_co.paa"};
	};
	
	class crown_98_dg {
		displayName = "Dark-gray";
		texture[] = {"\d3s_crown_98\data\skins\cvpi_ao_mocha_co.paa"};
	};
	
	class crown_98_r {
		displayName = "Red";
		texture[] = {"\d3s_crown_98\data\skins\cvpi_ao_red_co.paa"};
	};
	
	class crown_98_s {
		displayName = "Silver";
		texture[] = {"\d3s_crown_98\data\skins\cvpi_ao_silver_co.paa"};
	};
	
	//d3s_ctsv_16
	class ctsv_16_b {
		displayName = "Black";
		texture[] = {"\d3s_ctsv_16\data\skins\cts_ao_black_co.paa"};
	};
	
	class ctsv_16_bl {
		displayName = "Blue";
		texture[] = {"\d3s_ctsv_16\data\skins\cts_ao_blue_co.paa"};
	};
	
	class ctsv_16_l {
		displayName = "Latte";
		texture[] = {"\d3s_ctsv_16\data\skins\cts_ao_latte_co.paa"};
	};
	
	class ctsv_16_r {
		displayName = "Red";
		texture[] = {"\d3s_ctsv_16\data\skins\cts_ao_red_co.paa"};
	};
	
	class ctsv_16_s {
		displayName = "Silver";
		texture[] = {"\d3s_ctsv_16\data\skins\cts_ao_silver_co.paa"};
	};
	
	class ctsv_16_w {
		displayName = "White";
		texture[] = {"\d3s_ctsv_16\data\skins\cts_ao_co.paa"};
	};
	
	//d3s_durango_18
	class durango_18_w {
		displayName = "White";
		texture[] = {"\d3s_durango_18\data\skins\durango_ao_co.paa"};
	};
	
	class durango_18_s {
		displayName = "Silver";
		texture[] = {"\d3s_durango_18\data\skins\durango_billet_silver.paa"};
	};
	
	class durango_18_b {
		displayName = "Black";
		texture[] = {"\d3s_durango_18\data\skins\durango_brilliant_black.paa"};
	};
	
	class durango_18_dr {
		displayName = "Dark-Red";
		texture[] = {"\d3s_durango_18\data\skins\durango_deep_cherry_red.paa"};
	};
	
	class durango_18_g {
		displayName = "Granit";
		texture[] = {"\d3s_durango_18\data\skins\durango_granite_crystal.paa"};
	};
	
	class durango_18_v {
		displayName = "Violet";
		texture[] = {"\d3s_durango_18\data\skins\durango_maximum_steel.paa"};
	};
	
	class durango_18_r {
		displayName = "Red";
		texture[] = {"\d3s_durango_18\data\skins\durango_redline_red.paa"};
	};
	
	class durango_18_p {
		displayName = "Perl";
		texture[] = {"\d3s_durango_18\data\skins\durango_sandstone_perl.paa"};
	};
	
	class durango_18_ssrt {
		displayName = "Silver";
		texture[] = {"\d3s_durango_18\data\skins\durango_srt_billet_silver.paa"};
	};
	
	class durango_18_bsrt {
		displayName = "Black";
		texture[] = {"\d3s_durango_18\data\skins\durango_srt_brilliant_black.paa"};
	};
	
	class durango_18_wsrt {
		displayName = "White";
		texture[] = {"\d3s_durango_18\data\skins\durango_srt_co.paa"};
	};
	
	class durango_18_drsrt {
		displayName = "Dark-Red";
		texture[] = {"\d3s_durango_18\data\skins\durango_srt_deep_cherry_red.paa"};
	};
	
	class durango_18_gsrt {
		displayName = "Granit";
		texture[] = {"\d3s_durango_18\data\skins\durango_srt_granite_crystal.paa"};
	};
	
	class durango_18_grsrt {
		displayName = "Gray";
		texture[] = {"\d3s_durango_18\data\skins\durango_srt_maximum_steel.paa"};
	};
	
	class durango_18_rsrt {
		displayName = "Red";
		texture[] = {"\d3s_durango_18\data\skins\durango_srt_redline_red.paa"};
	};
	
	class durango_18_snake {
		displayName = "Red-carbon";
		texture[] = {"\d3s_durango_18\data\skins\vip\red_shaker.paa"};
	};
	
	
	//d3s_f85_15
	class f85_15_w {
		displayName = "White";
		texture[] = {"\d3s_f85_15\data\skins\F85_AO_co.paa"};
	};
	
	class f85_15_y {
		displayName = "Yellow";
		texture[] = {"\d3s_f85_15\data\skins\F85_Austin_Yellow.paa"};
	};
	
	class f85_15_b {
		displayName = "Black";
		texture[] = {"\d3s_f85_15\data\skins\F85_Black_Sapphire.paa"};
	};
	
	class f85_15_q {
		displayName = "Latte";
		texture[] = {"\d3s_f85_15\data\skins\F85_Champagne_Quartz.paa"};
	};
	
	class f85_15_dr {
		displayName = "Dark-Red";
		texture[] = {"\d3s_f85_15\data\skins\F85_Frozen_Dark_Red.paa"};
	};
	
	class f85_15_g {
		displayName = "Green";
		texture[] = {"\d3s_f85_15\data\skins\F85_Green_Pearl.paa"};
	};
	
	class f85_15_m {
		displayName = "Marina";
		texture[] = {"\d3s_f85_15\data\skins\F85_Marina_Bay_Blue.paa"};
	};
	
	class f85_15_r {
		displayName = "Red";
		texture[] = {"\d3s_f85_15\data\skins\F85_Melbourne_Red.paa"};
	};
	
	class f85_15_mg {
		displayName = "Gray";
		texture[] = {"\d3s_f85_15\data\skins\F85_Mineral_Grey.paa"};
	};
	
	class f85_15_o {
		displayName = "Orange";
		texture[] = {"\d3s_f85_15\data\skins\F85_Sakhir_Orange.paa"};
	};
	
	class f85_15_s {
		displayName = "Silver";
		texture[] = {"\d3s_f85_15\data\skins\F85_Silverstone.paa"};
	};
	
	class f85_15_db {
		displayName = "Dark-blue";
		texture[] = {"\d3s_f85_15\data\skins\F85_Snapper_Rocks_Blue.paa"};
	};
	
	class f85_15_mm {
		displayName = "Marina2";
		texture[] = {"\d3s_f85_15\data\skins\F85_Yas_Marina_Blue.paa"};
	};
	
	//d3s_f90_18
	class f90_18_w {
		displayName = "White";
		texture[] = {"\d3s_f90_18\data\skins\F90_AO_co.paa"};
	};
	
	class f90_18_c {
		displayName = "Cedar";
		texture[] = {"\d3s_f90_18\data\skins\F90_Atlas_Cedar.paa"};
	};
	
	class f90_18_b {
		displayName = "Black";
		texture[] = {"\d3s_f90_18\data\skins\F90_Black_Uni.paa"};
	};
	
	class f90_18_g {
		displayName = "Gray";
		texture[] = {"\d3s_f90_18\data\skins\F90_Bluestone.paa"};
	};
	
	class f90_18_s {
		displayName = "Silver";
		texture[] = {"\d3s_f90_18\data\skins\F90_Cashmere_Silver.paa"};
	};
	
	class f90_18_gs {
		displayName = "GSilver";
		texture[] = {"\d3s_f90_18\data\skins\F90_Glacier_Silver.paa"};
	};
	
	class f90_18_bl {
		displayName = "Blue";
		texture[] = {"\d3s_f90_18\data\skins\F90_Imperial_Blue.paa"};
	};
	
	class f90_18_j {
		displayName = "Jatoba";
		texture[] = {"\d3s_f90_18\data\skins\F90_Jatoba.paa"};
	};
	
	class f90_18_mb {
		displayName = "Blue2";
		texture[] = {"\d3s_f90_18\data\skins\F90_Mediterranean_Blue.paa"};
	};
	
	class f90_18_sg {
		displayName = "Saphire";
		texture[] = {"\d3s_f90_18\data\skins\F90_Sophisto_Grey.paa"};
	};
	
	class f90_18_pw {
		displayName = "Power";
		texture[] = {"\d3s_f90_18\data\skins\VIP\F90_MPower.paa"};
	};
	
	//d3s_fpace_17
	class fpace_17_w {
		displayName = "White";
		texture[] = {"\d3s_fpace_17\data\skins\f_ao_co.paa"};
	};
	
	class fpace_17_bc {
		displayName = "Black-Cheery";
		texture[] = {"\d3s_fpace_17\data\skins\f_black_cherry.paa"};
	};
	
	class fpace_17_b {
		displayName = "Blue";
		texture[] = {"\d3s_fpace_17\data\skins\f_bluefire.paa"};
	};
	
	class fpace_17_dg {
		displayName = "Dark-green";
		texture[] = {"\d3s_fpace_17\data\skins\f_british_racing_green.paa"};
	};
	
	class fpace_17_db {
		displayName = "Dark-blue";
		texture[] = {"\d3s_fpace_17\data\skins\f_celestian_black.paa"};
	};
	
	class fpace_17_i {
		displayName = "ungot";
		texture[] = {"\d3s_fpace_17\data\skins\f_ingot.paa"};
	};
	
	class fpace_17_r {
		displayName = "Red";
		texture[] = {"\d3s_fpace_17\data\skins\f_italian_racing_red.paa"};
	};
	
	class fpace_17_bl {
		displayName = "Black";
		texture[] = {"\d3s_fpace_17\data\skins\f_ultimate_black.paa"};
	};
	
	//d3s_g65amg_16
	class g65amg_16_cb {
		displayName = "Brown";
		texture[] = {"\d3s_g65amg_16\data\skins\463_Citrin_Brown.paa"};
	};
	
	class g65amg_16_eg {
		displayName = "Green";
		texture[] = {"\d3s_g65amg_16\data\skins\463_Emerald_Green.paa"};
	};
	
	class g65amg_16_hr {
		displayName = "Red";
		texture[] = {"\d3s_g65amg_16\data\skins\463_Hyacinth_Red.paa"};
	};
	
	class g65amg_16_ob {
		displayName = "Obsidian-Black";
		texture[] = {"\d3s_g65amg_16\data\skins\463_Obsidian_Black.paa"};
	};
	
	class g65amg_16_pg {
		displayName = "Periklas-Green";
		texture[] = {"\d3s_g65amg_16\data\skins\463_Periklas_Green.paa"};
	};
	
	class g65amg_16_pw {
		displayName = "Polar-White";
		texture[] = {"\d3s_g65amg_16\data\skins\463_Polar_White.paa"};
	};
	
	class g65amg_16_tb {
		displayName = "Tansanite-Blue";
		texture[] = {"\d3s_g65amg_16\data\skins\463_Tansanite_Blue.paa"};
	};
	
	class g65amg_16_tg {
		displayName = "Tenorite-Grey";
		texture[] = {"\d3s_g65amg_16\data\skins\463_Tenorite_Grey.paa"};
	};
	
	class g65amg_16_w {
		displayName = "White";
		texture[] = {"\d3s_g65amg_16\data\skins\G35_AO_co.paa"};
	};
	
	class g65amg_16_cb1 {
		displayName = "Brown";
		texture[] = {"\d3s_g65amg_16\data\skins\G35_Citrin_Brown.paa"};
	};
	
	class g65amg_16_hr2 {
		displayName = "Red";
		texture[] = {"\d3s_g65amg_16\data\skins\G35_Heacinth_Red.paa"};
	};
	
	class g65amg_16_pw4 {
		displayName = "Polar-White";
		texture[] = {"\d3s_g65amg_16\data\skins\G35_Polar_White.paa"};
	};
	
	class g65amg_16_tb5 {
		displayName = "Tansanite-Blue";
		texture[] = {"\d3s_g65amg_16\data\skins\G35_Tansanite_Blue.paa"};
	};
	
	class g65amg_16_tg6 {
		displayName = "Tenorite-Grey";
		texture[] = {"\d3s_g65amg_16\data\skins\G35_Tenorite_Grey.paa"};
	};
	
	class g65amg_16_wg350 {
		displayName = "White";
		texture[] = {"\d3s_g65amg_16\data\skins\G350_AO_co.paa"};
	};
	
	class g65amg_16_cb350 {
		displayName = "Brown";
		texture[] = {"\d3s_g65amg_16\data\skins\G350_Citrin_Brown.paa"};
	};
	
	class g65amg_16_ds350 {
		displayName = "Desert-Sand";
		texture[] = {"\d3s_g65amg_16\data\skins\G350_Desert_Sand.paa"};
	};
	
	class g65amg_16_dsg350 {
		displayName = "Diamant-Silver";
		texture[] = {"\d3s_g65amg_16\data\skins\G350_Diamant_Silver.paa"};
	};
	
	class g65amg_16_eg350 {
		displayName = "Emeraldgreen";
		texture[] = {"\d3s_g65amg_16\data\skins\G350_Emerald_Green.paa"};
	};
	
	class g65amg_16_hr350 {
		displayName = "Red";
		texture[] = {"\d3s_g65amg_16\data\skins\G350_Heacinth_Red.paa"};
	};
	
	class g65amg_16_mb350 {
		displayName = "Mysti-Blue";
		texture[] = {"\d3s_g65amg_16\data\skins\G350_Mysti_Blue.paa"};
	};
	
	class g65amg_16_ob350 {
		displayName = "Obsidian-Black";
		texture[] = {"\d3s_g65amg_16\data\skins\G350_Obsidian_Black.paa"};
	};
	
	class g65amg_16_pg350 {
		displayName = "Periklas-Green";
		texture[] = {"\d3s_g65amg_16\data\skins\G350_Periklas_Green.paa"};
	};
	
	class g65amg_16_tb350 {
		displayName = "Tansanite-Blue";
		texture[] = {"\d3s_g65amg_16\data\skins\G350_Tansanite_Blue.paa"};
	};
	
	class g65amg_16_tg350 {
		displayName = "Tenorite-Grey";
		texture[] = {"\d3s_g65amg_16\data\skins\G350_Tenorite_Grey.paa"};
	};
	
	class g65amg_16_tr350 {
		displayName = "Thulit-Red";
		texture[] = {"\d3s_g65amg_16\data\skins\G350_Thulit_Red.paa"};
	};
	
	class g65amg_16_cb500 {
		displayName = "White";
		texture[] = {"\d3s_g65amg_16\data\skins\G500_AO_co.paa"};
	};
	
	class g65amg_16_cj500 {
		displayName = "Brown";
		texture[] = {"\d3s_g65amg_16\data\skins\G500_Citrin_Brown.paa"};
	};
	
	class g65amg_16_ds500 {
		displayName = "Desert-Sand";
		texture[] = {"\d3s_g65amg_16\data\skins\G500_Desert_Sand.paa"};
	};
	
	class g65amg_16_dsg500 {
		displayName = "Diamant-Silver";
		texture[] = {"\d3s_g65amg_16\data\skins\G500_Diamant_Silver.paa"};
	};
	
	class g65amg_16_eg500 {
		displayName = "Emeraldgreen";
		texture[] = {"\d3s_g65amg_16\data\skins\G500_Emerald_Green.paa"};
	};
	
	class g65amg_16_hr500 {
		displayName = "Red";
		texture[] = {"\d3s_g65amg_16\data\skins\G500_Heacinth_Red.paa"};
	};
	
	class g65amg_16_mb500 {
		displayName = "Mysti-Blue";
		texture[] = {"\d3s_g65amg_16\data\skins\G500_Mysti_Blue.paa"};
	};
	
	class g65amg_16_ob500 {
		displayName = "Obsidian-Black";
		texture[] = {"\d3s_g65amg_16\data\skins\G500_Obsidian_Black.paa"};
	};
	
	class g65amg_16_pg500 {
		displayName = "Periklas-Green";
		texture[] = {"\d3s_g65amg_16\data\skins\G500_Periklas_Green.paa"};
	};
	
	class g65amg_16_tb500 {
		displayName = "Tansanite-Blue";
		texture[] = {"\d3s_g65amg_16\data\skins\G500_Tansanite_Blue.paa"};
	};
	
	class g65amg_16_tg500 {
		displayName = "Tenorite-Grey";
		texture[] = {"\d3s_g65amg_16\data\skins\G500_Tenorite_Grey.paa"};
	};
	
	class g65amg_16_tr500 {
		displayName = "Thulit-Red";
		texture[] = {"\d3s_g65amg_16\data\skins\G500_Thulit_Red.paa"};
	};
	
	class g65amg_16_ao63 {
		displayName = "AO";
		texture[] = {"\d3s_g65amg_16\data\skins\G63_AO_co.paa"};
	};
	
	class g65amg_16_cb63 {
		displayName = "Citrin-Brown";
		texture[] = {"\d3s_g65amg_16\data\skins\G63_Citrin_Brown.paa"};
	};
	
	class g65amg_16_cg63 {
		displayName = "Colour-Green";
		texture[] = {"\d3s_g65amg_16\data\skins\G63_Colour_Green.paa"};
	};
	
	class g65amg_16_co63 {
		displayName = "Colour-Orange";
		texture[] = {"\d3s_g65amg_16\data\skins\G63_Colour_Orange.paa"};
	};
	
	class g65amg_16_cp63 {
		displayName = "Colour-Purple";
		texture[] = {"\d3s_g65amg_16\data\skins\G63_Colour_Purple.paa"};
	};
	
	class g65amg_16_cr63 {
		displayName = "Colour-Red";
		texture[] = {"\d3s_g65amg_16\data\skins\G63_Colour_Red.paa"};
	};
	
	class g65amg_16_cw63 {
		displayName = "Colour-White";
		texture[] = {"\d3s_g65amg_16\data\skins\G63_Colour_White.paa"};
	};
	
	class g65amg_16_cy63 {
		displayName = "Colour-Yellow";
		texture[] = {"\d3s_g65amg_16\data\skins\G63_Colour_Yellow.paa"};
	};
	
	class g65amg_16_ds63 {
		displayName = "Desert-Sand";
		texture[] = {"\d3s_g65amg_16\data\skins\G63_Desert_Sand.paa"};
	};
	
	class g65amg_16_dsg63 {
		displayName = "Diamant-Silver";
		texture[] = {"\d3s_g65amg_16\data\skins\G63_Diamant_Silver.paa"};
	};
	
	class g65amg_16_eg63 {
		displayName = "Emeraldgreen";
		texture[] = {"\d3s_g65amg_16\data\skins\G63_Emerald_Green.paa"};
	};
	
	class g65amg_16_hr63 {
		displayName = "Red";
		texture[] = {"\d3s_g65amg_16\data\skins\G63_Heacinth_Red.paa"};
	};
	
	class g65amg_16_mb63 {
		displayName = "Mysti-Blue";
		texture[] = {"\d3s_g65amg_16\data\skins\G63_Mysti_Blue.paa"};
	};
	
	class g65amg_16_ob63 {
		displayName = "Obsidian-Black";
		texture[] = {"\d3s_g65amg_16\data\skins\G63_Obsidian_Black.paa"};
	};
	
	class g65amg_16_pg63 {
		displayName = "Periklas-Green";
		texture[] = {"\d3s_g65amg_16\data\skins\G63_Periklas_Green.paa"};
	};
	
	class g65amg_16_tb63 {
		displayName = "Tansanite-Blue";
		texture[] = {"\d3s_g65amg_16\data\skins\G63_Tansanite_Blue.paa"};
	};
	
	class g65amg_16_tg63 {
		displayName = "Tenorite-Grey";
		texture[] = {"\d3s_g65amg_16\data\skins\G63_Tenorite_Grey.paa"};
	};
	
	class g65amg_16_tr63 {
		displayName = "Thulit-Red";
		texture[] = {"\d3s_g65amg_16\data\skins\G63_Thulit_Red.paa"};
	};
	
	//d3s_ghibli_14
	class ghibli_14_ba {
		displayName = "bianco-alpine";
		texture[] = {"\d3s_ghibli_14\data\skins\ghibli_ao_bianco_alpi.paa"};
	};
	
	class ghibli_14_be {
		displayName = "blu-emozione";
		texture[] = {"\d3s_ghibli_14\data\skins\ghibli_ao_blu_emozione.paa"};
	};
	
	class ghibli_14_bp {
		displayName = "blu-passione";
		texture[] = {"\d3s_ghibli_14\data\skins\ghibli_ao_blu_passione.paa"};
	};
	
	class ghibli_14_ac {
		displayName = "champagne";
		texture[] = {"\d3s_ghibli_14\data\skins\ghibli_ao_champagne.paa"};
	};
	
	class ghibli_14_w {
		displayName = "White";
		texture[] = {"\d3s_ghibli_14\data\skins\ghibli_ao_co.paa"};
	};
	
	class ghibli_14_ae {
		displayName = "Estero";
		texture[] = {"\d3s_ghibli_14\data\skins\ghibli_ao_esteso.paa"};
	};
	
	class ghibli_14_aeo {
		displayName = "Estero-Orange";
		texture[] = {"\d3s_ghibli_14\data\skins\ghibli_ao_esteso_orange.paa"};
	};
	
	class ghibli_14_rr {
		displayName = "Rubin";
		texture[] = {"\d3s_ghibli_14\data\skins\ghibli_ao_rosso_rubino.paa"};
	};
	
	class ghibli_14_b {
		displayName = "Black";
		texture[] = {"\d3s_ghibli_14\data\skins\ghibli_black.paa"};
	};
	
	class ghibli_14_b1 {
		displayName = "Blue";
		texture[] = {"\d3s_ghibli_14\data\skins\ghibli_blue.paa"};
	};
	
	class ghibli_14_bz {
		displayName = "Breeze";
		texture[] = {"\d3s_ghibli_14\data\skins\ghibli_breeze.paa"};
	};
	
	class ghibli_14_g {
		displayName = "Green";
		texture[] = {"\d3s_ghibli_14\data\skins\ghibli_green.paa"};
	};
	
	class ghibli_14_r {
		displayName = "Red";
		texture[] = {"\d3s_ghibli_14\data\skins\ghibli_red.paa"};
	};
	
	class ghibli_14_y {
		displayName = "Yellow";
		texture[] = {"\d3s_ghibli_14\data\skins\ghibli_yellow.paa"};
	};
	
	//d3s_giulia_16
	class giulia_16_w {
		displayName = "White";
		texture[] = {"\d3s_giulia_16\data\skins\giulia_quad_ao_co.paa"};
	};
	
	class giulia_16_k {
		displayName = "Kream";
		texture[] = {"\d3s_giulia_16\data\skins\giulia_quad_ivory.paa"};
	};
	
	class giulia_16_mb {
		displayName = "Misano-Blue";
		texture[] = {"\d3s_giulia_16\data\skins\giulia_quad_misano_blue.paa"};
	};
	
	class giulia_16_qmb {
		displayName = "Montecarlo-Blue";
		texture[] = {"\d3s_giulia_16\data\skins\giulia_quad_montecarlo_blue.paa"};
	};
	
	class giulia_16_ra {
		displayName = "Rosso-Alfa";
		texture[] = {"\d3s_giulia_16\data\skins\giulia_quad_rosso_alfa.paa"};
	};
	
	class giulia_16_rc {
		displayName = "Rosso-Prime";
		texture[] = {"\d3s_giulia_16\data\skins\giulia_quad_rosso_competizione.paa"};
	};
	
	class giulia_16_sg {
		displayName = "Stone-Gray";
		texture[] = {"\d3s_giulia_16\data\skins\giulia_quad_silverstone_gray.paa"};
	};
	
	class giulia_16_vg {
		displayName = "Vesuvio-Gray";
		texture[] = {"\d3s_giulia_16\data\skins\giulia_quad_vesuvio_gray.paa"};
	};
	
	class giulia_16_vb {
		displayName = "Black-Vulkan";
		texture[] = {"\d3s_giulia_16\data\skins\giulia_quad_vulcano_black.paa"};
	};
	
	class giulia_16_ti_w {
		displayName = "White";
		texture[] = {"\d3s_giulia_16\data\skins\giulia_ti_ao_co.paa"};
	};
	
	class giulia_16_ti_k {
		displayName = "Kream";
		texture[] = {"\d3s_giulia_16\data\skins\giulia_ti_ivory.paa"};
	};
	
	class giulia_16_ti_qmb {
		displayName = "Montecarlo-Blue";
		texture[] = {"\d3s_giulia_16\data\skins\giulia_ti_montecarlo_blue.paa"};
	};
	
	class giulia_16_ti_rc {
		displayName = "Rosso-Prime";
		texture[] = {"\d3s_giulia_16\data\skins\giulia-ti_rosso_competizione.paa"};
	};
	
	class giulia_16_ti_sg {
		displayName = "Stone-Gray";
		texture[] = {"\d3s_giulia_16\data\skins\giulia_ti_silverstone_gray.paa"};
	};
	
	class giulia_16_ti_vg {
		displayName = "Vesuvio-Gray";
		texture[] = {"\d3s_giulia_16\data\skins\giulia_ti_vesuvio_gray.paa"};
	};
	
	class giulia_16_ti_vb {
		displayName = "Black-Vulkan";
		texture[] = {"\d3s_giulia_16\data\skins\giulia_ti_vulcano_black.paa"};
	};
	
	//d3s_levante_17
	class levante_17_b {
		displayName = "Black";
		texture[] = {"\d3s_levante_17\data\skins\leather_black.paa"};
	};
	
	class levante_17_r {
		displayName = "Red";
		texture[] = {"\d3s_levante_17\data\skins\leather_red.paa"};
	};
	
	class levante_17_w {
		displayName = "White";
		texture[] = {"\d3s_levante_17\data\skins\leather_white.paa"};
	};
	
	class levante_17_y {
		displayName = "Yellow";
		texture[] = {"\d3s_levante_17\data\skins\leather_yellow.paa"};
	};
	
	class levante_17_ba {
		displayName = "Alpine";
		texture[] = {"\d3s_levante_17\data\skins\lev_ao_bianco_alpi.paa"};
	};
	
	class levante_17_be {
		displayName = "Emozine-Blue";
		texture[] = {"\d3s_levante_17\data\skins\lev_ao_blu_emozione.paa"};
	};
	
	class levante_17_bp {
		displayName = "Blussione";
		texture[] = {"\d3s_levante_17\data\skins\lev_ao_blu_passione.paa"};
	};
	
	class levante_17_ch {
		displayName = "Champione";
		texture[] = {"\d3s_levante_17\data\skins\lev_ao_champagne.paa"};
	};
	
	class levante_17_ao {
		displayName = "Alpine-2";
		texture[] = {"\d3s_levante_17\data\skins\lev_ao_co.paa"};
	};
	
	class levante_17_e {
		displayName = "Estesso";
		texture[] = {"\d3s_levante_17\data\skins\lev_ao_esteso.paa"};
	};
	
	class levante_17_eo {
		displayName = "Estesso-Orange";
		texture[] = {"\d3s_levante_17\data\skins\lev_ao_esteso_orange.paa"};
	};
	
	class levante_17_m {
		displayName = "Metallic";
		texture[] = {"\d3s_levante_17\data\skins\lev_ao_grigio.paa"};
	};
	
	class levante_17_mk {
		displayName = "Metall-Cream";
		texture[] = {"\d3s_levante_17\data\skins\lev_ao_grigio_maratea.paa"};
	};
	
	//d3s_lx570_16
	class lx570_16_b {
		displayName = "Biej";
		texture[] = {"\d3s_lx570_16\data\skins\bieje.paa"};
	};
	
	class lx570_16_bk {
		displayName = "Black";
		texture[] = {"\d3s_lx570_16\data\skins\black.paa"};
	};
	
	class lx570_16_bo {
		displayName = "Black-Onyx";
		texture[] = {"\d3s_lx570_16\data\skins\black_onyx.paa"};
	};
	
	class lx570_16_db {
		displayName = "Blue";
		texture[] = {"\d3s_lx570_16\data\skins\deep_blue.paa"};
	};
	
	class lx570_16_g {
		displayName = "Grey";
		texture[] = {"\d3s_lx570_16\data\skins\grey.paa"};
	};
	
	class lx570_16_lg {
		displayName = "Light-Grey";
		texture[] = {"\d3s_lx570_16\data\skins\light_grey.paa"};
	};
	
	class lx570_16_lu {
		displayName = "Lumi";
		texture[] = {"\d3s_lx570_16\data\skins\lumi.paa"};
	};
	
	class lx570_16bw_w {
		displayName = "White";
		texture[] = {"\d3s_lx570_16\data\skins\lx570_ao_bw_co.paa"};
	};
	
	class lx570_16_w {
		displayName = "White";
		texture[] = {"\d3s_lx570_16\data\skins\lx570_ao_co.paa"};
	};
	
	class lx570_16_mr {
		displayName = "Mercury";
		texture[] = {"\d3s_lx570_16\data\skins\mercury.paa"};
	};
	
	class lx570_16_ng {
		displayName = "Nebula";
		texture[] = {"\d3s_lx570_16\data\skins\nebula_gray.paa"};
	};
	
	class lx570_16_vip1 {
		displayName = "1";
		texture[] = {"\d3s_lx570_16\data\skins\pirates\pirates_1.paa"};
	};
	
	class lx570_16_vip2 {
		displayName = "10";
		texture[] = {"\d3s_lx570_16\data\skins\pirates\pirates_10.paa"};
	};
	
	class lx570_16_vip3 {
		displayName = "2";
		texture[] = {"\d3s_lx570_16\data\skins\pirates\pirates_2.paa"};
	};
	
	class lx570_16_vip4 {
		displayName = "3";
		texture[] = {"\d3s_lx570_16\data\skins\pirates\pirates_3.paa"};
	};
	
	class lx570_16_vip5 {
		displayName = "4";
		texture[] = {"\d3s_lx570_16\data\skins\pirates\pirates_4.paa"};
	};
	
	class lx570_16_vip6 {
		displayName = "5";
		texture[] = {"\d3s_lx570_16\data\skins\pirates\pirates_5.paa"};
	};
	
	class lx570_16_vip7 {
		displayName = "6";
		texture[] = {"\d3s_lx570_16\data\skins\pirates\pirates_6.paa"};
	};
	
	class lx570_16_vip8 {
		displayName = "7";
		texture[] = {"\d3s_lx570_16\data\skins\pirates\pirates_7.paa"};
	};
	
	class lx570_16_vip9 {
		displayName = "8";
		texture[] = {"\d3s_lx570_16\data\skins\pirates\pirates_8.paa"};
	};
	
	class lx570_16_vip10 {
		displayName = "9";
		texture[] = {"\d3s_lx570_16\data\skins\pirates\pirates_9.paa"};
	};
	
	//d3s_nemises_452
	class nemises_452_dg {
		displayName = "Dark-Green";
		texture[] = {"\d3s_nemises_452\data\452_ao_darkgreen_co.paa"};
	};
	
	class nemises_452_g {
		displayName = "Green";
		texture[] = {"\d3s_nemises_452\data\452_ao_green_co.paa"};
	};
	
	class nemises_452_g2 {
		displayName = "Green-2";
		texture[] = {"\d3s_nemises_452\data\452_ao_green2_co.paa"};
	};
	
	class nemises_452_r {
		displayName = "Red";
		texture[] = {"\d3s_nemises_452\data\452_ao_red_co.paa"};
	};
	
	class nemises_452_r2 {
		displayName = "Red-2";
		texture[] = {"\d3s_nemises_452\data\452_ao_red2_co.paa"};
	};
	
	class nemises_452_w {
		displayName = "White";
		texture[] = {"\d3s_nemises_452\data\452_ao_white_co.paa"};
	};
	
	//d3s_nemises_evoque_16
	class evoque_16_g {
		displayName = "Green";
		texture[] = {"\d3s_nemises_evoque_16\data\skins\evoque_aintree_green.paa"};
	};
	
	class evoque_16_w {
		displayName = "White";
		texture[] = {"\d3s_nemises_evoque_16\data\skins\evoque_ao_co.paa"};
	};
	
	class evoque_16_bi {
		displayName = "Ice";
		texture[] = {"\d3s_nemises_evoque_16\data\skins\evoque_baltoro_ice.paa"};
	};
	
	class evoque_16_cg {
		displayName = "Gray";
		texture[] = {"\d3s_nemises_evoque_16\data\skins\evoque_corris_grey.paa"};
	};
	
	class evoque_16_fr {
		displayName = "Red";
		texture[] = {"\d3s_nemises_evoque_16\data\skins\evoque_fienze_red.paa"};
	};
	
	class evoque_16_is {
		displayName = "Silver";
		texture[] = {"\d3s_nemises_evoque_16\data\skins\evoque_indus_silver.paa"};
	};
	
	class evoque_16_ks {
		displayName = "Stone";
		texture[] = {"\d3s_nemises_evoque_16\data\skins\evoque_kaikoura_stone.paa"};
	};
	
	class evoque_16_lb {
		displayName = "Blue";
		texture[] = {"\d3s_nemises_evoque_16\data\skins\evoque_loire_blue.paa"};
	};
	
	class evoque_16_sb {
		displayName = "Black";
		texture[] = {"\d3s_nemises_evoque_16\data\skins\evoque_santorini_black.paa"};
	};
	
	class evoque_16_sg {
		displayName = "Gray";
		texture[] = {"\d3s_nemises_evoque_16\data\skins\evoque_scotia_grey.paa"};
	};
	
	class evoque_16_wg {
		displayName = "WGray";
		texture[] = {"\d3s_nemises_evoque_16\data\skins\evoque_waitomo_grey.paa"};
	};
	
	class evoque_16_yw {
		displayName = "White";
		texture[] = {"\d3s_nemises_evoque_16\data\skins\evoque_yulong_white.paa"};
	};
	
	//d3s_nemises_explorer_13
	class explorer_13_bsc_vip4 {
		displayName = "Black-Water";
		texture[] = {"\d3s_nemises_explorer_13\data\skins\bsc.paa"};
	};
	
	class explorer_13_bs_vip4 {
		displayName = "Black-Water";
		texture[] = {"\d3s_nemises_explorer_13\data\skins\bw.paa"};
	};
	
	class explorer_13_ex {
		displayName = "Rare";
		texture[] = {"\d3s_nemises_explorer_13\data\skins\ex.paa"};
	};
	
	class explorer_13_ao {
		displayName = "AO";
		texture[] = {"\d3s_nemises_explorer_13\data\skins\exp_ao_co.paa"};
	};
	
	class explorer_13_ab {
		displayName = "Bronze";
		texture[] = {"\d3s_nemises_explorer_13\data\skins\exp_bronze_fire.paa"};
	};
	
	class explorer_13_db {
		displayName = "Deep-Blue";
		texture[] = {"\d3s_nemises_explorer_13\data\skins\exp_deep_blue.paa"};
	};
	
	class explorer_13_ga {
		displayName = "Ginger";
		texture[] = {"\d3s_nemises_explorer_13\data\skins\exp_ginger_ale.paa"};
	};
	
	class explorer_13_gd {
		displayName = "Green-Demon";
		texture[] = {"\d3s_nemises_explorer_13\data\skins\exp_green_gem.paa"};
	};
	
	class explorer_13_is {
		displayName = "Ingo";
		texture[] = {"\d3s_nemises_explorer_13\data\skins\exp_ingot_silver.paa"};
	};
	
	class explorer_13_kb {
		displayName = "Kodal-Brown";
		texture[] = {"\d3s_nemises_explorer_13\data\skins\exp_kodial_brown.paa"};
	};
	
	class explorer_13_ow {
		displayName = "Oxford";
		texture[] = {"\d3s_nemises_explorer_13\data\skins\exp_oxford_white.paa"};
	};
	
	class explorer_13_rr {
		displayName = "Ruby";
		texture[] = {"\d3s_nemises_explorer_13\data\skins\exp_ruby_red.paa"};
	};
	
	class explorer_13_sg {
		displayName = "Gray";
		texture[] = {"\d3s_nemises_explorer_13\data\skins\exp_sterling_gray.paa"};
	};
	
	class explorer_13_tb {
		displayName = "Texas-Night";
		texture[] = {"\d3s_nemises_explorer_13\data\skins\exp_tuxedo_black.paa"};
	};
	
	//d3s_nemises_f80_14
	class f80_14_al {
		displayName = "Alpine";
		texture[] = {"\d3s_nemises_f80_14\data\skins\f80\alpine_white.paa"};
	};
	
	class f80_14_ay {
		displayName = "Yellow";
		texture[] = {"\d3s_nemises_f80_14\data\skins\f80\austin_yellow.paa"};
	};
	
	class f80_14_bs {
		displayName = "Black-Saphire";
		texture[] = {"\d3s_nemises_f80_14\data\skins\f80\black_sapphire.paa"};
	};
	
	class f80_14_ac {
		displayName = "Atlas";
		texture[] = {"\d3s_nemises_f80_14\data\skins\f80\f80_atlas_cedar.paa"};
	};
	
	class f80_14_bu {
		displayName = "Black-Uniwers";
		texture[] = {"\d3s_nemises_f80_14\data\skins\f80\f80_black_uni.paa"};
	};
	
	class f80_14_st {
		displayName = "Blue-Stone";
		texture[] = {"\d3s_nemises_f80_14\data\skins\f80\f80_bluestone.paa"};
	};
	
	class f80_14_cs {
		displayName = "Silver";
		texture[] = {"\d3s_nemises_f80_14\data\skins\f80\f80_cashmere_silver.paa"};
	};
	
	class f80_14_gs {
		displayName = "Grays";
		texture[] = {"\d3s_nemises_f80_14\data\skins\f80\f80_glacier_silver.paa"};
	};
	
	class f80_14_ib {
		displayName = "Blue-Impaer";
		texture[] = {"\d3s_nemises_f80_14\data\skins\f80\f80_imperial_blue.paa"};
	};
	
	class f80_14_j {
		displayName = "Jambo";
		texture[] = {"\d3s_nemises_f80_14\data\skins\f80\f80_jatoba.paa"};
	};
	
	class f80_14_mb {
		displayName = "Dark-blue";
		texture[] = {"\d3s_nemises_f80_14\data\skins\f80\f80_mediterranean_blue.paa"};
	};
	
	class f80_14_dg {
		displayName = "Dark-grey";
		texture[] = {"\d3s_nemises_f80_14\data\skins\f80\f80_sophisto_grey.paa"};
	};
	
	class f80_14_mg {
		displayName = "Mineral-Grey";
		texture[] = {"\d3s_nemises_f80_14\data\skins\f80\mineral_grey.paa"};
	};
	
	class f80_14_so {
		displayName = "Orange";
		texture[] = {"\d3s_nemises_f80_14\data\skins\f80\sakhir_orange.paa"};
	};
	
	class f80_14_ss {
		displayName = "Stone";
		texture[] = {"\d3s_nemises_f80_14\data\skins\f80\silverstone.paa"};
	};
	
	class f80_14_m {
		displayName = "Marina";
		texture[] = {"\d3s_nemises_f80_14\data\skins\f80\yas_marina_blue.paa"};
	};
	
	class f80_14_mp {
		displayName = "MPower";
		texture[] = {"\d3s_nemises_f80_14\data\skins\f80_gts\f80_mpower.paa"};
	};
	
	class f80_14_da {
		displayName = "MPower2";
		texture[] = {"\d3s_nemises_f80_14\data\skins\danz.paa"};
	};
	
	//d3s_nemises_f82_14
	class f82_14_ao {
		displayName = "AO";
		texture[] = {"\d3s_nemises_f82_14\data\skins\f82_ao_co.paa"};
	};
	
	class f82_14_ac {
		displayName = "Atlas";
		texture[] = {"\d3s_nemises_f82_14\data\skins\f82_atlas_cedar.paa"};
	};
	
	class f82_14_bu {
		displayName = "Black-Uniwers";
		texture[] = {"\d3s_nemises_f82_14\data\skins\f82_black_uni.paa"};
	};
	
	class f82_14_bs {
		displayName = "Blue";
		texture[] = {"\d3s_nemises_f82_14\data\skins\f82_bluestone.paa"};
	};
	
	class f82_14_cs {
		displayName = "Silver";
		texture[] = {"\d3s_nemises_f82_14\data\skins\f82_cashmere_silver.paa"};
	};
	
	class f82_14_ib {
		displayName = "Blue-Impaer";
		texture[] = {"\d3s_nemises_f82_14\data\skins\f82_imperial_blue.paa"};
	};
	
	class f82_14_al {
		displayName = "Alpine";
		texture[] = {"\d3s_nemises_f82_14\data\skins\vip\f82_alpine_white.paa"};
	};
	
	class f82_14_fd {
		displayName = "Purple";
		texture[] = {"\d3s_nemises_f82_14\data\skins\vip\f82_frozen_dark_red.paa"};
	};
	
	//d3s_nemises_f87_17
	class f87_17_ao {
		displayName = "AO";
		texture[] = {"\d3s_nemises_f87_17\data\skins\f22_ao_co.paa"};
	};
	
	class f87_17_ac {
		displayName = "Cedar";
		texture[] = {"\d3s_nemises_f87_17\data\skins\f22_atlas_cedar.paa"};
	};
	
	class f87_17_bu {
		displayName = "Black";
		texture[] = {"\d3s_nemises_f87_17\data\skins\f22_black_uni.paa"};
	};
	
	class f87_17_b {
		displayName = "Blue";
		texture[] = {"\d3s_nemises_f87_17\data\skins\f22_bluestone.paa"};
	};
	
	class f87_17_cs {
		displayName = "Silver";
		texture[] = {"\d3s_nemises_f87_17\data\skins\f22_cashmere_silver.paa"};
	};
	
	class f87_17_gs {
		displayName = "Silver2";
		texture[] = {"\d3s_nemises_f87_17\data\skins\f22_glacier_silver.paa"};
	};
	
	class f87_17_ib {
		displayName = "Impaer";
		texture[] = {"\d3s_nemises_f87_17\data\skins\f22_imperial_blue.paa"};
	};
	
	class f87_17_j {
		displayName = "Jatoba";
		texture[] = {"\d3s_nemises_f87_17\data\skins\f22_jatoba.paa"};
	};
	
	class f87_17_mb {
		displayName = "Dark-blue";
		texture[] = {"\d3s_nemises_f87_17\data\skins\f22_mediterranean_blue.paa"};
	};
	
	class f87_17_sg {
		displayName = "Gray";
		texture[] = {"\d3s_nemises_f87_17\data\skins\f22_sophisto_grey.paa"};
	};
	
	class f87_17_abf8 {
		displayName = "Brown";
		texture[] = {"\d3s_nemises_f87_17\data\skins\f87_almandine_brown.paa"};
	};
	
	class f87_17_awf8 {
		displayName = "White";
		texture[] = {"\d3s_nemises_f87_17\data\skins\f87_alpine_white.paa"};
	};
	
	class f87_17_aof8 {
		displayName = "AO";
		texture[] = {"\d3s_nemises_f87_17\data\skins\f87_ao_co.paa"};
	};
	
	class f87_17_azf8 {
		displayName = "Black-Azurit";
		texture[] = {"\d3s_nemises_f87_17\data\skins\f87_azurite_black.paa"};
	};
	
	class f87_17_cqf8 {
		displayName = "Champione";
		texture[] = {"\d3s_nemises_f87_17\data\skins\f87_champagne_quartz.paa"};
	};
	
	class f87_17_dgf8 {
		displayName = "Gray";
		texture[] = {"\d3s_nemises_f87_17\data\skins\f87_donington_gray.paa"};
	};
	
	class f87_17_mbf8 {
		displayName = "Marina";
		texture[] = {"\d3s_nemises_f87_17\data\skins\f87_marina_bay_blue.paa"};
	};
	
	class f87_17_rsf8 {
		displayName = "Silver";
		texture[] = {"\d3s_nemises_f87_17\data\skins\f87_rhodonite_silver.paa"};
	};
	
	class f87_17_sbf8 {
		displayName = "Black-Saphire";
		texture[] = {"\d3s_nemises_f87_17\data\skins\f87_sapphire_black.paa"};
	};
	
	class f87_17_sgf8 {
		displayName = "Gray";
		texture[] = {"\d3s_nemises_f87_17\data\skins\f87_singapore_gray.paa"};
	};
	
	//d3s_nemises_f90_18
	class f90_10_ao {
		displayName = "AO";
		texture[] = {"\d3s_nemises_f90_18\data\skins\f90_ao_co.paa"};
	};
	
	class f90_10_ac {
		displayName = "Cedar";
		texture[] = {"\d3s_nemises_f90_18\data\skins\f90_atlas_cedar.paa"};
	};
	
	class f90_10_bu {
		displayName = "Black-Uniwers";
		texture[] = {"\d3s_nemises_f90_18\data\skins\f90_black_uni.paa"};
	};
	
	class f90_10_b {
		displayName = "Blue";
		texture[] = {"\d3s_nemises_f90_18\data\skins\f90_bluestone.paa"};
	};
	
	class f90_10_cs {
		displayName = "Silver";
		texture[] = {"\d3s_nemises_f90_18\data\skins\f90_cashmere_silver.paa"};
	};
	
	class f90_10_gs {
		displayName = "Gracia";
		texture[] = {"\d3s_nemises_f90_18\data\skins\f90_glacier_silver.paa"};
	};
	
	class f90_10_ib {
		displayName = "Impaer";
		texture[] = {"\d3s_nemises_f90_18\data\skins\f90_imperial_blue.paa"};
	};
	
	class f90_10_j {
		displayName = "Jatoba";
		texture[] = {"\d3s_nemises_f90_18\data\skins\f90_jatoba.paa"};
	};
	
	class f90_10_mb {
		displayName = "Dark-blue";
		texture[] = {"\d3s_nemises_f90_18\data\skins\f90_mediterranean_blue.paa"};
	};
	
	class f90_10_sg {
		displayName = "Gray";
		texture[] = {"\d3s_nemises_f90_18\data\skins\f90_sophisto_grey.paa"};
	};
	
	class f90_10_ult {
		displayName = "Ultimatum";
		texture[] = {"\d3s_nemises_f90_18\data\skins\ult.paa"};
	};
	
	class f90_10_mpw {
		displayName = "MPower";
		texture[] = {"\d3s_nemises_f90_18\data\skins\vip\f90_mpower.paa"};
	};
	
	//d3s_nemises_ghibli_14
	class n_ghibli_14_al {
		displayName = "Alpine";
		texture[] = {"\d3s_nemises_ghibli_14\data\skins\ghibli_ao_bianco_alpi.paa"};
	};
	
	class n_ghibli_14_be {
		displayName = "Blue";
		texture[] = {"\d3s_nemises_ghibli_14\data\skins\ghibli_ao_blu_emozione.paa"};
	};
	
	class n_ghibli_14_bp {
		displayName = "Blue2";
		texture[] = {"\d3s_nemises_ghibli_14\data\skins\ghibli_ao_blu_passione.paa"};
	};
	
	class n_ghibli_14_c {
		displayName = "Champione";
		texture[] = {"\d3s_nemises_ghibli_14\data\skins\ghibli_ao_champagne.paa"};
	};
	
	class n_ghibli_14_ao {
		displayName = "AO";
		texture[] = {"\d3s_nemises_ghibli_14\data\skins\ghibli_ao_co.paa"};
	};
	
	class n_ghibli_14_ae {
		displayName = "Estero";
		texture[] = {"\d3s_nemises_ghibli_14\data\skins\ghibli_ao_esteso.paa"};
	};
	
	class n_ghibli_14_o {
		displayName = "Orange";
		texture[] = {"\d3s_nemises_ghibli_14\data\skins\ghibli_ao_estero_orange.paa"};
	};
	
	class n_ghibli_14_g {
		displayName = "Gracia";
		texture[] = {"\d3s_nemises_ghibli_14\data\skins\ghibli_ao_grigio.paa"};
	};
	
	class n_ghibli_14_n {
		displayName = "Nero";
		texture[] = {"\d3s_nemises_ghibli_14\data\skins\ghibli_ao_nero.paa"};
	};
	
	class n_ghibli_14_ar {
		displayName = "Rome";
		texture[] = {"\d3s_nemises_ghibli_14\data\skins\ghibli_ao_rame.paa"};
	};
	
	class n_ghibli_14_v {
		displayName = "Varden";
		texture[] = {"\d3s_nemises_ghibli_14\data\skins\ghibli_ao_verde_ossido.paa"};
	};
	
	//d3s_nemises_gls63amg_17
	class gls63amg_17_b {
		displayName = "Black";
		texture[] = {"\d3s_nemises_gls63amg_17\data\skins\black.paa"};
	};
	
	class gls63amg_17_bl {
		displayName = "Blue";
		texture[] = {"\d3s_nemises_gls63amg_17\data\skins\cavnsit_blue.paa"};
	};
	
	class gls63amg_17_br {
		displayName = "Brown";
		texture[] = {"\d3s_nemises_gls63amg_17\data\skins\citrin_brown.paa"};
	};
	
	class gls63amg_17_dw {
		displayName = "Diamant-White";
		texture[] = {"\d3s_nemises_gls63amg_17\data\skins\diamond_white.paa"};
	};
	
	class gls63amg_17_bc {
		displayName = "Black-Red";
		texture[] = {"\d3s_nemises_gls63amg_17\data\skins\gls_ao_bass_co.paa"};
	};
	
	class gls63amg_17_wb {
		displayName = "White";
		texture[] = {"\d3s_nemises_gls63amg_17\data\skins\gls_ao_bw.paa"};
	};
	
	class gls63amg_17_bw {
		displayName = "Black2";
		texture[] = {"\d3s_nemises_gls63amg_17\data\skins\gls_ao_bw_co.paa"};
	};
	
	class gls63amg_17_ao {
		displayName = "AO";
		texture[] = {"\d3s_nemises_gls63amg_17\data\skins\gls_ao_co.paa"};
	};
	
	class gls63amg_17_r {
		displayName = "Red";
		texture[] = {"\d3s_nemises_gls63amg_17\data\skins\hyazinth_red.paa"};
	};
	
	class gls63amg_17_is {
		displayName = "Silver";
		texture[] = {"\d3s_nemises_gls63amg_17\data\skins\iridium_silver.paa"};
	};
	
	class gls63amg_17_l {
		displayName = "Rep-Amg";
		texture[] = {"\d3s_nemises_gls63amg_17\data\skins\lumi.paa"};
	};
	
	class gls63amg_17_ob {
		displayName = "Obsidian-Black";
		texture[] = {"\d3s_nemises_gls63amg_17\data\skins\obsidian_black.paa"};
	};
	
	class gls63amg_17_ps {
		displayName = "Polladium";
		texture[] = {"\d3s_nemises_gls63amg_17\data\skins\palladium_silver.paa"};
	};
	
	class gls63amg_17_pw {
		displayName = "Polar";
		texture[] = {"\d3s_nemises_gls63amg_17\data\skins\polar_white.paa"};
	};
	
	class gls63amg_17_syn {
		displayName = "Syndicat";
		texture[] = {"\d3s_nemises_gls63amg_17\data\skins\syndicat.paa"};
	};
	
	class gls63amg_17_tg {
		displayName = "Gray2";
		texture[] = {"\d3s_nemises_gls63amg_17\data\skins\tenorite_grey.paa"};
	};
	
	//d3s_nemises_kodiaq_17
	class kodiaq_17_bm {
		displayName = "Black";
		texture[] = {"\d3s_nemises_kodiaq_17\data\skins\kodiaq_black_magic.paa"};
	};
	
	class kodiaq_17_bs {
		displayName = "Briliant-Silver";
		texture[] = {"\d3s_nemises_kodiaq_17\data\skins\kodiaq_brilliant_silver.paa"};
	};
	
	class kodiaq_17_bg {
		displayName = "Grey";
		texture[] = {"\d3s_nemises_kodiaq_17\data\skins\kodiaq_business_grey.paa"};
	};
	
	class kodiaq_17_cb {
		displayName = "Cappucino";
		texture[] = {"\d3s_nemises_kodiaq_17\data\skins\kodiaq_cappuccino_beige.paa"};
	};
	
	class kodiaq_17_cr {
		displayName = "Red-2";
		texture[] = {"\d3s_nemises_kodiaq_17\data\skins\kodiaq_corrida_red.paa"};
	};
	
	class kodiaq_17_jg {
		displayName = "Green";
		texture[] = {"\d3s_nemises_kodiaq_17\data\skins\kodiaq_jungle_green.paa"};
	};
	
	class kodiaq_17_lw {
		displayName = "Laser-White";
		texture[] = {"\d3s_nemises_kodiaq_17\data\skins\kodiaq_laser_white.paa"};
	};
	
	class kodiaq_17_lb {
		displayName = "Blue1";
		texture[] = {"\d3s_nemises_kodiaq_17\data\skins\kodiaq_lava_blue.paa"};
	};
	
	class kodiaq_17_mb {
		displayName = "Magma";
		texture[] = {"\d3s_nemises_kodiaq_17\data\skins\kodiaq_magnetic_brown.paa"};
	};
	
	class kodiaq_17_ma {
		displayName = "Brown-Mat";
		texture[] = {"\d3s_nemises_kodiaq_17\data\skins\kodiaq_mato_brown.paa"};
	};
	
	class kodiaq_17_mw {
		displayName = "Moon";
		texture[] = {"\d3s_nemises_kodiaq_17\data\skins\kodiaq_moon_white.paa"};
	};
	
	class kodiaq_17_pb {
		displayName = "Part-Blue";
		texture[] = {"\d3s_nemises_kodiaq_17\data\skins\kodiaq_pacific_blue.paa"};
	};
	
	class kodiaq_17_qg {
		displayName = "Gray";
		texture[] = {"\d3s_nemises_kodiaq_17\data\skins\kodiaq_quartz_grey.paa"};
	};
	
	//d3s_nemises_lm002_90
	class lm002_90_ab {
		displayName = "Orange";
		texture[] = {"\d3s_nemises_lm002_90\data\skins\arancio_borealis.paa"};
	};
	
	class lm002_90_bc {
		displayName = "Bianco";
		texture[] = {"\d3s_nemises_lm002_90\data\skins\bianco_canopus.paa"};
	};
	
	class lm002_90_bi {
		displayName = "Metallic";
		texture[] = {"\d3s_nemises_lm002_90\data\skins\bianco_icarus.paa"};
	};
	
	class lm002_90_ba {
		displayName = "Achiles";
		texture[] = {"\d3s_nemises_lm002_90\data\skins\blu_achelous.paa"};
	};
	
	class lm002_90_ba1 {
		displayName = "Achiles2";
		texture[] = {"\d3s_nemises_lm002_90\data\skins\blu_caelum.paa"};
	};
	
	class lm002_90_gm {
		displayName = "Gold";
		texture[] = {"\d3s_nemises_lm002_90\data\skins\giallo_midas.paa"};
	};
	
	class lm002_90_gt {
		displayName = "Titan";
		texture[] = {"\d3s_nemises_lm002_90\data\skins\grigio_titans.paa"};
	};
	
	class lm002_90_ao {
		displayName = "AO";
		texture[] = {"\d3s_nemises_lm002_90\data\skins\lm002_ao_co.paa"};
	};
	
	class lm002_90_ma {
		displayName = "Atletic";
		texture[] = {"\d3s_nemises_lm002_90\data\skins\marrone_alcestis.paa"};
	};
	
	class lm002_90_map {
		displayName = "Grom";
		texture[] = {"\d3s_nemises_lm002_90\data\skins\marrone_apus.paa"};
	};
	
	class lm002_90_g {
		displayName = "Green";
		texture[] = {"\d3s_nemises_lm002_90\data\skins\verde_mantis.paa"};
	};
	
	//d3s_nemises_oka
	class oka_y {
		displayName = "Yellow-Rust";
		texture[] = {"\d3s_nemises_oka\data\skins\1.paa"};
	};
	
	class oka_s {
		displayName = "Stiker";
		texture[] = {"\d3s_nemises_oka\data\skins\2.paa"};
	};
	
	class oka_r {
		displayName = "Red";
		texture[] = {"\d3s_nemises_oka\data\skins\3.paa"};
	};
	
	class oka_g {
		displayName = "Green";
		texture[] = {"\d3s_nemises_oka\data\skins\4.paa"};
	};
	
	class oka_b {
		displayName = "Light-blue";
		texture[] = {"\d3s_nemises_oka\data\skins\5.paa"};
	};
	
	class oka_p {
		displayName = "Pinck";
		texture[] = {"\d3s_nemises_oka\data\skins\6.paa"};
	};
	
	//d3s_nemises_q50_14
	class q50_14_bo {
		displayName = "Black-Obsidian";
		texture[] = {"\d3s_nemises_q50_14\data\skins\black_obsidian.paa"};
	};
	
	class q50_14_cb {
		displayName = "Bronze";
		texture[] = {"\d3s_nemises_q50_14\data\skins\chestnut_bronze.paa"};
	};
	
	class q50_14_re {
		displayName = "Red";
		texture[] = {"\d3s_nemises_q50_14\data\skins\dynamic_sunstone_red.paa"};
	};
	
	class q50_14_gs {
		displayName = "Graphit";
		texture[] = {"\d3s_nemises_q50_14\data\skins\graphite_shadow.paa"};
	};
	
	class q50_14_hb {
		displayName = "Blue";
		texture[] = {"\d3s_nemises_q50_14\data\skins\hagane_blue.paa"};
	};
	
	class q50_14_ib {
		displayName = "Blue2";
		texture[] = {"\d3s_nemises_q50_14\data\skins\iridium_blue.paa"};
	};
	
	class q50_14_ip {
		displayName = "Platinum";
		texture[] = {"\d3s_nemises_q50_14\data\skins\liguid_platinum.paa"};
	};
	
	class q50_14_l {
		displayName = "Dark-gray";
		texture[] = {"\d3s_nemises_q50_14\data\skins\lumi.paa"};
	};
	
	class q50_14_mb {
		displayName = "Magic-Night";
		texture[] = {"\d3s_nemises_q50_14\data\skins\midnight_black.paa"};
	};
	
	class q50_14_m {
		displayName = "Moon";
		texture[] = {"\d3s_nemises_q50_14\data\skins\moonlight_white.paa"};
	};
	
	class q50_14_ao {
		displayName = "AO";
		texture[] = {"\d3s_nemises_q50_14\data\skins\q50_ao_co.paa"};
	};
	
	class q50_14_y {
		displayName = "Yellow";
		texture[] = {"\d3s_nemises_q50_14\data\skins\solar_mica.paa"};
	};
	
	class q50_14_ru {
		displayName = "Ruby";
		texture[] = {"\d3s_nemises_q50_14\data\skins\venitian_ruby.paa"};
	};
	
	//d3s_nemises_qx60_16
	class qx60_16_bo {
		displayName = "Black-Obsidian";
		texture[] = {"\d3s_nemises_qx60_16\data\skins\black_obsidian.paa"};
	};
	
	class qx60_16_cb {
		displayName = "Bronze";
		texture[] = {"\d3s_nemises_qx60_16\data\skins\chestnut_bronze.paa"};
	};
	
	class qx60_16_r {
		displayName = "Red";
		texture[] = {"\d3s_nemises_qx60_16\data\skins\dynamic_sunstone_red.paa"};
	};
	
	class qx60_16_gs {
		displayName = "Graphit";
		texture[] = {"\d3s_nemises_qx60_16\data\skins\graphite_shadow.paa"};
	};
	
	class qx60_16_hb {
		displayName = "Blue";
		texture[] = {"\d3s_nemises_qx60_16\data\skins\hagane_blue.paa"};
	};
	
	class qx60_16_lp {
		displayName = "Platinum";
		texture[] = {"\d3s_nemises_qx60_16\data\skins\liguid_platinum.paa"};
	};
	
	class qx60_16_lu {
		displayName = "Lumi";
		texture[] = {"\d3s_nemises_qx60_16\data\skins\lumi.paa"};
	};
	
	class qx60_16_ao {
		displayName = "AO";
		texture[] = {"\d3s_nemises_qx60_16\data\skins\qx60_ao_co.paa"};
	};
	
	//d3s_nemises_savana_05
	class savana_05_db {
		displayName = "Blue";
		texture[] = {"\d3s_nemises_savana_05\data\skins\deep_blue.paa"};
	};
	
	class savana_05_fe {
		displayName = "Fedex";
		texture[] = {"\d3s_nemises_savana_05\data\skins\fedex.paa"};
	};
	
	class savana_05_r {
		displayName = "Red";
		texture[] = {"\d3s_nemises_savana_05\data\skins\fire_red.paa"};
	};
	
	class savana_05_pg {
		displayName = "Postal";
		texture[] = {"\d3s_nemises_savana_05\data\skins\gopostal.paa"};
	};
	
	class savana_05_ob {
		displayName = "Black-Onyx";
		texture[] = {"\d3s_nemises_savana_05\data\skins\onyx_black.paa"};
	};
	
	class savana_05_g {
		displayName = "Green";
		texture[] = {"\d3s_nemises_savana_05\data\skins\polo_green.paa"};
	};
	
	class savana_05_ps {
		displayName = "Postal2";
		texture[] = {"\d3s_nemises_savana_05\data\skins\postop.paa"};
	};
	
	class savana_05_sd {
		displayName = "Sand";
		texture[] = {"\d3s_nemises_savana_05\data\skins\sand_beige.paa"};
	};
	
	class savana_05_wy {
		displayName = "Yellow";
		texture[] = {"\d3s_nemises_savana_05\data\skins\wheatland_yellow.paa"};
	};
	
	//d3s_nemises_taurus_10
	class taurus_10_b {
		displayName = "Blue";
		texture[] = {"\d3s_nemises_taurus_10\data\skins\deep_blue.paa"};
	};
	
	class taurus_10_ga {
		displayName = "Kream";
		texture[] = {"\d3s_nemises_taurus_10\data\skins\ginger_ale.paa"};
	};
	
	class taurus_10_gg {
		displayName = "Geem";
		texture[] = {"\d3s_nemises_taurus_10\data\skins\green_gem.paa"};
	};
	
	class taurus_10_is {
		displayName = "Silver";
		texture[] = {"\d3s_nemises_taurus_10\data\skins\ingot_silver.paa"};
	};
	
	class taurus_10_kb {
		displayName = "Dark-Brown";
		texture[] = {"\d3s_nemises_taurus_10\data\skins\kodial_brown.paa"};
	};
	
	class taurus_10_w {
		displayName = "White";
		texture[] = {"\d3s_nemises_taurus_10\data\skins\oxford_white.paa"};
	};
	
	class taurus_10_rr {
		displayName = "Ruby";
		texture[] = {"\d3s_nemises_taurus_10\data\skins\ruby_red.paa"};
	};
	
	class taurus_10_sg {
		displayName = "Gray";
		texture[] = {"\d3s_nemises_taurus_10\data\skins\sterling_gray.paa"};
	};
	
	class taurus_10_tb {
		displayName = "Texas-Night";
		texture[] = {"\d3s_nemises_taurus_10\data\skins\tuxedo_black.paa"};
	};
	
	//d3s_nemises_urus_12
	class urus_12_o {
		displayName = "Orange";
		texture[] = {"\d3s_nemises_urus_12\data\skins\arancio_borealis.paa"};
	};
	
	class urus_12_g {
		displayName = "Gray";
		texture[] = {"\d3s_nemises_urus_12\data\skins\bianco_canopus.paa"};
	};
	
	class urus_12_a {
		displayName = "Achiles";
		texture[] = {"\d3s_nemises_urus_12\data\skins\blu_achelous.paa"};
	};
	
	class urus_12_bc {
		displayName = "Achiles2";
		texture[] = {"\d3s_nemises_urus_12\data\skins\blu_caelum.paa"};
	};
	
	class urus_12_y {
		displayName = "Yellow";
		texture[] = {"\d3s_nemises_urus_12\data\skins\giallo_horus.paa"};
	};
	
	class urus_12_y2 {
		displayName = "Yellow2";
		texture[] = {"\d3s_nemises_urus_12\data\skins\giallo_midas.paa"};
	};
	
	class urus_12_gl {
		displayName = "Achiles";
		texture[] = {"\d3s_nemises_urus_12\data\skins\grigio_lynx.paa"};
	};
	
	class urus_12_t {
		displayName = "Titan";
		texture[] = {"\d3s_nemises_urus_12\data\skins\grigio_titans.paa"};
	};
	
	class urus_12_ma {
		displayName = "Grays";
		texture[] = {"\d3s_nemises_urus_12\data\skins\marrone_alcestis.paa"};
	};
	
	class urus_12_vm {
		displayName = "Green";
		texture[] = {"\d3s_nemises_urus_12\data\skins\verde_mantis.paa"};
	};
	
	//d3s_nemises_vesta_15
	class vesta_15_195 {
		displayName = "Red";
		texture[] = {"\d3s_nemises_vesta_15\data\skins\195.paa"};
	};
	
	class vesta_15_221 {
		displayName = "White";
		texture[] = {"\d3s_nemises_vesta_15\data\skins\221.paa"};
	};
	
	class vesta_15_246 {
		displayName = "Brown";
		texture[] = {"\d3s_nemises_vesta_15\data\skins\246.paa"};
	};
	
	class vesta_15_366 {
		displayName = "Green";
		texture[] = {"\d3s_nemises_vesta_15\data\skins\366.paa"};
	};
	
	class vesta_15_372 {
		displayName = "Green2";
		texture[] = {"\d3s_nemises_vesta_15\data\skins\372.paa"};
	};
	
	class vesta_15_492 {
		displayName = "Blue";
		texture[] = {"\d3s_nemises_vesta_15\data\skins\492.paa"};
	};
	
	class vesta_15_496 {
		displayName = "Blue2";
		texture[] = {"\d3s_nemises_vesta_15\data\skins\496.paa"};
	};
	
	class vesta_15_608 {
		displayName = "Gray";
		texture[] = {"\d3s_nemises_vesta_15\data\skins\608.paa"};
	};
	
	class vesta_15_676 {
		displayName = "Gray2";
		texture[] = {"\d3s_nemises_vesta_15\data\skins\676.paa"};
	};
	
	class vesta_15_691 {
		displayName = "White";
		texture[] = {"\d3s_nemises_vesta_15\data\skins\691.paa"};
	};
	
	class vesta_15_tu {
		displayName = "Turbo";
		texture[] = {"\d3s_nemises_vesta_15\data\skins\vesta_ao_turbo_co.paa"};
	};
	
	class vesta_15_btu {
		displayName = "Black-Turbo";
		texture[] = {"\d3s_nemises_vesta_15\data\skins\vesta_black_turbo.paa"};
	};
	
	class vesta_15_litu {
		displayName = "Lime-Turbo";
		texture[] = {"\d3s_nemises_vesta_15\data\skins\vesta_lime_turbo.paa"};
	};
	
	class vesta_15_ortu {
		displayName = "Orange-Turbo";
		texture[] = {"\d3s_nemises_vesta_15\data\skins\vesta_orange_turbo.paa"};
	};
	
	class vesta_15_grtu {
		displayName = "Gray-Turbo";
		texture[] = {"\d3s_nemises_vesta_15\data\skins\vesta_gray_turbo.paa"};
	};
	
	//d3s_nemises_vklasse_17
	class vklasse_17_aw {
		displayName = "Arctik";
		texture[] = {"\d3s_nemises_vklasse_17\data\skins\arctic_white.paa"};
	};
	
	class vklasse_17_bs {
		displayName = "Silver";
		texture[] = {"\d3s_nemises_vklasse_17\data\skins\brilliant_silver.paa"};
	};
	
	class vklasse_17_cb {
		displayName = "Blue";
		texture[] = {"\d3s_nemises_vklasse_17\data\skins\cavansit_blue.paa"};
	};
	
	class vklasse_17_db {
		displayName = "Brown";
		texture[] = {"\d3s_nemises_vklasse_17\data\skins\dolomit_brown.paa"};
	};
	
	class vklasse_17_fg {
		displayName = "Gray";
		texture[] = {"\d3s_nemises_vklasse_17\data\skins\flint_gray.paa"};
	};
	
	class vklasse_17_gg {
		displayName = "Green";
		texture[] = {"\d3s_nemises_vklasse_17\data\skins\granite_green.paa"};
	};
	
	class vklasse_17_jr {
		displayName = "Red";
		texture[] = {"\d3s_nemises_vklasse_17\data\skins\jupiter_red.paa"};
	};
	
	class vklasse_17_nb {
		displayName = "Blue2";
		texture[] = {"\d3s_nemises_vklasse_17\data\skins\navy_blue.paa"};
	};
	
	class vklasse_17_ob {
		displayName = "Obsidian-Black";
		texture[] = {"\d3s_nemises_vklasse_17\data\skins\obsidiant_black.paa"};
	};
	
	//d3s_nemises_wrx_17
	class wrx_17_cb {
		displayName = "Crystal-Black";
		texture[] = {"\d3s_nemises_wrx_17\data\skins\crystal_black.paa"};
	};
	
	class wrx_17_cw {
		displayName = "Crystal-White";
		texture[] = {"\d3s_nemises_wrx_17\data\skins\crystal_white.paa"};
	};
	
	class wrx_17_dg {
		displayName = "Dark-gray";
		texture[] = {"\d3s_nemises_wrx_17\data\skins\dark_grey.paa"};
	};
	
	class wrx_17_b {
		displayName = "Blue";
		texture[] = {"\d3s_nemises_wrx_17\data\skins\galaxy_blue.paa"};
	};
	
	class wrx_17_is {
		displayName = "Silver";
		texture[] = {"\d3s_nemises_wrx_17\data\skins\ice_silver.paa"};
	};
	
	class wrx_17_r {
		displayName = "Red";
		texture[] = {"\d3s_nemises_wrx_17\data\skins\lightning_red.paa"};
	};
	
	class wrx_17_stcb {
		displayName = "Crystal-Black";
		texture[] = {"\d3s_nemises_wrx_17\data\skins\sti\crystal_black.paa"};
	};
	
	class wrx_17_stcw {
		displayName = "Crystal-White";
		texture[] = {"\d3s_nemises_wrx_17\data\skins\sti\crystal_white.paa"};
	};
	
	class wrx_17_stdg {
		displayName = "Dark-gray";
		texture[] = {"\d3s_nemises_wrx_17\data\skins\sti\dark_grey.paa"};
	};
	
	class wrx_17_stis {
		displayName = "Silver";
		texture[] = {"\d3s_nemises_wrx_17\data\skins\sti\ice_silver.paa"};
	};
	
	class wrx_17_str {
		displayName = "Red";
		texture[] = {"\d3s_nemises_wrx_17\data\skins\sti\lightning_red.paa"};
	};
	
	
	class wrx_17_vip {
		displayName = "Black-Water";
		texture[] = {"\d3s_nemises_wrx_17\data\skins\sti\sti_bw.paa"};
	};
	
	class wrx_17_vip1 {
		displayName = "MR";
		texture[] = {"\d3s_nemises_wrx_17\data\skins\sti\sti_mar.paa"};
	};
	
	class wrx_17_stblu {
		displayName = "Blue";
		texture[] = {"\d3s_nemises_wrx_17\data\skins\sti\wr_blue.paa"};
	};
	
	//d3s_nemises_xes_15
	class xes_15_g {
		displayName = "Gray";
		texture[] = {"\d3s_nemises_xes_15\data\skins\ammonite_grey.paa"};
	};
	
	class xes_15_bc {
		displayName = "Dark-Red";
		texture[] = {"\d3s_nemises_xes_15\data\skins\black_cherry.paa"};
	};
	
	class xes_15_b {
		displayName = "Blue";
		texture[] = {"\d3s_nemises_xes_15\data\skins\bluefire.paa"};
	};
	
	class xes_15_brg {
		displayName = "Dark-Green";
		texture[] = {"\d3s_nemises_xes_15\data\skins\british_racing_green.paa"};
	};
	
	class xes_15_cb {
		displayName = "Dark-blue";
		texture[] = {"\d3s_nemises_xes_15\data\skins\celestian_black.paa"};
	};
	
	class xes_15_ds {
		displayName = "Saphire";
		texture[] = {"\d3s_nemises_xes_15\data\skins\dark_sapphire.paa"};
	};
	
	class xes_15_r {
		displayName = "Red";
		texture[] = {"\d3s_nemises_xes_15\data\skins\italian_racing_red.paa"};
	};
	
	class xes_15_sg {
		displayName = "Grey";
		texture[] = {"\d3s_nemises_xes_15\data\skins\storm_grey.paa"};
	};
	
	class xes_15_ub {
		displayName = "Black";
		texture[] = {"\d3s_nemises_xes_15\data\skins\ultimate_black.paa"};
	};
	
	//d3s_qx56_14
	class qx56_14_b {
		displayName = "Black";
		texture[] = {"\d3s_qx56_14\data\skins\black.paa"};
	};
	
	class qx56_14_bl {
		displayName = "Blue";
		texture[] = {"\d3s_qx56_14\data\skins\blue.paa"};
	};
	
	class qx56_14_br {
		displayName = "Brown";
		texture[] = {"\d3s_qx56_14\data\skins\brown.paa"};
	};
	
	class qx56_14_brd {
		displayName = "Bordo";
		texture[] = {"\d3s_qx56_14\data\skins\bordo.paa"};
	};
	
	class qx56_14_g {
		displayName = "Gray";
		texture[] = {"\d3s_qx56_14\data\skins\gray.paa"};
	};
	
	class qx56_14_l {
		displayName = "Lumi";
		texture[] = {"\d3s_qx56_14\data\skins\lumi.paa"};
	};
	
	class qx56_14_s {
		displayName = "Serebro";
		texture[] = {"\d3s_qx56_14\data\skins\serebro.paa"};
	};
	
	class qx56_14_w {
		displayName = "White";
		texture[] = {"\d3s_qx56_14\data\skins\white.paa"};
	};
	
	//d3s_raptor_17
	class raptor_17_w {
		displayName = "White";
		texture[] = {"\d3s_raptor_17\data\skins\RAPTOR_AO_co.paa"};
	};
	
	class raptor_17_b {
		displayName = "Black";
		texture[] = {"\d3s_raptor_17\data\skins\RAPTOR_Black.paa"};
	};
	
	class raptor_17_bg {
		displayName = "Black-Granit";
		texture[] = {"\d3s_raptor_17\data\skins\RAPTOR_Black_Granite.paa"};
	};
	
	class raptor_17_bl {
		displayName = "Blue";
		texture[] = {"\d3s_raptor_17\data\skins\RAPTOR_Blue.paa"};
	};
	
	class raptor_17_br {
		displayName = "Brize";
		texture[] = {"\d3s_raptor_17\data\skins\RAPTOR_Breeze.paa"};
	};
	
	class raptor_17_r {
		displayName = "Red";
		texture[] = {"\d3s_raptor_17\data\skins\RAPTOR_Crystal_Red.paa"};
	};
	
	class raptor_17_gm {
		displayName = "Gold";
		texture[] = {"\d3s_raptor_17\data\skins\RAPTOR_Gold_Mist.paa"};
	};
	
	class raptor_17_g {
		displayName = "Gray";
		texture[] = {"\d3s_raptor_17\data\skins\RAPTOR_Gray.paa"};
	};
	
	class raptor_17_gr {
		displayName = "Green";
		texture[] = {"\d3s_raptor_17\data\skins\RAPTOR_Green.paa"};
	};
	
	class raptor_17_lm {
		displayName = "White";
		texture[] = {"\d3s_raptor_17\data\skins\RAPTOR_Lime.paa"};
	};
	
	class raptor_17_or {
		displayName = "Orange";
		texture[] = {"\d3s_raptor_17\data\skins\RAPTOR_Orange.paa"};
	};
	
	class raptor_17_SCR {
		displayName = "SCR";
		texture[] = {"\d3s_raptor_17\data\skins\RAPTOR_SCR_co.paa"};
	};
	
	class raptor_17_vip1 {
		displayName = "F22";
		texture[] = {"\d3s_raptor_17\data\skins\VIP\F22.paa"};
	};
	
	class raptor_17_vip2 {
		displayName = "Fabtech";
		texture[] = {"\d3s_raptor_17\data\skins\VIP\Fabtech.paa"};
	};
	
	class raptor_17_vip3 {
		displayName = "FX4";
		texture[] = {"\d3s_raptor_17\data\skins\VIP\FX4.paa"};
	};
	
	class raptor_17_vip4 {
		displayName = "Rouch";
		texture[] = {"\d3s_raptor_17\data\skins\VIP\Roush.paa"};
	};
	
	class raptor_17_vip5 {
		displayName = "Shelby";
		texture[] = {"\d3s_raptor_17\data\skins\VIP\Shelby.paa"};
	};
	
	class raptor_17_vip6 {
		displayName = "Muscle";
		texture[] = {"\d3s_raptor_17\data\skins\VIP\TSDesigns.paa"};
	};
	
	class reb_05_camo {
		displayName = "Camo2";
		texture[] = {"\Ghost_veh_c\data\color\Camo.paa"};
	};
	
	class reb_05_camo10 {
		displayName = "Camo3";
		texture[] = {"\Ghost_veh_c\data\color\Camo10.paa"};
	};
	
	class reb_05_camo3 {
		displayName = "Camo3";
		texture[] = {"\Ghost_veh_c\data\color\Camo3.paa"};
	};
	
	class reb_05_camo4 {
		displayName = "Camo4";
		texture[] = {"\Ghost_veh_c\data\color\camo4.paa"};
	};
	
	class reb_05_camo5 {
		displayName = "Camo5";
		texture[] = {"\Ghost_veh_c\data\color\camo5.paa"};
	};
	
	class reb_05_camo6 {
		displayName = "Camo6";
		texture[] = {"\Ghost_veh_c\data\color\camo6.paa"};
	};
	
	class reb_05_camo7 {
		displayName = "Camo7";
		texture[] = {"\Ghost_veh_c\data\color\camo7.paa"};
	};
	
	class reb_05_camo9 {
		displayName = "Camo8";
		texture[] = {"\Ghost_veh_c\data\color\Camo9.paa"};
	};
	
	class reb_05_c_vip {
		displayName = "Camo9";
		texture[] = {"\Ghost_veh_c\data\color\Vip.paa"};
	};
	
	class reb_05_wint {
		displayName = "Camo10";
		texture[] = {"\Ghost_veh_c\data\color\winter.paa"};
	};
	
	class reb_05_wint_v {
		displayName = "Camo11";
		texture[] = {"\Ghost_veh_c\data\color\winter_vip.paa"};
	};
	
	
	//d3s_srthellcat_15
	class cat_15_do {
		displayName = "Orange";
		texture[] = {"\d3s_srthellcat_15\data\skins\daytona_orange.paa"};
	};
	
	class cat_15_dr {
		displayName = "Red";
		texture[] = {"\d3s_srthellcat_15\data\skins\daytona_red.paa"};
	};
	
	class cat_15_dy {
		displayName = "Yellow";
		texture[] = {"\d3s_srthellcat_15\data\skins\daytona_yellow.paa"};
	};
	
	class cat_15_deb {
		displayName = "Black";
		texture[] = {"\d3s_srthellcat_15\data\skins\deepstage_black.paa"};
	};
	
	class cat_15_debl {
		displayName = "Blue";
		texture[] = {"\d3s_srthellcat_15\data\skins\deepstage_blue.paa"};
	};
	
	class cat_15_der {
		displayName = "Red";
		texture[] = {"\d3s_srthellcat_15\data\skins\deepstage_red.paa"};
	};
	
	class cat_15_dev {
		displayName = "Violet";
		texture[] = {"\d3s_srthellcat_15\data\skins\deepstage_violet.paa"};
	};
	
	class cat_15_dew {
		displayName = "White";
		texture[] = {"\d3s_srthellcat_15\data\skins\deepstage_white.paa"};
	};
	
	class cat_15_dey {
		displayName = "Yellow";
		texture[] = {"\d3s_srthellcat_15\data\skins\deepstage_yellow.paa"};
	};
	
	class cat_15_mob {
		displayName = "Black";
		texture[] = {"\d3s_srthellcat_15\data\skins\mopar_black.paa"};
	};
	
	class cat_15_mobl {
		displayName = "Blue";
		texture[] = {"\d3s_srthellcat_15\data\skins\mopar_blue.paa"};
	};
	
	class cat_15_mor {
		displayName = "Red";
		texture[] = {"\d3s_srthellcat_15\data\skins\mopar_red.paa"};
	};
	
	class cat_15_mord {
		displayName = "Redline";
		texture[] = {"\d3s_srthellcat_15\data\skins\mopar_redline.paa"};
	};
	
	class cat_15_mos {
		displayName = "Silver";
		texture[] = {"\d3s_srthellcat_15\data\skins\mopar_silver.paa"};
	};
	
	class cat_15_shb {
		displayName = "Blue";
		texture[] = {"\d3s_srthellcat_15\data\skins\shaker_blue.paa"};
	};
	
	class cat_15_shi {
		displayName = "Ivory";
		texture[] = {"\d3s_srthellcat_15\data\skins\shaker_ivory.paa"};
	};
	
	class cat_15_shr {
		displayName = "Red";
		texture[] = {"\d3s_srthellcat_15\data\skins\shaker_red.paa"};
	};
	
	class cat_15_shrr {
		displayName = "Redline";
		texture[] = {"\d3s_srthellcat_15\data\skins\shaker_redline.paa"};
	};
	
	class cat_15_shw {
		displayName = "White";
		texture[] = {"\d3s_srthellcat_15\data\skins\shaker_white.paa"};
	};
	
	class cat_15_srta {
		displayName = "AO";
		texture[] = {"\d3s_srthellcat_15\data\skins\srt_ao_co.paa"};
	};
	
	class cat_15_srtb5 {
		displayName = "Blue";
		texture[] = {"\d3s_srthellcat_15\data\skins\srt_b5_blue.paa"};
	};
	
	class cat_15_srtbs {
		displayName = "Silver";
		texture[] = {"\d3s_srthellcat_15\data\skins\srt_biller_silver.paa"};
	};
	
	class cat_15_srttr {
		displayName = "Top-Redline";
		texture[] = {"\d3s_srthellcat_15\data\skins\srt_top_red.paa"};
	};
	
	
	//d3s_tahoe_08
	class tahoe_08_vip {
		displayName = "Chains";
		texture[] = {"\d3s_tahoe_08\data\skins\chains.paa"};
	};
	
	class tahoe_08_vip2 {
		displayName = "Dallas";
		texture[] = {"\d3s_tahoe_08\data\skins\dallas.paa"};
	};
	
	class tahoe_08_vip3 {
		displayName = "Hoxton";
		texture[] = {"\d3s_tahoe_08\data\skins\hoxton.paa"};
	};
	
	class tahoe_08_vip4 {
		displayName = "Wold";
		texture[] = {"\d3s_tahoe_08\data\skins\wolf.paa"};
	};
	
	class tahoe_08_b {
		displayName = "Black";
		texture[] = {"\d3s_tahoe_08\data\skins\tahoe_ao_black_co.paa"};
	};
	
	class tahoe_08_bg {
		displayName = "Black-Granit";
		texture[] = {"\d3s_tahoe_08\data\skins\tahoe_ao_black_granite_co.paa"};
	};
	
	class tahoe_08_r {
		displayName = "Red";
		texture[] = {"\d3s_tahoe_08\data\skins\tahoe_ao_crystal_red_co.paa"};
	};
	
	class tahoe_08_g {
		displayName = "Gold";
		texture[] = {"\d3s_tahoe_08\data\skins\tahoe_ao_gold_mist_co.paa"};
	};
	
	class tahoe_08_s {
		displayName = "Steel_Gray";
		texture[] = {"\d3s_tahoe_08\data\skins\tahoe_ao_mocha_steel_co.paa"};
	};
	
	class tahoe_08_si {
		displayName = "Silver";
		texture[] = {"\d3s_tahoe_08\data\skins\tahoe_ao_silver_ice_co.paa"};
	};
	
	//d3s_titan_17	
	class titan_17_g {
		displayName = "Gray";
		texture[] = {"\d3s_titan_17\data\skins\titan_gray.paa"};
	};
	
	class titan_17_ao {
		displayName = "AO";
		texture[] = {"\d3s_titan_17\data\skins\titan_ao_co.paa"};
	};
	
	//d3s_uaz_469
	class uaz_469_ao {
		displayName = "AO";
		texture[] = {"\d3s_uaz_469\data\skins\469P_AO_co.paa"};
	};
	
	class uaz_469_b {
		displayName = "Black";
		texture[] = {"\d3s_uaz_469\data\skins\469P_Black.paa"};
	};
	
	class uaz_469_bl {
		displayName = "Blue";
		texture[] = {"\d3s_uaz_469\data\skins\469P_Blue.paa"};
	};
	
	class uaz_469_ex {
		displayName = "Expedition";
		texture[] = {"\d3s_uaz_469\data\skins\469P_Expedition.paa"};
	};
	
	class uaz_469_g {
		displayName = "Green";
		texture[] = {"\d3s_uaz_469\data\skins\469P_Green.paa"};
	};
	
	class uaz_469_m {
		displayName = "Mindal";
		texture[] = {"\d3s_uaz_469\data\skins\469P_Mindal.paa"};
	};
	
	class uaz_469_mi {
		displayName = "Mirage";
		texture[] = {"\d3s_uaz_469\data\skins\469P_Mirage.paa"};
	};
	
	class uaz_469_r {
		displayName = "Red";
		texture[] = {"\d3s_uaz_469\data\skins\469P_Red.paa"};
	};
	
	class uaz_469_vip1 {
		displayName = "Camo1";
		texture[] = {"\d3s_uaz_469\data\skins\469P_camo1.paa"};
	};
	
	class uaz_469_vip2 {
		displayName = "Camo2";
		texture[] = {"\d3s_uaz_469\data\skins\469P_camo2.paa"};
	};
	
	class uaz_469_vip3 {
		displayName = "Camo3";
		texture[] = {"\d3s_uaz_469\data\skins\469P_camo3.paa"};
	};
	
	class uaz_469_vip4 {
		displayName = "Camo4";
		texture[] = {"\d3s_uaz_469\data\skins\469P_camo4.paa"};
	};
	
	class uaz_469_vip5 {
		displayName = "Camo5";
		texture[] = {"\d3s_uaz_469\data\skins\469P_camo5.paa"};
	};
	
	class uaz_469_vip6 {
		displayName = "Camo6";
		texture[] = {"\d3s_uaz_469\data\skins\469P_camo6.paa"};
	};
	
	//d3s_uaz_3162
	class uaz_3162_b {
		displayName = "Black";
		texture[] = {"\d3s_uaz_3162\data\skins\3162t_AO_black_co.paa"};
	};
	
	class uaz_3162_bl {
		displayName = "Blue";
		texture[] = {"\d3s_uaz_3162\data\skins\3162t_AO_blue_co.paa"};
	};
	
	class uaz_3162_bb {
		displayName = "Brown";
		texture[] = {"\d3s_uaz_3162\data\skins\3162t_AO_brown_co.paa"};
	};
	
	class uaz_3162_ao {
		displayName = "White";
		texture[] = {"\d3s_uaz_3162\data\skins\3162t_AO_co.paa"};
	};
	
	class uaz_3162_g {
		displayName = "Gray";
		texture[] = {"\d3s_uaz_3162\data\skins\3162t_AO_gray_co.paa"};
	};
	
	class uaz_3162_gr {
		displayName = "Green";
		texture[] = {"\d3s_uaz_3162\data\skins\3162t_AO_green_co.paa"};
	};
	
	class uaz_3162_o {
		displayName = "Orange";
		texture[] = {"\d3s_uaz_3162\data\skins\3162t_AO_orange_co.paa"};
	};
	
	class uaz_3162_r {
		displayName = "Red";
		texture[] = {"\d3s_uaz_3162\data\skins\3162t_AO_red_co.paa"};
	};
	
	class uaz_3162_y {
		displayName = "Yellow";
		texture[] = {"\d3s_uaz_3162\data\skins\3162t_AO_yellow_co.paa"};
	};
	
	//d3s_ural_next
	class next_w {
		displayName = "White";
		texture[] = {"\d3s_ural_next\data\skins\NEXT_cab.paa"};
	};
	
	class next_b {
		displayName = "Blue";
		texture[] = {"\d3s_ural_next\data\skins\NEXT_cab_blue.paa"};
	};
	
	class next_g {
		displayName = "Green";
		texture[] = {"\d3s_ural_next\data\skins\NEXT_cab_green.paa"};
	};
	
	class next_h {
		displayName = "Haki";
		texture[] = {"\d3s_ural_next\data\skins\NEXT_cab_haki.paa"};
	};
	
	class next_o {
		displayName = "Orange";
		texture[] = {"\d3s_ural_next\data\skins\NEXT_cab_orange.paa"};
	};
	
	class next_r {
		displayName = "Red";
		texture[] = {"\d3s_ural_next\data\skins\NEXT_cab_red.paa"};
	};
	
	//d3s_v222_13
	class v222_13_g {
		displayName = "Gray";
		texture[] = {"\d3s_v222_13\data\skins\v222_allanit_grat.paa"};
	};
	
	class v222_13_b {
		displayName = "Blue";
		texture[] = {"\d3s_v222_13\data\skins\v222_anthracite_blue.paa"};
	};
	
	class v222_13_ao {
		displayName = "AO";
		texture[] = {"\d3s_v222_13\data\skins\v222_ao_co.paa"};
	};
	
	class v222_13_cw {
		displayName = "Gray-White";
		texture[] = {"\d3s_v222_13\data\skins\v222_cashmere_white.paa"};
	};
	
	class v222_13_cb {
		displayName = "Blue2";
		texture[] = {"\d3s_v222_13\data\skins\v222_cavansit_blue.paa"};
	};
	
	class v222_13_ds {
		displayName = "Diamant-Silver";
		texture[] = {"\d3s_v222_13\data\skins\v222_diamond_silver.paa"};
	};
	
	class v222_13_dw {
		displayName = "Diamant-White";
		texture[] = {"\d3s_v222_13\data\skins\v222_diamond_white.paa"};
	};
	
	class v222_13_eg {
		displayName = "Emerald-Green";
		texture[] = {"\d3s_v222_13\data\skins\v222_emerald_green.paa"};
	};
	
	class v222_13_ms {
		displayName = "Mokka";
		texture[] = {"\d3s_v222_13\data\skins\v222_mokka_schwarz.paa"};
	};
	
	class v222_13_rb {
		displayName = "Black";
		texture[] = {"\d3s_v222_13\data\skins\v222_ruby_black.paa"};
	};
	
	//d3s_vklasse_17
	class vk_17_aw {
		displayName = "Arctik";
		texture[] = {"\d3s_vklasse_17\data\skins\arctic_white.paa"};
	};
	
	class vk_17_bs {
		displayName = "Silver";
		texture[] = {"\d3s_vklasse_17\data\skins\brilliant_silver.paa"};
	};
	
	class vk_17_cb {
		displayName = "Blue";
		texture[] = {"\d3s_vklasse_17\data\skins\cavansit_blue.paa"};
	};
	
	class vk_17_db {
		displayName = "Brown";
		texture[] = {"\d3s_vklasse_17\data\skins\dolomit_brown.paa"};
	};
	
	class vk_17_fg {
		displayName = "Gray";
		texture[] = {"\d3s_vklasse_17\data\skins\flint_gray.paa"};
	};
	
	class vk_17_gg {
		displayName = "Green";
		texture[] = {"\d3s_vklasse_17\data\skins\granite_green.paa"};
	};
	
	class vk_17_jr {
		displayName = "Red";
		texture[] = {"\d3s_vklasse_17\data\skins\jupiter_red.paa"};
	};
	
	class vk_17_nb {
		displayName = "Blue2";
		texture[] = {"\d3s_vklasse_17\data\skins\navy_blue.paa"};
	};
	
	class vk_17_ob {
		displayName = "Obsidian-Black";
		texture[] = {"\d3s_vklasse_17\data\skins\obsidiant_black.paa"};
	};
	
	//d3s_w213_16
	class w213_16_b {
		displayName = "Black";
		texture[] = {"\d3s_w213_16\data\skins\w213_amg_black.paa"};
	};
	
	class w213_16_bl {
		displayName = "Blue";
		texture[] = {"\d3s_w213_16\data\skins\w213_amg_blue.paa"};
	};
	
	class w213_16_br {
		displayName = "Breeze";
		texture[] = {"\d3s_w213_16\data\skins\w213_amg_breeze.paa"};
	};
	
	class w213_16_g {
		displayName = "Green";
		texture[] = {"\d3s_w213_16\data\skins\w213_amg_green.paa"};
	};
	
	class w213_16_o {
		displayName = "Orange";
		texture[] = {"\d3s_w213_16\data\skins\w213_amg_orange.paa"};
	};
	
	class w213_16_r {
		displayName = "Red";
		texture[] = {"\d3s_w213_16\data\skins\w213_amg_red.paa"};
	};
	
	class w213_16_s {
		displayName = "Silver";
		texture[] = {"\d3s_w213_16\data\skins\w213_amg_silver.paa"};
	};
	
	class w213_16_w {
		displayName = "White";
		texture[] = {"\d3s_w213_16\data\skins\w213_amg_white.paa"};
	};
	
	class w213_16_y {
		displayName = "Yellow";
		texture[] = {"\d3s_w213_16\data\skins\w213_amg_yellow.paa"};
	};
	
	class w213_16_bbb {
		displayName = "Briliant-Blue";
		texture[] = {"\d3s_w213_16\data\skins\w213_brilliant_blue.paa"};
	};
	
	class w213_16_cbr {
		displayName = "Brown";
		texture[] = {"\d3s_w213_16\data\skins\w213_citrin_brown.paa"};
	};
	
	class w213_16_hrr {
		displayName = "Red";
		texture[] = {"\d3s_w213_16\data\skins\w213_hyazinth_red.paa"};
	};
	
	class w213_16_yvr {
		displayName = "Ivory";
		texture[] = {"\d3s_w213_16\data\skins\w213_ivory.paa"};
	};
	
	class w213_16_ssg {
		displayName = "Grey";
		texture[] = {"\d3s_w213_16\data\skins\w213_selenit_grey.paa"};
	};
	
	//d3s_wrx_17
		class rx_17_cb {
		displayName = "Crystal-Black";
		texture[] = {"\d3s_wrx_17\data\skins\Crystal_Black.paa"};
	};
	
	class rx_17_cw {
		displayName = "Crystal-White";
		texture[] = {"\d3s_wrx_17\data\skins\Crystal_White.paa"};
	};
	
	class rx_17_dg {
		displayName = "Dark-gray";
		texture[] = {"\d3s_wrx_17\data\skins\Dark_Grey.paa"};
	};
	
	class rx_17_b {
		displayName = "Blue";
		texture[] = {"\d3s_wrx_17\data\skins\Galaxy_Blue.paa"};
	};
	
	class rx_17_is {
		displayName = "Silver";
		texture[] = {"\d3s_wrx_17\data\skins\Ice_Silver.paa"};
	};
	
	class rx_17_r {
		displayName = "Red";
		texture[] = {"\d3s_wrx_17\data\skins\Lightning_Red.paa"};
	};
	
	class rx_17_stcb {
		displayName = "Crystal-Black";
		texture[] = {"\d3s_wrx_17\data\skins\STI\Crystal_black.paa"};
	};
	
	class rx_17_stcw {
		displayName = "Crystal-White";
		texture[] = {"\d3s_wrx_17\data\skins\STI\Crystal_White.paa"};
	};
	
	class rx_17_stdg {
		displayName = "Dark-gray";
		texture[] = {"\d3s_wrx_17\data\skins\STI\Dark_Grey.paa"};
	};
	
	class rx_17_stb {
		displayName = "Blue";
		texture[] = {"\d3s_wrx_17\data\skins\STI\Galaxy_Blue.paa"};
	};
	
	class rx_17_stis {
		displayName = "Silver";
		texture[] = {"\d3s_wrx_17\data\skins\STI\Ice_Silver.paa"};
	};
	
	class rx_17_str {
		displayName = "Red";
		texture[] = {"\d3s_wrx_17\data\skins\STI\Lightning_Red.paa"};
	};
	
	//d3s_x222_18
	class x222_18_ag {
		displayName = "Gray";
		texture[] = {"\d3s_x222_18\data\skins\X222_Allanit_Gray.paa"};
	};
	
	class x222_18_ab {
		displayName = "Blue";
		texture[] = {"\d3s_x222_18\data\skins\X222_Anthracite_Blue.paa"};
	};
	
	class x222_18_ab1 {
		displayName = "Blue2";
		texture[] = {"\d3s_x222_18\data\skins\X222_Anthracite_Blue_1.paa"};
	};
	
	class x222_18_ao {
		displayName = "AO";
		texture[] = {"\d3s_x222_18\data\skins\X222_AO_co.paa"};
	};
	
	class x222_18_cw {
		displayName = "Winter";
		texture[] = {"\d3s_x222_18\data\skins\X222_Cashmere_White.paa"};
	};
	
	class x222_18_cw1 {
		displayName = "Winter2";
		texture[] = {"\d3s_x222_18\data\skins\X222_Cashmere_White_3.paa"};
	};
	
	class x222_18_cb {
		displayName = "Brown";
		texture[] = {"\d3s_x222_18\data\skins\X222_Citrin_Brown.paa"};
	};
	
	class x222_18_cb1 {
		displayName = "Brown2";
		texture[] = {"\d3s_x222_18\data\skins\X222_Citrin_Brown_2.paa"};
	};
	
	class x222_18_rb {
		displayName = "Ruby";
		texture[] = {"\d3s_x222_18\data\skins\X222_Ruby_Black.paa"};
	};
	
	//d3s_nemises_is_16
	class is_16_b {
		displayName = "Black";
		texture[] = {"\d3s_nemises_is_16\data\skins\is\black.paa"};
	};
	
	class is_16_ap {
		displayName = "White";
		texture[] = {"\d3s_nemises_is_16\data\skins\is\is_f350_ao_co.paa"};
	};
	
	class is_16_g {
		displayName = "Gray";
		texture[] = {"\d3s_nemises_is_16\data\skins\is\mercury_grey.paa"};
	};
	
	class is_16_bl {
		displayName = "Blue";
		texture[] = {"\d3s_nemises_is_16\data\skins\is\midnight_blue.paa"};
	};
	
	class is_16_r {
		displayName = "Red";
		texture[] = {"\d3s_nemises_is_16\data\skins\is\morello_red.paa"};
	};
	
	class is_16_ss {
		displayName = "Silver";
		texture[] = {"\d3s_nemises_is_16\data\skins\is\satin_silver.paa"};
	};
	
	class is_16_st {
		displayName = "Titan";
		texture[] = {"\d3s_nemises_is_16\data\skins\is\sonic_titanium.paa"};
	};
	
	class is_16_sb {
		displayName = "Black2";
		texture[] = {"\d3s_nemises_is_16\data\skins\is\starlight_black.paa"};
	};
	
	class is_16_wp {
		displayName = "Polar";
		texture[] = {"\d3s_nemises_is_16\data\skins\is\white_pearl.paa"};
	};
	
	//d3s_qx56_13
	class q56_13_b {
		displayName = "Black";
		texture[] = {"\d3s_qx56_13\data\skins\black.paa"};
	};
	
	class q56_13_bl {
		displayName = "Blue";
		texture[] = {"\d3s_qx56_13\data\skins\blue.paa"};
	};
	
	class q56_13_br {
		displayName = "Blordo";
		texture[] = {"\d3s_qx56_13\data\skins\bordo.paa"};
	};
	
	class q56_13_bw {
		displayName = "Brown";
		texture[] = {"\d3s_qx56_13\data\skins\brown.paa"};
	};
	
	class q56_13_g {
		displayName = "Gray";
		texture[] = {"\d3s_qx56_13\data\skins\gray.paa"};
	};
	
	class q56_13_s {
		displayName = "Serebro";
		texture[] = {"\d3s_qx56_13\data\skins\serebro.paa"};
	};
	
	class q56_13_w {
		displayName = "White";
		texture[] = {"\d3s_qx56_13\data\skins\white.paa"};
	};
	
	//d3s_nemises_cla_14
	class cla_14_ao {
		displayName = "AO";
		texture[] = {"\d3s_nemises_cla_14\data\skins\cla_ao_co.paa"};
	};
	
	class cla_14_bb {
		displayName = "Blue";
		texture[] = {"\d3s_nemises_cla_14\data\skins\cla_brilliant_blue.paa"};
	};
	
	class cla_14_cb {
		displayName = "Brown";
		texture[] = {"\d3s_nemises_cla_14\data\skins\cla_citrin_brown.paa"};
	};
	
	class cla_14_ds {
		displayName = "Diamant-Silver";
		texture[] = {"\d3s_nemises_cla_14\data\skins\cla_diamond_silver.paa"};
	};
	
	class cla_14_dw {
		displayName = "Diamant-White";
		texture[] = {"\d3s_nemises_cla_14\data\skins\cla_diamond_white.paa"};
	};
	
	class cla_14_hr {
		displayName = "Red";
		texture[] = {"\d3s_nemises_cla_14\data\skins\cla_hyazinth_red.paa"};
	};
	
	class cla_14_is {
		displayName = "Silver";
		texture[] = {"\d3s_nemises_cla_14\data\skins\cla_iridium_silver.paa"};
	};
	
	class cla_14_jr {
		displayName = "Red-2";
		texture[] = {"\d3s_nemises_cla_14\data\skins\cla_jupiter_red.paa"};
	};
	
	class cla_14_ob {
		displayName = "Obsidian";
		texture[] = {"\d3s_nemises_cla_14\data\skins\cla_obsidian_black.paa"};
	};
	
	class cla_14_obr {
		displayName = "Milk-Brown";
		texture[] = {"\d3s_nemises_cla_14\data\skins\cla_orient_brown.paa"};
	};
	
	class cla_14_pw {
		displayName = "Polar";
		texture[] = {"\d3s_nemises_cla_14\data\skins\cla_polar_white.paa"};
	};
	
	//d3s_nemises_3159
	class u3159_b {
		displayName = "Black";
		texture[] = {"\d3s_nemises_3159\data\skins\3159_black.paa"};
	};
	
	class u3159_bl {
		displayName = "Blue";
		texture[] = {"\d3s_nemises_3159\data\skins\3159_blue.paa"};
	};
	
	class u3159_bd {
		displayName = "Stock";
		texture[] = {"\d3s_nemises_3159\data\skins\3159_body.paa"};
	};
	
	class u3159_bd2 {
		displayName = "Stock2";
		texture[] = {"\d3s_nemises_3159\data\skins\3159_body_2.paa"};
	};
	
	class u3159_bd3 {
		displayName = "Stock3";
		texture[] = {"\d3s_nemises_3159\data\skins\3159_body_3.paa"};
	};
	
	class u3159_br {
		displayName = "Brezent";
		texture[] = {"\d3s_nemises_3159\data\skins\3159_breeze.paa"};
	};
	
	class u3159_brw {
		displayName = "Brown";
		texture[] = {"\d3s_nemises_3159\data\skins\3159_brown.paa"};
	};
	
	class u3159_g {
		displayName = "Gray";
		texture[] = {"\d3s_nemises_3159\data\skins\3159_gray.paa"};
	};
	
	class u3159_h {
		displayName = "Haki";
		texture[] = {"\d3s_nemises_3159\data\skins\3159_haki.paa"};
	};
	
	class u3159_or {
		displayName = "Orange";
		texture[] = {"\d3s_nemises_3159\data\skins\3159_orange.paa"};
	};
	
	class u3159_r {
		displayName = "Red";
		texture[] = {"\d3s_nemises_3159\data\skins\3159_red.paa"};
	};
	
	class u3159_y {
		displayName = "Yellow";
		texture[] = {"\d3s_nemises_3159\data\skins\3159_yellow.paa"};
	};
	
	class u3159_vip {
		displayName = "Zebra";
		texture[] = {"\d3s_nemises_3159\data\skins\vip\camo11.paa"};
	};
	
	class u3159_vip2 {
		displayName = "Sota";
		texture[] = {"\d3s_nemises_3159\data\skins\vip\camo16.paa"};
	};
	
	class u3159_vip3 {
		displayName = "Sota2";
		texture[] = {"\d3s_nemises_3159\data\skins\vip\camo17.paa"};
	};
	
	class u3159_vip4 {
		displayName = "Uzor";
		texture[] = {"\d3s_nemises_3159\data\skins\vip\camo4.paa"};
	};
	
	//d3s_nemises_w205_14
	class w205_14_13 {
		displayName = "White-Stick";
		texture[] = {"\d3s_nemises_w205_14\data\skins\1.paa"};
	};
	
	class w205_14_ao3 {
		displayName = "AO";
		texture[] = {"\d3s_nemises_w205_14\data\skins\c63_ao_co.paa"};
	};
	
	class w205_14_b3 {
		displayName = "Black";
		texture[] = {"\d3s_nemises_w205_14\data\skins\c63_black.paa"};
	};
	
	class w205_14_bl3 {
		displayName = "Blue";
		texture[] = {"\d3s_nemises_w205_14\data\skins\c63_blue.paa"};
	};
	
	class w205_14_bz3 {
		displayName = "Breez";
		texture[] = {"\d3s_nemises_w205_14\data\skins\c63_breeze.paa"};
	};
	
	class w205_14_g3 {
		displayName = "Green";
		texture[] = {"\d3s_nemises_w205_14\data\skins\c63_green.paa"};
	};
	
	class w205_14_or3 {
		displayName = "Orange";
		texture[] = {"\d3s_nemises_w205_14\data\skins\c63_orange.paa"};
	};
	
	class w205_14_rd3 {
		displayName = "Red";
		texture[] = {"\d3s_nemises_w205_14\data\skins\c63_red.paa"};
	};
	
	class w205_14_y3 {
		displayName = "Yellow";
		texture[] = {"\d3s_nemises_w205_14\data\skins\c63_yellow.paa"};
	};
	
	class w205_14_ao5 {
		displayName = "Breez";
		texture[] = {"\d3s_nemises_w205_14\data\skins\w205_ao_co.paa"};
	};
	
	class w205_14_bb5 {
		displayName = "Blue";
		texture[] = {"\d3s_nemises_w205_14\data\skins\w205_brilliant_blue.paa"};
	};
	
	class w205_14_cb5 {
		displayName = "Dark-blue";
		texture[] = {"\d3s_nemises_w205_14\data\skins\w205_cavansite_blue.paa"};
	};
	
	class w205_14_bc5 {
		displayName = "Brown";
		texture[] = {"\d3s_nemises_w205_14\data\skins\w205_citrin_brown.paa"};
	};
	
	class w205_14_hr5 {
		displayName = "Red";
		texture[] = {"\d3s_nemises_w205_14\data\skins\w205_hyazinth_red.paa"};
	};
	
	class w205_14_ob5 {
		displayName = "Black";
		texture[] = {"\d3s_nemises_w205_14\data\skins\w205_obsidian_black.paa"};
	};
	
	class w205_14_sg5 {
		displayName = "Gray";
		texture[] = {"\d3s_nemises_w205_14\data\skins\w205_selenit_grey.paa"};
	};
	
	//d3s_f86_15
	class f86_15_AO {
		displayName = "AO";
		texture[] = {"\d3s_f86_15\data\skins\F86_AO_co.paa"};
	};
	
	class f86_15_ay {
		displayName = "Yellow";
		texture[] = {"\d3s_f86_15\data\skins\F86_Austin_Yellow.paa"};
	};
	
	class f86_15_bs {
		displayName = "Black-Saphire";
		texture[] = {"\d3s_f86_15\data\skins\F86_Black_Sapphire.paa"};
	};
	
	class f86_15_ch {
		displayName = "Champione";
		texture[] = {"\d3s_f86_15\data\skins\F86_Champagne_Quartz.paa"};
	};
	
	class f86_15_fdr {
		displayName = "Frozen-red";
		texture[] = {"\d3s_f86_15\data\skins\F86_Frozen_Dark_Red.paa"};
	};
	
	class f86_15_gr {
		displayName = "Green";
		texture[] = {"\d3s_f86_15\data\skins\F86_Green_Pearl.paa"};
	};
	
	class f86_15_mb {
		displayName = "Marina";
		texture[] = {"\d3s_f86_15\data\skins\F86_Marina_Bay_Blue.paa"};
	};
	
	class f86_15_mr {
		displayName = "Red";
		texture[] = {"\d3s_f86_15\data\skins\F86_Melbourne_Red.paa"};
	};
	
	class f86_15_mg {
		displayName = "Grey";
		texture[] = {"\d3s_f86_15\data\skins\F86_Mineral_Grey.paa"};
	};
	
	class f86_15_or {
		displayName = "Orange";
		texture[] = {"\d3s_f86_15\data\skins\F86_Sakhir_Orange.paa"};
	};
	
	class f86_15_sr {
		displayName = "light-blue";
		texture[] = {"\d3s_f86_15\data\skins\F86_Snapper_Rocks_Blue.paa"};
	};
	
	class f86_15_offay {
		displayName = "Yellow";
		texture[] = {"\d3s_f86_15\data\skins\OFF_Austin_Yellow.paa"};
	};
	
	class f86_15_offbs {
		displayName = "Black-Saphire";
		texture[] = {"\d3s_f86_15\data\skins\OFF_Black_Sapphire.paa"};
	};
	
	class f86_15_offcq {
		displayName = "Champione";
		texture[] = {"\d3s_f86_15\data\skins\OFF_Champagne_Quartz.paa"};
	};
	
	class f86_15_offfr {
		displayName = "Frozen-red";
		texture[] = {"\d3s_f86_15\data\skins\OFF_Frozen_Dark_Red.paa"};
	};
	
	class f86_15_offgp {
		displayName = "Green";
		texture[] = {"\d3s_f86_15\data\skins\OFF_Green_Pearl.paa"};
	};
	
	class f86_15_offmr {
		displayName = "Marina";
		texture[] = {"\d3s_f86_15\data\skins\OFF_Marina_Bay_Blue.paa"};
	};
	
	class f86_15_offr {
		displayName = "Red";
		texture[] = {"\d3s_f86_15\data\skins\OFF_Melbourne_Red.paa"};
	};
	
	class f86_15_offor {
		displayName = "Orange";
		texture[] = {"\d3s_f86_15\data\skins\OFF_Sakhir_Orange.paa"};
	};
	
	class f86_15_offsp {
		displayName = "Blue";
		texture[] = {"\d3s_f86_15\data\skins\OFF_Snapper_Rocks_Blue.paa"};
	};
	
	//d3s_e38_98
	class e38_98_ao {
		displayName = "AO";
		texture[] = {"\d3s_e38_98\data\skins\730_AO_co.paa"};
	};
	
	class e38_98_b {
		displayName = "Blue";
		texture[] = {"\d3s_e38_98\data\skins\730_Blue.paa"};
	};
	
	class e38_98_g {
		displayName = "Gray";
		texture[] = {"\d3s_e38_98\data\skins\730_Gray.paa"};
	};
	
	class e38_98_gr {
		displayName = "Green";
		texture[] = {"\d3s_e38_98\data\skins\730_Green.paa"};
	};
	
	class e38_98_r {
		displayName = "Red";
		texture[] = {"\d3s_e38_98\data\skins\730_Red.paa"};
	};
	
	class e38_98_s {
		displayName = "Silver";
		texture[] = {"\d3s_e38_98\data\skins\730_AO_co.paa"};
	};
	
	//d3s_fiesta_16
	class f_16_ao {
		displayName = "AO";
		texture[] = {"\d3s_fiesta_16\data\skins\Fiesta_AO_co.paa"};
	};
	
	class f_16_bb {
		displayName = "Blazer";
		texture[] = {"\d3s_fiesta_16\data\skins\Fiesta_Blazer_Blue.paa"};
	};
	
	class f_16_bw {
		displayName = "Saphire";
		texture[] = {"\d3s_fiesta_16\data\skins\Fiesta_Blue_Wave.paa"};
	};
	
	class f_16_b {
		displayName = "Blue";
		texture[] = {"\d3s_fiesta_16\data\skins\Fiesta_Deep_Impact_Blue.paa"};
	};
	
	class f_16_b2 {
		displayName = "Blue-2";
		texture[] = {"\d3s_fiesta_16\data\skins\Fiesta_Indic_Blue.paa"};
	};
	
	class f_16_bl {
		displayName = "Black";
		texture[] = {"\d3s_fiesta_16\data\skins\Fiesta_Iridium_Black.paa"};
	};
	
	class f_16_g {
		displayName = "Grey";
		texture[] = {"\d3s_fiesta_16\data\skins\Fiesta_Magnetic.paa"};
	};
	
	class f_16_ms {
		displayName = "Silver";
		texture[] = {"\d3s_fiesta_16\data\skins\Fiesta_Moondust_Silver.paa"};
	};
	
	class f_16_rr {
		displayName = "Red";
		texture[] = {"\d3s_fiesta_16\data\skins\Fiesta_Race_Red.paa"};
	};
	
	class f_16_pi {
		displayName = "Pinck";
		texture[] = {"\d3s_fiesta_16\data\skins\Fiesta_Ruby_Red.paa"};
	};
	
	//d3s_focus_14
	class f_14_ao {
		displayName = "AO";
		texture[] = {"\d3s_focus_14\data\skins\ST_AO_co.paa"};
	};
	
	class f_14_bb {
		displayName = "Blazer";
		texture[] = {"\d3s_focus_14\data\skins\ST_Blazer_Blue.paa"};
	};
	
	class f_14_bw {
		displayName = "Berezov";
		texture[] = {"\d3s_focus_14\data\skins\ST_Blue_Wave.paa"};
	};
	
	class f_14_dib {
		displayName = "Blue";
		texture[] = {"\d3s_focus_14\data\skins\ST_Deep_Impact_Blue.paa"};
	};
	
	class f_14_b {
		displayName = "Black";
		texture[] = {"\d3s_focus_14\data\skins\ST_Iridium_Black.paa"};
	};
	
	class f_14_g {
		displayName = "Gray";
		texture[] = {"\d3s_focus_14\data\skins\ST_Magnetic.paa"};
	};
	
	class f_14_rr {
		displayName = "Red";
		texture[] = {"\d3s_focus_14\data\skins\ST_Race_Red.paa"};
	};
	
	class f_14_rrd {
		displayName = "Pink";
		texture[] = {"\d3s_focus_14\data\skins\ST_Ruby_Red.paa"};
	};
	
	//d3s_ghost_18
	class gh_18_1 {
		displayName = "Gray-black";
		texture[] = {"\d3s_ghost_18\data\skins\GH_Anthracite_1.paa"};
	};
	
	class gh_18_2 {
		displayName = "Gray-black2";
		texture[] = {"\d3s_ghost_18\data\skins\GH_Anthracite_2.paa"};
	};
	
	class gh_18_3 {
		displayName = "Black";
		texture[] = {"\d3s_ghost_18\data\skins\GH_Black.paa"};
	};
	
	class gh_18_4 {
		displayName = "Black2";
		texture[] = {"\d3s_ghost_18\data\skins\GH_Black_1.paa"};
	};
	
	class gh_18_5 {
		displayName = "Black-Brown";
		texture[] = {"\d3s_ghost_18\data\skins\GH_Citrin_Brown_1.paa"};
	};
	
	class gh_18_6 {
		displayName = "Red";
		texture[] = {"\d3s_ghost_18\data\skins\GH_English_Red.paa"};
	};
	
	class gh_18_7 {
		displayName = "Red-Black";
		texture[] = {"\d3s_ghost_18\data\skins\GH_English_Red_1.paa"};
	};
	
	class gh_18_8 {
		displayName = "Silver";
		texture[] = {"\d3s_ghost_18\data\skins\GH_Jubilee_Silver_2.paa"};
	};
	
	class gh_18_9 {
		displayName = "Blue";
		texture[] = {"\d3s_ghost_18\data\skins\GH_Metropolian_Blue_2.paa"};
	};
	
	class gh_18_10 {
		displayName = "Green";
		texture[] = {"\d3s_ghost_18\data\skins\GH_Woodland_Green_2.paa"};
	};
	
	//d3s_giulietta_16
	class gi_16_ao {
		displayName = "AO";
		texture[] = {"\d3s_giulietta_16\data\skins\giulietta_AO_co.paa"};
	};
	
	class gi_16_i {
		displayName = "Ivory";
		texture[] = {"\d3s_giulietta_16\data\skins\giulietta_Ivory.paa"};
	};
	
	class gi_16_b {
		displayName = "Blue";
		texture[] = {"\d3s_giulietta_16\data\skins\giulietta_Misano_Blue.paa"};
	};
	
	class gi_16_bl {
		displayName = "Blue-Dark";
		texture[] = {"\d3s_giulietta_16\data\skins\giulietta_Montecarlo_Blue.paa"};
	};
	
	class gi_16_r {
		displayName = "Red";
		texture[] = {"\d3s_giulietta_16\data\skins\giulietta_Rosso_Alfa.paa"};
	};
	
	class gi_16_dr {
		displayName = "Dark-Red";
		texture[] = {"\d3s_giulietta_16\data\skins\giulietta_Rosso_Competizione.paa"};
	};
	
	class gi_16_sg {
		displayName = "Silver";
		texture[] = {"\d3s_giulietta_16\data\skins\giulietta_Silverstone_Gray.paa"};
	};
	
	class gi_16_vg {
		displayName = "Gray";
		texture[] = {"\d3s_giulietta_16\data\skins\giulietta_Vesuvio_Gray.paa"};
	};
	
	class gi_16_vb {
		displayName = "Black";
		texture[] = {"\d3s_giulietta_16\data\skins\giulietta_Vulcano_Black.paa"};
	};
	
	//d3s_f13_13
	class f13_al {
		isplayName = "Alpine";
		texture[] = {"\d3s_f13_13\data\skins\F13_Alpine_White.paa"};
	};
	
	class f13_ao {
		isplayName = "AO";
		texture[] = {"\d3s_f13_13\data\skins\F13_AO_co.paa"};
	};
	
	class f13_y {
		isplayName = "Yellow";
		texture[] = {"\d3s_f13_13\data\skins\F13_Austin_Yellow.paa"};
	};
	
	class f13_bs {
		isplayName = "Black";
		texture[] = {"\d3s_f13_13\data\skins\F13_Black_Sapphire.paa"};
	};
	
	class f13_g {
		isplayName = "Gray";
		texture[] = {"\d3s_f13_13\data\skins\F13_Black_Uni.paa"};
	};
	
	class f13_s {
		isplayName = "Stone";
		texture[] = {"\d3s_f13_13\data\skins\F13_Bluestone.paa"};
	};
	
	class f13_gs {
		isplayName = "Silver";
		texture[] = {"\d3s_f13_13\data\skins\F13_Glacier_Silver.paa"};
	};
	
	class f13_gr {
		isplayName = "Green";
		texture[] = {"\d3s_f13_13\data\skins\F13_Green_Pearl.paa"};
	};
	
	class f13_ip {
		isplayName = "Imperia-blue";
		texture[] = {"\d3s_f13_13\data\skins\F13_Imperial_Blue.paa"};
	};
	
	class f13_bb {
		isplayName = "Blue";
		texture[] = {"\d3s_f13_13\data\skins\F13_Marina_Bay_Blue.paa"};
	};
	
	class f13_r {
		isplayName = "Red";
		texture[] = {"\d3s_f13_13\data\skins\F13_Melbourne_Red.paa"};
	};
	
	class f13_or {
		isplayName = "Orange";
		texture[] = {"\d3s_f13_13\data\skins\F13_Sakhir_Orange.paa"};
	};
	
	class f13_sg {
		isplayName = "Dark-gray";
		texture[] = {"\d3s_f13_13\data\skins\F13_Sophisto_Grey.paa"};
	};
	
	class f13_ys {
		isplayName = "Marina";
		texture[] = {"\d3s_f13_13\data\skins\F13_Yas_Marina_Blue.paa"};
	};
	
	//d3s_camaro_16
	class ss_16_ao {
		isplayName = "AO";
		texture[] = {"\d3s_camaro_16\data\SS\skins\SS_AO_co.paa"};
	};
	
	class ss_16_b {
		isplayName = "Black";
		texture[] = {"\d3s_camaro_16\data\SS\skins\SS_Black.paa"};
	};
	
	class ss_16_y {
		isplayName = "Yellow";
		texture[] = {"\d3s_camaro_16\data\SS\skins\SS_Bright_Yellow.paa"};
	};
	
	class ss_16_r {
		isplayName = "Red";
		texture[] = {"\d3s_camaro_16\data\SS\skins\SS_Garnet_Red.paa"};
	};
	
	class ss_16_bl {
		isplayName = "Blue";
		texture[] = {"\d3s_camaro_16\data\SS\skins\SS_Hyper_Blue.paa"};
	};
	
	class ss_16_db {
		isplayName = "Dark-Black";
		texture[] = {"\d3s_camaro_16\data\SS\skins\SS_Mosaic_Black.paa"};
	};
	
	class ss_16_g {
		isplayName = "Gray";
		texture[] = {"\d3s_camaro_16\data\SS\skins\SS_Nightfall_Gray.paa"};
	};
	
	class ss_16_rh {
		isplayName = "Light-Red";
		texture[] = {"\d3s_camaro_16\data\SS\skins\SS_Red_Hot.paa"};
	};
	
	class ss_16_si {
		isplayName = "Ice";
		texture[] = {"\d3s_camaro_16\data\SS\skins\SS_Silver_Ice.paa"};
	};
	
	class Z_16_ao {
		isplayName = "AO";
		texture[] = {"\d3s_camaro_16\data\ZL1\skins\ZL1_AO_co.paa"};
	};
	
	class Z_16_b {
		isplayName = "Black";
		texture[] = {"\d3s_camaro_16\data\ZL1\skins\ZL1_Black.paa"};
	};
	
	class Z_16_y {
		isplayName = "Yellow";
		texture[] = {"\d3s_camaro_16\data\ZL1\skins\ZL1_Bright_Yellow.paa"};
	};
	
	class Z_16_r {
		isplayName = "Red";
		texture[] = {"\d3s_camaro_16\data\ZL1\skins\ZL1_Garnet_Red.paa"};
	};
	
	class Z_16_bl {
		isplayName = "Blue";
		texture[] = {"\d3s_camaro_16\data\ZL1\skins\ZL1_Hyper_Blue.paa"};
	};
	
	class Z_16_db {
		isplayName = "Dark-Black";
		texture[] = {"\d3s_camaro_16\data\ZL1\skins\ZL1_Mosaic_Black.paa"};
	};
	
	class Z_16_g {
		isplayName = "Gray";
		texture[] = {"\d3s_camaro_16\data\ZL1\skins\ZL1_Nightfall_Gray.paa"};
	};
	
	class Z_16_rh {
		isplayName = "Light-Red";
		texture[] = {"\d3s_camaro_16\data\ZL1\skins\ZL1_Red_Hot.paa"};
	};
	
	class Z_16_si {
		isplayName = "Ice";
		texture[] = {"\d3s_camaro_16\data\ZL1\skins\ZL1_Silver_Ice.paa"};
	};
	
	//d3s_focus_17
	class f_17_ao {
		isplayName = "AO";
		texture[] = {"\d3s_focus_17\data\skins\Focus_AO_co.paa"};
	};
	
	class f_17_bb {
		isplayName = "Blue";
		texture[] = {"\d3s_focus_17\data\skins\Focus_Blazer_Blue.paa"};
	};
	
	class f_17_bw {
		isplayName = "Blazer";
		texture[] = {"\d3s_focus_17\data\skins\Focus_Blue_Wave.paa"};
	};
	
	class f_17_c {
		isplayName = "Chrome";
		texture[] = {"\d3s_focus_17\data\skins\Focus_CHROME.paa"};
	};
	
	class f_17_db {
		isplayName = "Dark-blue";
		texture[] = {"\d3s_focus_17\data\skins\Focus_Deep_Impact_Blue.paa"};
	};
	
	class f_17_ib {
		isplayName = "Black";
		texture[] = {"\d3s_focus_17\data\skins\Focus_Iridium_Black.paa"};
	};
	
	class f_17_mg {
		isplayName = "Gray";
		texture[] = {"\d3s_focus_17\data\skins\Focus_Magnetic_Grey.paa"};
	};
	
	class f_17_r {
		isplayName = "Red";
		texture[] = {"\d3s_focus_17\data\skins\Focus_Race_Red.paa"};
	};
	
	class f_17_p {
		isplayName = "Pink";
		texture[] = {"\d3s_focus_17\data\skins\Focus_Ruby_Red.paa"};
	};
	
	class f_17_sb {
		isplayName = "Shadow";
		texture[] = {"\d3s_focus_17\data\skins\Focus_Shadow_Black.paa"};
	};
	
	class lb_17_w {
		isplayName = "White";
		texture[] = {"\d3s_focus_17\data\skins\LB_1.paa"};
	};
	
	class lb_17_r {
		isplayName = "Red";
		texture[] = {"\d3s_focus_17\data\skins\LB_2.paa"};
	};
	
	class lb_17_y {
		isplayName = "Yellow";
		texture[] = {"\d3s_focus_17\data\skins\LB_3.paa"};
	};
	
	class lb_17_g {
		isplayName = "Green";
		texture[] = {"\d3s_focus_17\data\skins\LB_4.paa"};
	};
	
	class lb_17_b {
		isplayName = "Blue";
		texture[] = {"\d3s_focus_17\data\skins\LB_5.paa"};
	};
	
	class lb_17_p {
		isplayName = "Pink";
		texture[] = {"\d3s_focus_17\data\skins\LB_6.paa"};
	};
	
	class lb_17_bk {
		isplayName = "Black";
		texture[] = {"\d3s_focus_17\data\skins\LB_7.paa"};
	};
	
	//d3s_uaz_3165
	class simba_ao {
		isplayName = "AO";
		texture[] = {"\d3s_uaz_3165\data\skins\3165_AO_co.paa"};
	};
	
	class simba_b {
		isplayName = "Black";
		texture[] = {"\d3s_uaz_3165\data\skins\3165_Black.paa"};
	};
	
	class simba_bl {
		isplayName = "Blue";
		texture[] = {"\d3s_uaz_3165\data\skins\3165_Blue.paa"};
	};
	
	class simba_g {
		isplayName = "Green";
		texture[] = {"\d3s_uaz_3165\data\skins\3165_Green.paa"};
	};
	
	class simba_m {
		isplayName = "Mindal";
		texture[] = {"\d3s_uaz_3165\data\skins\3165_Mindal.paa"};
	};
	
	class simba_mm {
		isplayName = "Mirage";
		texture[] = {"\d3s_uaz_3165\data\skins\3165_Mirage.paa"};
	};
	
	class simba_r {
		isplayName = "Red";
		texture[] = {"\d3s_uaz_3165\data\skins\3165_Red.paa"};
	};
	
	class simba_s {
		isplayName = "Silver";
		texture[] = {"\d3s_uaz_3165\data\skins\3165_Silver.paa"};
	};
	
	//d3s_pajero_07
	class p_07_ao {
		isplayName = "AO";
		texture[] = {"\d3s_pajero_07\data\skins\PAJ_AO_co.paa"};
	};
	
	class p_07_bo {
		isplayName = "Black";
		texture[] = {"\d3s_pajero_07\data\skins\PAJ_Black_Obsidian.paa"};
	};
	
	class p_07_cq {
		isplayName = "Mokko";
		texture[] = {"\d3s_pajero_07\data\skins\PAJ_Champagne_Quartz.paa"};
	};
	
	class p_07_gs {
		isplayName = "Shadow";
		texture[] = {"\d3s_pajero_07\data\skins\PAJ_Graphite_Shadow.paa"};
	};
	
	class p_07_b {
		isplayName = "Blue";
		texture[] = {"\d3s_pajero_07\data\skins\PAJ_Hermosa_Blue.paa"};
	};
	
	class p_07_p {
		isplayName = "Platinum";
		texture[] = {"\d3s_pajero_07\data\skins\PAJ_Liquid_Platinum.paa"};
	};
	
	class p_07_mb {
		isplayName = "Dark-Black";
		texture[] = {"\d3s_pajero_07\data\skins\PAJ_Mineral_Black.paa"};
	};
	
	class p_07_ma {
		isplayName = "Light-Red";
		texture[] = {"\d3s_pajero_07\data\skins\PAJ_Mocha_Almond.paa"};
	};
	
	class p_07_sq {
		isplayName = "Smoke";
		texture[] = {"\d3s_pajero_07\data\skins\PAJ_Smokey_Quartz.paa"};
	};
	
	//Ghost_veh_c
	class reb_camo {
		displayName = "Camo";
		texture[] = {"\Ghost_veh_c\data\color\Camo.paa"};
	};
	
	class reb_camo10 {
		displayName = "Camo2";
		texture[] = {"\Ghost_veh_c\data\color\Camo10.paa"};
	};
	
	class reb_camo3 {
		displayName = "Camo3";
		texture[] = {"\Ghost_veh_c\data\color\Camo3.paa"};
	};
	
	class reb_camo4 {
		displayName = "Camo4";
		texture[] = {"\Ghost_veh_c\data\color\camo4.paa"};
	};
	
	class reb_camo5 {
		displayName = "Camo5";
		texture[] = {"\Ghost_veh_c\data\color\camo5.paa"};
	};
	
	class reb_camo6 {
		displayName = "Camo6";
		texture[] = {"\Ghost_veh_c\data\color\camo6.paa"};
	};
	
	class reb_camo7 {
		displayName = "Camo7";
		texture[] = {"\Ghost_veh_c\data\color\camo7.paa"};
	};
	
	class reb_camo9 {
		displayName = "Camo8";
		texture[] = {"\Ghost_veh_c\data\color\Camo9.paa"};
	};
	
	class reb_c_vip {
		displayName = "Camo9";
		texture[] = {"\Ghost_veh_c\data\color\Vip.paa"};
	};
	
	class reb_wint {
		displayName = "Camo10";
		texture[] = {"\Ghost_veh_c\data\color\winter.paa"};
	};
	
	class reb_wint_v {
		displayName = "Camo11";
		texture[] = {"\Ghost_veh_c\data\color\winter_vip.paa"};
	};
	
	//union_veh_t
	class colr_1 {
		displayName = "Aliceblue";
		texture[] = {"\union_veh_t\data\colors\aliceblue.paa"};
	};
	
	class colr_2 {
		displayName = "Yellow";
		texture[] = {"\union_veh_t\data\colors\banana.paa"};
	};
	
	class colr_3 {
		displayName = "Violet";
		texture[] = {"\union_veh_t\data\colors\blueviolet.paa"};
	};
	
	class colr_4 {
		displayName = "Brown";
		texture[] = {"\union_veh_t\data\colors\brick.paa"};
	};
	
	class colr_5 {
		displayName = "Red";
		texture[] = {"\union_veh_t\data\colors\brown.paa"};
	};
	
	class colr_6 {
		displayName = "Wood";
		texture[] = {"\union_veh_t\data\colors\burlywood.paa"};
	};
	
	class colr_7 {
		displayName = "Orange";
		texture[] = {"\union_veh_t\data\colors\cadmiumorange.paa"};
	};
	
	class colr_8 {
		displayName = "Light-Orange";
		texture[] = {"\union_veh_t\data\colors\cadmiumyellow.paa"};
	};
	
	class colr_9 {
		displayName = "Blue";
		texture[] = {"\union_veh_t\data\colors\cobalt.paa"};
	};
	
	class colr_10 {
		displayName = "Gray";
		texture[] = {"\union_veh_t\data\colors\coldgrey.paa"};
	};
	
	class colr_11 {
		displayName = "Coral";
		texture[] = {"\union_veh_t\data\colors\coral.paa"};
	};
	
	class colr_12 {
		displayName = "Sky";
		texture[] = {"\union_veh_t\data\colors\cyan.paa"};
	};
	
	class colr_13 {
		displayName = "Light-Green";
		texture[] = {"\union_veh_t\data\colors\darkseagreen.paa"};
	};
	
	class colr_14 {
		displayName = "Violet2";
		texture[] = {"\union_veh_t\data\colors\darkslateblue.paa"};
	};
	
	class colr_15 {
		displayName = "Oliv";
		texture[] = {"\union_veh_t\data\colors\olivedrab.paa"};
	};
	
	
};