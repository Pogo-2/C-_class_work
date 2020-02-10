/*
Ben Germany
2/10/2020
Interest.cpp -- See assignment instructions below for the purpose of this assignment.

Interest on a credit cardā€™s unpaid balance is calculated using the average daily balance.
Suppose that netBalance is the balance shown in the bill, payment is the payment made,
d1 is the number of days in the billing cycle, and d2 is the number of days payment is
made before billing cycle. Then, the average daily balance is:

	averageDailyBalance = (netBalance * d1 - payment * d2) / d1;

If the interest rate per month is, say, 0.0152, then the interest on the unpaid balance is:

	interest = averageDailyBalance * 0.0152;

Write a program that accepts as input netBalance, payment, d1, d2, and interest rate per month.

The program outputs the interest.

Format your output to two decimal places.

*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//declaring functions
double get_doub();
int get_in();

int main()
{
	cout << "Ben Germany -- Lab 4" << endl << endl;
	//Variables
	double netBalance, payment, interestRatePerMonth, averageDailyBalance, interest;
	int d1, d2;

	//Get user input for netBalance, payment, d1, d2, and interest rate per month.
	cout << "Net ballance: \n";
	netBalance = get_doub();

	cout << "payment: \n";
	payment = get_doub();

	cout << "interestRatePerMonth: \n";
	interestRatePerMonth = get_doub();

	cout << "d1: \n";
	d1 = get_in();

	cout << "d2: \n";
	d2 = get_in();

	//Calculate averageDailyBalance using the formula in the heading above

	averageDailyBalance = (netBalance * d1 - payment * d2) / d1;

	//Calculate interest using the formula in the heading above

	interest = averageDailyBalance * 0.0152;

	//Output the interest formatted to two decimal places
	//	Formatting cout
	//	cout "The interest is $##.##" replacing ##.## with the actual interest calculated
	cout << "The interest is " << setprecision(4) << interest << endl << endl
		;


	//Close the program
	return 0;
}

double get_doub() {
	double val;
	cin >> val;
	return val;
}

int get_in() {
	double val;
	cin >> val;
	return val;
}