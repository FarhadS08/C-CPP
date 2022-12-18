/*
CH-230-A
a12 p3.[cpp]
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/

#include <iostream>
#include <cstring>
#include "TournamentMember.h"
using namespace std;

string TournamentMember:: location = "Azerbaijan";

TournamentMember:: TournamentMember(const char newFirsName[36], const char newLastName[36], const char newDateBirth[11], const int newUnumber, const int newAge){
    cout << "Parametric constructor being initialized" << endl;

    strcpy(firstName, newFirsName);
    strcpy(lastName, newLastName);
    strcpy(dateBirth, newDateBirth);
    age = newAge;
    uniformNumber = newUnumber;
};


void TournamentMember:: print(){
    cout<<"First Name: "<<firstName<<endl;
    cout<<"Last Name: "<<lastName<<endl;
    cout<<"Date of Birth: "<<dateBirth<<endl;
    cout <<"Uniform Number: " << uniformNumber<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Location: "<<location<<endl;
    cout<<endl;
};

inline TournamentMember:: TournamentMember(const TournamentMember &source){
    cout << "Copy constructor being initialized" << endl;

    strcpy(firstName, source.firstName);
    strcpy(lastName, source.lastName);
    strcpy(dateBirth, source.dateBirth);
    age = source.age;
    uniformNumber = source.uniformNumber;
};


////////SETTERS FOR TOURNAMENTMEMBER CLASS////////

void TournamentMember:: nlocation(const string newLocation){
    location = newLocation;
};

void TournamentMember:: setFname(const char fName[36]){
    strcpy(firstName, fName);
};

void TournamentMember:: setLName(const char lName[36]){
    strcpy(lastName, lName);
};

void TournamentMember:: setDateBirth(const char newDateBirth[11]){
    strcpy(dateBirth, newDateBirth);
};


void TournamentMember:: setAge(const int newAge){
    age = newAge;
};

//////////////////////////PLAYER CLASS////////////////////////////////

inline Player::Player(const Player& obj): TournamentMember(obj)
{
    number=obj.number;
    position=obj.position;
    scoredGoals=obj.scoredGoals;
    foot=obj.foot;
}

Player:: Player(const char newFirsName[36], const char newLastName[36], const char newDateBirth[11], 
        const int uniformNumber, const int newAge, int newnumber, string newposition, int newscoredGoals, string newfoot){
            number = newnumber;
            position = newposition;
            scoredGoals = newscoredGoals;
            foot = newfoot;
        }


void Player:: increment(int num){
    scoredGoals = scoredGoals + num;
}


void Player:: print(){
    cout<<"First Name: "<<getFName()<<endl;
    cout<<"Last Name: "<<getLName()<<endl;
    cout<<"Date of Birth: "<<getDateBirth()<<endl;
    cout<<"Uniform Number: "<<getUnumber()<<endl;
    cout<<"Age: "<<getAge()<<endl;
    cout<<"Location: "<<getLocation()<<endl;
    cout<<"Number: "<<number<<endl;
    cout<<"Position "<<position<<endl;
    cout<<"Goals scored: "<<scoredGoals<<endl;
    cout<<"Feet: "<<foot<<endl;
    cout<<endl;
}





