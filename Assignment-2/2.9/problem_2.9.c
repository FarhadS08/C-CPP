/*
CH-230-A
a2 p9.[c]
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/


#include<stdio.h>

int main(){
	char a; // Declare variable a.
	scanf("%c", &a); // Get input from keyboard for variable a.
	if('0' <= a && a <= '9'){ // Check if a is between 1-9. If it is then it is a digit.
		printf("%c is a digit\n", a);
	}else if('a' <= a && a <= 'z'){ // Check if a is between a-z. If it is then it is a letter.
		printf("%c is a letter\n", a);
	}else if ('A' <= a && a <= 'Z'){ // Check for capital letters the same way as previous line.
		printf("%c is a letter\n", a);
	}else{ // If non of the conditions worked above then input is a symbol.
		printf("%c is some other symbol\n", a);
	}	
	
	return 0;

}
