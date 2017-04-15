#ifndef	MOVIE_LIST_H
#define MOVIE_LIST_H
//#include <string>
#include <cstdlib>
#include <iostream>
#include <fstream>
using namespace std;

class movieList
{
	private:
		string * movies;
		int capacity;

	public:
		movieList(string fileName); //constructor
		string getMovie(int index); //returns the movie at the specified index
		int getCapacity(); //returns capacity of list
};

movieList::movieList(std::string fileName)
{
	std::ifstream sizeCalc(fileName, fstream::in);

	string temp;
	int size = 0;

	while (std::getline(sizeCalc, temp)) //loop to get the number of movies in file
	{
		size++;
	}
	
	capacity = size;

	sizeCalc.close();

	this->movies = new string[size]; //create a static array that holds the correct number of movies

	std::ifstream movieFile(fileName, fstream::in); //Create file

	/*---Load file into array---*/

	int location = 0;

	string line;

	while (std::getline(movieFile, line))
	{
		movies[location] = line;
		location++;
	}

	movieFile.close();
}

string movieList::getMovie(int index)
{
	return this->movies[index];
}

int movieList::getCapacity()
{
	return this->capacity;
}

//Returns true if filename can be found
bool fileExists(const std::string& fileName)
{
  std::ifstream testFile(fileName.c_str());
  return (bool)testFile;
}

#endif