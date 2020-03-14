//Ben Germany
//2/17/2020
//Hotel.cpp -- brief statement as to the file’s purpose -- See assignment below.
/*	Assignment Description
	The cost of renting a room at a hotel is, say $100.00 per night. For special occasions,
	such as a wedding or conference, the hotel offers a special discount as follows: If
	the number of rooms booked is at least 10, the discount is 10%; at least 20, the discount
	is 20%; and at least 30, the discount is 30%. Also if rooms are booked for at least three
	days, then there is an additional 5% discount.

	Write a program that
		- prompts the user to enter the cost of renting one room,
		- the number of rooms booked,
		- the number of days the rooms are booked,
		- and the sales tax (as a percent).

	The program outputs
		- the cost of renting one room,
		- the discount on each room as a percent,
		- the number of rooms booked,
		- the number of days the rooms are booked,
		- the total cost of the rooms,
		- the sales tax,
		- and the total billing amount.

	Your program must use appropriate named constants to store special values such as various discounts.
*/

//Include statements
#include <iostream>
#include <string>

using namespace std;

//Global declarations: Constants and type definitions only -- no variables

//Function prototypes

int main()
{
	//In cout statement below substitute your name and lab number
	cout << "Ben Germany -- Lab 4" << endl << endl;

	//Variable declarations
	double roomRate,taxRate, discountRate, salesTax, totalRoomCost;
	int roomsBooked, days;

	//Program logic
	/*
		Prompt the user to enter the cost of renting one room,
		-the number of rooms booked,
		-the number of days the rooms are booked,
		-and the sales tax(as a percent).
	*/
	cout << "Enter rate of one room: ";
	cin >> roomRate;
	cout << "Enter number of rooms: ";
	cin >> roomsBooked;
	cout << "Number of days booked: ";
	cin >> days;
	cout << "Enter Tax Rate: ";
	cin >> taxRate;



	// Complete the appropriate calculations
	//   Calculate the discount rate
	if (roomsBooked < 10)
		discountRate = 0.0;
	else if (roomsBooked < 20)
		discountRate = 0.1;		//10% discount
	else if (roomsBooked < 30)
		discountRate = 0.2;		//20% discount
	else
		discountRate = 0.3;		//30% discount

	// Calculate totalRoomCost and salesTax
	totalRoomCost = ((roomRate*roomsBooked)*discountRate)*days;
	salesTax = (totalRoomCost * taxRate);
	/*
		Output
		- the cost of renting one room,
		- the discount on each room as a percent,
		- the number of rooms booked,
		- the number of days the rooms are booked,
		- the total cost of the rooms,
		- the sales tax,
		- and the total billing amount.
		Your output should look nice and neat
	*/

	cout << "\n------OUTPUT------\n";

	cout << "cost of renting one room: " << roomRate << endl;
	cout << "your discount rate " << discountRate << endl;
	cout << "number of rooms booked " << roomsBooked << endl;
	cout << "number of days booked " << days << endl;
	cout << "total cost of the rooms " << totalRoomCost << endl;
	cout << "sales tax " << salesTax << endl;
	cout << "total ammount " << totalRoomCost << endl;



	//Closing program statements
	system("pause");
	return 0;
}

//Function Definitions
