#include <stdio.h>

int main() {
    int a, b ;
    
        printf ("Enter the 2 numbers:\n");
        scanf ("%d %d", &a, &b);
        
        if(a>b)
        {
            printf ("%d = a is the greatest number\n", a);
            printf ("%d = b is the least number\n", b);
        }
        
        if(a<b)
         {
            printf ("%d = b is the greatest number\n", b);
            printf ("%d = a is the least number\n", a);
        }
       
        
    return 0;
}