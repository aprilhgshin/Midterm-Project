# Midterm-Project

## Status: updated 10/29/17 1:19PM
### Step 2: Complete, needs to be retested, UML created
### Step 4: Complete, needs to be retested, UML created
### Step 5: Almost complete, remove function needs to be tested, UML needs to be editted
###         I changed AddCourse to:
``` C++
void CourseSchedule::AddCourse(Course c)
{
	// semInfo is my Semester instance from CourseSchedule.h
	if (checkDates(this->getSemester(), semInfo.getStartDate(), semInfo.getEndDate()) == true)
	{			
		array[numCourses + 1] = c;
	}		
	else
	{		
	}
}
```
