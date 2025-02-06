#include <stdio.h>

// Function to perform binary search (non-recursive)
int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1, mid;

    while (low <= high) {
        mid = low + (high - low) / 2;

        // Check if key is present at mid
        if (arr[mid] == key) {
            return mid;  // Return the index where the key is found
        }

        // If key is greater, ignore the left half
        if (arr[mid] < key) {
            low = mid + 1;
        }
        // If key is smaller, ignore the right half
        else {
            high = mid - 1;
        }
    }

    return -1;  // Return -1 if the key is not found
}

int main() {
    int n, key, result;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input the sorted elements
    printf("Enter the sorted elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the key to search for
    printf("Enter the key value to search: ");
    scanf("%d", &key);

    // Perform binary search
    result = binarySearch(arr, n, key);

    // Output the result
    if (result != -1) {
        printf("Key %d found at index %d.\n", key, result);
    } else {
        printf("Key %d not found in the array.\n", key);
    }

    return 0;
}

