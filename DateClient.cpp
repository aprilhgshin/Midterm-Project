//Jonah Moon and April Shin
//CSIS 137 Wed Night Class
//Midterm Project
//Step 2

#include <iostream>
#include "Date.h"
using namespace std;

int main()
{
	Date d1;  //uses default args of constructor
	Date d2(12, 27, 1992);
	Date d3(0, 99, 8045);  //invalid 

	cout << "d1 is " << d1 << endl;
	cout << "d2 is " << d2 << endl;
	cout << "d3 is " << d3 << endl;

	cout << "\n\nd2 + 7 is " << (d2 += 7);

	d3.setDate(2, 28, 1992);  //1992 was a leap year
	cout << "\n\nd3 is now " << d3 << endl;
	cout << "\n++d3 is " << ++d3 << endl;

	//test postfix op and see how it's different than the prefix
	Date d4(7, 13, 2002);

	//Testing PREFIX OPERATOR
	cout << "\nPREFIX OPERATOR ON d4" << endl;
	cout << "++d4 is " << ++d4 << endl;

	//Testing POSTFIX OPERATOR
	cout << "\nPOSTFIX OPERATOR ON d4" << endl;
	cout << "d4++ is " << d4++ << endl;
	cout << "d4 doesn't change until AFTER the postfix executes " << endl;
	cout << "d4 is now " << d4 << endl;

	cout << "Please enter a date in the following format: 01/16/2017" << endl;
	cin >> d1;
	cout << d1 << endl;

	system("PAUSE");
	return 0;
}