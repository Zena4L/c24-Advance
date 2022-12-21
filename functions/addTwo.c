#include "main.h"
#include <stdio.h>
/*
* Description -  function protoype is contained in main.h
*/
int addTwo(int x, int y)
{
    return(x + y);
}

int main(void)
{
    printf("Enter two numbers to add\n");
    int x,y;
    scanf("%d%d",&x,&y);
    printf("The return value of %d + %d = %d\n",x,y,addTwo(x,y));
    return 0;
}