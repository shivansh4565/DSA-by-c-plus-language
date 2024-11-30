// pass or fails depend upon  marks of a student
#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout << "Enter your marks: ";
    cin>>marks;
 /*
 
 
    if (marks>33)
    {
      std::cout << "passed" << std::endl;   
    }
    else
    {
        std::cout << "fails" << std::endl;
    }
*/
 marks>33 ? cout << "pass" : cout<<"fails";
 
}