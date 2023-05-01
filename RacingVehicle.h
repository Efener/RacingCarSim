#pragma once
#include <string>
#include "Track.h"

using namespace std;
#include <iostream>


class RacingVehicle
{
protected:
	string vehicle_type;
	double top_speed;
	double handling;
	string manufacturer;
	string model;
	string driver_name;

public:
	RacingVehicle(string vehicleType, double topSpeed, double Handling, string Manufacturer, string Model, string driverName)
	{
		vehicle_type = vehicleType;
		top_speed = topSpeed;
		handling = Handling;
		manufacturer = Manufacturer;
		model = Model;
		driver_name = driverName;

	}



	void display() const {
		cout << "Vehicle Type: " << vehicle_type << endl;
		cout << "Top Speed: " << top_speed << " km/h" << endl;
		cout << "Handling: " << handling << endl;
		cout << "Manufacturer: " << manufacturer << endl;
		cout << "Model: " << model << endl;
		cout << "Driver Name: " << driver_name << endl;
		cout << "\n";

	}


	/*virtual double race(const Track& track) const; */

	virtual double race(const Track& track) const {
		return 0.0;
	}

	void tuning(double topSpeedPct = 0, double handlingPct = 0)
	{
		top_speed *= (1 + (topSpeedPct / 100));
		handling *= (1 + (handlingPct / 100));

	}

};
