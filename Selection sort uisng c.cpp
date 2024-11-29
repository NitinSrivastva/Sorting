#include <stdio.h>

// Function to implement Selection Sort
void selectionSort(int arr[], int n) {
    // Traverse through all array elements
    for (int i = 0; i < n-1; i++) {
        // Find the minimum element in the unsorted part of the array
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
       
        // Swap the found minimum element with the element at index i
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
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
    int arr[] = {64, 25, 12, 22, 11};  // Example array
    int n = sizeof(arr) / sizeof(arr[0]);  // Get the number of elements

    printf("Original Array:\n");
    printArray(arr, n);

    selectionSort(arr, n);  // Call the selectionSort function to sort the array

    printf("Sorted Array:\n");
    printArray(arr, n);  // Print the sorted array

    return 0;
}
