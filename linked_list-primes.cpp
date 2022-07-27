#include <iostream>
#include<string>
using namespace std;

class Node {
    public:
        int value;
        Node* next;
};

Node * head;
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

void printList(){
    Node * tmp = head;
    while( tmp != NULL ){
        cout << tmp -> value << " -> ";
        tmp = tmp -> next;
    }
}


bool isPrime( int number ){
    for( int i = 2; i < number; i++ ){
        if ( number % i == 0 ) return false;
    }
    return true;
}

int main() {
    for( int i = 1; i <= 50; i++ ){
        if ( isPrime(i) ){
            createNode(i);
        }
    }
    
    printList();
}
