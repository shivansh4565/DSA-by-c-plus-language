#include <iostream>
using namespace std;
int main(){
    /*
    
    // store marks and roll numbers
    int marks[5], roll[5];
    
    // input marks and roll numbers
    for(int i=0; i<5; i++){
        cout << "Enter marks and roll number for student " << i+1 << ": ";
        cin >> marks[i] >> roll[i];
    }
    
    // print result
    for (size_t i = 0; i < length; i++)
    {
        
    }
    
    */
    // median of two sorted arrays
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    
    // merge two sorted arrays
    int merged[n1 + n2];
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }
    
    // remaining elements of arr1
    while (i < n1)
        merged[k++] = arr1[i++];
    
    // remaining elements of arr2
    while (j < n2)
        merged[k++] = arr2[j++];
    
    // find median
    int median;
    if (n1 % 2 == 0)
        median = (merged[n1 / 2 - 1] + merged[n1 / 2]) / 2;
    else
        median = merged[n1 / 2];
    
    cout
    return 0;
    
}