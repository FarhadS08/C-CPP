/*
CH-230-A
a3 p6.[c]
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/


#include<stdio.h>



float to_pounds(double  kg, double  g){
	
	double mass; // Declare mass.
	double pound;    // Declare mass.

	g =  g / 1000; // Convert g to kg

						
	mass = kg +  g; // Calculate mass.

	pound = mass * 2.2; // Calculate pound.

	return pound;  // Return pound.

}



int main(){

	double  kg; // Declare kg.
	double g; // Declare g.

	scanf("%lf\n", &kg);   // Get input for kg.
	scanf("%lf", &g);   // Get input for g.

	printf("Result of conversion: %lf\n",to_pounds(kg, g)); // Print resul of calculation.

}
