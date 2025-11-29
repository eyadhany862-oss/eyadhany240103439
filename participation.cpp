#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};


void add(Node*& head, int value) {
    Node* newNode = new Node{value, nullptr};
    if (!head) {
        head = newNode;
        return;
    }
    Node* current = head;
    while (current->next) {
        current = current->next;
    }
    current->next = newNode;
}


void insertBetween(Node* head, int a, int b, int value) {
    Node* current = head;
    while (current && current->next) {
        if (current->data == a && current->next->data == b) {
            Node* newNode = new Node{value, current->next};
            current->next = newNode;
            return;
        }
        current = current->next;
    }
}


void insertBefore(Node*& head, int target, int value) {
    Node* newNode = new Node{value, nullptr};

    if (head && head->data == target) {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* current = head;
    while (current && current->next) {
        if (current->next->data == target) {
            newNode->next = current->next;
            current->next = newNode;
            return;
        }
        current = current->next;
    }
}


void deleteNode(Node*& head, int target) {
    if (!head) return;

    if (head->data == target) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* current = head;
    while (current->next && current->next->data != target) {
        current = current->next;
    }

    if (current->next) {
        Node* temp = current->next;
        current->next = temp->next;
        delete temp;
    }
}


void printList(Node* head) {
    Node* current = head;
    while (current) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;

    add(head, 10);
    add(head, 20);
    add(head, 30);
    add(head, 40);
    add(head, 45);

    insertBetween(head, 10, 20, 15);
    insertBefore(head, 45, 42);

    cout << "List before deletion: ";
    printList(head);

    deleteNode(head, 30);  

    cout << "List after deletion: ";
    printList(head);

    return 0;
}