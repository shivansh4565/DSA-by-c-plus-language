#include <iostream>
using namespace std;
int main ()
{
    
    int i=3;
    int j=3;
    int mat1 [i][j];
    std::cout << "Enter for matrix1" << std::endl;
    for( i=0;i<3;i++){
        for( j=0; j<3;j++)
        {
            cout << "Enter element at position (" << i+1 << "," << j+1 << ") : ";
            cin >> mat1[i][j];
        }
    }
// display the matrix 1
    cout << "Matrix 1: " << endl;
    for(int i=0;i<3;i++){
        for(int j=0; j<3;j++)
        {
            cout << mat1[i][j] << " ";
        }
        cout << endl;
    }


//tranpose of matrix
    int temp;
    for(i=0;i<3;i++){
        for(j=i;j<3;j++)
        {
            temp = mat1[i][j];
            mat1[i][j] = mat1[j][i];
            mat1[j][i] = temp;
        }
    }
    // display the transpose
    cout << "Transpose of Matrix 1: " << endl;
    for(int i=0;i<3;i++){
        for(int j=0; j<3;j++)
        {
            cout << mat1[i][j] << " ";
        }
        cout << endl;
    }
      

}