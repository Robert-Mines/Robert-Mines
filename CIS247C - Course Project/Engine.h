/*
Robert Mines
11/06/2020
CIS247C Course Project
*/
#pragma once

//Included Libraries
#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <conio.h>
using namespace std;

//Class definition
class Engine
{
private:
	//Attributes
	short numCylinders;
	short horsePower;

public:
	//Behaviors
	string toString();

	//Constructors & Destructor
	Engine(void);
	Engine(short theNumCylinders, short theHorsepower);
	~Engine(void);

	//Getters & Setters
	short getCylinders(void);
	short getHorsepower(void);
	void setCylinders(short theNumCylinders);
	void setHorsepower(short theHorsepower);
};

