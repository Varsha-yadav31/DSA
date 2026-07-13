/*armstrong no. is that nowhich sum of there cube is itself the no 
For Ex: 153 = (1^3)+(5^3)+(3^3)
            =  153
*/

#include <iostream>
using namespace std;

class Solution {
  public:
    bool armstrongNumber(int n) {
        int original = n;
        int sum = 0;

        while (n > 0) {
            int d = n % 10;
            sum += d * d * d;
            n = n / 10;
        }

        return sum == original;
    }
};

int main() {
    int n;
    cin >> n;

    Solution obj;
    if (obj.armstrongNumber(n))
        cout << "true";
    else
        cout << "false";

    return 0;
}


/*
2nd methord

class Solution {
  public:
    bool armstrongNumber(int n) {
        int original = n;
        int sum = 0;

        while (n > 0) {
            int d = n % 10;
            sum += d * d * d;
            n = n / 10;
        }

        return sum == original;
    }
};
*/