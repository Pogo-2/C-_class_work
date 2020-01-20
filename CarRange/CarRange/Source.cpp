//Ben Germany
//car_range.cpp -- Write a program that prompts the capacity, in gallons, of an automobile fuel tank 
//	and the miles per gallon the automobile can be driven. The program outputs the number of miles 
//	the automobile can be driven without refueling.
//CSIS 111


//Include statements
#include <iostream>
#include <string>

using namespace std;

//Global declarations: Constants and type definitions only -- no variables

//Function prototypes

int main()
{
	//In cout statement below substitute your name and lab number
	cout << "<Ben Germany -- Lab 2>" << endl << endl;

	//Variable declarations
	int tankCapacity;
	int milesPerGallon;
	int range;

	//Program logic
	//	Prompt user for tank capacity and miles per gallon
		cout << "What is your gas tanks size?(gal)\n>";
		cin >> tankCapacity;
		cout << "What is your cars MPG?\n>";
		cin >> milesPerGallon;

	//	Calculate the car's range and assign it to the variable range
		range = tankCapacity / milesPerGallon;
	//	Output the cars range as well as what the user ented.
		cout << "your cars range is ";
		cout << range;
		cout << "\n";
		system("pause");
	//Closing program statements
	return 0;
}

//Function Definitions
