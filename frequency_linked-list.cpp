#include <iostream>
using namespace std;

#define length 100

class Node {
    public:
        int value;
        Node* next;
};

Node* head;
Node * tail;

void createNode() {
    Node* temp = new Node();
    int val;
    cout << "Enter the value of your node: ";
    cin >> val;
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

void frequency() {
    int count = 0, position[length], nodeVal, pos = 0;
    Node* temp = head;
    
    cout << "Enter the value you want to find: ";
    cin >> nodeVal;
    while(temp != NULL) {
        if(temp->value == nodeVal) {
            count++;
            position[count] = pos;
            cout << "Position: " << position[count] << "\t";
        }
        pos++;
        temp = temp->next;
    }
}

int main() {
    int n;
    
    cout << "How many nodes do you want to create? ";
    cin >> n;
    for(int i = 0; i < n; i++)
        createNode();
    frequency();
}
