/*
CH-230-A
a2 p1.[c]
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/

#include<stdio.h>
#include<math.h>

int main(){
	double a;
	double b;
	
	int c;
	int d;
	int sum_2;
	int product;

	char e;
	char f;

	int sum_char;
	int product_char;
	

	double sum;
	double difference;
	double square_a;

	scanf("%lf\n%lf",&a,&b);
	scanf("%d\n%d", &c,&d);
	scanf("%c\n%c\n", &e, &f);


	sum_char = e + f;
	product_char = e * f;

	sum = a + b;

	product = c * d;
	sum_2 = c + d;

	difference = a - b;
	square_a = pow(a, 2);

	printf("sum of doubles=%lf\n", sum);
	printf("difference of doubles=%lf\n", difference);
	printf("square=%lf\n", square_a);

	
	printf("sum of integers=%d\n", sum_2);
	printf("product of integers=%d\n", product);
	

	printf("sum of chars=%d\n", sum_char);
	printf("product of chars=%d\n", product_char);

	return 0;	
}


