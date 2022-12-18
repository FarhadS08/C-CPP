/*
CH-230-A
a11 p6.[cpp]
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/



#include <iostream>
#include <string>
#include"Vector.h"
using namespace std;

int main (int argc,char** argv){
    
    int size;
    cout<<"Number of Components:";
    cin>>size;

    cout<<"Vector 1"<<endl;
    double *comp1;
    comp1=new double[size];
    for(int i=0;i<size;i++)
    {
        cin>>comp1[i];
    }

    cout<<endl<<"Vector 2"<<endl;
    double *comp2;
    comp2=new double[size];
    for(int i=0;i<size;i++)
    {
        cin>>comp2[i];
    }
  

    Vector vector1;
    vector1.setComponent(comp1);
    vector1.setSize(size);
    Vector vector2(vector1);
    Vector vector3(size,comp2);
    
    cout<<"Vector 1"<<endl;
    vector1.printvector();
    cout<<"Vector 2"<<endl;
    vector2.printvector();
    cout<<"Vector 3"<<endl;
    vector3.printvector();    


    cout<<"Norm: "<<vector1.norm()<<endl;
    cout<<"Scalar: "<<vector1.scalar(vector3)<<endl;
    cout<<"Sum: ";
    (vector1.sum(vector3).printvector());
    cout<<"Diffrence: ";
    vector1.diff(vector3).printvector();

    
    return 0;
}