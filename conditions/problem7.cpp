// pass or fail according to the students marks
#include <iostream>
using namespace std;
int main() {
    int marks;
    std::cout << "enter marks :" << std::endl;
    cin>>marks;
     if(marks >= 90)
    {          
          std::cout << " You got  grade A+" << std::endl;

    }
    else if (marks>=80)
    {
                std::cout << "You got  grade A" << std::endl;
    }
    else if (marks>=70)
    {
                std::cout << "You got  grade B" << std::endl;
    }
    else if (marks>=60)
    {
                std::cout << "You got  grade C" << std::endl;
    }
    else if (marks>=50)
    {
                std::cout << "You got  grade D" << std::endl;
    }
    else if (marks>=40)
    {
                std::cout << "You got  grade E" << std::endl;
    }
    else
    {
                std::cout << "fails" << std::endl;
    }
    return 0;

}