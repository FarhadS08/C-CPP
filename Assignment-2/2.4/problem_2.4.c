/*
CH-230-A
a2 p4.[c]
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/

#include<stdio.h>

int main(){
        float a,b,h; // We declare variables.

	scanf("%f\n",& a); // Get input for a.
        scanf("%f\n", &b); // Get input for b.
        scanf("%f",& h); // Get input for h

	float square_area = a * a ; // Calculate the area of square. 
	float rectangle_area = a * b; // Calculate the area of rectangle.
	float triangle_area = h * a / 2; // Calculate the area of triangle.
	float trapezoid_area = (a + b) / 2 * h; // Calculate the area of trapezoid

        
        printf("square area=%f\n", square_area); // Print area of square.
	printf("rectangle area=%f\n", rectangle_area); // Print area of rectangle.
        printf("triangle area=%f\n", triangle_area); // Print area of triangle.
        printf("trapezoid area=%f\n", trapezoid_area);	// Print area of trapezoid.

	return 0;


}
