/*
CH-230-A
a11 p6.[cpp]
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/



#include "Vector.h"
#include <iostream>
#include <cmath>
using namespace std;

Vector::Vector(){

    size=0;
    comp = new double [0];
}

Vector::Vector(Vector& b){
    size=b.size;
    comp = b.comp;
}

Vector::~Vector(){

    //delete []components;
    //Program runs into error it would be grateful if you told me the fix for this.
    
}

Vector::Vector(int newsize,double*& newcomponents){

    size=newsize;
    comp = newcomponents;    
}

void Vector::setSize(int newsize){

    size = newsize;   
}

void Vector::setComponent(double*& newcomponents){

    comp = newcomponents;    
}

double* Vector::getComponents() const{

    return comp;
}

int Vector::getSize() const{

    return size;
}

void Vector::printvector(){

    for(int i=0;i<size;i++){

            cout<<comp[i]<<" ";
    }
    cout<<endl;
}

double Vector::norm() const{

    double ans;
    for (int i = 0; i < size; i++)
    {
        ans=ans + pow(2,comp[i]);
    }
    ans=sqrt(ans);
    return ans;
}

Vector Vector::sum(const Vector& b) const{

    double* temp;
    temp=new double[size];
    for (int i = 0; i < size; i++)
    {
        temp[i]=comp[i]+b.comp[i];
    }
    Vector ans(size,temp);
    return ans;
}

Vector Vector::diff(const Vector& b) const{

    double* temp;
    temp=new double[size];
    for (int i = 0; i < size; i++)
    {
        temp[i]=comp[i]-b.comp[i];
    }
    Vector ans(size,temp);
    return ans;
}

double Vector::scalar(Vector& b)const{

    
   double ans;
   for (int i = 0; i < size; i++)
   {
       ans=ans+(comp[i]*b.comp[i]);
   }
    return ans;
}