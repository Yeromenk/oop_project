#include "Enclosure.h"

Enclosure::Enclosure(Caretaker caretaker, int size)
{
	this->caretaker = caretaker;
	this->animals = new Animal * [size];
	this->maxAnimalsCount = size;
	this->AnimalsCount = 0;
}

Enclosure::~Enclosure()
{
	for (int i = 0; i < this->AnimalsCount; i++) 
	{
		delete this->animals[i];
	}
	delete[] animals;
}

void Enclosure::ShowAnimalsInEnclosure()
{
	for (int i = 0; i < AnimalsCount; i++)
	{
		this->animals[i]->ShowJustName();
	}

}

void Enclosure::AddAnimal(Animal* animal) //add animal
{
	if (this->AnimalsCount < this->maxAnimalsCount)
	{
		this->animals[this->AnimalsCount] = animal;
		this->AnimalsCount++;
	}
	else
	{
		cout << "maxed out" << endl; 
	}

}
void Enclosure::RemoveAnimal(Animal* animal)  //remove animal
{
	for (int i = 0; i < this->AnimalsCount;i++) 
	{
		if (this->animals[i]->GetName() == animal->GetName())
		{
			--this->AnimalsCount;
			for (int o = i; i < this->AnimalsCount; o++) 
			{
				Animal* newAn = this->animals[o + 1];
				this->animals[o] = newAn;
			}
		}
	}
}
void Enclosure::ShowCaretakerOfEnclosure()
{
	cout << this->caretaker.GetName() << endl;
}

