/*
Robert Mines
11/20/2020
CIS247C Course Project
*/
#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include "Car.h"
using namespace std;

class electricCar: public Car
{
private:
	float batterySize;
	short range;
	short mpgE;

public:
	// Constructors & destructor
	electricCar();
	electricCar(string vin, string make, string model, short year, double price,
		short numDoors, bool hatchback, float batterySize, short range,
		short mpgE, Engine motor);
	virtual ~electricCar();

	// Behaviors
	string toString();

	// Accessord & Mutators
	float getBatterySize();
	short getRange();
	short getMPGe();
	void setBatterySize(float batterySize);
	void setRange(short range);
	void setMPGe(short mpgE);
};

