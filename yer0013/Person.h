#pragma once
#include "LivingBeing.h"
//Trida Person reprezentujici osoby ve svete se zakladnimi informacemi, vytvorena jako rodic pro ostratni potomky a pro doplneni poctu potrebnych trid
class Person : public LivingBeing 
{
protected: // protectred atribute 
	string name;
	int age;
	int height; //cm
	bool sex; //true male, false others

public:
	Person();
	// pretizene konstruktory
	Person(string name);
	Person(string name, int age);
	Person(string name, int age, int height, bool sex);
	string GetName();
	void ShowInfo(); // zmena chovani prekrytem
};

