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
      case 4:
      std::cout << "Programmer's Top Picks: " << std::endl;
      std::cout << "Pulp Fiction" << std::endl;
      std::cout << "Django Unchained" << std::endl;
      std::cout << "Star Wars, the OG trilogy" << std::endl;
      std::cout << "Lord of the Rings" << std::endl;
      std::cout << "Toy Story" << std::endl;
      std::cout << "Fight Club" << std::endl;
      std::cout << "The Dark Knight" << std::endl;
      std::cout << "The Matrix" << std::endl;
      std::cout << "Hotel Rwanda" << std::endl;
      break;
      case 5: //exits system entirely
      std::cout << "Thank you for using Movie Quiz" << std::endl;
      return 0;
    }
  }
}
return 0;
}


//Test 
