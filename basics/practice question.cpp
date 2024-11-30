#include <iostream>
using namespace std;
int main()
{
    int x=10;
    int y=++x;
    y+=x--;
    std::cout <<y << std::endl;
}
