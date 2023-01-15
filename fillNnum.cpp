#include<iostream>
using namespace std;

int main(){
    
  int arr1[100];
  
  fill_n(arr1, 100, 2);
  
  for(int i = 0; i<100; i++){
    cout << arr1[i] << " ";
  }
  
  return 0;
}
