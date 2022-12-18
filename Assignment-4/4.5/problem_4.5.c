/*
CH-230-A
a4 p5.[c]
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/


#include <stdio.h>
#include <string.h>


int count_consonants(char str[]){

    int consonants = 0;
    int i;
    char ch;

    char *ptr;
    ptr = &ch;      //Assign pointer to ch variable.


    for(i = 0; i <= strlen(str) ; i++){ //Iterate from 0 to the lenght of the given string. 
        *ptr = str[i]; 

        if(*ptr == 'b' || *ptr  == 'c' || // Check if there are consonant character in the pointer content.
           *ptr == 'd' || *ptr  == 'f' ||
           *ptr == 'g' || *ptr == 'j' ||
           *ptr == 'k' || *ptr == 'l' ||
           *ptr == 'm' || *ptr == 'n' ||
           *ptr == 'p' || *ptr == 'q' ||
           *ptr == 's' || *ptr == 't' ||
           *ptr == 'v' || *ptr == 'x' ||
           *ptr == 'z' || *ptr == 'h' ||
           *ptr == 'r' || *ptr == 'w' || 
           *ptr == 'y' || *ptr == 'B' ||
           *ptr == 'C' || *ptr == 'D' ||
           *ptr == 'F' || *ptr == 'G' ||
           *ptr == 'J' || *ptr == 'K' ||
           *ptr == 'L' || *ptr == 'M' ||
           *ptr == 'N' || *ptr == 'P' ||
           *ptr == 'Q' || *ptr == 'S' ||
           *ptr == 'T' || *ptr == 'V' ||
           *ptr == 'X' || *ptr == 'Z' ||
           *ptr == 'H' || *ptr == 'R' ||
           *ptr == 'W' || *ptr == 'Y'){
            consonants++;           // Increase consonant variable for each found consonant in the pointer content.
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
     }else{
      break;
     }


    }

}    
