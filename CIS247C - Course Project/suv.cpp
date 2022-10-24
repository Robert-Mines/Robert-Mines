#include "suv.h"
#include "Vehicle.h"

// Constructors & Destructor
suv::suv()
{

};

suv::suv(string vin, string make, string model, short year,
	double price, short numSeats, float cargoSize, Engine motor):
	Vehicle(vin, make, model, year, price, motor)
{
	setNumSeats(numSeats);
	setCargoSize(cargoSize);
}

suv::~suv() {};

// Behaviors
string suv::toString()
{
	return Vehicle::toString() + ", numSeats: " + to_string(numSeats) +
		", cargoSize: " + to_string(cargoSize);
};

//Accessors & Mutators
short suv::getNumSeats()
{
	return numSeats;
};

float suv::getCargoSize()
{
	return cargoSize;
};

void suv::setNumSeats(short numSeats)
{
	if (numSeats > 0 && numSeats < 16)
	{
		this->numSeats = numSeats;
	}
	else
		this->numSeats = 0;
};

void suv::setCargoSize(float cargoSize)
{
	if (cargoSize > 0.0f && cargoSize < 200.0f)
		this->cargoSize = cargoSize;
	else
		this->cargoSize = 0;
};
