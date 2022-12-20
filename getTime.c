#include "main.h"
#include <stdio.h>
#include <time.h>

void getDateTime(void)
{
    time_t now();
    printf("Within getDateTime()\n");
    time(&now);

    printf("Current date and time is : %s\n",asctime(localtime(&now)));
}

int main()
{
    int myTime = time_t now();
    printf("Before the getDateTime() function is called.\n");
    getDateTime();
    printf("After the getDateTime() function is called.\n");
    return 0;
    
}