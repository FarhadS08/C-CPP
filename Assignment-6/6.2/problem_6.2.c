/*
CH-230-A
a6 p2.[c] 
Farhad Suleymanzade 
fsuleymanz@jacobs-university.de
*/



#include<stdio.h>
#define NC(n) ((n) & (1) ? (1) : (0))// Macro to determine LSB.

int main(){

    unsigned char n;   
    scanf("%c", &n);

    printf("The decimal representation is: %d\n", n); // Print decimal of n.

    int numberCheck = NC(n); // Call Macro.

    if (numberCheck == 1){ // Check whether n is equal to 1.

        printf("The least significant bit is: 1\n"); 

    }else{

        printf("The least significant bit is: 0\n"); 

    }

    
    return 0;


}