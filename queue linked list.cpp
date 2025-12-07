#include <iostream>


struct Node {
    int data;
    Node* next;
    
    Node(int val) : data(val), next(nullptr) {}
};


class LinkedQueue {
private:
    Node* front;  
    Node* rear;   

public:
    LinkedQueue() : front(nullptr), rear(nullptr) {}
    
   
    ~LinkedQueue() {
        while (!isEmpty()) {
            dequeue(); 
        }
    }

    
};