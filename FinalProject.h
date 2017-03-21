#define FinalProject
#include <iostream>
#include <cstring>
#include <string>
#include <stdexcept>
using std::string;

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

int menu()
{
  int userInput = 0;
  std::cout<< "1. Take Quiz" << std::endl;
  std::cout << "2. Print Movie List" << std::endl;
  std::cout << "3. Log out" << std::endl;
  std::cout << "4. Programmers Top Picks" << std::endl;
  std::cout << "5. Exit System" << std::endl;
  std::cin >> userInput;
  return userInput;
}

bool loginMenu(linked_list<user>* userList)
{
	cout << "1. Log in" << std::endl;
	cout << "2. Create New User" << endl;
	cout << "3. Exit System\n" << endl;
	cout << "Choice: ";
	
	
	
	int choice = 0;
	
	cin >> choice;
	
	switch(choice){
		
		case 1:{
			
			string username = "";
			string password = "";
			
			cout << "\nUsername: ";
			cin >> username;
			
			int userListSize = userList->size();
			
			if(userListSize == 0){
					cout << "Username does not exist.\n" << endl;
					break;
				}
			
			for(int i = 0; i != userListSize; i++){
				
				user tempUser = userList->item_at(i);
				
				string tempName = tempUser.getUsername();
				
				if(username != tempName){
					cout << "Username does not exist.\n" << endl;
					break;
					
				}
				
				cout << "Password: ";
				cin >> password;
				
				string tempPass = tempUser.getPassword();
				
				if(password == tempPass){
					return true;
				}
				else{
					cout << "Wrong password!\n" << endl;
					break;
					
				}
				
				
				
			}
			
			break;
		}
		
		case 2:{
			string username = "";
			string password = "";
			
			cout << "\nUsername: ";
			cin >> username;
			
			cout << "Password: ";
			cin >> password;
			
			user newUser(username,password);
			
			userList->insert(newUser, 0);
			
			cout << "User created!\n" << endl;
			
			break;
		}
		
		case 3:{
			
			exit = true;
			
		}
			
	}
	
	
	return false;
}
