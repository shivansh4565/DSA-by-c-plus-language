//   check alphabet or not
#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    // Check if the character is an alphabet
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        cout << ch << " is an alphabet." << endl;
    } else {
        cout << ch << " is not an alphabet." << endl;
    }

    return 0;
}
