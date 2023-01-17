#include<iostream>
using namespace std;

int arrSum(int arr[],int n){
    int sum = 0;
  for(int i = 0; i<=n; i++){
      sum = sum + i;
  }
  return sum;
}

int main(){
    int size, arr1[100];
    cin >> size;
  for(int i = 1; i<size; i++){
    cin >> arr1[i];
  }
  cout << "Sum of all digits: " << arrSum(arr1, size);
  
  return 0;
}
