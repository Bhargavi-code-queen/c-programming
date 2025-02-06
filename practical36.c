#include <stdio.h>
#include <string.h>

// Function to sort the array of names in ascending order
int bubbleSortNames(char arr[][50], int n) {
    int i, j;
    char temp[50];

    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            // Compare two adjacent names
            if (strcmp(arr[j], arr[j+1]) > 0) {
                // Swap the names if they are in the wrong order
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j+1]);
                strcpy(arr[j+1], temp);
            }
        }
    }

    return 1;  // Return 1 to indicate sorting is complete
}

// Function to print the array of names
int printArray(char arr[][50], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }
    return 1;  // Return 1 to indicate printing is complete
}

int main() {
    int n;

    // Input the number of names
    printf("Enter the number of names: ");
    scanf("%d", &n);

    // Declare a 2D array to store names
    char names[n][50];

    // Input the names
    printf("Enter the names:\n");
    for (int i = 0; i < n; i++) {
        scanf("%s", names[i]);
    }

    // Perform sorting
    if (bubbleSortNames(names, n) == 1) {
        // Output the sorted names
        printf("\nSorted names in ascending order:\n");
        printArray(names, n);
    }

    return 0;
}
