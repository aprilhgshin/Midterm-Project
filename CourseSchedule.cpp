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

Semester CourseSchedule::getSemester() const
{
	return semInfo;
}

bool CourseSchedule::checkDates(Semester& s, Date& start, Date& end) const
{
		bool status;
		if (start.getYear() >= s.getStartDate().getYear())
		{
			if (start.getMonth() >= s.getStartDate().getMonth())
			{
				if (start.getDay() >= s.getStartDate().getDay())
				{
					status = true;
				}
			}
		}
		else
		{
			return false;
		}
		if (end.getYear() <= s.getEndDate().getYear())
		{
			if (end.getMonth() <= s.getEndDate().getMonth())
			{
				if (end.getDay() <= s.getEndDate().getDay())
				{
					status = true;
				}
			}
		}
		else
		{
			return false;
		}
		return status;
}



void CourseSchedule::AddCourse(Course c)
{
	array[numCourses + 1] = c;
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

void CourseSchedule::RemoveCourse(Course c)
{

}


CourseSchedule::~CourseSchedule()
{
	delete[] array;
}