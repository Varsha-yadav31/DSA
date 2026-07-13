/*
A Krishnamurthy number is a number whose sum of the factorial
 of digits is equal to the number itself. Given a number 
 N as input. Print "YES" if it's a Krishnamurthy Number, else
  Print "NO".



*/

class Solution {
    public:
      int fact(int n) {
          int f = 1;
          for(int i = 1; i <= n; i++) {
              f *= i;
          }
          return f;
      }
  
      string isKrishnamurthy(int N) {
          int original = N;
          int sum = 0;
  
          while(N > 0) {
              int digit = N % 10;
              sum += fact(digit);
              N /= 10;
          }
  
          if(sum == original)
              return "YES";
          else
              return "NO";
      
            }
  };
  