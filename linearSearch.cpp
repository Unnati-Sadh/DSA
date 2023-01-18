#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){
    for(int i = 1; i<size; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}
int main(){
    
    int size,arr1[100],key;
    cout << "Enter the size of array:" << " ";
    cin >> size;
    
    cout << "Enter the elements of array:" << " ";
    
    
    for(int i = 0; i<size; i++){
        cin >> arr1[i];
    }
    
    cout << "Enter the key element to search for: ";
    cin >> key;
    
    bool found = search(arr1, size, key);
    
    if(found){
        cout << "Key element is present";
    }
    else{
        cout << "Key element is absent";
    }
    return 0;
}
