/*
 product of an array 



 #include<iostream>
using namespace std;
int main()
{
      int product=1;
    int arr[6]={2,3,4,5,6,7};
int n=6;
cout<<"Size of array is "<<n<<endl;
for (int i = 0; i < n; i++)
{
  
    product=product*arr[i];

}
        cout<<"product  of array is "<<product<<endl;
}


*/
 #include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    // min elemnet
    int min = arr[0];
    for (int i = 1; i < 5; i++)
    {
        if (arr[i] < min)
        min = arr[i];
    }
    cout<<"minimum element is "<<min<<endl;
 
}