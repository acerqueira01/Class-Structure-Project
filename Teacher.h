#ifndef TEACHER_H
#define TEACHER_H

#include <string>
#include <vector>
#include "Person.h"
#include "Courses.h"
using namespace std;

class Teacher : public Person
{
public:
	Teacher(string name, int age, int salary);
	int teacherSalary;
	vector<Course> courses;
	virtual void printname() { cout << "This is teacher " << name << endl; };
	int getSalary();
	void courseList();
	void addCourse(Course course);
	void deleteCourse(Course course);
	~Teacher();
};

#endif // !TEACHER_H