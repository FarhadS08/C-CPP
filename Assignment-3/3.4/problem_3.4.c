/*
CH-230-A
a3 p4.[c]
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/



#include<stdio.h>
#include <string.h> //include string library for strlen function.


int position(char str[], char c){
    int idx;
    /* Loop until end of string */
    for (idx = 0; idx <= strlen(str); idx++){ // Loop from 0 to the lenght of given string. 
        /* do nothing */
    	if(str[idx] == c){    //We add if statement to check if the idx is the same as given char.
		             //if it is then break.
		break;
	}	    
    }

    return idx; // Return idx at the end of function, which holds the index of given char.
}


int main() {
    char line[80];
    while (1) {
        printf("Enter string:\n");
        fgets(line, sizeof(line), stdin);
        printf("The first occurrence of ’g’ is: %d\n", position(line, 'g'));
   }
}
