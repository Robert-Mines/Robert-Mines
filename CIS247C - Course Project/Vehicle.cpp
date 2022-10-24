#include "Vehicle.h"
// Constructors & Destructor
Vehicle::Vehicle()
{
	vin = "Unknown";
	make = "Unknown";
	model = "Unknown";
	year = 0;
	price = 0.0;
	// motor = already created by default constructor
};

Vehicle::Vehicle(string vin, string make, string model, short year, double price, Engine motor)
{
	setVin(vin);
	setMake(make);
	setModel(model);
	setYear(year);
	setPrice(price);
	setMotor(motor);
};

Vehicle::~Vehicle() {};

//Behaviours
string Vehicle::toString()
{
	return "VIN: " + vin + " make: " + make + ", year: " +
		to_string(year) + ", price: " + to_string(price) +
		", numCyllinders: " + to_string(motor.getCylinders()) +
		", horsePower: " + to_string(motor.getHorsepower());
};

double Vehicle::discountPrice(float discountPercent)
{
	double newPrice = price - (price * discountPercent);
	return newPrice;
};

// Accessors & Mutators
string Vehicle::getVin() //Vin Getters \ Setters
{
	return vin;
};

void Vehicle::setVin(string vin)
{
	if (vin.length() == 17)
		this->vin = vin;
	else
		this->vin = "Unknown";
};

string Vehicle::getMake()//Make Getters \ Setters
{
	return make;
}

void Vehicle::setMake(string make)
{
	if (make.length() > 0)
		this->make = make;
	else
		this->make = "Unknown";
}

string Vehicle::getModel()//Model Getters \ Setters
{
	return model;
}

void Vehicle::setModel(string model)
{
	if (model.length() > 0)
		this->model = model;
	else
		this->model = "Unknown";
}

short Vehicle::getYear()//Year Getters \ Setters
{
	return year;
}

void Vehicle::setYear(short year)
{
	if (year > 1980)
		this->year = year;
	else
		this->year = 0;
}

double Vehicle::getPrice()//Price Getters \ Setters
{
	return price;
}

void Vehicle::setPrice(double price)
{
	if (price > 0.0 && price < 10000000.0)
		this->price = price;
	else
		this->price = 0.0;
}

Engine Vehicle::getMotor()//Motor Getters \ Setters
{
	return motor;
}

void Vehicle::setMotor(Engine motor)
{
	this->motor = motor;
}