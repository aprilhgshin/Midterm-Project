#pragma once
#define DATE_H

#include <iostream>
using namespace std;

class Date
{
	//overloaded << function, must be global
	friend ostream& operator<<(ostream&, const Date&);
	friend istream& operator>>(istream&, Date&);

private:
	int month;
	int day;
	int year;

	static const int days[];  //static array member to hold # of days in each month

	void helpIncrement();  //private utility function for incrementing the date

public:
	Date(int m = 1, int d = 1, int y = 1900);  //default constructor
	void setDate(int, int, int);  //set month, day and year

	Date& operator++();  //overloaded PREFIX increment operator
	Date operator++(int);  //overloaded POSTFIX increment operator
	const Date& operator+=(int);  //to increment date by multiple days
	static bool leapYear(int);  //to determine if date is a leap year - static
	bool endOfMonth(int)const;  //is date the end of the month (need to know for incrementing)
	bool operator==(const Date&) const;
	bool operator!=(const Date&) const;
	bool operator<(const Date&) const;
	bool operator>(const Date&) const;
	bool operator<=(const Date&) const;
	bool operator>=(const Date&) const;
};
