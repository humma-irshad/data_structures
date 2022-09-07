#include <iostream>
using namespace std;
#define Max 20

int Queue[Max], front = 0, rear = -1;

void enqueue(int item) {
    if(rear > Max)
        cout << "Overflow";
    else
        Queue[++rear] = item;
}

int dequeue() {
    if(front <= rear)
        return Queue[front++];
    else
        return -1;
}

void view() {
    if(front > rear)
        cout << "Empty";
    else {
        for(int i = front; i <= rear; i++)
            cout << Queue[i] << endl;   
    }
}

int main() {
    int choice, item, toggle = 1;
    
    while(1) {
        cout << "Enter 1 for enqueue; 2 dequeue; 3 for view and 4 to exit: ";
        cin >> choice;
        if(choice == 1) {
            cout << "Enter the item to enqueue: ";
            cin >> item;
            enqueue(item);
        }
        else if(choice == 2) {
            item = dequeue();
            if(item = -1)
                cout << "underflow";
            else
                cout << item;
        }
        else if(choice == 3) {
            view();
        }
        else 
            break;
    }
}
