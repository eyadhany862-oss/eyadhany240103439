#include <iostream>


struct Node {
    int data;    
    Node* next;  
    
   
    Node(int val) : data(val), next(nullptr) {}
};


class LinkedStack {
private:
    Node* top;   

public:
    LinkedStack() : top(nullptr) {}
    

    ~LinkedStack() {
        Node* current = top;
        while (current != nullptr) {
            Node* next = current->next;
            delete current;
            current = next;
        }
    }

  
};