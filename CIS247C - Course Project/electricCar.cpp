/*
Robert Mines
11/20/2020
CIS247C Course Project
*/ 
#include "electricCar.h"

// Constructors & destructor
electricCar::electricCar()
{
	batterySize = 0.0f;
	range = 0;
	mpgE = 0;
};

electricCar::electricCar(string vin, string make, string model, 
	short year,double price, short numDoors, bool hatchback, 
	float batterySize, short range, short mpgE, Engine motor): 
	Car(vin, make, model, year, price, numDoors, hatchback, motor)
{
	setBatterySize(batterySize);
	setRange(range);
	setMPGe(mpgE);
};

electricCar::~electricCar() {};

// Behaviors
string electricCar::toString()
{
	return Car::toString() + ", batterySize: " + to_string(batterySize) +
		", range: " + to_string(range) + ", mpgE: " + to_string(mpgE);
};

// Accessord & Mutators
float electricCar::getBatterySize()
{
	return batterySize;
};

short electricCar::getRange()
{
	return range;
};

short electricCar::getMPGe()
{
	return mpgE;
};

void electricCar::setBatterySize(float batterySize)
{
	if (batterySize > 0)
		this->batterySize = batterySize;
	else
		this->batterySize = 0.0f;
};

void electricCar::setRange(short range)
{
	if (range > 0)
		this->range = range;
	else
		this->range = 0;
};

void electricCar::setMPGe(short mpgE)
{
	if (mpgE > 0)
		this->mpgE = mpgE;
	else
		this->mpgE = 0;
};