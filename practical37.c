#include <stdio.h>

// Function to perform linear search (non-recursive)
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;  // Return the index where the key is found
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

    // Input the elements
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the key to search for
    printf("Enter the key value to search: ");
    scanf("%d", &key);

    // Perform linear search
    result = linearSearch(arr, n, key);

    // Output the result
    if (result != -1) {
        printf("Key %d found at index %d.\n", key, result);
    } else {
        printf("Key %d not found in the array.\n", key);
    }

    return 0;
}

