//1281. Subtract the Product and Sum of Digits of an Integer: 
//Given an integer number n, return the difference between the product of its digits and the sum of its digits.

class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1;
        int sum = 0;
        while(n!=0){

            int digit = n%10;
            product = product * digit;
            sum = sum + digit;
            n = n/10;

        }
        int answer = product - sum;
        return answer;
        
    }
};
