#include<stdio.h>
//Function to perform insertion Sort
void insertionSort(int arr[] , int n){
	for(int i=1;i<n;i++){
		int key = arr[i]; // Current element to be inserted
		int j = i-1;
		
		//Move elements of arr[0...i-1] that are greater than key
		// one position ahead of their current position
		while(j>=0 && arr[j] > key){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key; //Insert the key into its correct position
	}
}

// Function to print the array
void printarray(int arr[] , int n){
	for(int i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	printf("\n");
}
int main() {
	int arr[] = {12,11,13,5,6};
	int n = sizeof(arr)/sizeof(arr[0]);
	printf("original Array: \n");
	printarray(arr,n);
	insertionSort(arr,n);
	printf("sorted array: \n");
	printarray(arr,n);
	return 0;
}
