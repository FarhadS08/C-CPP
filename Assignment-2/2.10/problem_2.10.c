/*
CH-230-A
a2 p10.[c]
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/


#include<stdio.h>

int main(){
	int n;
	int i = 1;      // Declare variabes.
	int check = 0;

	while(check != 1){      // Check if input is not 0. If it is ask for input again.
		scanf("%i", &n);
		if(n > 0){          // If input is bigger than 0 then make check equal 1 to break from loop.
			check = 1;
		}
	}


	while(i <= n){       // If input is 1 then print 1 = 24 hours.
		if( i == 1){
			printf("1 day = 24 hours\n");
		}else{  // Else print days and hours until i is equal to or smaller than input.
			printf("%i days = %i hours\n",i, i * 24 );
		}
		
		i++;
	}	

	return 0;

}

