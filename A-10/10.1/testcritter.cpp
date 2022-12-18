/*
CH-230-A
a10 p1.[cpp]
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "Critter.h"



int main(int argc, char** argv)
{
	Critter c;

	std:: string name;
	int hunger;
	int happy;
 
	std::cout << std::endl << "Please enter data: " << std::endl;
	std::cout << "Name: ";
	std::cin >> name; //will not work if name contains spaces
	std::getline(std::cin, name);
	c.setName(name);
	std::cout << "Hunger: ";
	std::cin >> hunger;
	std::cout << "Happiness: ";
	std::cin >> happy;
	c.setHunger(hunger);
	c.setHappy(happy);

	std::cout << "You have created:" << std::endl;
	c.print();
        return 0;
}