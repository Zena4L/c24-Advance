#include "main.h"
#include <stdio.h>
/*
* description - Using an Array of Pointers to Character Strings
*/
/* This take a pointer of pointers*/
void Strprint1(char **str1,int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%s\n",str1[i]);
}
void Strprint2(char *str2)
{
    printf("%s\n",str2);
}

int main(void)
{
    char *str[4] = {
        "There’s music in the sighing of a reed;",
        "There’s music in the gushing of a rill;",
        "There’s music in all things if men had ears;",
        "There earth is but an echo of the spheres.\n"
    };
    int i,size =4;
    Strprint1(str,4);
    for (i=0;i<size;i++)
        Strprint2(str[i]);
    return 0;
}