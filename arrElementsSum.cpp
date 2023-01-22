
#include<iostream>
using namespace std;

int arrSum(int arr[],int n){
    int sum = 0;
  for(int i = 0; i<n; i++){
      sum = sum + arr[i];
  }
  return sum;
}

int main(){
    int size, arr1[100];
    cout << "Enter the size of array: ";
    cin >> size;
    
    cout << "Enter the elements of array: ";
  for(int i = 0; i<size; i++){
    cin >> arr1[i];
  }
  cout << "Sum of all digits: " << arrSum(arr1, size);
  
  return 0;
}
