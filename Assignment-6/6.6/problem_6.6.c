/*
CH-230-A
a6 p6.[c] 
Farhad Suleymanzade 
fsuleymanz@jacobs-university.de
*/


#include <stdio.h>
#include <stdlib.h>

unsigned int countbits(unsigned char a){

    unsigned int k = 0;
    while (a) {
        k++;
        a >>= 1;
    }
    return k;

}

void binary(unsigned char a){

    for (int i = countbits(a) + 1; i >= 0; i--){

        printf("%d", (a >> i) & 1);

    }
}

int main(){

    unsigned char a;
    scanf("%c", &a);
    printf("The decimal representation is: %d\n", a);
    printf("The binary representation is: ");
    binary(a);
    printf("\n");

    return 0;
}