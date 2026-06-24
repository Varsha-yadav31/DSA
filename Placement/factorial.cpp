#include <iostream>
#include <string>
using namespace std;

int fac(int n) {
   
    if (n == 0 )
        return 1;

    int r = fac(n-1);
    int ans = n*r;
    return ans;
}

int main() {
    int n;
    cin >> n;

    cout << fac(n);

    return 0;
}












