/*
CH-230-A
a5 p3.[c]
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/


#include <stdio.h>
#include <string.h>

int count_lower(char* str){
    
    char c;
    int counter;
    counter = 0;

    for(int i = 0; i <= strlen(str); i++){ // Iterates from 0 to the lenght of string.

        c = str[i];
        
        if(c == 'q' || c == 'w' || c == 'e' || c == 'r' || c == 't' 
        || c == 'y' || c == 'u' || c == 'i' || c == 'o' || c == 'p'
        || c == 'a' || c == 's' || c == 'd' || c == 'f' || c == 'g'
        || c == 'h' || c == 'j' || c == 'k' || c == 'l' || c == 'z'
        || c == 'x' || c == 'c' || c == 'v' || c == 'b' || c == 'n'
        || c == 'm') // Check whether there is a lowercase char. 
        {
        counter++; // If there is then add 1 to counter.
        }

    }

    return counter;
    
}

int main(){

    char str[50];

    while(1){

        fgets(str, sizeof(str), stdin); // Get string from keyboard.

        if (str[0] != 10){ // ENTER means 10 in ASCII board.
            printf("number of lowercase letters = %d\n", count_lower(str)); 
        }
        else{ // Break if user pressed enter.
            break;
        }

    }

    return 0;

}
