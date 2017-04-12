#ifndef	FinalProject
#define FinalProject
#include <string>
#include <cstdlib>
#include <iostream>
#include <fstream>
using namespace std;

class movieList
{
	private:
		string * movies;

	public:
		movieList(int size, string fileName);
		string getMovie(int index);
};

movieList::movieList(string fileName)
{
	std::ifstream sizeCalc(fileName, fstream::in);

	string temp;
	int size = 0;

	while (std::getline(sizeCalc, temp))
	{
		size++;
	}

	sizeCalc.close();

	this->movies = new string[size];

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

#endif
