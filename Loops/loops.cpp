#include<iostream>
using namespace std;
int main()
{/*
for 1 to 100 numbers


   int i ;
    for ( i = 0; i < 100; i++)
    {
        std::cout << i << std::endl;
      
    }



// for even numbers



for (int i = 0; i < 100; i++)
{
    if (i%2==0 )
    {
        std::cout << i << std::endl;
    }
    else
    {
        std::cout << "_" << std::endl;
    }
}




//table of 19


for (int i = 1; i < 10; i++)
{
    std::cout << 19*i << std::endl;
}

//AP


int n;
std::cout << "ENter : " << std::endl;
cin>>n;
for (int i = 1; i <= (2*n)-1; i+=2)
{
    std::cout << i << std::endl;
}



//reverse even nums


for (int i = 100; i >=0; i--)
{
    if (i%3==0)
    {
    std::cout << i << std::endl;
        
    }
}

//while loop


int i=0;
while (i<10)
{
    std::cout << "hii" << std::endl;
    i++;
}

'







//count digits
int n;
std::cout << "Enter the number : " << std::endl;
cin>>n;
int count=0;
while (n>0)
{
    n=n/10;
    count++;
}
std::cout << count << std::endl;





// add the digits of a number
int n ,count=0;

std::cout << "Enter the number : " << std::endl;
cin>>n;

while (n>0)
{
    count=count+(n%10);
    n=n/10;
}

std::cout << "Sum of digits : " << count << std::endl;







//reverse of an number
int n;
std::cout << "Enter : " << std::endl;
cin>>n;
int last=0, r=0;
while (n>0)
{
    r=r*10; 
    last=n%10;
    r=r+last;
    n=n/10;

}
std::cout << "the reverse is  "<< r << std::endl;





//sum of this series 1-2+3-4+5-6
int sum=0 ,n;
std::cout << "Enter for the terms : " << std::endl;
cin>>n;
for (int i = 0; i <= n; i++)
{
    if (i%2==0)
    {
       sum =-n/2;
    
    }
    std::cout << "the sum is :"<< sum << std::endl;
       break;






/// factorial of n 
int n;

std::cout << "Enter the number : " << std::endl;
cin>>n;

int fact=1;

for (int i = 1; i <= n; i++)
{
    fact=fact*i;

}
std::cout << "the factorial is "<< fact << std::endl;




// fibonacci series

int n;

std::cout << "Enter the number : " << std::endl;
cin>>n;

int a=0, b=1, c;

std::cout << a << " " << b << " ";

for (int i = 2; i < n; i++)
{
    c=a+b;
    std::cout << c << " ";
    a=b;
    b=c;


}
std::cout << c ;






    */


















}






