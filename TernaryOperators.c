/*Program for Ternary Operators*/
#include<stdio.h>

int main()
{
    int a,b;
    a=8;
    b=7;
    (b>a)?printf("b is greater than a that is %d>%d",b,a)
    :printf("a is greater than b that is %d>%d",a,b);
    return 0;
}