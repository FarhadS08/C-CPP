/*
CH-230-A
a4 p9.[c]
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>



int prodminmax(int arr[], int n){

	int product;
	int min = arr[0];  //Declare variables
	int max = arr[0];


	for (int i = 0; i < n; i++){ // Iterate array  from 0 to given number(n).
	
		if (arr[i] > max){
		
			max = arr[i];  // Get max from array.
		
		}


		if (arr[i] < min){
		
			min = arr[i];  // Get min from array.
		
		
		}
	
	
	
	}

	product = max * min;  // Calculate product of max and min.

	return  product;


}




int main(){

	int *arr;      // Declare variables.
	int n;
	
	

	printf("Enter the size of array\n");
        scanf("%d", &n);	

   	arr = (int*) malloc(sizeof(int) * n); //Dynamically allocate size of array.


	for (int i = 0; i < n; i++){
	
		scanf("%d", &arr[i]);	 // Get length of array.
	
	}
        

	printf("Product of min and max: %d\n", prodminmax(arr, n)); // Print product.


	free(arr);  // Free memory.
	return 0;
}
