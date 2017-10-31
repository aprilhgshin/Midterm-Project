//Jonah Moon and April Shin
//CSIS 137 Wed Night Class
//Midterm Project

#include <iostream>
#include <iomanip>
#include <string>
#include "Course.h"
#include "Date.h"
using namespace std;

ostream& operator<<(ostream& output, const Course& arg)
{
	output << "Course Info:     " << arg.courseNum << "--" << arg.courseName << endl
		<< "# of Units:  " << arg.units << endl << "Course Dates:      " << arg.startDate << " - "
		<< arg.endDate << endl << "Meeting Days: " << arg.meetDays << endl << "Meeting Time:    "
		<< arg.startTime << " - " << arg.endTime << endl << "Daily Duration:   "
		<< arg.endTime - arg.startTime << " hours" << endl;
	return output;
}
Course::Course(string cNum, string cName, string meetD, double numUnits, Date startD, Date endD, Time startT, Time endT)
	:courseNum(cNum), courseName(cName), meetDays(meetD), units(numUnits), startDate(startD), endDate(endD), startTime(startT),
	endTime(endT)
{

}
string Course::getCourseNum() const
{
	return courseNum;
}
string Course::getCourseName()const
{
	return courseName;
}
string Course::getMeetDays()const
{
	return meetDays;
}
double Course::getUnits()const
{
	return units;
}
Date Course::getStartDate()const
{
	return startDate;
}
Date Course::getEndDate()const
{
	return endDate;
}
Time Course::getStartTime()const
{
	return startTime;
}
Time Course::getEndTime()const
{
	return endTime;
}
Course& Course::setCourseNum(string cNum)
{
	courseNum = cNum;
	return *this;
}
Course& Course::setCourseName(string cName)
{
	courseName = cName;
	return *this;
}
Course& Course::setMeetDays(string mDays)
{
	meetDays = mDays;
	return *this;
}
Course& Course::setUnits(double amt)
{
	units = amt;
	return *this;
}

void Course::setStartDate(Date sDate)
{
	startDate = sDate;
}
void Course::setEndDate(Date eDate)
{
	endDate = eDate;
}

void Course::setStartTime(Time sTime)
{
	startTime = sTime;
}
void Course::setEndTime(Time eTime)
{
	endTime = eTime;

}
double Course::calcDailyDuration() const
{
	return endTime - startTime;
}
Course::~Course()
{
	cout << courseName << " has been deleted." << endl;
}