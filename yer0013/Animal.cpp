#include "Animal.h"

Animal::Animal(string name, int age, int w, string origins, bool sex, bool meat) // info animal
{
	this->name = name;
	this->age = age;
	this->carnivores = meat;
	this->origins = origins;
	this->weight = w;
	this->sex = sex;
}

void Animal::ShowInfo() // showinfo animal
{
	if (this->sex)
	{
		if (this->carnivores)
		{
			cout << this->name << " is " << this->age << "y.o male, " << this->weight << "kg heavy meat eating animal originating from " << this->origins << endl;
		}
		else
		{
			cout << this->name << " is " << this->age << "y.o male, " << this->weight << "kg heavy fruits eating animal originating from " << this->origins << endl;
		}
	}
	else // if female
	{
		if (this->carnivores)
		{
			cout << this->name << " is " << this->age << "y.o female, " << this->weight << "kg heavy meat eating animal originating from " << this->origins << endl;
		}
		else
		{
			cout << this->name << " is " << this->age << "y.o female, " << this->weight << "kg heavy fruits eating animal originating from " << this->origins << endl;
		}
	}

}

void Animal::ShowJustName() // pouze jmeno
{
	cout << this->name << endl;
}
string Animal::GetName() 
{
	return this->name;
}
	





