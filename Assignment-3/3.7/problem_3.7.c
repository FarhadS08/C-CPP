/*
CH-230-A
a3 p7.[c]
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/

#include<stdio.h>

void func()
{
	int n, m;     
	char c;          //Declare variables.
	scanf("%d", &n);
	scanf("%d", &m); // Get input for n and m.
	getchar();	 // Function that gets single char from keyboard.
	scanf("%c", &c); // Get input for c.

	for (int i = 0; i < n; i++)       // Loop from 0 to given height(n)
	{
		for (int g = 0; g<m+i; g++)
		{
			printf("%c", c);          // Add character(c) for g times for each line.
		}
		printf("\n");
	}

	return;

}


int main(){

	func(); // Call function.

}
