/*
CH-230-A
a7.p5.[c] 
Farhad Suleymanzade 
fsuleymanz@jacobs-university.de
*/


#include <stdlib.h>
#include <stdio.h>


// Function to get sort in ascending order.
int ascending(const void *va ,const void * vb) {

    const int * a = (const int *) va ;
    const int * b = (const int *) vb ;
    if (* a < *b ) {
        return -1;
    }
    else if (* a > * b) {
        return 1;
    }
    else{
        return 0;
    }
}

// Function to get in descending order.
int descending(const void *va ,const void * vb) {

    const int * a = (const int *) va ;
    const int * b = (const int *) vb ;
    if (* a < *b ){
        return 1;
    } 
    else if (* a > * b){
         return -1;
    }
    else{
        return 0;
    }
}

int main(){

    int num=0;
    int *arr=NULL;
    char ch;
    scanf("%d",&num);
    arr=(int*)malloc(sizeof(int)*num);
    if (arr == NULL){
        exit(1);
    }
    for (int i=0;i < num; i++){

        scanf("%d",&arr[i]);
    }
    getchar();
    do{
        scanf("%c",&ch);
        getchar();
        switch (ch){
        case 'a':
            qsort (arr, num, sizeof(arr[0]),ascending);
            for(int i=0;i<num;i++){

                printf("%d ",arr[i]);
            }
            printf("\n");
            break;
        case 'd':
            qsort (arr, num, sizeof(arr[0]),descending);
            for(int i=0;i<num;i++){

                printf("%d ",arr[i]);
            }
            printf("\n");
            break;
        default:
            ch='e';
            break;
        }
    } 
    while (ch!='e');
    return 0;
}