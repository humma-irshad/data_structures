#include<iostream>
using namespace std;

void bin(int number) {
    if(number == 1)
        cout << '1';
    else {
        bin(number / 2);
        cout << number % 2;
    }
}

int main() {
    int number;
    
    cout << "Enter your number: ";
    cin >> number;
    bin(number);
}
