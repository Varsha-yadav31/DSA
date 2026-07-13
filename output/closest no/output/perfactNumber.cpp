/*
Given: ek number N

Check karna hai:
👉 kya N ke har digit ka factorial ka sum = N ?

Agar haan → return 1
Agar nahi → return 0

Is type ke number ko Strong / Perfect (is question me) bolte hain.

🧠 Step-by-Step THINKING (dimaag me kaise sochein)
Example: N = 145

Main pehle sochta hoon:

145 = 1, 4, 5


Ab har digit ka factorial:

1! = 1
4! = 24
5! = 120


Sum:

1 + 24 + 120 = 145


👉 SAME NUMBER
✔️ Answer = 1

🟡 Ab PROGRAM ka SOCHNE ka TARIKA
Step 1️⃣ Original number ko save karo

Kyuki hum N ko tod-fod denge.

int original = N;

Step 2️⃣ Sum ko 0 se start karo
int sum = 0;

Step 3️⃣ Jab tak number khatam na ho
while (N > 0)


Matlab:
jab tak digits bache hue hain

Step 4️⃣ Last digit nikalo
int d = N % 10;


Example:

145 % 10 = 5

Step 5️⃣ Digit ka factorial nikalo

Factorial ka matlab:

5! = 5 × 4 × 3 × 2 × 1


Iske liye function:

int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

Step 6️⃣ Factorial ko sum me add karo
sum = sum + factorial(d);

Step 7️⃣ Last digit hatao
N = N / 10;


Example:

145 / 10 = 14

Step 8️⃣ Loop repeat hota rahega

145 → 14 → 1 → 0
Digits khatam ✔️

Step 9️⃣ Last me compare karo
if(sum == original)
    return 1;
else
    return 0;*/ 




class Solution {
    public:
      
      int factorial(int n) {
          int fact = 1;
          for (int i = 1; i <= n; i++) {
              fact *= i;
          }
          return fact;
      }
  
      int isPerfect(int N) {
          int original = N;
          int sum = 0;
  
          while (N > 0) {
              int d = N % 10;          // digit nikala
              sum += factorial(d);     // factorial add
              N = N / 10;              // digit remove
          }
  
          if (sum == original)
              return 1;
          else
              return 0;
      }
  };
  

  