/*
CH-230-A
a4 p2.[c]
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/


#include<stdio.h>
#include<string.h>      // Include String library for strlen().

int main(){

	char input[50]; // Declare variable.


	fgets(input, sizeof(input), stdin); // Get input for input variable.

	for (int i = 0; i <= strlen(input) - 2;i++){  // Iterate from 0 to the lenght of given string. 
	
		if (i % 2 == 0){  // If number is divisible by 2 then print string.
			
			printf("%c\n", input[i]);

		}else if (i % 2 != 0){ // If not divisable by 2 then add space in front of string.
		
			printf(" %c\n", input[i]);
		
		}	
	
	}



}
