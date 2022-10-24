#pragma once

//Included Libraries
#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include "Engine.h"
#include "Vehicle.h"
using namespace std;

class Car: public Vehicle
{
private:
	// Attributes
	short numDoors;
	bool hatchBack;
	
public:
	//Constructors and Destructor
	Car();
	Car(string vin, string make, string model, short year, double price, short numDoors, bool hatchBack, Engine motor);
	~Car();

	//Behaviors
	string toString();
	

	//Accessors(getters) and Mutators(setters)
	short getNumDoors(); //NUMBER OF DOORS
	void setNumDoors(short NumDoors);

	bool getHatchback(); //HATCH Y/N
	void setHatchback(bool isHatchback);

};

