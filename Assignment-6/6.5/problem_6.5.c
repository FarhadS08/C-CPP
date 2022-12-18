/*
CH-230-A
a6 p5.[c] 
Farhad Suleymanzade 
fsuleymanz@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void binary(char num){
	while (num){

		printf("%d", num & 1); // Printing n as bits.
		num >>= 1; // Moving bit to right for reversing.

	}
}

int main()
{
	unsigned char num;
	scanf("%c", &num); // Get value from keyboard.
	printf("The decimal representation is: %d\n", num); // Print values.
	printf("The backwards binary representation is: "); // Print values.
	binary(num); // Call Function.
	printf("\n");

	return 0;
}
