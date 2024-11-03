/*Code for calculating perimeter of rectangle*/
#include<stdio.h>

int main()
{
    float length,width,perimeter;
    printf("Enter length = ");
    scanf("%f",&length);
 
    printf("Enter width = ");
    scanf("%f",&width);

    /*Calculating perimeter of rectangle*/
    perimeter = 2*length*width;

    /*printing perimeter of rectangle */
    printf("perimeter is = %f/n",perimeter);
    return 0;
}