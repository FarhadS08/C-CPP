/*
CH-230-A
a10 p5.[cpp]
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

	// make the value of hunger a double
	hunger = getdoublehunger(newhunger);

	boredom = newboredom;
	height = newheight;
}


void Critter::print() {
	cout<< "Name= " <<name<<endl;

	// print int value of hunger
	cout<< "Hunger= " <<gethunger2()<<endl;

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


// get int value and return it a double.
double Critter::getdoublehunger(int hunger){
	return (double)hunger / 10;
}

// because hunger is now double turn it into an int
int Critter::gethunger2(){
	return hunger * 10;
}