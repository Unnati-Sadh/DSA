//min and max from an array 
#include<iostream>
#include<climits>
using namespace std;

int giveMin(int arr[], int size){
    int mini = INT_MAX;
    for(int i=0; i<size; i++){
        mini = min(mini, arr[i]);
    }
    return mini;
}

int giveMax(int arr[], int size){
    int maxi = INT_MIN;
    for(int i=0; i<size; i++){
        maxi = max(maxi, arr[i]);
    }
    return maxi;
}

int main(){
  int size;
  cin >> size;
  int arr1[1000];
  for(int i = 0; i<size; i++){
      cin >> arr1[i];
  }
  cout << "Minimum in the given array is " << giveMin(arr1, size) << endl;
  cout << "Maximum in the given array is " << giveMax(arr1, size) << endl;
  
  return 0;
}
