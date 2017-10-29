//Jonah Moon and April Shin
//CSIS 137 Wed Night Class
//Midterm Project
//Step 2, 4, 5

#include "Semester.h"
#include "CourseSchedule.h"
#include "Time.h"
#include "Date.h"
#include "Course.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string userName;
	Semester semName;
	int maxNum;
	char selection = 0;

	cout << "Welcome to Course Schedule program!" << endl << "Please enter your name, the semester, "
		<< "the start date,\nend date, and maximum number of classes you are taking. \nIn the following format "
		<< "John, Fall 09/15/1990-12/16/1990, 3. \nPress enter after every comma." << endl;
	cin >> userName >> semName >> maxNum;
	CourseSchedule sched(userName, semName, maxNum);

	// To get the needed values above, we should reuse code ... userName, semName, and maxNum have their own functions in different classes
	
	/*Semester userInput;
	cout << "Please enter the first four letters of the Semester term name and the starting and ending date of that semester in the following format: " << endl
		<< "Wint 12/11/2017-01/11/2017" << endl;
	cin >> userInput;*/

	

	while (selection != 'q')
	{
		cout << "COURSE ENTRY MENU FOR:   " << sched.getSemester() << endl
			<< "-----------------------------------------------" << endl
			<< "1) Enter a new course" << endl
			<< "2) Remove a course" << endl
			<< "3) Print semester schedule" << endl
			<< "q) Quit the program " << endl;
		cin >> selection;
		tolower(selection);
		if (selection == 1)
		{
			Time startT, endT;
			Date startD, endD;
			string cNum, cName, meetDays;
			double units;
			cout << "Please enter the course number, course name, meeting days, \nand number of "
				<< "units the course is worth. Press enter after each input." << endl;
			cin >> cNum >> cName >> meetDays >> units;
			cout << "Please enter the starting time of the class. " << endl;
			cin >> startT;
			cout << "Please enter the ending time of the class." << endl;
			cin >> endT;
			cout << "Please enter the starting date of the class." << endl;
			cin >> startD;
			cout << "Please enter the ending date of the class." << endl;
			cin >> endD;
			Course newCourse(cNum, cName, meetDays, units, startD, endD, startT, endT);
			// wait until add course is done thne add
			sched.AddCourse(newCourse);
		}
		else if (selection == 2)
		{

		}
		else if (selection == 3)
		{

		}
	}
	system("PAUSE");
	return 0;
}
