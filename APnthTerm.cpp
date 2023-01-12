#include<iostream>
using namespace std;

int nthTerm(int n){
  return (3*n) + 7;
}

int main(){
    int n;
  cin >> n;
  cout << "The nth term of AP is " << nthTerm(n);
  return 0;
}
