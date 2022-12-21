#include <stdio.h>

/*
* Description - Moving Pointers of Different Data Types
*/
int main()
{
    char *ptr_char;
    int *ptr_int;
    double *ptr_double;

    /*char pointer*/
    printf("Char pointer current position is = %p\n",ptr_char);
    printf("Char pointer current position + 1 is = %p\n",ptr_char + 1);
    printf("Char pointer current position + 2 is = %p\n",ptr_char + 2);
    printf("Char pointer current position - 1 is = %p\n",ptr_char - 1);
    printf("Char pointer current position - 2 is = %p\n",ptr_char - 2);

    /*int pointer*/
    printf("int pointer current position is = %p\n",ptr_int);
    printf("int pointer current position + 1 is = %p\n",ptr_int + 1);
    printf("int pointer current position + 2 is = %p\n",ptr_int + 2);
    printf("int pointer current position - 1 is = %p\n",ptr_int - 1);
    printf("intpointer current position - 2 is = %p\n",ptr_int - 2);

    /*double pointer*/
    printf("double pointer current position is = %p\n",ptr_double);
    printf("doublepointer current position + 1 is = %p\n",ptr_double + 1);
    printf("double pointer current position + 2 is = %p\n",ptr_double + 2);
    printf("double pointer current position - 1 is = %p\n",ptr_double - 1);
    printf("double pointer current position - 2 is = %p\n",ptr_double - 2);
    return 0;
}