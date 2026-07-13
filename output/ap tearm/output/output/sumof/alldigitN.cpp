/*
Given a positive number n. Find the sum of all the digits of n.

Input: n = 687
Output: 21
Explanation: Sum of 687's digits: 6 + 8 + 7 = 21
Input: n = 12
Output 3
Explanation: Sum of 12's digits: 1 + 2 = 3
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    int sum = 0;
    while(n > 0){
        sum += n%10;
        n /= 10;
        cout<<sum;

    }
}