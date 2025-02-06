#include <stdio.h>

void printPattern(int n) {
    int num = 1;
    for (int i = 1; i <= n; i++) {
        // Printing left side numbers
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        
        // Printing stars
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        
        // Printing right side numbers
        for (int j = num; j < num + i; j++) {
            printf("%d ", j);
        }
        num += i;
        
        // Printing repeating row number
        for (int j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        
        // Printing trailing stars
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("*\n"); // Printing the last single star
}

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printPattern(n);
    return 0;
}
