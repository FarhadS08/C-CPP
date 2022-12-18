/*
CH-230-A
a4_p3.[c]
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/


#include <stdio.h>
#include <math.h>


float geometric_mean(float arr[], int num){
    
    float product=1;  // Declare variable product.
    
    
    for(int i=0; i<num; i++){  // Iterate from 0 to given number.                       
        
       if(arr[i]<0)
        {
            break;      // If number is negative break.
                       
        }
        
        else
        {
            product=product*arr[i];  
        }
        
    }
    
    float mean = pow((double)product, (1.0/(double)num)); // Find mean of numbers.
    
    return mean; // Return the value.
}
    
float highest(float arr[]){

        float max=arr[0]; // Delcare variable max.
        
        for(int i=0;i<15; i++){  // Iterate from 0 to 15.
        
            if(arr[i]<0) {
                break;    // If number from array is negative then break.

            } else if(arr[i]>max){
                                // Add number from array to max, if its more than max.         
               	     max=arr[i];
                
             }
                     
            
        }
    
        return max;   // Return max.
    }
    
    float smallest(float arr[]) {
        
        float min=arr[0];  // Declare variable.
        
        for(int i = 0;i<15;i++){   // Iterate from 0 to 15.
            if (arr[i]<0) {
                break;    // If number from array is negative then break.
            } else if (arr[i]<min) {     // Add number to min variable,if number is less than min.
                    min=arr[i];
              }
          }
  
        
        return min; // Return min.
    }    
    
    
    float sum(float arr[], int num){
      int sum=0;  // Declare sum variable.
    
      for(int i=0; i<num; i++) // Iterate from 0 to given num.
      
      {
          if (arr[i]<0)
          {
              break; // If negative then break.
          }
          
          else
          {
            
            sum=sum+arr[i];  // Else add number to sum.
            
          }
          
      }
      
      return sum;  // Return sum.
    }
    
int main(){
    
    float array[15];
    char c;          // Declare variables.
    int i;
       
    printf("Enter float numbers\n");   
   
    for(i = 0; i < 15; i++){

       scanf ("%f", &array[i]);  // Get numbers from keyboard.
       
       if (array[i] < 0){
       
	       break;
       
       }
 
   }
   
    getchar();
    printf("Enter an operation\n");
    scanf("%c", &c); // Get operation from keyboard.
       
    switch(c) {  // Call function depending on the character that is  pressed.
        case 'm': 
        
        printf("The geometric mean of the numbers is %lf\n", geometric_mean(array, i));
        break; 
        
        case 'h':
        
        printf("The highest value is %f\n", highest(array));
        break;
        
        case 'l':
        
        printf("The smallest value is %f\n", smallest(array));
        break; 
        
        case 's':
        
        printf("The sum of the numbers is %lf\n", sum(array, i));
	break;
        
    }
    
    return 0;
}
