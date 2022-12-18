/*
CH-230-A
a9 p6.[cpp]
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/

#include <iostream>
#include <cmath>
using namespace std;


int myfirst(int *arr);
double myfirst(double *arr);
char myfirst(char *arr);

// Function for integer array.
int myfirst(int *arr){
    
    for (int i = 0; i <=5; i++){
        if (arr[i] % 2 == 0 && arr[i] > 0){
            return arr[i];
        }
    }
    return -1;
}

// Function for double array.
double myfirst(double *arr){
    double temp;

    for (int i = 0; i <= 5; i++){
        if (arr[i] < 0){
            if(modf(arr[i], &temp) == 0){
                return arr[i];
            }
        }
    }
    return -1.1;
}


// Function for char array.
char myfirst (char *arr){

    for (int i = 0; i <= 5; i++){
        
        if (arr[i]!='a' || arr[i]!='e'|| arr[i]!='i'|| arr[i]!='o'|| arr[i]!='u'){

            return arr[i];
        }
    }
    return '0';
}


int main(){

    int arr1[5] = {-16, 18, -20, 30, 25};
    double arr2[5] = {3.123, 6.45, 5.23, -7.0, 1.333};
    char arr3[5] = {'f', 'c', 'a', 'g', 'e'};

    cout << myfirst(arr1) << endl;
    cout << myfirst(arr2) << endl;
    cout << myfirst(arr3) << endl;

    return 0;
}