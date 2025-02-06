#include <stdio.h>

int selectionSortDescending(int arr[], int n) {
    int i, j, maxIdx, temp;

    for (i = 0; i < n - 1; i++) {
        maxIdx = i;  // Assume the current index has the maximum value

        // Find the index of the maximum element in the remaining unsorted array
        for (j = i + 1; j < n; j++) {
            if (arr[j] > arr[maxIdx]) {
                maxIdx = j;  // Update maxIdx to the new maximum element
            }
        }

        // Swap the found maximum element with the element at index i
        if (maxIdx != i) {
            temp = arr[i];
            arr[i] = arr[maxIdx];
            arr[maxIdx] = temp;
        }
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

    // Perform selection sort in descending order
    if (selectionSortDescending(arr, n) == 1) {
        // Output the sorted array
        printf("Sorted array in descending order: ");
        printArray(arr, n);
    }

    return 0;
}
