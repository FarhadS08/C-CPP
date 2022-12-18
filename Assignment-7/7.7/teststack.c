/*
CH-230-A
a7.p7.[c] 
Farhad Suleymanzade 
fsuleymanz@jacobs-university.de
*/


#include <stdio.h>
#include <stdlib.h>
#include "stack.h" 


int main()
{
    char ch;
    int num;
    struct stack *list;
    list = (struct stack *)malloc(sizeof(struct stack));
    
    do
    {
        scanf("%c",&ch);
        switch (ch)
        {
        case 's':
            scanf("%d",&num);
            getchar();
            push(list,num);
            break;
        case 'p':
            pop(list);
            break;
        case 'e':
            empty(list);
            break;
        case 'q':
            printf("Quit\n");
            break;
        }
    } while (ch !='q');
    return 0;
}