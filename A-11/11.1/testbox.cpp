/*
CH-230-A
a11 p1.[cpp]
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/

#include<iostream>
#include "Box.h"
using namespace std;

int main(){
    int n;
    cout << "Enter the number of boxes: " << endl;
    cin >> n;

    Volume *array;

    array = new Volume[2*n];

    double height;
    double width;
    double depth;

    for (int i = 0; i < n; i++){
        cout <<"Box number " << i << endl;
        cout <<"Height: "<< endl;
        cin >> height;
        array[i].setHeight(height);
        cout <<"Width: "<< endl;
        cin >> width;
        array[i].setWidth(width);
        cout <<"Depth: " << endl;
        cin >> depth;
        array[i].setDepth(depth);
    }

    for (int i = n; i < n*2; i++){

        array[i] = Volume(array[i-n]);
    }

    for (int i = 0; i < n*2; i++){

        array[i].print();
    }
    
     delete [] array;


}
