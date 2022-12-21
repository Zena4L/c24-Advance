#include "main.h"
#include <stdio.h>

/*
*   description - Passing Pointers to Functions
*/
void Chprint(char *ch)
{
    printf("%s\n",ch);
}
int DataAdd(int *list, int max)
{
    int i,sum=0;

    for (i=0;i<max;i++)
        sum += list[i];
    return sum;
}

int main(void){
    char str[] = "it's a string";
    char *ptr_str;
    int list[5]={1,2,3,4,5};
    int *ptr_int;

    /*Assigning address to pointer*/
    ptr_str = str;
    Chprint(ptr_str);
    Chprint(str);

    /*Assigining address to pointer*/
    ptr_int = list;
    printf("The result of DataAdd() is = %d\n",DataAdd(ptr_int,5));
    printf("The result of DataAdd() is = %d\n",DataAdd(list,5));
    return 0;
}