#pragma once
//Jonah Moon and April Shin
//CSIS 137 Wed Night Class
//Midterm Project
//Step 5
#pragma once
#define COURSESCHEDULE_H
#include "Course.h"
#include "Semester.h"
#include "Date.h"
#include "Time.h"
#include <iostream>
using namespace std;

class CourseSchedule
{
	friend ostream& operator<<(ostream&, const CourseSchedule&);

	private:
		Course *array;
		Semester semInfo;  
		string studentName;
		int maxSize;
		int numCourses;
		bool checkDates(Semester&, Date&, Date&) const;

		
	public:
		CourseSchedule(string, Semester, int); 
		void setStudentName(string);
		void setNumCourses(int);
		string getStudentName() const;
		int getNumCourses() const;
		Semester& getSemester() const;
		void AddCourse(Course);
		void RemoveCourse(Course);
		~CourseSchedule();
};