/*
CH-230-A
a2 p8.[c]
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/


#include<stdio.h>

int main(){

	int a; // We declare variable a.
	scanf("%d", &a); // Get input from keyboard for variable a.

	if(a % 2 == 0 && a % 7 == 0){ // Check if both conditions are true with (and) operator.
		printf("The number is divisible by 2 and 7\n"); // If true execute this line.
	}else{
		printf("The number is NOT divisible by 2 and 7\n"); // Else this line gets executed.
	}


}


