/*
CH-230-A
a1 p1.[c] 
Farhad Suleymanzade 
fsuleymanz@jacobs-university.de
*/

#include <stdio.h>

int main(){
	int x = 17;
	int y = 4;
        int sum = x + y;
	int product = x * y;
	int difference = x - y;
	float division= (float) x / (float) y;
	int remainder_of_division = x % y;
	printf("x=%d\ny=%d\nsum=%d\nproduct=%d\ndifference=%d\ndivision=%f\nremainder of division=%d\n",
			x,y,sum,product,difference,division,remainder_of_division);
	return 0;

}
