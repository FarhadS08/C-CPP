/*
CH-230-A
a11 p4.[cpp]
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/


#include <iostream>
using namespace std;
#include "Creature.h"



int main(){

    string answer;
    Wizard* a;
    Lion* b;
    Wolf* c; 

    do{
        cout << "Enter a creature: " << endl;
        cin >> answer;

        if(answer == "Wizard"){
            a = new Wizard;
            a -> hover();
            a -> run();

            delete a;
        }

        if (answer == "Lion"){
            b = new Lion;
            b -> search();
            b -> run();

            delete b;
        }

        if(answer == "Wolf"){
            c = new Wolf;
            c -> howl();
            c -> run();

            delete c;
        }
    }while (answer != "quit");

    return 0;
    
} 