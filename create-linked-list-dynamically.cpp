using namespace std;
#include <iostream>

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
        tail = tail -> next;
    }
}

void printNode(){
    Node * temp = head;
    while(temp != NULL){
        cout << temp->value << endl;
        temp = temp->next;
    }
}

int main() {
    char ch; 
    int val;
    
    while(ch != 'n') {
        cout << "Enter the value of the node: ";
        cin >> val;
        createNode(val);
        cout << "Do you wish to continue? (y/n) ";
        cin >> ch;
		}
		printNode();
}
