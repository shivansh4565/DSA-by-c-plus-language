#include <iostream>
using namespace std;

int main() {
    int numbers[5]; // Declare an array of 5 integers
    int *p;        // Declare a pointer to an integer
    p = numbers;   // Point p to the start of the array

    *p = 10;      // Set the first element to 10
    p++;          // Move the pointer to the next element
    *p = 20;      // Set the second element to 20

    p = &numbers[2]; // Point p to the third element
    *p = 30;      // Set the third element to 30

    p = numbers + 3; // Point p to the fourth element
    *p = 40;      // Set the fourth element to 40

    p = numbers;  // Point p back to the first element
    *(p + 4) = 50; // Set the fifth element to 50

    // Print the elements of the array
    for (int n = 0; n < 5; n++) {
        cout << numbers[n] << ",";
    }
    return 0;
}
