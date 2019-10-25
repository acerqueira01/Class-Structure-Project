#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <vector>
#include "Person.h"
#include "Courses.h"


class Student : public Person
{
public:
	Student(string name, int age, int id);
	int student_num;
	vector<Course> courses;
	virtual void printname() { cout << "This is student " << name << endl; };
	int getId();
	friend bool operator ==(const Student& first, const Student& second);
	void courseList();
	void addCourse(Course course);
	void deleteCourse(Course course);
	~Student();
};





#endif // !STUDENT_H
