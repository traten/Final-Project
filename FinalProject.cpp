#include "FinalProject1.h"
#include "quiz.h"
#include "trait.h"
#include "movieList.h"
#include <iostream>
#include <cstring>
#include <string>
MovieChooser test;

//bool exit = false; //For exiting within log in menu
int main()
{
  //Creates linked list to hold user objects
  linked_list<user>* userList = new linked_list<user>;
	
	/*if (fileExists("violent.txt"))
		movieList violent("violent.txt");
	
	if (fileExists("pansy.txt"))
		movieList pansy("pansy.txt");
	
	if (fileExists("adventure.txt"))
		movieList adventure("adventure.txt");
	
	if (fileExists("imaginative.txt"))
		movieList imaginative("imaginative.txt");
	
	if (fileExists("carefree.txt"))
		movieList carefree("carefree.txt");
	
	if (fileExists("pessimistic.txt"))
		movieList pessimistic("pessimistic.txt");
	
	if (fileExists("serious.txt"))
		movieList serious("serious.txt");
	
	if (fileExists("playitsafe.txt"))
		movieList playitsafe("playitsafe.txt");
	
	if (fileExists("thriller.txt"))
		movieList thriller("thriller.txt");
	
	if (fileExists("history.txt"))
		movieList history("history.txt");
	
	if (fileExists("unpredictable.txt"))
		movieList unpredictable("unpredictable.txt");
	
	if (fileExists("violent75.txt"))
		movieList violent75("violent75.txt");
	
	if (fileExists("adventure75.txt"))
		movieList adventure75("adventure75.txt");
	
	if (fileExists("imaginative75.txt"))
		movieList imaginative75("imaginative75.txt");
	
	if (fileExists("carefree75.txt"))
		movieList carefree75("carefree75.txt");
	
	if (fileExists("pessimistic75.txt"))
		movieList pessimistic75("pessimistic75.txt");
	
	if (fileExists("serious75.txt"))
		movieList serious75("serious75.txt");
	
	if (fileExists("playitsafe75.txt"))
		movieList playitsafe75("playitsafe75.txt");
	
	if (fileExists("thriller75.txt"))
		movieList thriller75("thriller75.txt");
	
	if (fileExists("history75.txt"))
		movieList history75("history75.txt");
	
	if (fileExists("unpredictable75.txt"))
		movieList unpredictable("unpredictable75.txt");
	
	if (fileExists("pansy75.txt"))
		movieList pansy75("pansy75.txt");*/
	
	
	movieList movieOne("thriller.txt");
	movieList movieTwo("violent.txt");
	movieList movieThree("carefree.txt");
	
	int oneSize = movieOne.getCapacity();
	int twoSize = movieTwo.getCapacity()
	int threeSize = movieThree.getCapacity()
	
	int tempOne;
	int tempTwo;
	int tempThree;
	
	int movies[] = new int[10];
	int moviesLocation = 0;
	
	for (int i = 0; i < oneSize; i++)
	{
		temp = movieOne.getMovie(i);
		
		for (int j = 0; j < twoSize; j++)
		{
			tempTwo = movieTwo.getMovie(j);
			
			if (temp == tempTwo)
			{
				for (int k = 0; k < threeSize; k++)
				{
					tempThree = movieThree.get(k);
					
					if (tempTwo = tempThree)
					{
						if (moviesLocation > 9}
						{
							movies[moviesLocation] = tempThree;
							moviesLocation++;
						}
					}
				}
					
			}
		}
	}
	
		
	

  //This will be the menu used inside the first for loop
while(true) //this is used for creating new user
{
	cout << "\nWelcome to Movie Quiz!\n" << endl;
	bool logIn = loginMenu(userList);

	cout << "\n~~~~MOVIE QUIZ~~~~" << endl;
	while(logIn) //used for when user is inside log in page
	{
	    	string userInput = menu();
		if(userInput.size()!= 1){ //If string is not only one character, print error.

			cout << "\nIncorrect input please input a number 1 through 5" << endl;
			continue;

		}

		char choice = userInput.at(0); //Gets character at index 0 


		switch(choice)
	   	{
		      case '1': //quiz section
				  std::cout << "Movie Quiz" << std::endl;
				  break;
		      case '2': //Prints quiz
				  std::cout << "Printing Quiz results" << std::endl;
				  break;
		      case '3': //Prints Programmers Top Picks
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
		      case '4': //logs out of system
				  std::cout << "Logged Out" << std::endl;
				  logIn = false;
				  traitlist.resetTraits();
				  break;
		      case '5': //exits system entirely
				  std::cout << "Thank you for using Movie Quiz" << std::endl;
				  return 0;
		      default: 	//If its not 1-5		
				  std::cout << "\nIncorrect input: Please input a number 1 through 3" << std::endl;
				  break;

	  	     }
	 }
}
return 0;
}

//user Class Definitions

user::user(string username, string password){
	this->username = username;
	this->password = password;

}

string user::getUsername(){
	return this->username;

}

string user::getPassword(){
	return this->password;

}

//Test
