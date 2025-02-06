#include <stdio.h>

int insertionSortAscending(int arr[], int n) {
    int i, key, j;

    for (i = 1; i < n; i++) {
        key = arr[i];  // Store the current element to be inserted
        j = i - 1;

        // Move elements of arr[0..i-1] that are greater than key to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        // Place the key in its correct position
        arr[j + 1] = key;
    }

    return 1;  // Return 1 to indicate the sorting is complete
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

    // Perform insertion sort in ascending order
    if (insertionSortAscending(arr, n) == 1) {
        // Output the sorted array
        printf("Sorted array in ascending order: ");
        printArray(arr, n);
    }

    return 0;
}
