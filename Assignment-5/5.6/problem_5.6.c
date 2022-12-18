/*
CH-230-A
a5 p6.[c] 
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    float *array;
    int counter;
    int  *counter_ptr;
    counter = 0;

    counter_ptr = &counter;

    scanf("%d", &n);  // Get size for dynamic array.
    array = (float*) malloc(sizeof(float) * n); // Create dynamic array.

    for(int i = 0; i < n;i++){ // From 0 to given n add numbers to dynamic array.

        scanf("%f", &array[i]);  

    }

    for(int i = 0; i < n; i++){ 

        if(array[i] > 0){ // If there is a negative number then add 1 to counter pointer.

            *counter_ptr = *counter_ptr + 1;

        }
        else if(array[i] < 0){ 

            break;

        }

    }

    printf("Before the first negative value: %d elements\n" , *counter_ptr);

    free(array);
    return 0;

}