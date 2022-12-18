//CH-230-A
//a1 p1. [c]
//Farhad Suleymanzade
// fsuleymanz@jacobs-university.de


#include <stdio.h>

int main() {
    double result;  //The result of our calculation 
    result = (3 + 1) / 5.0;
    printf("The value of 4/5 is %lf\n", result); 
    return 0;
}

// Because 5 is an integer, when divided by float it gets to 0
// In order to get real answer we have to write 5 as double 5.0
