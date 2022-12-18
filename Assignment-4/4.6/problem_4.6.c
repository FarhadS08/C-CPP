/*
CH-230-A
a4 p6.[c]
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>

float highest(int arr[], int number){

	int max2;
        int max;     // Delcare variable max and max2.
	
	if (arr[0] > arr[1]){   // Check if first element is greater than second.
	
		max = arr[0]; // Assign first to max.
		max2 = arr[1]; // Assign second to max2.
	
	}else{ // If second is greater than first.
	
		max = arr[1]; // Assign second to max. 
		max2 = arr[0]; // Assign first to max2.
	
	}


        for(int i = 2; i < number; i++){  // Iterate from 0 to given value.

            if(arr[i]>max){ // If number in array is greater than max.

		     max2 = max; // Assign old max to max2.
                     max = arr[i]; // Assign new greatest number to max.
		 


            }else if (arr[i] <  max && arr[i] >  max2){ // If number is less than max and greater than max2
	    
		    max2 = arr[i]; // Assign that number to max2.
	    
	    }


        }
	
        return printf("Two Greatest values are: %d\n, %d\n", max, max2); // Print values.
}




int main(){

	int *array;  // Declare variables.
	int n;

	printf("Enter an array size\n");
	scanf("%d", &n);
	
	array  = (int*) malloc(sizeof(int) * n);  // Get dynamic size for array.

	for (int i = 0; i < n; i++ ){ // Iterate from 0 to given dynamic size.
	
		scanf("%d", &array[i]);
	
	}

	highest(array, n); // Call function highest.
	
	free(array);
	return 0;
 	
}
