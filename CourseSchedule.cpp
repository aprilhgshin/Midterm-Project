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

Semester& CourseSchedule::getSemester() const
{
	Semester* ptr = new Semester(semInfo);
	return *ptr;
}

bool CourseSchedule::checkDates(Semester& s, Date& start, Date& end) const
{
	if (start.getYear() >= s.getStartDate().getYear() && end.getYear() <= s.getEndDate().getYear())
	{
		if (start.getMonth() >= s.getStartDate().getMonth() && end.getMonth() <= s.getEndDate().getMonth())
		{
			if (start.getDay() >= s.getStartDate().getDay() && end.getDay() <= s.getEndDate().getDay())
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else 
		{
			return false;
		}
	}
	else
	{
		return false;
	}

}



void CourseSchedule::AddCourse(Course c)
{
	Date s;
	if (checkDates(this->getSemester(), s, s) == true)
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

	return output;
}

void CourseSchedule::RemoveCourse(Course c)
{

}


CourseSchedule::~CourseSchedule()
{
	delete[] array;
}