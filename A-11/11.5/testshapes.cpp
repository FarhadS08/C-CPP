/*
CH-230-A
a11 p5.[cpp]
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/


#include "Shapes.h"
#include<iostream>
using namespace std;

int main(int argc, char** argv) 
{
  
  Circle c("Circle", 3, 4, 7);
  RegularPolygon r("TRIANGLE", 1, 1, 3);
  Rectangle rectangle("Rectangle",0,0,10,5);
  Square square("Square",0,0,5);

  c.printName(); 
  cout<<"Area: "<<c.area()<<endl;
  cout<<"Perimeter: "<<c.perimeter()<<endl;
  cout<<""<<endl;

  rectangle.printName();
  cout<<"Area: "<<rectangle.area()<<endl;
  cout<<"Perimeter: "<<rectangle.perimeter()<<endl;
  cout<<""<<endl;

  square.printName();
  cout<<"Area: "<<square.area()<<endl;
  cout<<"Perimeter: "<<square.perimeter()<<endl;
  cout<<""<<endl;

}