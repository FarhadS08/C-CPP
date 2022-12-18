/*
CH-230-A
a9 p4.[cpp]
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/

#include <iostream>
using namespace std;

void mycount(int a, int b);
void mycount (char c, string d);

// Fucntion to compute the difference.
void mycount(int a, int b){

    cout << b - a << endl;

}

// Function to get occurence of a char in a string.
void mycount(char c, string d){

    int count = 0;

    for (int i = 0; (unsigned)i <= d.size(); i++){
        if (d[i] == c){
            count ++;
        }
    }
    cout << count << endl;
}


int main (){
    mycount(7, 3);
    char e = 'i';
    string f = "this is a string";
    mycount(e, f);
}