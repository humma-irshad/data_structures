#include <iostream>
using namespace std; 

int power(int base, int p) {
    if(p != 0)
        return(base * power(base, p - 1));
    else
        return 1;
}

int main() {
    int number, pwr, result;
    
    cout << "Enter your number: ";
    cin >> number;
    
    cout << "Enter the power: ";
    cin >> pwr;
    
    result = power(number, pwr);
    cout << "Result: " << result;
}
