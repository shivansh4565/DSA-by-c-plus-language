#include <iostream>
using namespace std;
int main ()
{
    // max in a 2D array
    int m,n;
    int arr[m][n];
    cout << "Enter the number of rows and columns: ";
    cin >> m >> n;
    
    // input array elements
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    
    // find max element
    int max = arr[0][0];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
    
    cout << "Maximum element in the array is: " << max << endl;
    
    return 0;
    
    
    
    }

