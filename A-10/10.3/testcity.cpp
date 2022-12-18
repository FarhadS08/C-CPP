/*
CH-230-A
a10 p3.[cpp]
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/


#include <iostream>
#include "City.h"

using namespace std;


int main(){
    City city;

    // setter methods 
    city.setName("Bremen");
    city.setMayor("Jones");
    city.setArea(123456.766);
    city.setInhabitants(456000);

    // getter methods
    cout << city.getName() << endl;
    cout << city.getMayor() << endl;
    cout << city.getInhab() << endl;
    cout << city.getArea() << endl;

    cout << "-----------" << endl;

    city.setName("Paris");
    city.setMayor("Mark");
    city.setArea(4534234.32);
    city.setInhabitants(65363425);

    cout << city.getName() << endl;
    cout << city.getMayor() << endl;
    cout << city.getInhab() << endl;
    cout << city.getArea() << endl;


    cout << "-----------" << endl;

    city.setName("London");
    city.setMayor("Jack");
    city.setArea(767435324.434);
    city.setInhabitants(88786673);

    cout << city.getName() << endl;
    cout << city.getMayor() << endl;
    cout << city.getInhab() << endl;
    cout << city.getArea() << endl;

   

    
}