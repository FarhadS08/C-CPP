/*
CH-230-A
a5 p10.[c] 
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/

#include <stdio.h>

int function(int i,int n)
{
    if(n == i){  // If n is equal to i then return 1 (number is prime).

        return 1;

    }else if(n % i == 0){ // If n is divisible by i then return 0 (number is not prime).
        
        return 0;
        
    }else if (n == 1){

        return 0;

    }else{

        return function(i + 1, n);  // Add 1 to i every time and check for prime again.

    }
}
int main(){

    int num;

    scanf("%d", &num);  // Get number from keyboard.
    
    if(function (2, num) == 1){ // If function returns 1, then number is prime.

        printf("%d is prime\n", num);

    }else{

        printf("%d is not prime\n", num); // If function returns 0, then number is not prime.

    }

}