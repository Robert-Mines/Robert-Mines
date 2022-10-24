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
#include "Engine.h"
#include "Vehicle.h"
using namespace std;

class suv: public Vehicle
{
private:
	short numSeats;
	float cargoSize;

public:
	// Constructors & Destructor
	suv();
	suv(string vin, string make, string model, short year,
		double price, short numSeats, float cargoSize, Engine motor);
	virtual ~suv();
	// Behaviors
	string toString();
	//Accessors & Mutators
	short getNumSeats();
	float getCargoSize();
	void setNumSeats(short numSeats);
	void setCargoSize(float cargoSize);
};

