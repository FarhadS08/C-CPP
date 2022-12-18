/*
CH-230-A
a5 p10.[c] 
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/

#include<stdio.h>


int function(int n){

    if ((n == 1) || (n == 0)){  // If n is equal to 1 or 0 then return 1.

        return 1;

    }else{

        printf("%d\n", n);

        int val = function(n-1);  // Create recursive function. 

        return val; // Return val.


    }

}


int main(){

    int n;

    scanf("%d", &n);

    printf("%d\n", function(n));

}