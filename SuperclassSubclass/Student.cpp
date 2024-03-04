#include <iostream>
#include <string>
#ifndef PERSON_H
#define PERSON_H
#include "Person.cpp"
#endif

class Student : public Person
{
	public:
	std::string major;
	Student(int age, std::string name, std::string major) : Person(age, name), major(major)
	{

	}
	void introduce() override
	{
		std::cout << "I am a student\n";
	}
	void sayMajor()
	{
		std::cout << "I am " << major << " major\n";
	}
};