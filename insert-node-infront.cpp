#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
};

void insertInFront(Node** head, int newData) {
		// Prepare a new node
    Node* newNode = new Node();
    newNode->data = newData;
		// Put it in front of the current head
    newNode->next = *head;
		// Move head of the list to point the newNode
    *head = newNode;
}

int main() {
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
    
    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = NULL;
  
    insertInFront(&head, 0);
}
