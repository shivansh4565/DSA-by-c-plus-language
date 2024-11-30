#include <iostream>
using namespace std;

int power (int a, int b)
{
    if(a==0)return 0;
    if(b==0)return 1;
  
    else
    {
       return  a*power(a,b-1);
    }
   
}
int main() {
std::cout << power(3,6) << std::endl;
    return 0;
}