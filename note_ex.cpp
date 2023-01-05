/* HW you are given denominations of rupees - 100,50,20 and 1. Given an integer, find out how many denominations will be required to make that amount up.
*/
#include <iostream>
using namespace std;

int main(){
  int amount;
  cin >> amount;
  int Rs100, Rs50, Rs20, Rs1;
  
  switch(1){
    
    case 1: Rs100 = amount/100;
    amount = amount%100;
    cout << "no. of 100Rs required= " << Rs100 << endl;   
    
    case 2: Rs50 = amount/50;
    amount = amount%50;
    cout << "no. of 50Rs required= " << Rs50 << endl;   
    
    case 3: Rs20 = amount/20;
    amount = amount%20;
    cout << "no. of 20Rs required= " << Rs20 << endl;    
     
    case 4: Rs1 = amount/1;
    amount = amount%1;
    cout << "no. of 1Rs required= " << Rs1 << endl;   
  }
  return 0;
};
