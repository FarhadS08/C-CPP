/*
CH-230-A
a5_p1.[c]
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/
#include <stdio.h>

int main()
{
   int n, k;   //Declare variables.
   char c;     
   int i;
   

   
 
   scanf("%d", &n);                              // Get length for triangle.
   
   getchar();
   
  
   scanf("%c", &c);                   // Get character from keyboard.
                                    
   
      for (i = n; i >=  1; --i){  // From given variable decrease by 1.

       for (k=1; k <= i ;++k){ // Print char from 1 to given i.

           printf("%c", c); // Print
           
       }

       printf("\n");
   }
   
   

    return 0;
}
