#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Teacher.h"
#include "Courses.h"
using namespace std;

int main()
{
	//This test driver program must complete 7 tasks. The tasks are mentioned as completed.
	
	// 1. Initialize five courses objects and three person objects using constructors.
	
	//The structure of the "Course" object is object_name(class_number, class_name, class_description)
	Course cyber(200, "Cybersecurity", "Learning the methods of cybersecurity.");
	Course machineLearning(201, "Machine Learning", "Learning the methods of Machine Learning.");
	Course vision(202, "Bio-inspired Vision Systems", "Learning the fundamentals of bio-inspired vision systems.");
	Course stats(203, "Statistics", "Learning statistical methods.");
	Course capstone(204, "Capstone", "Senior design.");

	//The structure of the "Person" object is object_name(person_name, person_age)
	Person tim("Tim", 18), john("John", 23), owen("Owen", 32);

	
	// 2. Initialize three student objects and three teacher objects using constructors.

	//The structure of the "Student" object is object_name(student_number, student_age, student_ID#)
	//The structure of the "Teacher" object is object_name(professor_number, professor_age, professor_salary)
	Student bob("Bob", 21, 2253), zoey("Zoe", 21, 8645), henry("Henry", 20, 5553);
	Teacher wang("Dr.Wang", 30 , 200000), giakos("Dr.Giakos", 50, 400000), wafa("Dr.Wafa", 28, 200000);


	// 3. Enter the courses that students are taking, and teachers are teaching now.

	bob.addCourse(cyber);
	bob.addCourse(capstone);
	zoey.addCourse(cyber);
	zoey.addCourse(capstone);
	henry.addCourse(vision);
	henry.addCourse(stats);
	henry.addCourse(machineLearning);

	wang.addCourse(cyber);
	wang.addCourse(capstone);
	giakos.addCourse(machineLearning);
	giakos.addCourse(vision);
	wafa.addCourse(stats);


	// 4. Student add courses and delete course.

	//This section of code will display the .deleteCourse member function
	henry.courseList();
	cout << "The program will now add Cybersecurity and remove Statistics." << endl << endl;
	henry.addCourse(cyber);
	henry.deleteCourse(stats);
	henry.courseList();


	/* 5. Compare if two students' list of course are equal. Test with overloaded operator "==".
	Not functional yet.
	*/
	
	//Utilizing an overloaded operator to compare objects
	if (bob == zoey)
		cout << "Bob and Zoey have the same schedule." << endl;
	else
		cout << "Bob and Zoey do not have the same schedule. " << endl;

	if (bob == henry)
		cout << "Bob and Henry have the same schedule." << endl;
	else
		cout << "Bob and Henry do not have the same schedule. " << endl;
	
	cout << endl; //Formatting


	// 6. Demonstrate run-time polymorphism through "printname" virtual functions.

	tim.printname();
	john.printname();
	owen.printname();
	bob.printname();
	zoey.printname();
	henry.printname();
	wang.printname();
	giakos.printname();
	wafa.printname();
	cout << endl;


	/* 7. Print out all information about the data structures that you created.
	They are: students' information, teachers information, the courses they are taking and teaching.
	*/
	
	cout << bob.getName() << " is " << bob.getAge() << " and their ID number is " << bob.getId() << endl;
	bob.courseList();

	cout << zoey.getName() << " is " << zoey.getAge() << " and their ID number is " << zoey.getId() << endl;
	zoey.courseList();

	cout << henry.getName() << " is " << henry.getAge() << " and their ID number is " << henry.getId() << endl;
	henry.courseList();

	cout << wang.getName() << " is " << wang.getAge() << " and their salary is " << wang.getSalary() << endl;
	wang.courseList();

	cout << giakos.getName() << " is " << giakos.getAge() << " and their salary is " << giakos.getSalary() << endl;
	giakos.courseList();

	cout << wafa.getName() << " is " << wafa.getAge() << " and their salary is " << wafa.getSalary() << endl;
	wafa.courseList();
	return 0;
}
