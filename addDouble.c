#include "main.h"
#include <stdio.h>
#include <stdarg.h>

double addDouble(double x,...)
{
    va_list arglist;
    int i;
    double result = 0.00;

    printf("the number of arguement is :%d\n",x);
    va_start(arglist,x);

    for(i=0;i<x;i++)
        result += va_arg(arglist,double);
        
    va_end (arglist);
    return result;
}