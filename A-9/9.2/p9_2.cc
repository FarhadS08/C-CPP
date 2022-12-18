/*
CH-230-A
a9 p2.[cpp] 
Farhad Suleymanzade 
fsuleymanz@jacobs-university.de
*/

#include <iostream>
using namespace std;


int main(){

    // Declare variables.
    int n;
    double x;
    string s;

    // Get input from keyboard.
    cin >> n;
    cin >> x;
    cin >> s;

    // Display values n times.
    for (int i = 0; i < n; i++){

        cout << " " << s;
        cout << " : ";
        cout << " " << x;
        cout << "\n";

    }

    return 0;
}