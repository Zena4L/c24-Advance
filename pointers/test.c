#include <stdio.h>

int main(void)
{
    int array[3] = {1,2,3};
    int *ptr_array = array;

    printf("first element : %d\n",array[0]);
    printf("first element address : %p\n",&array[0]);
    printf("first element address of pointer : %p\n",ptr_array);
    printf("first element : %d\n",array[1]);
    printf("second element address  : %p\n",&array[1]);
    printf("second element address pointer : %p\n",ptr_array + 1);


    return 0;
}