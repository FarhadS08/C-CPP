/*
CH-230-A
a10 p3.[cpp]
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/

#include <iostream>
using namespace std;


class City {
    // attributes
    private:
        string name;
        int inhabitants;
        string mayor;
        double area;

        
    public:
        // setter methods
        void setName(string newname);
        void setInhabitants(int newinhab);
        void setMayor(string newmayor);
        void setArea(double newarea);

        // getter methods
        string getName();
        int getInhab();
        string getMayor();
        double getArea();

};