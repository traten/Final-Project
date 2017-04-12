#ifndef	//source
#define //source
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

movieList::movieList(int size, string fileName)
{
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
}

string movieList::getMovie(int index)
{
	return this->movies[index];
}

#endif
