#include <iostream>
using namespace std;

class Node {
    public:
        int value;
        Node* next;
};

Node* head;
Node * tail;

void createNode(int val) {
    Node* temp = new Node();
    temp->value = val;
    
    if(head == NULL) {
        head = temp;
        tail = head;
    }
    else {
        tail->next = temp;
        tail = tail->next;
    }
}

void deleteNode() {
    int nodeVal;
    cout << "Enter the value of the node you want to delete: ";
    cin >> nodeVal;
    if(head->value == nodeVal) {
        Node* temp = head;
        head = temp->next;
        free(temp);
    } else {
        Node* trav = head;
        while(trav->next->value != nodeVal) {
            trav = trav->next;
        }
        Node* temp = trav->next;
        trav->next = temp->next;
        free(temp);
        
    }
}

int main() {
	...
	deleteNode();
}
