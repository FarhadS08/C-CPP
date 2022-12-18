/*
CH-230-A
a4 p1.[c]
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/


#include<stdio.h>
#include<math.h>


int main(){
	float x;
	float k;    // Declare variables.
	float l;

	scanf("%f\n", &x);
	scanf("%f\n", &k);  // Get input from keyboard.
	scanf("%f", &l);


	for (float  i = x; i <= k; i = i + l ){  // Iterate from x to k with the step of l;
		
		printf("%f ",i);
		printf("%f ",i * i * M_PI);    // Print values.
		printf("%f\n",2 * M_PI * i);	
	}
	



}
