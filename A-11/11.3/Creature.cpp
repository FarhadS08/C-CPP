/*
CH-230-A
a11 p3.[cpp]
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/



#include <iostream>
using namespace std;
#include "Creature.h"


//////////////////CREATURE/////////////////////

Creature::Creature(): distance(10){}    

void Creature::run() const
{ 
    cout << "running " << distance << " meters!\n";
}  


//////////////////WIZARD///////////////////////

Wizard::Wizard() : distFactor(3){}  

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}


////////////////////LION////////////////////////

Lion:: Lion(): minutes(5){}

void Lion:: search() const {
    cout << "Searching for a victim for " << (minutes) << " minutes\n";
};


///////////////////////WOLF////////////////////

void Wolf:: howl() const{
    cout << "Howling for " << (howlRepeat) << " times.\n";
}

Wolf :: Wolf() : howlRepeat(7){}