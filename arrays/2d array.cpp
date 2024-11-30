#include<iostream>
using namespace std;
int main()
{
    // 2-D array
int m,n;
    cout << "Enter the number of rows: ";
    cin >> m;
    cout << "Enter the number of columns: ";
    cin >> n;
    
    int arr[m][n];
    
    // Loop to input elements of 2-D array
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Enter element at [" << i << "]" << "[" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    
    // Loop to print elements of 2-D array
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}