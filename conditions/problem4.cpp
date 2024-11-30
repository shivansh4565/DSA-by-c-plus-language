// divisibility by 3 & 5 
#include <iostream>
using namespace std;
int main()
{
 int n ;
  cout <<"enter :";
  cin>>n;
  if (n%3==0 && n%5==0)
  {
    std::cout << "divided by 3 &5 " << std::endl;
  }
  else
  {
   std::cout << "not divivded" << std::endl; 
  }
}