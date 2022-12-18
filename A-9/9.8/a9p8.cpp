/*
CH-230-A
a9 p8.[cpp]
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/

#include <iostream>
using namespace std;

//function for max value and subtracing
void subtract_max(int *a, int n){

    // variable to declare as max
    int max;

    // get max from array
    for(int i = 0; i < n ; i++){

        if(max < a[i]){
            max = a[i];
            
        }  
    }

    cout << "Max number: " << max << endl; 

    // subtrack max from all values of array
    for (int i = 0; i < n; i++){        

        a[i] = a[i] - max;

    }
}


// function for deallocating memory
void deallocate(int *a){
    delete [] a;
}


int main(){
    int n;
    cin >> n;
    cout << "----" << endl;
    int *a;

    a = new int[n];

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    
    subtract_max(a, n);

    cout << "Modified array" << endl;

    // illustrate new array
    for (int i = 0; i < n; i++){
        cout << a[i] << endl;
    }

    deallocate(a);
}