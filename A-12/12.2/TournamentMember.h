/*
CH-230-A
a12 p2.[cpp]
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/

#include<iostream>
using namespace std;

class TournamentMember{
    private:
        char firstName[36];
        char lastName[36];
        char dateBirth[11];
        int age;
        int uniformNumber;
        static string location;
    

    public:
        TournamentMember(const char newFirsName[36], const char newLastName[36], const char newDateBirth[11], const int uniformNumber, const int newAge);
        TournamentMember(){
            cout << "Empty constructor is initialized" << endl;
        };
        ~TournamentMember(){
            cout << "Destructor is initialized" << endl;
        };
        TournamentMember(const TournamentMember &source);

        void setFname(const char firstName[36]);
        void setLName(const char lastName[36]);
        void setUNumber(const int uniformNumber);
        void setAge(const int age);
        void setDateBirth(const char dateBirth[11]);

        const char *getFName()const {return firstName;};
        const char *getLName()const {return lastName;};
        const char *getDateBirth()const {return dateBirth;};
        string getLocation()const {return location;};
        int getAge()const {return age;};
        int getUnumber()const {return uniformNumber;};

        void print();

        static void nlocation(const string newLocation);
};