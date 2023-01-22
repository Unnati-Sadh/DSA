#include<iostream>
using namespace std;

void reverse(int arr[], int size){
    int start = 0;
    int end = size - 1;
  while(start<=end){
      swap(arr[start], arr[end]);
    start++;
    end--;
  }
}
void printArray(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
}

int main(){
int arr[100], size;
  
  cout << "Enter length of array: ";
  cin >> size;
  
  cout << "Enter elements of array: ";
  for(int i = 0; i<size; i++){
      cin >> arr[i];
  }
  
  reverse(arr, size);
  cout << "Reversed elements: ";
  printArray(arr, size);
  
  return 0;
}
