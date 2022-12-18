/*
CH-230-A
a13 p4.[cpp]
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/


#include<iostream>
using namespace std;
 
class A
{
  int x;
public:
  void setX(int i) {x = i;}
  void print() { cout << x; }
};
 
class B:  public A
{
public:
  B()  { setX(10); }
};
 
class C:  public A  
{
public:
  C()  { setX(20); }
};
 
class D: public B, public C {
};
 
int main()
{
    D d;

    d.C::print();
    d.B::print();

    return 0;
}

/* In this example derived class D is inherited from two classes(B and C).
Because they share same function print(), when function is called compiler gets confused that 
from which base class member print() should be called.

To solve this problem we use scope resolution operator '::'
*/