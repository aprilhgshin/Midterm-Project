//Jonah Moon and April Shin
//CSIS 137 Wed Night Class
//Midterm Project
//Step 5

#include "CourseSchedule.h"
#include <iostream>
#include <iomanip>
using namespace std;


CourseSchedule::CourseSchedule(string name, Semester s, int maxNum) : semInfo(s)
{
	setStudentName(name);
	maxSize = maxNum;
	setNumCourses(0);
	array = new Course[maxSize];
}

void CourseSchedule::setStudentName(string name)
{
	studentName = name;
}

void CourseSchedule::setNumCourses(int num)
{
	numCourses = num;
}

string CourseSchedule::getStudentName() const
{
	return studentName;
}

int CourseSchedule::getNumCourses() const
{
	return numCourses;
}

Semester& CourseSchedule::getSemesterName() const
{
	Semester* ptr = new Semester(semInfo);
	return *ptr;
}
bool CourseSchedule::checkDates(Semester s, Date start, Date end)
{
	if (s.getStartDate() <=  //stuck here
	{
		return true;
	}
	else
	{
		return false;
	}

}

void CourseSchedule::AddCourse(Course c)
{
	if (checkDates == true) // will change once I figure out checkDates
	{
		array[numCourses + 1] = c;
	}
	else
	{
	}

}

ostream& operator<<(ostream& output, const CourseSchedule& info)
{
	cout << "CLASS SCHEDULE"
		<< "------------------------------"
		<< "Name: " << info.getStudentName() << endl
		<< "Semester: ";
	output << info.semInfo;
	cout << "\nNumber of Classes: " <<info.getNumCourses() << endl
		<< "------------------------------" << endl;

	for (int counter = 0; counter < info.getNumCourses(); ++counter)
	{
		output << info.array[counter] << endl;
	}
}

CourseSchedule::~CourseSchedule()
{
	delete[] array;
}