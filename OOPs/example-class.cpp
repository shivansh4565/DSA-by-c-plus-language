#include <iostream>
#include <string>
using namespace std;
    class player{
        public:
        int score;
        int age;
 
    };

       class players{
        private:
        int score;
        int age;
 
    };
int main()
{
    //player 1
player amit;
amit.score=90;
amit.age=28;
std::cout << amit.score << std::endl;
std::cout << amit.age << std::endl;

//player 2
players ansh;
ansh.score=90;
ansh.age=99;
std::cout << ansh.score << std::endl;
std::cout << ansh.age << std::endl;
//player 3
player atul;
atul.score=99;
atul.age=28;
std::cout << atul.score << std::endl;
std::cout << atul.age << std::endl;
}