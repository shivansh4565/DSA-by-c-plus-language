#include<iostream>
using namespace std;
int main()
{
    char ch;
    int a,b;
    std::cout << "Enter the first nums:" << std::endl;
cin>>a;
std::cout << "ENter the second num" << std::endl;
cin>>b;

std::cout << "enter the operator:" << std::endl;
cin>>ch;

switch (ch) {
    case '+':
        std::cout << "Addition of " << a << " and " << b << " is: " << a + b << std::endl;
        break;
    case '-':
        std::cout << "Subtraction of " << a << " and " << b << " is: " << a - b << std::endl;
        break;
    case '*':
        std::cout << "Multiplication of " << a << " and " << b << " is: " << a * b << std::endl;
        break;
            case '%':
        std::cout << "Modulus of " << a << " and " << b << " is: " << a % b << std::endl;
        break;
    case '/':
        if (b != 0)
            std::cout << "Division of " << a << " and " << b << " is: " << a / b << std::endl;
        else
            std::cout << "Error! Division by zero." << std::endl;
        break;
    default:
        std::cout << "Error! Invalid operator." << std::endl;
        break;
}
}