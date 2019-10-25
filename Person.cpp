#include "Person.h"
#include <iostream>
using namespace std;

Person::Person(string name, int age) : age(age), name(name)
{
}

int Person::getAge()
{
	return age;
}

string Person::getName()
{
	return name;
}

Person::~Person()
{
	
}
