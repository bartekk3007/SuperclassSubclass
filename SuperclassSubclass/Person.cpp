#ifndef PENTAGON_H
#define PENTAGON_H
#include <iostream>
#include <string>

class Person
{
public:
	int age;
	std::string name;
	Person(int age, std::string name) : age(age), name(name)
	{

	}
	void sayAge()
	{
		std::cout << "I am " << age << " years old\n";
	}
	virtual void introduce()
	{
		std::cout << "I am a person\n";
	}
};

#endif