#include<iostream>
using namespace std;

void toh(int n, int a, int b, int c){
  if(n>0){
  toh(n-1, a, c, b);
    cout << a << "to" << c << endl;
  toh(n-1, b, a, c);
  }
}
int main(){
int A = 1,
    B = 2,
    C = 3, n;
  cout << "Enter the no. of disks: ";
  cin >> n;
  toh(n,A,B,C);
    return 0;
}
