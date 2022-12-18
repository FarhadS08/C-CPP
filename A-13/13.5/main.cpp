/*
CH-230-A
a13 p5.[cpp]
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/

#include<iostream>
using namespace std;
 
class A
{
  int x;
public:
  A(int i) { x = i; }
  void print() { cout << x; }
};
 
class B: virtual public A
{
public:
  B():A(10) {  }
};
 
class C:  virtual public A 
{
public:
  C():A(10) {  }
};
 
class D: public B, public C{
public:
    D(): A(20){};
};
 
int main()
{
    D d;
    d.print();
    return 0;
}

/*
When we want to initialize and object from derived class we must construct base class first.
If not defined compiler will try to run default constructor. In our case there is no default 
constructor because we already have custom one.

To solve this problem we have to call base class constructor in derived class.
*/