/*
#include <bits/stdc++.h>
using namespace std;
int main( ) {
for (int i = 1; i <= 500; i++) {
int x = 0, temp = i;
while (temp > 0) {
int m = temp % 10;
x += m * m * m;
temp /= 10;
}
if (i == x) {
cout << i << endl;
}
}
}
*/
// power of numbers
#include <iostream>
using namespace std;
int main ()
{
int a,b;
std::cout << "Enter the number : " << std::endl;
cin>>a;
std::cout << "Enter the power of the number : " << std::endl;
cin>>b;

int result = 1;

for (int i = 0; i < b; i++) {
    result *= a;
}
std::cout << "the result is "<< result << std::endl;
}