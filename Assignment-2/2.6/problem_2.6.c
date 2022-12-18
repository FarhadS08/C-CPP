/*
CH-230-A
a2 p6.[c]
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/

#include<stdio.h>

int main(){
	double x, y; // Declare x and y variable.
	scanf("%lf\n", &x); // Get input for x.
	scanf("%lf", &y); // Get input for y.
	double *ptr_one; // Create pointer one.
	double *ptr_two; // Create pointer two.
	double *ptr_three; // Create pointer three.
	ptr_one = &x; // Pointer one point to x.
	ptr_two = &x; // Pointer two point to x.
	ptr_three = &y; // Pointer three point to y.
	printf("Address of pointer one=%p\n", ptr_one);
	printf("Address of pointer two=%p\n", ptr_two);      // Print addresses of x and y.
        printf("Address of pointer three=%p\n", ptr_three);




}
