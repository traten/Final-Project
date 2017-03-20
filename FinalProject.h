#define FinalProject
#include <iostream>
#include <cstring>
#include <string>
#include <vector>
using std::string;
//using namespace std;
class MovieChooser
{
public:
  void menu();
  void userCreateLogIn();
};
string userName = " ";
string password = " ";
int countUser = 0;
int countPas = 0;
//std::string *password; // pointer to password array
//std::string *userName; // pointer to username array
//string userName = new (nothrow) string[countUser]; //array to store usernames, may need to change to a linked list
//string password = new (nothrow) string[countPas]; //array to store passwords, may need to change to a linked list
std::vector<string> password;
std::vector<string> userName;

void userCreateLogIn() //usernames linked with passwords
{
  std::cout <<"Please type in a username: " << std::endl;
  std::cin >> userName;
  countUser++;
  userName[countUser] = userName; //puts username into an array
  std::cout << "Please type in a password: " << std::endl;
  std::cin >> password;
  countPas++;
  password[countPas] = password; //puts password into an array
}


int menu()
{
  int userInput = 0;
  std::cout<< "1. Take Quiz" << std::endl;
  std::cout << "2. Print Movie List" << std::endl;
  std::cout << "3. Log out" << std::endl;
  std::cin >> userInput;
  return userInput;
}
