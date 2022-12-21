#include <stdio.h>
/*
* Description -  Pointer substraction
*/
int main(void)
{
    int *ptr_int1,*ptr_int2;

    printf("Position of pointer int1 = %p\n",ptr_int1);
    ptr_int2 = ptr_int1 + 5;
    printf("Position of Pointer int2 is ptr_int1 + 5 = %p\n",ptr_int2);
    printf("Substaction of ptr_int2 - ptr_int1 = %p\n",ptr_int2 - ptr_int1);

    ptr_int2 = ptr_int1 - 5;
    printf("Position of pointeer int2 is = %p",ptr_int2);
    return 0;
}