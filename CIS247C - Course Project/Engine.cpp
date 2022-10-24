/*
Robert Mines
11/06/2020
CIS247C Course Project
*/
#include "Engine.h"

//Constructors & Destructor
Engine::Engine(void)
{
	numCylinders = 0;
	horsePower = 0;
}

Engine::Engine(short theNumCylinders, short theHorsepower)
{
	setCylinders(theNumCylinders);
	setHorsepower(theHorsepower);
}

Engine::~Engine(void)
{
}

//Behaviors
string Engine::toString(void)
{
	return "numCylinders: " + to_string(numCylinders) + ", horsePower: " + to_string(horsePower);
}


//Getters
short Engine::getCylinders(void)
{
	return numCylinders;
}
short Engine::getHorsepower(void)
{
	return horsePower;
}

//Setters
void Engine::setCylinders(short numCylinders)
{
	if (numCylinders > 0 && numCylinders < 13)
		this->numCylinders = numCylinders;
	else
		this->numCylinders = 0;
}
void Engine::setHorsepower(short horsePower)
{
	if (horsePower > 0 && horsePower < 1000)
		this->horsePower = horsePower;
	else
		this->horsePower = 0;
}