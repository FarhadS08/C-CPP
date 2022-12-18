/*
CH-230-A
a7.p4.[c] 
Farhad Suleymanzade 
fsuleymanz@jacobs-university.de
*/


#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// Function to make string upper case.
void upper_case(char str[100]){

    for (int i=0; i < strlen(str); i++){

        if (str[i]<=122 && str[i]>=97){

            printf("%c",toupper(str[i]));
        }
        else{

            printf("%c",str[i]);
        }
        
    }
    
}

// Function to make string lover case.
void lower_case(char str[100]){

    for (int i=0; i < strlen(str); i++){

        if (str[i]<=90 && str[i]>=65){

            printf("%c",tolower(str[i]));
        }
        else{

            printf("%c",str[i]);
        }
        
    }
    
}


// Function to print lover to upper and upper to lower.
void upper_lower_case(char str[100]){

    for (int i=0; i < strlen(str); i++){

        if (str[i]<=122 && str[i]>=97){

            printf("%c",toupper(str[i]));
        }
        else if (str[i]<=90 && str[i]>=65){

            printf("%c",tolower(str[i]));
        }
        else{

            printf("%c",str[i]);
        }
    }  
}


// Function to quit program.
void quit(char * str){

    exit(1);
}


int main(){

    char str[100];
    int number=0;
    void (*ptrfunc[4])(char*);
    fgets(str,sizeof(str),stdin);
    ptrfunc[0]=upper_case;
    ptrfunc[1]=lower_case;
    ptrfunc[2]=upper_lower_case;
    ptrfunc[3]=quit;
    while (1){

        scanf("%d",&number);
        (ptrfunc[number-1])(str);
    } 
    return 0;
}