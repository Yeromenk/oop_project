#include "Person.h"
#include "Visitor.h"
#include "Animal.h"
#include "Caretaker.h"
#include "Enclosure.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	Visitor visitor("Mykyta", 70, 160, true); // info o visitor
	visitor.ShowInfo();
	visitor.ShowTicket();

	Caretaker* Maks = new Caretaker("Maks Yeromenko	", 45, 180, true, 12, 37000); // info o caretaker
	Maks->ShowInfo();
	Maks->ShowID();
	Maks->ShowSalary();

	Animal lion("Lion", 35, 223, "Africa", true, true); // ukazujeme info o zviratech
	lion.ShowInfo();
	Animal zebra("Zebra", 40, 150, "Africa", false, false);
	zebra.ShowInfo();
	Animal tortoise("Tortoise", 150, 90, "Asia", true, false);
	tortoise.ShowInfo();
	
	vector<LivingBeing*> beings;

	beings.push_back(Maks);
	for (LivingBeing* i : beings) // ukazuje static 
	{
		i->ShowInfo();
		
	}
	delete Maks;
}

