/*
	
	Filename: 	UnionClient_system_fuelRate.sqf
	Project: 	Union Altis Life RPG
	Author:		Merrick & Affect
	Steam:		76561198006439083 & 76561198053094990
	Web:		http://vineo.life/

*/
private["_vehicleToFuel","_velocityOfVehicle","_fuelConsumption"];
	while{true} do
{
    _vehicleToFuel = (vehicle player);
    if(isEngineOn _vehicleToFuel && ((driver _vehicleToFuel) == player) && !(_vehicleToFuel isKindOf "Air") && (_vehicleToFuel != player) ) then
    {
        _velocityOfVehicle = sqrt(((velocity _vehicleToFuel select 0)^2)+((velocity _vehicleToFuel select 1)^2))*3.6;
        
        _fuelConsumption = _velocityOfVehicle/100000 + 0.0001;
        if(_fuelConsumption > 0.02) then
        {
            _fuelConsumption = 0.02;
        };
        _vehicleToFuel setFuel ((fuel _vehicleToFuel)-_fuelConsumption);
        
        //hint format["Benzinverbrauch: %1L/km",_fuelConsumption*10000/2];
	        if(fuel _vehicleToFuel < 0.2 && fuel _vehicleToFuel > 0.18) then
        {
            hint "Топливо в бензобаке заканчивается! Скорее посетите АЗС!";
        }
        else
        {
            if(fuel _vehicleToFuel < 0.03) then
            {
                hint "Топливо в бензобаке закончилось!";
            };
        };
    };
    sleep 2;
};
