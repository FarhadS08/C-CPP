/*
CH-230-A
a10 p4.[cpp]
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/



#include <iostream>
#include "Critter.h"

using namespace std;

// constructor-1
Critter:: Critter(){
	name = "default_critter",
	height = 5;
	boredom = 0;
	hunger = 0;
}

// constructor-2
Critter:: Critter(string newname){
	name = newname;
	height = 5;
	boredom = 0;
	hunger = 0;
}

// constructor-3
Critter:: Critter(string newname, int newhunger, int newboredom, double newheight){
	name = newname;
	hunger = newhunger;
	boredom = newboredom;
	height = newheight;
}


void Critter::print() {
	cout<< "Name= " <<name<<endl;
	cout<< "Hunger= " <<hunger<<endl;
	cout<< "Boredom= " <<boredom<<endl;
	cout<< "Height= " <<height<<endl;
	cout<<"----------"<<endl;
}



void Critter::setName(string& newname) {
	name = newname;
}


void Critter:: setHunger(int newhunger) {
	hunger = newhunger;
}


int Critter::getHunger() {
	return hunger;
}
