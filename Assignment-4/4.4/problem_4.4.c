/*
CH-230-A
a4 p4.[c]
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
int count_consonants(char str[]){

    int consonants = 0;
    int i;
    char ch; 

    for(i = 0; i <= strlen(str) ; i++){ //Iterate from 0 to the lenght of the given string. 
        ch = str[i]; 

        if(ch == 'b' || ch == 'c' || // Check if there are consonant character in the string.
           ch == 'd' || ch == 'f' ||
           ch == 'g' || ch == 'j' ||
           ch == 'k' || ch == 'l' ||
           ch == 'm' || ch == 'n' ||
           ch == 'p' || ch == 'q' ||
           ch == 's' || ch == 't' ||
           ch == 'v' || ch == 'x' ||
           ch == 'z' || ch == 'h' ||
           ch == 'r' || ch == 'w' || 
           ch == 'y' || ch == 'B' ||
           ch == 'C' || ch == 'D' ||
           ch == 'F' || ch == 'G' ||
           ch == 'J' || ch == 'K' ||
           ch == 'L' || ch == 'M' ||
           ch == 'N' || ch == 'P' ||
           ch == 'Q' || ch == 'S' ||
           ch == 'T' || ch == 'V' ||
           ch == 'X' || ch == 'Z' ||
           ch == 'H' || ch == 'R' ||
           ch == 'W' || ch == 'Y'){
            consonants++;           // Increase consonant variable for each found consonant in the given string.
        } 
    }

    return consonants; 

}

int main(){

    char str[100];

    while(1){
     fgets(str, sizeof(str), stdin);  // Get string from keyboard.

     if (str[0] != 10){ // 10 means ENTER in ASCII table.
        printf("Number of consonants=%d\n", count_consonants(str)); 
     }
     else{ // If ENTER clicked break.
        break;
     }
    }
}
