#include "Car.h"

//Default & Parameterized Constructors
Car::Car()
{
	numDoors = 0;
	hatchBack = false;
}

Car::Car(string vin, string make, string model, short year, double price, short numDoors, bool hatchBack, Engine motor): 
	Vehicle(vin, make, model, year, price, motor)
{
	setNumDoors(numDoors);
	setHatchback(hatchBack);
}

//Destructor
Car::~Car() {};

// Behaviors
string Car::toString()
{
	return Vehicle::toString() + ", numDoors: " + to_string(numDoors) + ", hatchback: " + to_string(hatchBack);
};

// Accessors & Mutators
short Car::getNumDoors()//NumDoors Getters \ Setters
{
	return numDoors;
}

void Car::setNumDoors(short numDoors)
{
	if (numDoors > 0 && numDoors < 5)
		this->numDoors = numDoors;
	else
		this->numDoors = 0;
}

bool Car::getHatchback()//Hatchback Getters \ Setters
{
	return hatchBack;
}

void Car::setHatchback(bool isHatchback)
{
	this->hatchBack = isHatchback;
}

