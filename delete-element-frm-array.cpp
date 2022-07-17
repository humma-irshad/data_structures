#include <iostream>
using namespace std;

int main() {
    int arr[20], size, element, pos;
    
    cout << "Enter size of array: ";
    cin >> size;
    
    cout << "Enter elements of array:" << endl;
    for(int i = 0; i < size; i++)
        cin >> arr[i];
        
    cout << "Enter the element you want to delete: ";
    cin >> element;
    
    for(int i = 0; i < size; i++) {
        if(arr[i] == element)
            pos = i;
    }

    for(int i = pos; i < size; i++) {
        arr[pos] = arr[i];
    }
    size -= 1;
    
    cout << "Remaining elements of the array: " << endl;
    for(int i = 0; i < size; i++) 
        cout << arr[i] << endl;
}
