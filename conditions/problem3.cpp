//  checking which one is greater among 3 numbers
#include<iostream>
using namespace std;
int main()
{
int a,b,c;
std::cout << "Enter the three numbers :\n ";
cin>>a>>b>>c;
if (a>b && a>c)

{
    std::cout << "a is greater \n";
}
if (b>a &&b>c)
{
    std::cout << "b is greater\n";
}
if(c>a && c>b){
std::cout << "c is greater" << std::endl;
}
else{
    std::cout << "error all nums are equal" << std::endl;
}
}