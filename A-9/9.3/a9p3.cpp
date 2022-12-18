/*
CH-230-A
a9 p3.[cpp]
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/

#include <iostream>
using namespace std;

// Function to determine abs value.
float absValue (float a){
    
    float value;
    
    if (a < 0){
        value = a * -1;
    }else{
        value = a;
    }
    
    return value;
}

// Get number from keyboard and get abs value of number.
int main(){
    
    float b;
    
    cout << "Enter a float number: ";
    
    cin >> b;
    
    cout << absValue(b);
}
