/*
CH-230-A
a12 p3.[cpp]
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/

#include<iostream>
#include "TournamentMember.h"
using namespace std;

int main(){
    Player player("Jhon", "Wick", "1964-09-12", 8, 58, 10, "MID", 2, "Right");
    player.print();
    player.increment(3);
    player.nlocation("Hamburg");
    player.print();
}
