#include <iostream>
#include <vector>
using namespace std;

void combination(vector<int> v, int arr[], int n, int target) {
    // If the target is met, print the current combination
    if (target == 0) {
        for (int i = 0; i < v.size(); i++) {
            cout << v[i] << " ";
        }
        cout << endl;
        return; // Important to return after printing a combination
    }
    
    // If the target becomes negative, return
    if (target < 0) {
        return;
    }

    // Loop through the array elements
    for (int i = 0; i < n; i++) {
        v.push_back(arr[i]); // Add the current element to the combination
        combination(v, arr, n, target - arr[i]); // Recursive call
        v.pop_back(); // Remove the last added element
    }
}

int main() {
    int arr[] = {2, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    vector<int> v; // Vector to store the current combination
    combination(v, arr, n, 8); // Start the combination process
    return 0;
}
