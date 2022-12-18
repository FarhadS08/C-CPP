/*
CH-230-A
a1 p3.[c or cpp or h] 
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/

#include <stdio.h>

int main() {

	float result; // The result of the division
	int a = 5;
	float b = 13.5;
	result = a / b;
	printf("The result is %f\n", result); 
	return 0;
}

/* 1) We have to put # sign in front of header file.
 * 2) We have to assign correct data type to variable b, which is float.
 * 3) Because our result will be float data type, we have to have %f in print function */
