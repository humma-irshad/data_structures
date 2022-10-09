#include <iostream>
using namespace std;

// Bubble Sort
void bubSort(int arr[], int n) {
int flag, temp;

for(int k = 1; k < n; k++) {
    flag = 0; 
    for(int i = 0; i < n - k; i++) {
        if(arr[i] > arr[i + 1]) {
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
            flag = 1;
            }
        }
    if(flag == 0)
        break;
    }
}

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main() {
    int arr[100], size;

    cout << "Enter size of array: ";
    cin >> size;
    
    cout << "Enter array elements:\n";
    for(int i = 0; i < size; i++)
        cin >> arr[i];
        
    bubSort(arr, size);
    printArray(arr, size);
}

// Selection Sort
void selSort(int arr[], int n) {
int low, temp;

for(int k = 0; k < n; k++) {
    low = k;
    for(int i = k + 1; i < n; i++) {
        if(arr[i] < arr[low]) {
            low = i;
            }
        }
    temp = arr[low];
    arr[low] = arr[k];
    arr[k] = temp;
    }
}

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main() {
    int arr[100], size;

    cout << "Enter size of array: ";
    cin >> size;
    
    cout << "Enter array elements:\n";
    for(int i = 0; i < size; i++)
        cin >> arr[i];
        
    selSort(arr, size);
    printArray(arr, size);
}

// Insertion Sort
void insSort(int arr[], int n) {
    for(int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main() {
    int arr[100], size;

    cout << "Enter size of array: ";
    cin >> size;
    
    cout << "Enter array elements:\n";
    for(int i = 0; i < size; i++)
        cin >> arr[i];
        
    insSort(arr, size);
    printArray(arr, size);


// Merge Sort
void merSort(int arr[], int n);
void merSort_recur(int arr[], int left, int right);
void merSorted(int arr[], int left, int mid, int right);

void merSort(int arr[], int n) {
    merSort_recur(arr, 0, n - 1);
}

void merSort_recur(int arr[], int left, int right) {
    if(left < right) {
    // middle portion of array
    int mid = left + (right - left) / 2; 
    merSort_recur(arr, left, mid);
    merSort_recur(arr, mid + 1, right);
    
    merSorted(arr, left, mid, right);        
    }
}

void merSorted(int arr[], int left, int mid, int right) {
    int left_length = mid - left + 1;
    int right_length = right - mid;
    
    int temp_left[left_length];
    int temp_right[right_length];
    
    int i, j, k;
    for(i = 0; i < left_length; i++)
        temp_left[i] = arr[left + i];
        
    for(i = 0; i < right_length; i++)
        temp_right[i] = arr[mid + 1 + i];
        
    for(i = 0, j = 0, k = left; k <= right; k++) {
        if(i < left_length && j >= right_length || temp_left[i] <= temp_right[j]) {
            arr[k] = temp_left[i];
            i++;
        }
        else {
            arr[k] = temp_right[j];
            j++;
        }
    }
}

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main() {
    int arr[100], size;

    cout << "Enter size of array: ";
    cin >> size;
    
    cout << "Enter array elements:\n";
    for(int i = 0; i < size; i++)
        cin >> arr[i];
        
    merSort(arr, size);
    printArray(arr, size);
}
