//   check  divisibility by 3&5 not by 15
#include <iostream>
using namespace std;

int main() 
{
    std::cout << "enter : " << std::endl;
    int n ;
    cin>>n;
    if (n%3==0 && n%5==0 && n%15!=0)
    {
        std::cout << "divided by 3&5 not by 15" << std::endl;
    }
    else
    {
        cout<<"error bc!!";
    }
}