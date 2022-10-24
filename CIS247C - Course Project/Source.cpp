/*
Robert Mines
10/29/2020
CIS247C Course Project
*/

//Libraries
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

//Prototypes
void saveToFile(string* ptrName);

//Main function
int main()
{
	//Creating variables & pointers
	string name = "Robert Mines";
	string* ptrName = &name;

	//Checking the size of each
	cout << "Size of string variable: " << sizeof(name) << endl;
	cout << "Size of pointer variable: " << sizeof(ptrName) << endl;

	//Calling of the save method
	saveToFile(ptrName);

	//Program pause
	cout << endl;
	system("pause");

	return 0;
}

//The save method
void saveToFile(string* ptrName)
{
	//Open pipe to the file
	ofstream outToFile("data.txt");

	//Write to file if opened
	if (outToFile.is_open())
	{
		outToFile << *ptrName << endl;

		//Close the pipe
		outToFile.close();

		//Confirm that data saved
		cout << "\nData was written to file!" << endl;
	}
}