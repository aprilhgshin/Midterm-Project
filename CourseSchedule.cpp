//Jonah Moon and April Shin
//CSIS 137 Wed Night Class
//Midterm Project
//Step 5

#include "CourseSchedule.h"
#include <iostream>
using namespace std;


CourseSchedule::CourseSchedule(string name, Semester s, int maxNum) : info(s)
{
	setStudentName(name);
	s.setSemesterName = " ";
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


bool CourseSchedule::checkDates(Semester s, Date start, Date end)
{

}

ostream& operator<<(ostream& output, const CourseSchedule& info)
{

}

CourseSchedule::~CourseSchedule()
{
	delete[] array;
}