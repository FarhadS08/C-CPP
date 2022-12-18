/*
CH-230-A
a7.p7.[c] 
Farhad Suleymanzade 
fsuleymanz@jacobs-university.de
*/

// Generate stack of data.
struct stack{

    unsigned int count;
    int array[12];
};

void push(struct stack *list,int n);
void pop(struct stack *list);
void empty(struct stack *list);

void isEmpty(struct stack *list);