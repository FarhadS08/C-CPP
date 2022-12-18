/*
CH-230-A
a1 p6.[c] 
Farhad Suleymanzade 
fsuleymanz@jacobs-university.de
*/

#include<stdio.h>

int main(){
	char c = 'F';
	c += 3;
	printf("%c %d\n", c, c);
	return 0;
}

/* In ASCII table 70 is the corresponding value of F, adding 3 to c makes it 73 which is I in ASCII table.
 * Then we print c variable as character(%c) and as decimal(%d) */
