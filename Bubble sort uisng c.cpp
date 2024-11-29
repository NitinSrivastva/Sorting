#include <stdio.h>

// Function to implement Bubble Sort
void bubbleSort(int arr[], int n) {
    // Traverse through all array elements
    for (int i = 0; i < n-1; i++) {
        // Last i elements are already sorted
        for (int j = 0; j < n-i-1; j++) {
            // Swap if the element found is greater than the next element
            if (arr[j] > arr[j+1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};  // Example array
    int n = sizeof(arr) / sizeof(arr[0]);  // Get the number of elements

    printf("Original Array:\n");
    printArray(arr, n);

    bubbleSort(arr, n);  // Call the bubbleSort function to sort the array

    printf("Sorted Array:\n");
    printArray(arr, n);  // Print the sorted array

    return 0;
}
