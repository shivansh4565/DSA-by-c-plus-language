#include <iostream>
using namespace std;
int main()
{
    // matrix mutliplication

    //matrix 1 & its input taken by user
    int m1, n1, m2, n2, i, j, k;
    cout << "Enter the number of rows and columns of matrix 1: ";
    cin >> m1 >> n1;
    int a[m1][n1];
    cout << "Enter the elements of matrix 1:" << endl;
    for (i = 0; i < m1; i++)
        for (j = 0; j < n1; j++)
            cin >> a[i][j];
        
    //matrix 2 & its input taken by user
    cout << "Enter the number of rows and columns of matrix 2: ";
    cin >> m2 >> n2;
    int b[m2][n2];
    cout << "Enter the elements of matrix 2:" << endl;
    for (i = 0; i < m2; i++)
        for (j = 0; j < n2; j++)
            cin >> b[i][j];
        
    // checking if matrix multiplication is possible
    if (n1!= m2)
    {
        cout << "Matrix multiplication is not possible!";
        return 0;
    }
    
    // matrix multiplication
    int c[m1][n2];
    for (i = 0; i < m1; i++)
        for (j = 0; j < n2; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < n1; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
        
    // printing the resultant matrix
    cout << "Resultant Matrix:" << endl;
    for (i = 0; i < m1; i++)
    {
        for (j = 0; j < n2; j++)
            cout << c[i][j] << " ";
        cout << endl;
    }
    return 0;
    
}