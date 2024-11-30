#include<iostream>
using namespace std;
int product(int x, int y)
{
    std::cout << "the product is :" << std::endl;
    return x*y;
}

int main()
{

    cout<<product(4,4);
}