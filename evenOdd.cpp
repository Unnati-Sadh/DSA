//1 if even 
//0 if odd

#include<iostream>
using namespace std;

bool isEven(int num){
  //for odd num
  if(num&1){
    return 0;
  }
  else{
  return 1;
  }
}

int main() {
int num;
  cin >> num;
  if(isEven(num)){
    cout << "Number is Even";
  }
  else{
    cout << "Number is Odd";
  }
}
