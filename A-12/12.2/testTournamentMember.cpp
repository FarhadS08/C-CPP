/*
CH-230-A
a12 p2.[cpp]
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/

#include<iostream>
#include "TournamentMember.h"
using namespace std;

int main(){
    TournamentMember Member1("John", "Wick", "1964-09-12", 8,58);
    Member1.print();
    Member1.nlocation("Germany");
    Member1.print();
}