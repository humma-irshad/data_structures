#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
        
        Node() {
            data = 0;
            next = NULL;
        }
};

class Stack {
    public:
        Node* top;
    
        Stack() {
            top = NULL;
        }
        
    bool isEmpty() {
        if(top == NULL)
            return true;
        else
            return false;
    }
    
    void push(Node* n) {
        if(top == NULL) 
            top = n;
        else {
            Node* temp = top;
            top = n;
            n->next = temp;
        }
    }
    
    Node* pop() {
        Node* temp = NULL;
        if(isEmpty()) {
            cout << "Stack underflow";
            return 0;
        }
        else {
            temp = top;
            top = top->next;
            return temp;
        }
    }
    
    int count() {
        int count = 0;
        Node* temp = top;
        while(temp != NULL) {
            count++;
            temp = temp->next;
        }
        return count;
    }
    
    void display() {
        cout << "All nodes in the stack are: " << endl;
        Node* temp = top;
        while(temp != NULL) {
            cout << temp->data;
            temp = temp->next;
        }
    }
};

int main() {
    Stack stk_1;
    int option, data;
    
    do {
    cout << "What operation do you want to perform? Enter 0 to exit." << endl;
    cout << "1. Push()" << endl;
    cout << "2. Pop()" << endl;
    cout << "3. isEmpty()" << endl;
    cout << "4. count()" << endl;
    cout << "55. display()" << endl;
    
    Node* new_node = new Node();
    
    cin >> option;
    switch(option) {
        case 0:
            break;
        case 1:
            cout << "Enter the value of the node: ";
            cin >> data;
            new_node->data = data;
            stk_1.push(new_node);
            break;
        case 2:
            new_node = stk_1.pop();
            cout << "The popped node value: " << new_node << endl;
            delete new_node;
            break;
        case 3:
            if(stk_1.isEmpty())
                cout << "Stack is empty" << endl;
            else
                cout << "Stack is not empty" << endl6;
            break;
        case 4:
            cout << "Total no. of nodes: " << stk_1.count() << endl;
            break;
        case 5:
            stk_1.display();
            cout << endl;
            break;
        default:
            cout << "Enter a valid number" << endl;
    }
    } while(option != 0);
    
    return 0;
}
