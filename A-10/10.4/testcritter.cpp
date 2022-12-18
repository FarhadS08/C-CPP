/*
CH-230-A
a10 p4.[cpp]
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "Critter.h"



int main(int argc, char** argv)
{

	Critter critter1;
	Critter critter2("critter2");
	Critter critter3("critter3", 3, 5, 14.5);
	Critter critter4("critter4", 3, 5);
	critter2.setHunger(2);
	critter3.setHunger(2);
	critter4.setHunger(2);

	critter1.print();
	critter2.print();
	critter3.print();
	critter4.print();

}