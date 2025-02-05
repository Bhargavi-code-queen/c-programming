#include <stdio.h>


int main() {
    int n, i, arr[100];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    // Input array elements using pointers
    for (i = 0; i < n; i++) {
        scanf("%d", &(*(arr + i))); // Equivalent to &arr[i]
    }


    printf("Array elements are:\n");


    // Print array elements using pointers
    for (i = 0; i < n; i++) {
        printf("%d ", *(arr + i)); // Equivalent to arr[i]
    }

    return 0;
}