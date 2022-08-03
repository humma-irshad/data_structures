#include<iostream>
using namespace std;

class Node {
     public:
        int value;
        Node* next;
 };
 
 Node* head;
 Node* tail;

void createNode(int nodeVal) {
    Node* temp = new Node();
    temp->value = nodeVal;
    
    if(head == NULL) {
        head = temp;
        tail = head;
        tail->next = temp;
    }
    else {
        tail->next = temp;
        tail = tail->next;
        tail->next = head;
    }
}

void insert() {
    int val, nodeVal;
    cout << "Enter node: ";
    cin >> val;
    Node* temp = head;
    Node* new_node = new Node();
    new_node->value = val;
    cout << "After: ";
    cin >> nodeVal;
    if(temp->value == nodeVal) {
        new_node->next = head;
        head = new_node;
        tail->next = new_node;
    } else {
        do {
            if(temp->value == nodeVal) {
                new_node->next = temp->next;
                temp->next = new_node;
                break;
            }
            temp = temp->next;
        } while(temp != head);
    }
}

void printNode() {
    Node* temp = head;
    do {
        cout << temp->value << endl;
        temp = temp->next;
    } while(temp != head);
}

int main() {
    int nodes;
    
    cout << "How many nodes? ";
    cin >> nodes;
    for(int i = 1; i <= nodes; i++)
        createNode(i);
        
    insert();
    printNode();
}
