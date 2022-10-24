/*
Robert Mines
11/20/2020
CIS247C Course Project
*/
#include "gasCar.h"

gasCar::gasCar()
{
	tankSize = 0.0f;
	mpg = 0;
};

gasCar::gasCar(string vin, string make, string model, short year, double price,
	short numDoors, bool hatchback, float tankSize, short mpg, Engine motor)
	:Car(vin, make, model, year, price, numDoors, hatchback, motor) {
	setTankSize(tankSize);
	setMPG(mpg);
}

gasCar::~gasCar() {};

// Behaviors
string gasCar::toString()
{
	return Car::toString() + ", tankSize: " + to_string(tankSize) +
		", mpg: " + to_string(mpg);
};

// Accessors & Mutators
float gasCar::getTankSize()
{
	return tankSize;
};

short gasCar::getMPG()
{
	return mpg;
};

void gasCar::setTankSize(float tankSize)
{
	if (tankSize > 0)
		this->tankSize = tankSize;
	else
		this->tankSize = 0.0f;
};

void gasCar::setMPG(short mpg)
{
	if (mpg > 0)
		this->mpg = mpg;
	else
		this->mpg = 0;
};