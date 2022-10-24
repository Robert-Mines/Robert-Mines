/*
Robert Mines
11/06/2020
CIS247C Course Project
*/

//Libraries
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include "Vehicle.h"
#include "Car.h"
#include "suv.h"
#include "gasCar.h"
#include "electricCar.h"
using namespace std;

//Prototypes
void saveToFile(Vehicle* ptrVehicle);
string determineChildType(Vehicle* ptrVehicle);

//Main function
int main()
{
	//Creation of the vehicle poointer array to store our vehicle objects
	const int NUM_CARS = 4;
	Vehicle* vehicles[NUM_CARS];
		
	vehicles[0] = new Car("C2345678901234567", "Dodge", "Charger", 2015, 9000.0,
		4, false, Engine(8, 1200));
	vehicles[1] = new suv("S541h8467p1297634", "Ford", "Flex", 2015, 17000.0, 7, 25.5,
		Engine(6, 800));
	vehicles[2] = new gasCar("Gd00p1dd789h31574", "Honda", "Civic", 2012, 4000.0, 4,
		true, 14, 22, Engine(6, 1000));
	vehicles[3] = new electricCar("E541jh76435794138", "Tesla", "Model S", 2017, 25000.0, 4,
		false, 125, 400, 200, Engine(0, 400));
	
	//Checking the size of each(Notice pointer is much smaller in size)
	cout << "Size of Car object (dereferenced): " << sizeof(*vehicles[0]) << endl;// Car
	cout << "Size of pointer to Car object: " << sizeof(vehicles[0]) << endl;
	cout << endl; //Blank line for presentation 

	cout << "Size of SUV Car object (dereferenced): " << sizeof(*vehicles[1]) << endl;// SUV
	cout << "Size of pointer to SUV Car object: " << sizeof(vehicles[1]) << endl;
	cout << endl; //Blank line for presentation

	cout << "Size of Gas Car object (dereferenced): " << sizeof(*vehicles[2]) << endl;// Gas Car
	cout << "Size of pointer to Gas Car object: " << sizeof(vehicles[3]) << endl;
	cout << endl; //Blank line for presentation

	cout << "Size of Electric Car object (dereferenced): " << sizeof(*vehicles[3]) << endl;// Electric Car
	cout << "Size of pointer to Electric Car object: " << sizeof(vehicles[3]) << endl;
	cout << endl; //Blank line for presentation
	cout << "Press ENTER to continue..." << endl;
	_getch();
	
	//Delete data.txt file if it exists
	remove("data.txt");
				  
	//Improved calling of the save method
	for (int i=0; i < NUM_CARS; i++)
	{
		saveToFile(vehicles[i]);
	}
	
	//Cleaning the heap memory
	for (int i = 0; i < NUM_CARS; i++)
	{
		delete vehicles[i];
	}

	//Program pause
	cout << endl;
	system("pause");

	return 0;
}

//The save method
void saveToFile(Vehicle* ptrVehicle)// Vehicle
{
	//Open pipe to the file
	ofstream outToFile("data.txt");

	//Determine the child type
	string childType = determineChildType(ptrVehicle);

	//Write to file if opened
	if (outToFile.is_open())
	{
		//Writing member Attributes to file via use of dereferenced pointer and arrow
		outToFile << ptrVehicle->getVin() << ","
			<< ptrVehicle->getMake() << ","
			<< ptrVehicle->getModel() << ","
			<< ptrVehicle->getYear() << ","
			<< ptrVehicle->getPrice() << ","
			<< ptrVehicle->getMotor().getCylinders() << ","
			<< ptrVehicle->getMotor().getHorsepower() << endl;
		
		//Incorporating the Child classes
		if (childType == "SUV")
		{
			suv* s1 = dynamic_cast<suv*>(ptrVehicle);
			outToFile << ',' << s1->getNumSeats() << ','
				<< s1->getCargoSize();
		}
		if (childType == "Car")
		{
			Car* c1 = dynamic_cast<Car*>(ptrVehicle);
			outToFile << ',' << c1->getNumDoors() << ',' <<
				c1->getHatchback();
		}
		if (childType == "electricCar")
		{
			electricCar* e1 = dynamic_cast<electricCar*>(ptrVehicle);
			outToFile << ',' << e1->getBatterySize() << ',' <<
				e1->getRange() << ',' << e1->getMPGe();
		}
		if (childType == "gasCar")
		{
			gasCar* g1 = dynamic_cast<gasCar*>(ptrVehicle);
			outToFile << ',' << g1->getTankSize() << ',' << g1->getMPG();
		}
		outToFile << endl;

		//Close the pipe
		outToFile.close();

		//Confirm that data saved
		cout << ptrVehicle->getMake() << " " << ptrVehicle->getModel() << " " << ptrVehicle->getMotor().getCylinders()
			<< " cylinder.\n Was written to file!" << endl;


	}
}

//Determine child type method
string determineChildType(Vehicle* ptrVehicle)
{
	electricCar* e1 = dynamic_cast<electricCar*>(ptrVehicle);
	if (e1 != nullptr)
		return "electricCar";

	gasCar* g1 = dynamic_cast<gasCar*>(ptrVehicle);
	if (g1 != nullptr)
		return "gasCar";

	Car* c1 = dynamic_cast<Car*>(ptrVehicle);
	if (c1 != nullptr)
		return "Car";

	suv* s1 = dynamic_cast<suv*>(ptrVehicle);
	if (s1 != nullptr)
		return "SUV";

	return "Error";
};



