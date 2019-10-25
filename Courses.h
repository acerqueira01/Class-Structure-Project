#ifndef COURSES_H
#define COURSES_H


#include <iostream>
#include <string>
using namespace std;

class Course
{
public:
	Course(int num, string name, string description);
	int num;
	string name, description;
	~Course();
	
};

#endif // !COURSES_H