/*
CH-230-A
a9 p7.[cpp]
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/

#include <iostream>
using namespace std;


void swapping(int &a, int &b) {
    int help = a;
    a=b;
    b = help;
} // swap ints

void swapping(float &x, float &y){
    int help = x;
    x = y;
    y = help;
} // swap floats

void swapping(const char *&str1, const char *&str2) {
    const char *help;
    help =  str1; 
    str1 = str2;    
    str2 = help; 
} // swap char pointers


int main() {

    int a = 7, b = 15;
    float x = 3.5, y = 9.2; 
    const char *str1 = "One"; 
    const char *str2 = "Two";

    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;

    // make sqapping
    swapping(a, b);
    swapping(x, y);
    swapping(str1, str2);

    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;
    return 0;
}