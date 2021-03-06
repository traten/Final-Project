#include "FinalProject1.h"
#include "quiz.h"
#include "trait.h"
#include "movieList.h"
#include <iostream>
#include <cstring>
#include <string>
MovieChooser test;

int main()
{
  //Creates linked list to hold user objects
  linked_list<user>* userList = new linked_list<user>;

  //This will be the menu used inside the first for loop
while(true) //this is used for creating new user
{
  cout << "\nWelcome to Movie Quiz!\n" << endl;
	bool logIn = loginMenu(userList);

	
	while(logIn) //used for when user is inside log in page
	{
		cout << "\n~~~~MOVIE QUIZ~~~~" << endl;
	    	string userInput = menu();
		if(userInput.size()!= 1){ //If string is not only one character, print error.

			cout << "\nIncorrect input please input a number 1 through 5" << endl;
			continue;

		}

		char choice = userInput.at(0); //Gets character at index 0

		switch(choice)
	   	{
		      case '1': //quiz section
          {
				  std::cout << "Movie Quiz" << std::endl;
          printQuiz();

          //std::cout << getTopString() << std::endl;
          //std::cout << getSecondString() << std::endl;
          //std::cout << getLastString() << std::endl;

          movieList movieOne("./MovieFiles/" + getTopString() + ".txt"); //Create movie list object for the top rated trate
        	movieList movieTwo("./MovieFiles/" + getSecondString() + ".txt"); //Create movie list object for the second rated trate
        	movieList movieThree("./MovieFiles/" + getLastString() + ".txt"); //Create movie list object for the third rated trate
	  
		  
	       /*--- The logic below sets the user's top 10 movies into the movie array ---*/
		  
	       /* 
          Firstly, a triple nested loop is used to determine which movies are in all three lists
	  
	  	    Secondly, if 10 movies have not already been found, the logic compares traits 1 and 2, then 1 and 3,and 
	  	    finally 2 and 3 to find the the common movies between two lists, going from most important to least
		
	  	    Thirdly, if 10 movies have still not been found, we get movies from an idividual list until we hit 10 */
		
		      /*--- Get size of each list ---*/
        	int oneSize = movieOne.getCapacity();
        	int twoSize = movieTwo.getCapacity();
        	int threeSize = movieThree.getCapacity();
		
		      /*--- Create string for logic ---*/
        	std::string tempOne;
        	std::string tempTwo;
        	std::string tempThree;
          std::string tempTemp;

          bool containsMovie = false;

        	int moviesLocation = 0;

		      /*--- Start triple nested loop ---*/
		  
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

		    /*--- End triple nested loop ---*/
		
		    /*--- If we dont have 10 movies, start next loops ---*/
		
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
		  
		      /*--- End loops ---*/
		  
		      /*--- If we dont have 10 movies, start next loops ---*/

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
		  
		      /*--- End loops ---*/
		  
		      /*--- If we dont have 10 movies, start next loops ---*/

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

		      /*--- End Loops ---*/
		  
		      /*--- If we dont have 10 movies, start next loops ---*/

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
		  
		      /*--- End loops ---*/
		  
		      /*--- If we dont have 10 movies, start next loops ---*/

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
		  
		      /*--- End loops ---*/
		  
		      /*--- If we dont have 10 movies, start next loops ---*/

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
		  
		      /*--- End loops ---*/

          string filename = "./UserFiles/" + current_username + ".txt";

          ofstream out(filename);

          out << current_username << "'s Personalized Top 10 Movie List\n\n";

          for (int i = 0; i < 10; i++){
             out << i+1 << ": " << movies[i] << "\n";
          }

          out.close();


				  break;}
		      case '2': //Prints quiz
          if(movies[0] == " ")
          {
            std::cout << "No results! Haven't taken quiz yet!" << std::endl;
          }
          else
          {
		std::cout << "\nPrinting Quiz results" << std::endl;
            	std::cout << "Additionally, check UserFiles for a .txt of your Movies" << std::endl;
		std::cout << std::endl;
		std::cout << "Your Movies:" << std::endl;
            for (int i = 0; i < 10; i++)
            {	  
              std::cout << i + 1 << ": " << movies[i] << std::endl;
            
		}
          }



				  break;
		      case '3': //Prints Programmers Top Picks
				  std::cout << " Programmer's Top Picks: " << std::endl;
				  std::cout << " 1: Pulp Fiction" << std::endl;
				  std::cout << " 2: Django Unchained" << std::endl;
				  std::cout << " 3: Star Wars, the OG trilogy" << std::endl;
				  std::cout << " 4: Lord of the Rings" << std::endl;
				  std::cout << " 5: Toy Story" << std::endl;
				  std::cout << " 6: Fight Club" << std::endl;
				  std::cout << " 7: The Dark Knight" << std::endl;
				  std::cout << " 8: The Matrix" << std::endl;
				  std::cout << " 9: Hotel Rwanda" << std::endl;
          std::cout << "10: Up" << std::endl;

				  break;
		      case '4': //logs out of system
				  std::cout << "Logged Out" << std::endl;
				  logIn = false;
				  traitlist.resetTraits();
          current_username = "";
				  break;
		      case '5': //exits system entirely
				  std::cout << "Thank you for using Movie Quiz" << std::endl;
				  return 0;
		      default: 	//If its not 1-5
				  std::cout << "\nIncorrect input: Please input a number 1 through 5" << std::endl;
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
