//factorial and nCr of any number (combination)
#include<iostream>
using namespace std;

int factorial(int num){
  int fact = 1;
  for(int i=1; i<=num; i++){
    fact = fact*i;
  }
  return fact;
}
int nCr(int n, int r){
  int ans = factorial(n)/(factorial(r)*(factorial(n-r)));
  return ans;
}
int main() {
  int n,r;
  cin>> n >> r;
  cout << "Answer is: " << nCr(n,r);
  return 0;
}
