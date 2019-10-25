#include "Student.h"


Student::Student(string name, int age, int id) : Person(name, age), student_num(id)
{
}

int Student::getId()
{
	return student_num;
}


void Student::courseList() //Displays the list of courses for a student
{
	cout << name << " is in the following courses:" << endl;
	for (int i = 0; i < courses.size(); i++)
		cout << courses[i].name << endl;
	cout << endl;
}

void Student::addCourse(Course course)
{
	courses.push_back(course);
}


void Student::deleteCourse(Course course) //Removes a course from a students schedule
{
	for (int i = 0; i < courses.size(); i++)
	{
		if (courses[i].name == course.name)
		{
			courses.erase(courses.begin() + i);
		}
	}
}

Student::~Student()
{
}

bool operator ==(const Student& first, const Student& second) //Creates an overloaded operator which is used to compare the schedules of 2 students
{
	if (first.courses.size() != second.courses.size())
		return false;

	bool equal = true;

	for (int i = 0; i < first.courses.size(); i++)
	{
		if (first.courses[i].name != second.courses[i].name)
		{
			equal = false;
		}
	}
	
	return equal;
}
