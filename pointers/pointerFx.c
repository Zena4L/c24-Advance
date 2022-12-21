#include "main.h"
#include <stdio.h>

/*
*   description - Passing Pointers to Functions
*/
/*This function returns nothing*/
void Chprint(char *ch)
{
   printf("%s\n",ch);
}
/*Accepts list array and a number*/
int DataAdd(int *list, int max)
{
    int i,sum;
    for(i=0;i<max;i++)
        sum += list[i];
    return sum;
}

int main(void){
    char str[] = "it's a string!";
    char *ptr_str;
    int list[5]={1,2,3,4,5};
    int *ptr_list;

    /*Assiging address to pointer*/
    ptr_str = str;
    printf("%s\n",ptr_str);

    /*Assigning address to pointer*/
    ptr_list = list;
    printf("The result returned by DataAd() = %d\n", DataAdd(list,5));
    printf("The result returned by DataAd() = %d\n", DataAdd(ptr_list,5));
   
    return 0;
}