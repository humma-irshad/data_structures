#include <iostream>
using namespace std;

int main() {
    int array[100], item, pos, size;
    
    cout << "Enter the size of array: ";
    cin >> size;
    
    cout << "Enter the elements of array: ";
    for(int i = 0; i < size; i++)
        cin >> array[i];
        
    cout << "Enter the item you want to insert: ";
    cin >> item;
    
    cout << "Enter the position where you want to insert: ";
    cin >> pos;
    
    size++;
    for(int i = size - 1; i > pos; i--) {
        array[i] = array[i - 1];
    }
    
    array[pos] = item;
    
    for(int i = 0; i < size; i++)
        cout << array[i] << endl;
}
