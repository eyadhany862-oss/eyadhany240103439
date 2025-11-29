#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

Node* head = nullptr;
Node* tail = nullptr;

void insertEnd(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->prev = tail;
    newNode->next = nullptr;

    if (tail != nullptr) tail->next = newNode;
    else head = newNode;

    tail = newNode;
}

void deleteValue(int value) {
    Node* temp = head;
    while (temp != nullptr && temp->data != value) temp = temp->next;
    if (temp == nullptr) return;

    if (temp->prev != nullptr) temp->prev->next = temp->next;
    else head = temp->next;

    if (temp->next != nullptr) temp->next->prev = temp->prev;
    else tail = temp->prev;

    delete temp;
}

void printForward() {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);

    printForward();      
    deleteValue(20);
    printForward();      

    return 0;
}