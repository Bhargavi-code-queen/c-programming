#include <stdio.h>

int bubbleSort(int arr[], int n) {
    int i, j, temp;
    int swapped = 0; // Flag to check if any swap happens

    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap the elements
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = 1; // Indicate that a swap occurred
            }
        }
        if (swapped == 0) {
            break;  // If no elements were swapped, the array is already sorted
        }
    }

    return 1;  // Return 1 to indicate sorting completed
}

int printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 1;  // Return 1 to indicate printing is complete
}

int main() {
    int n;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input the elements
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Perform bubble sort
    if (bubbleSort(arr, n) == 1) {
        // Output the sorted array
        printf("Sorted array: ");
        printArray(arr, n);
    }

    return 0;
}
