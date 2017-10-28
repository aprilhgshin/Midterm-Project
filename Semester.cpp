#include <iostream>
#include <iomanip>
#include "Semester.h"
using namespace std;

Semester::Semester(string name, Date start, Date end) :startDate(start), endDate(end)
{
	setSemesterName(name);
}

ostream& operator<<(ostream& output, const Semester& info)
{
	cout << "Semester: " << info.semesterName << " " << info.startDate.getYear() <<  " (" << info.startDate << "-" << info.endDate << ")" << endl;
	return output;
}

istream& operator>>(istream& input, Semester& info)
{
	input >> setw(4) >> info.semesterName;
	input.ignore();
	input >> setw(10) >> info.startDate;
	input.ignore();
	input >> setw(10) >> info.endDate;
	return input;
}

void Semester::setSemesterName(string name)
{
	semesterName = name;
}

string Semester::getSemesterName() const
{
	return semesterName;
}