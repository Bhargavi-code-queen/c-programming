#include <stdio.h>

int main(){
    int length,breath,Area;
    printf("Enter the length =");
    scanf("%d",&length);

    printf("Enter the breath = ");
    scanf("%d",&breath);

   Area = length* breath;
   printf("Area of Rectangle is = %d\n", Area); 
    return 0;
}