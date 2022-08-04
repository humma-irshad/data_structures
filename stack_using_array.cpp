#include <iostream>
using namespace std;
#define size 20

class Stack {
    private: 
        int top;
        int arr[size];
    
    public:
        Stack() {
            top = -1;
            for(int i = 0; i < size; i++)
                arr[i] = 0;
        }
        
        bool isEmpty() {
            if(top == -1)
                return true;
            else
                return false;
        }
        
        bool isFull() {
            if(top == size)
                return true;
            else
                return false;
        }
        
        void push(int val) {
            if(isFull())
                cout << "Stack overflow";
            else {
                top++;
                arr[top] = val;
            }
        }
        
        int pop() {
            if(isEmpty()) {
                cout << "Stack underflow";
                return 0;
            }
            else {
                int popValue = arr[top];
                arr[top] = 0;
                top--;
                return popValue;
            }
        }
        
        int count() {
            return(top + 1);
        }
        
        int peek(int pos) {
            if(isEmpty()) {
                cout << "Stack underflow";
                return 0;
            }
            else
                return arr[pos];
        }
        
        void change(int pos, int val) {
            arr[pos] = val;
            cout << "Value changed at position " << pos << endl;
        }
        
        void display() {
            for(int i = size; i >= 0; i--)
                cout << arr[i] << endl;
        }
};

int main() {
    Stack stk_1;
    int option, position, value;
    
    do {
        cout << "What operation do you want to perform. Enter 0 to exit." << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. isEmpty()" << endl;
        cout << "4. isFull()" << endl;
        cout << "5. peek()" << endl;
        cout << "6. count()" << endl;
        cout << "7. change()" << endl;
        cout << "8. display()" << endl;
        
        cin >> option;
        switch(option) {
            case 1:
                cout << "Enter the value to push in the stack: " << endl;
                cin >> value;
                stk_1.push(value);
                break;
            case 2:
                cout << "Popped value - " << stk_1.pop() << endl;
                break;
            case 3:
                if(stk_1.isEmpty())
                    cout << "Stack is empty" << endl;
                else
                    cout << "Stack is not empty" << endl;
                break;
            case 4:
                if(stk_1.isFull())
                    cout << "Stack is full" << endl;
                else
                    cout << "Stack is not full" << endl;
                break;
            case 5:
                cout << "Enter the position you want to peek :";
                cin >> position;
                cout << stk_1.peek(position) << endl;
                break;
            case 6:
                cout << "Total no. of items" << stk_1.count() << endl;
                break;
            case 7:
                cout << "Enter the value of item: ";
                cin >> value;
                cout << "Enter the position where you want to change: ";
                cin >> position;
                stk_1.change(position, value);
                break;
            case 8:
                stk_1.display();
                break;  
            default:
                cout << "Enter a valid number" << endl;
        }
        
    } while(option != 0);
}
