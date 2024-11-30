#include <iostream>
using namespace std;

// Partition function to place pivot in correct position
int partition(int arr[], int low, int high) {
    int pivot = arr[high];  // Choose the last element as pivot
    int i = low - 1;        // Index of smaller element

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;  // Increment index of smaller element
            swap(arr[i], arr[j]);  // Swap arr[i] and arr[j]
        }
    }
    swap(arr[i + 1], arr[high]);  // Swap arr[i + 1] and arr[high] (pivot)
    return i + 1;  // Return pivot index
}

// QuickSort function
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // Partition the array and get the pivot index
        int pi = partition(arr, low, high);
        
        // Recursively sort the elements before and after partition
        quickSort(arr, low, pi - 1);  // Elements before pivot
        quickSort(arr, pi + 1, high); // Elements after pivot
    }
}

// Helper function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {5,1,8,2,7,6,3,4};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
