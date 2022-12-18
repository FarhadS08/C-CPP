/*
CH-230-A
a10 p3.[cpp]
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/

#include <iostream>
#include "City.h"
using namespace std;


void City:: setName(string newname){
    name = newname;
}

void City:: setInhabitants (int newhab){
    inhabitants = newhab;
}

void City:: setArea (double newarea){
    area = newarea;
}

void City:: setMayor(string newmayor){
    mayor = newmayor;
}



string City:: getName(){
    return name;
}

int City:: getInhab(){
    return inhabitants;
}

double City:: getArea(){
    return area;
}

string City:: getMayor(){
    return mayor;
}