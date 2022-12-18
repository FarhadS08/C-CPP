/*
CH-230-A
a3 p1.[c]
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/

#include<stdio.h>


int main(){
	int i = 1;
	int n;
	float x;
	int check = 0;
	
	scanf("%f", &x);

	while(check != 1){
		scanf("%d\n", &n);
		
		if(n > 0){
			check = 1;
		}else{
			printf("Input is invalid, reenter value\n");
		}
	}


	if(n > 0){
		for(i = 1; i <= n; i++){
			printf("%f\n", x);
		}
	
	}		
		

	return 0;


}
