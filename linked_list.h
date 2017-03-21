#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdexcept>

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

#endif // LINKED_LIST_H
