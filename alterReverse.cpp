#include<iostream>
using namespace std;

void alterReverse(int arr[], int size){
   
   for(int i = 0; i<size; i+=2){ 
       
       if(i+1<size){
        int temp = arr[i+1];
        arr[i+1] = arr[i];
        arr[i] = temp;
    }
  }
}

void printArray(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    
  int even[6]={1,2,3,4,5,6};
  int odd[5]={1,2,3,4,5};
  
  alterReverse(even, 6);
  alterReverse(odd, 5);
  
  printArray(even, 6);
  cout << endl;
  printArray(odd, 5);
  
  return 0;
  
}
