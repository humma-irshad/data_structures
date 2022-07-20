#include<iostream>
#include <string>
using namespace std;

template <class T>
class Node {
    public:
        T data;
        Node<T>* next;
};

template <typename T>
Node<T>* head;

template <typename T>
Node<T>* tail;

template <typename T>
void insertNode(T data) {
    Node<T> * n = new Node<T>();
    n->data = data;

    if(head<T> == NULL) {
        head<T> = n;
        tail<T> = head<T>;
    }
    else {
        tail<T>->next = n;
        tail<T> = tail<T>->next;
    }
}

template <typename T>
void printList() {
    Node<T> *temp = head<T>;
    while(temp != NULL) {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

int main() {
    insertNode<string>("hello");
    insertNode<string>("humma");

    printList<string>();

    return 0;
}
