#define FinalProject
#include <iostream>
#include <cstring>
#include <string>
using std::string;
//using namespace std;
class MovieChooser
{
public:
  void menu();
};

int menu()
{
  int userInput = 0;
  std::cout<< "1. Take Quiz" << std::endl;
  std::cout << "2. Print Movie List" << std::endl;
  std::cout << "3. Log out" << std::endl;
  std::cout << "4. Programmers Top Picks" << std::endl;
  std::cout << "5. Exit System" << std::endl;
  std::cin >> userInput;
  return userInput;
}
