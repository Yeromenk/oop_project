#include "Caretaker.h"

int Caretaker::caretakers = 0;
Caretaker::Caretaker(string name, int age, int height, bool sex, int id, int salary) :Person(name, age, height, sex)
{
	this->ID = id;
	this->salary = salary;
	this->caretakers++;
}
Caretaker::Caretaker() 
{
	this->ID = 0;
	this->salary = 0;
	this->caretakers++;
}
Caretaker::~Caretaker() // static
{
	this->caretakers--;
}
void Caretaker::ShowID()  // ukazuje id caretaker
{
	cout << "ID: " << this->ID << endl;
}

void Caretaker::ShowSalary() // salary caretaker
{
	cout << "Salary: " << this->salary << endl;
}


