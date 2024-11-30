#include <iostream>
using namespace std;
int main()
{
    int n,r;
    std::cout << "Enter for rows :" << std::endl;
    cin>>n;
    std::cout << "Enter for columns" << std::endl;
    cin>>r;
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < r; i++)
        {
        std::cout << "**";
            
        }
        std::cout<< std::endl;
    }
}