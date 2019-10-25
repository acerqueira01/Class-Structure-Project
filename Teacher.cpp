#include "Teacher.h"

Teacher::Teacher(string name, int age, int salary) : Person(name, age), teacherSalary(salary)
{
}

int Teacher::getSalary()
{
	return teacherSalary;
}

void Teacher::courseList() //Displays the list of courses offered by a teacher
{
	cout << name << " is teaching the following courses:" << endl;
	for (int i = 0; i < courses.size(); i++)
		cout << courses[i].name << endl;
	cout << endl;
}

void Teacher::addCourse(Course course)
{
	courses.push_back(course);
}

void Teacher::deleteCourse(Course course) //Removes a course from a students schedule
{
	for (int i = 0; i < courses.size(); i++)
	{
		if (courses[i].name == course.name)
		{
			courses.erase(courses.begin() + i);
		}
	}
}

Teacher::~Teacher()
{
}
