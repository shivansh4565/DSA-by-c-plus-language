#include<iostream>
using namespace std;
void print(int n ){
 
 
    int i=1;
while (i<=n)
{
    
    cout << i << " ";
    i++;

}
}
int main()
{
int n ;
std::cout << "enter for number :" << std::endl;
cin>>n;
    print(n);
}
