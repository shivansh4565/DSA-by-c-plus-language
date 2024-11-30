 #include <iostream>
 #include <vector>

 using namespace std;

void merge(vector<int>& a, vector<int>& b, vector<int>& result) {
    int i = 0, j = 0, k = 0;
    
    // Merge both arrays into result while both a and b have elements to compare
    while (i < a.size() && j < b.size()) {
     if (a[i] < b[j]) {
            result[k] = a[i];
            i++;
        } else {
            result[k] = b[j];
            j++;
        }
        k++;
    }

    // If elements remain in array a, append them
    while (i < a.size()) {
        result[k] = a[i];
        i++;
        k++;
    }

    // If elements remain in array b, append them
    while (j < b.size()) {
        result[k] = b[j];
        j++;
        k++;
    }
}

int main() {
    // First sorted array
    int arr[] = {1, 4, 6, 8, 9};
    int n1 = sizeof(arr) / sizeof(arr[0]);
    vector<int> a(arr, arr + n1);

    // Second sorted array
    int brr[] = {2, 3, 5, 7, 10};
 
 int n2 = sizeof(brr) / sizeof(brr[0]);
    vector<int> b(brr, brr + n2);

    // Vector to store the merged result
    vector<int> result(n1 + n2);

    // Call the merge function to merge a and b into result
    merge(a, b, result);

    // Output the merged result
    cout << "Merged array: ";
    for (int i = 0; i< result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
