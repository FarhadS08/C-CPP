/*
CH-230-A
a10 p2.[cpp]
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
	int boredom;
	double height;
 
	std::cout << std::endl << "Please enter data: " << std::endl;
	std::cout << "Name: ";
	std::cin >> name; //will not work if name contains spaces
	std::getline(std::cin, name);
	c.setName(name);
	std::cout << "Hunger: ";
	std::cin >> hunger;
	std::cout << "Happiness: ";
	std::cin >> happy;
	std::cout << "Boredom: ";
	std::cin >> boredom;
	std::cout << "Height: ";
	std::cin >> height;
	c.setHunger(hunger);
	c.setHappy(happy);
	c.setBoredom(boredom);
	c.setHeight(height);

	std::cout << "You have created:" << std::endl;
	c.print();
        return 0;
}