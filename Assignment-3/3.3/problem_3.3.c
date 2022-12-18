/*
CH-230-A
a3 p3.[c]
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/


#include<stdio.h>


float convert(int cm){  // Create function that gets cm as input.

	float km = (float)cm / 100000; // Convert from cm to km.
	return km; // Return km (which is float).

}



int main(){

	int cm;	         
	float result;       //Declare variables. 
	scanf("%d", &cm); // Get input for cm.

	
	result = convert(cm); // Call convert function and assign it to  result.
	

	printf("Result of conversion: %f\n", result); // Print result.

}
