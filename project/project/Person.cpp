#include "Person.h"
// pretizene konstruktory
Person::Person() 
{
	this->name = "Example";
	this->age = 45;
	this->height = 180;
	this->sex = true;
}
Person::Person(string name)
{
	this->name = name;
}
Person::Person(string name, int age)
{
	this->name = name;
	this->age = age;
}
Person::Person(string name, int age, int height, bool sex)
{
	this->age = age;
	this->name = name;
	this->height = height;
	this->sex = sex;
}

string Person::GetName()
{
	return string(this->name);
}

void Person::ShowInfo() //ukazujeme info o person
{
	if (this->sex)
	{
		cout << "Hello, my name is " << this->name << " and I am " << this->age << "y.o male with " << this->height << "cm height" << endl;
	}
	else
	{
		cout << "Hello, my name is " << this->name << " and I am " << this->age << "y.o female with " << this->height << "cm height" << endl;
	}
}









