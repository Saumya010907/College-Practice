#include <iostream>
using namespace std;

int main(){
    int arr[5] = {10, 20, 40, 50}; 
    int size = 4;                   
    int element = 30;
    int pos = 2;                    
    for(int i = size; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos] = element;
    size++;

    cout << "Array after insertion: ";

    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
} 