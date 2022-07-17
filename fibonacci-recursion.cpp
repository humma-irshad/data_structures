#include <iostream>
using namespace std;

int fibo(int n) {
    if(n <= 1 || n <= 2)
        return(1);
    else
        return(fibo(n - 1) + fibo(n - 2));
}

int main() {
    int number;
    
    cout << "Enter the number of terms: ";
    cin >> number;
    
    for(int i = 1; i <= number; i++) 
        cout << fibo(i);
}
