/*
CH-230-A
a6 p1.[c] 
Farhad Suleymanzade 
fsuleymanz@jacobs-university.de
*/

#include <stdio.h>
#define SWAP(x, y, aux)  aux = x; x = y; y = aux; // Macro to swap numbers.
 
int main()
{
    int a, b, aux;      // Declare variables.
    double x, y, aux_2;
 

    scanf("%d\n", &a);
    scanf("%d\n", &b);  // Get input.
    scanf("%lf\n", &x);  
    scanf("%lf", &y);
 
    SWAP(a, b, aux);   // Swap for int a and int b.
    SWAP(x, y, aux_2);  // Swap for double x and double y.
 
    printf("After swapping:\n");
    printf("%d\n%d\n", a, b);
    printf("%.6lf\n%.6lf\n", x, y);
 
    return 0;
}