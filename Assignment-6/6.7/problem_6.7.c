/*
CH-230-A
a6 p7.[c]
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>


void binary(unsigned char k){
    // Function to turn number 8 bit reversed binary.

    int numberofbits = 8;
    for (int i = numberofbits - 1; i >= 0; i--){
        
        printf("%d", (k >> i) & 1);
    }
}

char set3bits(unsigned char k, unsigned int l, unsigned int m, unsigned int n){
    // Function to change bit in 3 different place in given number.

    int numberofbits = 8;
    for (int i = numberofbits - 1; i >= 0; i--){

        if(i == l || i == m || i == n){
            k |= 1 << i;
        }    
    }
    return k;
}

int main(){

	unsigned char k;
	unsigned int l, m, n;
	scanf("%c", &k);
    scanf("%d", &l);
    scanf("%d", &m);
    scanf("%d", &n);
    printf("The decimal representation is: %d\n", k);
    printf("The binary representation is: "); 
    binary(k);
    printf("\n");
    printf("After setting the bits: "); 
    binary(set3bits(k, l, m, n));
    printf("\n");

	return 0;
}
