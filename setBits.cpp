//Total number of bits in integer a and b

#include<iostream>
using namespace std;

int setBit1(int a){
    int count = 0;
  while(a!=0){
      if(a&1){
        count++;
      }
      a = a >> 1;
  }
  return count;
  
}
int setBit2(int b){
    int count = 0;
  while(b!=0){
      if(b&1){
        count++;
      }
      b= b >> 1;
  }
  return count;
  
}
int main(){
  int a, b;
  cin >> a >> b;
  int ans1= setBit1(a);
  int ans2= setBit2(b);
  int ans = ans1 + ans2;
  cout << "Total no. of set bits in " << ans;
  return 0;
}
