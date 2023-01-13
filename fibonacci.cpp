//nth term of fibonacci series 


#include<iostream>
using namespace std;

int nthTerm(int n){
    int a = 0;
    int b = 1;
  for(int i = 2; i<n; i++){
      int next = a + b;
      a = b;
      b = next;
  }
  return b;
}
int main(){
    int n;
    cin >> n;
    cout << "The " << n << "th term is " << nthTerm(n);
  return 0;
}
