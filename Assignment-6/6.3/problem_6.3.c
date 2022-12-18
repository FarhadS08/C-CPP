/*
CH-230-A
a6 p3.[c] 
Farhad Suleymanzade 
fsuleymanz@jacobs-university.de
*/


#include<stdio.h>

#define MIN(A, B) (A) < (B) ? (A) : (B) // Macro to define min.
#define MAX(A, B) (A) > (B) ? (A) : (B) // Macro to define max.

int main(){

    int a;
    int b;
    int c;
    double midRange;

    scanf("%d\n", &a);
    scanf("%d\n", &b);
    scanf("%d", &c);

    int min_num = MIN(MIN(a, b), c); // Call MIN 
    int max_num = MAX(MAX(a, b), c); // Call MAX

    midRange = (min_num + max_num) / 2.0; // Calculate mid-range.


    printf("The mid-range is: %.6lf\n", midRange);


    return 0;


}