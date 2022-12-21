#include <stdio.h>

/*
* Description - Accessing Arrays by Using Pointers
*/
int main(void)
{
    char str[]="it's a string";
    char *ptr_str;
    int list[] = {1,2,3};
    int *ptr_list;

    /* Accessing char pointers*/
    ptr_str = str;
    printf("Before the change, str contains %s\n", str);
    printf("Before the change, str[5] contains %c\n", str[5]);

    *(ptr_str + 5) = 'A';
    printf("After the change, str contains %s\n", str);
    printf("After the change, str[5] contains %c\n", str[5]);

    /*Accessing int pointers*/
    ptr_list = list;
    printf("Before the change, list[5] contains %d\n", list[2]);

    *(ptr_list + 2) = 7;
    printf("Before the change, list[5] contains %d\n", list[2]);


    return 0;
}