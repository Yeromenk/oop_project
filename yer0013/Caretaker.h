#pragma once
#include "Person.h"
//Trida Caretaker reprezentujici osetrovatele v zoo, je potomkem tridy Person
class Caretaker : public Person // dedicnost , info caretaker
{
private:
	static int caretakers; // static
	int ID;
	int salary;
	string name;
	int age;
	int height;
	bool sex;

public:
	Caretaker();
	~Caretaker();
	Caretaker(string name, int age, int height, bool sex, int id, int salary);
	void ShowID();
	void ShowSalary();
	void ChangeSalary(int salary);
};

