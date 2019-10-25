#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	Person(string name, int age);
	string name;
	int age;
	virtual void printname() { cout << "This is " << name << endl; };
	int getAge();
	string getName();
	~Person();
	
};

#endif