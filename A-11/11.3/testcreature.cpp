/*
CH-230-A
a11 p3.[cpp]
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/


#include <iostream>
using namespace std;
#include "Creature.h"



int main()
{ 
    cout << "Creating an Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();


    cout << "Creating a Lion.\n";
    Lion l;
    l.search();
     l.run();


    cout << "Creating a Wolf.\n";
    Wolf wolf;
    wolf.howl();
    wolf.run();

    return 0;
} 