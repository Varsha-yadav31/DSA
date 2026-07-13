/*Given two integers n and m (m != 0). Find the number
 closest to n and divisible by m. If there is more than one 
 such number, then output the one having maximum absolute value.

Examples: 

Input: n = 13, m = 4
Output: 12
Explanation: 12 is the closest to 13, divisible by 4.

Input: n = -15, m = 6
Output: -18
Explanation: Both -12 and -18 are closest to -15, but -18 has
 the maximum absolute value.*/



#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int low = (n/m)*m;
    int high = low+m;
    int ans;
    if(abs(n -low)< abs(n-high)){
        ans = low;
    }else if(abs(n-low)> abs(n - high)){
        ans = high;
    }else{
        ans = abs(low)>abs(high)?low:high;
    }
    return 0;

}



/*class Solution {
  public:
    int closestNumber(int n, int m) {
        m = abs(m);   // m ka sign ignore karo

        int low = (n / m) * m;
        int high;

        // n ke sign ke hisaab se upar/neeche wala multiple
        if (n >= 0)
            high = low + m;
        else
            high = low - m;

        // distance compare
        if (abs(n - low) < abs(n - high))
            return low;
        else if (abs(n - low) > abs(n - high))
            return high;
        else
            return abs(low) > abs(high) ? low : high;
    }
};
*/