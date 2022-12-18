/*
CH-230-A
a7.p7.[c] 
Farhad Suleymanzade 
fsuleymanz@jacobs-university.de
*/


#include <stdio.h>
#include <stdlib.h>
#include "stack.h" 


// Function for pushing numbers to array.
void push(struct stack *list,int num){

    if (list->count==12){

        printf("Pushing Stack Overflow\n");
        
    }
    else{

        printf("Pushing %d\n",num);
        list->array[list->count]=num;
        list->count= list->count +1;
    }
    
}

// Function for poping numbers from array.
void pop(struct stack *list){

    if (list->count ==0){

        printf("Popping Stack Underflow\n");
        
    }
    else{

        list->count= list->count -1;  
        printf("Popping %d\n",list->array[list->count]);
        list->array[list->count]=0;
       
    }
   
}

// Function to empty array.
void empty(struct stack *list){

    printf("Emptying Stack ");
   while (list ->count > 0){

       list ->count = list->count -1;
       printf("%d ",list ->array[list->count]);
   }
   printf("\n");
}

// Function to check if array is empty.
void isEmpty(struct stack *list){
   if(list->count==0){

      printf("Stack is empty\n");
   }
}