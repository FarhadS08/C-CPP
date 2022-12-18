/*
CH-230-A
a11 p1.[cpp]
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/


#include<iostream>
#include  "Box.h"
using namespace std;

Volume:: Volume(){
    height = 0;
    width = 0;
    depth = 0;
}

Volume:: Volume(double newHeight, double newWidth, double newDepth){
    height = newHeight;
    width = newWidth;
    depth = newDepth;
}

Volume:: ~Volume(){
    cout << "Executing destructor" << endl;
}

Volume:: Volume(Volume &obj){
    height = obj.height;
    width = obj.width;
    depth = obj.depth;
}

void Volume:: setHeight(double newHeight){
    height = newHeight;
}

void Volume:: setWidth(double newWidth){
    width = newWidth;
}

void Volume:: setDepth(double newDepth){
    depth = newDepth;
}


double Volume:: getHeight(){
    return height;
}

double Volume:: getWidth(){
    return width;
}

double Volume:: getDepth(){
    return depth;
}


void Volume:: print(){
    cout << "Volume: " << (height*width*depth) << endl;
}