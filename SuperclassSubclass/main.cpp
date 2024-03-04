#include <iostream>
#include "Student.cpp"
#include "Person.cpp"


int main()
{
	Student s1(20, "John", "Physics");
	Person* p1 = &s1;

	//Person p2(25, "Stephen");
	//Student* s2 = &p2;

	p1->introduce();

	return 0;
}