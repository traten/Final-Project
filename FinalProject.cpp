/*string current_line = "";
		int size = current_line.size();

		//Loop below gets rid of all whitespace
		for(int i = 0; i != size; i++){
			char c = current_line[i];
			if(isspace(c)){
				current_line.erase(i,1);
				i = -1;
				size = current_line.size();
			}
		}
*/


#include "FinalProject1.h"
#include "quiz.h"
#include "trait.h"
#include "movieList1.h"
#include <iostream>
#include <cstring>
#include <string>
MovieChooser test;

//bool exit = false; //For exiting within log in menu
int main()
{
  //Creates linked list to hold user objects
  linked_list<user>* userList = new linked_list<user>;

	movieList movieOne("Thrillseeker.txt");
	movieList movieTwo("Violent.txt");
	movieList movieThree("Serious.txt");

	int oneSize = movieOne.getCapacity();
	int twoSize = movieTwo.getCapacity();
	int threeSize = movieThree.getCapacity();

	std::string tempOne;
	std::string tempTwo;
	std::string tempThree;

  	std::string tempTemp;

  	bool containsMovie = false;

	string * movies = new string[10];
	int moviesLocation = 0;

	for (int i = 0; i < oneSize; i++)
	{
		tempOne = movieOne.getMovie(i);


		int tempOneSize = tempOne.size();

		//Loop below gets rid of all whitespace
		for(int z = 0; z != tempOneSize; z++){
			char c = tempOne[z];
			if(isspace(c)){
				tempOne.erase(z,1);
				z = -1;
				tempOneSize = tempOne.size();
			}
		}

		for (int j = 0; j < twoSize; j++)
		{
			tempTwo = movieTwo.getMovie(j);

      int tempTwoSize = tempTwo.size();

      //std::cout << "TWO";

      //Loop below gets rid of all whitespace
      for(int z = 0; z != tempTwoSize; z++){
        char c = tempTwo[z];
        if(isspace(c)){
          tempTwo.erase(z,1);
          z = -1;
          tempTwoSize = tempTwo.size();
        }
      }

			if (tempOne == tempTwo)
			{
				for (int k = 0; k < threeSize; k++)
				{
					tempThree = movieThree.getMovie(k);

          tempTemp = tempThree;

          //std::cout << "THREE";

          int tempThreeSize = tempThree.size();

          //Loop below gets rid of all whitespace TREVOR SUCKS PENIS
          for(int z = 0; z != tempThreeSize; z++){
            char c = tempThree[z];
            if(isspace(c)){
              tempThree.erase(z,1);
              z = -1;
              tempThreeSize = tempThree.size();
            }
          }

					if (tempTwo == tempThree)
					{
						if (moviesLocation < 10)
						{
							movies[moviesLocation] = tempTemp;
							moviesLocation++;
						}
					}
				}

			}
		}
	}

	if (moviesLocation < 10)
	{
		for (int i = 0; i < oneSize; i++)
		{
			tempOne = movieOne.getMovie(i);


			int tempOneSize = tempOne.size();

			//Loop below gets rid of all whitespace
			for(int z = 0; z != tempOneSize; z++){
				char c = tempOne[z];
				if(isspace(c)){
					tempOne.erase(z,1);
					z = -1;
					tempOneSize = tempOne.size();
				}	
			}

			for (int j = 0; j < twoSize; j++)
			{	
				tempTwo = movieTwo.getMovie(j);

				tempTemp = tempTwo;

      			int tempTwoSize = tempTwo.size();

      			//Loop below gets rid of all whitespace
      			for(int z = 0; z != tempTwoSize; z++){
        			char c = tempTwo[z];
        			if(isspace(c)){
          				tempTwo.erase(z,1);
          				z = -1;
          				tempTwoSize = tempTwo.size();
          			}
        		}

        		//checking if movies contains the current movie
        		for (int y = 0; y < 10; y ++)
        		{
        			string checkTemp = movies[y];

        			int tempSize = checkTemp.size();

      				//Loop below gets rid of all whitespace
      				for(int x = 0; x != tempSize; x++){
        				char c = checkTemp[x];
        				if(isspace(c)){
          					checkTemp.erase(x,1);
          					x = -1;
          					tempSize = checkTemp.size();
          				}
        			}

        			if (checkTemp == tempTwo)
        			{
        				containsMovie = true;
        			}
        		}

        		if ( (tempOne == tempTwo) && (moviesLocation < 10) && (!containsMovie))
        		{
        			movies[moviesLocation] = tempTemp;
					moviesLocation++;
        		}

        		containsMovie = false;
        	}
      	}
	}

	if (moviesLocation < 10)
	{
		for (int i = 0; i < oneSize; i++)
		{
			tempOne = movieOne.getMovie(i);


			int tempOneSize = tempOne.size();

			//Loop below gets rid of all whitespace
			for(int z = 0; z != tempOneSize; z++){
				char c = tempOne[z];
				if(isspace(c)){
					tempOne.erase(z,1);
					z = -1;
					tempOneSize = tempOne.size();
				}	
			}

			for (int j = 0; j < threeSize; j++)
			{	
				tempThree = movieThree.getMovie(j);

				tempTemp = tempThree;

      			int tempThreeSize = tempThree.size();

      			//Loop below gets rid of all whitespace
      			for(int z = 0; z != tempThreeSize; z++){
        			char c = tempThree[z];
        			if(isspace(c)){
          				tempThree.erase(z,1);
          				z = -1;
          				tempThreeSize = tempThree.size();
          			}
        		}

        		//checking if movies contains the current movie
        		for (int y = 0; y < 10; y ++)
        		{
        			string checkTemp = movies[y];

        			int tempSize = checkTemp.size();

      				//Loop below gets rid of all whitespace
      				for(int x = 0; x != tempSize; x++){
        				char c = checkTemp[x];
        				if(isspace(c)){
          					checkTemp.erase(x,1);
          					x = -1;
          					tempSize = checkTemp.size();
          				}
        			}

        			if (checkTemp == tempThree)
        			{
        				containsMovie = true;
        			}
        		}

        		if ( (tempOne == tempThree) && (moviesLocation < 10) && (!containsMovie))
        		{
        			movies[moviesLocation] = tempTemp;
					moviesLocation++;
        		}

        		containsMovie = false;
        	}
      	}
	}

	if (moviesLocation < 10)
	{
		for (int i = 0; i < twoSize; i++)
		{
			tempTwo = movieTwo.getMovie(i);

			int tempTwoSize = tempTwo.size();

			//Loop below gets rid of all whitespace
			for(int z = 0; z != tempTwoSize; z++){
				char c = tempTwo[z];
				if(isspace(c)){
					tempTwo.erase(z,1);
					z = -1;
					tempTwoSize = tempTwo.size();
				}	
			}

			for (int j = 0; j < threeSize; j++)
			{	
				tempThree = movieThree.getMovie(j);

				tempTemp = tempThree;

      			int tempThreeSize = tempThree.size();

      			//Loop below gets rid of all whitespace
      			for(int z = 0; z != tempThreeSize; z++){
        			char c = tempThree[z];
        			if(isspace(c)){
          				tempThree.erase(z,1);
          				z = -1;
          				tempThreeSize = tempThree.size();
          			}
        		}

        		//checking if movies contains the current movie
        		for (int y = 0; y < 10; y ++)
        		{
        			string checkTemp = movies[y];

        			int tempSize = checkTemp.size();

      				//Loop below gets rid of all whitespace
      				for(int x = 0; x != tempSize; x++){
        				char c = checkTemp[x];
        				if(isspace(c)){
          					checkTemp.erase(x,1);
          					x = -1;
          					tempSize = checkTemp.size();
          				}
        			}

        			if (checkTemp == tempThree)
        			{
        				containsMovie = true;
        			}
        		}

        		if ( (tempTwo == tempThree) && (moviesLocation < 10) && (!containsMovie))
        		{
        			movies[moviesLocation] = tempTemp;
					moviesLocation++;
        		}

        		containsMovie = false;
        	}
      	}
	}

	if (moviesLocation < 10)
	{
		for (int i = 0; i < oneSize; i++)
		{
			tempOne = movieOne.getMovie(i);

			tempTemp = tempOne;

			int tempOneSize = tempOne.size();

			//Loop below gets rid of all whitespace
			for(int z = 0; z != tempOneSize; z++){
				char c = tempOne[z];
				if(isspace(c)){
					tempOne.erase(z,1);
					z = -1;
					tempOneSize = tempOne.size();
				}	
			}

			//checking if movies contains the current movie
        	for (int y = 0; y < 10; y ++)
        	{
        		string checkTemp = movies[y];

        		int tempSize = checkTemp.size();

      			//Loop below gets rid of all whitespace
      			for(int x = 0; x != tempSize; x++){
        			char c = checkTemp[x];
        			if(isspace(c)){
          				checkTemp.erase(x,1);
          				x = -1;
          				tempSize = checkTemp.size();
          			}
        		}

        		if (checkTemp == tempOne)
        		{
        			containsMovie = true;
        		}
        	}

        	if ( (moviesLocation < 10) && (!containsMovie))
        	{
        		movies[moviesLocation] = tempTemp;
				moviesLocation++;
        	}

				containsMovie = false;
		}
	}

	if (moviesLocation < 10)
	{
		for (int i = 0; i < twoSize; i++)
		{
			tempTwo = movieTwo.getMovie(i);

			tempTemp = tempTwo;

			int tempTwoSize = tempTwo.size();

			//Loop below gets rid of all whitespace
			for(int z = 0; z != tempTwoSize; z++){
				char c = tempTwo[z];
				if(isspace(c)){
					tempTwo.erase(z,1);
					z = -1;
					tempTwoSize = tempTwo.size();
				}	
			}

			//checking if movies contains the current movie
        	for (int y = 0; y < 10; y ++)
        	{
        		string checkTemp = movies[y];

        		int tempSize = checkTemp.size();

      			//Loop below gets rid of all whitespace
      			for(int x = 0; x != tempSize; x++){
        			char c = checkTemp[x];
        			if(isspace(c)){
          				checkTemp.erase(x,1);
          				x = -1;
          				tempSize = checkTemp.size();
          			}
        		}

        		if (checkTemp == tempTwo)
        		{
        			containsMovie = true;
        		}
        	}

        	if ( (moviesLocation < 10) && (!containsMovie))
        	{
        		movies[moviesLocation] = tempTemp;
				moviesLocation++;
        	}

				containsMovie = false;
		}
	}

	if (moviesLocation < 10)
	{
		for (int i = 0; i < threeSize; i++)
		{
			tempThree = movieThree.getMovie(i);

			tempTemp = tempThree;

			int tempThreeSize = tempThree.size();

			//Loop below gets rid of all whitespace
			for(int z = 0; z != tempThreeSize; z++){
				char c = tempThree[z];
				if(isspace(c)){
					tempThree.erase(z,1);
					z = -1;
					tempThreeSize = tempThree.size();
				}	
			}

			//checking if movies contains the current movie
        	for (int y = 0; y < 10; y ++)
        	{
        		string checkTemp = movies[y];

        		int tempSize = checkTemp.size();

      			//Loop below gets rid of all whitespace
      			for(int x = 0; x != tempSize; x++){
        			char c = checkTemp[x];
        			if(isspace(c)){
          				checkTemp.erase(x,1);
          				x = -1;
          				tempSize = checkTemp.size();
          			}
        		}

        		if (checkTemp == tempThree)
        		{
        			containsMovie = true;
        		}
        	}

        	if ( (moviesLocation < 10) && (!containsMovie))
        	{
        		movies[moviesLocation] = tempTemp;
				moviesLocation++;
        	}

				containsMovie = false;
		}
	}






for (int i = 0; i < 10; i++)
    std::cout << movies[i]<<std::endl;


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
