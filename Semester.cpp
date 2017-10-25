//Jonah Moon and April Shin
//CSIS 137 Wed Night Class
//Midterm Project
//Step 4

#include "Semester.h"
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

Semester::Semester(string name, Date start, Date end) 
	:semesterName(name), startDate(start), endDate(end)
{

}

ostream& operator<<(ostream& output, const Semester& info)
{
	cout << "Semester: " << info.semesterName << "(" << info.startDate << "-" << info.endDate << ")" << endl;
	return output;
}

istream& operator>>(istream& input, Semester& info)
{
	input >> setw(8) >> info.semesterName;
	input.ignore();
	input >> setw(10) >> info.startDate;
	input.ignore();
	input >> setw(10) >> info.endDate;
	return input;
}