/*
CH-230-A
a5 p2.[c] 
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/

#include <stdio.h>
#include<math.h>

void  divby5 (float arr[], int size){ // Iterate from 0 to assigned size.

	

	for (int i = 0; i <= size; i++){ // For each number in array divide number by 5.
	
		 arr[i] /=  5;
	
	
	}
	
}

int main(){

	float array[] = {5.5, 6.5, 7.75, 8.0, 9.6, 10.36};
	int size = 5;


	printf("Before:\n");

	for (int i = 0; i <= size; i++){ // For each number in array print number.
	
		printf("%.3f ",array[i]);
	
	}
	printf("\n");



	divby5(array, size); // Call Function.

	printf("After:\n");

	for (int i = 0; i <= size; i++){ // For each number in array(divided by 5) print element.

		
	
		printf("%.3f ",array[i]);
	
	
	}

	printf("\n");
	return 0;


}
