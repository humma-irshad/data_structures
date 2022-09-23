#include <iostream>
using namespace std;
#define size 10

int queue[size], front = -1, rear = -1;

void enqueue() {
    int x;
    cout << "Enter the number you want to en-queue: ";
    cin >> x;
    
    if(rear == size - 1)
        cout << "Overflow" << endl;
    else if(rear == -1 && front == -1) // nothing in the queue
        queue[rear] = x;
    else {
        rear++;
        queue[rear] = x;
    }
}

void dequeue() {
    if(front == -1 && rear == -1)
        cout << "underflow";
    else if(front == rear)
        front = rear = -1;
    else {
        cout << "De-queued element: " << queue[front] << endl;
        front++;
    }
}

void display() {
    if(front == -1 && rear == -1)
        cout << "Queue is empty";
    else {
        for(int i = front; i <= rear; i++)
            cout << queue[i] << endl;
    }
}

int main() {
    int num = 0;
    
    while(num < size) {
        enqueue();
    }
    display();
}
