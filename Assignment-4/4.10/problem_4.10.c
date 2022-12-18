/*
CH-230-A
a4 p10.[c]
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/


#include <stdio.h>
#include <math.h>



float proddivpowinv(float a, float b, float *prod, float *div, float *pwr,
	       	float *invb){


        *prod = a * b; // Calculate product.
	*div = a / b; // Calculate division.
	*pwr = pow(a, b); // Calculate power.
	*invb = 1 / b; // Calculate invb.


    	return printf("Product:%f\nDivision:%f\nPower:%f\nInvb:%f\n", *prod, *div, *pwr, *invb); // Print result.

}



int main(){

	float a, b, prod, div, pwr, invb;  // Declare variables.


	printf("Enter value for a:");
	scanf("%f",& a); // Get value from keyboard for a.

	printf("Enter value for b:");
	scanf("%f",& b); // Get value from keyboard for b.

	
	if (b != 0){ // Call funtion unless b is not equal to 0.

		 proddivpowinv(a, b, &prod, &div, &pwr, &invb);  // Call function.
	
	}

   
	return 0;


}


