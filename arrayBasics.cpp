#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    
  for(int i = 0; i<size; i++){
      cout << arr[i] << " ";
  }
}

void printArray(char arr[], int size){
    
  for(int i = 0; i<size; i++){
      cout << arr[i] << " ";
  }
}

int main(){
  
  int arr1[5] = {1, 2, 3, 4, 5};
  
  //printing array thru func
  printArray(arr1, 5);
  
  cout << endl;
  
  int arr2[10] = {6, 7, 8, 9, 10, 11};
  
  printArray(arr2, 10);
  /*printing array wo func
  for(int i=0; i<6; i++){
     cout << arr2[i] <<  " ";
  }
  */
  
  cout << endl;
  //index 2 output
  cout << arr1[2] <<endl;
  
  //garbage value
  cout << arr2[6] <<endl;
  
  char ch[3] = {'a','b','c'};
  
  //printing characters thru func
  printArray(ch, 3);
  
  return 0;
}
