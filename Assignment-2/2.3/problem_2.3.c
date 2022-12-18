/*
CH-230-A
a2 p3.[c]
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/

#include<stdio.h>

int main(){
	int weeks, days, hours; // We declare variables.
	scanf("%d\n",& weeks); // Get input for weeks.
	scanf("%d\n",& days); // Get input for days .
	scanf("%d",& hours); // Get input for hours.

	weeks = 168 * weeks; // We have 168 hours in a week, so we take product of given input weeks and 168.
	days = 24 * days; // We have 24 hours in a day, so we take product of given input days and 24.

	int sum = weeks + days + hours; // In this line we calculate all the variables which are in hour format. 

	printf("sum=%d\n", sum); // We print sum of variables.

}
