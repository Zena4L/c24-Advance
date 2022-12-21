#include "main.h"
#include <stdio.h>

/*
* Description -  add three numbers using arrays
*/

int addThree(int list[]){
    int i;
    int result = 0;

    for (i=0;i<3;i++){
        result += list[i];
    }
    return result;
}
int main()
{
    int sum, list[3];
    printf("Enter three integers separated by spaces:\n");
    scanf("%d%d%d", &list[0], &list[1], &list[2]);
    sum = addThree(list);
    printf("The sum of the three integers is: %d\n", sum);
    return 0;
}