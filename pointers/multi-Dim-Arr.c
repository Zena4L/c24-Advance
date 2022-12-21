#include "main.h"
#include <stdio.h>

/*
* Description - Passing Multidimensional Arrays to Functions
*/

int multiDim(int *list, int max1, int max2){
    int i,j,sum=0;

    for(i=0;i<max1;i++){
        for (j=0;j<max2;j++){
            sum += *(list + i*max2 + j);
        }
    }
    return sum;
}
int main(void)
{
    int multi_list[4][4] = {{1,2,3,4},{5,6,7,8}};
    int *ptr_multi;
    ptr_multi = &multi_list[0][0];

    printf("Results returned by multiDim() = %d\n", multiDim(ptr_multi,4,4));

    /*Assigning address*/
    printf()

    return 0;
}