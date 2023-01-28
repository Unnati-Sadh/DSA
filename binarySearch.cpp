#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end-start)/2;
    while(start<=end){
        if(arr[mid] == key){
            return mid;
        }
           if(key> arr[mid]){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
            mid = start + (end - start)/2;
    }
    return -1;
}
int main(){
    
    int even[6] = { 1, 2, 3, 4, 5, 6};
    int odd[5] = {7, 8, 9, 10, 11};
    
    int evenSearch = binarySearch(even, 6, 6);
    int oddSearch = binarySearch(odd, 5, 16);
    
    cout << evenSearch<< endl;
    cout << oddSearch;
    
    return 0;
}
