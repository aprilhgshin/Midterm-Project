#pragma once
//Jonah Moon and April Shin
//CSIS 137 Wed Night Class
//Midterm Project
//Step 5
#pragma once
#define COURSESCHEDULE_H
#include "Course.h"
#include "Semester.h"
#include <iostream>
using namespace std;

class CourseSchedule
{
	ostream& operator<<(ostream&, const CourseSchedule);
	private:
		Course *array;
		Semester info;
		string studentName;
		int maxSize;
		int numCourses;
		Course *sizePtr;

	public:
		CourseSchedule(string, Semester, int);
		~CourseSchedule();
		string getStudentName() const;
		int getNumCourses() const;
		void setStudentName(string);
		bool checkDates(Semester, Date, Date);


};