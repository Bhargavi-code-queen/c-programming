#include <stdio.h>

int main() {
    // Declaring variables
    int arr1[10];
    int i, n, sum = 0;
    int *pt;

    // Displaying the purpose of the program
    printf("\n\n Pointer : Sum of all elements in an array :\n");
    printf("------------------------------------------------\n");

    // Inputting the number of elements for the array (maximum 10)
    printf(" Input the number of elements to store in the array (max 10) : ");
    scanf("%d", &n);

    // Inputting elements into the array
    printf(" Input %d number of elements in the array : \n", n);
    for (i = 0; i < n; i++) {
        printf(" element - %d : ", i + 1);
        scanf("%d", &arr1[i]);
    }

    pt = arr1; // pt stores the base address of array arr1

    // Calculating the sum of array elements using pointer
    for (i = 0; i < n; i++) {
        sum = sum + *pt; // Adding the value pointed by pt to the sum
        pt++; // Moving the pointer to the next element of the array
    }

    // Displaying the sum of the array elements
    printf(" The sum of array is : %d\n\n", sum);
}
