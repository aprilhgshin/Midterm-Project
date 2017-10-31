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

bool CourseSchedule::checkDates(Semester s, Date start, Date end) const
{
	bool status;
	// To check for course starting date:
	if (start.getYear() >= s.getStartDate().getYear() && start.getYear() <= s.getEndDate().getYear())
	{
		if (start.getMonth() > s.getStartDate().getMonth() && start.getMonth() < s.getEndDate().getMonth())
		{
			return status = true;
		}
		else if (start.getMonth() == s.getEndDate().getMonth())
		{
			if (start.getDay() <= s.getEndDate().getDay())
			{
				status = true;
			}
			else
			{
				status = false;
			}
		}
		else if (start.getMonth() == s.getStartDate().getMonth())
		{
			if (start.getDay() >= s.getStartDate().getDay())
			{
				status = true;
			}
			else
			{
				cout << "Invalid course dates; therefore, course cannot be added to the schedule." << endl;
				status = false;
			}
		}
		else
		{
			cout << "Invalid course dates; therefore, course cannot be added to the schedule." << endl;
			status = false;
		}
	}
	else
	{
		cout << "Invalid course dates; therefore, course cannot be added to the schedule." << endl;
		status = false;
	}

	// To check for course ending date:
	if (end.getYear() <= s.getEndDate().getYear() && end.getYear() >= start.getYear())
	{
		if (end.getMonth() < s.getEndDate().getMonth() && end.getMonth() >= start.getMonth())
		{
			status = true;
		}
		else if (end.getMonth() == s.getEndDate().getMonth() /*&& end.getMonth() >= start.getMonth()*/)
		{
			if (end.getDay() <= s.getEndDate().getDay()/* && end.getDay() >= start.getDay()*/)
			{
				status = true;
			}
			else
			{
				cout << "Invalid course dates; therefore, course cannot be added to the schedule." << endl;
				status = false;
			}
		}
		else
		{
			cout << "Invalid course dates; therefore, course cannot be added to the schedule." << endl;
			status = false;
		}
	}
	else
	{
		cout << "Invalid course dates; therefore, course cannot be added to the schedule." << endl;
		status = false;
	}

	//returning status after all of the if else statements to return final value of variable status 
	return status;
}


void CourseSchedule::AddCourse(Course& c, Semester s, Date start, Date end)
{

		if (checkDates(s,start,end) == true && numCourses < maxSize)
		{
			array[numCourses] = c;
			numCourses += 1;
		}
		else if (checkDates(s,start,end) == false)
		{
		}
		else
		{
		}
}


void CourseSchedule::RemoveCourse(const CourseSchedule& sc) 
{
		int num;

		if (numCourses > 0)
		{
			cout << sc;
			cout << "Please select the course # you would like to remove: " << endl;
			cin >> num;
			Course empty("", array[num - 1].getCourseName());
			array[num - 1] = empty;
			numCourses -= 1;
			for (int i = num - 1; i < numCourses; i++)
			{
				array[i] = array[i + 1];
			}
		}
		else
		{
			cout << "You have no courses to remove!\n";
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

CourseSchedule::~CourseSchedule()
{
	delete[] array;
}