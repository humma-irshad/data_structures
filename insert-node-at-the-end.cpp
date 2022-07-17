#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
};

void insertAtTheEnd(Node** head, int newData) {
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = NULL;
    if(*head == NULL) {
        *head = newNode;
        return;
    }
    
    Node* last = *head;
    while(last->next != NULL) {
        last = last->next;
    }
    last->next = newNode;
}

int main() {
		...
		insertAtTheEnd(&head, 5);
}
