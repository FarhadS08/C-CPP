/*
CH-230-A
a3 p5.[c]
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/

#include<stdio.h>


int main(){
	
	double sum;
	double mean;
	double far_1;   // Declare variables.
	double far_2;
	double temps[100] = {};  // Declare an array.
	char c;
	int n;     // Declare variabels.
	double k;
	printf("Enter values for calculation(s = sum, p = list, t = fahranheit, other cases = arithmetic mean:\n");
	scanf("%c\n", &c);
	scanf("%d\n", &n);
	scanf("%lf", &k);  // Get input for variables.
	
	
	switch(c){  
		case 's' :
			sum = n + k;
			printf("sum: %lf\n", sum);  // If c = s then find the sum of given temps(n, k).
			break;


		case 'p':

			temps[0] = n;
			temps[1] = k;
		                                        // If c = p then add n and k to the temps array and print.	
			printf("First temp: %d\n", n);
			printf("Second temp: %lf\n", k);

			break;
 
		
		case 't':

			far_1 = n * 9/5 + 32;
			far_2 = k * 9/5 + 32;

			temps[2] = far_1;               // If c = t then find fahranheit of given celsius(n ,k)
							// then add them to temps array.
			temps[3] = far_2;

			printf("Faranheit 1: %lf\n", temps[2]);   
			printf("Faranheit 2: %lf\n", temps[3]);  //Print from temps array.
			
			break;
		


		default:

			mean = (n + k) / 2;                // In all other cases find arithmetic mean of n and k
                          
			printf("Arithmentic mean: %lf\n", mean);

	}

}
