//Jonah Moon and April Shin
//CSIS 137 Wed Night Class
//Midterm Project

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
		Date d;
		string studentName;
		int maxSize;
		int numCourses;
		bool checkDates(const Semester&, const Date&, const Date&)const;

		
	public:
		CourseSchedule(string, Semester, int); 
		void setStudentName(string);
		void setNumCourses(int);
		string getStudentName() const;
		int getNumCourses() const;
		Semester& getSemester() const;
		void AddCourse(Course&);
		void RemoveCourse(const CourseSchedule&);
		~CourseSchedule();
};