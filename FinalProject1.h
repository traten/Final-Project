#define FinalProject
#include <iostream>
#include <cstring>
#include <string>
#include <stdexcept>
#include "movieList1.h"
using std::string;

string current_username = "";

//Start of linked list- I will explain stuff if you need to, my TA taught us a diff way how to
//do linked lists - Tyler
typedef std::size_t size_t;

template <typename T>
class linked_list {

    struct node {

        T item;

        node* next;

        node(const T& item, node* next):
            item(item),
            next(next) {}

        ~node() {}

    };

    node* head = NULL;

public:

    linked_list() {}

    ~linked_list() {
        // remove all items
        while (head != NULL) {
            node* curr = head;
            head = head->next;
            delete curr;
        }
    }

    void insert(const T& item, const size_t& index) {

	   if(index == 0){ //Inserting into empty list at index 0

			this->head = new node(item, head);
			return;

		}

		node* currNode = head;

		if(head == NULL && index != 0){ //Check for insert at index !0 when head is null
			throw std::out_of_range("Index out of range");
		}

		for (size_t i = 0; i != index; i++){ //Check for invalid insert

			if(currNode == NULL){ //If currNode exceeds size
				throw std::out_of_range ("Index out of range");
			}

			currNode = currNode->next;
		}

		currNode = head; //resets currNode at head

		for(size_t i = 0; i != index - 1; i++){ //Walks to insert node
			currNode = currNode->next;
		}

		currNode->next = new node(item, currNode->next); //Inserts node



    }

    T remove(const size_t& index) {

		node*  prevNode = NULL;
		node* currNode = head;

		if (currNode == NULL){ //If list is empty
			throw std::out_of_range("Empty List");
		}

		if(index == 0){ //If removing first item
			this->head = currNode->next;
			T item = currNode->item;
			delete currNode;
			return item;

		}


		for(size_t i = 0; i != index; i++){

			if(currNode->next == NULL){ //If currNode exceeds size
				throw std::out_of_range ("Index out of range");
			}

			prevNode = currNode;
			currNode = currNode->next;

		}

		prevNode->next = currNode->next;

		T item = currNode->item;

		delete currNode;

		return item;

    }

    T item_at(const size_t& index) const {

		node* currNode = head;

		if(currNode == NULL){ //if list is empty
			throw std::out_of_range("Empty List");

		}

		for(size_t i = 0; i != index; i++){

			if(currNode->next == NULL){ //Checking if index out of range
				throw std::out_of_range("Index out of range");
				//Getting item at unreachable index
			}

			currNode = currNode->next; //Walking

		}

		T item = currNode->item;

		return item;

    }

    size_t size() const {

		size_t size = 0;

		node* currNode = head;


		while(true){

			if(currNode == NULL){ //Stop condition
				break;
			}

			currNode = currNode->next;
			size++;

		}

		return size;

	}

};
//End of linked list


//user Class declarations
class user{

	private:
		std::string username;

		std::string password;

		//quiz quizResults;


	public:

		user(std::string username, std::string password);

		std::string getUsername();

		std::string getPassword();

};



//using namespace std;
class MovieChooser
{
public:
  void menu();
};

string menu()
{
  string userInput = "";
  std::cout<< "\n1. Take Quiz" << std::endl;
  std::cout << "2. Print Movie List" << std::endl;
  std::cout << "3. Programmers Top Picks" << std::endl;
  std::cout << "4. Log out" << std::endl;
  std::cout << "5. Exit System" << std::endl;
  getline(std::cin, userInput);
  return userInput;
}

bool loginMenu(linked_list<user>* userList)
{
  bool logIn = true;
  while(logIn)
  {
	std::cout << "1. Log in" << std::endl;
	std::cout << "2. Create New User" << std::endl;
	std::cout << "3. Exit System\n" << std::endl;
	std::cout << "Choice: ";

	string userInput = "";



	getline(std::cin, userInput);

	if(userInput.size()!= 1){ //If string is not only one character, print error.

			std::cout << "\nIncorrect input: Please input a number 1 through 3\n" << std::endl;
			continue;

	}

	char choice = userInput[0]; //Gets character at index 0

	switch(choice){

		case '1':
		{

			string username = "";
			string password = "";

			std::cout << "\nUsername: ";
			getline(std::cin, username);

			int userListSize = userList->size();

			if(userListSize == 0){
					std::cout << "Username does not exist.\n" << std::endl;
					break;
				}


			for(int i = 0; i != userListSize; i++){

				user tempUser = userList->item_at(i);

				string tempName = tempUser.getUsername();


				if(username != tempName){
					std::cout << "Username does not exist.\n" << std::endl;
					break;
				}


				std::cout << "Password: ";
				getline(std::cin, password);

				string tempPass = tempUser.getPassword();

				if(password == tempPass){
          current_username = username;
					return true;
				}
				else{
					std::cout << "Wrong password!\n" << std::endl;
					break;

				}
			}

			break;
		}

		case '2':
		{
			string username = "";
			string password = "";

			std::cout << "\nUsername: ";
			getline(std::cin, username);

			bool usernameMatch = false;
			for(size_t i = 0; i != userList->size(); i++){
				user current_user = userList->item_at(i);
				string current_string = current_user.getUsername();
				if(current_string == username){
					std::cout << "Username already taken. Try again." << std::endl;
					usernameMatch = true;
				}
			}
			if(usernameMatch == true){
				break;
			}

			std::cout << "Password: ";
			getline(std::cin, password);

			user newUser(username,password);

			userList->insert(newUser, 0);

			std::cout << "User created!\n" << std::endl;

			break;
		}

		case '3':
		{
			std::cout << "Thank you for using Movie Quiz" << std::endl;
			exit(0);
			break;

		}

		default:
		{
			std::cout << "\nIncorrect input: Please input a number 1 through 3\n" << std::endl;
			break;
		}

	}
  }
  return false;
}
