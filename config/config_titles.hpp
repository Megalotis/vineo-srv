class LifeCfgTitles {
	class default {
		title = "";
		conditions = "";
	};
	class vip {
		title = "Бизнесмен";
		conditions = "(call life_donator) > 0";
	};
	class vip_1 {
		title = "Вор";
		conditions = "(call life_donator) > 0";
	};
	class vip_2 {
		title = "Законник";
		conditions = "(call life_donator) > 0";
	};
	class vip_3 {
		title = "Мафиози";
		conditions = "(call life_donator) > 1";
	};
	class vip_4 {
		title = "Цыган";
		conditions = "(call life_donator) > 0";
	};
	class vip_5 {
		title = "Капо";
		conditions = "(call life_donator) > 1";
	};
	class vip_6 {
		title = "Дон";
		conditions = "(call life_donator) > 1";
	};
	class vip_7 {
		title = "Консильери";
		conditions = "(call life_donator) > 1";
	};
	class vip_8 {
		title = "Якудза";
		conditions = "(call life_donator) > 1";
	};
	class vip_9 {
		title = "Проклятый";
		conditions = "(call life_donator) > 0";
	};
	class vip_10 {
		title = "Везунчик";
		conditions = "(call life_donator) > 0";
	};
	class vip_11 {
		title = "Отрицала";
		conditions = "(call life_donator) > 0";
	};
	class vip_12 {
		title = "Работяга";
		conditions = "(call life_donator) > 1";
	};
	class vip_13 {
		title = "Магнат";
		conditions = "(call life_donator) > 2";
	};
	class vip_14 {
		title = "Бабник";
		conditions = "(call life_donator) > 0";
	};
	class vip_15 {
		title = "Вышибала";
		conditions = "(call life_donator) > 1";
	};
	class vip_16 {
		title = "Боксер";
		conditions = "(call life_donator) > 0";
	};
	class vip_17 {
		title = "Еврей";
		conditions = "(call life_donator) > 1";
	};
	class vip_18 {
		title = "Пироман";
		conditions = "(call life_donator) > 0";
	};
	class vip_19 {
		title = "Наглец";
		conditions = "(call life_donator) > 0";
	};
	class vip_20 {
		title = "Наркоман";
		conditions = "(call life_donator) > 0";
	};
	class viptop {
		title = "Олигарх";
		conditions = "(call life_donator) > 3";
	};
	class topgang {
		title = "Убийца";
		conditions = "((group player) getVariable [""gang_id"",-1]) isEqualTo (server_gangsRating select 0 select 0)";
	};
	class s1win {
		title = "Гангстер";
		conditions = "((group player) getVariable [""gang_license"",""-1""]) isEqualTo ""aff""";
	};
};