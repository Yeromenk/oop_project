#include "Visitor.h"

Visitor::Visitor() :Person()
{
	this->TicketID = 69;
}

Visitor::Visitor(string name, int age, int height, bool sex) : Person(name, age, height, sex)
{
	srand(time(NULL)); // random

	this->TicketID = rand() % 100 + 1;

}

void Visitor::ShowTicket() // ukazujeme ticket
{
	cout << "Ticket number: " << this->TicketID << endl;
}

void Visitor::ShowInfo() // ukazujeme info o visitor
{
	if (this->sex)
	{
		cout << "Hello, my name is " << this->name << " and I am " << this->age << " y.o male with " << this->height << "cm height"  << endl;
	}
	else
	{
		cout << "Hello, my name is " << this->name << " and I am " << this->age << " y.o female with " << this->height << "cm height"  << endl;
	}
}

