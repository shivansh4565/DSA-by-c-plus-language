#include<iostream>
using namespace std;
int main()
{
    int r ,h;
    cout<<"Enter the radius and height of the cylinder: ";
    cin>>r>>h;
    float volume = 3.14*r*r*h;
    cout<<"The volume of the cylinder is: "<<volume;
    return 0;
 
}