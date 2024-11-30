// month name
#include <iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"enter month  number:";
    cin>>n;

    switch (n)
    {
        case 1 :
        std::cout << "january" << std::endl;
          break;
        case 2:
        std::cout << "februray" << std::endl;
          break;
        case 3:
        std::cout << "march" << std::endl;
          break;
        case 4:
        std::cout << "april" << std::endl;
          break;
        case 5:
        std::cout << "may" << std::endl;
          break;
        case 6:
        std::cout << "june" << std::endl;
          break;
        case 7:
        std::cout << "july" << std::endl;
          break;

                  case 8:
        std::cout << "august" << std::endl;
          break;
                  case 9:
        std::cout << "september" << std::endl;
          break;
        case 10:
        std::cout << "october" << std::endl;
          break;
                  case 11:
        std::cout << "november" << std::endl;
          break;
                  case 12:
        std::cout << "december" << std::endl;
          break;
    default:
    std::cout << "error!!!" << std::endl;
        break;
    }
}