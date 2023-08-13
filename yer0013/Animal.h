#pragma once
#include "LivingBeing.h"

//Trida Animal reprezentujici ruzne vyskyty zvirat
class Animal : public LivingBeing // vicenasobna dedicnost 
{
private:
	string name;
	int age;
	int weight;
	string origins;
	bool sex; //true male
	bool carnivores; // true eating meat
	static int objectCount; // static

public:

	Animal(string name, int age, int w, string origins, bool sex, bool meat);
	string GetName();
	void ShowInfo();
	void ShowJustName();
	
};

