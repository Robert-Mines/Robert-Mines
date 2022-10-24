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

class gasCar: public Car
{
private:
	float tankSize;
	short mpg;

public:
	// Constructors & Destructor
	gasCar();
	gasCar(string vin, string make, string model, short year, double price,
		short numDoors, bool hatchback, float tankSize, short mpg, Engine motor);
	virtual~gasCar();
	
	// Behaviors
	string toString();

	// Accessors & Mutators
	float getTankSize();
	short getMPG();
	void setTankSize(float tankSize);
	void setMPG(short mpg);
};

