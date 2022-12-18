/*
CH-230-A
a10 p2.[cpp]
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/



#include <iostream>
#include "Critter.h"

using namespace std;

void Critter::setName(string& newname) {
	name = newname;
}

void Critter:: setHappy(int newhappy){
	happy = newhappy;
}

void Critter:: setHunger(int newhunger) {
	hunger = newhunger;
}

void Critter:: setBoredom(int newboredom){
	boredom = newboredom;
}

void Critter:: setHeight(double newheight){
	height = newheight;
}

void Critter::print() {
	cout << "I am " << name << ". My hunger level is " << hunger << "." << endl;
	cout << "My happiness level is " << happy << "." << endl;
	cout << "My boredom level is  " << boredom << "." << endl;
	cout << "My height is  " << height << "." << endl;
}

int Critter::getHeight(){
	return height;
}

int Critter::getBoredom(){
	return boredom;
}

int Critter::getHunger() {
	return hunger;
}

int Critter:: getHappy(){
	return happy;
}