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
using namespace std;

class Vehicle
{
protected:
	// Attributes
	string vin;
	string make;
	string model;
	short year;
	double price;
	Engine motor;

public:
	// Constructors & Destructor
	Vehicle();
	Vehicle(string vin, string make, string model, short year, double price, Engine motor);
	virtual~Vehicle() = 0;


	// Behaviours
	virtual string toString();
	double discountPrice(float discountPercent);

	// Accessors & Mutators
	string getVin(); //VIN
	void setVin(string vin);

	string getMake(); //MAKE
	void setMake(string make);

	string getModel(); //MODEL
	void setModel(string model);

	short getYear();  //YEAR
	void setYear(short year);

	double getPrice();  //PRICE
	void setPrice(double price);

	Engine getMotor(); //MOTOR
	void setMotor(Engine motor);

};

