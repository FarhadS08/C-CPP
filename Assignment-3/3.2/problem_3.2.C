/*
CH-230-A
a3 p2.[c]
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/


#include<stdio.h>


int main(){
	
	char ch;
	int n;      //Declare variables.
	int i;

	scanf("%c", &ch); // Get input for ch from keyboard.  
	scanf("%d", &n);  // Get input for n from keyboard.
	printf("%c\n", ch);	
	for(i = 1; i <= n; i++){ // Iterate from 1 to n.
		
		printf("%c - %d\n", ch, i); // Print character and corresponding number.
	}

	return 0;
}

