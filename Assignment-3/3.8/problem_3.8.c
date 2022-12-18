/*
CH-230-A
a3 p8.[c]
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/



#include<stdio.h>


float sum(float numbers[], int arrsize){  // Function that calculates sum of values from 0 to given array size.

	float sum = 0;

	for (int i = 0; numbers[i] != -99 && i < arrsize; i++){

		sum += numbers[i];
	}

	return sum;


}


float average(float numbers[], int arrsize){  // Function that calculates average of numbers with using sum function on top.

	int actualsize;

	for (int i = 0; numbers[i] != -99 && i < arrsize; i++){

		actualsize = i;
	}

	actualsize++;

	return (float)sum(numbers,arrsize) / actualsize;


}




int main(){

	float numbers[10]; // Declare array.
	float userinput; // Declare variable for user input.


	for (int i = 0; i < 10; i++){ // From 0 to 10 get user input and add them to array. If input equals -99 break and call functions.


		scanf("%f", &userinput);
		getchar();
		numbers[i] = userinput;

		if (userinput == -99){
			break;
		}
	}

	printf("%f\n", sum(numbers,10));
	printf("%f\n", average(numbers,10));	

}
