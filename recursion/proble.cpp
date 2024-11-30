#include <iostream>
using namespace std;int cnt = 0;
void my_recursive_function(string s, int i)
{
if(s[i] == '\0')
return;
if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
cnt++;
my_recursive_function(s,i+1);
}
int main()
{ my_recursive_function("thisisrecursion",0); printf("%d",cnt);
return 0;
}