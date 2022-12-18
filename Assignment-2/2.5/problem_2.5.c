/*
CH-230-A
a2 p5.[c]
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/

#include<stdio.h>

int main(){
	int a; // Declare variable a.
	scanf("%d", &a); // Get input for variable a.
	printf("%d\n", a); // print the input.
	int *ptr_a; // Create pointer for variable a.
	ptr_a = &a; // Point to variable a.
	printf("%p\n", ptr_a); // Print address of contained variable(a).
	*ptr_a = *ptr_a + 5; // Add 5 to the content of pointer.
	printf("%d\n", a); // Print modified variable(a).
        printf("%p\n", ptr_a); // Again print the address of a. 

	return 0;
}



