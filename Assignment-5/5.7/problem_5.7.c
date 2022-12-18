/*
CH-230-A
a5 p7.[c] 
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int number;
    char var1[100]; 
    char var2[100]; 
    char *dynamic;

    gets(var1); // Get value from keyboard for var1.
    gets(var2); // Get valu from keyboard for var2.

    number = strlen(var1) + strlen(var2); // Assign length of var1 and var2 to number.

    dynamic = (char*) malloc(sizeof(char) * number); // Allocate memory.

    strcat(var1, var2); // Copy var2 into var1.
    strcpy(dynamic, var1); // Add var1 to dynamic array.

    printf("Result of concatenation: %s\n", dynamic);

    return 0;

}