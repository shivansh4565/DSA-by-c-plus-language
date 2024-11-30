//checking loss and profit 
#include<iostream>
using namespace std;
int main ()
{
    int cp,sp,p;
    cout<<"Enter the cost price: ";
    cin>>cp;
    std::cout << "enter selling price";
    cin>>sp;
    if(sp==cp){
        cout<<"no profit or loss";
    }
    if(sp>cp)
    {
        cout<<"profit made\n";
          p=sp-cp;
    if(p>0)
    {
        cout<<"profit ";
    }
    if(p<0)
    {
        cout<<"loss ";

    }
        
    }
  
    else{
        cout<<"loss made";
    }
    return 0;
}