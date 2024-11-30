#include <iostream>
using namespace std;

// Partition function to select pivot and partition the array
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

// Quick Select function to find the k-th smallest element
int quickSelect(int arr[], int low, int high, int k) {
    if (low <= high) {
        int pi = partition(arr, low, high);  // Partition the array
        
        // If the pivot position is the k-th smallest, return it
        if (pi == k - 1) {
            return arr[pi];
        }
        // If k is smaller, search in the left half
        else if (pi > k - 1) {
            return quickSelect(arr, low, pi - 1, k);
        }
        // If k is larger, search in the right half
        else {
            return quickSelect(arr, pi + 1, high, k);
        }
    }
    return -1;  // If the array is invalid
}

// Helper function to print the array (for testing purposes)
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {12, 3, 5, 7, 19, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;  // Example: Find the 4th smallest element

    cout << "Original array: ";
    printArray(arr, n);

    int result = quickSelect(arr, 0, n - 1, k);
    
    cout << "The " << k << "-th smallest element is: " << result << endl;

    return 0;
}
