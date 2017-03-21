#include "FinalProject.h"
#include <iostream>
#include <cstring>
#include <string>
#include <vector>
MovieChooser test;

//test change - Claire
int main()
{
  //This will be the menu used inside the first for loop
while(true) //this is used for creating new user
{
  std::cout<< "Here" << std::endl;
  bool logIn = true; //boolean to tell us if we are logged in
  while(logIn) //used for when user is inside log in page
  {
    int choice = menu();
    switch(choice)
    {
      case 1: //quiz section
      std::cout << "Movie Quiz" << std::endl;
      break;
      case 2: //Prints quiz
      std::cout << "Printing Quiz results" << std::endl;
      break;
      case 3: //logs out of system
      std::cout << "Logged Out" << std::endl;
      logIn = false;
      break;
      case 4: //exits system entirely
      std::cout << "Thank you for using Movie Quiz" << std::endl;
      return 0;
    }
  }
}
return 0;
}


//Test 
